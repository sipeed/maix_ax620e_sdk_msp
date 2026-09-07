/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "i2c.h"
#include "ax_sensor_struct.h"
#include "ax_base_type.h"

#include "ax_isp_common.h"
#include "isp_sensor_internal.h"
#include "isp_sensor_types.h"

#include "os04a10.h"
#include "os04a10_settings.h"
#include "os04a10_reg.h"
#include "os04a10_ae_ctrl.h"

typedef struct {
    AX_BOOL enabled;
    AX_BOOL binning;
    AX_U32 x;
    AX_U32 y;
    AX_U32 width;
    AX_U32 height;
    AX_F32 fps;
} OS04A10_CROP_CFG_T;

static OS04A10_CROP_CFG_T g_os04a10_crop[AX_VIN_MAX_PIPE_NUM];

AX_SYS_API_PUBLIC AX_S32 os04a10_set_crop(ISP_PIPE_ID nPipeId,
                                          AX_U32 x, AX_U32 y,
                                          AX_U32 width, AX_U32 height,
                                          AX_F32 fps)
{
    AX_F32 max_fps;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    if (width == 0 && height == 0) {
        memset(&g_os04a10_crop[nPipeId], 0, sizeof(g_os04a10_crop[nPipeId]));
        return AX_SNS_SUCCESS;
    }
    max_fps = (width <= 640 && height <= 360) ? 360.0f :
              (width <= 1344 && height <= 760) ? 180.0f : 60.0f;
    /* Use 2x2 analog binning for every supported binned geometry.  This
     * preserves maximum FOV at 1344x760 and makes smaller ROIs binned crops. */
    AX_BOOL binning = (width <= 1344 && height <= 760) ? AX_TRUE : AX_FALSE;
    AX_U32 physical_width = binning ? 2 * (width + 8) : width + 16;
    AX_U32 physical_height = binning ? 2 * height + 8 : height + 16;
    if ((width < 256) || (width > 2688) || (width % 16 != 0) ||
        (height < 20) || (height > 1520) || (height % 2 != 0) ||
        (x % 2 != 0) || (y % 2 != 0) || x + physical_width > 2704 || y + physical_height > 1536 ||
        fps < AX_SNS_FPS_MIN || fps > max_fps) {
        SNS_ERR("invalid crop [%u,%u,%u,%u] fps %.2f (max %.2f)\n",
                x, y, width, height, fps, max_fps);
        return AX_SNS_ERR_NOT_SUPPORT;
    }
    /* The closed-source AX ISP dehaze path faults for this binned ROI class.
     * Keep the direct sensor API consistent with Camera::set_windowing().
     * Check it after generic geometry validation so malformed inputs retain
     * the usual invalid-crop diagnostic. */
    if (width < 1024 && height > 464) {
        SNS_ERR("crop [%u,%u,%u,%u] unsupported by AX ISP; use height <= 464 or width >= 1024\n",
                x, y, width, height);
        return AX_SNS_ERR_NOT_SUPPORT;
    }
    g_os04a10_crop[nPipeId].enabled = AX_TRUE;
    g_os04a10_crop[nPipeId].binning = binning;
    g_os04a10_crop[nPipeId].x = x;
    g_os04a10_crop[nPipeId].y = y;
    g_os04a10_crop[nPipeId].width = width;
    g_os04a10_crop[nPipeId].height = height;
    g_os04a10_crop[nPipeId].fps = fps;
    return AX_SNS_SUCCESS;
}

AX_BOOL os04a10_get_crop_timing(ISP_PIPE_ID nPipeId, AX_U32 *height, AX_F32 *fps)
{
    if (nPipeId < 0 || nPipeId >= AX_VIN_MAX_PIPE_NUM || !g_os04a10_crop[nPipeId].enabled) {
        return AX_FALSE;
    }
    if (height) {
        *height = g_os04a10_crop[nPipeId].height;
    }
    if (fps) {
        *fps = g_os04a10_crop[nPipeId].fps;
    }
    return AX_TRUE;
}

