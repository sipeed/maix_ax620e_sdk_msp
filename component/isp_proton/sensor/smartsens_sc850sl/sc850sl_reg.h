/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef __SC850SL_REG_H__
#define __SC850SL_REG_H__

#include "ax_base_type.h"


#define SC850SL_SLAVE_ADDR       (0x30)    /**< i2c slave address of the SC850SL camera sensor sid0: 0 sid1: 0*/
#define SC850SL_SLAVE_ADDR1      (0x32)    /**< i2c slave address of the SC850SL camera sensor sid0: 0 sid1: 0*/
#define SC850SL_SENSOR_ID        (0x9d1e)
#define SC850SL_ADDR_BYTE        (2)
#define SC850SL_DATA_BYTE        (1)
#define SC850SL_SWAP_BYTES       (1)
#define SC850SL_INCK_24M         (24)

#define SC850SL_SENSOR_ID_REG_H  (0x3107)
#define SC850SL_SENSOR_ID_REG_L  (0x3108)

/* Exposure control related registers */
#define     SC850SL_LONG_EXP_LINE_H     (0x3e00)  /* bit[3:0], long frame exposure in unit of rows */
#define     SC850SL_LONG_EXP_LINE_M     (0x3e01)  /* bit[7:0], long frame exposure in unit of rows */
#define     SC850SL_LONG_EXP_LINE_L     (0x3e02)  /* bit[7:4], long frame exposure in unit of rows */

#define     SC850SL_SHORT_EXP_LINE_H    (0x3e22)  /* bit[4:0], short frame exposure in unit of rows */
#define     SC850SL_SHORT_EXP_LINE_M    (0x3e04)  /* bit[7:0], short frame exposure in unit of rows */
#define     SC850SL_SHORT_EXP_LINE_L    (0x3e05)  /* bit[7:4], short frame exposure in unit of rows */

#define     SC850SL_LONG_AGAIN_H        (0x3e08)  /* bit[5:0], real gain[13:8] long frame */
#define     SC850SL_LONG_AGAIN_L        (0x3e09)  /* bit[7:0], real gain[7:0] long frame */
#define     SC850SL_SHORT_AGAIN_H       (0x3e12)  /* bit[5:0], real gain[13:8] short frame */
#define     SC850SL_SHORT_AGAIN_L       (0x3e13)  /* bit[7:0], real gain[7:0] short frame */
#define     SC850SL_AGAIN_ADJUST        (0x363C)  /* adjust voltage for noise */

#define     SC850SL_LONG_DGAIN          (0x3e06)
#define     SC850SL_SHORT_DGAIN         (0x3e10)

#define     SC850SL_VTS_L_H             (0x320E)  /* bit[6:0], vts[15:8] */
#define     SC850SL_VTS_L_L             (0x320F)  /* bit[7:0], vts[7:0] */
#define     SC850SL_VTS_S_H             (0x3E23)  /* bit[6:0], vts[15:8] */
#define     SC850SL_VTS_S_L             (0x3E24)  /* bit[7:0], vts[7:0] */

#define     SC850SL_RB_ROWS_H           (0x3230)  /* bit[6:0], vts[15:8] */
#define     SC850SL_RB_ROWS_L           (0x3231)  /* bit[7:0], vts[7:0] */

#define     SC850SL_HTS_H               (0x320C)  /* bit[6:0], vts[15:8] */
#define     SC850SL_HTS_L               (0x320D)  /* bit[7:0], vts[7:0] */

/* VTS 4LINE */
#define SC850SL_VTS_12BIT_8M30_SDR             (0x08CA)
#define SC850SL_VTS_12BIT_8M25_SDR             (0x0A8C)
#define SC850SL_VTS_12BIT_8M20_SDR             (0x0D2F)

#define SC850SL_VTS_10BIT_8M30_HDR_2X          (0x1194)
#define SC850SL_VTS_10BIT_8M25_HDR_2X          (0x1518)
#define SC850SL_VTS_10BIT_8M20_HDR_2X          (0x1A5E)

AX_S32 sc850sl_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio);
AX_S32 sc850sl_sensor_i2c_init(ISP_PIPE_ID nPipeId);
AX_S32 sc850sl_sensor_i2c_exit(ISP_PIPE_ID nPipeId);
AX_S32 sc850sl_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData);
AX_S32 sc850sl_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr);
AX_S32 sc850sl_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data);

AX_U32 sc850sl_get_vts(ISP_PIPE_ID nPipeId);
AX_U32 sc850sl_get_vts_s(ISP_PIPE_ID nPipeId);
AX_U32 sc850sl_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts);
AX_U32 sc850sl_set_vts_s(ISP_PIPE_ID nPipeId, AX_U32 vts_s);
AX_S32 sc850sl_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nslaveaddr);

AX_S32 sc850sl_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo);
AX_S32 sc850sl_get_bus_num(ISP_PIPE_ID nPipeId);

AX_S32 sc850sl_get_vts_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts);
AX_F32 sc850sl_get_exp_offset_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_F32 *exp_offset);

AX_S32 sc850sl_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt);
AX_S32 sc850sl_write_settings(ISP_PIPE_ID nPipeId);

AX_S32 sc850sl_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val);
AX_S32 sc850sl_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId);

#endif  //end __SC850SL_REG_H__
