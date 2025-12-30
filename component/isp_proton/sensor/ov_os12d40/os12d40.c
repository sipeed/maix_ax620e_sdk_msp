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

#include "os12d40.h"
#include "os12d40_settings.h"
#include "os12d40_reg.h"
#include "os12d40_ae_ctrl.h"

/* default param */
#ifdef USE_DEFAULT_PARAM
#include "os12d40_sdr.h"
#endif


#include "ax_module_version.h"
/****************************************************************************
 * golbal variables  and macro definition                                   *
 ****************************************************************************/

SNS_STATE_OBJ *g_szOs12d40Ctx[AX_VIN_MAX_PIPE_NUM] = {AX_NULL};

const char axera_sns_os12d40_version[] = AXERA_MODULE_VERSION;

/****************************************************************************
 * Internal function definition
 ****************************************************************************/
AX_S32 os12d40_ctx_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 ret = 0;

    SNS_DBG("os12d40 os12d40_ctx_init. ret = %d\n", ret);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        sns_obj = (SNS_STATE_OBJ *)calloc(1, sizeof(SNS_STATE_OBJ));
        if (AX_NULL == sns_obj) {
            SNS_ERR("malloc g_szOs12d40Ctx failed\n");
            return AX_SNS_ERR_NOMEM;
        }
    }

    memset(sns_obj, 0, sizeof(SNS_STATE_OBJ));

    SENSOR_SET_CTX(nPipeId, sns_obj);

    return AX_SNS_SUCCESS;
}

AX_VOID os12d40_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

/****************************************************************************
 * sensor control function
 ****************************************************************************/
AX_S32 os12d40_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId)
{
    AX_U32 sensor_id = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        return AX_SNS_ERR_NOT_INIT;
    }

    if (sns_obj->sns_id == 0) {
        sensor_id |= os12d40_reg_read(nPipeId, OS12D40_SENSOR_ID_REG_H) << 16;
        sensor_id |= os12d40_reg_read(nPipeId, OS12D40_SENSOR_ID_REG_M) << 8;
        sensor_id |= os12d40_reg_read(nPipeId, OS12D40_SENSOR_ID_REG_L);

        SNS_DBG("os12d40 id: 0x%x\n", sensor_id);

        if (sensor_id != OS12D40_SENSOR_ID) {
            SNS_ERR("Failed to read sensor os12d40 id:0x%x\n", sensor_id);
            return AX_SNS_ERR_UNKNOWN;
        }
        sns_obj->sns_id = sensor_id;
        *pSnsId = sensor_id;
    } else {
        *pSnsId = sns_obj->sns_id;
    }

    return AX_SNS_SUCCESS;
}

static void os12d40_init(ISP_PIPE_ID nPipeId)
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
        nRet = os12d40_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os12d40_ctx_init failed!\n");
            return;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    /* 2. i2c init */
    os12d40_sensor_i2c_init(nPipeId);

    nRet = os12d40_get_chipid(nPipeId, &nSnsId);
    if (nRet != AX_SNS_SUCCESS) {
        SNS_ERR("can't find os12d40 sensor id.\n");
    } else {
        SNS_DBG("os12d40 check chip id success.\n");
    }

    /* 3. config settings  */
    os12d40_write_settings(nPipeId);
    os12d40_get_sensor_stream_ctrl(nPipeId);

    /* 4. refresh ae param */
    os12d40_cfg_aec_param(nPipeId);

    /* 5. refresh ae regs table */
    os12d40_sns_refresh_all_regs_from_tbl(nPipeId);

    sns_obj->bSyncInit = AX_FALSE;

    return;
}

static void os12d40_exit(ISP_PIPE_ID nPipeId)
{
    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM)) {
        return;
    }

    os12d40_sensor_i2c_exit(nPipeId);
    os12d40_ctx_exit(nPipeId);

    return;
}


AX_S32 os12d40_sensor_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_S32 result = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (1 == on) {
        result = os12d40_write_register(nPipeId, 0x0100, 0x01); // stream on
        SNS_DBG("sensor stream on!\n");
    } else {
        result = os12d40_write_register(nPipeId, 0x0100, 0x00); // stream off
        usleep(50 * 1000);
        SNS_DBG("sensor stream off!\n");
    }
    if (0 != result) {
        return -1;
    }

    return AX_SNS_SUCCESS;
}