AX_BOOL os04a10_is_high_speed(ISP_PIPE_ID nPipeId)
{
    AX_F32 fps;
    AX_U32 width;
    if (nPipeId < 0 || nPipeId >= AX_VIN_MAX_PIPE_NUM || !g_os04a10_crop[nPipeId].enabled) {
        return AX_FALSE;
    }
    width = g_os04a10_crop[nPipeId].width;
    fps = g_os04a10_crop[nPipeId].fps;
    /* The 108 MHz PLL is required once the requested rate exceeds the
     * 72 MHz timing range.  The old small-ROI threshold used `>240`, which
     * left an exact 240-fps request at 72 MHz and produced VTS=410 (the
     * 360-fps timing), corrupting the frame. */
    return (width <= 1344 && g_os04a10_crop[nPipeId].height <= 760 &&
            fps > 120.0f) ? AX_TRUE : AX_FALSE;
}

AX_S32 os04a10_apply_crop(ISP_PIPE_ID nPipeId)
{
    OS04A10_CROP_CFG_T *crop = &g_os04a10_crop[nPipeId];
    AX_U32 x_end;
    AX_U32 y_end;
    AX_U32 readout_width;
    AX_U32 readout_height;
    AX_S32 ret = AX_SNS_SUCCESS;
    if (!crop->enabled) {
        return ret;
    }
    /* The public Ingenic OS04A10 binned table supplies the
     * paired analog/formatter delta below. Ambarella's validated 90-fps
     * table supplies the separate 108 MHz PLL delta for high-speed tiers. */
    if (crop->binning) {
        AX_U32 fmt0 = 0, fmt1 = 0;
        ret = os04a10_read_register(nPipeId, 0x3820, &fmt0);
        ret |= os04a10_read_register(nPipeId, 0x3821, &fmt1);
        if (ret != AX_SNS_SUCCESS) {
            return ret;
        }
        ret |= os04a10_write_register(nPipeId, 0x3714, 0x04);
        ret |= os04a10_write_register(nPipeId, 0x37cf, 0x04);
        ret |= os04a10_write_register(nPipeId, 0x3814, 0x03);
        ret |= os04a10_write_register(nPipeId, 0x3815, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x3816, 0x03);
        ret |= os04a10_write_register(nPipeId, 0x3817, 0x01);
        /* 2x2 binning leaves 8 horizontal and 4 vertical guard pixels after
         * subsampling.  The horizontal formatter offset must remain odd to
         * retain native RGGB.  Full-width binned output (1280..1344 pixels)
         * also needs the odd vertical offset.  Smaller binned ROIs require
         * the even vertical offset: 0x3813 = 0x03 produces a purple Bayer
         * phase at 640, 768, 1024, and 1152 pixels, while 0x02 is verified
         * to restore the correct RGGB image. */
        ret |= os04a10_write_register(nPipeId, 0x3811, 0x05);
        ret |= os04a10_write_register(nPipeId, 0x3813,
                                      crop->width < 1280 ? 0x02 : 0x03);
        ret |= os04a10_write_register(nPipeId, 0x3820, fmt0);
        /* Keep the formatter orientation from the native initialization
         * table.  The normal OS04A10 table supplies 0x3821 = 0x00 (RGGB);
         * the odd output offsets above retain that phase after 2x2 binning.
         * Do not synthesize 0x09 here: it changes the RAW phase to BGGR.
         * Preserving fmt1 also keeps a caller-selected orientation intact. */
        ret |= os04a10_write_register(nPipeId, 0x3821, fmt1);
        ret |= os04a10_write_register(nPipeId, 0x4009, 0x07);
        ret |= os04a10_write_register(nPipeId, 0x4051, 0x03);
        ret |= os04a10_write_register(nPipeId, 0x4601, 0x50);
        ret |= os04a10_write_register(nPipeId, 0x4603, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x460c, 0x50);
    } else {
        AX_U32 fmt0 = 0, fmt1 = 0;
        ret = os04a10_read_register(nPipeId, 0x3820, &fmt0);
        ret |= os04a10_read_register(nPipeId, 0x3821, &fmt1);
        if (ret != AX_SNS_SUCCESS) {
            return ret;
        }
        ret |= os04a10_write_register(nPipeId, 0x3714, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x37cf, 0x02);
        ret |= os04a10_write_register(nPipeId, 0x3814, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x3815, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x3816, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x3817, 0x01);
        ret |= os04a10_write_register(nPipeId, 0x3811, 0x09);
        ret |= os04a10_write_register(nPipeId, 0x3813, 0x09);
        ret |= os04a10_write_register(nPipeId, 0x3820, fmt0 & ~0x01U);
        /* A native crop must retain the initialized sensor orientation. */
        ret |= os04a10_write_register(nPipeId, 0x3821, fmt1);
        ret |= os04a10_write_register(nPipeId, 0x4009, 0x11);
        ret |= os04a10_write_register(nPipeId, 0x4051, 0x07);
        ret |= os04a10_write_register(nPipeId, 0x4601, 0x30);
        ret |= os04a10_write_register(nPipeId, 0x4603, 0x00);
        ret |= os04a10_write_register(nPipeId, 0x460c, 0x60);
    }
    if (os04a10_is_high_speed(nPipeId)) {
        ret |= os04a10_write_register(nPipeId, 0x0305, 0x5c);
        ret |= os04a10_write_register(nPipeId, 0x0325, 0xd8);
        ret |= os04a10_write_register(nPipeId, 0x3426, 0x50);
        ret |= os04a10_write_register(nPipeId, 0x3427, 0x15);
        ret |= os04a10_write_register(nPipeId, 0x3428, 0x50);
        ret |= os04a10_write_register(nPipeId, 0x4800, 0x44);
    }
    /* Vendor modes read a guarded window (2704x1536 for the native path).
     * Binned ROIs use two sensor rows per output row plus an 8-line guard;
     * non-binned ROIs retain the 16-pixel guard used by the native path. */
    readout_width = crop->binning ? 2 * (crop->width + 8) : crop->width + 16;
    readout_height = crop->binning ? 2 * crop->height + 8 : crop->height + 16;
    x_end = crop->x + readout_width - 1;
    y_end = crop->y + readout_height - 1;
    ret |= os04a10_write_register(nPipeId, 0x3800, (crop->x >> 8) & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3801, crop->x & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3802, (crop->y >> 8) & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3803, crop->y & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3804, (x_end >> 8) & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3805, x_end & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3806, (y_end >> 8) & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3807, y_end & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3808, (crop->width >> 8) & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x3809, crop->width & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x380a, (crop->height >> 8) & 0xff);
    ret |= os04a10_write_register(nPipeId, 0x380b, crop->height & 0xff);
    return ret;
}

