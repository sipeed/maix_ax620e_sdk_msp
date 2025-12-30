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
#include <math.h>

#include "ax_base_type.h"
#include "ax_isp_common.h"

#include "ax_sensor_struct.h"
#include "isp_sensor_types.h"
#include "isp_sensor_internal.h"

#include "os12d40_reg.h"
#include "os12d40_ae_ctrl.h"
#include "os12d40_settings.h"

#define OS12D40_MAX_VTS         (0xFFFF)
#define OS12D40_MAX_RATIO       (16.0f)
#define OS12D40_MIN_RATIO       (1.0f)

#define OS12D40_MIN_AGAIN       (1.0f)
#define OS12D40_MAX_AGAIN       (15.5f)

#define OS12D40_MIN_DGAIN       (1.0f)
#define OS12D40_MAX_DGAIN       (1.0f) //(15.99f) disable dgain

#define OS12D40_SDR_EXP_LINE_MIN                                      (8.0f)
#define OS12D40_SDR_EXP_LINE_MAX(vts)                                 (vts - 16)
#define OS12D40_SDR_INTEGRATION_TIME_STEP                             (1.0f)

#define OS12D40_HDR_2X_LONG_EXP_LINE_MIN                              (2.0f)
#define OS12D40_HDR_2X_LONG_EXP_LINE_MAX(vts, ratio)                  (((vts - 16) * ratio)/ (ratio + 1))
#define OS12D40_HDR_2X_LONG_INTEGRATION_TIME_STEP                     (1.0f)

#define OS12D40_HDR_2X_SHORT_EXP_LINE_MIN                             (2.0f)
#define OS12D40_HDR_2X_SHORT_EXP_LINE_MAX(vts, ratio)                 (((vts - 16) * 1)/ (ratio + 1))
#define OS12D40_HDR_2X_SHORT_INTEGRATION_TIME_STEP                    (1.0f)

typedef struct SENSOR_OS12D40_S {
    AX_U32 hts;
    AX_U32 vts;
    AX_F32 sclk;
    AX_U32 setting_vts;
    AX_F32 setting_fps;
} SNSOS12D40_OBJ;

typedef struct _OS12D40_AGAIN_TABLE_T_ {
    float gain;
    AX_U8 again_in;
    AX_U8 again_de;
} OS12D40_AGAIN_TABLE_T;

typedef struct _OS12D40_DGAIN_TABLE_T_ {
    float gain;
    AX_U8 dgain_in;
    AX_U8 dgain_de;
    AX_U8 dgain_de2;
} OS12D40_DGAIN_TABLE_T;

extern SNS_STATE_OBJ *g_szOs12d40Ctx[AX_VIN_MAX_PIPE_NUM];
extern AX_U8 gOs12d40SlaveAddr[AX_VIN_MAX_PIPE_NUM];
#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = g_szOs12d40Ctx[dev])

static SNSOS12D40_OBJ sns_os12d40params[AX_VIN_MAX_PIPE_NUM];
static AX_F32 nAgainTable[SENSOR_MAX_GAIN_STEP];
static AX_F32 nDgainTable[SENSOR_MAX_GAIN_STEP];

/*user config*/
static AX_F32 gFpsGear[] = {1.00, 2.00, 3.00, 4.00, 5.00, 6.00, 7.00, 8.00, 9.00, 10.00,
                            11.00, 12.00, 13.00, 14.00, 15.00, 16.00, 17.00, 18.00, 19.00, 20.00,
                            21.00, 22.00, 23.00, 24.00, 25.00, 26.00, 27.00, 28.00, 29.00, 30.00
                           };

AX_U32 g_os12d40MasterVsyncStart = 0x08;  //from setting

typedef enum _AX_SNS_AE_REG_IDX_E_ {
    OS12D40_LONG_EXP_LINE_H_IDX = 0,
    OS12D40_LONG_EXP_LINE_M_IDX,
    OS12D40_LONG_EXP_LINE_L_IDX,
    OS12D40_LONG_AGAIN_H_IDX,
    OS12D40_LONG_AGAIN_L_IDX,
    // OS12D40_LONG_DGAIN_H_IDX,
    // OS12D40_LONG_DGAIN_M_IDX,
    // OS12D40_LONG_DGAIN_L_IDX,

    OS12D40_SHORT_EXP_LINE_H_IDX,
    OS12D40_SHORT_EXP_LINE_M_IDX,
    OS12D40_SHORT_EXP_LINE_L_IDX,
    OS12D40_SHORT_AGAIN_H_IDX,
    OS12D40_SHORT_AGAIN_L_IDX,
    // OS12D40_SHORT_DGAIN_H_IDX,
    // OS12D40_SHORT_DGAIN_M_IDX,
    // OS12D40_SHORT_DGAIN_L_IDX,

    OS12D40_VTS_H_IDX,
    OS12D40_VTS_L_IDX,

    OS12D40_REG_MAX_IDX,
} AX_SNS_AE_REG_IDX_E;

