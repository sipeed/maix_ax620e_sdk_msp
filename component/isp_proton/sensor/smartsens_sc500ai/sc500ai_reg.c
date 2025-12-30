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

#include "sc500ai.h"
#include "sc500ai_reg.h"
#include "sc500ai_ae_ctrl.h"
#include "sc500ai_settings.h"


static AX_SNS_COMMBUS_T gSc500aiBusInfo[AX_VIN_MAX_PIPE_NUM] = { {{0}}, {{2}},};

AX_U8 gSc500aiSlaveAddr[AX_VIN_MAX_PIPE_NUM] = {0x30, 0x30};

AX_S32 sc500ai_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo)
{
    gSc500aiBusInfo[nPipeId].I2cDev = tSnsBusInfo.I2cDev;
    gSc500aiBusInfo[nPipeId].nPwdnGpio = tSnsBusInfo.nPwdnGpio;

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_get_bus_num(ISP_PIPE_ID nPipeId)
{
    return gSc500aiBusInfo[nPipeId].I2cDev;
}

AX_S32 sc500ai_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nSlaveAddr)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (nSlaveAddr > 0)
        gSc500aiSlaveAddr[nPipeId] = nSlaveAddr;
    else
        gSc500aiSlaveAddr[nPipeId] = SC500AI_SLAVE_ADDR;

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_i2c_init(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 snsId = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sns_obj->sns_i2c_obj.sns_i2c_fd = -1;
    sns_obj->sns_i2c_obj.slave_addr = gSc500aiSlaveAddr[nPipeId];
    sns_obj->sns_i2c_obj.address_byte = SC500AI_ADDR_BYTE;
    sns_obj->sns_i2c_obj.data_byte = SC500AI_DATA_BYTE;
    sns_obj->sns_i2c_obj.swap_byte = SC500AI_SWAP_BYTES;

    sns_obj->sns_i2c_obj.sns_i2c_bnum = sc500ai_get_bus_num(nPipeId);

    sns_obj->sns_i2c_obj.sns_i2c_fd = i2c_init(sns_obj->sns_i2c_obj.sns_i2c_bnum,
                                      sns_obj->sns_i2c_obj.slave_addr);

    SNS_DBG("sc500ai i2c init finish, i2c bus %d \n", sns_obj->sns_i2c_obj.sns_i2c_bnum);

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_i2c_exit(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    ret = i2c_exit(sns_obj->sns_i2c_obj.sns_i2c_fd);

    return ret;
}

AX_S32 sc500ai_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData)
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

AX_S32 sc500ai_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr)
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

AX_S32 sc500ai_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data)
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


AX_S32 sc500ai_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val)
{
    FILE *fp = NULL;
    char file_name[50];
    char buf[10];

    sprintf(file_name, "/sys/class/gpio/gpio%d", gpio_num);
    if (0 != access(file_name, F_OK)) {
        sprintf(file_name, "/sys/class/gpio/export");
        fp = fopen(file_name, "w");
        if (fp == NULL) {
            SNS_ERR("Cannot open %s.\n", file_name);
            return AX_SNS_ERR_ILLEGAL_PARAM;
        }
        fprintf(fp, "%d", gpio_num);
        fclose(fp);

        sprintf(file_name, "/sys/class/gpio/gpio%d/direction", gpio_num);
        fp = fopen(file_name, "w");
        if (fp == NULL) {
            SNS_ERR("Cannot open %s.\n", file_name);
            return AX_SNS_ERR_ILLEGAL_PARAM;
        }
        fprintf(fp, "out");
        fclose(fp);
    }

    sprintf(file_name, "/sys/class/gpio/gpio%d/value", gpio_num);
    fp = fopen(file_name, "w");
    if (fp == NULL) {
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

AX_S32 sc500ai_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio)
{
    AX_S32 result = 0;
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    result |= sc500ai_hw_reset(nResetGpio, 0);
    usleep(5);
    result |= sc500ai_hw_reset(nResetGpio, 1);
    usleep(5 * 1000);

    return result;
}

AX_U32 sc500ai_get_vts(ISP_PIPE_ID nPipeId)
{
    AX_U8 vts_h = 0;
    AX_U8 vts_l = 0;
    AX_U32 vts = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_h = sc500ai_reg_read(nPipeId, SC500AI_VTS_H);
    vts_l = sc500ai_reg_read(nPipeId, SC500AI_VTS_L);

    vts = (vts_h & 0x7F) << 8 | vts_l;

    return vts;
}

AX_S32 sc500ai_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts)
{
    AX_U8 vts_h = 0;
    AX_U8 vts_l = 0;
    AX_S32 ret = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_h = (vts & 0x7F00) >> 8;
    vts_l = vts & 0xFF;

    ret |= sc500ai_update_regidx_table(nPipeId, SC500AI_VTS_H_IDX, vts_h);
    ret |= sc500ai_update_regidx_table(nPipeId, SC500AI_VTS_L_IDX, vts_l);

    return ret;
}

AX_U32 sc500ai_set_vts_s(ISP_PIPE_ID nPipeId, AX_U32 vts_s)
{
    AX_U8 vts_s_h = 0;
    AX_U8 vts_s_l = 0;
    AX_S32 ret = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_s_h = (vts_s & 0xFF00) >> 8;
    vts_s_l = vts_s & 0xFF;

    ret |= sc500ai_update_regidx_table(nPipeId, SC500AI_VTS_S_H_IDX, vts_s_h);
    ret |= sc500ai_update_regidx_table(nPipeId, SC500AI_VTS_S_L_IDX, vts_s_l);

    return ret;
}