/* default param */
#ifdef USE_DEFAULT_PARAM
#include "os04a10_sdr.h"
#include "os04a10_hdr_2x.h"
#endif

#include "ax_module_version.h"
/****************************************************************************
 * golbal variables  and macro definition                                   *
 ****************************************************************************/

SNS_STATE_OBJ *g_szOs04a10Ctx[AX_VIN_MAX_PIPE_NUM] = {AX_NULL};

const char axera_sns_os04a10_version[] = AXERA_MODULE_VERSION;
extern AX_U8 gOs04a10SlaveMode[AX_VIN_MAX_PIPE_NUM];

/****************************************************************************
 * Internal function definition
 ****************************************************************************/
AX_S32 os04a10_ctx_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 ret = 0;

    SNS_DBG("os04a10 os04a10_ctx_init. ret = %d\n", ret);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        sns_obj = (SNS_STATE_OBJ *)calloc(1, sizeof(SNS_STATE_OBJ));
        if (AX_NULL == sns_obj) {
            SNS_ERR("malloc g_szOs04a10Ctx failed\n");
            return AX_SNS_ERR_NOMEM;
        }
    }

    memset(sns_obj, 0, sizeof(SNS_STATE_OBJ));

    SENSOR_SET_CTX(nPipeId, sns_obj);

    return AX_SNS_SUCCESS;
}

AX_VOID os04a10_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

/****************************************************************************
 * sensor control function
 ****************************************************************************/