static AX_SNS_DRV_DELAY_TABLE_T gOs12d40AeRegsTable[] = {
    /* regs index */               /* regs addr */           /*regs value*/   /*Delay Frame Num*/
    {OS12D40_LONG_EXP_LINE_H_IDX,   OS12D40_LONG_EXP_LINE_H,       0,          0},
    {OS12D40_LONG_EXP_LINE_M_IDX,   OS12D40_LONG_EXP_LINE_M,       0,          0},
    {OS12D40_LONG_EXP_LINE_L_IDX,   OS12D40_LONG_EXP_LINE_L,       0,          0},
    {OS12D40_LONG_AGAIN_H_IDX,      OS12D40_LONG_AGAIN_H,          0,          0},
    {OS12D40_LONG_AGAIN_L_IDX,      OS12D40_LONG_AGAIN_L,          0,          0},
    // {OS12D40_LONG_DGAIN_H_IDX,      OS12D40_LONG_DGAIN_H,          0,          0},
    // {OS12D40_LONG_DGAIN_M_IDX,      OS12D40_LONG_DGAIN_M,          0,          0},
    // {OS12D40_LONG_DGAIN_L_IDX,      OS12D40_LONG_DGAIN_L,          0,          0},

    {OS12D40_SHORT_EXP_LINE_H_IDX, OS12D40_SHORT_EXP_LINE_H,       0,          0},
    {OS12D40_SHORT_EXP_LINE_M_IDX, OS12D40_SHORT_EXP_LINE_M,       0,          0},
    {OS12D40_SHORT_EXP_LINE_L_IDX, OS12D40_SHORT_EXP_LINE_L,       0,          0},
    {OS12D40_SHORT_AGAIN_H_IDX,    OS12D40_SHORT_AGAIN_H,          0,          0},
    {OS12D40_SHORT_AGAIN_L_IDX,    OS12D40_SHORT_AGAIN_L,          0,          0},
    // {OS12D40_SHORT_DGAIN_H_IDX,    OS12D40_SHORT_DGAIN_H,          0,          0},
    // {OS12D40_SHORT_DGAIN_M_IDX,    OS12D40_SHORT_DGAIN_M,          0,          0},
    // {OS12D40_SHORT_DGAIN_L_IDX,    OS12D40_SHORT_DGAIN_L,          0,          0},

    {OS12D40_VTS_H_IDX,         OS12D40_VTS_H,                     0,          0},
    {OS12D40_VTS_L_IDX,         OS12D40_VTS_L,                     0,          0},
};

const OS12D40_AGAIN_TABLE_T os12d40_again_table[] = {
    {1,        0x01, 0x00},
    {1.062,    0x01, 0x10},
    {1.125,    0x01, 0x20},
    {1.187,    0x01, 0x30},
    {1.25,     0x01, 0x40},
    {1.312,    0x01, 0x50},
    {1.375,    0x01, 0x60},
    {1.437,    0x01, 0x70},
    {1.5,      0x01, 0x80},
    {1.562,    0x01, 0x90},
    {1.625,    0x01, 0xA0},
    {1.687,    0x01, 0xB0},
    {1.75,     0x01, 0xC0},
    {1.812,    0x01, 0xD0},
    {1.875,    0x01, 0xE0},
    {1.937,    0x01, 0xF0},
    {2,        0x02, 0x00},
    {2.125,    0x02, 0x20},
    {2.25,     0x02, 0x40},
    {2.375,    0x02, 0x60},
    {2.5,      0x02, 0x80},
    {2.625,    0x02, 0xA0},
    {2.75,     0x02, 0xC0},
    {2.875,    0x02, 0xE0},
    {3,        0x03, 0x00},
    {3.125,    0x03, 0x20},
    {3.25,     0x03, 0x40},
    {3.375,    0x03, 0x60},
    {3.5,      0x03, 0x80},
    {3.625,    0x03, 0xA0},
    {3.75,     0x03, 0xC0},
    {3.875,    0x03, 0xE0},
    {4,        0x04, 0x00},
    {4.25,     0x04, 0x40},
    {4.5,      0x04, 0x80},
    {4.75,     0x04, 0xC0},
    {5,        0x05, 0x00},
    {5.25,     0x05, 0x40},
    {5.5,      0x05, 0x80},
    {5.75,     0x05, 0xC0},
    {6,        0x06, 0x00},
    {6.25,     0x06, 0x40},
    {6.5,      0x06, 0x80},
    {6.75,     0x06, 0xC0},
    {7,        0x07, 0x00},
    {7.25,     0x07, 0x40},
    {7.5,      0x07, 0x80},
    {7.75,     0x07, 0xC0},
    {8,        0x08, 0x00},
    {8.5,      0x08, 0x80},
    {9,        0x09, 0x00},
    {9.5,      0x09, 0x80},
    {10,       0x0A, 0x00},
    {10.5,     0x0A, 0x80},
    {11,       0x0B, 0x00},
    {11.5,     0x0B, 0x80},
    {12,       0x0C, 0x00},
    {12.5,     0x0C, 0x80},
    {13,       0x0D, 0x00},
    {13.5,     0x0D, 0x80},
    {14,       0x0E, 0x00},
    {14.5,     0x0E, 0x80},
    {15,       0x0F, 0x00},
    {15.5,     0x0F, 0x80},
};

