/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include <errno.h>
#include <getopt.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "ax_global_type.h"
#include "ax_ivps_api.h"
#include "ax_isp_api.h"
#include "ax_sys_api.h"
#include "ax_vin_api.h"
#include "common_cam.h"
#include "common_isp.h"
#include "common_sys.h"
#include "common_vin.h"
#include "common_nt.h"

#define SC035HGS_WIDTH          640
#define SC035HGS_HEIGHT         480
#define SC035HGS_STRIDE         640
#define SC035HGS_MAX_CAMERAS    2
#define SC035HGS_DEFAULT_FPS    120.0f
#define SC035HGS_DEFAULT_RATE   540
#define SC035HGS_IVPS_CHN       0
#define SC035HGS_IVPS_FMT       AX_FORMAT_YUV420_SEMIPLANAR
#define SC035HGS_DEFAULT_SYNC_US 10000
#define SC035HGS_MAX_SNS_CLK    8
#define SC035HGS_1LANE_SETTING_MASTER 5
#define SC035HGS_ALIGN_UP(x, a) (((x) + ((a) - 1)) & ~((a) - 1))

typedef struct {
    AX_U32 nCamCnt;
    AX_U32 nFirstCam;
    AX_U32 nRunSeconds;
    AX_BOOL bDumpOnce;
    AX_U32 nDumpSkip;
    AX_U32 nMipiRate;
    AX_U32 nVinIvpsMode;
    AX_U32 nSyncPtsUs;
    AX_F32 fFps;
} SAMPLE_SC035HGS_ARGS_T;

static AX_CAMERA_T gCams[SC035HGS_MAX_CAMERAS];
static AX_U32 gIvpsGrp[SC035HGS_MAX_CAMERAS] = {0, 2};
static volatile AX_BOOL gLoopExit = AX_FALSE;
static AX_BOOL gSnsClkOpened[SC035HGS_MAX_SNS_CLK] = {AX_FALSE};
static AX_BOOL gLaneComboSet = AX_FALSE;
static AX_BOOL gDeferStreamOn = AX_FALSE;
static AX_BOOL gDeferStartDev = AX_FALSE;
static AX_BOOL gSkipMipiStart = AX_FALSE;

static COMMON_SYS_POOL_CFG_T gSc035hgsCommPool[] = {
    {SC035HGS_WIDTH, SC035HGS_HEIGHT, SC035HGS_STRIDE, AX_FORMAT_YUV420_SEMIPLANAR, 16,
     AX_COMPRESS_MODE_NONE, 0},
};

static COMMON_SYS_POOL_CFG_T gSc035hgsPrivatePool[] = {
    {SC035HGS_WIDTH, SC035HGS_HEIGHT, SC035HGS_STRIDE, AX_FORMAT_BAYER_RAW_10BPP_PACKED, 16,
     AX_COMPRESS_MODE_NONE, 0},
};

static AX_VOID sc035hgs_sigint(AX_S32 nSigNo)
{
    printf("Catch signal %d\n", nSigNo);
    gLoopExit = AX_TRUE;
}

static AX_VOID sc035hgs_usage(const AX_CHAR *pName)
{
    printf("Usage: %s [-n cam_count] [-b first_cam] [-t seconds] [-d] [-s dump_skip] [-r mipi_rate] [-v vin_ivps_mode] [-p sync_pts_us] [-f fps]\n", pName);
    printf("  -n cam_count   1 or 2, default 1.\n");
    printf("  -b first_cam   First physical camera index, 0 or 1, default 0.\n");
    printf("  -t seconds     Stop after N seconds, default 0 means run until Ctrl+C.\n");
    printf("  -d             Save one Y8 frame per active pipe to /tmp.\n");
    printf("  -s dump_skip   Frames to skip before saving, default 60.\n");
    printf("  -r mipi_rate   MIPI data rate, default %u.\n", SC035HGS_DEFAULT_RATE);
    printf("  -v mode        VIN-IVPS mode, 0:ITP offline VPP, 1:GDC online VPP, 2:ITP online VPP, default 1.\n");
    printf("  -p sync_pts_us Max PTS delta for dual-camera paired dump, default 10000.\n");
    printf("  -f fps         Sensor fps, default %.0f.\n", SC035HGS_DEFAULT_FPS);
}

static AX_VOID *sc035hgs_get_frame_addr(const AX_VIDEO_FRAME_T *pFrame, AX_U32 nSize, AX_BOOL *pMapped)
{
    AX_VOID *pVirAddr = NULL;

    if (pMapped) {
        *pMapped = AX_FALSE;
    }

    if (NULL == pFrame || 0 == nSize) {
        return NULL;
    }

    if (pFrame->u32BlkId[0]) {
        pVirAddr = AX_POOL_GetBlockVirAddr(pFrame->u32BlkId[0]);
    }

    if (NULL == pVirAddr && pFrame->u64VirAddr[0]) {
        pVirAddr = (AX_VOID *)(AX_ULONG)pFrame->u64VirAddr[0];
    } else if (NULL == pVirAddr && pFrame->u64PhyAddr[0]) {
        pVirAddr = AX_SYS_Mmap(pFrame->u64PhyAddr[0], nSize);
        if (NULL != pVirAddr && pMapped) {
            *pMapped = AX_TRUE;
        }
    }

    return pVirAddr;
}

static AX_S32 sc035hgs_save_y8(AX_U8 nPipeId, const AX_VIDEO_FRAME_T *pFrame)
{
    AX_U32 nStride = 0;
    AX_U32 nYSize = 0;
    AX_BOOL bMapped = AX_FALSE;
    AX_VOID *pVirAddr = NULL;
    AX_CHAR szPath[160] = {0};
    AX_CHAR szInfo[160] = {0};
    FILE *fp = NULL;

    if (NULL == pFrame) {
        return -1;
    }

    nStride = pFrame->u32PicStride[0] ? pFrame->u32PicStride[0] : pFrame->u32Width;
    nYSize = nStride * pFrame->u32Height;
    pVirAddr = sc035hgs_get_frame_addr(pFrame, nYSize, &bMapped);
    if (NULL == pVirAddr) {
        printf("SC035HGS pipe%u get frame addr failed, blk=0x%x, phy=0x%llx, vir=0x%llx\n",
               nPipeId, pFrame->u32BlkId[0], (unsigned long long)pFrame->u64PhyAddr[0],
               (unsigned long long)pFrame->u64VirAddr[0]);
        return -1;
    }

    snprintf(szPath, sizeof(szPath), "/tmp/sc035hgs_pipe%u_%ux%u_stride%u_y8.yuv",
             nPipeId, pFrame->u32Width, pFrame->u32Height, nStride);
    snprintf(szInfo, sizeof(szInfo), "/tmp/sc035hgs_pipe%u_%ux%u_stride%u_y8.txt",
             nPipeId, pFrame->u32Width, pFrame->u32Height, nStride);

    fp = fopen(szPath, "wb");
    if (NULL == fp) {
        printf("open %s failed, errno=%d\n", szPath, errno);
        if (bMapped) {
            AX_SYS_Munmap(pVirAddr, nYSize);
        }
        return -1;
    }

    if (fwrite(pVirAddr, 1, nYSize, fp) != nYSize) {
        printf("write %s failed\n", szPath);
        fclose(fp);
        if (bMapped) {
            AX_SYS_Munmap(pVirAddr, nYSize);
        }
        return -1;
    }
    fclose(fp);

    fp = fopen(szInfo, "w");
    if (fp) {
        fprintf(fp,
                "width=%u\nheight=%u\nstride=%u\nframe_size=%u\nformat=%d\npts=%llu\nseq=%llu\nsource=vin_pipe%u_chn0\nsaved=y8_luma_only\n",
                pFrame->u32Width, pFrame->u32Height, nStride, nYSize, pFrame->enImgFormat,
                (unsigned long long)pFrame->u64PTS, (unsigned long long)pFrame->u64SeqNum, nPipeId);
        fclose(fp);
    }

    if (bMapped) {
        AX_SYS_Munmap(pVirAddr, nYSize);
    }

    printf("SC035HGS saved Y frame: %s\n", szPath);
    printf("SC035HGS saved Y info: %s\n", szInfo);
    return 0;
}

