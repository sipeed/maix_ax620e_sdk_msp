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

#include "sc500ai.h"
#include "sc500ai_settings.h"
#include "sc500ai_reg.h"
#include "sc500ai_ae_ctrl.h"

/* default param */
#ifdef USE_DEFAULT_PARAM
#include "sc500ai_sdr.h"
#include "sc500ai_hdr_2x.h"
#endif

// ### SIPEED EDIT ###
SNS_STATE_OBJ *gSc500aiCtx[AX_VIN_MAX_PIPE_NUM];
// ### SIPEED EDIT END ###
const char axera_sc500ai_version[] = AXERA_MODULE_VERSION;

/****************************************************************************
 * golbal variables  and macro definition                                   *
 ****************************************************************************/

/****************************************************************************
 * Internal function definition
 ****************************************************************************/
static AX_S32 sc500ai_ctx_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 ret = 0;

    SNS_DBG("sc500ai sc500ai_ctx_init. ret = %d\n", ret);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        sns_obj = (SNS_STATE_OBJ *)calloc(1, sizeof(SNS_STATE_OBJ));
        if (AX_NULL == sns_obj) {
            SNS_ERR("malloc gSc500aiCtx failed\n");
            return AX_SNS_ERR_NOMEM;
        }
    }

    memset(sns_obj, 0, sizeof(SNS_STATE_OBJ));

    SENSOR_SET_CTX(nPipeId, sns_obj);

    return AX_SNS_SUCCESS;
}

static AX_VOID sc500ai_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

/****************************************************************************
 * sensor control function
 ****************************************************************************/
AX_S32 sc500ai_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId)
{
    AX_U32 sensor_id = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        return AX_SNS_ERR_NOT_INIT;
    }

    if (sns_obj->sns_id == 0) {
        sensor_id |= sc500ai_reg_read(nPipeId, SC500AI_SENSOR_ID_REG_H) << 8;
        sensor_id |= sc500ai_reg_read(nPipeId, SC500AI_SENSOR_ID_REG_L);

        SNS_DBG("sc500ai id: 0x%x\n", sensor_id);

        if (sensor_id != SC500AI_SENSOR_ID) {
            SNS_ERR("Failed to read sensor sc500ai id:0x%x\n", sensor_id);
            return AX_SNS_ERR_UNKNOWN;
        }
        sns_obj->sns_id = sensor_id;
        *pSnsId = sensor_id;
    } else {
        *pSnsId = sns_obj->sns_id;
    }

    return AX_SNS_SUCCESS;
}

static void sc500ai_init(ISP_PIPE_ID nPipeId)
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
        nRet = sc500ai_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc500ai_ctx_init failed!\n");
            return;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    /* 2. i2c init */
    sc500ai_i2c_init(nPipeId);

    sc500ai_get_chipid(nPipeId, &nSnsId);
    sns_obj->sns_id = nSnsId;

    /* 3. config settings  */
    sc500ai_write_settings(nPipeId);

    sc500ai_get_sensor_stream_ctrl(nPipeId);

    /* 4. refresh ae param */
    sc500ai_cfg_aec_param(nPipeId);

    /* 5. refresh ae regs table */
    sc500ai_refresh_all_regs_from_tbl(nPipeId);

    sns_obj->bSyncInit = AX_FALSE;

    return;
}

static void sc500ai_exit(ISP_PIPE_ID nPipeId)
{
    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM)) {
        return;
    }

    sc500ai_i2c_exit(nPipeId);
    sc500ai_ctx_exit(nPipeId);

    return;
}


