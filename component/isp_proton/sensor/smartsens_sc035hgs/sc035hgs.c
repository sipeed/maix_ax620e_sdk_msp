#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include "ax_sensor_struct.h"
#include "ax_base_type.h"
#include "ax_isp_common.h"
#include "ax_isp_iq_api.h"
#include "isp_sensor_internal.h"
#include "isp_sensor_types.h"

#include "sc035hgs.h"
#include "sc035hgs_settings.h"
#include "sc035hgs_reg.h"
#include "sc035hgs_ae_ctrl.h"

/* Temporary SDR defaults for bring-up. Replace with SC035HGS IQ later. */
#ifdef USE_DEFAULT_PARAM
#include "sc200ai_sdr.h"
#endif

#include "ax_module_version.h"

SNS_STATE_OBJ *g_szsc035hgsCtx[AX_VIN_MAX_PIPE_NUM] = {NULL};
extern AX_U8 gSc035hgsSlaveMode[AX_VIN_MAX_PIPE_NUM];

static AX_ISP_IQ_SCENE_PARAM_T gSc035hgsSceneParam = {
    .nAutoMode = 0,
    .tManualParam = {
        .nAiWorkMode = AX_AI_DISABLE,
    },
    .tAutoParam = {
        .nSceneNum = 0,
        .nDelta = 0,
        .nRefValStart = {0},
        .nRefValEnd = {0},
        .nAiWorkMode = {AX_AI_DISABLE, AX_AI_DISABLE, AX_AI_DISABLE, AX_AI_DISABLE},
    },
};

static AX_S32 sc035hgs_ctx_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        sns_obj = (SNS_STATE_OBJ *)calloc(1, sizeof(SNS_STATE_OBJ));
        if (AX_NULL == sns_obj) {
            SNS_ERR("malloc g_szsc035hgsCtx failed\n");
            return AX_SNS_ERR_NOMEM;
        }
    }

    memset(sns_obj, 0, sizeof(SNS_STATE_OBJ));
    SENSOR_SET_CTX(nPipeId, sns_obj);

    return AX_SNS_SUCCESS;
}

static AX_VOID sc035hgs_ctx_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    free(sns_obj);
    SENSOR_RESET_CTX(nPipeId);
}

AX_S32 sc035hgs_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId)
{
    AX_U32 sensor_id = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pSnsId);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (sns_obj->sns_id == 0) {
        sensor_id |= (AX_U32)sc035hgs_reg_read(nPipeId, SC035HGS_SENSOR_ID_REG_H) << 8;
        sensor_id |= (AX_U32)sc035hgs_reg_read(nPipeId, SC035HGS_SENSOR_ID_REG_L);

        SNS_DBG("sc035hgs id: 0x%x\n", sensor_id);
        if (sensor_id != SC035HGS_SENSOR_ID) {
            SNS_WRN("read sensor sc035hgs id:0x%x, expected:0x%x\n", sensor_id, SC035HGS_SENSOR_ID);
        }

        sns_obj->sns_id = sensor_id ? sensor_id : SC035HGS_SENSOR_ID;
    }

    *pSnsId = sns_obj->sns_id;
    return AX_SNS_SUCCESS;
}

static void sc035hgs_set_default_mode(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj || sns_obj->eImgMode != e_SC035HGS_setting_sel_min) {
        return;
    }

    sns_obj->eImgMode = e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS;
    sns_obj->sns_mode_obj.eHDRMode = AX_SNS_LINEAR_MODE;
    sns_obj->sns_mode_obj.nWidth = SC035HGS_DEFAULT_WIDTH;
    sns_obj->sns_mode_obj.nHeight = SC035HGS_DEFAULT_HEIGHT;
    sns_obj->sns_mode_obj.fFrameRate = SC035HGS_DEFAULT_FPS;
    sns_obj->sns_mode_obj.nVts = SC035HGS_DEFAULT_VTS;
    sns_obj->sns_mode_obj.eMasterSlaveSel = AX_SNS_MASTER;
    sns_obj->sns_attr_param.nWidth = SC035HGS_DEFAULT_WIDTH;
    sns_obj->sns_attr_param.nHeight = SC035HGS_DEFAULT_HEIGHT;
    sns_obj->sns_attr_param.fFrameRate = SC035HGS_DEFAULT_FPS;
    sns_obj->sns_attr_param.eSnsMode = AX_SNS_LINEAR_MODE;
    sns_obj->sns_attr_param.eRawType = AX_RT_RAW12;
}