static AX_VOID sc035hgs_set_pipe_hdr_mode(AX_U32 *pHdrSel)
{
    if (pHdrSel) {
        *pHdrSel = 0x1;
    }
}

static AX_VOID sc035hgs_apply_mono_iq(AX_U8 nPipeId)
{
    AX_ISP_IQ_SHARPEN_PARAM_T tShpParam;
    AX_S32 ret = 0;

    memset(&tShpParam, 0, sizeof(tShpParam));
    ret = AX_ISP_IQ_GetShpParam(nPipeId, &tShpParam);
    if (AX_SUCCESS != ret) {
        printf("SC035HGS pipe%u AX_ISP_IQ_GetShpParam failed, ret=0x%x\n", nPipeId, ret);
        return;
    }

    tShpParam.nShpEn = 0;
    tShpParam.tHighFreqControl.nHighFreqEnable = 0;
    tShpParam.tMedFreqControl.nMedFreqEnable = 0;
    tShpParam.tDirFreqControl.nDirFreqEnable = 0;
    tShpParam.tLowFreqControl.nLowFreqEnable = 0;
    tShpParam.tFineGrainNoise.nGrainNoiseEn = 0;
    memset(tShpParam.tOsStaticMotion.nOsStaticGain, 0,
           sizeof(tShpParam.tOsStaticMotion.nOsStaticGain));
    memset(tShpParam.tOsStaticMotion.nOsMotionGain, 0,
           sizeof(tShpParam.tOsStaticMotion.nOsMotionGain));

    ret = AX_ISP_IQ_SetShpParam(nPipeId, &tShpParam);
    if (AX_SUCCESS != ret) {
        printf("SC035HGS pipe%u AX_ISP_IQ_SetShpParam failed, ret=0x%x\n", nPipeId, ret);
        return;
    }

    printf("SC035HGS pipe%u ISP sharpen disabled for mono output\n", nPipeId);
}

static AX_S32 sc035hgs_config_camera(AX_CAMERA_T *pCam, AX_U32 nIndex,
                                     const SAMPLE_SC035HGS_ARGS_T *pArgs)
{
    AX_S32 j = 0;

    if (NULL == pCam || NULL == pArgs || nIndex >= SC035HGS_MAX_CAMERAS) {
        return -1;
    }

    memset(pCam, 0, sizeof(*pCam));
    pCam->nNumber = nIndex;
    pCam->nPipeId = nIndex;
    pCam->nDevId = nIndex;
    pCam->nRxDev = nIndex;
    pCam->nI2cAddr = (0 == nIndex) ? 0x30 : 0x32;
    pCam->nI2cNode = 0;
    pCam->eLoadRawNode = LOAD_RAW_NONE;
    pCam->eBusType = COMMON_ISP_GetSnsBusType(SMARTSENS_SC035HGS);
    pCam->eInputMode = AX_INPUT_MODE_MIPI;
    pCam->eLaneComboMode = AX_LANE_COMBO_MODE_1;
    pCam->ptSnsHdl[pCam->nPipeId] = COMMON_ISP_GetSnsObj(SMARTSENS_SC035HGS);

    COMMON_VIN_GetSnsConfig(SMARTSENS_SC035HGS, &pCam->tMipiAttr, &pCam->tSnsAttr,
                            &pCam->tSnsClkAttr, &pCam->tDevAttr,
                            &pCam->tPipeAttr[pCam->nPipeId], pCam->tChnAttr);

    pCam->tMipiAttr.nDataRate = pArgs->nMipiRate;
    pCam->tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_1;
    pCam->tMipiAttr.nDataLaneMap[0] = (0 == nIndex) ? 0 : -1;
    pCam->tMipiAttr.nDataLaneMap[1] = -1;
    pCam->tMipiAttr.nDataLaneMap[2] = (0 == nIndex) ? -1 : 3;
    pCam->tMipiAttr.nDataLaneMap[3] = -1;
    pCam->tMipiAttr.nClkLane[0] = (0 == nIndex) ? 1 : -1;
    pCam->tMipiAttr.nClkLane[1] = (0 == nIndex) ? -1 : 4;
    pCam->tSnsClkAttr.nSnsClkIdx = 0;
    pCam->tSnsClkAttr.eSnsClkRate = AX_SNS_CLK_24M;
    pCam->tSnsAttr.fFrameRate = pArgs->fFps;
    pCam->tSnsAttr.eSnsMode = AX_SNS_LINEAR_MODE;
    pCam->tSnsAttr.eRawType = AX_RT_RAW10;
    pCam->tSnsAttr.eBayerPattern = AX_BP_MONO;
    pCam->tSnsAttr.eMasterSlaveSel = AX_SNS_MASTER;
    pCam->tSnsAttr.nSettingIndex = SC035HGS_1LANE_SETTING_MASTER;
    pCam->tDevAttr.eSnsMode = AX_SNS_LINEAR_MODE;
    pCam->tDevAttr.ePixelFmt = AX_FORMAT_BAYER_RAW_10BPP_PACKED;
    pCam->tDevAttr.eBayerPattern = AX_BP_MONO;
    pCam->tDevAttr.tMipiIntfAttr.szImgDt[0] = AX_MIPI_CSI_DT_RAW10;
    pCam->tPipeAttr[pCam->nPipeId].ePixelFmt = AX_FORMAT_BAYER_RAW_10BPP_PACKED;
    pCam->tPipeAttr[pCam->nPipeId].eBayerPattern = AX_BP_MONO;
    pCam->eSnsType = SMARTSENS_SC035HGS;
    pCam->eHdrMode = AX_SNS_LINEAR_MODE;
    pCam->eSysMode = COMMON_VIN_SENSOR;
    pCam->bEnableDev = AX_TRUE;
    pCam->bRegisterSns = AX_TRUE;
    pCam->bChnEn[AX_VIN_CHN_ID_MAIN] = AX_TRUE;
    pCam->tPipeAttr[pCam->nPipeId].ePipeWorkMode = AX_VIN_PIPE_NORMAL_MODE1;
    pCam->tPipeAttr[pCam->nPipeId].eSnsMode = AX_SNS_LINEAR_MODE;
    pCam->tPipeAttr[pCam->nPipeId].bAiIspEnable = AX_FALSE;
    pCam->tChnAttr[AX_VIN_CHN_ID_MAIN].eImgFormat = AX_FORMAT_YUV420_SEMIPLANAR;
    pCam->tChnAttr[AX_VIN_CHN_ID_MAIN].nDepth = 1;

    pCam->tDevBindPipe.nNum = 1;
    pCam->tDevBindPipe.nPipeId[0] = pCam->nPipeId;
    sc035hgs_set_pipe_hdr_mode(&pCam->tDevBindPipe.nHDRSel[0]);

    for (j = 0; j < pCam->tDevBindPipe.nNum; j++) {
        pCam->tPipeInfo[j].ePipeMode = SAMPLE_PIPE_MODE_VIDEO;
        pCam->tPipeInfo[j].bAiispEnable = AX_FALSE;
        strncpy(pCam->tPipeInfo[j].szBinPath, "null.bin", sizeof(pCam->tPipeInfo[j].szBinPath));
    }

    printf("SC035HGS cam%u: pipe=%d dev=%d rx=%d i2c=%d addr=0x%x fmt=%d combo=%d lane=%d map=[%d,%d,%d,%d] clk=[%d,%d] rate=%u fps=%.2f sync=%d setting=%u mclk=%u\n",
           nIndex, pCam->nPipeId, pCam->nDevId, pCam->nRxDev, pCam->nI2cNode,
           pCam->nI2cAddr, pCam->tChnAttr[AX_VIN_CHN_ID_MAIN].eImgFormat,
           pCam->eLaneComboMode, pCam->tMipiAttr.eLaneNum,
           pCam->tMipiAttr.nDataLaneMap[0], pCam->tMipiAttr.nDataLaneMap[1],
           pCam->tMipiAttr.nDataLaneMap[2], pCam->tMipiAttr.nDataLaneMap[3],
           pCam->tMipiAttr.nClkLane[0], pCam->tMipiAttr.nClkLane[1],
           pCam->tMipiAttr.nDataRate, pCam->tSnsAttr.fFrameRate,
           pCam->tSnsAttr.eMasterSlaveSel, pCam->tSnsAttr.nSettingIndex,
           pCam->tSnsClkAttr.nSnsClkIdx);
    return 0;
}

