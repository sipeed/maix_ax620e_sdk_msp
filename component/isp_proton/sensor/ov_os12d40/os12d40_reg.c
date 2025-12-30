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

#include "os12d40_reg.h"
#include "os12d40_settings.h"

extern SNS_STATE_OBJ *g_szOs12d40Ctx[AX_VIN_MAX_PIPE_NUM];
#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = g_szOs12d40Ctx[dev])

static AX_SNS_COMMBUS_T gOs12d40BusInfo[AX_VIN_MAX_PIPE_NUM] ={ {{0}}, {{2}},};

AX_U8 gOs12d40SlaveAddr[AX_VIN_MAX_PIPE_NUM] = {0x36, 0x36};

AX_S32 os12d40_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo)
{
    gOs12d40BusInfo[nPipeId].I2cDev = tSnsBusInfo.I2cDev;
    gOs12d40BusInfo[nPipeId].nPwdnGpio = tSnsBusInfo.nPwdnGpio;

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_bus_num(ISP_PIPE_ID nPipeId)
{
    return gOs12d40BusInfo[nPipeId].I2cDev;
}

AX_S32 os12d40_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nslaveaddr)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (nslaveaddr == OS12D40_SLAVE_ADDR1 || nslaveaddr == OS12D40_SLAVE_ADDR2)
        gOs12d40SlaveAddr[nPipeId] = nslaveaddr;
    else
        gOs12d40SlaveAddr[nPipeId] = OS12D40_SLAVE_ADDR1;

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_sensor_i2c_init(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 snsId = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sns_obj->sns_i2c_obj.sns_i2c_fd = -1;
    sns_obj->sns_i2c_obj.slave_addr = gOs12d40SlaveAddr[nPipeId];
    sns_obj->sns_i2c_obj.address_byte = OS12D40_ADDR_BYTE;
    sns_obj->sns_i2c_obj.data_byte = OS12D40_DATA_BYTE;
    sns_obj->sns_i2c_obj.swap_byte = OS12D40_SWAP_BYTES;

    sns_obj->sns_i2c_obj.sns_i2c_bnum = os12d40_get_bus_num(nPipeId);

    sns_obj->sns_i2c_obj.sns_i2c_fd = i2c_init(sns_obj->sns_i2c_obj.sns_i2c_bnum,
                                      sns_obj->sns_i2c_obj.slave_addr);

    SNS_DBG("os12d40 i2c init finish, i2c bus %d \n", sns_obj->sns_i2c_obj.sns_i2c_bnum);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_sensor_i2c_exit(ISP_PIPE_ID nPipeId)
{
    AX_S32 ret = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    ret = i2c_exit(sns_obj->sns_i2c_obj.sns_i2c_fd);

    return ret;
}

AX_S32 os12d40_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData)
{
    AX_U8 data;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_S32 nRet = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd)
        return -1;

    nRet = i2c_read(sns_obj->sns_i2c_obj.sns_i2c_fd,
             sns_obj->sns_i2c_obj.slave_addr,
             nAddr,
             sns_obj->sns_i2c_obj.address_byte,
             (AX_U8 *)(pData),
             sns_obj->sns_i2c_obj.data_byte,
             sns_obj->sns_i2c_obj.swap_byte);

    return nRet;
}

AX_S32 os12d40_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr)
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

AX_S32 os12d40_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data)
{
    AX_S32 nRet = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd) {
        return AX_SNS_ERR_NOT_INIT;
    }

    nRet = i2c_write(sns_obj->sns_i2c_obj.sns_i2c_fd, sns_obj->sns_i2c_obj.slave_addr, addr,
                     sns_obj->sns_i2c_obj.address_byte,
                     (AX_U8 *)(&data), sns_obj->sns_i2c_obj.data_byte, sns_obj->sns_i2c_obj.swap_byte);

    return nRet;
}


AX_S32 os12d40_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val)
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
            return -1;
        }
        fprintf(fp, "%d", gpio_num);
        fclose(fp);

        sprintf(file_name, "/sys/class/gpio/gpio%d/direction", gpio_num);
        fp = fopen(file_name, "w");
        if (fp == NULL) {
            SNS_ERR("Cannot open %s.\n", file_name);
            return -1;
        }
        fprintf(fp, "out");
        fclose(fp);
    }

    sprintf(file_name, "/sys/class/gpio/gpio%d/value", gpio_num);
    fp = fopen(file_name, "w");
    if (fp == NULL) {
        SNS_ERR("Cannot open %s.\n", file_name);
        return -1;
    }
    if (gpio_out_val) {
        strcpy(buf, "1");
    } else {
        strcpy(buf, "0");
    }
    fprintf(fp, "%s", buf);
    fclose(fp);

    return 0;
}