AX_S32 os04a10_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId)
{
    AX_U32 sensor_id = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        return AX_SNS_ERR_NOT_INIT;
    }

    if (sns_obj->sns_id == 0) {
        sensor_id |= os04a10_reg_read(nPipeId, OS04A10_SENSOR_ID_REG_H) << 16;
        sensor_id |= os04a10_reg_read(nPipeId, OS04A10_SENSOR_ID_REG_M) << 8;
        sensor_id |= os04a10_reg_read(nPipeId, OS04A10_SENSOR_ID_REG_L);

        SNS_DBG("os04a10 id: 0x%x\n", sensor_id);

        if (sensor_id != OS04A10_SENSOR_ID) {
            SNS_ERR("Failed to read sensor os04a10 id:0x%x\n", sensor_id);
            return AX_SNS_ERR_UNKNOWN;
        }
        sns_obj->sns_id = sensor_id;
        *pSnsId = sensor_id;
    } else {
        *pSnsId = sns_obj->sns_id;
    }

    return AX_SNS_SUCCESS;
}

static void os04a10_init(ISP_PIPE_ID nPipeId)
{
    AX_S32 nRet = 0;
    AX_S32 nSnsId = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM)) {
        return;
    }

    /* 1. contex init */
    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = os04a10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04a10_ctx_init failed!\n");
            return;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    /* 2. i2c init */
    os04a10_sensor_i2c_init(nPipeId);

    nRet = os04a10_get_chipid(nPipeId, &nSnsId);
    if (nRet != AX_SNS_SUCCESS) {
        SNS_ERR("can't find os04a10 sensor id.\n");
    } else {
        SNS_DBG("os04a10 check chip id success.\n");
    }

    /* 3. config settings  */
    os04a10_write_settings(nPipeId);
    if (os04a10_apply_crop(nPipeId) != AX_SNS_SUCCESS) {
        SNS_ERR("apply sensor crop failed\n");
    }

    os04a10_get_sensor_stream_ctrl(nPipeId);
    /* 4. refresh ae param */
    os04a10_cfg_aec_param(nPipeId);

    /* 5. refresh ae regs table */
    os04a10_sns_refresh_all_regs_from_tbl(nPipeId);

    sns_obj->bSyncInit = AX_FALSE;

    return;
}

static void os04a10_exit(ISP_PIPE_ID nPipeId)
{
    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM)) {
        return;
    }

    os04a10_sensor_i2c_exit(nPipeId);
    os04a10_ctx_exit(nPipeId);

    return;
}


AX_S32 os04a10_sensor_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_S32 result = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (1 == on) {
        result = os04a10_write_register(nPipeId, 0x0100, 0x01); // stream on
        SNS_DBG("sensor stream on!\n");
    } else {
        result = os04a10_write_register(nPipeId, 0x0100, 0x00); // stream off
        usleep(50 * 1000);
        SNS_DBG("sensor stream off!\n");
    }
    if (result) {
        return result;
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os04a10_sensor_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup)
{
    AX_S32 result = -1;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (AX_SNS_EVENT_WAKE_UP == eSleepWakeup) {
        os04a10_hw_reset(35, 1);
        result = os04a10_write_register(nPipeId, 0x0100, 0x01); // sleep
        SNS_DBG("sensor sleep!\n");
    } else if (AX_SNS_EVENT_SLEEP == eSleepWakeup){
        result = os04a10_write_register(nPipeId, 0x0100, 0x00); // wakeup
        os04a10_hw_reset(35, 0);
        SNS_DBG("sensor wakeup!\n");
    }

    if (result) {
        return result;
    }

    return AX_SNS_SUCCESS;
}

