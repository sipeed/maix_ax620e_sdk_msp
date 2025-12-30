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

#include "ax_sensor_struct.h"
#include "ax_base_type.h"
#include "ax_isp_common.h"
#include "isp_sensor_internal.h"
#include "isp_sensor_types.h"
#include "isp_sensor_internal.h"

#include "sc850sl.h"
#include "sc850sl_settings.h"
#include "sc850sl_reg.h"
#include "sc850sl_ae_ctrl.h"

/* default param */
#include "sc850sl_sdr.h"
#include "sc850sl_sdr_qs.h"
#include "sc850sl_hdr_2x.h"

#include "ax_module_version.h"
/****************************************************************************
 * golbal variables  and macro definition
 ****************************************************************************/


/****************************************************************************
 * Internal function definition
 ****************************************************************************/
static AX_S32 sc850sl_ctx_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 ret = 0;

    SNS_DBG("sc850sl sc850sl_ctx_init. ret = %d\n", ret);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        sns_obj = (SNS_STATE_OBJ *)calloc(1, sizeof(SNS_STATE_OBJ));
        if (AX_NULL == sns_obj) {
            SNS_ERR("malloc g_szsc850slCtx failed\n");
            return AX_SNS_ERR_NOMEM;
        }
    }

    memset(sns_obj, 0, sizeof(SNS_STATE_OBJ));

    SENSOR_SET_CTX(nPipeId, sns_obj);

    return AX_SNS_SUCCESS;
}

static AX_VOID sc850sl_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

#if 0
/****************************************************************************
 * sensor control function
 ****************************************************************************/
static AX_S32 sc850sl_get_version(ISP_PIPE_ID nPipeId, AX_CHAR * ptSnsVerInfo)
{
    SNS_CHECK_PTR_VALID(ptSnsVerInfo);

    memcpy(ptSnsVerInfo, axera_module_version, sizeof(axera_module_version));

    return AX_SNS_SUCCESS;
}
#endif

static void sc850sl_init(ISP_PIPE_ID nPipeId)
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
        nRet = sc850sl_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc850sl_ctx_init failed!\n");
            return;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    /* 2. i2c init */
    sc850sl_sensor_i2c_init(nPipeId);
#ifndef AX_BOOT_OPTIMIZATION_SUPPORT
    nRet = sc850sl_get_chipid(nPipeId, &nSnsId);
    if (nRet != AX_SNS_SUCCESS) {
        SNS_ERR("can't find sc850sl sensor id.\n");
    } else {
        SNS_DBG("sc850sl check chip id success.\n");
    }

    /* 3. config settings  */
    sc850sl_write_settings(nPipeId);
#else
    sns_obj->sns_id = SC850SL_SENSOR_ID;
#endif
    sc850sl_get_sensor_stream_ctrl(nPipeId);

    /* 4. refresh ae param */
    sc850sl_cfg_aec_param(nPipeId);

    /* 5. refresh ae regs table */
    sc850sl_sns_refresh_all_regs_from_tbl(nPipeId);
    sns_obj->bSyncInit = AX_FALSE;

    sns_obj->sns_mode_obj.nVts = sc850sl_get_vts(nPipeId);

    return;
}

static void sc850sl_exit(ISP_PIPE_ID nPipeId)
{
    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM)) {
        return;
    }

    sc850sl_sensor_i2c_exit(nPipeId);
    sc850sl_ctx_exit(nPipeId);

    return;
}

