#include <unistd.h>
#include <string.h>
#include <sys/prctl.h>
#include <signal.h>
#include "sample_vin.h"
#include "common_cam.h"
#include "common_nt.h"
#include "common_type.h"
#include "ax_vin_api.h"
#include "ax_isp_api.h"
#include "ax_vin_error_code.h"
#include "mipi_switch.h"
#include "ax_sys_api.h"


COMMON_SYS_POOL_CFG_T gtSysCommPoolTripleOs04a10Sdr[] = {
    {2688, 1520, 2688, AX_FORMAT_YUV420_SEMIPLANAR, 8, AX_COMPRESS_MODE_LOSSY, 4},    /* vin nv21/nv21 use */
    {1920, 1080, 1920, AX_FORMAT_YUV420_SEMIPLANAR, 8, AX_COMPRESS_MODE_LOSSY, 4},    /* vin nv21/nv21 use */
};


COMMON_SYS_POOL_CFG_T gtPrivatePoolTripleOs04a10Sdr[] = {
    {2688, 1520, 2688, AX_FORMAT_BAYER_RAW_10BPP_PACKED, 10, AX_COMPRESS_MODE_LOSSY, 4},      /* vin raw10 use */
    {1920, 1080, 1920, AX_FORMAT_BAYER_RAW_10BPP_PACKED, 10, AX_COMPRESS_MODE_LOSSY, 4},      /* vin raw10 use */
    {1920, 1080, 1920, AX_FORMAT_BAYER_RAW_10BPP_PACKED, 10, AX_COMPRESS_MODE_NONE, 0},      /* vin raw10 use */

};

static AX_CAMERA_T gCams[MAX_CAMERAS];
static volatile AX_S32 gLoopExit = 0;
static pthread_t gDispatchThread[MAX_CAMERAS] = {0};
static void *DispatchThread(void *args);
static AX_S32 g_dispatcher_loop_exit[MAX_CAMERAS] = {0};
static AX_S32 SysFrameDispatch(AX_U8 nPipeId, AX_CAMERA_T *pCam, AX_SNS_HDR_MODE_E eHdrMode);

static AX_VOID __sigint(int iSigNo)
{
    COMM_ISP_PRT("Catch signal %d\n", iSigNo);
    gLoopExit = 1;

    return ;
}

static AX_VOID __set_pipe_hdr_mode(AX_U32 *pHdrSel, AX_SNS_HDR_MODE_E eHdrMode)
{
    if (NULL == pHdrSel) {
        return;
    }

    switch (eHdrMode) {
    case AX_SNS_LINEAR_MODE:
        *pHdrSel = 0x1;
        break;

    case AX_SNS_HDR_2X_MODE:
        *pHdrSel = 0x1 | 0x2;
        break;

    case AX_SNS_HDR_3X_MODE:
        *pHdrSel = 0x1 | 0x2 | 0x4;
        break;

    case AX_SNS_HDR_4X_MODE:
        *pHdrSel = 0x1 | 0x2 | 0x4 | 0x8;
        break;

    default:
        *pHdrSel = 0x1;
        break;
    }
}

static AX_VOID __set_vin_attr(AX_CAMERA_T *pCam, SAMPLE_SNS_TYPE_E eSnsType, AX_SNS_HDR_MODE_E eHdrMode,
                              COMMON_VIN_MODE_E eSysMode, AX_BOOL bAiispEnable)
{
    pCam->eSnsType = eSnsType;
    pCam->tSnsAttr.eSnsMode = eHdrMode;
    pCam->tDevAttr.eSnsMode = eHdrMode;
    pCam->eHdrMode = eHdrMode;
    pCam->eSysMode = eSysMode;
    pCam->tPipeAttr[pCam->nPipeId].eSnsMode = eHdrMode;
    pCam->tPipeAttr[pCam->nPipeId].bAiIspEnable = bAiispEnable;

    if (eHdrMode > AX_SNS_LINEAR_MODE) {
        pCam->tDevAttr.eSnsOutputMode = AX_SNS_DOL_HDR;
    }

    if (COMMON_VIN_TPG == eSysMode) {
        pCam->tDevAttr.eSnsIntfType = AX_SNS_INTF_TYPE_TPG;
    }

    if (COMMON_VIN_LOADRAW == eSysMode) {
        pCam->bEnableDev = AX_FALSE;
    } else {
        pCam->bEnableDev = AX_TRUE;
    }
    pCam->bChnEn[0] = AX_TRUE;
    pCam->bRegisterSns = AX_TRUE;

    return;
}

static AX_VOID __cal_dump_pool(COMMON_SYS_POOL_CFG_T pool[], AX_SNS_HDR_MODE_E eHdrMode, AX_S32 nFrameNum)
{
    if (NULL == pool) {
        return;
    }
    if (nFrameNum > 0) {
        switch (eHdrMode) {
        case AX_SNS_LINEAR_MODE:
            pool[0].nBlkCnt += nFrameNum;
            break;

        case AX_SNS_HDR_2X_MODE:
            pool[0].nBlkCnt += nFrameNum * 2;
            break;

        case AX_SNS_HDR_3X_MODE:
            pool[0].nBlkCnt += nFrameNum * 3;
            break;

        case AX_SNS_HDR_4X_MODE:
            pool[0].nBlkCnt += nFrameNum * 4;
            break;

        default:
            pool[0].nBlkCnt += nFrameNum;
            break;
        }
    }
}