static void sc035hgs_init(ISP_PIPE_ID nPipeId)
{
    AX_S32 nRet = 0;
    AX_S32 nSnsId = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    if (nPipeId < 0 || nPipeId >= AX_VIN_MAX_PIPE_NUM) {
        return;
    }

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        nRet = sc035hgs_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc035hgs_ctx_init failed!\n");
            return;
        }
        SENSOR_GET_CTX(nPipeId, sns_obj);
    }

    sc035hgs_set_default_mode(nPipeId);
    sc035hgs_i2c_init(nPipeId);
    sc035hgs_get_chipid(nPipeId, &nSnsId);
    sns_obj->sns_id = nSnsId;
    sc035hgs_write_settings(nPipeId);
    sc035hgs_cfg_aec_param(nPipeId);
    sc035hgs_refresh_all_regs_from_tbl(nPipeId);
    sc035hgs_set_fps(nPipeId, sns_obj->sns_mode_obj.fFrameRate);
    sc035hgs_write_register(nPipeId, SC035HGS_VTS_H, (sns_obj->sns_mode_obj.nVts >> 8) & 0xff);
    sc035hgs_write_register(nPipeId, SC035HGS_VTS_L, sns_obj->sns_mode_obj.nVts & 0xff);
    sc035hgs_get_sensor_stream_ctrl(nPipeId);
    sns_obj->bSyncInit = AX_FALSE;
}

static void sc035hgs_exit(ISP_PIPE_ID nPipeId)
{
    if (nPipeId < 0 || nPipeId >= AX_VIN_MAX_PIPE_NUM) {
        return;
    }

    sc035hgs_i2c_exit(nPipeId);
    sc035hgs_ctx_exit(nPipeId);
}

AX_S32 sc035hgs_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_S32 result = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (on) {
        result = sc035hgs_write_register(nPipeId, 0x0100, 0x01);
        SNS_DBG("sensor stream on!\n");
    } else {
        result = sc035hgs_write_register(nPipeId, 0x0100, 0x00);
        usleep(50 * 1000);
        SNS_DBG("sensor stream off!\n");
    }

    return result ? result : AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (AX_SNS_EVENT_WAKE_UP == eSleepWakeup) {
        return sc035hgs_write_register(nPipeId, 0x0100, 0x01);
    } else if (AX_SNS_EVENT_SLEEP == eSleepWakeup) {
        return sc035hgs_write_register(nPipeId, 0x0100, 0x00);
    }

    return AX_SNS_ERR_ILLEGAL_PARAM;
}