AX_S32 os12d40_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio)
{
    AX_S32 result = 0;
    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM))
        return -1;

    result |= os12d40_hw_reset(nResetGpio, 0);
    usleep(2 * 1000);
    result |= os12d40_hw_reset(nResetGpio, 1);
    usleep(5 * 1000);

    return result;
}

AX_U32 os12d40_get_hts(ISP_PIPE_ID nPipeId)
{
    AX_U8 hts_h;
    AX_U8 hts_l;
    AX_U32 hts;

    if (nPipeId < 0 || (nPipeId >= AX_VIN_MAX_PIPE_NUM))
        return -1;

    hts_h = os12d40_reg_read(nPipeId, OS12D40_HTS_H);
    hts_l = os12d40_reg_read(nPipeId, OS12D40_HTS_L);

    hts = (AX_U32)(((hts_h & 0xF) << 8) | (AX_U32)(hts_l << 0));

    return hts;
}

AX_U32 os12d40_set_hts(ISP_PIPE_ID nPipeId, AX_U32 hts)
{
    AX_U8 hts_h;
    AX_U8 hts_l;
    AX_S32 result = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    hts_l = hts & 0xFF;
    hts_h = (hts & 0xFF00) >> 8;

    result |= os12d40_write_register(nPipeId, OS12D40_HTS_H, hts_h);
    result |= os12d40_write_register(nPipeId, OS12D40_HTS_L, hts_l);

    return result;
}

AX_U32 os12d40_get_vts(ISP_PIPE_ID nPipeId)
{
    AX_U8 vts_h;
    AX_U8 vts_l;
    AX_U32 vts;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_h = os12d40_reg_read(nPipeId, OS12D40_VTS_H);
    vts_l = os12d40_reg_read(nPipeId, OS12D40_VTS_L);

    vts = (AX_U32)(((vts_h & 0xFF) << 8) | (AX_U32)(vts_l << 0));

    return vts;
}

AX_U32 os12d40_get_l2s_offset(ISP_PIPE_ID nPipeId)
{
    AX_U32 offset = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    /* The calculation formula is obtained from FAE, linegap=VS frmae exp time + offset, os04a10 is 4 */
    offset = os12d40_reg_read(nPipeId, 0x3797);

    offset = offset & 0x1f;

    offset = offset + 2;

    return offset;
}

AX_F32 os12d40_get_sclk(ISP_PIPE_ID nPipeId)
{
    AX_U8 pre_div0;
    AX_U8 pre_div;
    AX_U16 multiplier;
    AX_U8 post_div;
    AX_U8 clk_sel;
    AX_U8 st_div;
    AX_U8 t_div;
    AX_U8 div_adc;
    AX_U8 adc_prediv;

    float inck;
    float sclk;

    inck = OS12D40_INCK_24M;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    pre_div0 = ((os12d40_reg_read(nPipeId, 0x0326) & 0x80) >> 7) + 1;

    pre_div = (os12d40_reg_read(nPipeId, 0x0323) & 0x7) + 1;
    if (pre_div == 1) {
        pre_div = 1;
    } else if (pre_div == 2) {
        pre_div = 1.5;
    } else if (pre_div == 3) {
        pre_div = 2;
    } else if (pre_div == 4) {
        pre_div = 2.5;
    } else if (pre_div == 5) {
        pre_div = 3;
    } else if (pre_div == 6) {
        pre_div = 4;
    } else if (pre_div == 7) {
        pre_div = 6;
    } else if (pre_div == 8) {
        pre_div = 8;
    } else {
    }

    multiplier = (os12d40_reg_read(nPipeId, 0x0324) & 0x3) << 8;
    multiplier = multiplier | ((os12d40_reg_read(nPipeId, 0x0325)) & 0xFF);

    post_div = ((os12d40_reg_read(nPipeId, 0x0320) & 0x08) >> 3) + 1;
    st_div = (os12d40_reg_read(nPipeId, 0x0326) & 0x1F) + 1;

    t_div = (os12d40_reg_read(nPipeId, 0x032d) & 0x01) + 1;

    div_adc = (os12d40_reg_read(nPipeId, 0x0329) & 0x0F) + 1;
    adc_prediv = (os12d40_reg_read(nPipeId, 0x032e) & 0x01) + 1;

    clk_sel = (os12d40_reg_read(nPipeId, 0x0326) & 0x20) >> 5;

    if (clk_sel == 0) {
        sclk = (((((((float)(inck * 1000 * 1000) / pre_div0) / pre_div) * multiplier) / post_div) / st_div) / t_div);
    } else {
        sclk = ((((((((float)(inck * 1000 * 1000) / pre_div0) / pre_div) * multiplier) / post_div) / div_adc) / adc_prediv) /st_div);
    }
    /*SNS_DBG("%s pre_div0=0x%x, pre_div=0x%x, multiplier=0x%x, post_div=0x%x, sram_div=0x%x, st_div=0x%x, t_div=0x%x \n", \
          __func__, pre_div0, pre_div, multiplier, post_div, sram_div, st_div, t_div); */

    return sclk;
}