static AX_U32 __sample_case_triple_os04a10(AX_CAMERA_T *pCamList, SAMPLE_VIN_PARAM_T *pVinParam, COMMON_SYS_ARGS_T *pCommonArgs)
{
    AX_CAMERA_T *pCam = NULL;
    COMMON_VIN_MODE_E eSysMode = pVinParam->eSysMode;
    AX_SNS_HDR_MODE_E eHdrMode = pVinParam->eHdrMode;
    AX_S32 j = 0;
    SAMPLE_SNS_TYPE_E eSensorType = SAMPLE_SNS_TYPE_NONE;


    pCommonArgs->nCamCnt = 2;

    //pipe 0
    pCam = &pCamList[0];
    pCam->nNumber = 0;
    pCam->nPipeId = 0;
    eSensorType = OMNIVISION_OS04A10;
    COMMON_VIN_GetSnsConfig(eSensorType, &pCam->tMipiAttr, &pCam->tSnsAttr,
                            &pCam->tSnsClkAttr, &pCam->tDevAttr,
                            &pCam->tPipeAttr[pCam->nPipeId], pCam->tChnAttr);

    pCam->nDevId = 0;
    pCam->nRxDev = 0;
    pCam->nI2cAddr = 0x36;
    pCam->nI2cNode = 0;
    pCam->tSnsClkAttr.nSnsClkIdx = 0;
    pCam->tDevBindPipe.nNum =  1;
    pCam->tDevBindPipe.nPipeId[0] = pCam->nPipeId;
    pCam->ptSnsHdl[pCam->nPipeId] = COMMON_ISP_GetSnsObj(eSensorType);
    pCam->eBusType = COMMON_ISP_GetSnsBusType(eSensorType);
    pCam->tSnsAttr.nSettingIndex = 33;
    pCam->tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_2;
    pCam->eInputMode = AX_INPUT_MODE_MIPI;
    pCam->tDevAttr.tDevImgRgn[1].nStartX = 0;
    pCam->tDevAttr.tDevImgRgn[1].nStartY = 0;
    pCam->tDevAttr.tDevImgRgn[1].nWidth = 2688;
    pCam->tDevAttr.tDevImgRgn[1].nHeight = 1520;

    __set_pipe_hdr_mode(&pCam->tDevBindPipe.nHDRSel[0], eHdrMode);
    __set_vin_attr(pCam, eSensorType, eHdrMode, eSysMode, pVinParam->bAiispEnable);

    if (pCam->nPipeId != 0 && eHdrMode == AX_SNS_HDR_2X_MODE) {
        pCam->tPipeAttr[pCam->nPipeId].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
    }

    for (j = 0; j < pCam->tDevBindPipe.nNum; j++) {
        pCam->tPipeInfo[j].ePipeMode = SAMPLE_PIPE_MODE_VIDEO;
        pCam->tPipeInfo[j].bAiispEnable = pVinParam->bAiispEnable;
        strncpy(pCam->tPipeInfo[j].szBinPath, "null.bin", sizeof(pCam->tPipeInfo[j].szBinPath));
    }

    //pipe 1
    pCam = &pCamList[1];
    pCam->nNumber = 1;
    pCam->nPipeId = 1;
    eSensorType = OMNIVISION_OS04A10;
    COMMON_VIN_GetSnsConfig(eSensorType, &pCam->tMipiAttr, &pCam->tSnsAttr,
                            &pCam->tSnsClkAttr, &pCam->tDevAttr,
                            &pCam->tPipeAttr[pCam->nPipeId], pCam->tChnAttr);

    pCam->nDevId = 1;
    pCam->nRxDev = 1;
    pCam->nI2cAddr = 0x36;
    pCam->nI2cNode = 2;
    pCam->tSnsClkAttr.nSnsClkIdx = 0;
    pCam->tDevBindPipe.nNum =  2;
    pCam->tDevBindPipe.nPipeId[0] = pCam->nPipeId;
    pCam->tDevBindPipe.nPipeId[1] = 2;
    pCam->ptSnsHdl[pCam->nPipeId] = COMMON_ISP_GetSnsObj(eSensorType);
    pCam->eBusType = COMMON_ISP_GetSnsBusType(eSensorType);
    pCam->tSnsAttr.nSettingIndex = 7;
    pCam->tSnsAttr.fFrameRate = 15;
    pCam->tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_2;
    pCam->eInputMode = AX_INPUT_MODE_MIPI;
    pCam->tDevAttr.tDevImgRgn[1].nStartX = 0;
    pCam->tDevAttr.tDevImgRgn[1].nStartY = 0;
    pCam->tDevAttr.tDevImgRgn[1].nWidth = 1920;
    pCam->tDevAttr.tDevImgRgn[1].nHeight = 1080;
    eHdrMode = AX_SNS_HDR_2X_MODE;
    //__set_pipe_hdr_mode(&pCam->tDevBindPipe.nHDRSel[0], AX_SNS_LINEAR_MODE);
    pCam->tDevBindPipe.nHDRSel[0] = 1;
    pCam->tDevBindPipe.nHDRSel[1] = 2;
    __set_vin_attr(pCam, eSensorType, eHdrMode, eSysMode, pVinParam->bAiispEnable);

    pCam->tDevAttr.eSnsOutputMode = AX_SNS_NORMAL;
    pCam->tPipeAttr[pCam->nPipeId].eSnsMode = AX_SNS_LINEAR_MODE;

    pCam->tPipeAttr[pCam->nPipeId].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;

    for (j = 0; j < pCam->tDevBindPipe.nNum; j++) {
        pCam->tPipeInfo[j].ePipeMode = SAMPLE_PIPE_MODE_VIDEO;
        pCam->tPipeInfo[j].bAiispEnable = pVinParam->bAiispEnable;
        strncpy(pCam->tPipeInfo[j].szBinPath, "null.bin", sizeof(pCam->tPipeInfo[j].szBinPath));
    }

    //pipe 2
    pCam = &pCamList[2];
    pCam->nNumber = 2;
    pCam->nPipeId = 2;
    eSensorType = OMNIVISION_OS04A10;
    COMMON_VIN_GetSnsConfig(eSensorType, &pCam->tMipiAttr, &pCam->tSnsAttr,
                            &pCam->tSnsClkAttr, &pCam->tDevAttr,
                            &pCam->tPipeAttr[pCam->nPipeId], pCam->tChnAttr);

    pCam->nDevId = 2;
    pCam->nRxDev = 1;
    pCam->nI2cAddr = 0x10;
    pCam->nI2cNode = 0;
    pCam->tSnsClkAttr.nSnsClkIdx = 0;
    pCam->tDevBindPipe.nNum =  0;
    pCam->tDevBindPipe.nPipeId[0] = pCam->nPipeId;
    pCam->ptSnsHdl[pCam->nPipeId] = COMMON_ISP_GetSnsObj(eSensorType);
    pCam->eBusType = COMMON_ISP_GetSnsBusType(eSensorType);
    pCam->tSnsAttr.nSettingIndex = 7;
    pCam->tSnsAttr.fFrameRate = 15;
    pCam->tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_2;
    pCam->eInputMode = AX_INPUT_MODE_MIPI;
    pCam->tPipeAttr[pCam->nPipeId].tPipeImgRgn.nStartX = 0;
    pCam->tPipeAttr[pCam->nPipeId].tPipeImgRgn.nStartY = 0;
    pCam->tPipeAttr[pCam->nPipeId].tPipeImgRgn.nWidth = 1920;
    pCam->tPipeAttr[pCam->nPipeId].tPipeImgRgn.nHeight = 1080;
    pCam->tChnAttr[0].nWidth = 1920;
    pCam->tChnAttr[0].nHeight = 1080;
    pCam->tChnAttr[0].nWidthStride = 1920;
    pCam->tChnAttr[0].eImgFormat = AX_FORMAT_YUV420_SEMIPLANAR;
    pCam->tChnAttr[0].nDepth = 1;
    pCam->tChnAttr[0].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_LOSSY;
    pCam->tChnAttr[0].tCompressInfo.u32CompressLevel = 4;
    pCam->tChnAttr[0].tFrameRateCtrl.fDstFrameRate = AX_INVALID_FRMRATE;
    pCam->tChnAttr[0].tFrameRateCtrl.fSrcFrameRate = AX_INVALID_FRMRATE;
    eHdrMode = AX_SNS_LINEAR_MODE;
    __set_pipe_hdr_mode(&pCam->tDevBindPipe.nHDRSel[0], eHdrMode);
    __set_vin_attr(pCam, eSensorType, eHdrMode, eSysMode, pVinParam->bAiispEnable);

    pCam->tDevAttr.eSnsOutputMode = AX_SNS_NORMAL;
    pCam->tPipeAttr[pCam->nPipeId].eSnsMode = AX_SNS_LINEAR_MODE;

    pCam->tPipeAttr[pCam->nPipeId].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;

    pCam->tPipeInfo[1].ePipeMode = SAMPLE_PIPE_MODE_VIDEO;
    pCam->tPipeInfo[1].bAiispEnable = pVinParam->bAiispEnable;
    strncpy(pCam->tPipeInfo[1].szBinPath, "null.bin", sizeof(pCam->tPipeInfo[j].szBinPath));

    return 0;
}

