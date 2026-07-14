#ifndef __SC035HGS_H__
#define __SC035HGS_H__

#include "ax_base_type.h"
#include "ax_sensor_struct.h"
#include "isp_sensor_internal.h"

extern SNS_STATE_OBJ *g_szsc035hgsCtx[AX_VIN_MAX_PIPE_NUM];

#define SENSOR_GET_CTX(dev, pstCtx) (pstCtx = g_szsc035hgsCtx[dev])
#define SENSOR_SET_CTX(dev, pstCtx) (g_szsc035hgsCtx[dev] = pstCtx)
#define SENSOR_RESET_CTX(dev) (g_szsc035hgsCtx[dev] = NULL)

AX_S32 sc035hgs_get_chipid(ISP_PIPE_ID nPipeId, AX_S32 *pSnsId);
AX_S32 sc035hgs_streaming_ctrl(ISP_PIPE_ID nPipeId, AX_U32 on);
AX_S32 sc035hgs_get_mode(ISP_PIPE_ID nPipeId, AX_SNS_ATTR_T *pSnsMode);
AX_S32 sc035hgs_sleep_wakeup(ISP_PIPE_ID nPipeId, AX_SNS_SLEEP_WAKEUP_E eSleepWakeup);
AX_S32 sc035hgs_get_black_level(ISP_PIPE_ID nPipeId, AX_SNS_BLACK_LEVEL_T *ptBlackLevel);

#endif