static AX_U32 sc035hgs_find_data_slot(const AX_MIPI_RX_ATTR_T *pMipiAttr, AX_U32 nDefaultSlot)
{
    AX_U32 i = 0;

    for (i = 0; i < AX_MIPI_LANE_NUM_MAX; i++) {
        if (pMipiAttr->nDataLaneMap[i] >= 0) {
            return i;
        }
    }

    return nDefaultSlot;
}

static AX_S8 sc035hgs_find_data_lane(const AX_MIPI_RX_ATTR_T *pMipiAttr, AX_S8 nDefaultLane)
{
    AX_U32 i = 0;

    for (i = 0; i < AX_MIPI_LANE_NUM_MAX; i++) {
        if (pMipiAttr->nDataLaneMap[i] >= 0) {
            return pMipiAttr->nDataLaneMap[i];
        }
    }

    return nDefaultLane;
}

static AX_U32 sc035hgs_find_clk_slot(const AX_MIPI_RX_ATTR_T *pMipiAttr, AX_U32 nDefaultSlot)
{
    AX_U32 i = 0;

    for (i = 0; i < AX_MIPI_CLK_LANE_MAX; i++) {
        if (pMipiAttr->nClkLane[i] >= 0) {
            return i;
        }
    }

    return nDefaultSlot;
}

static AX_S8 sc035hgs_find_clk_lane(const AX_MIPI_RX_ATTR_T *pMipiAttr, AX_S8 nDefaultLane)
{
    AX_U32 i = 0;

    for (i = 0; i < AX_MIPI_CLK_LANE_MAX; i++) {
        if (pMipiAttr->nClkLane[i] >= 0) {
            return pMipiAttr->nClkLane[i];
        }
    }

    return nDefaultLane;
}

static AX_VOID sc035hgs_apply_dual_lane_map(AX_CAMERA_T *pCamList, AX_U32 nCamCnt)
{
    AX_S8 nDataLaneMap[AX_MIPI_LANE_NUM_MAX] = {-1, -1, -1, -1};
    AX_S8 nClkLane[AX_MIPI_CLK_LANE_MAX] = {-1, -1};
    AX_U32 i = 0;
    AX_U32 nSharedRx = 0;

    if (nCamCnt < 2) {
        return;
    }

    nSharedRx = pCamList[0].nRxDev;
    for (i = 0; i < nCamCnt; i++) {
        AX_CAMERA_T *pCam = &pCamList[i];
        AX_BOOL bCam0 = (0 == pCam->nNumber) ? AX_TRUE : AX_FALSE;
        AX_U32 nDataSlot = sc035hgs_find_data_slot(&pCam->tMipiAttr, bCam0 ? 0 : 2);
        AX_U32 nClkSlot = sc035hgs_find_clk_slot(&pCam->tMipiAttr, bCam0 ? 0 : 1);
        AX_S8 nDataLane = sc035hgs_find_data_lane(&pCam->tMipiAttr, bCam0 ? 0 : 3);
        AX_S8 nClk = sc035hgs_find_clk_lane(&pCam->tMipiAttr, bCam0 ? 1 : 4);

        if (nDataSlot < AX_MIPI_LANE_NUM_MAX) {
            nDataLaneMap[nDataSlot] = nDataLane;
        }
        if (nClkSlot < AX_MIPI_CLK_LANE_MAX) {
            nClkLane[nClkSlot] = nClk;
        }
    }

    for (i = 0; i < nCamCnt; i++) {
        memcpy(pCamList[i].tMipiAttr.nDataLaneMap, nDataLaneMap, sizeof(nDataLaneMap));
        memcpy(pCamList[i].tMipiAttr.nClkLane, nClkLane, sizeof(nClkLane));
        pCamList[i].tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_1;
        pCamList[i].nRxDev = nSharedRx;
    }

    printf("SC035HGS dual shared mipi map: data=[%d,%d,%d,%d] clk=[%d,%d] rx=%u\n",
           nDataLaneMap[0], nDataLaneMap[1], nDataLaneMap[2], nDataLaneMap[3],
           nClkLane[0], nClkLane[1], nSharedRx);
}

static AX_BOOL sc035hgs_rx_already_used(const AX_CAMERA_T *pCamList, AX_U32 nCheckCnt,
                                        AX_U32 nRxDev)
{
    AX_U32 i = 0;

    for (i = 0; i < nCheckCnt; i++) {
        if (pCamList[i].nRxDev == nRxDev) {
            return AX_TRUE;
        }
    }

    return AX_FALSE;
}

static AX_S32 sc035hgs_open_sns_clk(const AX_CAMERA_T *pCam)
{
    AX_U8 nClkIdx = pCam->tSnsClkAttr.nSnsClkIdx;
    AX_S32 ret = 0;

    if (nClkIdx >= SC035HGS_MAX_SNS_CLK) {
        printf("SC035HGS invalid sensor clk index %u\n", nClkIdx);
        return -1;
    }

    if (gSnsClkOpened[nClkIdx]) {
        printf("SC035HGS reuse sensor clk%u\n", nClkIdx);
        return AX_SUCCESS;
    }

    ret = AX_ISP_OpenSnsClk(nClkIdx, pCam->tSnsClkAttr.eSnsClkRate);
    if (AX_SUCCESS != ret) {
        printf("AX_ISP_OpenSnsClk clk%u failed, ret=0x%x\n", nClkIdx, ret);
        return ret;
    }

    gSnsClkOpened[nClkIdx] = AX_TRUE;
    printf("SC035HGS open sensor clk%u rate=%d\n", nClkIdx, pCam->tSnsClkAttr.eSnsClkRate);
    return AX_SUCCESS;
}