static AX_S32 sc850sl_sensor_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
{
    AX_S32 nRet = 0;
    AX_S32 sns_setting_index = 0;
    AX_F32 setting_fps = 30;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(sns_mode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = sc850sl_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc850sl_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    if (sns_mode->nWidth == 3840            &&
        sns_mode->nHeight == 2160           &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE)
    {
        sns_setting_index = e_SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_2LANE_24M_1380Mbps;
        setting_fps = 30.0;

    }
    else if (sns_mode->nWidth == 1920       &&
        sns_mode->nHeight == 1080           &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE)
    {
        sns_setting_index = e_SC850SL_BINNING_1920X1080_LINEAR_10bit_RGGB_60FPS_2LANE_24M_720Mbps;
        setting_fps = 60;
    }
    else {
        SNS_ERR("it's not supported. pipe=%d, mode=%u_%u_%u_%f\n",
            nPipeId, sns_mode->eSnsMode, sns_mode->nWidth, sns_mode->nHeight, sns_mode->fFrameRate);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    /* optional, Not Recommended. if nSettingIndex > 0 will take effect */
    if (sns_mode->nSettingIndex > 0) {
        sns_setting_index = sns_mode->nSettingIndex;
        setting_fps = sns_mode->fFrameRate;
    }

    SNS_DBG("pipe=%d, sns_setting_index=%d\n", nPipeId, sns_setting_index);
    sns_obj->eImgMode = sns_setting_index;
    sns_obj->sns_mode_obj.eHDRMode = sns_mode->eSnsMode;
    sns_obj->sns_mode_obj.nWidth = sns_mode->nWidth;
    sns_obj->sns_mode_obj.nHeight = sns_mode->nHeight;
    sns_obj->sns_mode_obj.fFrameRate = setting_fps;
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

static AX_S32 sc850sl_testpattern_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    return AX_SNS_SUCCESS;
}

/****************************************************************************
 * get module default parameters function
 ****************************************************************************/
static AX_S32 sc850sl_get_isp_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_DEFAULT_PARAM_T *ptDftParam)
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
        nRet = sc850sl_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc850sl_ctx_init failed!\n");
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
        AX_SENSOR_SET_DEFAULT_SPECIAL_PARAM(sdr_qs);
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

static AX_S32 sc850sl_get_3a_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_3A_DEFAULT_PARAM_T *ptDftParam)
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
        nRet = sc850sl_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc850sl_ctx_init failed!\n");
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
        AX_SENSOR_SET_3A_DEFAULT_SPECIAL_PARAM(sdr_qs);
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

AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnssc850slObjQs = {

    /* sensor ctrl */
    .pfn_sensor_chipid                      = sc850sl_get_chipid,
    .pfn_sensor_init                        = sc850sl_init,
    .pfn_sensor_exit                        = sc850sl_exit,
    .pfn_sensor_reset                       = AX_NULL,
    .pfn_sensor_streaming_ctrl              = sc850sl_sensor_streaming_ctrl,
    .pfn_sensor_sleep_wakeup                = sc850sl_sensor_sleep_wakeup,
    .pfn_sensor_testpattern                 = sc850sl_testpattern_ctrl,

    .pfn_sensor_set_mode                    = sc850sl_sensor_set_mode,
    .pfn_sensor_get_mode                    = sc850sl_sensor_get_mode,

    .pfn_sensor_set_fps                     = sc850sl_set_fps,
    .pfn_sensor_get_fps                     = sc850sl_get_fps,

    /* communication : register read/write */
    .pfn_sensor_set_bus_info                = sc850sl_set_bus_info,
    .pfn_sensor_write_register              = sc850sl_write_register,
    .pfn_sensor_read_register               = sc850sl_read_register,

    /* default param */
    .pfn_sensor_get_isp_default_params      = sc850sl_get_isp_default_params,
    .pfn_sensor_get_3a_default_params       = sc850sl_get_3a_default_params,
    .pfn_sensor_get_black_level             = sc850sl_get_black_level,

    /* ae ctrl */
    .pfn_sensor_get_hw_exposure_params      = sc850sl_get_hw_exposure_params,
    .pfn_sensor_get_gain_table              = sc850sl_get_sensor_gain_table,
    .pfn_sensor_set_again                   = sc850sl_set_again,
    .pfn_sensor_set_dgain                   = sc850sl_set_dgain,
    .pfn_sensor_hcglcg_ctrl                 = AX_NULL,

    .pfn_sensor_set_integration_time        = sc850sl_set_integration_time,
    .pfn_sensor_get_integration_time_range  = sc850sl_get_integration_time_range,
    .pfn_sensor_set_slow_fps                = sc850sl_set_fps,
    .pfn_sensor_get_slow_shutter_param      = sc850sl_get_slow_shutter_param,
    .pfn_sensor_get_sns_reg_info            = sc850sl_ae_get_sensor_reg_info,
};