const OS12D40_DGAIN_TABLE_T os12d40_dgain_table[] = {
   /* gain       dg_h  dg_l  dg_ll*/
    {1.00000,    0x01, 0x00,  0x00},
    // {1.03125,    0x01, 0x08,  0x00},
    // {1.06250,    0x01, 0x10,  0x00},
    // {1.09375,    0x01, 0x18,  0x00},
    // {1.12500,    0x01, 0x20,  0x00},
    // {1.15625,    0x01, 0x28,  0x00},
    // {1.18750,    0x01, 0x30,  0x00},
    // {1.21875,    0x01, 0x38,  0x00},
    // {1.25000,    0x01, 0x40,  0x00},
    // {1.28125,    0x01, 0x48,  0x00},
    // {1.31250,    0x01, 0x50,  0x00},
    // {1.34375,    0x01, 0x58,  0x00},
    // {1.37500,    0x01, 0x60,  0x00},
    // {1.40625,    0x01, 0x68,  0x00},
    // {1.43750,    0x01, 0x70,  0x00},
    // {1.46875,    0x01, 0x78,  0x00},
    // {1.50000,    0x01, 0x80,  0x00},
    // {1.53125,    0x01, 0x88,  0x00},
    // {1.56250,    0x01, 0x90,  0x00},
    // {1.59375,    0x01, 0x98,  0x00},
    // {1.62500,    0x01, 0xa0,  0x00},
    // {1.65625,    0x01, 0xa8,  0x00},
    // {1.68750,    0x01, 0xb0,  0x00},
    // {1.71875,    0x01, 0xb8,  0x00},
    // {1.75000,    0x01, 0xc0,  0x00},
    // {1.78125,    0x01, 0xc8,  0x00},
    // {1.81250,    0x01, 0xd0,  0x00},
    // {1.84375,    0x01, 0xd8,  0x00},
    // {1.87500,    0x01, 0xe0,  0x00},
    // {1.90625,    0x01, 0xe8,  0x00},
    // {1.93750,    0x01, 0xf0,  0x00},
    // {1.96875,    0x01, 0xf8,  0x00},
    // {2,          0x02, 0x00,  0x00},
    // {2.125,      0x02, 0x20,  0x00},
    // {2.25,       0x02, 0x40,  0x00},
    // {2.375,      0x02, 0x60,  0x00},
    // {2.5,        0x02, 0x80,  0x00},
    // {2.625,      0x02, 0xa0,  0x00},
    // {2.75,       0x02, 0xc0,  0x00},
    // {2.875,      0x02, 0xe0,  0x00},
    // {3,          0x03, 0x00,  0x00},
    // {3.125,      0x03, 0x20,  0x00},
    // {3.25,       0x03, 0x40,  0x00},
    // {3.375,      0x03, 0x60,  0x00},
    // {3.5,        0x03, 0x80,  0x00},
    // {3.625,      0x03, 0xa0,  0x00},
    // {3.75,       0x03, 0xc0,  0x00},
    // {3.875,      0x03, 0xe0,  0x00},
    // {4,          0x04, 0x00,  0x00},
    // {4.25,       0x04, 0x40,  0x00},
    // {4.5,        0x04, 0x80,  0x00},
    // {4.75,       0x04, 0xc0,  0x00},
    // {5,          0x05, 0x00,  0x00},
    // {5.25,       0x05, 0x40,  0x00},
    // {5.5,        0x05, 0x80,  0x00},
    // {5.75,       0x05, 0xc0,  0x00},
    // {6,          0x06, 0x00,  0x00},
    // {6.25,       0x06, 0x40,  0x00},
    // {6.5,        0x06, 0x80,  0x00},
    // {6.75,       0x06, 0xc0,  0x00},
    // {7,          0x07, 0x00,  0x00},
    // {7.25,       0x07, 0x40,  0x00},
    // {7.5,        0x07, 0x80,  0x00},
    // {7.75,       0x07, 0xc0,  0x00},
    // {8,          0x08, 0x00,  0x00},
    // {8.5,        0x08, 0x80,  0x00},
    // {9,          0x09, 0x00,  0x00},
    // {9.5,        0x09, 0x80,  0x00},
    // {10,         0x0A, 0x00,  0x00},
    // {10.5,       0x0A, 0x80,  0x00},
    // {11,         0x0B, 0x00,  0x00},
    // {11.5,       0x0B, 0x80,  0x00},
    // {12,         0x0C, 0x00,  0x00},
    // {12.5,       0x0C, 0x80,  0x00},
    // {13,         0x0D, 0x00,  0x00},
    // {13.5,       0x0D, 0x80,  0x00},
    // {14,         0x0E, 0x00,  0x00},
    // {14.5,       0x0E, 0x80,  0x00},
    // {15,         0x0F, 0x00,  0x00},
    // {15.5,       0x0F, 0x80,  0x00},
    // {15.99,      0X0F, 0xfd,  0x40},
};


AX_F32 os12d40_again2value(float gain, AX_U8 *again_in, AX_U8 *again_de)
{
    AX_U32 i;
    AX_U32 count;
    AX_U32 ret_value = 0;

    if (!again_in || !again_de)
        return -1;

    count = sizeof(os12d40_again_table) / sizeof(os12d40_again_table[0]);

    for (i = 0; i < count; i++) {
        if (gain > os12d40_again_table[i].gain) {
            continue;
        } else {
            *again_in = os12d40_again_table[i].again_in;
            *again_de = os12d40_again_table[i].again_de;
            SNS_DBG("again=%f, again_in=0x%x, again_de=0x%x\n", gain, *again_in, *again_de);
            return os12d40_again_table[i].gain;
        }
    }

    return -1;
}

AX_F32 os12d40_dgain2value(float gain, AX_U8 *dgain_in, AX_U8 *dgain_de, AX_U8 *dgain_de2)
{
    AX_U32 i;
    AX_U32 count;
    AX_U32 ret_value = 0;

    if (!dgain_in || !dgain_de || !dgain_de2)
        return -1;

    count = sizeof(os12d40_dgain_table) / sizeof(os12d40_dgain_table[0]);

    for (i = 0; i < count; i++) {
        if (gain > os12d40_dgain_table[i].gain) {
            continue;
        } else {
            *dgain_in = os12d40_dgain_table[i].dgain_in;
            *dgain_de = os12d40_dgain_table[i].dgain_de;
            *dgain_de2 = os12d40_dgain_table[i].dgain_de2;
            SNS_DBG("dgain=%f, dgain_in=0x%x, dgain_de=0x%x dgain_de2=0x%x\n", gain, *dgain_in, *dgain_de, *dgain_de2);

            return os12d40_dgain_table[i].gain;
        }
    }

    return -1;
}


AX_S32 os12d40_get_gain_table(AX_SNS_AE_GAIN_TABLE_T *params)
{
    AX_U32 i;
    AX_S32 ret = 0;
    if (!params)
        return -1;

    params->nAgainTableSize = sizeof(os12d40_again_table) / sizeof(os12d40_again_table[0]);
    params->nDgainTableSize = sizeof(os12d40_dgain_table) / sizeof(os12d40_dgain_table[0]);

    for (i = 0; i < params->nAgainTableSize ; i++) {
        nAgainTable[i] = os12d40_again_table[i].gain;
        params->pAgainTable = nAgainTable;
    }

    for (i = 0; i < params->nDgainTableSize ; i++) {
        nDgainTable[i] = os12d40_dgain_table[i].gain;
        params->pDgainTable = nDgainTable;
    }

    return ret;
}