static AX_U32 __sample_case_triple_sc200ai(AX_CAMERA_T *pCamList, SAMPLE_VIN_PARAM_T *pVinParam, COMMON_SYS_ARGS_T *pCommonArgs)
{
    AX_CAMERA_T *pCam = NULL;
    COMMON_VIN_MODE_E eSysMode = pVinParam->eSysMode;
    AX_SNS_HDR_MODE_E eHdrMode = pVinParam->eHdrMode;
    AX_S32 j = 0;
    SAMPLE_SNS_TYPE_E eSensorType = SAMPLE_SNS_TYPE_NONE;


    pCommonArgs->nCamCnt = 2;

    //pipe 0
    pCam = &pCamList[0];
    pCam->nNumber = 0;
    pCam->nPipeId = 0;
    eSensorType = OMNIVISION_OS04A10;
    COMMON_VIN_GetSnsConfig(eSensorType, &pCam->tMipiAttr, &pCam->tSnsAttr,
                            &pCam->tSnsClkAttr, &pCam->tDevAttr,
                            &pCam->tPipeAttr[pCam->nPipeId], pCam->tChnAttr);

    pCam->nDevId = 0;
    pCam->nRxDev = 0;
    pCam->nI2cAddr = 0x36;
    pCam->nI2cNode = 0;
    pCam->tSnsClkAttr.nSnsClkIdx = 0;
    pCam->tDevBindPipe.nNum =  1;
    pCam->tDevBindPipe.nPipeId[0] = pCam->nPipeId;
    pCam->ptSnsHdl[pCam->nPipeId] = COMMON_ISP_GetSnsObj(eSensorType);
    pCam->eBusType = COMMON_ISP_GetSnsBusType(eSensorType);
    if (eHdrMode == AX_SNS_LINEAR_MODE) {
        pCam->tSnsAttr.nSettingIndex = 33;
    } else {
        pCam->tSnsAttr.nSettingIndex = 34;
    }
    pCam->tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_2;
    pCam->eInputMode = AX_INPUT_MODE_MIPI;
    pCam->tDevAttr.tDevImgRgn[1].nStartX = 0;
    pCam->tDevAttr.tDevImgRgn[1].nStartY = 0;
    pCam->tDevAttr.tDevImgRgn[1].nWidth = 2688;
    pCam->tDevAttr.tDevImgRgn[1].nHeight = 1520;

    __set_pipe_hdr_mode(&pCam->tDevBindPipe.nHDRSel[0], eHdrMode);
    __set_vin_attr(pCam, eSensorType, eHdrMode, eSysMode, pVinParam->bAiispEnable);

    if (pCam->nPipeId != 0 && eHdrMode == AX_SNS_HDR_2X_MODE) {
        pCam->tPipeAttr[pCam->nPipeId].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
    }

    for (j = 0; j < pCam->tDevBindPipe.nNum; j++) {
        pCam->tPipeInfo[j].ePipeMode = SAMPLE_PIPE_MODE_VIDEO;
        pCam->tPipeInfo[j].bAiispEnable = pVinParam->bAiispEnable;
        strncpy(pCam->tPipeInfo[j].szBinPath, "null.bin", sizeof(pCam->tPipeInfo[j].szBinPath));
    }

    //pipe 1
    pCam = &pCamList[1];
    pCam->nNumber = 1;
    pCam->nPipeId = 1;
    eSensorType = SMARTSENS_SC200AI;
    COMMON_VIN_GetSnsConfig(eSensorType, &pCam->tMipiAttr, &pCam->tSnsAttr,
                            &pCam->tSnsClkAttr, &pCam->tDevAttr,
                            &pCam->tPipeAttr[pCam->nPipeId], pCam->tChnAttr);

    pCam->nDevId = 1;
    pCam->nRxDev = 1;
    if (AX_SYS_GetChipType() == AX630C_CHIP) {
        pCam->nI2cAddr = 0x30;
        pCam->nI2cNode = 2;
    } else {
        pCam->nI2cAddr = 0x32;
        pCam->nI2cNode = 6;
    }
    pCam->tSwitchInfo.mipi_switch_en = AX_TRUE;
    pCam->tSwitchInfo.nI2cAddr = 0x32;
    pCam->tSwitchInfo.nI2cNode = 0;
    pCam->tSnsClkAttr.nSnsClkIdx = 0;
    pCam->tDevBindPipe.nNum =  1;
    pCam->tDevBindPipe.nPipeId[0] = pCam->nPipeId;
    pCam->ptSnsHdl[pCam->nPipeId] = COMMON_ISP_GetSnsObj(eSensorType);
    pCam->eBusType = COMMON_ISP_GetSnsBusType(eSensorType);
    if (eHdrMode == AX_SNS_LINEAR_MODE) {
        pCam->tSnsAttr.nSettingIndex = 4;
    } else {
        pCam->tSnsAttr.nSettingIndex = 6;
    }
    pCam->tSnsAttr.fFrameRate = 30;
    pCam->tSnsAttr.eMasterSlaveSel = AX_SNS_SYNC_SLAVE;
    pCam->tMipiAttr.eLaneNum = AX_MIPI_DATA_LANE_2;
    pCam->eInputMode = AX_INPUT_MODE_MIPI;
    pCam->tDevAttr.tDevImgRgn[1].nStartX = 0;
    pCam->tDevAttr.tDevImgRgn[1].nStartY = 0;
    pCam->tDevAttr.tDevImgRgn[1].nWidth = 1920;
    pCam->tDevAttr.tDevImgRgn[1].nHeight = 1080;

    __set_pipe_hdr_mode(&pCam->tDevBindPipe.nHDRSel[0], eHdrMode);
    __set_vin_attr(pCam, eSensorType, eHdrMode, eSysMode, pVinParam->bAiispEnable);

    if (pCam->nPipeId != 0 && eHdrMode == AX_SNS_HDR_2X_MODE) {
        pCam->tPipeAttr[pCam->nPipeId].tCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
    }
    for (j = 0; j < pCam->tDevBindPipe.nNum; j++) {
        pCam->tPipeInfo[j].ePipeMode = SAMPLE_PIPE_MODE_VIDEO;
        pCam->tPipeInfo[j].bAiispEnable = pVinParam->bAiispEnable;
        strncpy(pCam->tPipeInfo[j].szBinPath, "null.bin", sizeof(pCam->tPipeInfo[j].szBinPath));
    }

    return 0;
}

