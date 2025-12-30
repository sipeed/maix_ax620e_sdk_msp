/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef __SC500AI_REG_H__
#define __SC500AI_REG_H__

#include "ax_base_type.h"

#define SC500AI_SLAVE_ADDR       (0x30) /**< i2c slave address of the sc500ai camera sensor */
#define SC500AI_SENSOR_ID        (0xce1f)
#define SC500AI_ADDR_BYTE        (2)
#define SC500AI_DATA_BYTE        (1)
#define SC500AI_SWAP_BYTES       (1)
#define SC500AI_INCK_24M         (24)

#define SC500AI_SENSOR_ID_REG_H  (0x3107)
#define SC500AI_SENSOR_ID_REG_L  (0x3108)

#define SC500AI_EXP_L_H          (0x3E00)   /* [3:0] */
#define SC500AI_EXP_L_M          (0x3E01)   /* [7:0] */
#define SC500AI_EXP_L_L          (0x3E02)   /* [7:4] */
#define SC500AI_EXP_S_H          (0x3E22)   /* [3:0] */
#define SC500AI_EXP_S_M          (0x3E04)   /* [7:0] */
#define SC500AI_EXP_S_L          (0x3E05)   /* [7:4] */

#define SC500AI_AGAIN_L          (0x3E08)
#define SC500AI_AGAIN_L_FINE     (0x3E09)
#define SC500AI_AGAIN_S          (0x3E12)
#define SC500AI_AGAIN_S_FINE     (0x3E13)

#define SC500AI_DGAIN_L          (0x3E06)
#define SC500AI_DGAIN_L_FINE     (0x3E07)
#define SC500AI_DGAIN_S          (0x3E10)
#define SC500AI_DGAIN_S_FINE     (0x3E11)

#define SC500AI_VTS_H            (0x320E) /* [6:0]*/
#define SC500AI_VTS_L            (0x320F) /* [7:0]*/
#define SC500AI_VTS_S_H          (0x3E23) /* [7:0]*/
#define SC500AI_VTS_S_L          (0x3E24) /* [7:0]*/

#define SC500AI_HTS_L_H          (0x320C)
#define SC500AI_HTS_L_L          (0x320D)

AX_S32 sc500ai_i2c_init(ISP_PIPE_ID nPipeId);
AX_S32 sc500ai_i2c_exit(ISP_PIPE_ID nPipeId);

AX_S32 sc500ai_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio);

AX_S32 sc500ai_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData);
AX_S32 sc500ai_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr);
AX_S32 sc500ai_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data);

AX_U32 sc500ai_get_hts(ISP_PIPE_ID nPipeId);
AX_F32 sc500ai_get_sclk(ISP_PIPE_ID nPipeId);
AX_U32 sc500ai_get_vts(ISP_PIPE_ID nPipeId);
AX_U32 sc500ai_get_vs_hts(ISP_PIPE_ID nPipeId);
AX_S32 sc500ai_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts);
AX_U32 sc500ai_set_vts_s(ISP_PIPE_ID nPipeId, AX_U32 vts_s);
AX_U32 sc500ai_get_vts_s(ISP_PIPE_ID nPipeId);

AX_S32 sc500ai_update_regidx_table(ISP_PIPE_ID nPipeId, AX_U8 nRegIdx, AX_U8 nRegValue);

AX_S32 sc500ai_get_vts_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts);
AX_F32 sc500ai_get_exp_offset_from_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_F32 *exp_offset);

AX_S32 sc500ai_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt);
AX_S32 sc500ai_write_settings(ISP_PIPE_ID nPipeId);

AX_S32 sc500ai_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo);
AX_S32 sc500ai_get_bus_num(ISP_PIPE_ID nPipeId);
AX_S32 sc500ai_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nSlaveAddr);

AX_S32 sc500ai_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val);
AX_S32 sc500ai_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId);

#endif  //end __SC500AI_REG_H__
