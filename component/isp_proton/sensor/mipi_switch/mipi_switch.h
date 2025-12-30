/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef __MIPI_SWITCH_H__
#define __MIPI_SWITCH_H__

#ifdef __cplusplus
extern "C"
{
#endif
#include "ax_isp_common.h"
#define SWITCH_MAGIC 's'

#define AX_MIPI_SWITCH_IOC_INIT           _IOWR(SWITCH_MAGIC, 0x00, void*)
#define AX_MIPI_SWITCH_IOC_DEINIT         _IO(SWITCH_MAGIC,0x01)
#define AX_MIPI_SWITCH_IOC_START          _IO(SWITCH_MAGIC,0x02)
#define AX_MIPI_SWITCH_IOC_STOP           _IO(SWITCH_MAGIC,0x03)
#define AX_MIPI_SWITCH_IOC_CHANGE         _IOWR(SWITCH_MAGIC, 0x04, void*)
#define AX_MIPI_SWITCH_IOC_SET_FPS        _IOWR(SWITCH_MAGIC, 0x05, void*)

#define AX_MIPI_SWITCH_PIPE_NUM            2
#define AX_MIPI_SWITCH_SNS_REG_NUM         4
typedef enum _AX_MIPI_SWITCH_WORK_MODE_E {
    AX_MIPI_SWITCH_STAY_LOW,
    AX_MIPI_SWITCH_STAY_HIGH,
    AX_MIPI_SWITCH_SWITCH_PERIODIC,
} AX_MIPI_SWITCH_WORK_MODE_E;

typedef enum _AX_MIPI_SWITCH_VSYNC_TYPE_E {
    AX_MIPI_SWITCH_FSYNC_VSYNC,
    AX_MIPI_SWITCH_FSYNC_FLASH,
} AX_MIPI_SWITCH_VSYNC_TYPE_E;

typedef struct _AX_VSYNC_SNS_REG_T{
    unsigned int nRegAddr;
    unsigned int nData;
} AX_VSYNC_SNS_REG_T;

typedef struct {
    unsigned char    nI2cNode;  /* sensor i2c node */
    unsigned char    nI2cAddr;  /* sensor device address */
    unsigned char    nDelayFrmNum;       /* Number of frames for register delay configuration */
    unsigned char    nIntPos;            /* Position of the register takes effect, only support AX_SNS_L_FSOF/AX_SNS_S_FSOF */
    unsigned char    nRegNum;
    unsigned int     nAddrByteNum;       /* Bit width of the register address */
    unsigned int     nDataByteNum;       /* Bit width of sensor register data */
    AX_VSYNC_SNS_REG_T tSnsReg[AX_MIPI_SWITCH_SNS_REG_NUM];

} AX_VSYNC_SNS_I2C_T;
typedef struct _AX_VSYNC_INFO_T {
    AX_VSYNC_SNS_I2C_T tI2cInfo[AX_MIPI_SWITCH_PIPE_NUM];
    int nFps;
} AX_VSYNC_INFO_T;

typedef struct _AX_SWITCH_SNS_INFO_T {
    int nSnsId;
    int nPipeId;
    AX_LENS_TYPE_E eLensType;
    AX_MIPI_SWITCH_WORK_MODE_E eWorkMode;
    AX_MIPI_SWITCH_VSYNC_TYPE_E eVsyncType;
} AX_SWITCH_SNS_INFO_T;

typedef struct _AX_SWITCH_INFO_T {
    int nFps;
    int nPipeNum;
    AX_MIPI_SWITCH_WORK_MODE_E eWorkMode;
    AX_SWITCH_SNS_INFO_T tSnsInfo[AX_MIPI_SWITCH_PIPE_NUM];
} AX_SWITCH_INFO_T;

int ax_mipi_switch_init(AX_SWITCH_INFO_T *pSwitchInfo);
int ax_mipi_switch_start(void);
int ax_mipi_switch_stop(void);
int ax_mipi_switch_change(int nSnsId);
int ax_mipi_switch_set_fps(AX_VSYNC_INFO_T *pVsyncInfo);

#ifdef __cplusplus
}
#endif

#endif