AX_S32 sc500ai_stream_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    SNS_DBG("pipe:%d, sensor stream on:%d\n", nPipeId, on);

    if (1 == on) {
        ret = sc500ai_write_register(nPipeId, 0x0100, 0x01); // stream on
    } else {
        ret = sc500ai_write_register(nPipeId, 0x0100, 0x00); // stream off
        usleep(50 * 1000);
    }

    if (ret) {
        return ret;
    }

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_sensor_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup)
{
    AX_S32 ret = 0;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (AX_SNS_EVENT_WAKE_UP == eSleepWakeup) {
        sc500ai_hw_reset(35, 1);
        ret = sc500ai_write_register(nPipeId, 0x0100, 0x01); // wakeup
        SNS_DBG("sensor wakeup !\n");
    } else if (AX_SNS_EVENT_SLEEP == eSleepWakeup) {
        ret = sc500ai_write_register(nPipeId, 0x0100, 0x00); // sleep
        sc500ai_hw_reset(35, 0);
        SNS_DBG("sensor sleep !\n");
    }

    if (ret) {
        return ret;
    }

    return AX_SNS_SUCCESS;
}

static AX_S32 sc500ai_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
{
    AX_S32 nRet = 0;
    AX_S32 sns_setting_index = 0;
    AX_F32 setting_fps = 30.0f;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(sns_mode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = sc500ai_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc500ai_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    sns_obj->bSyncInit = AX_FALSE;

    if (sns_mode->nWidth == 2880            &&
        sns_mode->nHeight == 1620           &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE)
    {
        sns_setting_index = E_SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS;
        setting_fps = 30;

    } else if (sns_mode->nWidth == 2880     &&
        sns_mode->nHeight == 1620           &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_HDR_2X_MODE)
    {
        sns_setting_index = E_SC500AI_MIPI_4LANE_24M_810MBPS_2880x1620_10BIT_HDR_30FPS;
        setting_fps = 30;

    } else {
        SNS_ERR("it's not supported. pipe=%u, mode=%u_%u_%u_%f\n",
            nPipeId, sns_mode->eSnsMode, sns_mode->nWidth, sns_mode->nHeight, sns_mode->fFrameRate);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    /* optional, Not Recommended. if nSettingIndex > 0 will take effect */
    if (sns_mode->nSettingIndex > 0) {
        sns_setting_index = sns_mode->nSettingIndex;
    }

    SNS_DBG("pipe=%u, sns_setting_index=%d\n", nPipeId, sns_setting_index);
    sns_obj->eImgMode = sns_setting_index;
    sns_obj->sns_mode_obj.eHDRMode = sns_mode->eSnsMode;
    sns_obj->sns_mode_obj.nWidth = sns_mode->nWidth;
    sns_obj->sns_mode_obj.nHeight = sns_mode->nHeight;
    sns_obj->sns_mode_obj.fFrameRate = setting_fps;
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pSnsMode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = sc500ai_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc500ai_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    memcpy(pSnsMode, &sns_obj->sns_attr_param, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}


static AX_S32 sc500ai_testpattern_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_S32 value = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SNS_DBG("nPipeId:%d, testpattern on:%d\n", nPipeId, on);

    value = sc500ai_reg_read(nPipeId, 0x4501);

    value &= 0xF7;

    if (1 == on) {
        sc500ai_write_register(nPipeId, 0x4501, 0x08 | value); //bit3=1
    } else {
        sc500ai_write_register(nPipeId, 0x4501, 0x00 | value);
    }

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_mirror_flip(ISP_PIPE_ID nPipeId, AX_SNS_MIRRORFLIP_TYPE_E eSnsMirrorFlip)
{
    AX_S32 value = 0;

    value = sc500ai_reg_read(nPipeId, 0x3221);

    value &= 0x99;

    switch (eSnsMirrorFlip) {
    default:
    case AX_SNS_MF_NORMAL:
        sc500ai_write_register(nPipeId, 0x3221, 0x00 | value);
        break;

    case AX_SNS_MF_MIRROR:
        sc500ai_write_register(nPipeId, 0x3221, 0x06 | value);    //bit[2:1]
        break;

    case AX_SNS_MF_FLIP:
        sc500ai_write_register(nPipeId, 0x3221, 0x60 | value);    //bit[6:5]
        break;

    case AX_SNS_MF_MIRROR_FLIP:
        sc500ai_write_register(nPipeId, 0x3221, 0x66 | value);
        break;
    }
    return AX_SNS_SUCCESS;
}

/****************************************************************************
 * get module default parameters function
 ****************************************************************************/
static AX_S32 sc500ai_get_isp_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_DEFAULT_PARAM_T *ptDftParam)
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
        nRet = sc500ai_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc500ai_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

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

static AX_S32 sc500ai_get_3a_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_3A_DEFAULT_PARAM_T *ptDftParam)
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
        nRet = sc500ai_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc500ai_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

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

AX_S32 sc500ai_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel)
{
    SNS_STATE_OBJ *sns_obj = NULL;

    SNS_CHECK_PTR_VALID(ptBlackLevel);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    //{0x3907/0x3908}=0x41
    if (AX_SNS_LINEAR_MODE == sns_obj->sns_mode_obj.eHDRMode) {
        ptBlackLevel->nBlackLevel[0] = 1040;    /* 10bit 0x41(U10.0) --> 1040(U8.6) */
        ptBlackLevel->nBlackLevel[1] = 1040;
        ptBlackLevel->nBlackLevel[2] = 1040;
        ptBlackLevel->nBlackLevel[3] = 1040;
    } else {
        ptBlackLevel->nBlackLevel[0] = 1040;
        ptBlackLevel->nBlackLevel[1] = 1040;
        ptBlackLevel->nBlackLevel[2] = 1040;
        ptBlackLevel->nBlackLevel[3] = 1040;
    }

    return AX_SNS_SUCCESS;
}


AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnssc500aiObj = {

    /* sensor ctrl */
    .pfn_sensor_reset                       = sc500ai_reset,
    .pfn_sensor_chipid                      = sc500ai_get_chipid,
    .pfn_sensor_init                        = sc500ai_init,
    .pfn_sensor_exit                        = sc500ai_exit,
    .pfn_sensor_streaming_ctrl              = sc500ai_stream_ctrl,
    .pfn_sensor_sleep_wakeup                = sc500ai_sensor_sleep_wakeup,
    .pfn_sensor_testpattern                 = sc500ai_testpattern_ctrl,
    .pfn_sensor_mirror_flip                 = sc500ai_mirror_flip,

    .pfn_sensor_set_mode                    = sc500ai_set_mode,
    .pfn_sensor_get_mode                    = sc500ai_get_mode,

    .pfn_sensor_set_fps                     = sc500ai_set_fps,
    .pfn_sensor_get_fps                     = sc500ai_get_fps,
    .pfn_sensor_set_slaveaddr               = sc500ai_set_slaveaddr,

    /* communication : register read/write */
    .pfn_sensor_set_bus_info                = sc500ai_set_bus_info,
    .pfn_sensor_write_register              = sc500ai_write_register,
    .pfn_sensor_read_register               = sc500ai_read_register,

    /* default param */
    .pfn_sensor_get_isp_default_params      = sc500ai_get_isp_default_params,
    .pfn_sensor_get_3a_default_params       = sc500ai_get_3a_default_params,
    .pfn_sensor_get_black_level             = sc500ai_get_black_level,

    /* ae ctrl */
    .pfn_sensor_get_hw_exposure_params      = sc500ai_get_hw_exposure_params,
    .pfn_sensor_get_gain_table              = sc500ai_get_gain_table,
    .pfn_sensor_set_again                   = sc500ai_set_again,
    .pfn_sensor_set_dgain                   = sc500ai_set_dgain,
    .pfn_sensor_hcglcg_ctrl                 = sc500ai_hcglcg_ctrl,

    .pfn_sensor_set_integration_time        = sc500ai_set_integration_time,
    .pfn_sensor_get_integration_time_range  = sc500ai_get_integration_time_range,
    .pfn_sensor_set_slow_fps                = sc500ai_set_fps,
    .pfn_sensor_get_slow_shutter_param      = sc500ai_get_slow_shutter_param,
    .pfn_sensor_get_sns_reg_info            = sc500ai_ae_get_sensor_reg_info,
};
