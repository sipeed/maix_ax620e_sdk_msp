/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef __SC500AI_H__
#define __SC500AI_H__

#include "ax_base_type.h"
#include "ax_sensor_struct.h"
#include "ax_module_version.h"

SNS_STATE_OBJ *gSc500aiCtx[AX_VIN_MAX_PIPE_NUM];

#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = gSc500aiCtx[dev])
#define SENSOR_SET_CTX(dev, pstCtx) (gSc500aiCtx[dev] = pstCtx)
#define SENSOR_RESET_CTX(dev) (gSc500aiCtx[dev] = AX_NULL)

AX_S32 sc500ai_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId);
AX_S32 sc500ai_stream_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on);
AX_S32 sc500ai_sensor_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup);
AX_S32 sc500ai_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode);
AX_S32 sc500ai_mirror_flip(ISP_PIPE_ID nPipeId, AX_SNS_MIRRORFLIP_TYPE_E eSnsMirrorFlip);
AX_S32 sc500ai_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel);


#endif  //end __SC500AI_H__