static AX_VOID sc035hgs_close_all_sns_clk(AX_VOID)
{
    AX_U32 i = 0;

    for (i = 0; i < SC035HGS_MAX_SNS_CLK; i++) {
        if (!gSnsClkOpened[i]) {
            continue;
        }

        if (AX_SUCCESS != AX_ISP_CloseSnsClk(i)) {
            printf("AX_ISP_CloseSnsClk clk%u failed\n", i);
        } else {
            printf("SC035HGS close sensor clk%u\n", i);
        }
        gSnsClkOpened[i] = AX_FALSE;
    }
}

static AX_S32 sc035hgs_set_mipi_attr(AX_U8 nRxDev, AX_INPUT_MODE_E eInputMode,
                                     AX_MIPI_RX_ATTR_T *pMipiAttr)
{
    AX_S32 ret = 0;
    AX_MIPI_RX_DEV_T tMipiDev = {0};

    tMipiDev.eInputMode = eInputMode;
    tMipiDev.eBtClkMode = AX_BT_CLK_MODE_SDR;
    memcpy(&tMipiDev.tMipiAttr, pMipiAttr, sizeof(AX_MIPI_RX_ATTR_T));

    ret = AX_MIPI_RX_SetAttr(nRxDev, &tMipiDev);
    if (AX_SUCCESS != ret) {
        printf("AX_MIPI_RX_SetAttr rx%u failed, ret=0x%x\n", nRxDev, ret);
        return ret;
    }

    return AX_SUCCESS;
}

static AX_S32 sc035hgs_start_mipi(AX_U8 nRxDev, AX_INPUT_MODE_E eInputMode,
                                  AX_MIPI_RX_ATTR_T *pMipiAttr,
                                  AX_LANE_COMBO_MODE_E eLaneComboMode)
{
    AX_S32 ret = 0;

    if (!gLaneComboSet) {
        ret = AX_MIPI_RX_SetLaneCombo(eLaneComboMode);
        if (AX_SUCCESS != ret) {
            printf("AX_MIPI_RX_SetLaneCombo %d failed, ret=0x%x\n", eLaneComboMode, ret);
            return ret;
        }
        gLaneComboSet = AX_TRUE;
    }

    ret = sc035hgs_set_mipi_attr(nRxDev, eInputMode, pMipiAttr);
    if (AX_SUCCESS != ret) {
        return ret;
    }

    ret = AX_MIPI_RX_Reset(nRxDev);
    if (AX_SUCCESS != ret) {
        printf("AX_MIPI_RX_Reset rx%u failed, ret=0x%x\n", nRxDev, ret);
        return ret;
    }

    ret = AX_MIPI_RX_Start(nRxDev);
    if (AX_SUCCESS != ret) {
        printf("AX_MIPI_RX_Start rx%u failed, ret=0x%x\n", nRxDev, ret);
        return ret;
    }

    return AX_SUCCESS;
}

static AX_S32 sc035hgs_start_mipi_staged(AX_CAMERA_T *pCamList, AX_U32 nCamCnt)
{
    AX_U32 i = 0;
    AX_S32 ret = 0;

    if (0 == nCamCnt) {
        return AX_SUCCESS;
    }

    ret = AX_MIPI_RX_SetLaneCombo(pCamList[0].eLaneComboMode);
    if (AX_SUCCESS != ret) {
        printf("AX_MIPI_RX_SetLaneCombo %d staged failed, ret=0x%x\n",
               pCamList[0].eLaneComboMode, ret);
        return ret;
    }
    gLaneComboSet = AX_TRUE;

    for (i = 0; i < nCamCnt; i++) {
        if (sc035hgs_rx_already_used(pCamList, i, pCamList[i].nRxDev)) {
            continue;
        }

        ret = sc035hgs_set_mipi_attr(pCamList[i].nRxDev, pCamList[i].eInputMode,
                                     &pCamList[i].tMipiAttr);
        if (AX_SUCCESS != ret) {
            return ret;
        }
    }

    for (i = 0; i < nCamCnt; i++) {
        if (sc035hgs_rx_already_used(pCamList, i, pCamList[i].nRxDev)) {
            continue;
        }

        ret = AX_MIPI_RX_Reset(pCamList[i].nRxDev);
        if (AX_SUCCESS != ret) {
            printf("AX_MIPI_RX_Reset rx%u staged failed, ret=0x%x\n", pCamList[i].nRxDev, ret);
            return ret;
        }
    }

    for (i = 0; i < nCamCnt; i++) {
        if (sc035hgs_rx_already_used(pCamList, i, pCamList[i].nRxDev)) {
            continue;
        }

        ret = AX_MIPI_RX_Start(pCamList[i].nRxDev);
        if (AX_SUCCESS != ret) {
            printf("AX_MIPI_RX_Start rx%u staged failed, ret=0x%x\n", pCamList[i].nRxDev, ret);
            return ret;
        }
        printf("SC035HGS staged start rx%u\n", pCamList[i].nRxDev);
    }

    return AX_SUCCESS;
}