AX_S32 os12d40_get_vts_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts)
{
    AX_U32 i = 0;
    AX_U8 high = 0;
    AX_U8 low = 0;
    AX_U8 mask = 0;

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == OS12D40_VTS_H) {
            high = (setting + i)->value;
            mask |= 1;
        } else if ((setting + i)->addr == OS12D40_VTS_L) {
            low = (setting + i)->value;
            mask |= 1 << 1;
        }

        if (mask == 0x3) break;
    }

    if (mask != 0x3) {
        SNS_ERR("get setting vts fail, mask:0x%x\n", mask);
        return AX_SNS_ERR_NOT_MATCH;
    }

    *vts = high << 8 | low;

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_hts_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *hts)
{
    AX_U32 i = 0;
    AX_U8 high = 0;
    AX_U8 low = 0;
    AX_U8 mask = 0;

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == OS12D40_HTS_H) {
            high = (setting + i)->value;
            mask |= 1;
        } else if ((setting + i)->addr == OS12D40_HTS_L) {
            low = (setting + i)->value;
            mask |= 1 << 1;
        }

        if (mask == 0x3) break;
    }

    if (mask != 0x3) {
        SNS_ERR("get setting hts fail, mask:0x%x\n", mask);
        return AX_SNS_ERR_NOT_MATCH;
    }

    *hts = high << 8 | low;

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_get_sclk_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_F32 *sclk)
{
    AX_U8 pre_div = 0;
    AX_U8 pre_div0 = 0;
    AX_U8 pre_div2 = 0;
    AX_U16 multiplier = 0;
    AX_U8 multiplier_h = 0;
    AX_U8 multiplier_l = 0;
    AX_U8 post_div = 0;
    AX_U8 clk_sel;
    AX_U8 st_div = 0;
    AX_U8 t_div = 0;
    AX_U8 div_adc = 0;
    AX_U8 adc_prediv = 0;
    float inck = 1.0f;

    AX_U32 i = 0;
    AX_U8 mask = 0;

    inck = OS12D40_INCK_24M;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == 0x0326) {
            pre_div0 = (setting + i)->value;
            mask |= 1;
        } else if ((setting + i)->addr == 0x0323) {
            pre_div2 = (setting + i)->value;
            mask |= 1 << 1;
        } else if ((setting + i)->addr == 0x0320) {
            post_div = (setting + i)->value;
            mask |= 1 << 2;
        } else if ((setting + i)->addr == 0x0324) {
            multiplier_h = (setting + i)->value;
            mask |= 1 << 3;
        } else if ((setting + i)->addr == 0x0325) {
            multiplier_l = (setting + i)->value;
            mask |= 1 << 4;
        } else if ((setting + i)->addr == 0x032d) {
            t_div = (setting + i)->value;
            mask |= 1 << 5;
        } else if ((setting + i)->addr == 0x0329) {
            div_adc = (setting + i)->value;
            mask |= 1 << 6;
        } else if ((setting + i)->addr == 0x032e) {
            adc_prediv = (setting + i)->value;
            mask |= 1 << 7;
        }

        if (mask == 0xff) break;
    }

    //default value
    if ((mask & (1 << 1)) == 0) {
        pre_div2 = 0x4;
        mask |= 1 << 1;
    }
    if ((mask & (1 << 2)) == 0) {
        post_div = 0xa;
        mask |= 1 << 2;
    }
    if ((mask & (1 << 3)) == 0) {
        multiplier_h = 0x2;
        mask |= 1 << 3;
    }
    if ((mask & (1 << 4)) == 0) {
        multiplier_l = 0x58;
        mask |= 1 << 4;
    }
    if ((mask & (1 << 5)) == 0) {
        t_div = 0x0;
        mask |= 1 << 5;
    }
    if ((mask & (1 << 6)) == 0) {
        div_adc = 0x0;
        mask |= 1 << 6;
    }
    if ((mask & (1 << 7)) == 0) {
        adc_prediv = 0x6;
        mask |= 1 << 7;
    }

    if (mask != 0xff) {
        SNS_ERR("get setting sclk fail, mask:0x%x\n", mask);
        return AX_SNS_ERR_NOT_MATCH;
    }

    pre_div = (pre_div0 & 0x1) + 1;

    pre_div2 = (pre_div2 & 0x7) + 1;
    if (pre_div2 == 1) {
        pre_div2 = 1;
    } else if (pre_div2 == 2) {
        pre_div2 = 1.5;
    } else if (pre_div2 == 3) {
        pre_div2 = 2;
    } else if (pre_div2 == 4) {
        pre_div2 = 2.5;
    } else if (pre_div2 == 5) {
        pre_div2 = 3;
    } else if (pre_div2 == 6) {
        pre_div2 = 4;
    } else if (pre_div2 == 7) {
        pre_div2 = 6;
    } else if (pre_div2 == 8) {
        pre_div2 = 8;
    } else {
    }

    multiplier_h &= 0x3;
    multiplier_l &= 0xFF;
    multiplier = multiplier_h << 8 | multiplier_l;

    post_div = ((post_div & 0x08) >> 3) + 1;
    st_div = (pre_div0 & 0x1F) + 1;
    t_div = (t_div & 0x01) + 1;

    div_adc = (div_adc & 0x0F) + 1;
    adc_prediv = (adc_prediv & 0x01) + 1;

    clk_sel = (pre_div0 & 0x20) >> 5;

    if (clk_sel == 0) {
        *sclk = (((((((float)(inck * 1000 * 1000) / pre_div) / pre_div2) * multiplier) / post_div) / st_div) / t_div);
    } else {
        *sclk = ((((((((float)(inck * 1000 * 1000) / pre_div) / pre_div2) * multiplier) / post_div) / div_adc) / adc_prediv) /st_div);
    }

    SNS_DBG("%s pre_div=0x%x, pre_div2=0x%x, multiplier=0x%x, post_div=0x%x, st_div=0x%x, t_div=0x%x \n", \
          __func__, pre_div, pre_div2, multiplier, post_div, st_div, t_div);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    switch (sns_obj->eImgMode) {
    /* 4 lane */
    case e_OS12D40_24M_1500Mbps_4LANE_4512x2512_10BIT_SDR_15FPS:
        *setting = OS12D40_24M_1500Mbps_4LANE_4512x2512_10BIT_SDR_15FPS;
        *cnt = sizeof(OS12D40_24M_1500Mbps_4LANE_4512x2512_10BIT_SDR_15FPS) / sizeof(camera_i2c_reg_array);
        break;
    case e_OS12D40_24M_800Mbps_4LANE_4480x2512_10BIT_SDR_20FPS:
        *setting = OS12D40_24M_800Mbps_4LANE_4480x2512_10BIT_SDR_20FPS;
        *cnt = sizeof(OS12D40_24M_800Mbps_4LANE_4480x2512_10BIT_SDR_20FPS) / sizeof(camera_i2c_reg_array);
        break;
    case e_OS12D40_24M_800Mbps_4LANE_BINNING_2240x1256_10BIT_SDR_30FPS:
        *setting = OS12D40_24M_800Mbps_4LANE_BINNING_2240x1256_10BIT_SDR_30FPS;
        *cnt = sizeof(OS12D40_24M_800Mbps_4LANE_BINNING_2240x1256_10BIT_SDR_30FPS) / sizeof(camera_i2c_reg_array);
        break;

    default:
        SNS_ERR("it's not supported. pipe=%d, setting mode=%d] \n", nPipeId, sns_obj->eImgMode);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    SNS_INFO("pipe=%d, setting mode=%d\n", nPipeId, sns_obj->eImgMode);

    return AX_SNS_SUCCESS;
}

