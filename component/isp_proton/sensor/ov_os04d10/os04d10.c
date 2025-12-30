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

#include "os04d10.h"
#include "os04d10_settings.h"
#include "os04d10_reg.h"
#include "os04d10_ae_ctrl.h"

/* default param */
#ifdef USE_DEFAULT_PARAM
#include "os04d10_sdr.h"
#endif

#include "ax_module_version.h"
/****************************************************************************
 * golbal variables  and macro definition                                   *
 ****************************************************************************/

SNS_STATE_OBJ *g_szOs04d10Ctx[AX_VIN_MAX_PIPE_NUM] = {AX_NULL};

const char axera_sns_os04d10_version[] = AXERA_MODULE_VERSION;

/****************************************************************************
 * Internal function definition
 ****************************************************************************/
AX_S32 os04d10_ctx_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 ret = 0;

    SNS_DBG("os04d10 os04d10_ctx_init. ret = %d\n", ret);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        sns_obj = (SNS_STATE_OBJ *)calloc(1, sizeof(SNS_STATE_OBJ));
        if (AX_NULL == sns_obj) {
            SNS_ERR("malloc g_szOs04d10Ctx failed\n");
            return AX_SNS_ERR_NOMEM;
        }
    }

    memset(sns_obj, 0, sizeof(SNS_STATE_OBJ));

    SENSOR_SET_CTX(nPipeId, sns_obj);

    return AX_SNS_SUCCESS;
}

AX_VOID os04d10_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

/****************************************************************************
 * sensor control function
 ****************************************************************************/
AX_S32 os04d10_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId)
{
    AX_U32 sensor_id = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);

    if (AX_NULL == sns_obj) {
        return AX_SNS_ERR_NOT_INIT;
    }

    if (sns_obj->sns_id == 0) {
        sensor_id |= os04d10_reg_read(nPipeId, OS04D10_SENSOR_ID_REG_1) << 24;
        sensor_id |= os04d10_reg_read(nPipeId, OS04D10_SENSOR_ID_REG_2) << 16;
        sensor_id |= os04d10_reg_read(nPipeId, OS04D10_SENSOR_ID_REG_3) << 8;
        sensor_id |= os04d10_reg_read(nPipeId, OS04D10_SENSOR_ID_REG_4);

        SNS_DBG("os04d10 id: 0x%x\n", sensor_id);

        if (sensor_id != OS04D10_SENSOR_ID) {
            SNS_ERR("Failed to read sensor os04d10 id:0x%x\n", sensor_id);
            return AX_SNS_ERR_UNKNOWN;
        }
        sns_obj->sns_id = sensor_id;
        *pSnsId = sensor_id;
    } else {
        *pSnsId = sns_obj->sns_id;
    }

    return AX_SNS_SUCCESS;
}

static void os04d10_init(ISP_PIPE_ID nPipeId)
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
        nRet = os04d10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04d10_ctx_init failed!\n");
            return;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    /* 2. i2c init */
    os04d10_sensor_i2c_init(nPipeId);

    nRet = os04d10_get_chipid(nPipeId, &nSnsId);
    if (nRet != AX_SNS_SUCCESS) {
        SNS_ERR("can't find os04d10 sensor id.\n");
    } else {
        SNS_DBG("os04d10 check chip id success.\n");
    }

    /* 3. config settings  */
    os04d10_write_settings(nPipeId);
    os04d10_get_sensor_stream_ctrl(nPipeId);
    /* 4. refresh ae param */
    os04d10_cfg_aec_param(nPipeId);

    /* 5. refresh ae regs table */
    os04d10_sns_refresh_all_regs_from_tbl(nPipeId);

    sns_obj->bSyncInit = AX_FALSE;

    return;
}

static void os04d10_exit(ISP_PIPE_ID nPipeId)
{
    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM)) {
        return;
    }

    os04d10_sensor_i2c_exit(nPipeId);
    os04d10_ctx_exit(nPipeId);

    return;
}


