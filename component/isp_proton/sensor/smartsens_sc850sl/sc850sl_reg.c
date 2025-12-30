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
#include "ax_base_type.h"
#include "ax_isp_common.h"

#include "i2c.h"
#include "isp_sensor_types.h"
#include "isp_sensor_internal.h"

#include "sc850sl_reg.h"
#include "sc850sl_settings.h"
#include "sc850sl_ae_ctrl.h"


extern SNS_STATE_OBJ *g_szsc850slCtx[AX_VIN_MAX_PIPE_NUM];
#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = g_szsc850slCtx[dev])

static AX_SNS_COMMBUS_T gsc850slBusInfo[AX_VIN_MAX_PIPE_NUM] = { {{0}}, {{2}},};
AX_U8 gSc850slSlaveAddr[AX_VIN_MAX_PIPE_NUM] = {0x30, 0x30};

AX_S32 sc850sl_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo)
{
    gsc850slBusInfo[nPipeId].I2cDev = tSnsBusInfo.I2cDev;
    gsc850slBusInfo[nPipeId].nPwdnGpio = tSnsBusInfo.nPwdnGpio;

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_get_bus_num(ISP_PIPE_ID nPipeId)
{
    return gsc850slBusInfo[nPipeId].I2cDev;
}

AX_S32 sc850sl_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nslaveaddr)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (nslaveaddr == SC850SL_SLAVE_ADDR || nslaveaddr == SC850SL_SLAVE_ADDR1)
        gSc850slSlaveAddr[nPipeId] = nslaveaddr;
    else
        gSc850slSlaveAddr[nPipeId] = SC850SL_SLAVE_ADDR;

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_sensor_i2c_init(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 snsId = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sns_obj->sns_i2c_obj.sns_i2c_fd = -1;
    sns_obj->sns_i2c_obj.slave_addr = gSc850slSlaveAddr[nPipeId];
    sns_obj->sns_i2c_obj.address_byte = SC850SL_ADDR_BYTE;
    sns_obj->sns_i2c_obj.data_byte = SC850SL_DATA_BYTE;
    sns_obj->sns_i2c_obj.swap_byte = SC850SL_SWAP_BYTES;

    sns_obj->sns_i2c_obj.sns_i2c_bnum = sc850sl_get_bus_num(nPipeId);

    sns_obj->sns_i2c_obj.sns_i2c_fd = i2c_init(sns_obj->sns_i2c_obj.sns_i2c_bnum,
                                      sns_obj->sns_i2c_obj.slave_addr);

    SNS_DBG("sc850sl i2c init finish, i2c bus %d \n", sns_obj->sns_i2c_obj.sns_i2c_bnum);

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_sensor_i2c_exit(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    ret = i2c_exit(sns_obj->sns_i2c_obj.sns_i2c_fd);

    return ret;
}

AX_S32 sc850sl_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData)
{
    AX_U8 data;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 nRet = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd)
        return AX_SNS_ERR_NOT_INIT;

    nRet = i2c_read(sns_obj->sns_i2c_obj.sns_i2c_fd,
             sns_obj->sns_i2c_obj.slave_addr,
             nAddr,
             sns_obj->sns_i2c_obj.address_byte,
             (AX_U8 *)(pData),
             sns_obj->sns_i2c_obj.data_byte,
             sns_obj->sns_i2c_obj.swap_byte);

    return nRet;
}

AX_S32 sc850sl_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr)
{
    AX_U8 data;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 nRet = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd)
        return AX_SNS_ERR_NOT_INIT;

    i2c_read(sns_obj->sns_i2c_obj.sns_i2c_fd,
             sns_obj->sns_i2c_obj.slave_addr,
             addr,
             sns_obj->sns_i2c_obj.address_byte,
             (AX_U8 *)(&data),
             sns_obj->sns_i2c_obj.data_byte,
             sns_obj->sns_i2c_obj.swap_byte);

    return data;
}

AX_S32 sc850sl_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd)
        return AX_SNS_ERR_NOT_INIT;

    nRet = i2c_write(sns_obj->sns_i2c_obj.sns_i2c_fd, sns_obj->sns_i2c_obj.slave_addr, addr,
                     sns_obj->sns_i2c_obj.address_byte,
                     (AX_U8 *)(&data), sns_obj->sns_i2c_obj.data_byte, sns_obj->sns_i2c_obj.swap_byte);

    return nRet;
}