static AX_S32 os04a10_sensor_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
{
    AX_S32 width = 0;
    AX_S32 height = 0;
    AX_S32 hdrmode = 0;
    AX_S32 nRawType = 0;
    AX_S32 framerate = 25; // init value to 30fps, void null fps gives.
    AX_F32 setting_fps = 30.0f;
    AX_SNS_MASTER_SLAVE_E   MasterSlaveSel;
    AX_S32 sns_setting_index = 0;
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(sns_mode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = os04a10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04a10_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    sns_obj->bSyncInit = AX_FALSE;
    width = sns_mode->nWidth;
    height = sns_mode->nHeight;
    framerate = sns_mode->fFrameRate;
    nRawType = sns_mode->eRawType;
    MasterSlaveSel = sns_mode->eMasterSlaveSel;

    if ((AX_SNS_LINEAR_MODE != sns_mode->eSnsMode) &&
        (AX_SNS_HDR_2X_MODE != sns_mode->eSnsMode) &&
        (AX_SNS_HDR_3X_MODE != sns_mode->eSnsMode)) {
        hdrmode = AX_SNS_LINEAR_MODE;
    } else {
        hdrmode = sns_mode->eSnsMode;
    }

    if (hdrmode == AX_SNS_LINEAR_MODE && nRawType == 10 && MasterSlaveSel == AX_SNS_MASTER &&
        ((width == 2688 && height == 1520) || g_os04a10_crop[nPipeId].enabled)) {
        if (framerate > 30.0f || g_os04a10_crop[nPipeId].enabled) {
            sns_setting_index = e_OS04A10_4lane_2688x1520_10bit_Linear_60fps;
            setting_fps = g_os04a10_crop[nPipeId].enabled ?
                          g_os04a10_crop[nPipeId].fps : 60.0f;
        } else {
            sns_setting_index = e_OS04A10_4lane_2688x1520_10bit_Linear_30fps;
        }
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_LINEAR_MODE && nRawType == 12 && MasterSlaveSel == AX_SNS_MASTER) {
        sns_setting_index = e_OS04A10_4lane_2688x1520_12bit_Linear_30fps;
   } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_LINEAR_MODE && nRawType == 10 && MasterSlaveSel == AX_SNS_SYNC_MASTER) {
        sns_setting_index = e_OS04A10_2lane_SyncMaster_2688x1520_10bit_Linear_30fps;
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_LINEAR_MODE && nRawType == 10 && MasterSlaveSel == AX_SNS_SYNC_SLAVE) {
        sns_setting_index = e_OS04A10_2lane_SyncSlave_2688x1520_10bit_Linear_30fps;
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_HDR_2X_MODE  && nRawType == 10 && MasterSlaveSel == AX_SNS_MASTER) {
        sns_setting_index = e_OS04A10_4lane_2688x1520_10bit_2Stagger_HDR_30fps;
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_HDR_2X_MODE && MasterSlaveSel == AX_SNS_SYNC_MASTER) {
        sns_setting_index = e_OS04A10_2lane_SyncMaster_2688x1520_10bit_2Stagger_HDR_30fps;
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_HDR_2X_MODE && MasterSlaveSel == AX_SNS_SYNC_SLAVE) {
        sns_setting_index = e_OS04A10_2lane_SyncSlave_2688x1520_10bit_2Stagger_HDR_30fps;
    } else {
        SNS_ERR("it's not supported. [%dx%d mode=%d fps=%d raw_type=%u] \n",
                width, height, hdrmode, framerate, nRawType);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    /* optional, Not Recommended. if nSettingIndex > 0 will take effect */
    if (sns_mode->nSettingIndex > 0) {
        sns_setting_index = sns_mode->nSettingIndex;
    }

    SNS_DBG("nPipeId=%u, sns_setting_index %u!\n", nPipeId, sns_setting_index);
    sns_obj->eImgMode = sns_setting_index;
    sns_obj->sns_mode_obj.eHDRMode = hdrmode;
    sns_obj->sns_mode_obj.nWidth = width;
    sns_obj->sns_mode_obj.nHeight = height;
    sns_obj->sns_mode_obj.fFrameRate = setting_fps;
    sns_obj->sns_mode_obj.eMasterSlaveSel = MasterSlaveSel;
    if(sns_obj->sns_mode_obj.eMasterSlaveSel == AX_SNS_SYNC_SLAVE) {
        gOs04a10SlaveMode[nPipeId] = AX_TRUE;
    }
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

AX_S32 os04a10_sensor_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pSnsMode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    memcpy(pSnsMode, &sns_obj->sns_attr_param, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}


static AX_S32 os04a10_testpattern_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SNS_DBG("test pattern enable: %d\n", on);
    if (1 == on) {
        /* enable test-pattern */
        os04a10_write_register(nPipeId, 0x5080, 0x80); /* long  frame*/
        os04a10_write_register(nPipeId, 0x50c0, 0x80); /* short frame*/
    } else {
        /* disable test-pattern */
        os04a10_write_register(nPipeId, 0x5080, 0x00); /* long  frame*/
        os04a10_write_register(nPipeId, 0x50c0, 0x00); /* short frame*/
    }

    return AX_SNS_SUCCESS;
}


/****************************************************************************
 * get module default parameters function
 ****************************************************************************/
static AX_S32 os04a10_get_isp_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_DEFAULT_PARAM_T *ptDftParam)
{
#ifdef USE_DEFAULT_PARAM
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_SNS_HDR_MODE_E nHdrmode;

    SNS_CHECK_PTR_VALID(ptDftParam);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);


    memset(ptDftParam, 0, sizeof(AX_SENSOR_DEFAULT_PARAM_T));

    nHdrmode = sns_obj->sns_mode_obj.eHDRMode;

    SNS_DBG(" current hdr mode %d \n", nHdrmode);
    switch (nHdrmode) {
    case AX_SNS_LINEAR_MODE:
        /* TODO: Users configure their own default parameters */
        AX_SENSOR_SET_DEFAULT_LINEAR_PARAM();
        break;

    case AX_SNS_HDR_2X_MODE:
        /* TODO: Users configure their own default parameters */
        AX_SENSOR_SET_DEFAULT_HDR_2X_PARAM();
        break;

    case AX_SNS_HDR_3X_MODE:
        /* TODO: Users configure their own default parameters */
        break;

    case AX_SNS_HDR_4X_MODE:
        /* TODO: Users configure their own default parameters */
        break;
    default:
        SNS_ERR(" hdr mode %d error\n", nHdrmode);
        break;
    }

    return AX_SNS_SUCCESS;
