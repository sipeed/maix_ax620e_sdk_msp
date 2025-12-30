/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef _IVPS_UTIL_H_
#define _IVPS_UTIL_H_
#include "ivps_global.h"
#include "ax_sys_api.h"
#include "ax_ivps_api.h"

#define SAMPLE_PHY_MEM_ALIGN_SIZE (16)
#define SAMPLE_CMM_BUF_ALLOC_EN  0

#define ARRAY_SIZE(array) sizeof(array) / sizeof(array[0])
#define ALIGN_UP(x, align) (((x) + ((align)-1)) & ~((align)-1))
#define DIV_ROUND_UP(n, d) (((n) + (d)-1) / (d))

typedef struct
{
    AX_U16 nW;
    AX_U16 nH;
    AX_U32 nStride;
    AX_IMG_FORMAT_E eFormat;
    AX_U32 nPhyAddr;
    AX_VOID *pVirAddr;
    AX_POOL PoolId;
    AX_BLK BlkId;
} IVPS_IMAGE_T;

typedef struct
{
    char *pImgFile;
    IVPS_IMAGE_T tImage;
    AX_IVPS_RECT_T tRect;

    AX_U32 nAlpha;
    AX_U32 nChn;
    AX_U32 nColor; /* for rectangle */
    AX_U32 nLineW; /* for rectangle */
    AX_IVPS_MOSAIC_BLK_SIZE_E eBlkSize;
    AX_U8 nFbcLevel;
} IVPS_IMAGE_INFO_T;

typedef struct
{
    AX_U32 nW;
    AX_U32 nH;
} IVPS_CHN_INFO_T;

typedef struct
{
    AX_U8 nSclType;
    AX_U8 nAspectMode;
    AX_U32 nBGColor;
    AX_U16 nDstFormat;
} IVPS_RESIZE_ATTR_T;


typedef struct
{
    AX_U32 nSize;
    AX_U32 nCnt;
} IVPS_BLK_T;

typedef AX_VOID (*pTimeOutHandler)(AX_S32 nSigNo, siginfo_t *pInfo, AX_VOID *pArgs);

typedef struct _ivps_string_map {
    int value;
    char str[16];
} ivps_string_map_t;

#define IVPS_MEM_FREE(phy, vir)                               \
    do {                                                      \
        if ((0 != (phy)) && (0 != (vir)))                     \
        {                                                     \
            AX_SYS_MemFree((phy),(AX_VOID *)(AX_ULONG)(vir)); \
            (phy) = 0;                                        \
            (vir) = 0;                                        \
        }                                                     \
    } while(0)

AX_U64 GetCurTimeUs(AX_VOID);
AX_BOOL StartFpsTimer(AX_U32 microseconds, pTimeOutHandler pfn);
AX_VOID StopFpsTimer(AX_VOID);

AX_S32 DevEfdCreate(AX_U32 nNum);
AX_S32 DevEfdRelease(AX_U32 nEfd);
AX_S32 DevFdRelease(AX_U32 nFd);
AX_S32 DevFdListen(AX_S32 nEfd, AX_S32 nFd);
AX_S32 DevPolWait(AX_S32 nEfd, AX_U32 nNum, AX_S32 nMs);

AX_S32 IVPS_CommonPoolCreate(IVPS_BLK_T *pBlkInfo, AX_U32 nNum);
AX_POOL IVPS_UserPoolCreate(AX_U32 nBlkSize, AX_U32 nBlkCnt);

AX_S32 BufCreate(AX_POOL *PoolId, AX_U32 nBlkSize, AX_U32 nBlkCnt);
AX_S32 BufDestroy(AX_POOL PoolId);
AX_S32 BufDestroyAll(AX_VOID);
AX_S32 BufPoolBlockAddrGet(AX_POOL PoolId, AX_U32 BlkSize, AX_U64 *nPhyAddr, AX_VOID **pVirAddr, AX_BLK *BlkId);

char *FilePathExtract(char *pFile);
AX_U32 CalcImgSize(AX_U32 nStride, AX_U32 nW, AX_U32 nH, AX_IMG_FORMAT_E eType, AX_U32 nAlign);
AX_BOOL LoadImage(const char *pszImge, AX_U32 pImgSize, AX_U64 *pPhyAddr, AX_VOID **ppVirAddr);
AX_BOOL SaveImage(const char *pszImge, AX_U32 pBufSize, AX_U64 pPhyAddr, AX_VOID *ppVirAddr);
AX_VOID SaveFile(AX_VIDEO_FRAME_T *tDstFrame, AX_S32 nGrpIdx, AX_S32 nChnIdx, char *pFilePath, char *pFileName, char *pCaseId);
AX_VOID SaveFileExt(AX_VIDEO_FRAME_T *ptDstFrame, AX_S32 nGrpIdx, AX_S32 nChnIdx,
                    char *pFilePath, char *pFileName, int nInputW, int nInputH, char *pCaseId);
AX_S32 PatternAutoGen(AX_POOL PoolId, AX_IMG_FORMAT_E eImgFormat, AX_U16 nStride, AX_U32 nWidth, AX_U32 nHeight,
                          AX_BLK *BlkId, AX_U64 *nPhyAddr, AX_VOID **pVirAddr);

char *FrameInfoGet(char *optArg, AX_VIDEO_FRAME_T *ptFrame);
char *OverlayInfoGet(char *optArg, AX_VIDEO_FRAME_T *ptOverlay);
int ChnInfoParse(char *optArg, IVPS_CHN_INFO_T *tChnInfo);
int CropInfoParse(char *optArg, AX_IVPS_CROP_INFO_T *tCropInfo);
int ResizeInfoParse(char *optArg, IVPS_RESIZE_ATTR_T *ptResizeAttr);
int LdcInfoParse(char *optArg, AX_IVPS_LDC_ATTR_T *tLdcAttr, AX_U8 *nFilterId);

AX_S32 FrameBufGet(AX_S32 nFrameIdx, AX_VIDEO_FRAME_T *ptImage, char *pImgFile);
AX_S32 ByteReverse(AX_U8 *ptBitmap, AX_S32 nSize);

int IVPS_FileMD5Check(const char *pFilePath, char *pCaseId, int nGrpId, int nChnId);
int IVPS_FrameDataCreate(char *pFrameInfo, char **pImgFile, AX_VIDEO_FRAME_T *ptImage, AX_BOOL bPoolBuf);
int IVPS_FrameDataDestroy(AX_VIDEO_FRAME_T *ptImage, AX_BOOL bPoolBuf);
AX_VOID IVPS_FramePrint(const AX_VIDEO_FRAME_T *p, char *key_str);
#endif /* _IVPS_UTIL_H_ */