AX_S32 sc850sl_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val)
{
    FILE *fp = AX_NULL;
    char file_name[50];
    char buf[10];

    sprintf(file_name, "/sys/class/gpio/gpio%d", gpio_num);
    if (0 != access(file_name, F_OK)) {
        sprintf(file_name, "/sys/class/gpio/export");
        fp = fopen(file_name, "w");
        if (fp == AX_NULL) {
            SNS_ERR("Cannot open %s.\n", file_name);
            return AX_SNS_ERR_ILLEGAL_PARAM;
        }
        fprintf(fp, "%d", gpio_num);
        fclose(fp);

        sprintf(file_name, "/sys/class/gpio/gpio%d/direction", gpio_num);
        fp = fopen(file_name, "w");
        if (fp == AX_NULL) {
            SNS_ERR("Cannot open %s.\n", file_name);
            return AX_SNS_ERR_ILLEGAL_PARAM;
        }
        fprintf(fp, "out");
        fclose(fp);
    }

    sprintf(file_name, "/sys/class/gpio/gpio%d/value", gpio_num);
    fp = fopen(file_name, "w");
    if (fp == AX_NULL) {
        SNS_ERR("Cannot open %s.\n", file_name);
        return AX_SNS_ERR_ILLEGAL_PARAM;
    }
    if (gpio_out_val) {
        strcpy(buf, "1");
    } else {
        strcpy(buf, "0");
    }
    fprintf(fp, "%s", buf);
    fclose(fp);

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio)
{
    AX_S32 result = 0;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    result |= sc850sl_hw_reset(nResetGpio, 0);
    usleep(5);
    result |= sc850sl_hw_reset(nResetGpio, 1);
    usleep(5 * 1000);

    return result;
}

AX_U32 sc850sl_get_vts(ISP_PIPE_ID nPipeId)
{
    AX_U8 vts_h = 0;
    AX_U8 vts_l = 0;
    AX_U32 vts = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_h = sc850sl_reg_read(nPipeId, SC850SL_VTS_L_H);
    vts_l = sc850sl_reg_read(nPipeId, SC850SL_VTS_L_L);
    vts = (AX_U32)(((vts_h & 0xFF) << 8) | (AX_U32)(vts_l & 0xFF));

    return vts;
}

AX_U32 sc850sl_get_vts_s(ISP_PIPE_ID nPipeId)
{
    AX_U8 vts_s_h = 0;
    AX_U8 vts_s_l = 0;
    AX_U32 vts_s = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_s_h = sc850sl_reg_read(nPipeId, SC850SL_VTS_S_H);
    vts_s_l = sc850sl_reg_read(nPipeId, SC850SL_VTS_S_L);

    vts_s = vts_s_h << 8 | vts_s_l;

    return vts_s;
}

AX_U32 sc850sl_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts)
{
    AX_U8 vts_h;
    AX_U8 vts_l;
    AX_S32 result = 0;
    AX_U8 rb_rows_h;
    AX_U8 rb_rows_l;
    AX_U32 rb_rows = 0;

    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    vts_l = vts & 0xFF;
    vts_h = (vts & 0xFF00) >> 8;

    result |= sc850sl_sns_update_regidx_table(nPipeId, SC850SL_VTS_L_H_IDX, vts_h);
    result |= sc850sl_sns_update_regidx_table(nPipeId, SC850SL_VTS_L_L_IDX, vts_l);

    if (sns_obj->sns_mode_obj.eHDRMode == AX_SNS_HDR_2X_MODE) {
        rb_rows = vts - 1;
        rb_rows_l = rb_rows & 0xFF;
        rb_rows_h = (rb_rows & 0xFF00) >> 8;
        result |= sc850sl_sns_update_regidx_table(nPipeId, SC850SL_RB_ROWS_H_IDX, rb_rows_h);
        result |= sc850sl_sns_update_regidx_table(nPipeId, SC850SL_RB_ROWS_L_IDX, rb_rows_l);
    }

    return result;
}

AX_U32 sc850sl_set_vts_s(ISP_PIPE_ID nPipeId, AX_U32 vts_s)
{
    AX_U8 vts_s_h = 0;
    AX_U8 vts_s_l = 0;
    AX_S32 result = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_s_h = (vts_s & 0xFF00) >> 8;
    vts_s_l = vts_s & 0xFF;

    result |= sc850sl_sns_update_regidx_table(nPipeId, SC850SL_VTS_S_H_IDX, vts_s_h);
    result |= sc850sl_sns_update_regidx_table(nPipeId, SC850SL_VTS_S_L_IDX, vts_s_l);

    return result;
}