#else
    return AX_SNS_ERR_NOT_SUPPORT;
#endif
}

/****************************************************************************
 * get 3a default parameters function
 ****************************************************************************/
static AX_S32 os04a10_get_3a_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_3A_DEFAULT_PARAM_T *ptDftParam)
{
#ifdef USE_DEFAULT_PARAM
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_SNS_HDR_MODE_E nHdrmode;

    SNS_CHECK_PTR_VALID(ptDftParam);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);


    memset(ptDftParam, 0, sizeof(AX_SENSOR_3A_DEFAULT_PARAM_T));

    nHdrmode = sns_obj->sns_mode_obj.eHDRMode;

    SNS_DBG(" current hdr mode %d \n", nHdrmode);
    switch (nHdrmode) {
    case AX_SNS_LINEAR_MODE:
        /* TODO: Users configure their own default parameters */
        AX_SENSOR_SET_3A_DEFAULT_LINEAR_PARAM();
        break;

    case AX_SNS_HDR_2X_MODE:
        /* TODO: Users configure their own default parameters */
        AX_SENSOR_SET_3A_DEFAULT_HDR_2X_PARAM();
        break;

    case AX_SNS_HDR_3X_MODE:
        /* TODO: Users configure their own default parameters */
        break;

    case AX_SNS_HDR_4X_MODE:
        /* TODO: Users configure their own default parameters */
        break;
    default:
        SNS_ERR(" hdr mode %d error\n", nHdrmode);
        break;
    }

    return AX_SNS_SUCCESS;
#else
        return AX_SNS_ERR_NOT_SUPPORT;
#endif
}

AX_S32 os04a10_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(ptBlackLevel);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    /* black level of linear mode */
    if (AX_SNS_LINEAR_MODE == sns_obj->sns_mode_obj.eHDRMode) {
        ptBlackLevel->nBlackLevel[0] = 1024;    /* linear mode 10bit sensor default blc 64(U10.0) --> 1024(U8.6) */
        ptBlackLevel->nBlackLevel[1] = 1024;
        ptBlackLevel->nBlackLevel[2] = 1024;
        ptBlackLevel->nBlackLevel[3] = 1024;
    } else {
        ptBlackLevel->nBlackLevel[0] = 1024;
        ptBlackLevel->nBlackLevel[1] = 1024;
        ptBlackLevel->nBlackLevel[2] = 1024;
        ptBlackLevel->nBlackLevel[3] = 1024;
    }

    return AX_SNS_SUCCESS;
}