static AX_S32 os12d40_set_exp_limit(ISP_PIPE_ID nPipeId, AX_F32 fHdrRatio)
{
    AX_F32 ratio = 1.0;
    SNS_STATE_OBJ *sns_obj = NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);


    if (IS_LINEAR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
        sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX] = OS12D40_SDR_EXP_LINE_MIN;
        sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX] = OS12D40_SDR_EXP_LINE_MAX(sns_os12d40params[nPipeId].vts);
        sns_obj->ae_ctrl_param.sns_ae_param.fIntegrationTimeIncrement[HDR_LONG_FRAME_IDX] = OS12D40_SDR_INTEGRATION_TIME_STEP;
    } else if (IS_2DOL_HDR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
        sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX] = OS12D40_HDR_2X_LONG_EXP_LINE_MIN;
        sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX] = OS12D40_HDR_2X_LONG_EXP_LINE_MAX(sns_os12d40params[nPipeId].vts, fHdrRatio);
        sns_obj->ae_ctrl_param.sns_ae_param.fIntegrationTimeIncrement[HDR_LONG_FRAME_IDX] = OS12D40_HDR_2X_LONG_INTEGRATION_TIME_STEP;

        sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX] = OS12D40_HDR_2X_SHORT_EXP_LINE_MIN;
        sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX] = OS12D40_HDR_2X_SHORT_EXP_LINE_MAX(sns_os12d40params[nPipeId].vts, fHdrRatio);
        sns_obj->ae_ctrl_param.sns_ae_param.fIntegrationTimeIncrement[HDR_MEDIUM_FRAME_IDX] = OS12D40_HDR_2X_SHORT_INTEGRATION_TIME_STEP;
    } else {
        // wrong hdr mode
    }

    SNS_DBG("userRatio:%.2f, userVts:0x%x, limitRatio:%.2f, limitExp:%.2f-%.2f-%.2f-%.2f\n",
            fHdrRatio, sns_os12d40params[nPipeId].vts, ratio,
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX],
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX],
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX],
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX]);

    return AX_SNS_SUCCESS;
}