AX_U32 sc500ai_get_vts_s(ISP_PIPE_ID nPipeId)
{
    AX_U8 vts_s_h = 0;
    AX_U8 vts_s_l = 0;
    AX_U32 vts_s = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_s_h = sc500ai_reg_read(nPipeId, SC500AI_VTS_S_H);
    vts_s_l = sc500ai_reg_read(nPipeId, SC500AI_VTS_S_L);

    vts_s = vts_s_h << 8 | vts_s_l;

    return vts_s;
}

AX_U32 sc500ai_get_hts(ISP_PIPE_ID nPipeId)
{
    AX_U8 hts_l = 0;
    AX_U8 hts_h = 0;
    AX_U32 hts = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    hts_h = sc500ai_reg_read(nPipeId, SC500AI_HTS_L_H);
    hts_l = sc500ai_reg_read(nPipeId, SC500AI_HTS_L_L);

    hts = hts_h << 8 | hts_l;

    return hts;
}

AX_F32 sc500ai_get_exp_offset_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_F32 *exp_offset)
{
    AX_U32 i = 0;
    AX_U32 hts = 0;

    //default value
    AX_U8 hts_high = 0x06;
    AX_U8 hts_low  = 0x40;
    AX_U8 reg_3301 = 0x28;
    AX_U8 reg_3302 = 0x18;
    AX_U8 reg_3303 = 0x08;
    AX_U8 reg_3304 = 0x40;
    AX_U8 reg_3305 = 0x00;
    AX_U8 reg_3306 = 0x50;
    AX_U8 reg_3307 = 0x04;
    AX_U8 reg_3308 = 0x08;
    AX_U8 reg_330d = 0x18;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == SC500AI_HTS_L_H) {
            hts_high = (setting + i)->value;
        } else if ((setting + i)->addr == SC500AI_HTS_L_L) {
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

AX_S32 sc500ai_get_vts_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts)
{
    AX_U32 i = 0;
    AX_U8 vts_h = 0;
    AX_U8 vts_l = 0;
    AX_U8 mask = 0;

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == SC500AI_VTS_H) {
            vts_h = (setting + i)->value;
            mask |= 1;
        } else if ((setting + i)->addr == SC500AI_VTS_L) {
            vts_l = (setting + i)->value;
            mask |= 1 << 1;
        }

        if (mask == 0x3) break;
    }

    //default value
    if ((mask & 0x1) == 0) {
        vts_h = 0x6;
        mask |= 1;
    }
    if ((mask & (1 << 1)) == 0) {
        vts_l = 0x72;
        mask |= 1 << 1;
    }

    if (mask != 0x3) {
        SNS_ERR("get setting vts fail, mask:0x%x\n", mask);
        return AX_SNS_ERR_NOT_MATCH;
    }

    *vts = (vts_h & 0x7F) << 8 | vts_l;

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    switch (sns_obj->eImgMode) {
    /* 4 lane */
    case E_SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS:
        *setting = SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS;
        *cnt = sizeof(SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS) / sizeof(camera_i2c_reg_array);
        break;

    case E_SC500AI_MIPI_4LANE_24M_810MBPS_2880x1620_10BIT_HDR_30FPS:
        *setting = SC500AI_MIPI_4LANE_24M_810MBPS_2880x1620_10BIT_HDR_30FPS;
        *cnt = sizeof(SC500AI_MIPI_4LANE_24M_810MBPS_2880x1620_10BIT_HDR_30FPS) / sizeof(camera_i2c_reg_array);
        break;

    case E_SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS_QS:
        *setting = SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS_QS;
        *cnt = sizeof(SC500AI_MIPI_4LANE_24M_396MBPS_2880x1620_10BIT_SDR_30FPS_QS) / sizeof(camera_i2c_reg_array);
        break;

    default:
        SNS_ERR("it's not supported. pipe=%d, setindex=%d\n", nPipeId, sns_obj->eImgMode);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    SNS_INFO("pipe=%d, setting mode=%d\n", nPipeId, sns_obj->eImgMode);

    return AX_SNS_SUCCESS;
}

AX_S32 sc500ai_write_settings(ISP_PIPE_ID nPipeId)
{
    AX_U32 i = 0;
    AX_S32 ret = 0;
    AX_U32 reg_cnt = 0;
    camera_i2c_reg_array *setting = AX_NULL;

    ret = sc500ai_select_setting(nPipeId, &setting, &reg_cnt);
    if (ret) {
        return ret;
    }

    for (i = 0; i < reg_cnt; i++) {
        sc500ai_write_register(nPipeId, (setting + i)->addr, ((setting + i)->value));
#ifdef SENSOR_DEBUG
        usleep(2 * 1000);
        AX_U8 val = sc500ai_reg_read(nPipeId, (default_setting + i)->addr);
        SNS_DBG(" addr: 0x%04x write:0x%02x read:0x%02x \n",
                (default_setting + i)->addr, (default_setting + i)->value, val);
#endif
    }

    return AX_SNS_SUCCESS;
}

/*
kernel sensor stream contrl info
*/
AX_S32 sc500ai_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId)
{
    AX_U8 i = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    AX_SNS_STREAM_REG_TABLE_T tTableOn[] = {
        {0x0100, 0x01, 0},
    };

    AX_SNS_STREAM_REG_TABLE_T tTableOff[] = {
        {0x0100, 0x00, 0},
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

    sns_obj->sztRegsInfo[0].tStreamCtrl.nPwdnbGpio = gSc500aiBusInfo[nPipeId].nPwdnGpio;
    sns_obj->sztRegsInfo[0].tStreamCtrl.eCtrl = AX_SNS_STREAM_CTRL_GPIO;

    return AX_SNS_SUCCESS;
}