static AX_S32 sc035hgs_cam_open_one(AX_CAMERA_T *pCam)
{
    AX_S32 ret = 0;
    AX_U32 i = 0;
    AX_U8 nDevId = pCam->nDevId;
    AX_U32 nRxDev = pCam->nRxDev;
    AX_INPUT_MODE_E eInputMode = pCam->eInputMode;

    ret = sc035hgs_open_sns_clk(pCam);
    if (AX_SUCCESS != ret) {
        return ret;
    }

    ret = COMMON_ISP_ResetSnsObj(pCam->nPipeId, nDevId, pCam->ptSnsHdl[pCam->nPipeId]);
    if (AX_SUCCESS != ret) {
        printf("COMMON_ISP_ResetSnsObj pipe%u failed, ret=0x%x\n", pCam->nPipeId, ret);
        return ret;
    }

    if (!gSkipMipiStart) {
        ret = sc035hgs_start_mipi(nRxDev, eInputMode, &pCam->tMipiAttr, pCam->eLaneComboMode);
        if (AX_SUCCESS != ret) {
            printf("sc035hgs_start_mipi rx%u failed, ret=0x%x\n", nRxDev, ret);
            return ret;
        }
    }

    ret = COMMON_VIN_CreateDev(nDevId, nRxDev, &pCam->tDevAttr, &pCam->tDevBindPipe);
    if (AX_SUCCESS != ret) {
        printf("COMMON_VIN_CreateDev dev%u failed, ret=0x%x\n", nDevId, ret);
        return ret;
    }

    for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
        AX_U8 nPipeId = pCam->tDevBindPipe.nPipeId[i];

        pCam->tPipeAttr[nPipeId].bAiIspEnable = pCam->tPipeInfo[i].bAiispEnable;
        ret = COMMON_VIN_SetPipeAttr(pCam->eSysMode, pCam->eLoadRawNode, nPipeId,
                                     &pCam->tPipeAttr[nPipeId]);
        if (AX_SUCCESS != ret) {
            printf("COMMON_VIN_SetPipeAttr pipe%u failed, ret=0x%x\n", nPipeId, ret);
            return ret;
        }

        if (pCam->bRegisterSns) {
            ret = COMMON_ISP_RegisterSns(nPipeId, nDevId, pCam->eBusType,
                                         pCam->ptSnsHdl[nPipeId],
                                         pCam->nI2cAddr, pCam->nI2cNode);
            if (AX_SUCCESS != ret) {
                printf("COMMON_ISP_RegisterSns pipe%u failed, ret=0x%x\n", nPipeId, ret);
                return ret;
            }

            ret = COMMON_ISP_SetSnsAttr(nPipeId, &pCam->tSnsAttr, &pCam->tSnsClkAttr);
            if (AX_SUCCESS != ret) {
                printf("COMMON_ISP_SetSnsAttr pipe%u failed, ret=0x%x\n", nPipeId, ret);
                return ret;
            }
        }

        ret = COMMON_ISP_Init(nPipeId, pCam->ptSnsHdl[nPipeId], pCam->bRegisterSns, pCam->bUser3a,
                              &pCam->tAeFuncs, &pCam->tAwbFuncs, &pCam->tAfFuncs,
                              &pCam->tLscFuncs, pCam->tPipeInfo[i].szBinPath);
        if (AX_SUCCESS != ret) {
            printf("COMMON_ISP_Init pipe%u failed, ret=0x%x\n", nPipeId, ret);
            return ret;
        }

        ret = COMMON_VIN_StartChn(nPipeId, pCam->tChnAttr, pCam->bChnEn);
        if (AX_SUCCESS != ret) {
            printf("COMMON_VIN_StartChn pipe%u failed, ret=0x%x\n", nPipeId, ret);
            return ret;
        }

        ret = AX_VIN_StartPipe(nPipeId);
        if (AX_SUCCESS != ret) {
            printf("AX_VIN_StartPipe pipe%u failed, ret=0x%x\n", nPipeId, ret);
            return ret;
        }

        ret = AX_ISP_Start(nPipeId);
        if (AX_SUCCESS != ret) {
            printf("AX_ISP_Start pipe%u failed, ret=0x%x\n", nPipeId, ret);
            return ret;
        }

        sc035hgs_apply_mono_iq(nPipeId);
    }

    if (!gDeferStartDev) {
        ret = COMMON_VIN_StartDev(nDevId, pCam->bEnableDev, &pCam->tDevAttr);
        if (AX_SUCCESS != ret) {
            printf("COMMON_VIN_StartDev dev%u failed, ret=0x%x\n", nDevId, ret);
            return ret;
        }
    }

    if (pCam->bRegisterSns && pCam->bEnableDev && !gDeferStreamOn) {
        for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
            AX_U8 nPipeId = pCam->tDevBindPipe.nPipeId[i];

            ret = AX_ISP_StreamOn(nPipeId);
            if (AX_SUCCESS != ret) {
                printf("AX_ISP_StreamOn pipe%u failed, ret=0x%x\n", nPipeId, ret);
                return ret;
            }
        }
    }

    pCam->bOpen = AX_TRUE;
    printf("SC035HGS camera %u opened\n", pCam->nNumber);
    return AX_SUCCESS;
}

static AX_VOID sc035hgs_cam_close_one(AX_CAMERA_T *pCam)
{
    AX_U32 i = 0;

    if (!pCam->bOpen) {
        return;
    }

    for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
        AX_ISP_Stop(pCam->tDevBindPipe.nPipeId[i]);
    }

    COMMON_VIN_StopDev(pCam->nDevId, pCam->bEnableDev);

    if (pCam->bRegisterSns && pCam->bEnableDev) {
        for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
            AX_ISP_StreamOff(pCam->tDevBindPipe.nPipeId[i]);
        }
    }

    for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
        AX_U8 nPipeId = pCam->tDevBindPipe.nPipeId[i];

        AX_VIN_StopPipe(nPipeId);
        COMMON_VIN_StopChn(nPipeId);
        COMMON_ISP_DeInit(nPipeId, pCam->bRegisterSns);
        COMMON_ISP_UnRegisterSns(nPipeId);
        AX_VIN_DestroyPipe(nPipeId);
    }

    COMMON_VIN_DestroyDev(pCam->nDevId);
    pCam->bOpen = AX_FALSE;
    printf("SC035HGS camera %u closed\n", pCam->nNumber);
}

static AX_S32 sc035hgs_cam_open(AX_CAMERA_T *pCamList, AX_U32 nCamCnt)
{
    AX_U32 i = 0;
    AX_S32 ret = 0;
    AX_BOOL bDeferStreamOn = (nCamCnt > 1) ? AX_TRUE : AX_FALSE;
    AX_BOOL bDeferStartDev = (nCamCnt > 1) ? AX_TRUE : AX_FALSE;

    gDeferStreamOn = bDeferStreamOn;
    gDeferStartDev = bDeferStartDev;
    if (nCamCnt > 1) {
        ret = sc035hgs_start_mipi_staged(pCamList, nCamCnt);
        if (AX_SUCCESS != ret) {
            gDeferStreamOn = AX_FALSE;
            return ret;
        }
        gSkipMipiStart = AX_TRUE;
    }

    for (i = 0; i < nCamCnt; i++) {
        ret = sc035hgs_cam_open_one(&pCamList[i]);
        if (AX_SUCCESS != ret) {
            while (i > 0) {
                i--;
                sc035hgs_cam_close_one(&pCamList[i]);
            }
            sc035hgs_close_all_sns_clk();
            return ret;
        }
    }
    gDeferStreamOn = AX_FALSE;
    gDeferStartDev = AX_FALSE;
    gSkipMipiStart = AX_FALSE;

    if (bDeferStartDev) {
        for (i = 0; i < nCamCnt; i++) {
            ret = COMMON_VIN_StartDev(pCamList[i].nDevId, pCamList[i].bEnableDev,
                                      &pCamList[i].tDevAttr);
            if (AX_SUCCESS != ret) {
                printf("COMMON_VIN_StartDev dev%u deferred failed, ret=0x%x\n",
                       pCamList[i].nDevId, ret);
                return ret;
            }
            printf("SC035HGS deferred start dev%u\n", pCamList[i].nDevId);
        }
    }

    if (bDeferStreamOn) {
        for (i = 0; i < nCamCnt; i++) {
            AX_U32 j = 0;

            for (j = 0; j < pCamList[i].tDevBindPipe.nNum; j++) {
                AX_U8 nPipeId = pCamList[i].tDevBindPipe.nPipeId[j];

                ret = AX_ISP_StreamOn(nPipeId);
                if (AX_SUCCESS != ret) {
                    printf("AX_ISP_StreamOn pipe%u deferred failed, ret=0x%x\n", nPipeId, ret);
                    return ret;
                }
                printf("SC035HGS deferred stream on pipe%u\n", nPipeId);
            }
        }
    }

    return AX_SUCCESS;
}

