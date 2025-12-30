/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include "sample_ivps_main.h"

SAMPLE_IVPS_MAIN_T gSampleIvpsMain;

AX_S32 main(AX_S32 argc, char *argv[])
{
    AX_S32 ret = IVPS_SUCC;
    IVPS_ARG_T *pIvpsArg = &gSampleIvpsMain.tIvpsArg;
    SAMPLE_IVPS_GRP_T *pGrp = &gSampleIvpsGrp;
    SAMPLE_IVPS_GRP_T *pGrpExt = &gSampleIvpsGrpExt;
    char *pFrameFile;

    printf("IVPS sample. PID:%d. Build at %s %s\n", getpid(), __DATE__, __TIME__);

    /* Parse input parameter */
    IVPS_ArgsParser(argc, argv, pIvpsArg);

    /* SYS init */
    CHECK_RESULT(AX_SYS_Init());

    /* Sync API execute */
    if (pIvpsArg->bSyncApi) {
        CHECK_RESULT(SAMPLE_IVPS_SyncApi(pIvpsArg));
        AX_SYS_Deinit();
        printf("sample test run success for sync api!\n");
        return 0;
    }

    /* Create common [user] pool */
    ret = SAMPLE_IVPS_PoolCreate(pIvpsArg, pGrp);
    if (ret)
    {
        ALOGE("SAMPLE_IVPS_PoolCreate failed, ret=0x%x", ret);
        goto error0;
    }

    /* IVPS init */
    ret = AX_IVPS_Init();
    if (ret)
    {
        ALOGE("AX_IVPS_Init failed, ret=0x%x", ret);
        goto error1;
    }

    /* Source image buffer and info create */
    IVPS_FrameDataCreate(pIvpsArg->pFrameInfo, &pFrameFile, &pGrp->tFrameInput, AX_TRUE);

    /* UV addr should be set in compress mode */
    if (pGrp->tFrameInput.stCompressInfo.enCompressMode) {
        AX_U32 nUvOffset = pGrp->tFrameInput.u32PicStride[0] * pGrp->tFrameInput.u32Height
                           * pGrp->tFrameInput.stCompressInfo.u32CompressLevel / 8;
        pGrp->tFrameInput.u64PhyAddr[1] = pGrp->tFrameInput.u64PhyAddr[0] + nUvOffset;
    }

    pGrp->pFileName = pFrameFile;
    gSampleIvpsMain.nIvpsStreamNum = pIvpsArg->nStreamNum;
    gSampleIvpsMain.nIvpsRepeatNum = pIvpsArg->nRepeatCount;
    pGrpExt->tFrameInput = pGrp->tFrameInput;

    /* Save path of output frame */
    if (pIvpsArg->pSavePath)
        pGrp->pFilePath = pIvpsArg->pSavePath;
    else
        pGrp->pFilePath = NULL;

    pGrpExt->pFilePath = pGrp->pFilePath;

    printf("INPUT nW:%d nH:%d File:%s\n", pGrp->tFrameInput.u32Width, pGrp->tFrameInput.u32Height, pFrameFile);
    printf("nRepeatCount:%d nRegionNum:%d\n", pIvpsArg->nRepeatCount, pIvpsArg->nRegionNum);

    /* Mesh config for pipeline */
    SAMPLE_IVPS_MeshCfgGet(pIvpsArg);

    /* IVPS pipeline start */
    ret = IVPS_StartGrp(pIvpsArg, pGrp);
    if (ret)
    {
        ALOGE("IVPS_StartGrp failed, ret=0x%x.", ret);
        goto error2;
    }

    /* IVPS region start */
    if (pIvpsArg->nRegionNum > 0)
    {
        if (0 != IVPS_StartRegion(pIvpsArg->nRegionNum))
        {
            ThreadLoopStateSet(AX_TRUE);
            ALOGE("IVPS_StartRegion failed");
            goto error3;
        }
        IVPS_RegionUpdateThreadStart(pIvpsArg->nRegionNum, pGrp, pIvpsArg->bRegionStop);
    }

    printf("GRP%d bCropInfo:%d bLdcAttr:%d\n", pGrp->nIvpsGrp, pIvpsArg->bCropInfo, pIvpsArg->bLdcAttr);
    /* IVPS crop function */
    if (pIvpsArg->bCropInfo)
    {
        AX_IVPS_CROP_INFO_T tCropInfo;
        CHECK_RESULT(AX_IVPS_SetGrpCrop(pGrp->nIvpsGrp, &pIvpsArg->tCropInfo));
        CHECK_RESULT(AX_IVPS_GetGrpCrop(pGrp->nIvpsGrp, &tCropInfo));
        printf("Get Crop nX:%d nY:%d nW:%d nH:%d\n", tCropInfo.tCropRect.nX, tCropInfo.tCropRect.nY,
               tCropInfo.tCropRect.nW, tCropInfo.tCropRect.nH);
    }
    /* IVPS LDC function */
    if (pIvpsArg->bLdcAttr)
    {
        AX_IVPS_LDC_ATTR_T tLdcAttr = {0};
        CHECK_RESULT(AX_IVPS_GetGrpLDCAttr(pGrp->nIvpsGrp, 1, &pIvpsArg->tLdcAttr));
        CHECK_RESULT(AX_IVPS_SetGrpLDCAttr(pGrp->nIvpsGrp, 1, &tLdcAttr));
        printf("Get nXRatio:%d nYRatio:%d nDistortionRatio:%d\n", tLdcAttr.nXRatio, tLdcAttr.nYRatio, tLdcAttr.nDistortionRatio);
    }

    switch (pIvpsArg->nLinkMode)
    {
    case IVPS_LINK_IVPS:
        SAMPLE_IVPS_LinkIvps(pIvpsArg, pGrp->nIvpsGrp, 0, pGrpExt);
        IVPS_GrpThreadStart(pGrp, pGrpExt);
        /* Dynamic change channel attributes */
        if (pIvpsArg->pChangeIni)
        {
            IVPS_AttrChangeThreadStart(pIvpsArg, pGrp, 0);
            IVPS_AttrChangeThreadStart(pIvpsArg, pGrpExt, 1);
        }
        break;
    default:
        IVPS_GrpThreadStart(pGrp, pGrp);
        /* Dynamic change channel attributes */
        if (pIvpsArg->pChangeIni)
        {
            IVPS_AttrChangeThreadStart(pIvpsArg, pGrp, 0);
        }
        break;
    }

    if (pIvpsArg->nRegionNum > 0 && pIvpsArg->bRegionStop)
    {
        IVPS_StopRegionById(0);
    }

    while (!ThreadLoopStateGet() && (gSampleIvpsMain.nIvpsRepeatNum || pIvpsArg->nStreamNum))
    {
        sleep(1);
    }
    IVPS_GrpThreadStop();

    /*  IVPS region stop */
    if (pIvpsArg->nRegionNum > 0)
    {
        IVPS_RegionUpdateThreadStop(pIvpsArg->bRegionStop);
        IVPS_StopRegion();
    }

    if (pIvpsArg->pChangeIni)
    {
        IVPS_AttrChangeThreadStop();
    }

    /*  IVPS group-ext stop */
    switch (pIvpsArg->nLinkMode)
    {
    case IVPS_LINK_IVPS:
        IVPS_StopGrp(pGrpExt);
        break;
    default:
        break;
    }

error3:
    /* IVPS group stop */
    IVPS_StopGrp(pGrp);

    /* Source image buffer destroy */
    IVPS_FrameDataDestroy(&pGrp->tFrameInput, AX_TRUE);

error2:
    /* IVPS deinit */
    AX_IVPS_Deinit();

error1:
    /* POOL destroy */
    SAMPLE_IVPS_PoolDestroy(pIvpsArg, pGrp);

error0:
    /* SYS deinit */
    AX_SYS_Deinit();

    printf("\nsample test run success\n");
    return 0;
}
