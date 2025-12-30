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

#include "os04a10_settings.h"
#include "os04a10_reg.h"
#include "os04a10_ae_ctrl_sf.h"

/* default param */
#ifdef USE_DEFAULT_PARAM
#include "os04a10_sdr.h"
#include "os04a10_hdr_2x.h"
#endif

#include "ax_module_version.h"
/****************************************************************************
 * golbal variables  and macro definition                                   *
 ****************************************************************************/

extern SNS_STATE_OBJ *g_szOs04a10Ctx[AX_VIN_MAX_PIPE_NUM];


#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = g_szOs04a10Ctx[dev])
#define SENSOR_SET_CTX(dev, pstCtx) (g_szOs04a10Ctx[dev] = pstCtx)
#define SENSOR_RESET_CTX(dev) (g_szOs04a10Ctx[dev] = AX_NULL)

static const char axera_sns_os04a10_version[] = AXERA_MODULE_VERSION;

/****************************************************************************
 * Internal function definition
 ****************************************************************************/
static AX_S32 os04a10_ctx_init(ISP_PIPE_ID nPipeId)
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

static AX_VOID os04a10_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

/****************************************************************************
 * sensor control function
 ****************************************************************************/
static AX_S32 os04a10_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId)
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

    /* 4. refresh ae param */
    os04a10_cfg_aec_param_sf(nPipeId);

    /* 5. refresh ae regs table */
    os04a10_sns_refresh_all_regs_from_tbl_sf(nPipeId);

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


static AX_S32 os04a10_sensor_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
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

