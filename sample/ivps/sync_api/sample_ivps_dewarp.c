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

/* fisheye top pano config */
static SAMPLE_IVPS_DEWARP_T gSampleDewarpGdc = {
    .eSampleType = SAMPLE_IVPS_DEWARP_GDC,
    .tGdcAttr = {
	.eGdcType = AX_IVPS_GDC_FISHEYE,
	.nSrcWidth = 2000,
	.nSrcHeight = 2000,
	.nDstStride = 4096,
	.nDstWidth = 4000,
	.nDstHeight = 2000,
	.eDstFormat = AX_FORMAT_YUV420_SEMIPLANAR,
	.tFisheyeAttr = {
	    .eMountMode = AX_IVPS_FISHEYE_MOUNT_MODE_CEILING,
	    .nHorOffset = 0,
	    .nVerOffset = 0,
	    .nRgnNum = 2,
	    .tFisheyeRgnAttr[0] = {
		.eViewMode = AX_IVPS_FISHEYE_VIEW_MODE_PANORAMA,

		.nPan = 0,
		.nTilt = 180,
		.nHorZoom = 4095,
		.nVerZoom = 4095,
		.nInRadius = 0,
		.nOutRadius = 1000,
		.tOutRect = {.nX = 0, .nY = 1000, .nW = 4000, .nH = 1000},
	    },
	    .tFisheyeRgnAttr[1] = {
		.eViewMode = AX_IVPS_FISHEYE_VIEW_MODE_BYPASS,
		.tOutRect = {.nX = 0, .nY = 0, .nW = 4000, .nH = 1000},
	    },
	},
    },
};

/* user map config */
static SAMPLE_IVPS_DEWARP_T gSampleDewarpMapUser = {
    .eSampleType = SAMPLE_IVPS_DEWARP_GDC,
    .tGdcAttr = {
	.eGdcType = AX_IVPS_GDC_MAP_USER,
	.nSrcWidth = 1920,
	.nSrcHeight = 1080,
	.nDstStride = 1920,
	.nDstWidth = 1920,
	.nDstHeight = 1080,
	.eDstFormat = AX_FORMAT_YUV420_SEMIPLANAR,
	.tMapUserAttr = {
	    .nMeshStartX = 0,
	    .nMeshStartY = 0,
	    .nMeshWidth = 64,  /* nMeshWidth * (nMeshNumH - 1) >= nDstWidth */
	    .nMeshHeight = 48, /* nMeshHeight * (nMeshNumV - 1) >= nDstHeight */
	    .nMeshNumH = 33,
	    .nMeshNumV = 33,
	},
    },
};

#define __SAMPLE_IVPS_GDC_USER_MANUAL__
/* user map and perspective config */
static SAMPLE_IVPS_DEWARP_T gSampleDewarpSync = {
    .nSrcWidth = 1920,
    .nSrcHeight = 1080,
    .eSampleType = SAMPLE_IVPS_DEWARP_SYNC,
    .tDewarpAttr = {
#ifdef __SAMPLE_IVPS_GDC_USER_MANUAL__
	.eDewarpType = AX_IVPS_DEWARP_MAP_USER,
	.tMapUserAttr = {
		.nMeshStartX = 0,
		.nMeshStartY = 0,
		.nMeshWidth = 64,  /* nMeshWidth * (nMeshNumH - 1) >= nDstWidth */
		.nMeshHeight = 48, /* nMeshHeight * (nMeshNumV - 1) >= nDstHeight */
		.nMeshNumH = 33,
		.nMeshNumV = 33,
	},
#else
	.eDewarpType = AX_IVPS_DEWARP_PERSPECTIVE,
	/* .tPerspectiveAttr = {{1921876, -745623, 262524440, 587421, 2439435, 103340980, 0, 0, 1000000}}, */
	.tPerspectiveAttr = {{1000000, 0, 0, 0, 1000000, 0, 0, 0, 1000000}},
#endif
    },
};