AX_S32 os12d40_write_settings(ISP_PIPE_ID nPipeId)
{
    AX_U32 i = 0;
    AX_S32 ret = 0;
    AX_U32 reg_cnt = 0;
    camera_i2c_reg_array *setting = AX_NULL;

    ret = os12d40_select_setting(nPipeId, &setting, &reg_cnt);
    if (ret) {
        return ret;
    }

    for (i = 0; i < reg_cnt; i++) {
        os12d40_write_register(nPipeId, (setting + i)->addr, ((setting + i)->value));
#ifdef SENSOR_DEBUG
        usleep(2 * 1000);
        AX_U8 val = os12d40_reg_read(nPipeId, (default_setting + i)->addr);
        SNS_DBG(" addr: 0x%04x write:0x%02x read:0x%02x \n",
                (default_setting + i)->addr, (default_setting + i)->value, val);
#endif
    }

    return AX_SNS_SUCCESS;
}

/*
kernel sensor stream contrl info
*/
AX_S32 os12d40_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId)
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

    sns_obj->sztRegsInfo[0].tStreamCtrl.nPwdnbGpio = gOs12d40BusInfo[nPipeId].nPwdnGpio;
    sns_obj->sztRegsInfo[0].tStreamCtrl.eCtrl = AX_SNS_STREAM_CTRL_GPIO;

    return AX_SNS_SUCCESS;
}