AX_S32 os12d40_get_params_from_setting(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    AX_U32 vts = 0;
    AX_U32 hts = 0;
    AX_F32 sclk = 0;
    AX_U32 reg_cnt = 0;
    camera_i2c_reg_array *setting = AX_NULL;

    ret = os12d40_select_setting(nPipeId, &setting, &reg_cnt);
    if (ret) {
        return ret;
    }

    ret |= os12d40_get_vts_from_setting(nPipeId, setting, reg_cnt, &vts);
    ret |= os12d40_get_hts_from_setting(nPipeId, setting, reg_cnt, &hts);
    ret |= os12d40_get_sclk_from_setting(nPipeId, setting, reg_cnt, &sclk);
    if (ret) {
        return ret;
    }

    sns_os12d40params[nPipeId].vts = vts;
    sns_os12d40params[nPipeId].hts = hts;
    sns_os12d40params[nPipeId].sclk = sclk;

    SNS_DBG("pipe:%d, get setting params vts:0x%x, hts:0x%x, sclk:%f\n",
            nPipeId, sns_os12d40params[nPipeId].vts, sns_os12d40params[nPipeId].hts,
            sns_os12d40params[nPipeId].sclk);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_cfg_aec_param(ISP_PIPE_ID nPipeId)
{
    AX_U32 VsyncStart = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    os12d40_get_params_from_setting(nPipeId);
    sns_obj->sns_mode_obj.nVts = sns_os12d40params[nPipeId].vts;
    sns_os12d40params[nPipeId].setting_vts = sns_os12d40params[nPipeId].vts;
    sns_os12d40params[nPipeId].setting_fps = sns_obj->sns_mode_obj.fFrameRate;

    sns_obj->ae_ctrl_param.fTimePerLine = sns_os12d40params[nPipeId].hts / sns_os12d40params[nPipeId].sclk * SNS_1_SECOND_UNIT_US;
    if (IS_2DOL_HDR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
        sns_obj->ae_ctrl_param.fTimePerLine *= 2;
    }

    /* sensor again  limit*/
    sns_obj->ae_ctrl_param.sns_ae_limit.fMinAgain[HDR_LONG_FRAME_IDX] = OS12D40_MIN_AGAIN;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxAgain[HDR_LONG_FRAME_IDX] = OS12D40_MAX_AGAIN;
    sns_obj->ae_ctrl_param.sns_ae_param.fAGainIncrement[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 16;

    /* sensor dgain  limit*/
    sns_obj->ae_ctrl_param.sns_ae_limit.fMinDgain[HDR_LONG_FRAME_IDX] = OS12D40_MIN_DGAIN;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxDgain[HDR_LONG_FRAME_IDX] = OS12D40_MAX_DGAIN;
    sns_obj->ae_ctrl_param.sns_ae_param.fDGainIncrement[HDR_LONG_FRAME_IDX] = (AX_F32)1 / 1024;

    /* sensor medium again limit*/
    sns_obj->ae_ctrl_param.sns_ae_limit.fMinAgain[HDR_MEDIUM_FRAME_IDX] = OS12D40_MIN_AGAIN;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxAgain[HDR_MEDIUM_FRAME_IDX] = OS12D40_MAX_AGAIN;
    sns_obj->ae_ctrl_param.sns_ae_param.fAGainIncrement[HDR_MEDIUM_FRAME_IDX] = (AX_F32)1 / 16;

    /* sensor medium dgain limit*/
    sns_obj->ae_ctrl_param.sns_ae_limit.fMinDgain[HDR_MEDIUM_FRAME_IDX] = OS12D40_MIN_DGAIN;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxDgain[HDR_MEDIUM_FRAME_IDX] = OS12D40_MAX_DGAIN;
    sns_obj->ae_ctrl_param.sns_ae_param.fDGainIncrement[HDR_MEDIUM_FRAME_IDX] = (AX_F32)1 / 1024;

    sns_obj->ae_ctrl_param.sns_ae_limit.fMinRatio = OS12D40_MIN_RATIO;
    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxRatio = OS12D40_MAX_RATIO;
    os12d40_set_exp_limit(nPipeId, OS12D40_MAX_RATIO);

    sns_obj->ae_ctrl_param.sns_ae_param.fCurRatio = OS12D40_MAX_RATIO;
    sns_obj->ae_ctrl_param.eSnsHcgLcgMode = AX_LCG_NOTSUPPORT_MODE;

    SNS_DBG("line_period=%f, vts = %d \n",
            sns_obj->ae_ctrl_param.fTimePerLine, sns_obj->sns_mode_obj.nVts);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_sns_update_regidx_table(ISP_PIPE_ID nPipeId, AX_U8 nRegIdx, AX_U8 nRegValue)
{
    AX_S32 i = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sns_obj->sztRegsInfo[0].sztData.sztI2cData[nRegIdx].nData = nRegValue;

    SNS_DBG("Idx = %d, reg addr 0x%x, reg data 0x%x\n",
        nRegIdx, sns_obj->sztRegsInfo[0].sztData.sztI2cData[nRegIdx].nRegAddr, nRegValue);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_sensor_gain_table(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_TABLE_T *params)
{
    AX_S32 result = 0;
    SNS_CHECK_PTR_VALID(params);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    result = os12d40_get_gain_table(params);
    return result;

    return AX_SNS_SUCCESS;
}


AX_S32 os12d40_set_again(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_CFG_T *ptAGain)
{
    AX_U8 Gain_in;
    AX_U8 Gain_de;
    AX_S32 result = 0;
    AX_F32 gain_value = 0;
    AX_F32 nGainFromUser = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptAGain);

    /* long gain seting */
    nGainFromUser = ptAGain->fGain[HDR_LONG_FRAME_IDX];
    nGainFromUser = AXSNS_CLIP3(nGainFromUser, sns_obj->ae_ctrl_param.sns_ae_limit.fMinAgain[HDR_LONG_FRAME_IDX],
                                sns_obj->ae_ctrl_param.sns_ae_limit.fMaxAgain[HDR_LONG_FRAME_IDX]);

    gain_value = os12d40_again2value(nGainFromUser, &Gain_in, &Gain_de);
    if (gain_value == -1) {
        SNS_ERR("new gain match failed \n");
    } else {
        sns_obj->ae_ctrl_param.sns_ae_param.fCurAGain[HDR_LONG_FRAME_IDX] = gain_value;
        result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_AGAIN_H_IDX, (Gain_in & 0x3F));
        result |= os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_AGAIN_L_IDX, (Gain_de & 0xFE));
        if (result != 0) {
            SNS_ERR("write hw failed %d \n", result);
            return result;
        }
    }

    /* medium gain seting */
    if (IS_HDR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {

        nGainFromUser = ptAGain->fGain[HDR_MEDIUM_FRAME_IDX];
        nGainFromUser = AXSNS_CLIP3(nGainFromUser, sns_obj->ae_ctrl_param.sns_ae_limit.fMinAgain[HDR_MEDIUM_FRAME_IDX],
                                    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxAgain[HDR_MEDIUM_FRAME_IDX]);

        gain_value = os12d40_again2value(nGainFromUser, &Gain_in, &Gain_de);
        if (gain_value == -1) {
            SNS_ERR(" new gain match failed \n");
        } else {
            sns_obj->ae_ctrl_param.sns_ae_param.fCurAGain[HDR_MEDIUM_FRAME_IDX] = gain_value;
            result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_AGAIN_H_IDX, (Gain_in & 0x3F));
            result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_AGAIN_L_IDX, (Gain_de & 0xFE));
            if (result != 0) {
                SNS_ERR("%s: write hw failed %d \n", __func__, result);
                return result;
            }
        }
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_set_dgain(ISP_PIPE_ID nPipeId, AX_SNS_AE_GAIN_CFG_T *ptDGain)
{
    AX_U8 Gain_in;
    AX_U8 Gain_de;
    AX_U8 Gain_de2;
    AX_S32 result = 0;
    AX_F32 gain_val = 0;
    AX_F32 nGainFromUser = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptDGain);

    /* long frame digital gain seting */
    nGainFromUser = ptDGain->fGain[HDR_LONG_FRAME_IDX];
    nGainFromUser = AXSNS_CLIP3(nGainFromUser, sns_obj->ae_ctrl_param.sns_ae_limit.fMinDgain[HDR_LONG_FRAME_IDX],
                                sns_obj->ae_ctrl_param.sns_ae_limit.fMaxDgain[HDR_LONG_FRAME_IDX]);

    gain_val = os12d40_dgain2value(nGainFromUser, &Gain_in, &Gain_de, &Gain_de2);
    if (gain_val == -1) {
        SNS_ERR("new gain match failed \n");
    } else {
        sns_obj->ae_ctrl_param.sns_ae_param.fCurDGain[HDR_LONG_FRAME_IDX] = gain_val;
        // result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_DGAIN_H_IDX, (Gain_in & 0x0F));
        // result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_DGAIN_M_IDX, (Gain_de & 0xFF));
        // result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_DGAIN_L_IDX, (Gain_de & 0xC0));
        if (result != 0) {
            SNS_ERR("write hw failed %d \n", result);
            return result;
        }
    }

    /* medium frame digital gain seting */
    if (IS_HDR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
        nGainFromUser = ptDGain->fGain[HDR_MEDIUM_FRAME_IDX];
        nGainFromUser = AXSNS_CLIP3(nGainFromUser, sns_obj->ae_ctrl_param.sns_ae_limit.fMinDgain[HDR_MEDIUM_FRAME_IDX],
                                    sns_obj->ae_ctrl_param.sns_ae_limit.fMaxDgain[HDR_MEDIUM_FRAME_IDX]);

        gain_val = os12d40_dgain2value(nGainFromUser, &Gain_in, &Gain_de, &Gain_de2);
        if (gain_val == -1) {
            SNS_ERR("new gain match failed \n");
        } else {
            sns_obj->ae_ctrl_param.sns_ae_param.fCurDGain[HDR_MEDIUM_FRAME_IDX] = gain_val;
            // result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_DGAIN_H_IDX, (Gain_in & 0x0F));
            // result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_DGAIN_M_IDX, (Gain_de & 0xFF));
            // result = os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_DGAIN_L_IDX, (Gain_de & 0xC0));
            if (result != 0) {
                SNS_ERR("write hw failed %d \n", result);
                return result;
            }
        }
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_integration_time_range(ISP_PIPE_ID nPipeId, AX_F32 fHdrRatio,
        AX_SNS_AE_INT_TIME_RANGE_T *ptIntTimeRange)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_F32 ratio = 0.0f;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptIntTimeRange);

    if (AX_SNS_LINEAR_MODE == sns_obj->sns_mode_obj.eHDRMode) {
        ptIntTimeRange->fMaxIntegrationTime[HDR_LONG_FRAME_IDX] =
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX];
        ptIntTimeRange->fMinIntegrationTime[HDR_LONG_FRAME_IDX] =
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX];
    } else if (AX_SNS_HDR_2X_MODE == sns_obj->sns_mode_obj.eHDRMode) {
        ratio = AXSNS_CLIP3(fHdrRatio, sns_obj->ae_ctrl_param.sns_ae_limit.fMinRatio, sns_obj->ae_ctrl_param.sns_ae_limit.fMaxRatio);
        sns_obj->ae_ctrl_param.sns_ae_param.fCurRatio = ratio;
        if (fabs(ratio) <= EPS) {
            SNS_ERR("hdr ratio is error \n");
        }

        os12d40_set_exp_limit(nPipeId, sns_obj->ae_ctrl_param.sns_ae_param.fCurRatio);

        ptIntTimeRange->fMaxIntegrationTime[HDR_LONG_FRAME_IDX] =
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_LONG_FRAME_IDX];
        ptIntTimeRange->fMinIntegrationTime[HDR_LONG_FRAME_IDX] =
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_LONG_FRAME_IDX];
        ptIntTimeRange->fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX] =
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX];
        ptIntTimeRange->fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX] =
            sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange.fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX];
    } else {
        // do nothing
    }

    SNS_DBG("shutterLongFrame[Max:%.6f Min:%.6f], shutterShortFrame[Max:%.6f Min:%.6f] fTimePerLine:%.6f \n",
            ptIntTimeRange->fMaxIntegrationTime[HDR_LONG_FRAME_IDX], ptIntTimeRange->fMinIntegrationTime[HDR_LONG_FRAME_IDX],
            ptIntTimeRange->fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX], ptIntTimeRange->fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX], sns_obj->ae_ctrl_param.fTimePerLine);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_set_integration_time(ISP_PIPE_ID nPipeId, AX_SNS_AE_SHUTTER_CFG_T *ptIntTime)
{
    AX_U8 ex_h;
    AX_U8 ex_m;
    AX_U8 ex_l;
    AX_U32 ex_ival = 0;
    AX_S32 result = 0;
    AX_F32 fExpLineFromUser = 0;
    AX_U32 LineGap = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_SNS_AE_INT_TIME_RANGE_T *int_time_range = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(ptIntTime);

    SNS_DBG("Exptime:%.2f-%.2f-%.2f-%.2f, Hdrratio:%.2f-%.2f-%.2f-%.2f\n",
            ptIntTime->fIntTime[0], ptIntTime->fIntTime[1], ptIntTime->fIntTime[2], ptIntTime->fIntTime[3],
            ptIntTime->fHdrRatio[0], ptIntTime->fHdrRatio[1], ptIntTime->fHdrRatio[2], ptIntTime->fHdrRatio[3]);

    int_time_range = &sns_obj->ae_ctrl_param.sns_ae_limit.tIntTimeRange;
    fExpLineFromUser = ptIntTime->fIntTime[HDR_LONG_FRAME_IDX];

    fExpLineFromUser = AXSNS_CLIP3(fExpLineFromUser,
                                    int_time_range->fMinIntegrationTime[HDR_LONG_FRAME_IDX],
                                    int_time_range->fMaxIntegrationTime[HDR_LONG_FRAME_IDX]);

    ex_ival = fExpLineFromUser;
    ex_l = ex_ival & 0xFF;
    ex_m = (ex_ival & 0xFF00) >> 8;
    ex_h = (ex_ival & 0xF0000) >> 16;

    os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_EXP_LINE_H_IDX, ex_h);
    os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_EXP_LINE_M_IDX, ex_m);
    os12d40_sns_update_regidx_table(nPipeId, OS12D40_LONG_EXP_LINE_L_IDX, ex_l);

    sns_obj->ae_ctrl_param.sns_ae_param.fCurIntegrationTime[HDR_LONG_FRAME_IDX] = ex_ival;

    if (IS_HDR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
        fExpLineFromUser = ptIntTime->fIntTime[HDR_MEDIUM_FRAME_IDX];

        fExpLineFromUser = AXSNS_CLIP3(fExpLineFromUser,
                                        int_time_range->fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX],
                                        int_time_range->fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX]);

        ex_ival = fExpLineFromUser;

        //LineGap < Height
        LineGap = ex_ival + os12d40_get_l2s_offset(nPipeId);
        if(LineGap > sns_obj->sns_mode_obj.nHeight) {
            ex_ival = sns_obj->sns_mode_obj.nHeight - os12d40_get_l2s_offset(nPipeId);
        }

        ex_l = ex_ival & 0xFF;
        ex_m = (ex_ival & 0xFF00) >> 8;
        ex_h = (ex_ival & 0xF0000) >> 16;

        os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_EXP_LINE_H_IDX, ex_h);
        os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_EXP_LINE_M_IDX, ex_m);
        os12d40_sns_update_regidx_table(nPipeId, OS12D40_SHORT_EXP_LINE_L_IDX, ex_l);

        sns_obj->ae_ctrl_param.sns_ae_param.fCurIntegrationTime[HDR_MEDIUM_FRAME_IDX] = ex_ival;
    }

    SNS_DBG("shuttterSet eLFHdrMode:%u shutterLongFrame[Max:%.6f Min:%.6f], shutterShortFrame[Max:%.6f Min:%.6f] fTimePerLine:%.6f\n",
            sns_obj->eLFHdrMode, int_time_range->fMaxIntegrationTime[HDR_LONG_FRAME_IDX], int_time_range->fMinIntegrationTime[HDR_LONG_FRAME_IDX],
            int_time_range->fMaxIntegrationTime[HDR_MEDIUM_FRAME_IDX], int_time_range->fMinIntegrationTime[HDR_MEDIUM_FRAME_IDX], sns_obj->ae_ctrl_param.fTimePerLine);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_hw_exposure_params(ISP_PIPE_ID nPipeId, AX_SNS_EXP_CTRL_PARAM_T *ptAeCtrlParam)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(ptAeCtrlParam);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    memcpy(ptAeCtrlParam, &sns_obj->ae_ctrl_param, sizeof(AX_SNS_EXP_CTRL_PARAM_T));
    memcpy(&ptAeCtrlParam->sns_dev_attr, &sns_obj->sns_attr_param, sizeof(AX_SNS_ATTR_T));

    return AX_SNS_SUCCESS;
}

