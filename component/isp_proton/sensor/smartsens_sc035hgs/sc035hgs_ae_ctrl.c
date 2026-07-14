#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "ax_base_type.h"
#include "ax_isp_common.h"
#include "isp_sensor_internal.h"
#include "isp_sensor_types.h"
#include "sensor_user_debug.h"

#include "sc035hgs.h"
#include "sc035hgs_reg.h"
#include "sc035hgs_ae_ctrl.h"
#include "sc035hgs_settings.h"

extern AX_U8 gSc035hgsSlaveAddr[AX_VIN_MAX_PIPE_NUM];

static SNSSC035HGS_OBJ_T gSc035hgsParams[AX_VIN_MAX_PIPE_NUM];
static AX_F32 gAgainTable[SENSOR_MAX_GAIN_STEP];
static AX_F32 gDgainTable[SENSOR_MAX_GAIN_STEP];
AX_U8 gSc035hgsSlaveMode[AX_VIN_MAX_PIPE_NUM] = {0};

typedef struct _SC035HGS_GAIN_SEG_T_ {
    AX_U32 gainMin;
    AX_U32 gainMax;
    AX_U32 idxBase;
    AX_U8 regGain;
    AX_U8 regGainFineBase;
    AX_U8 regGainFineStep;
    AX_U8 stepOrd;
} SC035HGS_GAIN_SEG_T;

static const SC035HGS_GAIN_SEG_T gAgainInfo[] = {
    {1024, 1984, 0,  0x00, 0x10, 1, 6},
    {2048, 3968, 16, 0x01, 0x10, 1, 7},
    {4096, 4096, 32, 0x03, 0x10, 1, 8},
};

static const SC035HGS_GAIN_SEG_T gDgainInfo[] = {
    {1024, 2040, 0,   0x00, 0x80, 1, 3},
    {2048, 4080, 128, 0x01, 0x80, 1, 4},
    {4096, 8160, 256, 0x03, 0x80, 1, 5},
};

static AX_U32 sc035hgs_get_exp_reg_from_setting(camera_i2c_reg_array *setting, AX_U32 reg_cnt)
{
    AX_U32 i = 0;
    AX_U8 exp_h = 0x18;
    AX_U8 exp_l = 0xf0;

    if (AX_NULL == setting) {
        return ((AX_U32)exp_h << 8) | exp_l;
    }

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == SC035HGS_EXPLINE_H) {
            exp_h = (setting + i)->value;
        } else if ((setting + i)->addr == SC035HGS_EXPLINE_L) {
            exp_l = (setting + i)->value;
        }
    }

    return ((AX_U32)exp_h << 8) | exp_l;
}

static AX_SNS_DRV_DELAY_TABLE_T gSc035hgsAeRegsTableMaster[] = {
    {SC035HGS_EXPLINE_H_IDX,      SC035HGS_EXPLINE_H,    0x18, 0},
    {SC035HGS_EXPLINE_L_IDX,      SC035HGS_EXPLINE_L,    0xf0, 0},
    {SC035HGS_AGAIN_H_IDX,        SC035HGS_AGAIN_H,      0x03, 1},
    {SC035HGS_AGAIN_L_IDX,        SC035HGS_AGAIN_L,      0x10, 1},
    {SC035HGS_DGAIN_H_IDX,        SC035HGS_DGAIN_H,      0x0c, 1},
    {SC035HGS_DGAIN_L_IDX,        SC035HGS_DGAIN_L,      0x80, 1},
    {SC035HGS_VTS_H_IDX,          SC035HGS_VTS_H,        0x02, 0},
    {SC035HGS_VTS_L_IDX,          SC035HGS_VTS_L,        0x03, 0},
    {SC035HGS_GAIN_MAGIC_0_IDX,   SC035HGS_GAIN_MAGIC_0, 0x1e, 1},
    {SC035HGS_GAIN_MAGIC_1_IDX,   SC035HGS_GAIN_MAGIC_1, 0x1b, 1},
    {SC035HGS_GAIN_MAGIC_2_IDX,   SC035HGS_GAIN_MAGIC_2, 0x58, 1},
    {SC035HGS_GAIN_MAGIC_3_IDX,   SC035HGS_GAIN_MAGIC_3, 0x3c, 1},
    {SC035HGS_GAIN_MAGIC_4_IDX,   SC035HGS_GAIN_MAGIC_4, 0x3c, 1},
    {SC035HGS_GAIN_MAGIC_5_IDX,   SC035HGS_GAIN_MAGIC_5, 0x40, 1},
    {SC035HGS_GAIN_MAGIC_6_IDX,   SC035HGS_GAIN_MAGIC_6, 0x44, 1},
    {SC035HGS_GAIN_MAGIC_7_IDX,   SC035HGS_GAIN_MAGIC_7, 0x44, 1},
    {SC035HGS_GAIN_MAGIC_8_IDX,   SC035HGS_GAIN_MAGIC_8, 0x48, 1},
    {SC035HGS_GAIN_MAGIC_9_IDX,   SC035HGS_GAIN_MAGIC_9, 0x4a, 1},
};