static AX_S32 DewarpSingleCore(const AX_VIDEO_FRAME_T *ptSrc, AX_VIDEO_FRAME_T *ptDst,
			       AX_IVPS_DEWARP_ATTR_T *ptDewarpAttr, char *pStorePath, char *fileName, char *pCaseId)
{
	AX_U32 nImgSize;

	nImgSize = CalcImgSize(ptDst->u32PicStride[0], ptDst->u32Width, ptDst->u32Height, ptDst->enImgFormat, 16);
	CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &ptDst->u64PhyAddr[0], (AX_VOID **)(&ptDst->u64VirAddr[0]), NULL));
	ptDst->u64PhyAddr[1] = ptDst->u64PhyAddr[0] + ptDst->u32PicStride[0] * ALIGN_UP(ptDst->u32Height, 16);

	memset((AX_VOID *)((AX_LONG)ptDst->u64VirAddr[0]), 0x00, nImgSize);

	AX_IVPS_Dewarp(ptSrc, ptDst, ptDewarpAttr);

	SaveFile(ptDst, 0, 0, pStorePath, fileName, pCaseId);
	IVPS_MEM_FREE(ptDst->u64PhyAddr[0], ptDst->u64VirAddr[0]);
	return 0;
}

/*
 * SAMPLE_IVPS_DewarpSync()
 * Function: CropResize or Perspective.
 */
static AX_S32 SAMPLE_IVPS_DewarpSync(const AX_VIDEO_FRAME_T *ptFrame, char *pStorePath, SAMPLE_IVPS_DEWARP_T *pSampleDewarp, char *pCaseId)
{
	AX_S32 i, k, ret = 0;
	char fileName[64] = {0};
	AX_VIDEO_FRAME_T tDstFrame = {0};
	AX_U32 nMeshNumV = pSampleDewarp->tDewarpAttr.tMapUserAttr.nMeshNumV;
	AX_U32 nMeshNumH = pSampleDewarp->tDewarpAttr.tMapUserAttr.nMeshNumH;
	AX_S32 *pUserMap = malloc(nMeshNumV * nMeshNumH * 8);

	tDstFrame.u32Width = 1920;
	tDstFrame.u32Height = 1080;
	tDstFrame.u32PicStride[0] = 1920;
	tDstFrame.enImgFormat = AX_FORMAT_YUV420_SEMIPLANAR;
	snprintf(fileName, 64, "Dewarp_s%u_%ux%u", ptFrame->u32PicStride[0], ptFrame->u32Width, ptFrame->u32Height);

#ifdef __SAMPLE_IVPS_GDC_USER_MANUAL__
	pSampleDewarp->tDewarpAttr.tMapUserAttr.pUserMap = pUserMap;
	/* The following shows how to obtain the map table */
	for (int j = 0; j < nMeshNumV; j++)
	{
		for (int i = 0; i < nMeshNumH; i++)
		{
			k = (j * nMeshNumH + i) * 2;
			pUserMap[k] = -102400;	  /* Fixed-point decimals for delta-x, s13.10 */
			pUserMap[k + 1] = 204800; /* Fixed-point decimals for delta-y, s13.10 */
		}
	}
#endif
	ret = DewarpSingleCore(ptFrame, &tDstFrame, &pSampleDewarp->tDewarpAttr, pStorePath, fileName, pCaseId);
	if (ret)
	{
		ALOGE("DewarpSingleCore fail, ret = %x", ret);
		return ret;
	}
	return ret;
}

