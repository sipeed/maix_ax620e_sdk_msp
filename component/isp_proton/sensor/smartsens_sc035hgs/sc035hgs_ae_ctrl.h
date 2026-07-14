#ifndef __SC035HGS_AE_CTRL_H__
#define __SC035HGS_AE_CTRL_H__

#include "ax_base_type.h"
#include "ax_sensor_struct.h"

#define SC035HGS_MAX_VTS        (0xFFFF)
#define SC035HGS_MIN_RATIO      (1.0f)
#define SC035HGS_MAX_RATIO      (1.0f)
#define SC035HGS_MAX_AGAIN      (4.0f)
#define SC035HGS_MAX_DGAIN      (7.96875f)

typedef struct _SNSSC035HGS_OBJ_T_ {
    AX_U32 vts;
    AX_U32 setting_vts;
    AX_U32 init_exp_reg;
    AX_F32 setting_fps;
} SNSSC035HGS_OBJ_T;

typedef enum _SC035HGS_AE_REG_IDX_E_ {
    SC035HGS_EXPLINE_H_IDX,
    SC035HGS_EXPLINE_L_IDX,
    SC035HGS_AGAIN_H_IDX,
    SC035HGS_AGAIN_L_IDX,
    SC035HGS_DGAIN_H_IDX,
    SC035HGS_DGAIN_L_IDX,
    SC035HGS_VTS_H_IDX,
    SC035HGS_VTS_L_IDX,
    SC035HGS_GAIN_MAGIC_0_IDX,
    SC035HGS_GAIN_MAGIC_1_IDX,
    SC035HGS_GAIN_MAGIC_2_IDX,
    SC035HGS_GAIN_MAGIC_3_IDX,
    SC035HGS_GAIN_MAGIC_4_IDX,
    SC035HGS_GAIN_MAGIC_5_IDX,
    SC035HGS_GAIN_MAGIC_6_IDX,
    SC035HGS_GAIN_MAGIC_7_IDX,
    SC035HGS_GAIN_MAGIC_8_IDX,
    SC035HGS_GAIN_MAGIC_9_IDX,
} SC035HGS_AE_REG_IDX_E;

AX_S32 sc035hgs_cfg_aec_param(ISP_PIPE_ID nPipeId);
AX_S32 sc035hgs_get_gain_table(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_TABLE_T *params);
AX_S32 sc035hgs_set_again(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_CFG_T *ptAGain);
AX_S32 sc035hgs_set_dgain(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_CFG_T *ptDGain);
AX_S32 sc035hgs_get_hw_exposure_params(ISP_PIPE_ID nPipeId, AX_SNS_EXP_CTRL_PARAM_T *ptAeCtrlParam);
AX_S32 sc035hgs_get_integration_time_range(ISP_PIPE_ID nPipeId, AX_F32 fHdrRatio,
                                            AX_SNS_AE_INT_TIME_RANGE_T *ptIntTimeRange);
AX_S32 sc035hgs_set_integration_time(ISP_PIPE_ID nPipeId, AX_SNS_AE_SHUTTER_CFG_T *ptIntTime);
AX_S32 sc035hgs_get_fps(ISP_PIPE_ID nPipeId, AX_F32 *pFps);
AX_S32 sc035hgs_set_fps(ISP_PIPE_ID nPipeId, AX_F32 fFps);
AX_S32 sc035hgs_set_slow_fps(ISP_PIPE_ID nPipeId, AX_F32 fFps);
AX_S32 sc035hgs_get_slow_shutter_param(ISP_PIPE_ID nPipeId,
                                        AX_SNS_AE_SLOW_SHUTTER_PARAM_T *ptSlowShutterParam);
AX_S32 sc035hgs_ae_get_sensor_reg_info(ISP_PIPE_ID nPipeId, AX_SNS_REGS_CFG_TABLE_T *ptSnsRegsInfo);
AX_U32 sc035hgs_refresh_all_regs_from_tbl(ISP_PIPE_ID nPipeId);
AX_S32 sc035hgs_update_regidx_table(ISP_PIPE_ID nPipeId, AX_U8 nRegIdx, AX_U8 nRegValue);

#endif