static AX_VOID sc035hgs_cam_close(AX_CAMERA_T *pCamList, AX_U32 nCamCnt)
{
    AX_U32 i = nCamCnt;

    while (i > 0) {
        i--;
        sc035hgs_cam_close_one(&pCamList[i]);
    }
    for (i = 0; i < nCamCnt; i++) {
        if (sc035hgs_rx_already_used(pCamList, i, pCamList[i].nRxDev)) {
            continue;
        }
        COMMON_VIN_StopMipi(pCamList[i].nRxDev);
    }
    sc035hgs_close_all_sns_clk();
}

static AX_S32 sc035hgs_ivps_init_one(AX_U32 nGrpId)
{
    AX_S32 ret = 0;
    AX_IVPS_GRP_ATTR_T tGrpAttr = {0};
    AX_IVPS_PIPELINE_ATTR_T tPipelineAttr = {0};

    tGrpAttr.nInFifoDepth = 2;
    tGrpAttr.ePipeline = AX_IVPS_PIPELINE_DEFAULT;
    ret = AX_IVPS_CreateGrp(nGrpId, &tGrpAttr);
    if (AX_SUCCESS != ret) {
        printf("AX_IVPS_CreateGrp grp%u failed, ret=0x%x\n", nGrpId, ret);
        return ret;
    }

    tPipelineAttr.nOutChnNum = 1;
    tPipelineAttr.nOutFifoDepth[SC035HGS_IVPS_CHN] = 2;

    tPipelineAttr.tFilter[0][0].bEngage = AX_TRUE;
    tPipelineAttr.tFilter[0][0].eEngine = AX_IVPS_ENGINE_VPP;
    tPipelineAttr.tFilter[0][0].nDstPicWidth = SC035HGS_WIDTH;
    tPipelineAttr.tFilter[0][0].nDstPicHeight = SC035HGS_HEIGHT;
    tPipelineAttr.tFilter[0][0].nDstPicStride = SC035HGS_ALIGN_UP(SC035HGS_WIDTH, 16);
    tPipelineAttr.tFilter[0][0].eDstPicFormat = SC035HGS_IVPS_FMT;
    tPipelineAttr.tFilter[0][0].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
    tPipelineAttr.tFilter[0][0].tCompressInfo.u32CompressLevel = 0;

    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].bEngage = AX_TRUE;
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].eEngine = AX_IVPS_ENGINE_SCL;
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].nDstPicWidth = SC035HGS_WIDTH;
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].nDstPicHeight = SC035HGS_HEIGHT;
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].nDstPicStride = SC035HGS_ALIGN_UP(SC035HGS_WIDTH, 16);
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].eDstPicFormat = SC035HGS_IVPS_FMT;
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
    tPipelineAttr.tFilter[SC035HGS_IVPS_CHN + 1][0].tCompressInfo.u32CompressLevel = 0;

    ret = AX_IVPS_SetPipelineAttr(nGrpId, &tPipelineAttr);
    if (AX_SUCCESS != ret) {
        printf("AX_IVPS_SetPipelineAttr grp%u failed, ret=0x%x\n", nGrpId, ret);
        AX_IVPS_DestoryGrp(nGrpId);
        return ret;
    }

    ret = AX_IVPS_EnableChn(nGrpId, SC035HGS_IVPS_CHN);
    if (AX_SUCCESS != ret) {
        printf("AX_IVPS_EnableChn grp%u failed, ret=0x%x\n", nGrpId, ret);
        AX_IVPS_DestoryGrp(nGrpId);
        return ret;
    }

    ret = AX_IVPS_StartGrp(nGrpId);
    if (AX_SUCCESS != ret) {
        printf("AX_IVPS_StartGrp grp%u failed, ret=0x%x\n", nGrpId, ret);
        AX_IVPS_DisableChn(nGrpId, SC035HGS_IVPS_CHN);
        AX_IVPS_DestoryGrp(nGrpId);
        return ret;
    }

    printf("SC035HGS IVPS ready: grp=%u chn=%d %dx%d fmt=%d, dump=y8_luma_only\n",
           nGrpId, SC035HGS_IVPS_CHN, SC035HGS_WIDTH, SC035HGS_HEIGHT, SC035HGS_IVPS_FMT);
    return AX_SUCCESS;
}

static AX_S32 sc035hgs_ivps_init(AX_U32 nCamCnt)
{
    AX_S32 ret = 0;
    AX_U32 i = 0;

    ret = AX_IVPS_Init();
    if (AX_SUCCESS != ret) {
        printf("AX_IVPS_Init failed, ret=0x%x\n", ret);
        return ret;
    }

    for (i = 0; i < nCamCnt; i++) {
        ret = sc035hgs_ivps_init_one(gIvpsGrp[i]);
        if (AX_SUCCESS != ret) {
            while (i > 0) {
                i--;
                AX_IVPS_StopGrp(gIvpsGrp[i]);
                AX_IVPS_DisableChn(gIvpsGrp[i], SC035HGS_IVPS_CHN);
                AX_IVPS_DestoryGrp(gIvpsGrp[i]);
            }
            AX_IVPS_Deinit();
            return ret;
        }
    }

    return AX_SUCCESS;
}

static AX_VOID sc035hgs_ivps_deinit(AX_U32 nCamCnt)
{
    AX_U32 i = 0;

    for (i = 0; i < nCamCnt; i++) {
        AX_IVPS_StopGrp(gIvpsGrp[i]);
        AX_IVPS_DisableChn(gIvpsGrp[i], SC035HGS_IVPS_CHN);
        AX_IVPS_DestoryGrp(gIvpsGrp[i]);
    }
    AX_IVPS_Deinit();
}

static AX_U64 sc035hgs_abs_diff_u64(AX_U64 a, AX_U64 b)
{
    return (a > b) ? (a - b) : (b - a);
}

static AX_S32 sc035hgs_link_vin_to_ivps(AX_U32 nCamCnt)
{
    AX_MOD_INFO_T tSrcMod = {0};
    AX_MOD_INFO_T tDstMod = {0};
    AX_S32 ret = 0;
    AX_U32 i = 0;

    for (i = 0; i < nCamCnt; i++) {
        memset(&tSrcMod, 0, sizeof(tSrcMod));
        memset(&tDstMod, 0, sizeof(tDstMod));
        tSrcMod.enModId = AX_ID_VIN;
        tSrcMod.s32GrpId = gCams[i].nPipeId;
        tSrcMod.s32ChnId = AX_VIN_CHN_ID_MAIN;
        tDstMod.enModId = AX_ID_IVPS;
        tDstMod.s32GrpId = gIvpsGrp[i];
        tDstMod.s32ChnId = SC035HGS_IVPS_CHN;

        ret = AX_SYS_Link(&tSrcMod, &tDstMod);
        if (AX_SUCCESS != ret) {
            printf("AX_SYS_Link VIN pipe%d -> IVPS grp%u failed, ret=0x%x\n",
                   gCams[i].nPipeId, gIvpsGrp[i], ret);
            while (i > 0) {
                i--;
                memset(&tSrcMod, 0, sizeof(tSrcMod));
                memset(&tDstMod, 0, sizeof(tDstMod));
                tSrcMod.enModId = AX_ID_VIN;
                tSrcMod.s32GrpId = gCams[i].nPipeId;
                tSrcMod.s32ChnId = AX_VIN_CHN_ID_MAIN;
                tDstMod.enModId = AX_ID_IVPS;
                tDstMod.s32GrpId = gIvpsGrp[i];
                tDstMod.s32ChnId = SC035HGS_IVPS_CHN;
                AX_SYS_UnLink(&tSrcMod, &tDstMod);
            }
            return ret;
        }
    }

    return AX_SUCCESS;
}