static AX_SNS_DRV_DELAY_TABLE_T gSc035hgsAeRegsTableSlave[] = {
    {SC035HGS_EXPLINE_H_IDX,      SC035HGS_EXPLINE_H,    0x18, 0},
    {SC035HGS_EXPLINE_L_IDX,      SC035HGS_EXPLINE_L,    0xf0, 0},
    {SC035HGS_AGAIN_H_IDX,        SC035HGS_AGAIN_H,      0x03, 1},
    {SC035HGS_AGAIN_L_IDX,        SC035HGS_AGAIN_L,      0x10, 1},
    {SC035HGS_DGAIN_H_IDX,        SC035HGS_DGAIN_H,      0x0c, 1},
    {SC035HGS_DGAIN_L_IDX,        SC035HGS_DGAIN_L,      0x80, 1},
    {SC035HGS_GAIN_MAGIC_0_IDX,   SC035HGS_GAIN_MAGIC_0, 0x1e, 1},
    {SC035HGS_GAIN_MAGIC_1_IDX,   SC035HGS_GAIN_MAGIC_1, 0x1b, 1},
    {SC035HGS_GAIN_MAGIC_2_IDX,   SC035HGS_GAIN_MAGIC_2, 0x58, 1},
    {SC035HGS_GAIN_MAGIC_3_IDX,   SC035HGS_GAIN_MAGIC_3, 0x3c, 1},
    {SC035HGS_GAIN_MAGIC_4_IDX,   SC035HGS_GAIN_MAGIC_4, 0x3c, 1},
    {SC035HGS_GAIN_MAGIC_5_IDX,   SC035HGS_GAIN_MAGIC_5, 0x40, 1},
    {SC035HGS_GAIN_MAGIC_6_IDX,   SC035HGS_GAIN_MAGIC_6, 0x44, 1},
    {SC035HGS_GAIN_MAGIC_7_IDX,   SC035HGS_GAIN_MAGIC_7, 0x44, 1},
    {SC035HGS_GAIN_MAGIC_8_IDX,   SC035HGS_GAIN_MAGIC_8, 0x48, 1},
    {SC035HGS_GAIN_MAGIC_9_IDX,   SC035HGS_GAIN_MAGIC_9, 0x4a, 1},
};

static AX_U32 sc035hgs_calc_gain_idx(AX_U32 gain, const SC035HGS_GAIN_SEG_T *table, AX_U32 cnt)
{
    AX_S32 i = 0;
    const SC035HGS_GAIN_SEG_T *info = &table[cnt - 1];

    gain = AXSNS_CLIP3(gain, table[0].gainMin, table[cnt - 1].gainMax);
    if (gain >= info->gainMax) {
        return info->idxBase + ((info->gainMax - info->gainMin) >> info->stepOrd);
    }

    for (i = cnt - 1; i >= 0; i--) {
        info = &table[i];
        if (gain >= info->gainMin) {
            return info->idxBase + ((gain - info->gainMin) >> info->stepOrd);
        }
    }

    return 0;
}

static const SC035HGS_GAIN_SEG_T *sc035hgs_gain_info_from_idx(AX_U32 idx,
                                                              const SC035HGS_GAIN_SEG_T *table,
                                                              AX_U32 cnt)
{
    AX_S32 i = 0;

    for (i = cnt - 1; i >= 0; i--) {
        if (idx >= table[i].idxBase) {
            return &table[i];
        }
    }

    return &table[0];
}