static AX_U32 __sample_case_config(SAMPLE_VIN_PARAM_T *pVinParam, COMMON_SYS_ARGS_T *pCommonArgs,
                                   COMMON_SYS_ARGS_T *pPrivArgs)
{
    AX_CAMERA_T         *pCamList = &gCams[0];

    COMM_ISP_PRT("eSysCase %d, eSysMode %d, eHdrMode %d, bAiispEnable %d\n", pVinParam->eSysCase,
                 pVinParam->eSysMode, pVinParam->eHdrMode, pVinParam->bAiispEnable);

    /* comm pool config */
    if (AX_SNS_LINEAR_MODE == pVinParam->eHdrMode) {
        __cal_dump_pool(gtSysCommPoolTripleOs04a10Sdr, pVinParam->eHdrMode, pVinParam->nDumpFrameNum);
        pCommonArgs->nPoolCfgCnt = sizeof(gtSysCommPoolTripleOs04a10Sdr) / sizeof(gtSysCommPoolTripleOs04a10Sdr[0]);
        pCommonArgs->pPoolCfg  = gtSysCommPoolTripleOs04a10Sdr;
    } else {
        __cal_dump_pool(gtSysCommPoolTripleOs04a10Sdr, pVinParam->eHdrMode, pVinParam->nDumpFrameNum);
        pCommonArgs->nPoolCfgCnt = sizeof(gtSysCommPoolTripleOs04a10Sdr) / sizeof(gtSysCommPoolTripleOs04a10Sdr[0]);
        pCommonArgs->pPoolCfg  = gtSysCommPoolTripleOs04a10Sdr;
    }
    /* private pool config */
    if (AX_SNS_LINEAR_MODE == pVinParam->eHdrMode) {
        __cal_dump_pool(gtPrivatePoolTripleOs04a10Sdr, pVinParam->eHdrMode, pVinParam->nDumpFrameNum);
        pPrivArgs->nPoolCfgCnt = sizeof(gtPrivatePoolTripleOs04a10Sdr) / sizeof(gtPrivatePoolTripleOs04a10Sdr[0]);
        pPrivArgs->pPoolCfg  = gtPrivatePoolTripleOs04a10Sdr;
    } else {
        __cal_dump_pool(gtPrivatePoolTripleOs04a10Sdr, pVinParam->eHdrMode, pVinParam->nDumpFrameNum);
        pPrivArgs->nPoolCfgCnt = sizeof(gtPrivatePoolTripleOs04a10Sdr) / sizeof(gtPrivatePoolTripleOs04a10Sdr[0]);
        pPrivArgs->pPoolCfg  = gtPrivatePoolTripleOs04a10Sdr;
    }
    /* cams config */
    if (pVinParam->eSysCase == SAMPLE_VIN_TRIPLE_OS04A10) {
        __sample_case_triple_os04a10(pCamList, pVinParam, pCommonArgs);
    } else {
        __sample_case_triple_sc200ai(pCamList, pVinParam, pCommonArgs);
    }

    return 0;
}

