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

/*
 * AX_IVPS_CmmCopy()
 * Function: Move a piece of memory data.
 * Note: When copy, the nMemSize should be 64K Byte aligned, 256M maximum.
 */
static AX_S32 AX_IVPS_CmmCopy(IVPS_ENGINE_ID_E eEngineId, AX_U64 nSrcPhyAddr, AX_U64 nDstPhyAddr, AX_U64 nMemSize)
{
    AX_S32 ret = 0;

    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_TDP:
        ret = -1;
        break;
    case IVPS_ENGINE_ID_VPP:
        ret = -1;
        break;
    default:
        ret = -1;
        break;
    }

    if (ret)
    {
        ALOGE("AX_IVPS_CmmCopy fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}

/*
 * AX_IVPS_Csc()
 * Function: Color space conversion.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set. If format is AX_YUV420_SEMIPLANAR.
 */
static AX_S32 AX_IVPS_Csc(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc, AX_VIDEO_FRAME_T *ptDst)
{
    AX_S32 ret = 0;

    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_TDP:
        ret = AX_IVPS_CscTdp(ptSrc, ptDst);
        break;
    case IVPS_ENGINE_ID_VPP:
        /*  ret = AX_IVPS_CscVpp(ptSrc, ptDst); */
        ret = -1;
        break;
    default:
        ret = -1;
        break;
    }

    if (ret)
    {
        ALOGE("AX_IVPS_Csc fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}

/*
 * AX_IVPS_CropResize()
 * Function: Crop and Resize.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set.
 *       If crop function is enabled, s16OffsetTop/s16OffsetBottom/s16OffsetRight/s16OffsetLeft should be set.
 */
static AX_S32 AX_IVPS_CropResize(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc,
                                 AX_VIDEO_FRAME_T *ptDst, const AX_IVPS_CROP_RESIZE_ATTR_T *ptCropResizeAttr)
{
    AX_S32 ret = 0;

    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_TDP:
        ret = AX_IVPS_CropResizeTdp(ptSrc, ptDst, ptCropResizeAttr);
        break;
    case IVPS_ENGINE_ID_VPP:
    case IVPS_ENGINE_ID_VPP_V1:
        ret = AX_IVPS_CropResizeVpp(ptSrc, ptDst, ptCropResizeAttr);
        break;
    default:
        ret = -1;
        break;
    }

    if (ret)
    {
        ALOGE("AX_IVPS_CropResize fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}

/*
 * AX_IVPS_CropResizeV2()
 * Function: Crop and Resize in multi-task.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set.
 *       If crop is enabled, s16OffsetTop/s16OffsetBottom/s16OffsetRight/s16OffsetLeft should be set.
 */
static AX_S32 AX_IVPS_CropResizeV2(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc, AX_U8 nCropNum, const AX_IVPS_RECT_T tBox[],
                                   AX_VIDEO_FRAME_T ptDst[], const AX_IVPS_CROP_RESIZE_ATTR_T *ptAttr)
{
    AX_S32 ret = 0;

    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_TDP:
        ret = AX_IVPS_CropResizeV2Tdp(ptSrc, nCropNum, tBox, ptDst, ptAttr);
        break;
    case IVPS_ENGINE_ID_VPP:
        ret = AX_IVPS_CropResizeV2Vpp(ptSrc, nCropNum, tBox, ptDst, ptAttr);
        break;
    default:
        ret = -1;
        break;
    }

    if (ret)
    {
        ALOGE("AX_IVPS_CropResizeV2 fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}

/*
 * AX_IVPS_AlphaBlending()
 * Function: Overlay two images.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set.
 */
static AX_S32 AX_IVPS_AlphaBlending(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc, const AX_VIDEO_FRAME_T *ptOverlay,
                                    const AX_IVPS_POINT_T tOffset, AX_U8 nAlpha, AX_VIDEO_FRAME_T *ptDst)
{
    AX_S32 ret = 0;

    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_TDP:
        ret = AX_IVPS_AlphaBlendingTdp(ptSrc, ptOverlay, tOffset, nAlpha, ptDst);
        break;
    default:
        ret = -1;
        break;
    }

    if (ret)
    {
        ALOGE("AX_IVPS_AlphaBlending fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}


/*
 * SAMPLE_IVPS_Mosaic()
 * Function: Draw mosaic and save output file.
 * Note: Stride should be 16 Byte aligned.
 *       Draw up to 32 mosaics at once.
 */
static AX_S32 AX_IVPS_DrawMosaic(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc, AX_IVPS_RGN_MOSAIC_T tMosaic[], AX_U32 nNum)
{
    AX_S32 ret = 0;
    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_VPP:
        /* ret = AX_IVPS_DrawMosaicVpp(ptSrc, tMosaic, nNum); */
        break;
    case IVPS_ENGINE_ID_TDP:
        ret = AX_IVPS_DrawMosaicTdp(ptSrc, tMosaic, nNum);
        break;
    default:
        ret = -1;
        break;
    }
    if (ret)
    {
        ALOGE("AX_IVPS_DrawMosaic fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}

/*
* SAMPLE_IVPS_DrawOsd()
* Function: Draw OSD in cavans.
* Note: Stride and width should be 16 Byte aligned.
*/
static AX_S32 AX_IVPS_DrawOsd(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc, AX_OSD_BMP_ATTR_T arrBmp[], int osd_num)
{
    AX_S32 ret = 0;

    switch (eEngineId)
    {
    case IVPS_ENGINE_ID_TDP:
        ret = AX_IVPS_DrawOsdTdp(ptSrc, NULL, arrBmp, osd_num, NULL);
        break;
    default:
        ret = -1;
        break;
    }

    if (ret)
    {
        ALOGE("AX_IVPS_DrawOsd fail, engine id:%d ret=0x%x", eEngineId, ret);
        return ret;
    }
    return 0;
}

/*
 * SAMPLE_IVPS_CmmCopy()
 * Function: Move a piece of memory data and save output file.
 * Note: When copy, the nMemSize should be 64K Byte aligned, 256M maximum.
 */
AX_S32 SAMPLE_IVPS_CmmCopy(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, char *strFilePath, char *pCaseId)
{
    AX_S32 ret = 0;
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_U32 nImgSize = ptSrcFrame->u32Height * ptSrcFrame->u32PicStride[0] * 3; /* assume format is rgb888 */

    nImgSize = ALIGN_UP(nImgSize, 0x10000); /* nImgSize should be 0x10000 aligned */
    ALOGI("nImgSize=%d", nImgSize);

    CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDstFrame.u64PhyAddr[0], (AX_VOID **)&tDstFrame.u64VirAddr[0], NULL));
    ALOGI("src=%llx dst=%llx", ptSrcFrame->u64PhyAddr[0], tDstFrame.u64PhyAddr[0]);
    ret = AX_IVPS_CmmCopy(eEngineId, ptSrcFrame->u64PhyAddr[0], tDstFrame.u64PhyAddr[0], nImgSize);
    if (ret)
    {
        ALOGE("AX_IVPS_CmmCopy fail ! ret:0x%x", ret);
        return ret;
    }

    tDstFrame.enImgFormat = ptSrcFrame->enImgFormat;
    tDstFrame.u32PicStride[0] = ptSrcFrame->u32PicStride[0];
    tDstFrame.u32Height = ptSrcFrame->u32Height;

    /* sprintf(strFileName, "CmmCopy_%d_", eEngineId); */
    SaveFile(&tDstFrame, 0, 0, strFilePath, "CmmCopy", pCaseId);
    IVPS_MEM_FREE(tDstFrame.u64PhyAddr[0], tDstFrame.u64VirAddr[0]);

    return ret;
}

/*
 * SAMPLE_IVPS_Csc()
 * Function: Color space conversion and save output file.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set. If format is AX_YUV420_SEMIPLANAR.
 */
AX_S32 SAMPLE_IVPS_Csc(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, AX_S32 nFormat, AX_U8 nFbcLevel, char *strFilePath, char *pCaseId)
{
    AX_S32 ret = 0;
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_U32 nImgSize;

    tDstFrame.enImgFormat = nFormat; /* AX_FORMAT_YUV422_INTERLEAVED_YUYV */
    tDstFrame.u32Width = ptSrcFrame->u32Width;
    tDstFrame.u32Height = ptSrcFrame->u32Height;
    tDstFrame.u32PicStride[0] = ptSrcFrame->u32PicStride[0];
    nImgSize = CalcImgSize(ptSrcFrame->u32PicStride[0], ptSrcFrame->u32Width, ptSrcFrame->u32Height, ptSrcFrame->enImgFormat, 16);
    printf("Dst: nFormat:%d nFbcLevel:%d nImgSize:%d\n", nFormat, nFbcLevel, nImgSize);

    CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDstFrame.u64PhyAddr[0], (AX_VOID **)&tDstFrame.u64VirAddr[0], NULL));

    if (nFbcLevel)
    {
        tDstFrame.stCompressInfo.enCompressMode = AX_COMPRESS_MODE_LOSSY;
        tDstFrame.u64PhyAddr[1] = tDstFrame.u64PhyAddr[0] + ptSrcFrame->u32PicStride[0] * ptSrcFrame->u32Height * nFbcLevel / 8;
    }
    else
    {
        tDstFrame.stCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
        tDstFrame.u64PhyAddr[1] = tDstFrame.u64PhyAddr[0] + ptSrcFrame->u32PicStride[0] * ptSrcFrame->u32Height;
    }
    tDstFrame.stCompressInfo.u32CompressLevel = nFbcLevel;

    ret = AX_IVPS_Csc(eEngineId, ptSrcFrame, &tDstFrame);
    if (ret)
    {
        ALOGE("AX_IVPS_Csc, ret:0x%x", ret);
        return ret;
    }

    tDstFrame.u32PicStride[0] = ptSrcFrame->u32PicStride[0];
    tDstFrame.u32Height = ptSrcFrame->u32Height;
    SaveFile(&tDstFrame, 0, 0, strFilePath, "CSC", pCaseId);
    IVPS_MEM_FREE(tDstFrame.u64PhyAddr[0], tDstFrame.u64VirAddr[0]);
    return ret;
}

/*
 * SAMPLE_IVPS_FlipAndRotation()
 * Function: Flip/Mirror/Rotate 0/90/180/270 and save output file.
 * Note: Stride and width should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set. If format is AX_YUV420_SEMIPLANAR, u64PhyAddr[1] should be set.
 */
AX_S32 SAMPLE_IVPS_FlipAndRotation(const AX_VIDEO_FRAME_T *ptSrcFrame,
                                   AX_S32 nFlipCode, AX_S32 nRotation, AX_S32 nFormat, char *strFilePath, char *pCaseId)
{
    AX_S32 ret = 0;
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_U32 nImgSize;

    printf("nFlipCode:%d nRotation:%d nFormat:%d\n", nFlipCode, nRotation, nFormat);
    tDstFrame.enImgFormat = nFormat;
    if (nRotation == AX_IVPS_ROTATION_90 || nRotation == AX_IVPS_ROTATION_270)
    {
        tDstFrame.u32Height = ptSrcFrame->u32Width;
        tDstFrame.u32Width = ptSrcFrame->u32Height;
        tDstFrame.u32PicStride[0] = ptSrcFrame->u32Height;
    }
    else
    {
        tDstFrame.u32Width = ptSrcFrame->u32Width;
        tDstFrame.u32Height = ptSrcFrame->u32Height;
        tDstFrame.u32PicStride[0] = ptSrcFrame->u32PicStride[0];
    }

    nImgSize = CalcImgSize(tDstFrame.u32PicStride[0], tDstFrame.u32Width,tDstFrame.enImgFormat, tDstFrame.enImgFormat, 2);
    CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDstFrame.u64PhyAddr[0], (AX_VOID **)&tDstFrame.u64VirAddr[0], NULL));
    tDstFrame.u64PhyAddr[1] = tDstFrame.u64PhyAddr[0] + tDstFrame.u32PicStride[0] * tDstFrame.u32Height;

    ret = AX_IVPS_FlipAndRotationTdp(ptSrcFrame, nFlipCode, nRotation, &tDstFrame);
    if (ret)
    {
        ALOGE("FlipAndRotationTdp, ret:0x%x", ret);
        return ret;
    }

    SaveFile(&tDstFrame, 0, 0, strFilePath, "FlipRotate", pCaseId);
    IVPS_MEM_FREE(tDstFrame.u64PhyAddr[0], tDstFrame.u64VirAddr[0]);

    return ret;
}

/*
 * SAMPLE_IVPS_AlphaBlending()
 * Function: Overlay two images and save output file.
 * Note: Width and height should align 2 pixel. Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set.
 */
AX_S32 SAMPLE_IVPS_AlphaBlending(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame,
                                 AX_VIDEO_FRAME_T *ptOverlay, AX_U16 nX0, AX_U16 nY0, AX_U8 nAlpha, char *strFilePath, char *pCaseId)
{

    AX_S32 ret = 0;
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_BLK BlkId;
    AX_U32 nImgSize;
    AX_IVPS_POINT_T tOffset;

    printf("AlphaBlending nX0:%d nY0:%d nAlpha:%d\n", nX0, nY0, nAlpha);
    tOffset.nX = nX0;
    tOffset.nY = nY0;
    tDstFrame.enImgFormat = ptSrcFrame->enImgFormat;
    tDstFrame.u32Height = ptSrcFrame->u32Height;
    tDstFrame.u32Width = ptSrcFrame->u32Width;
    tDstFrame.u32PicStride[0] = ptSrcFrame->u32PicStride[0];
    nImgSize = CalcImgSize(ptSrcFrame->u32PicStride[0], ptSrcFrame->u32Width,
                           ptSrcFrame->u32Height, ptSrcFrame->enImgFormat, 16);
    CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDstFrame.u64PhyAddr[0], (AX_VOID **)(&tDstFrame.u64VirAddr[0]), NULL));

    tDstFrame.u64PhyAddr[1] = tDstFrame.u64PhyAddr[0] + ptSrcFrame->u32PicStride[0] * ptSrcFrame->u32Height;

    ret = AX_IVPS_AlphaBlending(eEngineId, ptSrcFrame, ptOverlay, tOffset, nAlpha, &tDstFrame);
    if (ret)
    {
        ALOGE("AX_IVPS_AlphaBlending, ret:0x%x", ret);
        return ret;
    }

    SaveFile(&tDstFrame, 0, 0, strFilePath, "AlphaBlend", pCaseId);
    IVPS_MEM_FREE(tDstFrame.u64PhyAddr[0], tDstFrame.u64VirAddr[0]);

    return ret;
}

/*
 * SAMPLE_IVPS_CropResize()
 * Function: Crop and Resize and save output file.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set.
 *       If crop is enabled, s16OffsetTop/s16OffsetBottom/s16OffsetRight/s16OffsetLeft should be set.
 */
AX_S32 SAMPLE_IVPS_CropResize(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, const IVPS_CHN_INFO_T *ptChnInfo,
                              const IVPS_RESIZE_ATTR_T *ptResizeAttr, AX_U8 nFbcLevel, char *strFilePath, char *pCaseId, AX_S32 nRepeatCount)
{

    AX_S32 ret = 0;
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_IVPS_CROP_RESIZE_ATTR_T tCropResizeAttr = {0};
    AX_U32 nImgSize, WidthTemp, HeightTemp;
    AX_U64 nTimeStart = 0, nTimeDiff = 0, nLoopCount = 0;

    if (eEngineId == IVPS_ENGINE_ID_VPP_V1)
        tCropResizeAttr.eSclInput = AX_IVPS_SCL_INPUT_MONOPOLY;
    tCropResizeAttr.eSclType = ptResizeAttr->nSclType;
    tCropResizeAttr.tAspectRatio.eMode = ptResizeAttr->nAspectMode;
    tCropResizeAttr.tAspectRatio.eAligns[1] = AX_IVPS_ASPECT_RATIO_VERTICAL_CENTER;
    tCropResizeAttr.tAspectRatio.nBgColor = ptResizeAttr->nBGColor;
    WidthTemp = tDstFrame.u32Width = ptChnInfo->nW;
    HeightTemp = tDstFrame.u32Height = ptChnInfo->nH;

    if (ptResizeAttr->nDstFormat != SAMPLE_IVPS_FORMAT_INVAILD)
        tDstFrame.enImgFormat = ptResizeAttr->nDstFormat;
    else
        tDstFrame.enImgFormat = ptSrcFrame->enImgFormat;

    if (nFbcLevel)
    {
        tDstFrame.u32PicStride[0] = ALIGN_UP(WidthTemp, 128);
        tDstFrame.stCompressInfo.enCompressMode = AX_COMPRESS_MODE_LOSSY;
    }
    else
    {
        tDstFrame.u32PicStride[0] = ALIGN_UP(WidthTemp, 16);
        tDstFrame.stCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
    }
    tDstFrame.stCompressInfo.u32CompressLevel = nFbcLevel;

    printf("Src: Crop(X0:%d Y0:%d W:%d H:%d)\n", ptSrcFrame->s16CropX, ptSrcFrame->s16CropY,
           ptSrcFrame->s16CropWidth, ptSrcFrame->s16CropHeight);
    printf("Dst: stride:%d width:%d height:%d format:%d nFbcLevel:%d\n", tDstFrame.u32PicStride[0],
           tDstFrame.u32Width, tDstFrame.u32Height, tDstFrame.enImgFormat, nFbcLevel);
    printf("Dst: AspectMode:%d eSclInput:%d eSclType:%d\n", tCropResizeAttr.tAspectRatio.eMode,
           tCropResizeAttr.eSclInput, tCropResizeAttr.eSclType);

    nImgSize = CalcImgSize(tDstFrame.u32PicStride[0], tDstFrame.u32Width, tDstFrame.u32Height, tDstFrame.enImgFormat, 16);
    CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDstFrame.u64PhyAddr[0], (AX_VOID **)(&tDstFrame.u64VirAddr[0]), NULL));
    /* memset((AX_VOID *)((AX_U32)tDstFrame.u64VirAddr[0]), tAspectRatio.nBgColor, nImgSize); */

    while (nRepeatCount < 0 || nRepeatCount-- > 0)
    {
        nTimeStart = GetCurTimeUs();
        ret = AX_IVPS_CropResize(eEngineId, ptSrcFrame, &tDstFrame, &tCropResizeAttr);
        if (ret)
        {
            ALOGE("AX_IVPS_CropResize, ret:0x%x", ret);
            return ret;
        }
        nTimeDiff = GetCurTimeUs() - nTimeStart;
        if (nTimeDiff > 100000) {
            ALOGE("[%lld] time cost:%lld > 100 ms", nLoopCount, nTimeDiff);
            return -1;
        }
        printf("[%lld] time cost:%lld\n", nLoopCount, nTimeDiff);
        nLoopCount++;
    }

    tDstFrame.u32Width = WidthTemp;
    tDstFrame.u32Height = HeightTemp;
    printf("Dst: Crop(X0:%d Y0:%d W:%d H:%d)\n", tDstFrame.s16CropX, tDstFrame.s16CropWidth,
           tDstFrame.s16CropY, tDstFrame.s16CropHeight);
    SaveFile(&tDstFrame, 0, 0, strFilePath, "CropResize", pCaseId);
    IVPS_MEM_FREE(tDstFrame.u64PhyAddr[0], tDstFrame.u64VirAddr[0]);

    return ret;
}

/*
 * SAMPLE_IVPS_CropResizeV2
 * Function: Crop and Resize.Support max 1 in and 32 out.
 * Note: Stride and width should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set. If format is AX_YUV420_SEMIPLANAR, u64PhyAddr[1] should be set.
 *       If enable crop, s16OffsetTop/s16OffsetBottom/s16OffsetRight/s16OffsetLeft should be set.
 */
AX_S32 SAMPLE_IVPS_CropResizeV2(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, char *strFilePath, char *pCaseId)
{

    AX_S32 i, ret = 0;
    AX_U32 nImgSize;
    AX_IVPS_CROP_RESIZE_ATTR_T tCropResizeAttr;
    AX_U32 WidthTemp[32], HeightTemp[32];
    AX_U8 nNum = 5;
    AX_VIDEO_FRAME_T tDstFrame[32] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}, {0}};
    AX_S32 nDstWidth[32] = {256, 512, 512, 256,
                            256, 256, 256, 256,
                            256, 256, 256, 256,
                            256, 256, 256, 256,
                            256, 256, 256, 256,
                            256, 256, 256, 256,
                            256, 256, 256, 256,
                            256, 256, 256, 256};
    AX_S32 nDstHeight[32] = {512, 256, 512, 512,
                             256, 256, 256, 256,
                             256, 256, 256, 256,
                             256, 256, 256, 256,
                             256, 256, 256, 256,
                             256, 256, 256, 256,
                             256, 256, 256, 256,
                             256, 256, 256, 256};
    AX_IVPS_RECT_T tBox[32] = {{0, 0, 1024, 1024},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512},
                               {0, 0, 512, 512}};

    tCropResizeAttr.tAspectRatio.eMode = AX_IVPS_ASPECT_RATIO_STRETCH;
    tCropResizeAttr.tAspectRatio.eAligns[0] = AX_IVPS_ASPECT_RATIO_HORIZONTAL_CENTER;
    tCropResizeAttr.tAspectRatio.eAligns[1] = AX_IVPS_ASPECT_RATIO_VERTICAL_CENTER;
    tCropResizeAttr.tAspectRatio.nBgColor = 0x0000FF;
    tCropResizeAttr.eSclInput = 1;
    printf("aspect mode:%d\n", tCropResizeAttr.tAspectRatio.eMode);

    for (i = 0; i < nNum; i++)
    {
        tDstFrame[i].u32PicStride[0] = ALIGN_UP(nDstWidth[i], 16);
        tDstFrame[i].u32Width = nDstWidth[i];
        tDstFrame[i].u32Height = nDstHeight[i];
        tDstFrame[i].enImgFormat = ptSrcFrame->enImgFormat;
        printf("Dst[%d] stride:%d, width: %d, height: %d, format: %d\n",
              i, tDstFrame[i].u32PicStride[0], tDstFrame[i].u32Width, tDstFrame[i].u32Height,
              tDstFrame[i].enImgFormat);

        WidthTemp[i] = tDstFrame[i].u32Width;
        HeightTemp[i] = tDstFrame[i].u32Height;
        nImgSize = CalcImgSize(tDstFrame[i].u32PicStride[0], tDstFrame[i].u32Width,
                               tDstFrame[i].u32Height, tDstFrame[i].enImgFormat, 16);

        CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &(tDstFrame[i].u64PhyAddr[0]),
                                         (AX_VOID **)(&(tDstFrame[i].u64VirAddr[0])), NULL));
    }

    ret = AX_IVPS_CropResizeV2(eEngineId, ptSrcFrame, nNum, tBox, tDstFrame, &tCropResizeAttr);
    if (ret)
    {
        ALOGE("AX_IVPS_CropResizeV2, ret:0x%x\n", ret);
        return ret;
    }

    for (i = 0; i < nNum; i++)
    {
        tDstFrame[i].u32Width = WidthTemp[i];
        tDstFrame[i].u32Height = HeightTemp[i];
        ALOGI("Dst[%d] crop(X0:%d Y0:%d W:%d H:%d)", i, tDstFrame[i].s16CropX, tDstFrame[i].s16CropY,
              tDstFrame[i].s16CropWidth, tDstFrame[i].s16CropHeight);
        SaveFile(&tDstFrame[i], 0, i, strFilePath, "CropResizeV2", pCaseId);
        IVPS_MEM_FREE(tDstFrame[i].u64PhyAddr[0], tDstFrame[i].u64VirAddr[0]);
    }
    return ret;
}