AX_S32 os04d10_sensor_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_S32 result = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    result |= os04d10_write_register(nPipeId, OS04D10_PAGE_FLG_D2, OS04D10_PAGE_FLG_D2_P5);

    if (1 == on) {
        result |= os04d10_write_register(nPipeId, OS04D10_MIPI_EN, 0x01); // stream on
        SNS_DBG("sensor stream on!\n");
    } else {
        result |= os04d10_write_register(nPipeId, OS04D10_MIPI_EN, 0x00); // stream off
        usleep(50 * 1000);
        SNS_DBG("sensor stream off!\n");
    }
    if (result) {
        return result;
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os04d10_sensor_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup)
{
    AX_S32 result = 0;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (AX_SNS_EVENT_WAKE_UP == eSleepWakeup) {
        result |= os04d10_write_register(nPipeId, OS04D10_PAGE_FLG_D2, OS04D10_PAGE_FLG_D2_P0);
        usleep(1 * 1000);
        result |= os04d10_write_register(nPipeId, OS04D10_SLEEP_EN, 0x00); // wakeup
        usleep(2 * 1000);
        result |= os04d10_write_register(nPipeId, OS04D10_PAGE_FLG_D2, OS04D10_PAGE_FLG_D2_P1);
        usleep(1 * 1000);
        result |= os04d10_write_register(nPipeId, 0x33, 0x03);
        result |= os04d10_write_register(nPipeId, 0x01, 0x02);
        result |= os04d10_write_register(nPipeId, OS04D10_PAGE_FLG_D2, OS04D10_PAGE_FLG_D2_P0);
        SNS_DBG("sensor wakeup!\n");
    } else if (AX_SNS_EVENT_SLEEP == eSleepWakeup){
        result |= os04d10_write_register(nPipeId, OS04D10_PAGE_FLG_D2, OS04D10_PAGE_FLG_D2_P0);
        result |= os04d10_write_register(nPipeId, OS04D10_SLEEP_EN, 0x07); // sleep
        //result |= os04d10_write_register(nPipeId, 0x20, 0x01);
        SNS_DBG("sensor sleep!\n");
    }
    if (result) {
        return result;
    }

    return AX_SNS_SUCCESS;
}


AX_S32 os04d10_sensor_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
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
        nRet = os04d10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04d10_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    if (sns_mode->nWidth == 2560            &&
        sns_mode->nHeight == 1440           &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE)
    {
        sns_setting_index = e_OS04D10_2lane_2560x1440_10bit_Linear_30fps;
        setting_fps = 30;
    } else if (sns_mode->nWidth == 1280     &&
        sns_mode->nHeight == 720            &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE) {
        sns_setting_index = e_OS04D10_2lane_1280x720_10bit_Linear_60fps;
        setting_fps = 60;
    } else if (sns_mode->nWidth == 640     &&
        sns_mode->nHeight == 360            &&
        sns_mode->eRawType == AX_RT_RAW10   &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE) {
        sns_setting_index = e_OS04D10_2lane_640x360_10bit_Linear_120fps;
        setting_fps = 120;
    } else {
        SNS_ERR("it's not supported. pipe=%u, mode=%u_%u_%u_%f\n",
            nPipeId, sns_mode->eSnsMode, sns_mode->nWidth, sns_mode->nHeight, sns_mode->fFrameRate);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    /* optional, Not Recommended. if nSettingIndex > 0 will take effect */
    if (sns_mode->nSettingIndex > 0) {
        sns_setting_index = sns_mode->nSettingIndex;
        setting_fps = sns_mode->fFrameRate;
    }

    SNS_DBG("pipe=%u, sns_setting_index=%u", nPipeId, sns_setting_index);
    sns_obj->eImgMode = sns_setting_index;
    sns_obj->sns_mode_obj.eHDRMode = sns_mode->eSnsMode;
    sns_obj->sns_mode_obj.nWidth = sns_mode->nWidth;
    sns_obj->sns_mode_obj.nHeight = sns_mode->nHeight;
    sns_obj->sns_mode_obj.fFrameRate = setting_fps;
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

AX_S32 os04d10_sensor_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pSnsMode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        /* contex init */
        nRet = os04d10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04d10_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        } else {
            SENSOR_GET_CTX(nPipeId, sns_obj);
        }
    }

    memcpy(pSnsMode, &sns_obj->sns_attr_param, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}