static AX_S32 os12d40_sensor_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup)
{
    AX_S32 result = -1;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (AX_SNS_EVENT_WAKE_UP == eSleepWakeup) {
        result = os12d40_write_register(nPipeId, 0x0100, 0x01); // wakeup
        SNS_DBG("sensor sleep!\n");
    } else if (AX_SNS_EVENT_SLEEP == eSleepWakeup){
        result = os12d40_write_register(nPipeId, 0x0100, 0x00); // sleep
        SNS_DBG("sensor wakeup!\n");
    }

    if (0 != result) {
        return -1;
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_sensor_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
{
    AX_S32 nRet = 0;
    AX_F32 setting_fps = 30.0;
    AX_U32 sns_setting_index = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(sns_mode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = os12d40_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os12d40_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    if (sns_mode->nWidth == 4512 &&
        sns_mode->nHeight == 2512 &&
        sns_mode->eRawType == AX_RT_RAW10 &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE) {
        sns_setting_index = e_OS12D40_24M_1500Mbps_4LANE_4512x2512_10BIT_SDR_15FPS;
        setting_fps = 15.0;
    }else if (sns_mode->nWidth == 4480 &&
        sns_mode->nHeight == 2512 &&
        sns_mode->eRawType == AX_RT_RAW10 &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE) {
        sns_setting_index = e_OS12D40_24M_800Mbps_4LANE_4480x2512_10BIT_SDR_20FPS;
        setting_fps = 20.0;
    }else if (sns_mode->nWidth == 2240 &&
        sns_mode->nHeight == 1256 &&
        sns_mode->eRawType == AX_RT_RAW10 &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE) {
        sns_setting_index = e_OS12D40_24M_800Mbps_4LANE_BINNING_2240x1256_10BIT_SDR_30FPS;
        setting_fps = 30.0;
    } else {
        SNS_ERR("it's not supported. [%dx%d mode=%d raw_type=%u] \n",
                sns_mode->nWidth, sns_mode->nHeight, sns_mode->eSnsMode, sns_mode->eRawType);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    /* optional, Not Recommended. if nSettingIndex > 0 will take effect */
    if (sns_mode->nSettingIndex > 0) {
        sns_setting_index = sns_mode->nSettingIndex;
    }

    SNS_DBG("nPipeId=%u, sns_setting_index %u!\n", nPipeId, sns_setting_index);
    sns_obj->eImgMode = sns_setting_index;
    sns_obj->sns_mode_obj.eHDRMode = sns_mode->eSnsMode;
    sns_obj->sns_mode_obj.nWidth = sns_mode->nWidth;
    sns_obj->sns_mode_obj.nHeight = sns_mode->nHeight;
    sns_obj->sns_mode_obj.fFrameRate = setting_fps;
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_sensor_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode)
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


AX_S32 os12d40_testpattern_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SNS_DBG("test pattern enable: %d\n", on);
    if (1 == on) {
        /* enable test-pattern */
        os12d40_write_register(nPipeId, 0x5081, 0x01); /* long  frame*/
    } else {
        /* disable test-pattern */
        os12d40_write_register(nPipeId, 0x5081, 0x00); /* long  frame*/
    }

    return AX_SNS_SUCCESS;
}

static AX_S32 os12d40_mirror_flip(ISP_PIPE_ID nPipeId, AX_SNS_MIRRORFLIP_TYPE_E eSnsMirrorFlip)
{
    switch (eSnsMirrorFlip) {
    default:
    case AX_SNS_MF_NORMAL:
        os12d40_write_register(nPipeId, 0x0100, 0x00);
        os12d40_write_register(nPipeId, 0x3811, 0x40);
        os12d40_write_register(nPipeId, 0x3813, 0x07);
        os12d40_write_register(nPipeId, 0x3820, 0x00);
        os12d40_write_register(nPipeId, 0x3821, 0x04);
        os12d40_write_register(nPipeId, 0x0100, 0x01);
        break;

    case AX_SNS_MF_MIRROR:
        os12d40_write_register(nPipeId, 0x0100, 0x00);
        os12d40_write_register(nPipeId, 0x3811, 0x41);
        os12d40_write_register(nPipeId, 0x3813, 0x07);
        os12d40_write_register(nPipeId, 0x3820, 0x00);
        os12d40_write_register(nPipeId, 0x3821, 0x00);
        os12d40_write_register(nPipeId, 0x0100, 0x01);
        break;

    case AX_SNS_MF_FLIP:
        os12d40_write_register(nPipeId, 0x0100, 0x00);
        os12d40_write_register(nPipeId, 0x3811, 0x40);
        os12d40_write_register(nPipeId, 0x3813, 0x08);
        os12d40_write_register(nPipeId, 0x3820, 0x04);
        os12d40_write_register(nPipeId, 0x3821, 0x04);
        os12d40_write_register(nPipeId, 0x0100, 0x01);
        break;

    case AX_SNS_MF_MIRROR_FLIP:
        os12d40_write_register(nPipeId, 0x0100, 0x00);
        os12d40_write_register(nPipeId, 0x3811, 0x41);
        os12d40_write_register(nPipeId, 0x3813, 0x08);
        os12d40_write_register(nPipeId, 0x3820, 0x04);
        os12d40_write_register(nPipeId, 0x3821, 0x00);
        os12d40_write_register(nPipeId, 0x0100, 0x01);
        break;
    }
    return AX_SNS_SUCCESS;
}

/****************************************************************************
 * get module default parameters function
 ****************************************************************************/
static AX_S32 os12d40_get_isp_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_DEFAULT_PARAM_T *ptDftParam)
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
static AX_S32 os12d40_get_3a_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_3A_DEFAULT_PARAM_T *ptDftParam)
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

AX_S32 os12d40_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel)
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