/*
 * SAMPLE_IVPS_CropResizeV3
 * Function: Crop and Resize.Support one in and four out.
 * Note: Stride should be 16 Byte aligned.
 *       The u64PhyAddr[0] of ptDst should be set.
 *       If crop is enabled, s16OffsetTop/s16OffsetBottom/s16OffsetRight/s16OffsetLeft should be set.
 */
AX_S32 SAMPLE_IVPS_CropResizeV3(const AX_VIDEO_FRAME_T *ptSrcFrame, AX_S32 nDstStride[], AX_S32 nDstWidth[],
                                AX_S32 nDstHeight[], AX_U32 nNum, char *strFilePath, char *pCaseId)
{

    AX_S32 i, ret = 0;
    AX_VIDEO_FRAME_T tDstFrame[4] = {{0}, {0}, {0}, {0}};
    AX_VIDEO_FRAME_T *ptDstFrame[4];
    AX_U32 nImgSize;
    AX_IVPS_CROP_RESIZE_ATTR_T tCropResizeAttr;
    AX_U32 WidthTemp[4], HeightTemp[4];

    tCropResizeAttr.tAspectRatio.eMode = AX_IVPS_ASPECT_RATIO_AUTO;
    tCropResizeAttr.tAspectRatio.eAligns[0] = AX_IVPS_ASPECT_RATIO_HORIZONTAL_CENTER;
    tCropResizeAttr.tAspectRatio.eAligns[1] = AX_IVPS_ASPECT_RATIO_VERTICAL_CENTER;
    tCropResizeAttr.tAspectRatio.nBgColor = 0x0000FF;
    printf("aspect mode:%d", tCropResizeAttr.tAspectRatio.eMode);

    for (i = 0; i < nNum; i++)
    {
        ptDstFrame[i] = &tDstFrame[i]; /* ptDstFrame is only for passing parameters */
        tDstFrame[i].u32PicStride[0] = nDstStride[i];
        tDstFrame[i].u32Width = nDstWidth[i];
        tDstFrame[i].u32Height = nDstHeight[i];
        tDstFrame[i].enImgFormat = ptSrcFrame->enImgFormat;
        ALOGI("Dst[%d] stride:%d width:%d height:%d format:%d", i, tDstFrame[i].u32PicStride[0],
              tDstFrame[i].u32Width, tDstFrame[i].u32Height, tDstFrame[i].enImgFormat);

        WidthTemp[i] = tDstFrame[i].u32Width;
        HeightTemp[i] = tDstFrame[i].u32Height;
        nImgSize = CalcImgSize(tDstFrame[i].u32PicStride[0], tDstFrame[i].u32Width,
                               tDstFrame[i].u32Height, tDstFrame[i].enImgFormat, 16);

        CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &(tDstFrame[i].u64PhyAddr[0]),
                                         (AX_VOID **)(&(tDstFrame[i].u64VirAddr[0])), NULL));
    }

    /*
        ret = AX_IVPS_CropResizeV3Vpp(ptSrcFrame, ptDstFrame, nNum, &tCropResizeAttr);
        if (ret)
        {
            ALOGE("ret=0x%x", ret);
            return ret;
        }
    */
    for (i = 0; i < nNum; i++)
    {
        tDstFrame[i].u32Width = WidthTemp[i];
        tDstFrame[i].u32Height = HeightTemp[i];
        ALOGI("Dst[%d] OFFSET X0:%d Y0:%d W:%d H:%d", i, tDstFrame[i].s16CropX, tDstFrame[i].s16CropY,
              tDstFrame[i].s16CropWidth, tDstFrame[i].s16CropHeight);
        SaveFile(&tDstFrame[i], 0, i, strFilePath, "CropResizeV3", pCaseId);
        IVPS_MEM_FREE(tDstFrame[i].u64PhyAddr[0], tDstFrame[i].u64VirAddr[0]);
    }

    return ret;
}