AX_U32 sc850sl_get_hts(ISP_PIPE_ID nPipeId)
{
    AX_U8 hts_l = 0;
    AX_U8 hts_h = 0;
    AX_U32 hts = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    hts_h = sc850sl_reg_read(nPipeId, SC850SL_HTS_H);
    hts_l = sc850sl_reg_read(nPipeId, SC850SL_HTS_L);

    hts = hts_h << 8 | hts_l;

    return hts;
}

AX_F32 sc850sl_get_exp_offset_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_F32 *exp_offset)
{
    AX_U32 i = 0;
    AX_U32 hts = 0;

    //default value
    AX_U8 hts_high = 0x02;
    AX_U8 hts_low  = 0x26;
    AX_U8 reg_3301 = 0x20;
    AX_U8 reg_3302 = 0x0c;
    AX_U8 reg_3303 = 0x08;
    AX_U8 reg_3304 = 0x48;
    AX_U8 reg_3305 = 0x00;
    AX_U8 reg_3306 = 0x30;
    AX_U8 reg_3307 = 0x04;
    AX_U8 reg_3308 = 0x14;
    AX_U8 reg_330d = 0x28;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == SC850SL_HTS_H) {
            hts_high = (setting + i)->value;
        } else if ((setting + i)->addr == SC850SL_HTS_L) {
            hts_low = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3301) {
            reg_3301 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3302) {
            reg_3302 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3303) {
            reg_3303 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3304) {
            reg_3304 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3305) {
            reg_3305 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3306) {
            reg_3306 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3307) {
            reg_3307 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x3308) {
            reg_3308 = (setting + i)->value;
        } else if ((setting + i)->addr == 0x330d) {
            reg_330d = (setting + i)->value;
        }
    }

    hts = hts_high << 8 | hts_low;

    *exp_offset += (reg_3301 & 0x3) * 2.0f;
    *exp_offset += reg_3302;
    *exp_offset += (reg_3303 & 0x1f);
    *exp_offset += reg_3304;
    *exp_offset += ((reg_3305 & 0xFF) << 8) |
              (reg_3306 & 0xFF);
    *exp_offset += (reg_3307 & 0x1f);
    *exp_offset += reg_3308 * 2.0f;
    *exp_offset += reg_330d;

    *exp_offset /= (AX_F32)hts;

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_get_vts_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts)
{
    AX_U32 i = 0;
    AX_U8 vts_h = 0;
    AX_U8 vts_l = 0;
    AX_U8 mask = 0;

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == SC850SL_VTS_L_H) {
            vts_h = (setting + i)->value;
            mask |= 1;
        } else if ((setting + i)->addr == SC850SL_VTS_L_L) {
            vts_l = (setting + i)->value;
            mask |= 1 << 1;
        }

        if (mask == 0x3) break;
    }

    //default value
    if ((mask & 0x1) == 0) {
        vts_h = 0x8;
        mask |= 1;
    }
    if ((mask & (1 << 1)) == 0) {
        vts_l = 0xca;
        mask |= 1 << 1;
    }

    if (mask != 0x3) {
        SNS_ERR("get setting vts fail, mask:0x%x\n", mask);
        return AX_SNS_ERR_NOT_MATCH;
    }

    *vts = vts_h << 8 | vts_l;

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    switch (sns_obj->eImgMode) {
    case e_SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_4LANE_24M_1080Mbps:
        *setting = SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_4LANE_24M_1080Mbps;
        *cnt = sizeof(SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_4LANE_24M_1080Mbps) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC850SL_3840X2160_HDR_10bit_RGGB_30FPS_4LANE_24M_1458Mbps:
        *setting = SC850SL_3840X2160_HDR_10bit_RGGB_30FPS_4LANE_24M_1458Mbps;
        *cnt = sizeof(SC850SL_3840X2160_HDR_10bit_RGGB_30FPS_4LANE_24M_1458Mbps) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_2LANE_24M_1380Mbps:
        *setting = SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_2LANE_24M_1380Mbps;
        *cnt = sizeof(SC850SL_3840X2160_LINEAR_10bit_RGGB_30FPS_2LANE_24M_1380Mbps) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC850SL_BINNING_1920X1080_LINEAR_10bit_RGGB_60FPS_2LANE_24M_720Mbps:
        *setting = SC850SL_BINNING_1920X1080_LINEAR_10bit_RGGB_60FPS_2LANE_24M_720Mbps;
        *cnt = sizeof(SC850SL_BINNING_1920X1080_LINEAR_10bit_RGGB_60FPS_2LANE_24M_720Mbps) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC850SL_3840X2160_LINEAR_10bit_RGGB_15FPS_2LANE_24M_1080Mbps:
        *setting = SC850SL_3840X2160_LINEAR_10bit_RGGB_15FPS_2LANE_24M_1080Mbps;
        *cnt = sizeof(SC850SL_3840X2160_LINEAR_10bit_RGGB_15FPS_2LANE_24M_1080Mbps) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC850SL_3840X2160_HDR_10bit_RGGB_15FPS_2LANE_24M_1440Mbps:
        *setting = SC850SL_3840X2160_HDR_10bit_RGGB_15FPS_2LANE_24M_1440Mbps;
        *cnt = sizeof(SC850SL_3840X2160_HDR_10bit_RGGB_15FPS_2LANE_24M_1440Mbps) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC850SL_3840X2160_LINEAR_10bit_RGGB_20FPS_2LANE_24M_1440Mbps:
        *setting = SC850SL_3840X2160_LINEAR_10bit_RGGB_20FPS_2LANE_24M_1440Mbps;
        *cnt = sizeof(SC850SL_3840X2160_LINEAR_10bit_RGGB_20FPS_2LANE_24M_1440Mbps) / sizeof(camera_i2c_reg_array);
        break;
    default:
        SNS_ERR("it's not supported. pipe=%d, setting mode=%d\n", nPipeId, sns_obj->eImgMode);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    SNS_INFO("pipe=%d, setting mode=%d\n", nPipeId, sns_obj->eImgMode);

    return AX_SNS_SUCCESS;
}

