/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef __OS04A10_H__
#define __OS04A10_H__

#include "ax_base_type.h"
#include "ax_sensor_struct.h"
#include "isp_sensor_internal.h"

extern const char axera_sns_os04a10_version[];
extern SNS_STATE_OBJ *g_szOs04a10Ctx[AX_VIN_MAX_PIPE_NUM];

#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = g_szOs04a10Ctx[dev])
#define SENSOR_SET_CTX(dev, pstCtx) (g_szOs04a10Ctx[dev] = pstCtx)
#define SENSOR_RESET_CTX(dev) (g_szOs04a10Ctx[dev] = AX_NULL)


AX_S32 os04a10_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId);
AX_S32 os04a10_sensor_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on);
AX_S32 os04a10_sensor_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode);
AX_S32 os04a10_sensor_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup);

AX_S32 os04a10_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel);

AX_S32 os04a10_ctx_init(ISP_PIPE_ID nPipeId);
AX_VOID os04a10_ctx_exit(ISP_PIPE_ID nPipeId);

#endif  //end __OS04A10_H__