static AX_BOOL SeqNumIsMatch(AX_U8 nDevId, AX_IMG_INFO_T *frameBufferArr,  AX_U64 *frameSeqs, AX_U64 maxFrameSeq,
                             AX_SNS_HDR_MODE_E eHdrMode)
{
    AX_BOOL frameSeqNotMatch = AX_FALSE;
    AX_S32 j = 0;

    do {
        frameSeqNotMatch = AX_FALSE;
        for (j = 0; j < eHdrMode; j++) {
            if (frameSeqs[j] < maxFrameSeq) {
                COMM_ISP_PRT("FrameSeq(%lld) doesn't match (max_frame_seq:%lld), drop blk_id: 0x%x\n",
                             frameSeqs[j], maxFrameSeq, frameBufferArr[j].tFrameInfo.stVFrame.u32BlkId[0]);
                AX_VIN_ReleaseRawFrame(nDevId, AX_VIN_PIPE_DUMP_NODE_IFE, j, frameBufferArr + j);
                AX_VIN_GetRawFrame(nDevId, AX_VIN_PIPE_DUMP_NODE_IFE, j, frameBufferArr + j, -1);
                frameSeqNotMatch = AX_TRUE;
            }
        }

        if (frameSeqNotMatch) {
            for (j = 0; j < eHdrMode; j++) {
                frameSeqs[j] = frameBufferArr[j].tFrameInfo.stVFrame.u64SeqNum;
                if (frameSeqs[j] > maxFrameSeq) {
                    maxFrameSeq = frameSeqs[j];
                }
            }
        }
    } while (frameSeqNotMatch);

    return AX_TRUE;
}

static AX_S32 SysFrameDispatch(AX_U8 nPipeId, AX_CAMERA_T *pCam, AX_SNS_HDR_MODE_E eHdrMode)
{
    AX_S32 axRet = 0;
    AX_S32 j = 0;
    AX_S32 timeOutMs = 1000;
    AX_U64 maxFrameSeq = 0;
    AX_IMG_INFO_T frameBufferArr[AX_SNS_HDR_FRAME_MAX] = {0};
    AX_U64 frameSeqs[AX_SNS_HDR_FRAME_MAX] = {0};
    AX_BOOL isMatch = AX_FALSE;

    for (j = 0; j < eHdrMode; j++) {
        axRet = AX_VIN_GetRawFrame(nPipeId, AX_VIN_PIPE_DUMP_NODE_IFE, j, frameBufferArr + j, timeOutMs);
        if (axRet != 0) {
            if (AX_ERR_VIN_RES_EMPTY == axRet) {
                COMM_ISP_PRT("nonblock error, 0x%x\n", axRet);
                return axRet;
            }

            usleep(10 * 1000);
            AX_VIN_ReleaseRawFrame(nPipeId, AX_VIN_PIPE_DUMP_NODE_IFE, j, frameBufferArr + j);
            return axRet;
        }

        frameSeqs[j] = frameBufferArr[j].tFrameInfo.stVFrame.u64SeqNum;
        if (frameSeqs[j] > maxFrameSeq) {
            maxFrameSeq = frameSeqs[j];
        }
    }

    isMatch = SeqNumIsMatch(nPipeId, frameBufferArr, frameSeqs, maxFrameSeq, eHdrMode);
    if (isMatch == AX_TRUE) {
        axRet = AX_VIN_SendRawFrame(nPipeId, AX_VIN_FRAME_SOURCE_ID_ITP, eHdrMode,
                                    (const AX_IMG_INFO_T **)&frameBufferArr, timeOutMs);
        if (axRet != 0) {
            COMM_ISP_PRT("Send Pipe raw frame failed\n");
        }
    }

    for (j = 0; j < eHdrMode; j++) {
        AX_VIN_ReleaseRawFrame(nPipeId, AX_VIN_PIPE_DUMP_NODE_IFE, j, frameBufferArr + j);
    }

    return 0;
}

static void *DispatchThread(void *args)
{
    AX_CAMERA_T *pCam = (AX_CAMERA_T *)args;
    AX_CHAR token[32] = {0};

    AX_U8 nPipeId = pCam->nPipeId;
    AX_SNS_HDR_MODE_E eHdrMode = pCam->eHdrMode;

    snprintf(token, 32, "RAW_DISP_%u", nPipeId);
    prctl(PR_SET_NAME, token);

    while (!g_dispatcher_loop_exit[pCam->nNumber]) {
        SysFrameDispatch(nPipeId, pCam, eHdrMode);
    }

    return NULL;
}