static AX_U32 sc035hgs_gain_from_idx(AX_U32 idx, const SC035HGS_GAIN_SEG_T *table, AX_U32 cnt)
{
    const SC035HGS_GAIN_SEG_T *info = sc035hgs_gain_info_from_idx(idx, table, cnt);
    AX_U32 gain = ((idx - info->idxBase) << info->stepOrd) + info->gainMin;
    return AXSNS_CLIP3(gain, info->gainMin, info->gainMax);
}

static void sc035hgs_set_gain_magic(ISP_PIPE_ID nPipeId, AX_U8 regGain)
{
    if (regGain == 0x00) {
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_0_IDX, 0x1e);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_1_IDX, 0x1b);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_2_IDX, 0x58);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_3_IDX, 0x3c);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_4_IDX, 0x3c);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_5_IDX, 0x40);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_6_IDX, 0x44);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_7_IDX, 0x44);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_8_IDX, 0x48);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_9_IDX, 0x4a);
    } else if (regGain == 0x01) {
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_0_IDX, 0x6f);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_1_IDX, 0x10);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_2_IDX, 0x48);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_3_IDX, 0x5c);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_4_IDX, 0x5c);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_5_IDX, 0x60);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_6_IDX, 0x64);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_7_IDX, 0x64);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_8_IDX, 0x68);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_9_IDX, 0x4c);
    } else {
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_0_IDX, 0x76);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_1_IDX, 0x15);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_2_IDX, 0x48);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_3_IDX, 0x5c);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_4_IDX, 0x5c);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_5_IDX, 0x60);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_6_IDX, 0x64);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_7_IDX, 0x64);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_8_IDX, 0x68);
        sc035hgs_update_regidx_table(nPipeId, SC035HGS_GAIN_MAGIC_9_IDX, 0x4c);
    }
}

AX_S32 sc035hgs_update_regidx_table(ISP_PIPE_ID nPipeId, AX_U8 nRegIdx, AX_U8 nRegValue)
{
    AX_U32 i = 0;
    AX_U32 reg_addr = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_VALUE_RANGE_VALID(nRegIdx, 0, sizeof(gSc035hgsAeRegsTableMaster) / sizeof(gSc035hgsAeRegsTableMaster[0]) - 1);

    reg_addr = gSc035hgsAeRegsTableMaster[nRegIdx].nRegAddr;
    for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
        if (sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr == reg_addr) {
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData = nRegValue;
            return AX_SNS_SUCCESS;
        }
    }

    return AX_SNS_ERR_BAD_ADDR;
}

