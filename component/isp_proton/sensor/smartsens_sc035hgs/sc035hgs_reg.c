#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "ax_base_type.h"
#include "ax_isp_common.h"
#include "i2c.h"
#include "isp_sensor_internal.h"
#include "isp_sensor_types.h"

#include "sc035hgs.h"
#include "sc035hgs_reg.h"
#include "sc035hgs_settings.h"

static AX_SNS_COMMBUS_T gSc035hgsBusInfo[AX_VIN_MAX_PIPE_NUM] = {0};
AX_U8 gSc035hgsSlaveAddr[AX_VIN_MAX_PIPE_NUM] = {SC035HGS_SLAVE_ADDR1, SC035HGS_SLAVE_ADDR2};

AX_S32 sc035hgs_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    gSc035hgsBusInfo[nPipeId].I2cDev = tSnsBusInfo.I2cDev;
    gSc035hgsBusInfo[nPipeId].busType = tSnsBusInfo.busType;
    gSc035hgsBusInfo[nPipeId].nPwdnGpio = tSnsBusInfo.nPwdnGpio;

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_bus_num(ISP_PIPE_ID nPipeId)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    return gSc035hgsBusInfo[nPipeId].I2cDev;
}

AX_S32 sc035hgs_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nslaveaddr)
{
    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    if (nslaveaddr == SC035HGS_SLAVE_ADDR1 || nslaveaddr == SC035HGS_SLAVE_ADDR2) {
        gSc035hgsSlaveAddr[nPipeId] = nslaveaddr;
    } else {
        gSc035hgsSlaveAddr[nPipeId] = SC035HGS_SLAVE_ADDR1;
    }

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_i2c_init(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sns_obj->sns_i2c_obj.sns_i2c_fd = -1;
    sns_obj->sns_i2c_obj.slave_addr = gSc035hgsSlaveAddr[nPipeId];
    sns_obj->sns_i2c_obj.address_byte = SC035HGS_ADDR_BYTE;
    sns_obj->sns_i2c_obj.data_byte = SC035HGS_DATA_BYTE;
    sns_obj->sns_i2c_obj.swap_byte = SC035HGS_SWAP_BYTES;
    sns_obj->sns_i2c_obj.sns_i2c_bnum = sc035hgs_get_bus_num(nPipeId);
    sns_obj->sns_i2c_obj.sns_i2c_fd = i2c_init(sns_obj->sns_i2c_obj.sns_i2c_bnum,
                                               sns_obj->sns_i2c_obj.slave_addr);

    SNS_DBG("pipe %d sc035hgs i2c init finish, i2c bus %d\n", nPipeId,
            sns_obj->sns_i2c_obj.sns_i2c_bnum);

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_i2c_exit(ISP_PIPE_ID nPipeId)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    return i2c_exit(sns_obj->sns_i2c_obj.sns_i2c_fd);
}

AX_S32 sc035hgs_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    SNS_CHECK_PTR_VALID(pData);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd) {
        return AX_SNS_ERR_NOT_INIT;
    }

    return i2c_read(sns_obj->sns_i2c_obj.sns_i2c_fd,
                    sns_obj->sns_i2c_obj.slave_addr,
                    nAddr,
                    sns_obj->sns_i2c_obj.address_byte,
                    (AX_U8 *)pData,
                    sns_obj->sns_i2c_obj.data_byte,
                    sns_obj->sns_i2c_obj.swap_byte);
}

AX_S32 sc035hgs_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr)
{
    AX_U8 data = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd) {
        return AX_SNS_ERR_NOT_INIT;
    }

    i2c_read(sns_obj->sns_i2c_obj.sns_i2c_fd,
             sns_obj->sns_i2c_obj.slave_addr,
             addr,
             sns_obj->sns_i2c_obj.address_byte,
             (AX_U8 *)&data,
             sns_obj->sns_i2c_obj.data_byte,
             sns_obj->sns_i2c_obj.swap_byte);

    return data;
}