#ifdef __SAMPLE_IVPS_GDC_BACK_PRODUCT__
static AX_S32 SAMPLE_IVPS_Fisheye(const AX_VIDEO_FRAME_T *ptSrc, char *pStorePath, SAMPLE_IVPS_DEWARP_T *pSampleDewarp)
{
	int ret, handle, nImgSize;
	AX_VIDEO_FRAME_T tDst = {0};
	AX_BLK BlkId;
	AX_IVPS_GDC_ATTR_T *pGdc = &pSampleDewarp->tGdcAttr;
	AX_IVPS_POINT_T tSrcPoint = {0}, tDstPoint = {0};
	AX_U64 nStartTime, nEndTime;

	nImgSize = CalcImgSize(pGdc->nDstStride, pGdc->nDstWidth, pGdc->nDstHeight, pGdc->eDstFormat, 16);

	ALOGI("Fisheye nImgSize =%d", nImgSize);
	ALOGI("Fisheye u32PicStride[0]=%d", tDst.u32PicStride[0]);

	CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDst.u64PhyAddr[0],
					 (AX_VOID **)&tDst.u64VirAddr[0], &BlkId));
	tDstPoint.nX = 640;
	tDstPoint.nY = 360;
	AX_IVPS_FisheyePointQueryDst2Src(&tSrcPoint, &tDstPoint,
					 ptSrc->u32Width, ptSrc->u32Height, 4,
					 &pGdc->tFisheyeAttr);

	printf("source point nX:%d nY:%d\n", tSrcPoint.nX, tSrcPoint.nY);

	ret = AX_IVPS_GdcWorkCreate(&handle);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkCreate fail, ret = %x", ret);
		return -1;
	}

	ret = AX_IVPS_GdcWorkAttrSet(handle, pGdc);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkAttrSet fail, ret = %x", ret);
		return -2;
	}

	nStartTime = GetTickCount();
	ret = AX_IVPS_GdcWorkRun(handle, ptSrc, &tDst);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkRun fail, ret = %x", ret);
		return -3;
	}
	nEndTime = GetTickCount();
	printf("GDC time cost:%lld\n", nEndTime - nStartTime);

	SaveFile(&tDst, 0, 0, pStorePath, "Fisheye");

	ret = AX_POOL_ReleaseBlock(BlkId);
	if (ret)
	{
		ALOGE("Rls BlkId fail, ret=0x%x", ret);
	}

	ret = AX_IVPS_GdcWorkDestroy(handle);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkDestroy fail, ret = %x", ret);
		return -4;
	}
	return 0;
}

static AX_S32 SAMPLE_IVPS_MapUser(const AX_VIDEO_FRAME_T *ptSrc, char *pStorePath, SAMPLE_IVPS_DEWARP_T *pSampleDewarp)
{
	int ret, handle, nImgSize;
	AX_VIDEO_FRAME_T tDst = {0};
	AX_BLK BlkId;
	AX_IVPS_GDC_ATTR_T *pGdc = &pSampleDewarp->tGdcAttr;
	AX_IVPS_POINT_T tSrcPoint = {0}, tDstPoint = {0};
	AX_U64 nStartTime, nEndTime;

	nImgSize = CalcImgSize(pGdc->nDstStride, pGdc->nDstWidth, pGdc->nDstHeight, pGdc->eDstFormat, 16);

	ALOGI("MapUser nImgSize =%d", nImgSize);
	ALOGI("MapUser u32PicStride[0]=%d", tDst.u32PicStride[0]);

	CHECK_RESULT(BufPoolBlockAddrGet(-1, nImgSize, &tDst.u64PhyAddr[0],
					 (AX_VOID **)&tDst.u64VirAddr[0], &BlkId));

	pGdc->tMapUserAttr.pUserMap = AX_OS_MEM_Malloc(AX_ID_IVPS | (AX_SUB_ID_GDC << 8), pGdc->tMapUserAttr.nMeshNumV * pGdc->tMapUserAttr.nMeshNumH * 16);

	/* The following shows how to obtain the map table */
	int k;
	for (int j = 0; j < pGdc->tMapUserAttr.nMeshNumV; j++)
	{
		for (int i = 0; i < pGdc->tMapUserAttr.nMeshNumH; i++)
		{
			k = (j * pGdc->tMapUserAttr.nMeshNumH + i) * 2;
			/*
			  pGdc->tMapUserAttr.pUserMap[k] = dx;     Fixed-point decimals, s13.10
			  pGdc->tMapUserAttr.pUserMap[k + 1] = dy; Fixed-point decimals, s13.10
			*/
		}
	}

	ret = AX_IVPS_GdcWorkCreate(&handle);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkCreate fail, ret = %x", ret);
		return -1;
	}

	ret = AX_IVPS_GdcWorkAttrSet(handle, pGdc);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkAttrSet fail, ret = %x", ret);
		return -2;
	}

	nStartTime = GetTickCount();
	ret = AX_IVPS_GdcWorkRun(handle, ptSrc, &tDst);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkRun fail, ret = %x", ret);
		return -3;
	}
	nEndTime = GetTickCount();
	printf("GDC time cost:%lld\n", nEndTime - nStartTime);

	SaveFile(&tDst, 0, 0, pStorePath, "MapUser");

	ret = AX_POOL_ReleaseBlock(BlkId);
	if (ret)
	{
		ALOGE("Rls BlkId fail, ret=0x%x", ret);
	}

	ret = AX_IVPS_GdcWorkDestroy(handle);
	if (ret)
	{
		ALOGE("AX_IVPS_GdcWorkDestroy fail, ret = %x", ret);
		return -4;
	}
	return 0;
}
#endif