AX_U32 sc035hgs_refresh_all_regs_from_tbl(ISP_PIPE_ID nPipeId)
{
    AX_U32 i = 0;
    AX_U32 reg_num = 0;
    AX_SNS_DRV_DELAY_TABLE_T *reg_table = AX_NULL;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (gSc035hgsSlaveMode[nPipeId]) {
        reg_table = gSc035hgsAeRegsTableSlave;
        reg_num = sizeof(gSc035hgsAeRegsTableSlave) / sizeof(gSc035hgsAeRegsTableSlave[0]);
    } else {
        reg_table = gSc035hgsAeRegsTableMaster;
        reg_num = sizeof(gSc035hgsAeRegsTableMaster) / sizeof(gSc035hgsAeRegsTableMaster[0]);
    }

    sns_obj->sztRegsInfo[0].eSnsType = ISP_SNS_CONNECT_I2C_TYPE;
    sns_obj->sztRegsInfo[0].tComBus.I2cDev = sc035hgs_get_bus_num(nPipeId);
    sns_obj->sztRegsInfo[0].nRegNum = reg_num;
    sns_obj->sztRegsInfo[0].nCfg2ValidDelayMax = 2;
    sns_obj->sztRegsInfo[0].bConfig = AX_FALSE;

    for (i = 0; i < reg_num; i++) {
        AX_U32 reg_value = reg_table[i].nRegValue;

        if (reg_table[i].nRegAddr == SC035HGS_EXPLINE_H) {
            reg_value = (gSc035hgsParams[nPipeId].init_exp_reg >> 8) & 0xff;
        } else if (reg_table[i].nRegAddr == SC035HGS_EXPLINE_L) {
            reg_value = gSc035hgsParams[nPipeId].init_exp_reg & 0xff;
        } else if (reg_table[i].nRegAddr == SC035HGS_VTS_H) {
            reg_value = (gSc035hgsParams[nPipeId].setting_vts >> 8) & 0xff;
        } else if (reg_table[i].nRegAddr == SC035HGS_VTS_L) {
            reg_value = gSc035hgsParams[nPipeId].setting_vts & 0xff;
        }

        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_TRUE;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDevAddr = gSc035hgsSlaveAddr[nPipeId];
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nAddrByteNum = SC035HGS_ADDR_BYTE;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDataByteNum = SC035HGS_DATA_BYTE;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr = reg_table[i].nRegAddr;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData = reg_value;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDelayFrmNum = reg_table[i].nDelayFrmNum;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nIntPos = AX_SNS_L_FSOF;
    }

    memcpy(&sns_obj->sztRegsInfo[1], &sns_obj->sztRegsInfo[0], sizeof(AX_SNS_REGS_CFG_TABLE_T));

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_cfg_aec_param(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_U32 i = 0;
    AX_U32 reg_cnt = 0;
    AX_U32 init_exp_reg = 0;
    AX_F32 init_exp_line = 0.0f;
    camera_i2c_reg_array *setting = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sc035hgs_select_setting(nPipeId, &setting, &reg_cnt);
    sc035hgs_get_vts_from_setting(setting, reg_cnt, &gSc035hgsParams[nPipeId].vts);
    init_exp_reg = sc035hgs_get_exp_reg_from_setting(setting, reg_cnt);
    gSc035hgsParams[nPipeId].setting_vts = gSc035hgsParams[nPipeId].vts;
    gSc035hgsParams[nPipeId].init_exp_reg = init_exp_reg;
    gSc035hgsParams[nPipeId].setting_fps = SC035HGS_SENSOR_MAX_FPS;
    sns_obj->sns_mode_obj.nVts = gSc035hgsParams[nPipeId].vts;
    init_exp_line = (AX_F32)init_exp_reg / 16.0f;

    sns_obj->ae_ctrl_param.fTimePerLine =
        (AX_F32)SNS_1_SECOND_UNIT_US / (gSc035hgsParams[nPipeId].setting_vts * gSc035hgsParams[nPipeId].setting_fps);
    sns_obj->ae_ctrl_param.fLineTime = sns_obj->ae_ctrl_param.fTimePerLine;

    sns_obj->ae_ctrl_param.sns_ae_limit.fMinRatio = SC035HGS_MIN_RATIO;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxRatio = SC035HGS_MAX_RATIO;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMinAgain[HDR_LONG_FRAME_IDX] = 1.0f;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxAgain[HDR_LONG_FRAME_IDX] = SC035HGS_MAX_AGAIN;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMinDgain[HDR_LONG_FRAME_IDX] = 1.0f;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxDgain[HDR_LONG_FRAME_IDX] = SC035HGS_MAX_DGAIN;
    sns_obj->ae_ctrl_param.sns_ae_param.fAGainIncrement[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 64;
    sns_obj->ae_ctrl_param.sns_ae_param.fDGainIncrement[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 128;
    sns_obj->ae_ctrl_param.sns_ae_param.fIspDGainIncrement[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 256;
    sns_obj->ae_ctrl_param.sns_ae_param.fIntegrationTimeIncrement[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 16;
    sns_obj->ae_ctrl_param.sns_ae_param.fCurFps = sns_obj->sns_mode_obj.fFrameRate;
    sns_obj->ae_ctrl_param.sns_ae_param.fCurAGain[HDR_LONG_FRAME_IDX] = 1.0f;
    sns_obj->ae_ctrl_param.sns_ae_param.fCurDGain[HDR_LONG_FRAME_IDX] = 1.0f;
    sns_obj->ae_ctrl_param.sns_ae_param.fCurIntegrationTime[HDR_LONG_FRAME_IDX] = init_exp_line;
    sns_obj->ae_ctrl_param.eSnsHcgLcgMode = AX_LCG_NOTSUPPORT_MODE;
    sns_obj->ae_ctrl_param.fSnsHcgLcgRatio = 1.0f;
    sns_obj->ae_ctrl_param.fInitIntegrationTime = init_exp_line;
    sns_obj->ae_ctrl_param.fInitAGain = 1.0f;
    sns_obj->ae_ctrl_param.fInitDGain = 1.0f;

    sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 16;
    sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX] =
        (AX_F32)(sns_obj->sns_mode_obj.nVts - 6);

    for (i = 1; i < HDR_MAX_FRAME_NUM; i++) {
        sns_obj->ae_ctrl_param.sns_ae_limit.fMinAgain[i] = 1.0f;
        sns_obj->ae_ctrl_param.sns_ae_limit.fMaxAgain[i] = SC035HGS_MAX_AGAIN;
        sns_obj->ae_ctrl_param.sns_ae_limit.fMinDgain[i] = 1.0f;
        sns_obj->ae_ctrl_param.sns_ae_limit.fMaxDgain[i] = SC035HGS_MAX_DGAIN;
    }

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_gain_table(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_TABLE_T *params)
{
    AX_U32 i = 0;
    AX_U32 idx = 0;
    AX_U32 gain = 0;
    AX_U32 again_max_idx = sc035hgs_calc_gain_idx(4096, gAgainInfo, sizeof(gAgainInfo) / sizeof(gAgainInfo[0]));
    AX_U32 dgain_max_idx = sc035hgs_calc_gain_idx(8160, gDgainInfo, sizeof(gDgainInfo) / sizeof(gDgainInfo[0]));

    SNS_CHECK_PTR_VALID(params);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    for (idx = 0; idx <= again_max_idx && idx < SENSOR_MAX_GAIN_STEP; idx++) {
        gain = sc035hgs_gain_from_idx(idx, gAgainInfo, sizeof(gAgainInfo) / sizeof(gAgainInfo[0]));
        gAgainTable[idx] = (AX_F32)gain / 1024.0f;
    }
    for (i = 0; i <= dgain_max_idx && i < SENSOR_MAX_GAIN_STEP; i++) {
        gain = sc035hgs_gain_from_idx(i, gDgainInfo, sizeof(gDgainInfo) / sizeof(gDgainInfo[0]));
        gDgainTable[i] = (AX_F32)gain / 1024.0f;
    }

    params->nAgainTableSize = again_max_idx + 1;
    params->pAgainTable = gAgainTable;
    params->nDgainTableSize = dgain_max_idx + 1;
    params->pDgainTable = gDgainTable;

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_set_again(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_CFG_T *ptAGain)
{
    AX_U32 gain = 0;
    AX_U32 idx = 0;
    const SC035HGS_GAIN_SEG_T *info = AX_NULL;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptAGain);

    ptAGain->fGain[HDR_LONG_FRAME_IDX] = AXSNS_CLIP3(ptAGain->fGain[HDR_LONG_FRAME_IDX], 1.0f, SC035HGS_MAX_AGAIN);
    gain = (AX_U32)(ptAGain->fGain[HDR_LONG_FRAME_IDX] * 1024.0f + 0.5f);
    idx = sc035hgs_calc_gain_idx(gain, gAgainInfo, sizeof(gAgainInfo) / sizeof(gAgainInfo[0]));
    info = sc035hgs_gain_info_from_idx(idx, gAgainInfo, sizeof(gAgainInfo) / sizeof(gAgainInfo[0]));

    sc035hgs_update_regidx_table(nPipeId, SC035HGS_AGAIN_H_IDX, ((info->regGain & 0x7) << 2) | 0x3);
    sc035hgs_update_regidx_table(nPipeId, SC035HGS_AGAIN_L_IDX,
                                 info->regGainFineBase + (idx - info->idxBase) * info->regGainFineStep);
    sc035hgs_set_gain_magic(nPipeId, info->regGain);

    gain = sc035hgs_gain_from_idx(idx, gAgainInfo, sizeof(gAgainInfo) / sizeof(gAgainInfo[0]));
    sns_obj->ae_ctrl_param.sns_ae_param.fCurAGain[HDR_LONG_FRAME_IDX] = (AX_F32)gain / 1024.0f;

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_set_dgain(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_CFG_T *ptDGain)
{
    AX_U32 gain = 0;
    AX_U32 idx = 0;
    const SC035HGS_GAIN_SEG_T *info = AX_NULL;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptDGain);

    ptDGain->fGain[HDR_LONG_FRAME_IDX] = AXSNS_CLIP3(ptDGain->fGain[HDR_LONG_FRAME_IDX], 1.0f, SC035HGS_MAX_DGAIN);
    gain = (AX_U32)(ptDGain->fGain[HDR_LONG_FRAME_IDX] * 1024.0f + 0.5f);
    idx = sc035hgs_calc_gain_idx(gain, gDgainInfo, sizeof(gDgainInfo) / sizeof(gDgainInfo[0]));
    info = sc035hgs_gain_info_from_idx(idx, gDgainInfo, sizeof(gDgainInfo) / sizeof(gDgainInfo[0]));

    sc035hgs_update_regidx_table(nPipeId, SC035HGS_DGAIN_H_IDX, 0x0c | (info->regGain & 0x3));
    sc035hgs_update_regidx_table(nPipeId, SC035HGS_DGAIN_L_IDX,
                                 info->regGainFineBase + (idx - info->idxBase) * info->regGainFineStep);

    gain = sc035hgs_gain_from_idx(idx, gDgainInfo, sizeof(gDgainInfo) / sizeof(gDgainInfo[0]));
    sns_obj->ae_ctrl_param.sns_ae_param.fCurDGain[HDR_LONG_FRAME_IDX] = (AX_F32)gain / 1024.0f;

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_hw_exposure_params(ISP_PIPE_ID nPipeId, AX_SNS_EXP_CTRL_PARAM_T *ptAeCtrlParam)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptAeCtrlParam);

    memcpy(ptAeCtrlParam, &sns_obj->ae_ctrl_param, sizeof(AX_SNS_EXP_CTRL_PARAM_T));
    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_integration_time_range(ISP_PIPE_ID nPipeId, AX_F32 fHdrRatio,
                                            AX_SNS_AE_INT_TIME_RANGE_T *ptIntTimeRange)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    (void)fHdrRatio;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptIntTimeRange);

    memcpy(ptIntTimeRange, &sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange,
           sizeof(AX_SNS_AE_INT_TIME_RANGE_T));

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_set_integration_time(ISP_PIPE_ID nPipeId, AX_SNS_AE_SHUTTER_CFG_T *ptIntTime)
{
    AX_U32 exp_reg = 0;
    AX_F32 exp_line = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptIntTime);

    exp_line = AXSNS_CLIP3(ptIntTime->fIntTime[HDR_LONG_FRAME_IDX],
                           sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX],
                           sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX]);
    exp_reg = (AX_U32)(exp_line * 16.0f + 0.5f);

    sc035hgs_update_regidx_table(nPipeId, SC035HGS_EXPLINE_H_IDX, (exp_reg >> 8) & 0xff);
    sc035hgs_update_regidx_table(nPipeId, SC035HGS_EXPLINE_L_IDX, exp_reg & 0xff);
    sns_obj->ae_ctrl_param.sns_ae_param.fCurIntegrationTime[HDR_LONG_FRAME_IDX] = (AX_F32)exp_reg / 16.0f;

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_fps(ISP_PIPE_ID nPipeId, AX_F32 *pFps)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(pFps);

    *pFps = sns_obj->ae_ctrl_param.sns_ae_param.fCurFps;
    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_set_fps(ISP_PIPE_ID nPipeId, AX_F32 fFps)
{
    AX_U32 vts = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (fFps < 0.95f || fFps > SC035HGS_SENSOR_MAX_FPS) {
        SNS_ERR("framerate:%f out of range:[0.95,%f]\n", fFps, SC035HGS_SENSOR_MAX_FPS);
        return AX_SNS_ERR_ILLEGAL_PARAM;
    }

    vts = (AX_U32)(gSc035hgsParams[nPipeId].setting_vts * gSc035hgsParams[nPipeId].setting_fps / fFps + 0.5f);
    vts = AXSNS_CLIP3(vts, gSc035hgsParams[nPipeId].setting_vts, SC035HGS_MAX_VTS);

    if (sns_obj->sns_mode_obj.eMasterSlaveSel != AX_SNS_SYNC_SLAVE) {
        sc035hgs_set_vts(nPipeId, vts);
    }

    sns_obj->sns_mode_obj.nVts = vts;
    sns_obj->sns_mode_obj.fFrameRate = SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine * vts);
    sns_obj->ae_ctrl_param.sns_ae_param.fCurFps = sns_obj->sns_mode_obj.fFrameRate;
    sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX] = (AX_F32)(vts - 6);

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_set_slow_fps(ISP_PIPE_ID nPipeId, AX_F32 fFps)
{
    return sc035hgs_set_fps(nPipeId, fFps);
}

AX_S32 sc035hgs_get_slow_shutter_param(ISP_PIPE_ID nPipeId,
                                        AX_SNS_AE_SLOW_SHUTTER_PARAM_T *ptSlowShutterParam)
{
    AX_U32 i = 0;
    AX_F32 fps = 1.0f;
    AX_U32 vts = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptSlowShutterParam);

    memset(ptSlowShutterParam, 0, sizeof(AX_SNS_AE_SLOW_SHUTTER_PARAM_T));
    ptSlowShutterParam->fMaxFps = SC035HGS_SENSOR_MAX_FPS;
    ptSlowShutterParam->fMinFps = 0.95f;
    ptSlowShutterParam->nGroupNum = SNS_MAX_FRAME_RATE;

    for (i = 0; i < SNS_MAX_FRAME_RATE; i++) {
        fps = (AX_F32)(i + 1);
        vts = (AX_U32)(SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine * fps) + 0.5f);
        vts = AXSNS_CLIP3(vts, gSc035hgsParams[nPipeId].setting_vts, SC035HGS_MAX_VTS);
        ptSlowShutterParam->tSlowShutterTbl[i].fMaxIntTime = (AX_F32)(vts - 6);
        ptSlowShutterParam->tSlowShutterTbl[i].fRealFps =
            SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine * vts);
    }

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_ae_get_sensor_reg_info(ISP_PIPE_ID nPipeId, AX_SNS_REGS_CFG_TABLE_T *ptSnsRegsInfo)
{
    AX_U32 i = 0;
    AX_U32 j = 0;
    AX_U32 reg_num = 0;
    AX_U32 old_reg_num = 0;
    AX_U8 reg_value = 0;
    AX_BOOL bUpdateReg = AX_FALSE;
    AX_SNS_DRV_DELAY_TABLE_T *reg_table = AX_NULL;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptSnsRegsInfo);

    if (gSc035hgsSlaveMode[nPipeId]) {
        reg_table = gSc035hgsAeRegsTableSlave;
        reg_num = sizeof(gSc035hgsAeRegsTableSlave) / sizeof(gSc035hgsAeRegsTableSlave[0]);
    } else {
        reg_table = gSc035hgsAeRegsTableMaster;
        reg_num = sizeof(gSc035hgsAeRegsTableMaster) / sizeof(gSc035hgsAeRegsTableMaster[0]);
    }

    if ((AX_FALSE == sns_obj->bSyncInit) || (AX_FALSE == ptSnsRegsInfo->bConfig)) {
        old_reg_num = sns_obj->sztRegsInfo[0].nRegNum;
        sns_obj->sztRegsInfo[0].eSnsType = ISP_SNS_CONNECT_I2C_TYPE;
        sns_obj->sztRegsInfo[0].tComBus.I2cDev = sc035hgs_get_bus_num(nPipeId);
        sns_obj->sztRegsInfo[0].nRegNum = reg_num;
        sns_obj->sztRegsInfo[0].nCfg2ValidDelayMax = 2;
        sns_obj->bSyncInit = AX_TRUE;
        for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
            reg_value = reg_table[i].nRegValue;
            for (j = 0; j < old_reg_num; j++) {
                if (sns_obj->sztRegsInfo[0].sztData.sztI2cData[j].nRegAddr == reg_table[i].nRegAddr) {
                    reg_value = sns_obj->sztRegsInfo[0].sztData.sztI2cData[j].nData;
                    break;
                }
            }
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_TRUE;
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDevAddr = gSc035hgsSlaveAddr[nPipeId];
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nAddrByteNum = SC035HGS_ADDR_BYTE;
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDataByteNum = SC035HGS_DATA_BYTE;
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr = reg_table[i].nRegAddr;
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData = reg_value;
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDelayFrmNum = reg_table[i].nDelayFrmNum;
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nIntPos = AX_SNS_L_FSOF;
        }
        bUpdateReg = AX_TRUE;
    } else {
        for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
            if (sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData ==
                sns_obj->sztRegsInfo[1].sztData.sztI2cData[i].nData) {
                sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_FALSE;
            } else {
                sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_TRUE;
                bUpdateReg = AX_TRUE;
            }
        }
    }

    sns_obj->sztRegsInfo[0].bConfig = (AX_TRUE == bUpdateReg) ? AX_FALSE : AX_TRUE;

    memcpy(ptSnsRegsInfo, &sns_obj->sztRegsInfo[0], sizeof(AX_SNS_REGS_CFG_TABLE_T));
    memcpy(&sns_obj->sztRegsInfo[1], &sns_obj->sztRegsInfo[0], sizeof(AX_SNS_REGS_CFG_TABLE_T));

    return AX_SNS_SUCCESS;
}