static AX_S32 sc035hgs_set_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *sns_mode)
{
    AX_S32 nRet = 0;
    AX_S32 setting_index = 0;
    AX_F32 setting_fps = SC035HGS_DEFAULT_FPS;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(sns_mode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        nRet = sc035hgs_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc035hgs_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        }
        SENSOR_GET_CTX(nPipeId, sns_obj);
    }

    if (sns_mode->fFrameRate >= 0.95f && sns_mode->fFrameRate <= SC035HGS_SENSOR_MAX_FPS) {
        setting_fps = sns_mode->fFrameRate;
    }

    if (sns_mode->nWidth == SC035HGS_DEFAULT_WIDTH &&
        sns_mode->nHeight == SC035HGS_DEFAULT_HEIGHT &&
        (sns_mode->eRawType == AX_RT_RAW10 || sns_mode->eRawType == AX_RT_RAW12) &&
        sns_mode->eSnsMode == AX_SNS_LINEAR_MODE) {
        if (AX_SNS_SYNC_MASTER == sns_mode->eMasterSlaveSel) {
            setting_index = e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS_SYNC_MASTER;
        } else if (AX_SNS_SYNC_SLAVE == sns_mode->eMasterSlaveSel) {
            setting_index = e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS_SYNC_SLAVE;
        } else {
            setting_index = e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS;
        }
    }

    if (sns_mode->nSettingIndex > 0) {
        setting_index = sns_mode->nSettingIndex;
    }

    if (setting_index <= e_SC035HGS_setting_sel_min || setting_index >= e_SC035HGS_setting_sel_max) {
        SNS_ERR("it's not supported. pipe=%u, mode=%u_%u_%u_%u_%.2f\n", nPipeId,
                sns_mode->eSnsMode, sns_mode->nWidth, sns_mode->nHeight, sns_mode->eRawType, setting_fps);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    sns_obj->eImgMode = setting_index;
    sns_obj->sns_mode_obj.eHDRMode = sns_mode->eSnsMode;
    sns_obj->sns_mode_obj.nWidth = sns_mode->nWidth;
    sns_obj->sns_mode_obj.nHeight = sns_mode->nHeight;
    sns_obj->sns_mode_obj.fFrameRate = setting_fps;
    sns_obj->sns_mode_obj.nVts = SC035HGS_DEFAULT_VTS;
    sns_obj->sns_mode_obj.eMasterSlaveSel = sns_mode->eMasterSlaveSel;
    gSc035hgsSlaveMode[nPipeId] = (sns_mode->eMasterSlaveSel == AX_SNS_SYNC_SLAVE) ? AX_TRUE : AX_FALSE;
    memcpy(&sns_obj->sns_attr_param, sns_mode, sizeof(AX_SNS_ATTR_T));
    sns_obj->sns_attr_param.fFrameRate = setting_fps;

    SNS_INFO("pipe=%u, setting_index:%d, mode=%u_%u_%u_%u_%.2f\n",
             nPipeId, setting_index, sns_mode->eSnsMode, sns_mode->nWidth,
             sns_mode->nHeight, sns_mode->eRawType, setting_fps);

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pSnsMode);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        nRet = sc035hgs_ctx_init(nPipeId);
        if (0 != nRet) {
            return AX_SNS_ERR_NOT_INIT;
        }
        sc035hgs_set_default_mode(nPipeId);
        SENSOR_GET_CTX(nPipeId, sns_obj);
    }

    memcpy(pSnsMode, &sns_obj->sns_attr_param, sizeof(AX_SNS_ATTR_T));
    return AX_SNS_SUCCESS;
}

static AX_S32 sc035hgs_testpattern_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on)
{
    AX_U32 value = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    sc035hgs_read_register(nPipeId, 0x4501, &value);
    value &= 0xF7;
    if (on) {
        value |= 0x08;
    }
    sc035hgs_write_register(nPipeId, 0x4501, value);

    return AX_SNS_SUCCESS;
}

static AX_S32 sc035hgs_mirror_flip(ISP_PIPE_ID nPipeId, AX_SNS_MIRRORFLIP_TYPE_E eSnsMirrorFlip)
{
    AX_U32 value = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    sc035hgs_read_register(nPipeId, 0x3221, &value);
    value &= 0x99;

    switch (eSnsMirrorFlip) {
    case AX_SNS_MF_MIRROR:
        value |= 0x06;
        break;
    case AX_SNS_MF_FLIP:
        value |= 0x60;
        break;
    case AX_SNS_MF_MIRROR_FLIP:
        value |= 0x66;
        break;
    case AX_SNS_MF_NORMAL:
    default:
        break;
    }

    return sc035hgs_write_register(nPipeId, 0x3221, value);
}

static AX_S32 sc035hgs_get_isp_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_DEFAULT_PARAM_T *ptDftParam)
{
#ifdef USE_DEFAULT_PARAM
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(ptDftParam);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        nRet = sc035hgs_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc035hgs_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        }
        sc035hgs_set_default_mode(nPipeId);
    }

    memset(ptDftParam, 0, sizeof(AX_SENSOR_DEFAULT_PARAM_T));
    AX_SENSOR_SET_DEFAULT_LINEAR_PARAM();
    ptDftParam->ptScene = &gSc035hgsSceneParam;
    ptDftParam->ptDehaze = AX_NULL;

    return AX_SNS_SUCCESS;
#else
    (void)nPipeId;
    SNS_CHECK_PTR_VALID(ptDftParam);
    memset(ptDftParam, 0, sizeof(AX_SENSOR_DEFAULT_PARAM_T));
    return AX_SNS_ERR_NOT_SUPPORT;