AX_S32 sc035hgs_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    if (-1 == sns_obj->sns_i2c_obj.sns_i2c_fd) {
        return AX_SNS_ERR_NOT_INIT;
    }

    return i2c_write(sns_obj->sns_i2c_obj.sns_i2c_fd, sns_obj->sns_i2c_obj.slave_addr, addr,
                     sns_obj->sns_i2c_obj.address_byte, (AX_U8 *)&data,
                     sns_obj->sns_i2c_obj.data_byte, sns_obj->sns_i2c_obj.swap_byte);
}

AX_S32 sc035hgs_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val)
{
    FILE *fp = AX_NULL;
    char file_name[50];

    sprintf(file_name, "/sys/class/gpio/gpio%d", gpio_num);
    if (0 != access(file_name, F_OK)) {
        fp = fopen("/sys/class/gpio/export", "w");
        if (fp == AX_NULL) {
            SNS_ERR("Cannot open /sys/class/gpio/export.\n");
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
    fprintf(fp, "%u", gpio_out_val ? 1 : 0);
    fclose(fp);

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio)
{
    AX_S32 result = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    result |= sc035hgs_hw_reset(nResetGpio, 0);
    usleep(5 * 1000);
    result |= sc035hgs_hw_reset(nResetGpio, 1);
    usleep(5 * 1000);

    return result;
}

AX_U32 sc035hgs_sns_update_regs_table(ISP_PIPE_ID nPipeId, AX_U32 nRegsAddr, AX_U8 nRegValue)
{
    AX_S32 i = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    for (i = 0; i < sns_obj->sztRegsInfo[0].nRegNum; i++) {
        if (nRegsAddr == sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nRegAddr) {
            sns_obj->sztRegsInfo[0].sztData.sztI2cData[i].nData = nRegValue;
            return AX_SNS_SUCCESS;
        }
    }

    SNS_ERR("reg addr 0x%x not find.\n", nRegsAddr);
    return AX_SNS_ERR_BAD_ADDR;
}

AX_U32 sc035hgs_get_vts(ISP_PIPE_ID nPipeId)
{
    AX_U8 vts_h = 0;
    AX_U8 vts_l = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts_h = sc035hgs_reg_read(nPipeId, SC035HGS_VTS_H);
    vts_l = sc035hgs_reg_read(nPipeId, SC035HGS_VTS_L);

    return (vts_h << 8) | vts_l;
}

AX_U32 sc035hgs_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts)
{
    AX_S32 result = 0;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);

    vts = AXSNS_CLIP3(vts, 1, 0xffff);
    result |= sc035hgs_sns_update_regs_table(nPipeId, SC035HGS_VTS_H, (vts >> 8) & 0xff);
    result |= sc035hgs_sns_update_regs_table(nPipeId, SC035HGS_VTS_L, vts & 0xff);

    return result;
}

AX_S32 sc035hgs_get_vts_from_setting(camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts)
{
    AX_U32 i = 0;
    AX_U8 vts_h = 0x02;
    AX_U8 vts_l = 0x03;

    SNS_CHECK_PTR_VALID(setting);
    SNS_CHECK_PTR_VALID(vts);

    for (i = 0; i < reg_cnt; i++) {
        if ((setting + i)->addr == SC035HGS_VTS_H) {
            vts_h = (setting + i)->value;
        } else if ((setting + i)->addr == SC035HGS_VTS_L) {
            vts_l = (setting + i)->value;
        }
    }

    *vts = (vts_h << 8) | vts_l;
    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt)
{
    SNS_STATE_OBJ *sns_obj = AX_NULL;

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SNS_CHECK_PTR_VALID(setting);
    SNS_CHECK_PTR_VALID(cnt);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    switch (sns_obj->eImgMode) {
    case e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS:
    case e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS_SYNC_MASTER:
    case e_SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS_SYNC_SLAVE:
        *setting = SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS;
        *cnt = sizeof(SC035HGS_MIPI_27M_2LANE_640x480_12BIT_SDR_120FPS) / sizeof(camera_i2c_reg_array);
        break;
    case e_SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS:
    case e_SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS_SYNC_MASTER:
    case e_SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS_SYNC_SLAVE:
        *setting = SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS;
        *cnt = sizeof(SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS) / sizeof(camera_i2c_reg_array);
        break;
    default:
        SNS_ERR("it's not supported. pipe=%d, setting mode=%d\n", nPipeId, sns_obj->eImgMode);
        return AX_SNS_ERR_NOT_SUPPORT;
    }

    SNS_INFO("pipe=%d, setting mode=%d\n", nPipeId, sns_obj->eImgMode);
    return AX_SNS_SUCCESS;
}