/****************************************************************************
 * exposure control function
 ****************************************************************************/
AX_S32 os12d40_sns_refresh_all_regs_from_tbl(ISP_PIPE_ID nPipeId)
{
    AX_S32 i = 0;
    AX_U32 nNum = 0;
    AX_U32  nRegValue;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    nNum = sizeof(gOs12d40AeRegsTable) / sizeof(gOs12d40AeRegsTable[0]);

    for (i = 0; i < nNum; i++) {
        nRegValue = os12d40_reg_read(nPipeId, gOs12d40AeRegsTable[i].nRegAddr);
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr = gOs12d40AeRegsTable[i].nRegAddr;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData = nRegValue;

        SNS_DBG(" nRegAddr 0x%x, nRegValue 0x%x\n", gOs12d40AeRegsTable[i].nRegAddr, gOs12d40AeRegsTable[i].nRegValue);
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_sns_update_init_exposure_reg(ISP_PIPE_ID nPipeId)
{
    int i = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
        os12d40_write_register(nPipeId, sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr, sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData);
        SNS_DBG("Idx = %d, reg addr 0x%x, reg data 0x%x\n",
            i, sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr, sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData);
    }

    return AX_SNS_SUCCESS;
}

static AX_VOID _sns_reg_info_init(ISP_PIPE_ID nPipeId, SNS_STATE_OBJ *sns_obj)
{
    AX_S32 i = 0;

    sns_obj->sztRegsInfo[0].eSnsType = ISP_SNS_CONNECT_I2C_TYPE;
    sns_obj->sztRegsInfo[0].tComBus.I2cDev = os12d40_get_bus_num(nPipeId);
    sns_obj->sztRegsInfo[0].nRegNum = sizeof(gOs12d40AeRegsTable) / sizeof(gOs12d40AeRegsTable[0]);
    sns_obj->sztRegsInfo[0].nCfg2ValidDelayMax = 2;

    for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_TRUE;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDevAddr = gOs12d40SlaveAddr[nPipeId];
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nAddrByteNum = OS12D40_ADDR_BYTE;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDataByteNum = OS12D40_DATA_BYTE;
        sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nDelayFrmNum = gOs12d40AeRegsTable[i].nDelayFrmNum;
        if (IS_LINEAR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nIntPos = AX_SNS_L_FSOF;
        } else {
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nIntPos = AX_SNS_S_FSOF;
        }
        SNS_DBG("[%2d] nRegAddr 0x%x, nRegValue 0x%x\n", i,
                gOs12d40AeRegsTable[i].nRegAddr, gOs12d40AeRegsTable[i].nRegValue);
    }

    return;
}