static AX_VOID sc035hgs_unlink_vin_to_ivps(AX_U32 nCamCnt)
{
    AX_MOD_INFO_T tSrcMod = {0};
    AX_MOD_INFO_T tDstMod = {0};
    AX_U32 i = 0;

    for (i = 0; i < nCamCnt; i++) {
        memset(&tSrcMod, 0, sizeof(tSrcMod));
        memset(&tDstMod, 0, sizeof(tDstMod));
        tSrcMod.enModId = AX_ID_VIN;
        tSrcMod.s32GrpId = gCams[i].nPipeId;
        tSrcMod.s32ChnId = AX_VIN_CHN_ID_MAIN;
        tDstMod.enModId = AX_ID_IVPS;
        tDstMod.s32GrpId = gIvpsGrp[i];
        tDstMod.s32ChnId = SC035HGS_IVPS_CHN;
        AX_SYS_UnLink(&tSrcMod, &tDstMod);
    }
}

static AX_S32 sc035hgs_drain_loop(const SAMPLE_SC035HGS_ARGS_T *pArgs)
{
    AX_VIDEO_FRAME_T tFrames[SC035HGS_MAX_CAMERAS];
    AX_BOOL bHasFrame[SC035HGS_MAX_CAMERAS] = {AX_FALSE};
    AX_U64 nFrameCnt[SC035HGS_MAX_CAMERAS] = {0};
    AX_BOOL bDumped[SC035HGS_MAX_CAMERAS] = {AX_FALSE};
    AX_U64 nStart = (AX_U64)time(NULL);
    AX_U32 nFailCnt[SC035HGS_MAX_CAMERAS] = {0};
    AX_U64 nPairCnt = 0;
    AX_U64 nLastPrintCnt = 0;
    AX_U32 i = 0;
    AX_S32 ret = 0;

    memset(tFrames, 0, sizeof(tFrames));

    while (!gLoopExit) {
        if (pArgs->nRunSeconds && ((AX_U64)time(NULL) - nStart >= pArgs->nRunSeconds)) {
            break;
        }

        for (i = 0; i < pArgs->nCamCnt; i++) {
            if (bHasFrame[i]) {
                continue;
            }

            memset(&tFrames[i], 0, sizeof(tFrames[i]));
            ret = AX_IVPS_GetChnFrame(gIvpsGrp[i], SC035HGS_IVPS_CHN, &tFrames[i], 1000);
            if (AX_SUCCESS == ret) {
                nFailCnt[i] = 0;
                nFrameCnt[i]++;
                bHasFrame[i] = AX_TRUE;
            } else {
                nFailCnt[i]++;
                if (nFailCnt[i] <= 5 || (nFailCnt[i] % 30) == 0) {
                    printf("SC035HGS grp%u AX_IVPS_GetChnFrame failed, ret=0x%x, cnt=%u\n",
                           gIvpsGrp[i], ret, nFailCnt[i]);
                }
                usleep(10 * 1000);
            }
        }

        if (1 == pArgs->nCamCnt) {
            if (bHasFrame[0]) {
                if (pArgs->bDumpOnce && !bDumped[0] && nFrameCnt[0] > pArgs->nDumpSkip) {
                    if (0 == sc035hgs_save_y8(gCams[0].nPipeId, &tFrames[0])) {
                        bDumped[0] = AX_TRUE;
                    }
                }
                AX_IVPS_ReleaseChnFrame(gIvpsGrp[0], SC035HGS_IVPS_CHN, &tFrames[0]);
                bHasFrame[0] = AX_FALSE;
            }
        } else if (bHasFrame[0] && bHasFrame[1]) {
            AX_U64 nDelta = sc035hgs_abs_diff_u64(tFrames[0].u64PTS, tFrames[1].u64PTS);

            if (nDelta <= pArgs->nSyncPtsUs) {
                nPairCnt++;
                if (pArgs->bDumpOnce && (!bDumped[0] || !bDumped[1]) && nPairCnt > pArgs->nDumpSkip) {
                    AX_S32 ret0 = sc035hgs_save_y8(gCams[0].nPipeId, &tFrames[0]);
                    AX_S32 ret1 = sc035hgs_save_y8(gCams[1].nPipeId, &tFrames[1]);
                    if (0 == ret0 && 0 == ret1) {
                        bDumped[0] = AX_TRUE;
                        bDumped[1] = AX_TRUE;
                        printf("SC035HGS saved synced pair: pts0=%llu pts1=%llu delta=%llu us seq0=%llu seq1=%llu\n",
                               (unsigned long long)tFrames[0].u64PTS,
                               (unsigned long long)tFrames[1].u64PTS,
                               (unsigned long long)nDelta,
                               (unsigned long long)tFrames[0].u64SeqNum,
                               (unsigned long long)tFrames[1].u64SeqNum);
                    }
                }

                AX_IVPS_ReleaseChnFrame(gIvpsGrp[0], SC035HGS_IVPS_CHN, &tFrames[0]);
                AX_IVPS_ReleaseChnFrame(gIvpsGrp[1], SC035HGS_IVPS_CHN, &tFrames[1]);
                bHasFrame[0] = AX_FALSE;
                bHasFrame[1] = AX_FALSE;
            } else {
                AX_U32 nOld = (tFrames[0].u64PTS < tFrames[1].u64PTS) ? 0 : 1;
                printf("SC035HGS drop unsynced grp%u frame: pts0=%llu pts1=%llu delta=%llu us\n",
                       nOld,
                       (unsigned long long)tFrames[0].u64PTS,
                       (unsigned long long)tFrames[1].u64PTS,
                       (unsigned long long)nDelta);
                AX_IVPS_ReleaseChnFrame(gIvpsGrp[nOld], SC035HGS_IVPS_CHN, &tFrames[nOld]);
                bHasFrame[nOld] = AX_FALSE;
            }
        }

        if (nFrameCnt[0] && nLastPrintCnt != nFrameCnt[0] && (nFrameCnt[0] % 120) == 0) {
            nLastPrintCnt = nFrameCnt[0];
            printf("SC035HGS frame cnt:");
            for (i = 0; i < pArgs->nCamCnt; i++) {
                printf(" grp%u=%llu", gIvpsGrp[i], (unsigned long long)nFrameCnt[i]);
            }
            if (pArgs->nCamCnt > 1) {
                printf(" synced_pairs=%llu", (unsigned long long)nPairCnt);
            }
            printf("\n");
        }
    }

    for (i = 0; i < pArgs->nCamCnt; i++) {
        if (bHasFrame[i]) {
            AX_IVPS_ReleaseChnFrame(gIvpsGrp[i], SC035HGS_IVPS_CHN, &tFrames[i]);
            bHasFrame[i] = AX_FALSE;
        }
    }

    return 0;
}

