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

SAMPLE_IVPS_SYNC_T gSampleIvpsSyncApi = {

};

SAMPLE_IVPS_REGION_T gSampleIvpsRegion = {

};

AX_S32 SAMPLE_IVPS_SyncApiCommon(const IVPS_ARG_T *ptArg, const SAMPLE_IVPS_SYNC_T *pSync)
{
    AX_S32 ret = 0;

    if (ptArg->bCsc)
    {
        ret = SAMPLE_IVPS_Csc(ptArg->nEngineId, &pSync->tFrameInput, ptArg->nFormat, ptArg->nFbcLevel, pSync->pFilePath, ptArg->pCaseId);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_Csc failed, ret=0x%x.", ret);
            return ret;
        }
    }

    if (ptArg->bFlipRotation)
    {
        ret = SAMPLE_IVPS_FlipAndRotation(&pSync->tFrameInput, ptArg->nFlip, ptArg->nAngle, ptArg->nFormat, pSync->pFilePath, ptArg->pCaseId);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_FlipAndRotation failed, ret=0x%x.", ret);
            return ret;
        }
    }

    if (ptArg->bCropResize)
    {
        ret = SAMPLE_IVPS_CropResize(ptArg->nEngineId, &pSync->tFrameInput, &ptArg->tChnInfo[0], &ptArg->tResizeAttr, ptArg->nFbcLevel,
                                     pSync->pFilePath, ptArg->pCaseId, ptArg->nRepeatCount);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_CropResize failed, ret=0x%x", ret);
            return ret;
        }
    }

    if (ptArg->bCropResizeV2)
    {
        ret = SAMPLE_IVPS_CropResizeV2(ptArg->nEngineId, &pSync->tFrameInput, pSync->pFilePath, ptArg->pCaseId);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_CropResizeV2 failed, ret=0x%x", ret);
            return ret;
        }
    }

    if (ptArg->bMosaic)
    {
        ret = SAMPLE_IVPS_DrawMosaic(ptArg->nEngineId, &pSync->tFrameInput, NULL, 0, pSync->pFilePath, ptArg->pCaseId);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_DrawMosaic failed, ret=0x%x.", ret);
            return ret;
        }
    }

    if (ptArg->bAlphaBlend && ptArg->pOverlayInfo)
    {
        AX_VIDEO_FRAME_T tOverlay = {0};
        char *pOverlayFile = NULL;

        IVPS_FrameDataCreate(ptArg->pOverlayInfo, &pOverlayFile, &tOverlay, AX_FALSE);
        ret = SAMPLE_IVPS_AlphaBlending(ptArg->nEngineId, &pSync->tFrameInput, &tOverlay, ptArg->nX0, ptArg->nY0,
                                        ptArg->nAlpha, pSync->pFilePath, ptArg->pCaseId);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_AlphaBlending failed, ret=0x%x.", ret);
            return ret;
        }
        IVPS_FrameDataDestroy(&tOverlay, AX_FALSE);
    }

    if (ptArg->bOsd && ptArg->pOverlayInfo)
    {
        AX_VIDEO_FRAME_T tOverlay = {0};
        char *pOverlayFile = NULL;

        /* get overlay info */
        IVPS_FrameDataCreate(ptArg->pOverlayInfo, &pOverlayFile, &tOverlay, AX_FALSE);
        ret = SAMPLE_IVPS_DrawOsd(ptArg->nEngineId, &pSync->tFrameInput, &tOverlay, pSync->pFilePath, ptArg->pCaseId, ptArg->nRepeatCount);
        IVPS_FrameDataDestroy(&tOverlay, AX_FALSE);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_DrawOsd failed, ret=0x%x", ret);
            return ret;
        }
    }

    if (ptArg->bMask)
    {
        ret = SAMPLE_IVPS_DrawMask(IVPS_ENGINE_ID_CPU, &pSync->tFrameInput, &gSampleIvpsRegion.tMask, pSync->pFilePath, ptArg->pCaseId);
        if (ret)
        {
            ALOGE("SAMPLE_IVPS_DrawMask failed, ret=0x%x", ret);
            return ret;
        }
    }

    return 0;
}

AX_S32 SAMPLE_IVPS_SyncApi(const IVPS_ARG_T *ptArg)
{
    char *pFrameFile = NULL;
    SAMPLE_IVPS_SYNC_T *pSync = &gSampleIvpsSyncApi;

    IVPS_FrameDataCreate(ptArg->pFrameInfo, &pFrameFile, &pSync->tFrameInput, AX_FALSE);
    pSync->pFilePath = ptArg->pSavePath;

    /* IVPS common sync api for csc cropresize and so on */
    CHECK_RESULT(SAMPLE_IVPS_SyncApiCommon(ptArg, pSync));

    /* IVPS sync api for dewarp */
    CHECK_RESULT(SAMPLE_IVPS_SyncApiDewarp(ptArg, pSync));

    IVPS_FrameDataDestroy(&pSync->tFrameInput, AX_FALSE);
    return 0;
}