static AX_VOID _sns_reg_info_update(ISP_PIPE_ID nPipeId, SNS_STATE_OBJ *sns_obj, AX_BOOL *bUpdateReg)
{
    AX_S32 i = 0;
    // SNS_CHECK_PTR_VALID(bUpdateReg);

    for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
        if (sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData == sns_obj->sztRegsInfo[1].sztData.sztI2cData[i].nData) {
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_FALSE;
        } else {
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].bUpdate = AX_TRUE;
            *bUpdateReg = AX_TRUE;

            SNS_DBG("[%2d] nRegAddr 0x%x, nRegValue 0x%x\n", i,
                    sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr, sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData);
        }
    }

    return;
}

AX_S32 os12d40_ae_get_sensor_reg_info(ISP_PIPE_ID nPipeId, AX_SNS_REGS_CFG_TABLE_T *ptSnsRegsInfo)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_BOOL bUpdateReg = AX_FALSE;

    SNS_CHECK_PTR_VALID(ptSnsRegsInfo);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if ((AX_FALSE == sns_obj->bSyncInit) || (AX_FALSE == ptSnsRegsInfo->bConfig)) {
        /* sync config */
        SNS_DBG(" bSyncInit %d, bConfig %d\n", sns_obj->bSyncInit, ptSnsRegsInfo->bConfig);

        _sns_reg_info_init(nPipeId, sns_obj);

        bUpdateReg = AX_TRUE;
        sns_obj->bSyncInit = AX_TRUE;
        os12d40_sns_update_init_exposure_reg(nPipeId);
    } else {
        _sns_reg_info_update(nPipeId, sns_obj, &bUpdateReg);
    }

    if (AX_TRUE == bUpdateReg) {
        sns_obj->sztRegsInfo[0].bConfig = AX_FALSE;
    } else {
        sns_obj->sztRegsInfo[0].bConfig = AX_TRUE;
    }

    memcpy(ptSnsRegsInfo, &sns_obj->sztRegsInfo[0], sizeof(AX_SNS_REGS_CFG_TABLE_T));
    /* Save the current register table */
    memcpy(&sns_obj->sztRegsInfo[1], &sns_obj->sztRegsInfo[0], sizeof(AX_SNS_REGS_CFG_TABLE_T));

    return nRet;
}