AX_S32 os04d10_testpattern_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SNS_DBG("test pattern enable: %d\n", on);
    os04d10_write_register(nPipeId, OS04D10_PAGE_FLG_D2, OS04D10_PAGE_FLG_D2_P5);
    if (1 == on) {
        /* enable test-pattern */
        os04d10_write_register(nPipeId, OS04D10_TEST_PARTTEN_EN, 0x01);
    } else {
        /* disable test-pattern */
        os04d10_write_register(nPipeId, OS04D10_TEST_PARTTEN_EN, 0x00);
    }

    return AX_SNS_SUCCESS;
}


/****************************************************************************
 * get module default parameters function
 ****************************************************************************/
AX_S32 os04d10_get_isp_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_DEFAULT_PARAM_T *ptDftParam)
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
        nRet = os04d10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04d10_ctx_init failed!\n");
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

AX_S32 os04d10_get_3a_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_3A_DEFAULT_PARAM_T *ptDftParam)
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
        nRet = os04d10_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("os04d10_ctx_init failed!\n");
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

AX_S32 os04d10_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(ptBlackLevel);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    /* P5:0xF0-0xF3,  0x40 */
    /* 8bit 16->10bit 64->12bit 256->14bit 1024(U8.6) */
    if (AX_SNS_LINEAR_MODE == sns_obj->sns_mode_obj.eHDRMode) {
        ptBlackLevel->nBlackLevel[0] = 1024;
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

AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnsos04d10Obj = {

    /* sensor ctrl */
    .pfn_sensor_reset                       = os04d10_reset,
    .pfn_sensor_chipid                      = os04d10_get_chipid,
    .pfn_sensor_init                        = os04d10_init,
    .pfn_sensor_exit                        = os04d10_exit,
    .pfn_sensor_streaming_ctrl              = os04d10_sensor_streaming_ctrl,
    .pfn_sensor_sleep_wakeup                = os04d10_sensor_sleep_wakeup,
    .pfn_sensor_testpattern                 = os04d10_testpattern_ctrl,

    .pfn_sensor_set_mode                    = os04d10_sensor_set_mode,
    .pfn_sensor_get_mode                    = os04d10_sensor_get_mode,

    .pfn_sensor_set_fps                     = os04d10_set_fps,
    .pfn_sensor_get_fps                     = os04d10_get_fps,
    .pfn_sensor_set_slaveaddr               = os04d10_set_slaveaddr,

    /* communication : register read/write */
    .pfn_sensor_set_bus_info                = os04d10_set_bus_info,
    .pfn_sensor_write_register              = os04d10_write_register,
    .pfn_sensor_read_register               = os04d10_read_register,

    /* default param */
    .pfn_sensor_get_isp_default_params      = os04d10_get_isp_default_params,
    .pfn_sensor_get_3a_default_params       = os04d10_get_3a_default_params,
    .pfn_sensor_get_black_level             = os04d10_get_black_level,

    /* ae ctrl */
    .pfn_sensor_get_hw_exposure_params      = os04d10_get_hw_exposure_params,
    .pfn_sensor_get_gain_table              = os04d10_get_sensor_gain_table,
    .pfn_sensor_set_again                   = os04d10_set_again,
    .pfn_sensor_set_dgain                   = os04d10_set_dgain,
    .pfn_sensor_hcglcg_ctrl                 = os04d10_hcglcg_ctrl,

    .pfn_sensor_set_integration_time        = os04d10_set_integration_time,
    .pfn_sensor_get_integration_time_range  = os04d10_get_integration_time_range,
    .pfn_sensor_set_slow_fps                = os04d10_set_fps,
    .pfn_sensor_get_slow_shutter_param      = os04d10_get_slow_shutter_param,
    .pfn_sensor_get_sns_reg_info            = os04d10_ae_get_sensor_reg_info,
    .pfn_sensor_set_wbgain                  = AX_NULL,
    .pfn_sensor_get_temperature_info        = AX_NULL,
};