static AX_S32 __common_cam_open(AX_CAMERA_T *pCam)
{
    AX_S32 i = 0;
    AX_S32 axRet = 0;
    AX_U8 nPipeId = 0;
    AX_U8 nDevId = pCam->nDevId;
    AX_U32 nRxDev = pCam->nRxDev;
    AX_INPUT_MODE_E eInputMode = pCam->eInputMode;

    /* confige sensor clk */
    axRet = AX_ISP_OpenSnsClk(pCam->tSnsClkAttr.nSnsClkIdx, pCam->tSnsClkAttr.eSnsClkRate);
    if (0 != axRet) {
        COMM_ISP_PRT("AX_ISP_OpenSnsClk failed, nRet=0x%x.\n", axRet);
        return -1;
    }

    axRet = COMMON_ISP_ResetSnsObj(nPipeId, nDevId, pCam->ptSnsHdl[pCam->nPipeId]);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_ISP_ResetSnsObj failed, ret=0x%x.\n", axRet);
        return -1;
    }

    axRet = COMMON_VIN_StartMipi(nRxDev, eInputMode, &pCam->tMipiAttr, pCam->eLaneComboMode);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_VIN_StartMipi failed, r-et=0x%x.\n", axRet);
        return -1;
    }

    axRet = COMMON_VIN_CreateDev(nDevId, nRxDev, &pCam->tDevAttr, &pCam->tDevBindPipe);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_VIN_CreateDev failed, ret=0x%x.\n", axRet);
        return -1;
    }

    for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
        nPipeId = pCam->tDevBindPipe.nPipeId[i];
        printf("nPipeId == %d, i == %d\n", nPipeId, i);
        pCam->tPipeAttr[nPipeId].bAiIspEnable = gCams[nPipeId].tPipeInfo[i].bAiispEnable;
        axRet = COMMON_VIN_SetPipeAttr(gCams[nPipeId].eSysMode, gCams[nPipeId].eLoadRawNode, nPipeId, &gCams[nPipeId].tPipeAttr[nPipeId]);
        if (0 != axRet) {
            COMM_CAM_PRT("COMMON_ISP_SetPipeAttr failed, ret=0x%x.\n", axRet);
            return -1;
        }

        if (gCams[nPipeId].tSwitchInfo.mipi_switch_en == AX_TRUE) {
            AX_VIN_DUMP_ATTR_T stDumpAttr;
            stDumpAttr.bEnable = AX_TRUE;
            stDumpAttr.nDepth = 1;
            AX_VIN_SetPipeDumpAttr(nPipeId, AX_VIN_PIPE_DUMP_NODE_IFE, AX_VIN_DUMP_QUEUE_TYPE_DEV, &stDumpAttr);

            axRet = AX_VIN_SetPipeFrameSource(nPipeId, AX_VIN_FRAME_SOURCE_ID_IFE, AX_VIN_FRAME_SOURCE_TYPE_DEV);
            if (axRet) {
                COMM_PRT("pipe %d src %d frame source set failed....\n", nPipeId, AX_VIN_FRAME_SOURCE_ID_IFE);
            }
            axRet = AX_VIN_SetPipeFrameSource(nPipeId, AX_VIN_FRAME_SOURCE_ID_ITP, AX_VIN_FRAME_SOURCE_TYPE_USER);
            if (axRet) {
                COMM_PRT("pipe %d src %d frame source set failed....\n", nPipeId, AX_VIN_FRAME_SOURCE_ID_IFE);
            }
        }

        if (gCams[nPipeId].bRegisterSns) {
            if (gCams[nPipeId].tSwitchInfo.mipi_switch_en == AX_TRUE) {
                axRet = COMMON_ISP_RegisterSns_mipi_switch(nPipeId, nDevId, gCams[nPipeId].eBusType, gCams[nPipeId].ptSnsHdl[nPipeId],
                 gCams[nPipeId].nI2cAddr, gCams[nPipeId].nI2cNode, gCams[nPipeId].tSwitchInfo.nI2cAddr, gCams[nPipeId].tSwitchInfo.nI2cNode);
                if (0 != axRet) {
                    COMM_CAM_PRT("COMMON_ISP_RegisterSns failed, ret=0x%x.\n", axRet);
                    return -1;
                }
            } else {
                axRet = COMMON_ISP_RegisterSns(nPipeId, nDevId, gCams[nPipeId].eBusType, gCams[nPipeId].ptSnsHdl[nPipeId], gCams[nPipeId].nI2cAddr, gCams[nPipeId].nI2cNode);
                if (0 != axRet) {
                    COMM_CAM_PRT("COMMON_ISP_RegisterSns failed, ret=0x%x.\n", axRet);
                    return -1;
                    }
                }

                axRet = COMMON_ISP_SetSnsAttr(nPipeId, &gCams[nPipeId].tSnsAttr, &gCams[nPipeId].tSnsClkAttr);
                if (0 != axRet) {
                    COMM_CAM_PRT("COMMON_ISP_SetSnsAttr failed, ret=0x%x.\n", axRet);
                    return -1;
                }
        }

        axRet = COMMON_ISP_Init(nPipeId, gCams[nPipeId].ptSnsHdl[nPipeId], gCams[nPipeId].bRegisterSns, gCams[nPipeId].bUser3a,
                                &gCams[nPipeId].tAeFuncs, &gCams[nPipeId].tAwbFuncs, &gCams[nPipeId].tAfFuncs, &gCams[nPipeId].tLscFuncs,
                                gCams[nPipeId].tPipeInfo[i].szBinPath);
        if (0 != axRet) {
            COMM_CAM_PRT("COMMON_ISP_StartIsp failed, axRet = 0x%x.\n", axRet);
            return -1;
        }

        axRet = COMMON_VIN_StartChn(nPipeId, gCams[nPipeId].tChnAttr, gCams[nPipeId].bChnEn);
        if (0 != axRet) {
            COMM_CAM_PRT("COMMON_ISP_StartChn failed, nRet = 0x%x.\n", axRet);
            return -1;
        }
        axRet = AX_VIN_StartPipe(nPipeId);
        if (0 != axRet) {
            COMM_CAM_PRT("AX_VIN_StartPipe failed, ret=0x%x\n", axRet);
            return -1;
        }

        axRet = AX_ISP_Start(nPipeId);
        if (0 != axRet) {
            COMM_CAM_PRT("AX_ISP_Open failed, ret=0x%x\n", axRet);
            return -1;
        }
    }

    axRet = COMMON_VIN_StartDev(nDevId, pCam->bEnableDev, &pCam->tDevAttr);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_VIN_StartDev failed, ret=0x%x.\n", axRet);
        return -1;
    }

    if (pCam->bRegisterSns && pCam->bEnableDev) {
        for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
            axRet = AX_ISP_StreamOn(pCam->tDevBindPipe.nPipeId[i]);
            if (0 != axRet) {
                COMM_CAM_PRT(" failed, ret=0x%x.\n", axRet);
                return -1;
            }
        }
    }

    if (nDevId == 1) {
        AX_SWITCH_INFO_T switch_info = {0};
        switch_info.nFps = 30;
        switch_info.nPipeNum = 1;
        switch_info.tSnsInfo[0].nSnsId = 1;
        switch_info.tSnsInfo[0].nPipeId = 1;
        switch_info.tSnsInfo[0].eLensType = AX_LENS_TYPE_LONG_FOCAL;
        switch_info.tSnsInfo[0].eWorkMode = AX_MIPI_SWITCH_STAY_LOW;
        switch_info.tSnsInfo[0].eVsyncType = AX_MIPI_SWITCH_FSYNC_FLASH;
        switch_info.tSnsInfo[1].nSnsId = 2;
        switch_info.tSnsInfo[1].nPipeId = 1;
        switch_info.tSnsInfo[1].eLensType = AX_LENS_TYPE_WIDE_FIELD;
        switch_info.tSnsInfo[1].eWorkMode = AX_MIPI_SWITCH_STAY_HIGH;
        switch_info.tSnsInfo[0].eVsyncType = AX_MIPI_SWITCH_FSYNC_VSYNC;
        switch_info.eWorkMode = AX_MIPI_SWITCH_STAY_HIGH;
        ax_mipi_switch_init(&switch_info);
        ax_mipi_switch_start();
    }

    if (pCam->bEnableDev && pCam->eLoadRawNode == LOAD_RAW_ITP) {
        if (pCam->nNumber >= MAX_CAMERAS) {
            COMM_CAM_PRT("Access g_dispatcher_loop_exit[%d] out of bounds \n", pCam->nNumber);
            return -1;
        }

        g_dispatcher_loop_exit[pCam->nNumber] = 0;
        axRet = pthread_create(&gDispatchThread[pCam->nNumber], NULL, DispatchThread, (AX_VOID *)(pCam));
        if (0 != axRet) {
            COMM_CAM_PRT("pthread_create failed, ret=0x%x.\n", axRet);
            return -1;
        }
    }

    return 0;
}