AX_S32 SAMPLE_IVPS_SyncApiDewarp(const IVPS_ARG_T *ptArg, const SAMPLE_IVPS_SYNC_T *pSync)
{
	int ret;
	int nDewarpType = SAMPLE_IVPS_DEWARP_NONE;

	if (!ptArg->pDewarpIni)
		return 0;

	nDewarpType = IVPS_DewarpIniParserType(ptArg->pDewarpIni);
	if (nDewarpType >= 0)
	{
		printf("Dewarp Type:%d\n", nDewarpType);
		IVPS_DewarpIniParser(ptArg->pDewarpIni, &gSampleDewarpSync);
	}

	ret = SAMPLE_IVPS_DewarpSync(&pSync->tFrameInput, pSync->pFilePath, &gSampleDewarpSync, ptArg->pCaseId);
	if (ret)
	{
		ALOGE("SAMPLE_IVPS_DewarpSync failed, ret=0x%x.", ret);
		return -1;
	}
	return 0;
}

/*######################################################################################*/
/*                                  MESH SAMPLE                                         */
/*######################################################################################*/
#define MESH_DATA_READ_LENDTH 20
AX_BOOL SAMPLE_IVPS_MeshHexLoad(const char *pszImge, AX_U32 pBufSize, AX_U64 *nPhyAddr, AX_VOID **pVirAddr)
{
    AX_S32 ret;
    char *p, buf[20];
    AX_U64 value;
    AX_U32 *pData;
    AX_U32 line = 1, line_max;
    FILE *fp = fopen(pszImge, "rb");
    if (!fp)
    {
        ALOGE("fopen %s fail, %s", pszImge, strerror(errno));
        return AX_FALSE;
    }

    fseek(fp, 0, SEEK_END);
    AX_U32 nFileSize = ftell(fp);
    if (pBufSize <= 0)
    {
        pBufSize = nFileSize;
    }

    fseek(fp, 0, SEEK_SET);
    ret = AX_SYS_MemAlloc((AX_U64 *)nPhyAddr, pVirAddr, pBufSize, 128, (const AX_S8 *)"User Mesh");
    if (ret)
    {
        ALOGE("Cmm alloc size:%d fail, ret=%d", nFileSize, ret);
        fclose(fp);
        return AX_FALSE;
    }

    pData = *pVirAddr;
    line_max = pBufSize / 8;

    while (line <= line_max)
    {
        if (!(p = fgets(buf, MESH_DATA_READ_LENDTH, fp)))
        {
            break;
        }
        sscanf(p, "%llx", &value);
        *pData = value & 0xFFFFFFFF; /* dx */
        pData++;
        *pData = (value >> 32) & 0xFFFFFFFF; /* dy */
        pData++;

#if 0 /* insert 3 lines 0 every 33 lines */
        if (line % 33 == 0 && line)
        {
            *pData = 0;
            pData++;
            *pData = 0;
            pData++;
            *pData = 0;
            pData++;
            *pData = 0;
            pData++;
            *pData = 0;
            pData++;
            *pData = 0;
            pData++;
        }
#endif
        line++;
    }
    printf("line:%d\n", line);
    fclose(fp);

    return AX_TRUE;
}