static AX_S32 os04a10_get_temperature_info(ISP_PIPE_ID nPipeId, AX_S32 *nTemperature)
{
    AX_F32 fTempVal = 0.0;
    AX_U8 nTempInt = 0;
    AX_U8 nTempDec = 0;

    SNS_CHECK_PTR_VALID(nTemperature);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    nTempInt = os04a10_reg_read(nPipeId, 0x4F06);
    nTempDec = os04a10_reg_read(nPipeId, 0x4F07);

    /* -63.996(-3F.FF) to 192(C0.00)  U8.8b format */
    fTempVal = nTempInt + nTempDec/256.0;
    if ((nTempInt << 8 | nTempDec) > 0xC000) {
        fTempVal = -(fTempVal - 0xC0);
    }

    *nTemperature = (AX_S32)(fTempVal * 1000);

    SNS_DBG("nPipeId = %d, nTemperature = %f\n", nPipeId, *nTemperature/1000.0);

    return AX_SNS_SUCCESS;
}



AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnsos04a10Obj = {

    /* sensor ctrl */
    .pfn_sensor_reset                       = os04a10_reset,
    .pfn_sensor_chipid                      = os04a10_get_chipid,
    .pfn_sensor_init                        = os04a10_init,
    .pfn_sensor_exit                        = os04a10_exit,
    .pfn_sensor_streaming_ctrl              = os04a10_sensor_streaming_ctrl,
    .pfn_sensor_sleep_wakeup                = os04a10_sensor_sleep_wakeup,
    .pfn_sensor_testpattern                 = os04a10_testpattern_ctrl,

    .pfn_sensor_set_mode                    = os04a10_sensor_set_mode,
    .pfn_sensor_get_mode                    = os04a10_sensor_get_mode,

    .pfn_sensor_set_fps                     = os04a10_set_fps,
    .pfn_sensor_get_fps                     = os04a10_get_fps,
    .pfn_sensor_set_slaveaddr               = os04a10_set_slaveaddr,

    /* communication : register read/write */
    .pfn_sensor_set_bus_info                = os04a10_set_bus_info,
    .pfn_sensor_write_register              = os04a10_write_register,
    .pfn_sensor_read_register               = os04a10_read_register,

    /* default param */
    .pfn_sensor_get_isp_default_params      = os04a10_get_isp_default_params,
    .pfn_sensor_get_3a_default_params       = os04a10_get_3a_default_params,
    .pfn_sensor_get_black_level             = os04a10_get_black_level,

    /* ae ctrl */
    .pfn_sensor_get_hw_exposure_params      = os04a10_get_hw_exposure_params,
    .pfn_sensor_get_gain_table              = os04a10_get_sensor_gain_table,
    .pfn_sensor_set_again                   = os04a10_set_again,
    .pfn_sensor_set_dgain                   = os04a10_set_dgain,
    .pfn_sensor_hcglcg_ctrl                 = os04a10_hcglcg_ctrl,

    .pfn_sensor_set_integration_time        = os04a10_set_integration_time,
    .pfn_sensor_get_integration_time_range  = os04a10_get_integration_time_range,
    .pfn_sensor_set_slow_fps                = os04a10_set_slow_fps,
    .pfn_sensor_get_slow_shutter_param      = os04a10_get_slow_shutter_param,
    .pfn_sensor_get_sns_reg_info            = os04a10_ae_get_sensor_reg_info,
    .pfn_sensor_set_lfhdr_mode              = os04a10_ae_set_lfhdr_mode,
    .pfn_sensor_set_wbgain                  = AX_NULL,
    .pfn_sensor_get_temperature_info        = os04a10_get_temperature_info,
};