/*
 * SAMPLE_IVPS_Mosaic()
 * Function: Draw mosaic and save output file.
 * Note: Stride should be 16 Byte aligned.
 *       Draw up to 32 mosaics at once.
 */
AX_S32 SAMPLE_IVPS_DrawMosaic(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame,
                              AX_IVPS_RGN_MOSAIC_T *ptMosaic, AX_U32 nNum, char *strFilePath, char *pCaseId)
{
    AX_S32 ret = 0;
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_IVPS_RGN_MOSAIC_T tMosaicDefault[] = {
        {
            .tRect = {
                .nX = 0,
                .nY = 0,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 30,
                .nY = 30,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 60,
                .nY = 60,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 90,
                .nY = 90,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 120,
                .nY = 120,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 150,
                .nY = 150,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 180,
                .nY = 180,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 210,
                .nY = 210,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },

        {
            .tRect = {
                .nX = 240,
                .nY = 240,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 270,
                .nY = 270,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 300,
                .nY = 300,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 330,
                .nY = 330,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 360,
                .nY = 360,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 390,
                .nY = 390,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 420,
                .nY = 420,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 450,
                .nY = 450,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },

        {
            .tRect = {
                .nX = 480,
                .nY = 480,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 510,
                .nY = 510,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 540,
                .nY = 540,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 570,
                .nY = 570,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 600,
                .nY = 600,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 630,
                .nY = 630,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 660,
                .nY = 660,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 690,
                .nY = 690,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },

        {
            .tRect = {
                .nX = 720,
                .nY = 720,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 750,
                .nY = 750,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 780,
                .nY = 780,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 810,
                .nY = 810,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 840,
                .nY = 840,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 870,
                .nY = 870,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 900,
                .nY = 900,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
        {
            .tRect = {
                .nX = 930,
                .nY = 930,
                .nW = 30,
                .nH = 30,
            },
            .eBklSize = AX_IVPS_MOSAIC_BLK_SIZE_64,
        },
    };

    if (!ptMosaic || !nNum)
    {
        ptMosaic = &tMosaicDefault[0];
        nNum = 32;
    }
    ret = AX_IVPS_DrawMosaic(eEngineId, ptSrcFrame, ptMosaic, nNum);
    if (ret)
    {
        ALOGE("AX_IVPS_DrawMosaic, ret:0x%x", ret);
        return ret;
    }

    tDstFrame = *ptSrcFrame;
    SaveFile(&tDstFrame, 0, 0, strFilePath, "Mosaic", pCaseId);

    return ret;
}

/*
* SAMPLE_IVPS_DrawOsd
* Function: Draw OSD in cavans.
* Note: Stride and width should be 16 Byte aligned.
*/
AX_S32 SAMPLE_IVPS_DrawOsd(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame,
                           AX_VIDEO_FRAME_T *ptOverlay, char *strFilePath, char *pCaseId, AX_S32 nRepeatCount)
{
    AX_S32 i, ret = 0;
    AX_OSD_BMP_ATTR_T tBmpAttr[32];
    AX_VIDEO_FRAME_T tDstFrame = {0};
    AX_U32 nImgSize;
    AX_S32 osd_num = 32;
    AX_U64 nTimeStart = 0, nTimeDiff = 0, nLoopCount = 0;

    for (i = 0; i < osd_num; i++)
    {
        tBmpAttr[i].u16Alpha = 200;
        tBmpAttr[i].enRgbFormat = ptOverlay->enImgFormat;
        tBmpAttr[i].u32BmpWidth = ptOverlay->u32Width;
        tBmpAttr[i].u32BmpHeight = ptOverlay->u32Height;
        tBmpAttr[i].u32DstXoffset = 128 + i * 16;
        tBmpAttr[i].u32DstYoffset = 80 +  i * 8;
        tBmpAttr[i].u64PhyAddr = ptOverlay->u64PhyAddr[0];
    }
    while (nRepeatCount < 0 || nRepeatCount-- > 0)
    {
        nTimeStart = GetCurTimeUs();
        ret = AX_IVPS_DrawOsd(eEngineId, ptSrcFrame, tBmpAttr, osd_num);
        if (ret)
        {
            ALOGE("AX_IVPS_DrawOsd, ret:0x%x", ret);
            return ret;
        }

        nTimeDiff = GetCurTimeUs() - nTimeStart;
        if (nTimeDiff > 100000) {
            ALOGE("[%lld] time cost:%lld > 100 ms", nLoopCount, nTimeDiff);
            return -1;
        }
        printf("[%lld] time cost:%lld\n", nLoopCount, nTimeDiff);
        nLoopCount++;
    }
    tDstFrame = *ptSrcFrame;
    SaveFile(&tDstFrame, 0, 0, strFilePath, "DrawOSD", pCaseId); /* Frame will be changed */

    return 0;
}