static AX_S32 os04a10_sensor_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
{
    AX_S32 width = 0;
    AX_S32 height = 0;
    AX_S32 hdrmode = 0;
    AX_S32 nRawType = 0;
    AX_S32 framerate = 25; // init value to 30fps, void null fps gives.
    AX_F32 setting_fps = 30.0f;
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

    if ((AX_SNS_LINEAR_MODE != sns_mode->eSnsMode) &&
        (AX_SNS_HDR_2X_MODE != sns_mode->eSnsMode) &&
        (AX_SNS_HDR_3X_MODE != sns_mode->eSnsMode)) {
        hdrmode = AX_SNS_LINEAR_MODE;
    } else {
        hdrmode = sns_mode->eSnsMode;
    }

    if (width == 2688 && height == 1520 && hdrmode == AX_SNS_LINEAR_MODE && nRawType == 10) {
        sns_setting_index = e_OS04A10_4lane_2688x1520_10bit_Linear_30fps;
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_LINEAR_MODE && nRawType == 12) {
        sns_setting_index = e_OS04A10_4lane_2688x1520_12bit_Linear_30fps;
    } else if (width == 2688 && height == 1520 && hdrmode == AX_SNS_HDR_2X_MODE  && nRawType == 10) {
        sns_setting_index = e_OS04A10_4lane_2688x1520_10bit_2Stagger_HDR_30fps;
    } else {
        SNS_ERR("it's not supported. [%dx%d mode=%d fps=%d raw_type=%d] \n",
                width, height, hdrmode, framerate, nRawType);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    /* optional, Not Recommended. if nSettingIndex > 0 will take effect */
    if (sns_mode->nSettingIndex > 0) {
        sns_setting_index = sns_mode->nSettingIndex;
    }

    SNS_DBG("nPipeId=%d, sns_setting_index %d!\n", nPipeId, sns_setting_index);
    sns_obj->eImgMode = sns_setting_index;
    sns_obj->sns_mode_obj.eHDRMode = hdrmode;
    sns_obj->sns_mode_obj.nWidth = width;
    sns_obj->sns_mode_obj.nHeight = height;
    sns_obj->sns_mode_obj.fFrameRate = framerate;
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

static AX_S32 os04a10_sensor_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pSnsMode);
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

    memset(ptDftParam, 0, sizeof(AX_SENSOR_DEFAULT_PARAM_T));

    //XXX Long/Short frame mode force use SDR params
    nHdrmode = AX_SNS_LINEAR_MODE; //sns_obj->sns_mode_obj.eHDRMode;

    SNS_DBG(" current hdr mode %d \n", nHdrmode);

    switch (nHdrmode) {
    case AX_SNS_LINEAR_MODE:
        /* TODO: Users configure their own default parameters */
        ptDftParam->ptDpc           = (typeof(ptDftParam->ptDpc))&dpc_param_sdr;
        ptDftParam->ptBlc           = (typeof(ptDftParam->ptBlc))&blc_param_sdr;
        ptDftParam->ptCsc           = (typeof(ptDftParam->ptCsc))&csc_param_sdr;
        ptDftParam->ptCa            = (typeof(ptDftParam->ptCa))&ca_param_sdr;
        ptDftParam->ptDemosaic      = (typeof(ptDftParam->ptDemosaic))&demosaic_param_sdr;
        ptDftParam->ptGic           = (typeof(ptDftParam->ptGic))&gic_param_sdr;
        ptDftParam->ptFcc           = (typeof(ptDftParam->ptFcc))&fcc_param_sdr;
        ptDftParam->ptGamma         = (typeof(ptDftParam->ptGamma))&gamma_param_sdr;
        ptDftParam->ptCc            = (typeof(ptDftParam->ptCc))&cc_param_sdr;
        ptDftParam->ptRltm          = (typeof(ptDftParam->ptRltm))&rltm_param_sdr;
        ptDftParam->ptRaw2dnr       = (typeof(ptDftParam->ptRaw2dnr))&raw2dnr_param_sdr;
        ptDftParam->ptDehaze        = (typeof(ptDftParam->ptDehaze))&dehaze_param_sdr;
        ptDftParam->ptDepurple      = (typeof(ptDftParam->ptDepurple))&depurple_param_sdr;
        ptDftParam->ptLsc           = (typeof(ptDftParam->ptLsc))&lsc_param_sdr;
        ptDftParam->ptSharpen       = (typeof(ptDftParam->ptSharpen))&sharpen_param_sdr;
        ptDftParam->ptScm           = (typeof(ptDftParam->ptScm))&scm_param_sdr;
        ptDftParam->ptYnr           = (typeof(ptDftParam->ptYnr))&ynr_param_sdr;
        ptDftParam->ptCnr           = (typeof(ptDftParam->ptCnr))&cnr_param_sdr;
        ptDftParam->ptCcmp          = (typeof(ptDftParam->ptCcmp))&ccmp_param_sdr;
        ptDftParam->ptYcproc        = (typeof(ptDftParam->ptYcproc))&ycproc_param_sdr;
        ptDftParam->ptHs2dlut       = (typeof(ptDftParam->ptHs2dlut))&hs2dlut_param_sdr;
        ptDftParam->ptYcrt          = (typeof(ptDftParam->ptYcrt))&ycrt_param_sdr;
        ptDftParam->ptAinr          = (typeof(ptDftParam->ptAinr))&ainr_param_sdr;
        ptDftParam->ptYuv3dnr       = (typeof(ptDftParam->ptYuv3dnr))&yuv3dnr_param_sdr;
        ptDftParam->ptLdc           = (typeof(ptDftParam->ptLdc))&ldc_param_sdr;
        ptDftParam->ptClp           = (typeof(ptDftParam->ptClp))&clp_param_sdr;
        ptDftParam->ptDis           = (typeof(ptDftParam->ptDis))&dis_param_sdr;
        ptDftParam->pIspMeParam     = (typeof(ptDftParam->pIspMeParam))&me_param_sdr;
        ptDftParam->ptNuc           = (typeof(ptDftParam->ptNuc))&nuc_param_sdr;
        ptDftParam->ptScene         = (typeof(ptDftParam->ptScene))&scene_param_sdr;
        break;

    case AX_SNS_HDR_2X_MODE:
        /* TODO: Users configure their own default parameters */
        ptDftParam->ptDpc           = (typeof(ptDftParam->ptDpc))&dpc_param_hdr_2x;
        ptDftParam->ptBlc           = (typeof(ptDftParam->ptBlc))&blc_param_hdr_2x;
        ptDftParam->ptCsc           = (typeof(ptDftParam->ptCsc))&csc_param_hdr_2x;
        ptDftParam->ptCa            = (typeof(ptDftParam->ptCa))&ca_param_hdr_2x;
        ptDftParam->ptDemosaic      = (typeof(ptDftParam->ptDemosaic))&demosaic_param_hdr_2x;
        ptDftParam->ptGic           = (typeof(ptDftParam->ptGic))&gic_param_hdr_2x;
        ptDftParam->ptFcc           = (typeof(ptDftParam->ptFcc))&fcc_param_hdr_2x;
        ptDftParam->ptDepurple      = (typeof(ptDftParam->ptDepurple))&depurple_param_hdr_2x;
        ptDftParam->ptHdr           = (typeof(ptDftParam->ptHdr))&hdr_param_hdr_2x;
        ptDftParam->ptGamma         = (typeof(ptDftParam->ptGamma))&gamma_param_hdr_2x;
        ptDftParam->ptCc            = (typeof(ptDftParam->ptCc))&cc_param_hdr_2x;
        ptDftParam->ptRltm          = (typeof(ptDftParam->ptRltm))&rltm_param_hdr_2x;
        ptDftParam->ptRaw2dnr       = (typeof(ptDftParam->ptRaw2dnr))&raw2dnr_param_hdr_2x;
        ptDftParam->ptDehaze        = (typeof(ptDftParam->ptDehaze))&dehaze_param_hdr_2x;
        ptDftParam->ptLsc           = (typeof(ptDftParam->ptLsc))&lsc_param_hdr_2x;
        ptDftParam->ptSharpen       = (typeof(ptDftParam->ptSharpen))&sharpen_param_hdr_2x;
        ptDftParam->ptScm           = (typeof(ptDftParam->ptScm))&scm_param_hdr_2x;
        ptDftParam->ptYnr           = (typeof(ptDftParam->ptYnr))&ynr_param_hdr_2x;
        ptDftParam->ptCnr           = (typeof(ptDftParam->ptCnr))&cnr_param_hdr_2x;
        ptDftParam->ptCcmp          = (typeof(ptDftParam->ptCcmp))&ccmp_param_hdr_2x;
        ptDftParam->ptYcproc        = (typeof(ptDftParam->ptYcproc))&ycproc_param_hdr_2x;
        ptDftParam->ptHs2dlut       = (typeof(ptDftParam->ptHs2dlut))&hs2dlut_param_hdr_2x;
        ptDftParam->ptYcrt          = (typeof(ptDftParam->ptYcrt))&ycrt_param_hdr_2x;
        ptDftParam->ptAinr          = (typeof(ptDftParam->ptAinr))&ainr_param_hdr_2x;
        ptDftParam->ptYuv3dnr       = (typeof(ptDftParam->ptYuv3dnr))&yuv3dnr_param_hdr_2x;
        ptDftParam->ptLdc           = (typeof(ptDftParam->ptLdc))&ldc_param_hdr_2x;
        ptDftParam->ptClp           = (typeof(ptDftParam->ptClp))&clp_param_hdr_2x;
        ptDftParam->ptDis           = (typeof(ptDftParam->ptDis))&dis_param_hdr_2x;
        ptDftParam->pIspMeParam     = (typeof(ptDftParam->pIspMeParam))&me_param_hdr_2x;
        ptDftParam->ptNuc           = (typeof(ptDftParam->ptNuc))&nuc_param_hdr_2x;
        ptDftParam->ptScene         = (typeof(ptDftParam->ptScene))&scene_param_hdr_2x;
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

    memset(ptDftParam, 0, sizeof(AX_SENSOR_3A_DEFAULT_PARAM_T));

    //XXX Long/Short frame mode force use SDR params
    nHdrmode = AX_SNS_LINEAR_MODE; //sns_obj->sns_mode_obj.eHDRMode;

    SNS_DBG(" current hdr mode %d \n", nHdrmode);

    switch (nHdrmode) {
    case AX_SNS_LINEAR_MODE:
        /* TODO: Users configure their own default parameters */
        ptDftParam->ptAwbDftParam   = (typeof(ptDftParam->ptAwbDftParam))&awb_param_sdr;
        ptDftParam->ptAeDftParam    = (typeof(ptDftParam->ptAeDftParam))&ae_param_sdr;
        break;

    case AX_SNS_HDR_2X_MODE:
        /* TODO: Users configure their own default parameters */
        ptDftParam->ptAwbDftParam   = (typeof(ptDftParam->ptAwbDftParam))&awb_param_hdr_2x;
        ptDftParam->ptAeDftParam    = (typeof(ptDftParam->ptAeDftParam))&ae_param_hdr_2x;
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

static AX_S32 os04a10_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel)
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


AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnsos04a10ObjSf = {

    /* sensor ctrl */
    .pfn_sensor_reset                       = os04a10_reset,
    .pfn_sensor_chipid                      = os04a10_get_chipid,
    .pfn_sensor_init                        = os04a10_init,
    .pfn_sensor_exit                        = os04a10_exit,
    .pfn_sensor_streaming_ctrl              = os04a10_sensor_streaming_ctrl,
    .pfn_sensor_testpattern                 = os04a10_testpattern_ctrl,

    .pfn_sensor_set_mode                    = os04a10_sensor_set_mode,
    .pfn_sensor_get_mode                    = os04a10_sensor_get_mode,

    .pfn_sensor_set_fps                     = os04a10_set_fps_sf,
    .pfn_sensor_get_fps                     = os04a10_get_fps_sf,
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
    .pfn_sensor_get_hw_exposure_params      = os04a10_get_hw_exposure_params_sf,
    .pfn_sensor_get_gain_table              = os04a10_get_sensor_gain_table_sf,
    .pfn_sensor_set_again                   = os04a10_set_again_sf,
    .pfn_sensor_set_dgain                   = os04a10_set_dgain_sf,
    .pfn_sensor_hcglcg_ctrl                 = os04a10_hcglcg_ctrl_sf,

    .pfn_sensor_set_integration_time        = os04a10_set_integration_time_sf,
    .pfn_sensor_get_integration_time_range  = os04a10_get_integration_time_range_sf,
    .pfn_sensor_set_slow_fps                = os04a10_set_slow_fps_sf,
    .pfn_sensor_get_slow_shutter_param      = os04a10_get_slow_shutter_param_sf,
    .pfn_sensor_get_sns_reg_info            = os04a10_ae_get_sensor_reg_info_sf,
    .pfn_sensor_set_wbgain                  = AX_NULL,
};