static SAMPLE_IVPS_MESH_CFG_T gSampleMeshCfg = {
    .pMeshFile = "/opt/data/mesh/mesh_tv_2560x1440_80x48.txt",
    .nMeshNumH = 33,
    .nMeshNumV = 33,
    .nMeshWidth = 80,
    .nMeshHeight = 48,
};

static AX_S32 SAMPLE_IVPS_MeshAttrCfg(AX_VOID)
{
    AX_IVPS_MAP_USER_ATTR_T *pAttr = &gSampleGdcCfg.tMapUserAttr;

    gSampleIvpsGrp.tPipelineAttr.nOutChnNum = 1;
    for (int i = 0; i <= gSampleIvpsGrp.tPipelineAttr.nOutChnNum; i++)
    {
	gSampleIvpsGrp.tPipelineAttr.tFilter[i][0].bEngage = AX_FALSE;
	gSampleIvpsGrp.tPipelineAttr.tFilter[i][1].bEngage = AX_FALSE;
    }
    gSampleIvpsGrp.tPipelineAttr.tFilter[1][0].bEngage = AX_TRUE;
    gSampleIvpsGrp.tPipelineAttr.tFilter[1][0].eEngine = AX_IVPS_ENGINE_GDC;
    gSampleIvpsGrp.tPipelineAttr.tFilter[1][0].nDstPicWidth = gSampleIvpsGrp.tFrameInput.u32Width;
    gSampleIvpsGrp.tPipelineAttr.tFilter[1][0].nDstPicHeight = gSampleIvpsGrp.tFrameInput.u32Height;
    gSampleIvpsGrp.tPipelineAttr.tFilter[1][0].nDstPicStride = ALIGN_UP(gSampleIvpsGrp.tPipelineAttr.tFilter[1][0].nDstPicWidth, 16);
    gSampleGdcCfg.eDewarpType = AX_IVPS_DEWARP_MAP_USER;

    int size = ALIGN_UP(gSampleMeshCfg.nMeshNumH, 4) * gSampleMeshCfg.nMeshNumV * 8;

    SAMPLE_IVPS_MeshHexLoad(gSampleMeshCfg.pMeshFile, size, (AX_U64 *)&gSampleMeshCfg.nMeshPhyAddr, &gSampleMeshCfg.pMeshVirAddr);
    pAttr->nMeshStartX = 0;
    pAttr->nMeshStartY = 0;
    pAttr->nMeshWidth = gSampleMeshCfg.nMeshWidth;
    pAttr->nMeshHeight = gSampleMeshCfg.nMeshHeight;
    pAttr->nMeshNumH = gSampleMeshCfg.nMeshNumH;
    pAttr->nMeshNumV = gSampleMeshCfg.nMeshNumV;
    pAttr->pUserMap = NULL;
    pAttr->nMeshTablePhyAddr = gSampleMeshCfg.nMeshPhyAddr;
    printf("nMeshWidth:%d nMeshHeight:%d nMeshTablePhyAddr:%llx\n", gSampleMeshCfg.nMeshWidth, gSampleMeshCfg.nMeshHeight, pAttr->nMeshTablePhyAddr);

    return 0;
}

AX_S32 SAMPLE_IVPS_MeshCfgGet(IVPS_ARG_T *ptIvpsArg)
{
	if (ptIvpsArg->pMeshFile) {
		gSampleMeshCfg.pMeshFile = ptIvpsArg->pMeshFile;
		if (!ptIvpsArg->nMeshWidth || !ptIvpsArg->nMeshHeight) {
			 ALOGE("nMeshWidth:%d or nMeshHeight:%d is 0", ptIvpsArg->nMeshWidth, ptIvpsArg->nMeshHeight);
			return -1;
		}
		gSampleMeshCfg.nMeshWidth = ptIvpsArg->nMeshWidth;
		gSampleMeshCfg.nMeshHeight = ptIvpsArg->nMeshHeight;
		SAMPLE_IVPS_MeshAttrCfg();
	}

	return 0;
}