static AX_BOOL sc035hgs_is_1lane_setting(AX_U32 nImgMode)
{
    return (nImgMode == e_SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS ||
            nImgMode == e_SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS_SYNC_MASTER ||
            nImgMode == e_SC035HGS_MIPI_24M_1LANE_640x480_12BIT_SDR_120FPS_SYNC_SLAVE) ?
           AX_TRUE : AX_FALSE;
}

AX_S32 sc035hgs_write_settings(ISP_PIPE_ID nPipeId)
{
    AX_U32 i = 0;
    AX_U32 reg_cnt = 0;
    AX_S32 ret = 0;
    camera_i2c_reg_array *setting = AX_NULL;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_BOOL b1Lane = AX_FALSE;

    ret = sc035hgs_select_setting(nPipeId, &setting, &reg_cnt);
    if (ret) {
        return ret;
    }

    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);
    b1Lane = sc035hgs_is_1lane_setting(sns_obj->eImgMode);

    for (i = 0; i < reg_cnt; i++) {
        sc035hgs_write_register(nPipeId, (setting + i)->addr, (setting + i)->value);
        if (b1Lane && (setting + i)->addr == 0x36f9) {
            usleep(256 * 1000);
        }
        if (b1Lane && (setting + i)->addr == 0x0100 && (setting + i)->value == 0x01) {
            usleep(10 * 1000);
        }
    }

    return AX_SNS_SUCCESS;
}

AX_S32 sc035hgs_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId)
{
    AX_U8 i = 0;
    SNS_STATE_OBJ *sns_obj = AX_NULL;
    AX_SNS_STREAM_REG_TABLE_T tTableOn[] = {
        {0x0100, 0x01, 0},
    };
    AX_SNS_STREAM_REG_TABLE_T tTableOff[] = {
        {0x0100, 0x00, 0},
    };

    SNS_CHECK_VALUE_RANGE_VALID(nPipeId, 0, AX_VIN_MAX_PIPE_NUM - 1);
    SENSOR_GET_CTX(nPipeId, sns_obj);
    SNS_CHECK_PTR_VALID(sns_obj);

    sns_obj->sztRegsInfo[0].tStreamCtrl.bConfig = 1;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDevAddr = sns_obj->sns_i2c_obj.slave_addr;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nAddrByteNum = sns_obj->sns_i2c_obj.address_byte;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDataByteNum = sns_obj->sns_i2c_obj.data_byte;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDelayMclkUs = 0;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDelayPwdnUs = 0;
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOnNum = sizeof(tTableOn) / sizeof(tTableOn[0]);
    sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOffNum = sizeof(tTableOff) / sizeof(tTableOff[0]);

    for (i = 0; i < sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOnNum; i++) {
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOn[i] = tTableOn[i];
    }
    for (i = 0; i < sns_obj->sztRegsInfo[0].tStreamCtrl.nDataOffNum; i++) {
        sns_obj->sztRegsInfo[0].tStreamCtrl.tOff[i] = tTableOff[i];
    }

    sns_obj->sztRegsInfo[0].tStreamCtrl.nPwdnbGpio = gSc035hgsBusInfo[nPipeId].nPwdnGpio;
    sns_obj->sztRegsInfo[0].tStreamCtrl.eCtrl = AX_SNS_STREAM_CTRL_REG;

    return AX_SNS_SUCCESS;
}