static AX_S32 __common_cam_close(AX_CAMERA_T *pCam)
{
    AX_U8 i = 0;
    AX_S32 axRet = 0;
    AX_U8 nPipeId = pCam->nPipeId;
    AX_U8 nDevId = pCam->nDevId;
    AX_U32 nRxDev = pCam->nRxDev;

    if (pCam->nNumber < MAX_CAMERAS) {
        g_dispatcher_loop_exit[pCam->nNumber] = 1;
        if (gDispatchThread[pCam->nNumber] != 0) {
            axRet = pthread_join(gDispatchThread[pCam->nNumber], NULL);
            if (axRet < 0) {
                COMM_CAM_PRT(" dispacher thread exit failed, ret=0x%x.\n", axRet);
            }
            gDispatchThread[pCam->nNumber] = 0;
        }
    } else {
        COMM_CAM_PRT("Access g_dispatcher_loop_exit[%d] out of bounds \n", pCam->nNumber);
    }

    for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
        nPipeId = pCam->tDevBindPipe.nPipeId[i];
        axRet |= AX_ISP_Stop(nPipeId);
        if (0 != axRet) {
            COMM_ISP_PRT("AX_ISP_Stop failed, ret=0x%x.\n", axRet);
        }
    }

    axRet = COMMON_VIN_StopDev(nDevId, pCam->bEnableDev);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_VIN_StopDev failed, ret=0x%x.\n", axRet);
    }

    if (pCam->bRegisterSns && pCam->bEnableDev) {
        for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
            AX_ISP_StreamOff(pCam->tDevBindPipe.nPipeId[i]);

        }
    }

    axRet = AX_ISP_CloseSnsClk(pCam->tSnsClkAttr.nSnsClkIdx);
    if (0 != axRet) {
        COMM_CAM_PRT("AX_VIN_CloseSnsClk failed, ret=0x%x.\n", axRet);
    }

    for (i = 0; i < pCam->tDevBindPipe.nNum; i++) {
        nPipeId = pCam->tDevBindPipe.nPipeId[i];
        axRet = AX_VIN_StopPipe(nPipeId);
        if (0 != axRet) {
            COMM_CAM_PRT("AX_VIN_StopPipe failed, ret=0x%x.\n", axRet);
        }

        COMMON_VIN_StopChn(nPipeId);

        COMMON_ISP_DeInit(nPipeId, pCam->bRegisterSns);

        COMMON_ISP_UnRegisterSns(nPipeId);

        AX_VIN_DestroyPipe(nPipeId);
    }

    axRet = COMMON_VIN_StopMipi(nRxDev);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_VIN_StopMipi failed, ret=0x%x.\n", axRet);
    }

    axRet = COMMON_VIN_DestroyDev(nDevId);
    if (0 != axRet) {
        COMM_CAM_PRT("COMMON_VIN_DestroyDev failed, ret=0x%x.\n", axRet);
    }


    COMM_CAM_PRT("%s: nDevId %d: exit.\n", __func__, nDevId);

    return AX_SUCCESS;
}

static AX_S32 common_cam_open(AX_CAMERA_T *pCamList, AX_U8 Num)
{
    AX_U16 i = 0;
    if (pCamList == NULL) {
        return -1;
    }

    for (i = 0; i < Num; i++) {
        printf("common cam open i = %d\n", i);
        if (AX_SUCCESS == __common_cam_open(&pCamList[i])) {
            pCamList[i].bOpen = AX_TRUE;
            COMM_CAM_PRT("camera %d is open\n", i);
        } else {
            goto EXIT;
        }
    }
    return 0;
EXIT:
    for (i = 0; i < Num; i++) {
        if (!pCamList[i].bOpen) {
            continue;
        }
        __common_cam_close(&pCamList[i]);
    }
    return -1;
}