static AX_S32 os12d40_get_temperature_info(ISP_PIPE_ID nPipeId, AX_S32 *nTemperature)
{
    AX_F32 fTempVal = 0.0;
    AX_U8 nTempInt = 0;
    AX_U8 nTempDec = 0;

    SNS_CHECK_PTR_VALID(nTemperature);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    os12d40_write_register(nPipeId, 0x4D12, 0x01); //enable
    nTempInt = os12d40_reg_read(nPipeId, 0x4D13);
    nTempDec = os12d40_reg_read(nPipeId, 0x4D14);

    /* -63.996(-3F.FF) to 192(C0.00)  U8.8b format */
    fTempVal = nTempInt + nTempDec/256.0;
    if ((nTempInt << 8 | nTempDec) > 0xC000) {
        fTempVal = -(fTempVal - 0xC0);
    }

    *nTemperature = (AX_S32)(fTempVal * 1000);

    SNS_DBG("nPipeId = %d, nTemperature = %f\n", nPipeId, *nTemperature/1000.0);

    return AX_SNS_SUCCESS;
}



AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnsos12d40Obj = {

    /* sensor ctrl */
    .pfn_sensor_reset                       = os12d40_reset,
    .pfn_sensor_chipid                      = os12d40_get_chipid,
    .pfn_sensor_init                        = os12d40_init,
    .pfn_sensor_exit                        = os12d40_exit,
    .pfn_sensor_streaming_ctrl              = os12d40_sensor_streaming_ctrl,
    .pfn_sensor_sleep_wakeup                = os12d40_sensor_sleep_wakeup,
    .pfn_sensor_testpattern                 = os12d40_testpattern_ctrl,
    .pfn_sensor_mirror_flip                 = os12d40_mirror_flip,

    .pfn_sensor_set_mode                    = os12d40_sensor_set_mode,
    .pfn_sensor_get_mode                    = os12d40_sensor_get_mode,

    .pfn_sensor_set_fps                     = os12d40_set_fps,
    .pfn_sensor_get_fps                     = os12d40_get_fps,
    .pfn_sensor_set_slaveaddr               = os12d40_set_slaveaddr,

    /* communication : register read/write */
    .pfn_sensor_set_bus_info                = os12d40_set_bus_info,
    .pfn_sensor_write_register              = os12d40_write_register,
    .pfn_sensor_read_register               = os12d40_read_register,

    /* default param */
    .pfn_sensor_get_isp_default_params      = os12d40_get_isp_default_params,
    .pfn_sensor_get_3a_default_params       = os12d40_get_3a_default_params,
    .pfn_sensor_get_black_level             = os12d40_get_black_level,

    /* ae ctrl */
    .pfn_sensor_get_hw_exposure_params      = os12d40_get_hw_exposure_params,
    .pfn_sensor_get_gain_table              = os12d40_get_sensor_gain_table,
    .pfn_sensor_set_again                   = os12d40_set_again,
    .pfn_sensor_set_dgain                   = os12d40_set_dgain,
    .pfn_sensor_hcglcg_ctrl                 = AX_NULL,

    .pfn_sensor_set_integration_time        = os12d40_set_integration_time,
    .pfn_sensor_get_integration_time_range  = os12d40_get_integration_time_range,
    .pfn_sensor_set_slow_fps                = os12d40_set_fps,
    .pfn_sensor_get_slow_shutter_param      = os12d40_get_slow_shutter_param,
    .pfn_sensor_get_sns_reg_info            = os12d40_ae_get_sensor_reg_info,
    .pfn_sensor_set_wbgain                  = AX_NULL,
    .pfn_sensor_get_temperature_info        = os12d40_get_temperature_info,
};