#endif
}

static AX_S32 sc035hgs_get_3a_default_params(ISP_PIPE_ID nPipeId, AX_SENSOR_3A_DEFAULT_PARAM_T *ptDftParam)
{
#ifdef USE_DEFAULT_PARAM
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(ptDftParam);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    if (AX_NULL == sns_obj) {
        nRet = sc035hgs_ctx_init(nPipeId);
        if (0 != nRet) {
            SNS_ERR("sc035hgs_ctx_init failed!\n");
            return AX_SNS_ERR_NOT_INIT;
        }
        sc035hgs_set_default_mode(nPipeId);
    }

    memset(ptDftParam, 0, sizeof(AX_SENSOR_3A_DEFAULT_PARAM_T));
    AX_SENSOR_SET_3A_DEFAULT_LINEAR_PARAM();

    return AX_SNS_SUCCESS;
#else
    (void)nPipeId;
    SNS_CHECK_PTR_VALID(ptDftParam);
    memset(ptDftParam, 0, sizeof(AX_SENSOR_3A_DEFAULT_PARAM_T));
    return AX_SNS_ERR_NOT_SUPPORT;
#endif
}

AX_S32 sc035hgs_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel)
{
    (void)nPipeId;
    SNS_CHECK_PTR_VALID(ptBlackLevel);

    ptBlackLevel->nBlackLevel[0] = 256; /* 12bit black level 0x40 -> U8.6 */
    ptBlackLevel->nBlackLevel[1] = 256;
    ptBlackLevel->nBlackLevel[2] = 256;
    ptBlackLevel->nBlackLevel[3] = 256;

    return AX_SNS_SUCCESS;
}

AX_SYS_API_PUBLIC AX_SENSOR_REGISTER_FUNC_T gSnssc035hgsObj = {
    .pfn_sensor_chipid                      = sc035hgs_get_chipid,
    .pfn_sensor_init                        = sc035hgs_init,
    .pfn_sensor_exit                        = sc035hgs_exit,
    .pfn_sensor_reset                       = sc035hgs_reset,
    .pfn_sensor_streaming_ctrl              = sc035hgs_streaming_ctrl,
    .pfn_sensor_sleep_wakeup                = sc035hgs_sleep_wakeup,
    .pfn_sensor_testpattern                 = sc035hgs_testpattern_ctrl,
    .pfn_sensor_mirror_flip                 = sc035hgs_mirror_flip,
    .pfn_sensor_set_mode                    = sc035hgs_set_mode,
    .pfn_sensor_get_mode                    = sc035hgs_get_mode,
    .pfn_sensor_set_fps                     = sc035hgs_set_fps,
    .pfn_sensor_get_fps                     = sc035hgs_get_fps,
    .pfn_sensor_set_slaveaddr               = sc035hgs_set_slaveaddr,
    .pfn_sensor_set_bus_info                = sc035hgs_set_bus_info,
    .pfn_sensor_write_register              = sc035hgs_write_register,
    .pfn_sensor_read_register               = sc035hgs_read_register,
    .pfn_sensor_get_isp_default_params      = sc035hgs_get_isp_default_params,
    .pfn_sensor_get_3a_default_params       = sc035hgs_get_3a_default_params,
    .pfn_sensor_get_black_level             = sc035hgs_get_black_level,
    .pfn_sensor_get_hw_exposure_params      = sc035hgs_get_hw_exposure_params,
    .pfn_sensor_get_gain_table              = sc035hgs_get_gain_table,
    .pfn_sensor_set_again                   = sc035hgs_set_again,
    .pfn_sensor_set_dgain                   = sc035hgs_set_dgain,
    .pfn_sensor_hcglcg_ctrl                 = AX_NULL,
    .pfn_sensor_set_integration_time        = sc035hgs_set_integration_time,
    .pfn_sensor_get_integration_time_range  = sc035hgs_get_integration_time_range,
    .pfn_sensor_set_slow_fps                = sc035hgs_set_slow_fps,
    .pfn_sensor_get_slow_shutter_param      = sc035hgs_get_slow_shutter_param,
    .pfn_sensor_get_sns_reg_info            = sc035hgs_ae_get_sensor_reg_info,
};
