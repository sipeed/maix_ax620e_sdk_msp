/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef _SAMPLE_IVPS_SYNC_API_H_
#define _SAMPLE_IVPS_SYNC_API_H_

typedef enum
{
        IVPS_ENGINE_ID_TDP = 0,
        IVPS_ENGINE_ID_VPP,
        IVPS_ENGINE_ID_VPP_V1,
        IVPS_ENGINE_ID_GDC,
        IVPS_ENGINE_ID_CPU,
        IVPS_ENGINE_ID_BUTT
} IVPS_ENGINE_ID_E;

typedef struct
{
        AX_VIDEO_FRAME_T tFrameInput;
	char *pFilePath;

        IVPS_ENGINE_ID_E eEngineId;
	AX_U32 nMemSize;
        /* csc */
        /* flip and rotation */
        /* alphablending */
        /* crop resize */
        /* crop resize2 */
        /* crop resize3 */
} SAMPLE_IVPS_SYNC_T;

typedef struct
{
	AX_U32 nOsdNum;
} SAMPLE_IVPS_OSD_T;

typedef struct
{
	AX_U32 nMaskNum;
} SAMPLE_IVPS_MASK_T;

typedef struct
{
        SAMPLE_IVPS_OSD_T tOsd;
	SAMPLE_IVPS_MASK_T tMask;
} SAMPLE_IVPS_REGION_T;

extern SAMPLE_IVPS_SYNC_T gSampleIvpsSyncApi;
extern SAMPLE_IVPS_REGION_T gSampleIvpsRegion;

/* Sample for drawing Line, Rect and Polygon by CPU. From sample_ivps_sync_api_region.c */
AX_S32 SAMPLE_IVPS_DrawMask(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrc, const SAMPLE_IVPS_MASK_T *ptMask, char *strFilePath, char *pCaseId);

/* CSC API */
AX_S32 SAMPLE_IVPS_Csc(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, AX_S32 nFormat, AX_U8 nFbcLevel, char *strFilePath, char *pCaseId);

/* Flip and Rotation API */
AX_S32 SAMPLE_IVPS_FlipAndRotation(const AX_VIDEO_FRAME_T *ptSrcFrame, AX_S32 nFlipCode, AX_S32 nRotation, AX_S32 nFormat, char *strFilePath, char *pCaseId);

/* Alpha Blending API */
AX_S32 SAMPLE_IVPS_AlphaBlending(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame,
                                 AX_VIDEO_FRAME_T *ptOverlay, AX_U16 nX0, AX_U16 nY0, AX_U8 nAlpha, char *strFilePath, char *pCaseId);

/* Crop Resize API, 1 in 1 out */
AX_S32 SAMPLE_IVPS_CropResize(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, const IVPS_CHN_INFO_T *ptChnInfo,
                              const IVPS_RESIZE_ATTR_T *ptResizeAttr, AX_U8 nFbcLevel, char *strFilePath, char *pCaseId, AX_S32 nRepeatCount);

/* Crop Resize V2 API, 1 in N(1~32) out */
AX_S32 SAMPLE_IVPS_CropResizeV2(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, char *strFilePath, char *pCaseId);

/* Mosaic API */
AX_S32 SAMPLE_IVPS_DrawMosaic(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame, AX_IVPS_RGN_MOSAIC_T tMosaic[], AX_U32 nNum, char *strFilePath, char *pCaseId);

/* Draw OSD API */
AX_S32 SAMPLE_IVPS_DrawOsd(IVPS_ENGINE_ID_E eEngineId, const AX_VIDEO_FRAME_T *ptSrcFrame,
                           AX_VIDEO_FRAME_T *ptOverlay, char *strFilePath, char *pCaseId, AX_S32 nRepeatCount);

/* Dewarp API, From sample_ivps_dewarp.c */
AX_S32 SAMPLE_IVPS_SyncApiDewarp(const IVPS_ARG_T *ptArg, const SAMPLE_IVPS_SYNC_T *pSync);

#endif /* _SAMPLE_IVPS_SYNC_API_H_ */