static AX_S32 sc035hgs_parse_args(AX_S32 argc, AX_CHAR *argv[], SAMPLE_SC035HGS_ARGS_T *pArgs)
{
    AX_S32 c = 0;

    pArgs->nCamCnt = 1;
    pArgs->nFirstCam = 0;
    pArgs->nRunSeconds = 0;
    pArgs->bDumpOnce = AX_FALSE;
    pArgs->nDumpSkip = 60;
    pArgs->nMipiRate = SC035HGS_DEFAULT_RATE;
    pArgs->nVinIvpsMode = AX_GDC_ONLINE_VPP;
    pArgs->nSyncPtsUs = SC035HGS_DEFAULT_SYNC_US;
    pArgs->fFps = SC035HGS_DEFAULT_FPS;

    while ((c = getopt(argc, argv, "n:b:t:ds:r:v:p:f:h")) != -1) {
        switch (c) {
        case 'n':
            pArgs->nCamCnt = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 'b':
            pArgs->nFirstCam = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 't':
            pArgs->nRunSeconds = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 'd':
            pArgs->bDumpOnce = AX_TRUE;
            break;
        case 's':
            pArgs->nDumpSkip = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 'r':
            pArgs->nMipiRate = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 'v':
            pArgs->nVinIvpsMode = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 'p':
            pArgs->nSyncPtsUs = (AX_U32)strtoul(optarg, NULL, 0);
            break;
        case 'f':
            pArgs->fFps = (AX_F32)strtod(optarg, NULL);
            break;
        case 'h':
        default:
            sc035hgs_usage(argv[0]);
            return -1;
        }
    }

    if (pArgs->nCamCnt < 1 || pArgs->nCamCnt > SC035HGS_MAX_CAMERAS) {
        printf("invalid cam count %u\n", pArgs->nCamCnt);
        return -1;
    }
    if (pArgs->nFirstCam >= SC035HGS_MAX_CAMERAS ||
        pArgs->nFirstCam + pArgs->nCamCnt > SC035HGS_MAX_CAMERAS) {
        printf("invalid first camera %u with cam count %u\n", pArgs->nFirstCam, pArgs->nCamCnt);
        return -1;
    }
    if (pArgs->nVinIvpsMode >= AX_VIN_IVPS_MODE_BUTT) {
        printf("invalid VIN-IVPS mode %u\n", pArgs->nVinIvpsMode);
        return -1;
    }

    return 0;
}

int main(int argc, char *argv[])
{
    SAMPLE_SC035HGS_ARGS_T tArgs = {0};
    COMMON_SYS_ARGS_T tCommonArgs = {0};
    COMMON_SYS_ARGS_T tPrivArgs = {0};
    AX_BOOL bSysInited = AX_FALSE;
    AX_BOOL bCamInited = AX_FALSE;
    AX_BOOL bPrivPoolInited = AX_FALSE;
    AX_BOOL bCamOpened = AX_FALSE;
    AX_BOOL bIvpsInited = AX_FALSE;
    AX_BOOL bVinIvpsLinked = AX_FALSE;
    AX_S32 ret = 0;
    AX_U32 i = 0;

    if (0 != sc035hgs_parse_args(argc, argv, &tArgs)) {
        return -1;
    }

    signal(SIGINT, sc035hgs_sigint);
    signal(SIGTERM, sc035hgs_sigint);

    tCommonArgs.nCamCnt = tArgs.nCamCnt;
    tCommonArgs.nPoolCfgCnt = sizeof(gSc035hgsCommPool) / sizeof(gSc035hgsCommPool[0]);
    tCommonArgs.pPoolCfg = gSc035hgsCommPool;
    tPrivArgs.nPoolCfgCnt = sizeof(gSc035hgsPrivatePool) / sizeof(gSc035hgsPrivatePool[0]);
    tPrivArgs.pPoolCfg = gSc035hgsPrivatePool;

    for (i = 0; i < tArgs.nCamCnt; i++) {
        if (0 != sc035hgs_config_camera(&gCams[i], tArgs.nFirstCam + i, &tArgs)) {
            return -1;
        }
    }
    sc035hgs_apply_dual_lane_map(gCams, tArgs.nCamCnt);

    ret = COMMON_SYS_Init(&tCommonArgs);
    if (ret) {
        printf("COMMON_SYS_Init failed, ret=0x%x\n", ret);
        goto EXIT;
    }
    bSysInited = AX_TRUE;

    printf("SC035HGS VIN-IVPS mode: %u, sync_pts_us=%u\n",
           tArgs.nVinIvpsMode, tArgs.nSyncPtsUs);
    for (i = 0; i < tArgs.nCamCnt; i++) {
        ret = AX_SYS_SetVINIVPSMode(gCams[i].nPipeId, gIvpsGrp[i],
                                    (AX_VIN_IVPS_MODE_E)tArgs.nVinIvpsMode);
        if (ret) {
            printf("AX_SYS_SetVINIVPSMode vin%u->ivps%u failed, ret=0x%x\n",
                   gCams[i].nPipeId, gIvpsGrp[i], ret);
            goto EXIT;
        }
    }

    ret = sc035hgs_link_vin_to_ivps(tArgs.nCamCnt);
    if (ret) {
        goto EXIT;
    }
    bVinIvpsLinked = AX_TRUE;

    ret = COMMON_NPU_Init();
    if (ret) {
        printf("COMMON_NPU_Init failed, ret=0x%x\n", ret);
        goto EXIT;
    }

    ret = COMMON_CAM_Init();
    if (ret) {
        printf("COMMON_CAM_Init failed, ret=0x%x\n", ret);
        goto EXIT;
    }
    bCamInited = AX_TRUE;

    ret = COMMON_CAM_PrivPoolInit(&tPrivArgs);
    if (ret) {
        printf("COMMON_CAM_PrivPoolInit failed, ret=0x%x\n", ret);
        goto EXIT;
    }
    bPrivPoolInited = AX_TRUE;

    ret = sc035hgs_cam_open(gCams, tArgs.nCamCnt);
    if (ret) {
        printf("sc035hgs_cam_open failed, ret=0x%x\n", ret);
        goto EXIT;
    }
    bCamOpened = AX_TRUE;

    ret = COMMON_NT_Init(6000, 8082);
    if (ret) {
        COMM_ISP_PRT("COMMON_NT_Init fail, ret:0x%x", ret);
        goto EXIT;
    }
    /* update pipe attribute */
    for (int i = 0; i < tCommonArgs.nCamCnt; i++) {
        for (int j = 0; j < gCams[i].tDevBindPipe.nNum; j++) {
            COMMON_NT_UpdateSource(gCams[i].tDevBindPipe.nPipeId[j]);
        }
    }

    ret = sc035hgs_ivps_init(tArgs.nCamCnt);
    if (ret) {
        goto EXIT;
    }
    bIvpsInited = AX_TRUE;

    sc035hgs_drain_loop(&tArgs);

EXIT:
    if (bVinIvpsLinked) {
        sc035hgs_unlink_vin_to_ivps(tArgs.nCamCnt);
        bVinIvpsLinked = AX_FALSE;
    }
    if (bCamOpened) {
        sc035hgs_cam_close(gCams, tArgs.nCamCnt);
    }
    if (bPrivPoolInited) {
        (AX_VOID)bPrivPoolInited;
    }
    if (bCamInited) {
        COMMON_CAM_Deinit();
    }
    if (bIvpsInited) {
        sc035hgs_ivps_deinit(tArgs.nCamCnt);
    }
    if (bSysInited) {
        COMMON_SYS_DeInit();
    }

    printf("sample_sc035hgs exit, ret=0x%x\n", ret);
    return ret;
}