static AX_U32 os12d40_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts)
{
    AX_U8 vts_h;
    AX_U8 vts_l;
    AX_S32 result = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_l = vts & 0xFF;
    vts_h = (vts & 0xFF00) >> 8;

    result |= os12d40_sns_update_regidx_table(nPipeId, OS12D40_VTS_H_IDX, vts_h);
    result |= os12d40_sns_update_regidx_table(nPipeId, OS12D40_VTS_L_IDX, vts_l);

    return result;
}

AX_S32 os12d40_get_fps(ISP_PIPE_ID nPipeId, AX_F32 *pFps)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_PTR_VALID(pFps);
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    *pFps = sns_obj->ae_ctrl_param.sns_ae_param.fCurFps;

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_slow_shutter_param(ISP_PIPE_ID nPipeId, AX_SNS_AE_SLOW_SHUTTER_PARAM_T *ptSlowShutterParam)
{
    AX_S32 framerate = 30;
    AX_U32 nfps = 0;
    AX_U32 nVts = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;


    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    framerate = sns_obj->sns_mode_obj.fFrameRate;
    if (SNS_MAX_FRAME_RATE < framerate) {
        SNS_ERR("framerate out of range : %d\n", framerate);
        return AX_SNS_ERR_ILLEGAL_PARAM;
    }
    if (sns_obj->ae_ctrl_param.fTimePerLine == 0) {
        SNS_ERR("line_period is zero : %f\n", sns_obj->ae_ctrl_param.fTimePerLine);
        return AX_SNS_ERR_ILLEGAL_PARAM;
    }

    ptSlowShutterParam->nGroupNum = AXSNS_MIN((sizeof(gFpsGear) / sizeof(AX_F32)), framerate);
    //ax_sns_quick_sort_float(gFpsGear, ptSlowShutterParam->nGroupNum);
    ptSlowShutterParam->fMinFps = AXSNS_MAX(gFpsGear[0],
                                            (1 * SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine * OS12D40_MAX_VTS)));

    for (nfps = 0 ; nfps < ptSlowShutterParam->nGroupNum; nfps++) {
        nVts = 1 * SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine * gFpsGear[nfps]);
        if ((AX_S32)gFpsGear[nfps] >= framerate) {
            nVts = sns_obj->sns_mode_obj.nVts;
        }
        if (nVts > OS12D40_MAX_VTS) {
            nVts = OS12D40_MAX_VTS;
            SNS_WRN("Beyond minmum fps  %f\n", ptSlowShutterParam->fMinFps);
        }

        if (IS_LINEAR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
            ptSlowShutterParam->tSlowShutterTbl[nfps].fMaxIntTime = OS12D40_SDR_EXP_LINE_MAX(nVts);
        } else if (IS_2DOL_HDR_MODE(sns_obj->sns_mode_obj.eHDRMode)) {
            ptSlowShutterParam->tSlowShutterTbl[nfps].fMaxIntTime = OS12D40_HDR_2X_LONG_EXP_LINE_MAX(nVts, OS12D40_MAX_RATIO);
        }

        ptSlowShutterParam->tSlowShutterTbl[nfps].fRealFps = 1 * SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine
                * nVts);
        ptSlowShutterParam->fMaxFps  =  ptSlowShutterParam->tSlowShutterTbl[nfps].fRealFps;

        SNS_DBG("nPipeId = %d, line_period = %.2f, fps = %.2f, fMaxIntTime = %.2f(%.2f), vts=0x%x\n",
                nPipeId, sns_obj->ae_ctrl_param.fTimePerLine,
                ptSlowShutterParam->tSlowShutterTbl[nfps].fRealFps,
                ptSlowShutterParam->tSlowShutterTbl[nfps].fMaxIntTime,
                ptSlowShutterParam->tSlowShutterTbl[nfps].fMaxIntTime * sns_obj->ae_ctrl_param.fTimePerLine,
                nVts);
    }

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_set_fps(ISP_PIPE_ID nPipeId, AX_F32 fFps)
{
    AX_U32 vts = 0;
    AX_S32 result = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (IS_SNS_FPS_EQUAL(fFps, sns_os12d40params[nPipeId].setting_fps) || fFps >= sns_os12d40params[nPipeId].setting_fps) {
        vts = sns_os12d40params[nPipeId].setting_vts;
    } else {
        vts = 1 * SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine * fFps);
        if (vts > OS12D40_MAX_VTS){
            vts = OS12D40_MAX_VTS;
            SNS_WRN("Beyond max vts:0x%x\n", vts);
        }
    }

    result = os12d40_set_vts(nPipeId, vts);
    if (result != 0) {
        SNS_ERR("%s: write vts failed %d \n", __func__, result);
        return result;
    }
    sns_os12d40params[nPipeId].vts = vts;

    if (IS_SNS_FPS_EQUAL(fFps, sns_obj->sns_attr_param.fFrameRate)) {
        sns_obj->sns_mode_obj.nVts = vts;
        sns_obj->sns_mode_obj.fFrameRate = sns_obj->sns_attr_param.fFrameRate;
    }

    os12d40_set_exp_limit(nPipeId, OS12D40_MAX_RATIO);
    sns_obj->ae_ctrl_param.sns_ae_param.fCurFps = 1 * SNS_1_SECOND_UNIT_US / (sns_obj->ae_ctrl_param.fTimePerLine *
            sns_os12d40params[nPipeId].vts);

    SNS_DBG("nPipeId = %d, fps(from alg) = %f, current vts = 0x%x\n", nPipeId, fFps, sns_os12d40params[nPipeId].vts);

    return AX_SNS_SUCCESS;
}