AX_S32 SAMPLE_CASE_TRIPLE_SENSOR(SAMPLE_VIN_PARAM_T *pVinParam)
{
    AX_S32 axRet = 0;
    AX_S32 i = 0, j = 0, mipi_switch_time = 0, count = 0;
    COMMON_SYS_ARGS_T tCommonArgs = {0};
    COMMON_SYS_ARGS_T tPrivArgs = {0};


    signal(SIGINT, __sigint);

    /* Step1: cam config & pool Config */
    __sample_case_config(pVinParam, &tCommonArgs, &tPrivArgs);

    /* Step2: SYS Init */
    axRet = COMMON_SYS_Init(&tCommonArgs);
    if (axRet) {
        COMM_ISP_PRT("COMMON_SYS_Init fail, ret:0x%x", axRet);
        goto EXIT_FAIL;
    }
    /* Step3: NPU Init */
    axRet = COMMON_NPU_Init();
    if (axRet) {
        COMM_ISP_PRT("COMMON_NPU_Init fail, ret:0x%x", axRet);
        goto EXIT_FAIL1;
    }
    /* Step4: Cam Init */
    axRet = COMMON_CAM_Init();
    if (axRet) {
        COMM_ISP_PRT("COMMON_CAM_Init fail, ret:0x%x", axRet);
        goto EXIT_FAIL1;
    }

    axRet = COMMON_CAM_PrivPoolInit(&tPrivArgs);
    if (axRet) {
        COMM_ISP_PRT("COMMON_CAM_PrivPoolInit fail, ret:0x%x", axRet);
        goto EXIT_FAIL1;
    }
    /* Step5: Cam Open */
    axRet = common_cam_open(&gCams[0], tCommonArgs.nCamCnt);
    if (axRet) {
        COMM_ISP_PRT("COMMON_CAM_Open fail, ret:0x%x", axRet);
        goto EXIT_FAIL2;
    }

    /* Step6. NT Init (tuning socket server. optional)
    Stream default port 6000, Ctrl default port 8082 */
    axRet = COMMON_NT_Init(6000, 8082);
    if (axRet) {
        COMM_ISP_PRT("COMMON_NT_Init fail, ret:0x%x", axRet);
        goto EXIT_FAIL3;
    }
    /* update pipe attribute */
    for (i = 0; i < tCommonArgs.nCamCnt; i++) {
        for (j = 0; j < gCams[i].tDevBindPipe.nNum; j++) {
            COMMON_NT_UpdateSource(gCams[i].tDevBindPipe.nPipeId[j]);
        }
    }
    ax_mipi_switch_change(1);
    while (!gLoopExit) {
        if (count < 100) {
            AX_IMG_INFO_T pImgInfo[AX_SNS_HDR_FRAME_MAX] = {0};
            for (AX_S32 idx = 0; idx < MAX_CAMERAS; idx++) {
                if (gCams[idx].tSwitchInfo.mipi_switch_en == AX_TRUE) {
                    for (AX_S32 i = 0 ;i < gCams[idx].eHdrMode; i++) {
                            axRet = AX_VIN_GetRawFrame(gCams[idx].nPipeId, AX_VIN_PIPE_DUMP_NODE_IFE, i, pImgInfo + i, -1);
                            if (axRet != 0) {
                                return axRet;
                            }
                        }
                        if (pImgInfo[0].tIspInfo.tSnsSWitchInfo.bFirstFrmFlag == AX_TRUE) {
                            AX_ISP_RUNONCE_PARAM_T nIspParm;
                            nIspParm.eCmdType = AX_ISP_EXT_CMD_SNS_SWITCH;
                            nIspParm.bFirstFrmFlag = AX_TRUE;
                            nIspParm.nSnsId = pImgInfo[0].tIspInfo.tSnsSWitchInfo.nSnsId;
                            nIspParm.eLensType = pImgInfo[0].tIspInfo.tSnsSWitchInfo.eLensType;
                            axRet = AX_ISP_RunOnceExt(gCams[idx].nPipeId, &nIspParm);
                            if (axRet != 0) {
                                COMM_ISP_PRT("AX_ISP_RunOnceExt failed, 0x%x\n", axRet);
                                return axRet;
                            }
                        }
                        axRet = AX_VIN_SendRawFrame(gCams[idx].nPipeId, AX_VIN_FRAME_SOURCE_ID_ITP, gCams[idx].eHdrMode, (const AX_IMG_INFO_T **)&pImgInfo, -1);
                        if (axRet != 0) {
                            COMM_ISP_PRT("Sed Raw Frame failed, 0x%x\n", axRet);
                            return axRet;
                        }
                        for (AX_S32 i = 0 ;i < gCams[idx].eHdrMode; i++) {
                            axRet = AX_VIN_ReleaseRawFrame(gCams[idx].nPipeId, AX_VIN_PIPE_DUMP_NODE_IFE, i, pImgInfo + i);
                            if (axRet != 0) {
                                COMM_ISP_PRT("Get Raw Frame failed, 0x%x\n", axRet);
                                return axRet;
                            }
                        }
                        count++;
                }
            }
        } else {
            count = 0;
            mipi_switch_time++;
            ax_mipi_switch_change(1 + (mipi_switch_time % 2));
        }
    }

    COMMON_NT_DeInit();
EXIT_FAIL3:
    COMMON_CAM_Close(&gCams[0], tCommonArgs.nCamCnt);
EXIT_FAIL2:
    COMMON_CAM_Deinit();
EXIT_FAIL1:
    COMMON_SYS_DeInit();
EXIT_FAIL:
    return axRet;
}