#ifndef __SC035HGS_REG_H__
#define __SC035HGS_REG_H__

#include "ax_base_type.h"
#include "isp_sensor_internal.h"

#define SC035HGS_SLAVE_ADDR1        (0x30)
#define SC035HGS_SLAVE_ADDR2        (0x32)
#define SC035HGS_SENSOR_ID          (0x0031)
#define SC035HGS_ADDR_BYTE          (2)
#define SC035HGS_DATA_BYTE          (1)
#define SC035HGS_SWAP_BYTES         (1)

#define SC035HGS_SENSOR_ID_REG_H    (0x3107)
#define SC035HGS_SENSOR_ID_REG_L    (0x3108)

#define SC035HGS_EXPLINE_H          (0x3e01)
#define SC035HGS_EXPLINE_L          (0x3e02)
#define SC035HGS_AGAIN_H            (0x3e08)
#define SC035HGS_AGAIN_L            (0x3e09)
#define SC035HGS_DGAIN_H            (0x3e06)
#define SC035HGS_DGAIN_L            (0x3e07)
#define SC035HGS_VTS_H              (0x320e)
#define SC035HGS_VTS_L              (0x320f)
#define SC035HGS_HTS_H              (0x320c)
#define SC035HGS_HTS_L              (0x320d)

#define SC035HGS_GAIN_MAGIC_0       (0x3314)
#define SC035HGS_GAIN_MAGIC_1       (0x3317)
#define SC035HGS_GAIN_MAGIC_2       (0x3631)
#define SC035HGS_GAIN_MAGIC_3       (0x3329)
#define SC035HGS_GAIN_MAGIC_4       (0x332d)
#define SC035HGS_GAIN_MAGIC_5       (0x332f)
#define SC035HGS_GAIN_MAGIC_6       (0x3335)
#define SC035HGS_GAIN_MAGIC_7       (0x3344)
#define SC035HGS_GAIN_MAGIC_8       (0x3316)
#define SC035HGS_GAIN_MAGIC_9       (0x3630)

#define SC035HGS_DEFAULT_WIDTH      (640)
#define SC035HGS_DEFAULT_HEIGHT     (480)
#define SC035HGS_SENSOR_MAX_FPS     (120.0f)
#define SC035HGS_DEFAULT_FPS        (120.0f)
#define SC035HGS_DEFAULT_HTS        (1364)
#define SC035HGS_DEFAULT_VTS        (0x0203)

AX_S32 sc035hgs_reset(ISP_PIPE_ID nPipeId, AX_U32 nResetGpio);
AX_S32 sc035hgs_i2c_init(ISP_PIPE_ID nPipeId);
AX_S32 sc035hgs_i2c_exit(ISP_PIPE_ID nPipeId);
AX_S32 sc035hgs_read_register(ISP_PIPE_ID nPipeId, AX_U32 nAddr, AX_U32 *pData);
AX_S32 sc035hgs_reg_read(ISP_PIPE_ID nPipeId, AX_U32 addr);
AX_S32 sc035hgs_write_register(ISP_PIPE_ID nPipeId, AX_U32 addr, AX_U32 data);
AX_U32 sc035hgs_sns_update_regs_table(ISP_PIPE_ID nPipeId, AX_U32 nRegsAddr, AX_U8 nRegValue);
AX_U32 sc035hgs_get_vts(ISP_PIPE_ID nPipeId);
AX_U32 sc035hgs_set_vts(ISP_PIPE_ID nPipeId, AX_U32 vts);
AX_S32 sc035hgs_get_vts_from_setting(camera_i2c_reg_array *setting, AX_U32 reg_cnt, AX_U32 *vts);
AX_S32 sc035hgs_select_setting(ISP_PIPE_ID nPipeId, camera_i2c_reg_array **setting, AX_U32 *cnt);
AX_S32 sc035hgs_write_settings(ISP_PIPE_ID nPipeId);
AX_S32 sc035hgs_set_bus_info(ISP_PIPE_ID nPipeId, AX_SNS_COMMBUS_T tSnsBusInfo);
AX_S32 sc035hgs_get_bus_num(ISP_PIPE_ID nPipeId);
AX_S32 sc035hgs_set_slaveaddr(ISP_PIPE_ID nPipeId, AX_U8 nslaveaddr);
AX_S32 sc035hgs_hw_reset(unsigned int gpio_num, unsigned int gpio_out_val);
AX_S32 sc035hgs_get_sensor_stream_ctrl(ISP_PIPE_ID nPipeId);

#endif