AX_S32 sc850sl_write_settings(ISP_PIPE_ID nPipeId)
{
    AX_U32 i = 0;
    AX_S32 ret = 0;
    AX_U32 reg_cnt = 0;
    camera_i2c_reg_array *setting = AX_NULL;

    ret = sc850sl_select_setting(nPipeId, &setting, &reg_cnt);
    if (ret) {
        return ret;
    }

    for (i = 0; i < reg_cnt; i++) {
        sc850sl_write_register(nPipeId, (setting + i)->addr, ((setting + i)->value));
#ifdef SENSOR_DEBUG
        usleep(2 * 1000);
        AX_U8 val = sc850sl_reg_read(nPipeId, (default_setting + i)->addr);
        SNS_DBG(" addr: 0x%04x write:0x%02x read:0x%02x \n",
                (default_setting + i)->addr, (default_setting + i)->value, val);
#endif
    }

    return AX_SNS_SUCCESS;
}

/*
kernel sensor stream contrl info
*/
AX_S32 sc850sl_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId)
{
    AX_U8 i = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    AX_SNS_STREAM_REG_TABLE_T tTableOn[] = {
        {0x302c, 0x00, 0},
        {0x0100, 0x01, 0},
    };

    AX_SNS_STREAM_REG_TABLE_T tTableOff[] = {
        {0x3812, 0x00, 0},
        {0x0100, 0x00, 0},
        {0x302c, 0x0f, 0},
        {0x3812, 0x30, 0},
    };

    sns_obj->sztRegsInfo[0].tStreamCtrl.bConfig = 1;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDevAddr = sns_obj->sns_i2c_obj.slave_addr;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nAddrByteNum = sns_obj->sns_i2c_obj.address_byte;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDataByteNum = sns_obj->sns_i2c_obj.data_byte;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDelayMclkUs = 0;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDelayPwdnUs= 0;

    sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOnNum = sizeof(tTableOn) / sizeof(tTableOn[0]);
    SNS_CHECK_VALUE_RANGE_VALID(sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOnNum, 1, SNS_STREAM_REG_NUM);

    for (i = 0; i < sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOnNum; i++) {
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOn[i].nRegAddr = tTableOn[i].nRegAddr;
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOn[i].nData = tTableOn[i].nData;
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOn[i].nDelayUs = tTableOn[i].nDelayUs;
    }

    sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOffNum = sizeof(tTableOff) / sizeof(tTableOff[0]);
    SNS_CHECK_VALUE_RANGE_VALID(sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOffNum, 1, SNS_STREAM_REG_NUM);

    for (i = 0; i < sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOffNum; i++) {
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOff[i].nRegAddr = tTableOff[i].nRegAddr;
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOff[i].nData = tTableOff[i].nData;
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOff[i].nDelayUs = tTableOff[i].nDelayUs;
    }

    sns_obj->sztRegsInfo[0].tStreamCtrl.nPwdnbGpio = gsc850slBusInfo[nPipeId].nPwdnGpio;
    sns_obj->sztRegsInfo[0].tStreamCtrl.eCtrl = AX_SNS_STREAM_CTRL_REG;

    return AX_SNS_SUCCESS;
}
