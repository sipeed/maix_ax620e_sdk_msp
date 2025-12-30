/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include "ivps_util.h"
#include "ivps_pattern.h"

#define IVPS_BUF_POOL_MEM_SIZE (0x100000 * 40) // 40M

/***********************************************************************************/
/*                                  SYSTEM                                         */
/***********************************************************************************/
AX_U64 GetCurTimeUs(AX_VOID)
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (ts.tv_sec * 1000000 + ts.tv_nsec / 1000);
}

static timer_t gtimed = 0;
AX_BOOL StartFpsTimer(AX_U32 microseconds, pTimeOutHandler pfn)
{
    struct sigevent evp = {0};
    struct sigaction sigact = {0};
    sigemptyset(&sigact.sa_mask);
    sigact.sa_flags = (SA_SIGINFO | SA_RESTART);
    sigact.sa_sigaction = pfn;
    sigaction(SIGUSR2, &sigact, NULL);

    evp.sigev_value.sival_ptr = NULL;
    evp.sigev_notify = SIGEV_SIGNAL;
    evp.sigev_signo = SIGUSR2;

    if (timer_create(CLOCK_MONOTONIC, &evp, &gtimed) == -1)
    {
        ALOGE("timer_create() fail, error: %s", strerror(errno));
        return AX_FALSE;
    }

    struct itimerspec it;
    it.it_interval.tv_sec = (microseconds / 1000000);
    it.it_interval.tv_nsec = (microseconds % 1000000) * 1000;
    it.it_value = it.it_interval;
    if (timer_settime(gtimed, 0, &it, NULL) == -1)
    {
        ALOGE("timer_settime() fail, error: %s", strerror(errno));
        return AX_FALSE;
    }

    return AX_TRUE;
}

AX_VOID StopFpsTimer(AX_VOID)
{
    if (0 != gtimed)
    {
        timer_delete(gtimed);
        gtimed = 0;
    }
}

/***********************************************************************************/
/*                                  EPOLL                                          */
/***********************************************************************************/

AX_S32 DevEfdCreate(AX_U32 nNum)
{
    int efd = epoll_create(nNum);
    if (efd < 0)
    {
        ALOGE("failed to create epoll");
        return -1;
    }

    ALOGI("+++ efd:%d", efd);
    return efd;
}
AX_S32 DevEfdRelease(AX_U32 nEfd)
{
    ALOGI("--- efd:%d", nEfd);

    close(nEfd);
    return 0;
}

AX_S32 DevFdRelease(AX_U32 nFd)
{
    ALOGI("--- fd:%d", nFd);

    close(nFd);
    return 0;
}

AX_S32 DevFdListen(AX_S32 nEfd, AX_S32 nFd)
{
    struct epoll_event event;

    event.data.fd = nFd;
    event.events = EPOLLET | EPOLLIN;
    epoll_ctl(nEfd, EPOLL_CTL_ADD, nFd, &event);

    ALOGI("+++ efd:%d fd :%d", nEfd, nFd);
    return 0;
}

AX_S32 DevPolWait(AX_S32 nEfd, AX_U32 nNum, AX_S32 nMs)
{
    int i, events_num = 0;
    struct epoll_event events[nNum];

    events_num = epoll_wait(nEfd, events, nNum, nMs); /* -1: block */
    ALOGI("poll events_num %d num:%d", events_num, nNum);

    for (i = 0; i < events_num; i++)
    {
        if (events[i].data.fd < 0)
        {
            ALOGE("fd invalid errno:%d", errno);
            continue;
        }
        else if ((events[i].events & EPOLLERR) ||
                 (events[i].events & EPOLLHUP) || (!(events[i].events & EPOLLIN)))
        {
            ALOGE("epoll error");
            epoll_ctl(nEfd, EPOLL_CTL_DEL, events[i].data.fd, NULL);
            continue;
        }
    }
    return events_num;
}

/***********************************************************************************/
/*                                  Buffer Pool                                    */
/***********************************************************************************/
typedef struct
{
    AX_BOOL bActive;
    AX_POOL PoolId;
} IVPS_POOL_T;

static IVPS_POOL_T tBufPool[100];
static AX_U32 BufPoolCnt = 0;

AX_S32 IVPS_CommonPoolCreate(IVPS_BLK_T *pBlkInfo, AX_U32 nNum)
{
    AX_S32 ret, i;
    AX_POOL_FLOORPLAN_T PoolFloorPlan;

    if (nNum > 16)
    {
        ALOGE("VB num should be smaller than 16");
        return -1;
    }

    ret = AX_POOL_Exit();
    if (ret)
    {
        ALOGE("fail!!Error Code:0x%X", ret);
        return -1;
    }
    memset(&PoolFloorPlan, 0, sizeof(AX_POOL_FLOORPLAN_T));

    for (i = 0; i < nNum; i++)
    {
        PoolFloorPlan.CommPool[i].MetaSize = 512;
        PoolFloorPlan.CommPool[i].BlkSize = pBlkInfo->nSize;
        PoolFloorPlan.CommPool[i].BlkCnt = pBlkInfo->nCnt;
        PoolFloorPlan.CommPool[i].CacheMode = AX_POOL_CACHE_MODE_NONCACHE;

        memset(PoolFloorPlan.CommPool[i].PartitionName, 0, sizeof(PoolFloorPlan.CommPool[i].PartitionName));
        strcpy((char *)PoolFloorPlan.CommPool[i].PartitionName, "anonymous");
        pBlkInfo++;
    }

    ret = AX_POOL_SetConfig(&PoolFloorPlan);
    if (ret)
    {
        ALOGE("fail!Error Code:0x%X", ret);
        return -1;
    }
    else
    {
        ALOGI("success!");
    }

    ret = AX_POOL_Init();
    if (ret)
    {
        ALOGE("fail!!Error Code:0x%X", ret);
        return -1;
    }

    ALOGI("success!");
    return 0;
}

AX_POOL IVPS_UserPoolCreate(AX_U32 nBlkSize, AX_U32 nBlkCnt)
{
    AX_POOL PoolId;
    AX_POOL_CONFIG_T PoolConfig;

    /* create user_pool: blocksize=nBlkSize, metasize=0x1000, block count =nBlkCnt, noncache type */
    memset(&PoolConfig, 0, sizeof(AX_POOL_CONFIG_T));
    PoolConfig.MetaSize = 0x1000;
    PoolConfig.BlkSize = nBlkSize;
    PoolConfig.BlkCnt = nBlkCnt;
    PoolConfig.CacheMode = AX_POOL_CACHE_MODE_NONCACHE;
    memset(PoolConfig.PartitionName, 0, sizeof(PoolConfig.PartitionName));
    strcpy((char *)PoolConfig.PartitionName, "anonymous");

    PoolId = AX_POOL_CreatePool(&PoolConfig);

    if (AX_INVALID_POOLID == PoolId)
    {
        ALOGE("error!!!");
        return AX_INVALID_POOLID;
    }

    ALOGI("success PoolId:%d", PoolId);
    return PoolId;
}

static AX_POOL BufPoolCreate(AX_U32 nBlkSize, AX_U32 nBlkCnt)
{
    AX_POOL PoolId;
    AX_POOL_CONFIG_T PoolConfig;

    /* create user_pool_0 :blocksize=1000,metasize=512,block count =2 ,noncache type */
    memset(&PoolConfig, 0, sizeof(AX_POOL_CONFIG_T));
    PoolConfig.MetaSize = 512;
    PoolConfig.BlkSize = nBlkSize;
    PoolConfig.BlkCnt = nBlkCnt;
    PoolConfig.CacheMode = AX_POOL_CACHE_MODE_NONCACHE;
    memset(PoolConfig.PartitionName, 0, sizeof(PoolConfig.PartitionName));
    strcpy((char *)PoolConfig.PartitionName, "anonymous");

    PoolId = AX_POOL_CreatePool(&PoolConfig);

    if (AX_INVALID_POOLID == PoolId)
    {
        ALOGE("error!!!");
        return AX_INVALID_POOLID;
    }

    ALOGI("success PoolId:%d", PoolId);
    return PoolId;
}

AX_S32 BufCreate(AX_POOL *PoolId, AX_U32 nBlkSize, AX_U32 nBlkCnt)
{
    int ret;

    if ((*PoolId = BufPoolCreate(nBlkSize, nBlkCnt)) == AX_INVALID_POOLID)
    {
        goto ERROR;
    }
    ALOGI("PoolId:%x", *PoolId);
    tBufPool[BufPoolCnt].PoolId = *PoolId;
    tBufPool[BufPoolCnt].bActive = AX_TRUE;
    BufPoolCnt++;

    return 0;

ERROR:
    ALOGE("sample_pool test fail!");
    ret = AX_POOL_Exit();
    if (ret)
    {
        ALOGE("fail!!Error Code:0x%X", ret);
        return -1;
    }
    ALOGI("success!");
    return -1;
}

AX_S32 BufDestroy(AX_POOL PoolId)
{
    int ret;

    ret = AX_POOL_DestroyPool(PoolId);
    if (ret)
    {
        ALOGE("fail!!Error Code:0x%X", ret);
        return -1;
    }
    ALOGI("success pool id:%d!", PoolId);

    return 0;
}

AX_S32 BufDestroyAll(AX_VOID)
{
    int i, ret;
    for (i = BufPoolCnt - 1; i >= 0; i--)
    {

        ret = AX_POOL_DestroyPool(tBufPool[i].PoolId);
        if (ret)
        {
            ALOGE("fail!!Error Code:0x%X", ret);
            return -1;
        }
        tBufPool[BufPoolCnt].bActive = AX_FALSE;
        ALOGI("success pool id:%d!", tBufPool[i].PoolId);
    }
    return 0;
}

AX_S32 BufPoolBlockAddrGet(AX_POOL PoolId, AX_U32 BlkSize, AX_U64 *nPhyAddr, AX_VOID **pVirAddr, AX_BLK *BlkId)
{

    if (BlkId == NULL) {
        int nRet = AX_SYS_MemAlloc(nPhyAddr, (AX_VOID **)pVirAddr, BlkSize, 0x1000, (AX_S8 *)"ivps_sample");
        if (nRet != 0) {
            printf("AX_SYS_MemAlloc failed\n");
            return -1;
        }
        ALOGI("PhyAddr:0x%llx VirAddr:0x%p\n", *nPhyAddr, *pVirAddr);
        return 0;
    }

    *BlkId = AX_POOL_GetBlock(PoolId, BlkSize, NULL);

    *nPhyAddr = AX_POOL_Handle2PhysAddr(*BlkId);
    if (!(*nPhyAddr))
    {
        ALOGE("BlkId:0x%x is invalid!", *BlkId);
        return -1;
    }
    ALOGI("Blockid:0x%x -> PhyAddr:0x%llx\n", *BlkId, *nPhyAddr);

    *pVirAddr = AX_POOL_GetBlockVirAddr(*BlkId);
    if (!(*pVirAddr))
    {
        ALOGE("pVirAddr is NULL!");
        return -1;
    }

    ALOGI("VirAddr:0x%p\n", *pVirAddr);
    return 0;
}

/***********************************************************************************/
/*                                 IMAGE                                           */
/***********************************************************************************/
static AX_BOOL Split(char *pSrc, const char *pDelim, char **ppDst, AX_S32 nDstCnt, AX_S32 *pNum)
{

    if (!pSrc || 0 == strlen(pSrc) || 0 == nDstCnt || !pDelim || 0 == strlen(pDelim))
    {
        ALOGE("Invalid para");
        return AX_FALSE;
    }

    AX_S32 nCount = 0;
    char *pToken = strtok(pSrc, pDelim);
    while (NULL != pToken)
    {
        if (++nCount > nDstCnt)
        {
            ALOGE("nCount overflow");
            return AX_FALSE;
        }

        *ppDst++ = pToken;
        pToken = strtok(NULL, pDelim);
    }
    if (pNum)
    {
        *pNum = nCount;
    }

    return AX_TRUE;
}

char *FilePathExtract(char *pFile)
{
    int len, i;
    len = strlen(pFile);
    for (i = len - 1; i >= 0; i--)
    {
        if (pFile[i] == '/')
        {
            pFile[i] = '\0';
            break;
        }
    }
    ALOGI("Path= %s", pFile);
    return pFile;
}

AX_U32 CalcImgSize(AX_U32 nStride, AX_U32 nW, AX_U32 nH, AX_IMG_FORMAT_E eType, AX_U32 nAlign)
{
    AX_U32 nBpp = 0;
    if (nW == 0 || nH == 0)
    {
        ALOGE("Invalid width %d or height %d!", nW, nH);
        return 0;
    }

    if (0 == nStride)
    {
        nStride = (0 == nAlign) ? nW : ALIGN_UP(nW, nAlign);
    }
    else
    {
        if (nAlign > 0)
        {
            if (nStride % nAlign)
            {
                ALOGE("stride: %u not %u aligned.!", nStride, nAlign);
                return 0;
            }
        }
    }

    switch (eType)
    {
    case AX_FORMAT_YUV400:
        nBpp = 8;
        break;
    case AX_FORMAT_YUV420_PLANAR:
    case AX_FORMAT_YUV420_SEMIPLANAR:
    case AX_FORMAT_YUV420_SEMIPLANAR_VU:
        nBpp = 12;
        break;
    case AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P101010:
        nBpp = 15;
        break;
    case AX_FORMAT_YUV422_INTERLEAVED_YUYV:
    case AX_FORMAT_YUV422_INTERLEAVED_UYVY:
    case AX_FORMAT_YUV422_INTERLEAVED_YVYU:
    case AX_FORMAT_YUV422_INTERLEAVED_VYUY:
    case AX_FORMAT_YUV422_SEMIPLANAR:
    case AX_FORMAT_YUV422_SEMIPLANAR_VU:
    case AX_FORMAT_RGB565:
    case AX_FORMAT_BGR565:
    case AX_FORMAT_ARGB4444:
    case AX_FORMAT_RGBA4444:
    case AX_FORMAT_ABGR4444:
    case AX_FORMAT_BGRA4444:
    case AX_FORMAT_RGBA5551:
    case AX_FORMAT_ARGB1555:
    case AX_FORMAT_ABGR1555:
    case AX_FORMAT_BGRA5551:
        nBpp = 16;
        break;
    case AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P101010:
        nBpp = 20;
        break;
    case AX_FORMAT_YUV444_PACKED:
    case AX_FORMAT_RGB888:
    case AX_FORMAT_BGR888:
    case AX_FORMAT_ARGB8565:
    case AX_FORMAT_RGBA5658:
    case AX_FORMAT_ABGR8565:
    case AX_FORMAT_BGRA5658:
    case AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P010:
        nBpp = 24;
        break;
    case AX_FORMAT_RGBA8888:
    case AX_FORMAT_ARGB8888:
    case AX_FORMAT_BGRA8888:
    case AX_FORMAT_ABGR8888:
    case AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P010:
        nBpp = 32;
        break;
    default:
        nBpp = 0;
        break;
    }

    return nStride * nH * nBpp / 8;
}

/* Load image file and alloc memory */
AX_BOOL LoadImage(const char *pszImge, AX_U32 pImgSize, AX_U64 *pPhyAddr, AX_VOID **ppVirAddr)
{
    AX_S32 ret;
    FILE *fp = fopen(pszImge, "rb");

    if (fp)
    {
        ret = fseek(fp, 0, SEEK_END);
        if (ret)
        {
            ALOGE("fseek fail, ret=0x%x", ret);
        }
        AX_U32 nFileSize = ftell(fp);
        if (pImgSize > 0 && pImgSize != nFileSize)
        {
            ALOGE("file size not right, %d != %d", pImgSize, nFileSize);
            fclose(fp);
            return AX_FALSE;
        }
        ret = fseek(fp, 0, SEEK_SET);
        if (ret)
        {
            ALOGE("fseek fail, ret=0x%x", ret);
        }
        if (!nFileSize)
        {
            ALOGE("%s nFileSize is 0 !", pszImge);
            return AX_FALSE;
        }
        ret = AX_SYS_MemAlloc((AX_U64 *)pPhyAddr, ppVirAddr, nFileSize, SAMPLE_PHY_MEM_ALIGN_SIZE, NULL);
        if (0 != ret)
        {
            ALOGE("AX_SYS_MemAlloc fail, ret=0x%x", ret);
            fclose(fp);
            return AX_FALSE;
        }
        if (fread(*ppVirAddr, 1, nFileSize, fp) != nFileSize)
        {
            ALOGE("fread fail, %s", strerror(errno));
            fclose(fp);
            return AX_FALSE;
        }
        fclose(fp);

        return AX_TRUE;
    }
    else
    {
        ALOGE("fopen %s fail, %s", pszImge, strerror(errno));
        return AX_FALSE;
    }
}

static AX_BOOL LoadImageExt(AX_POOL PoolId, const char *pszImge, AX_U32 nOffset, AX_S32 nImgSize,
                            AX_BLK *BlkId, AX_BOOL isYUVSplit, AX_U64 *nPhyAddr, AX_VOID **pVirAddr)
{
    AX_S32 ret;
    AX_BLK *BlkIdTmp;
    FILE *fp = fopen(pszImge, "rb");
    if (!fp)
    {
        ALOGE("fopen %s fail, %s", pszImge, strerror(errno));
        return AX_FALSE;
    }
    if (nImgSize <= 0)
    {
        fseek(fp, 0, SEEK_END);
        nImgSize = ftell(fp);
        if (nImgSize <= 0)
        {
            ALOGE("file size not right, %d", nImgSize);
            fclose(fp);
            return AX_FALSE;
        }
    }
    fseek(fp, nOffset, SEEK_SET);

    if (isYUVSplit) /* Y and UV data are stored separately */
    {
        nImgSize = nImgSize / 3;
        ret = BufPoolBlockAddrGet(PoolId, nImgSize * 2, nPhyAddr, pVirAddr, BlkId);
        if (0 != ret)
        {
            ALOGE("BufPoolBlockAddrGet fail, ret=0x%x", ret);
            fclose(fp);
            return AX_FALSE;
        }
        if (fread(*pVirAddr, nImgSize, 2, fp) != 2)
        {
            ALOGE("fread fail, %s", strerror(errno));
            ret = AX_POOL_ReleaseBlock(*BlkId);
            if (ret)
            {
                ALOGE("IVPS Release BlkId fail, ret=0x%x", ret);
            }
            fclose(fp);
            return AX_FALSE;
        }

        fseek(fp, nImgSize * 2, SEEK_SET);
        nPhyAddr++;
        pVirAddr += sizeof(pVirAddr) / 2;
        BlkIdTmp = BlkId;
        BlkId++;
        ret = BufPoolBlockAddrGet(PoolId, nImgSize, nPhyAddr, pVirAddr, BlkId);
        if (0 != ret)
        {
            ALOGE("BufPoolBlockAddrGet fail, ret=0x%x", ret);
            ret = AX_POOL_ReleaseBlock(*BlkIdTmp);
            if (ret)
            {
                ALOGE("IVPS Release BlkId fail, ret=0x%x", ret);
            }
            fclose(fp);
            return AX_FALSE;
        }
        if (fread(*pVirAddr, nImgSize, 1, fp) != 1)
        {
            ALOGE("fread fail, %s", strerror(errno));
            ret = AX_POOL_ReleaseBlock(*BlkIdTmp);
            if (ret)
            {
                ALOGE("IVPS Release BlkId fail, ret=0x%x", ret);
            }
            ret = AX_POOL_ReleaseBlock(*BlkId);
            if (ret)
            {
                ALOGE("IVPS Release BlkId fail, ret=0x%x", ret);
            }
            fclose(fp);
            return AX_FALSE;
        }
        fclose(fp);
        return AX_TRUE;
    }

    ret = BufPoolBlockAddrGet(PoolId, nImgSize, nPhyAddr, pVirAddr, BlkId);
    if (0 != ret)
    {
        ALOGE("BufPoolBlockAddrGet fail, ret=0x%x", ret);
        fclose(fp);
        return AX_FALSE;
    }
    if (fread(*pVirAddr, nImgSize, 1, fp) != 1)
    {
        ALOGE("fread fail, %s", strerror(errno));
        ret = AX_POOL_ReleaseBlock(*BlkId);
        if (ret)
        {
            ALOGE("IVPS Release BlkId fail, ret=0x%x", ret);
        }
        fclose(fp);
        return AX_FALSE;
    }
    fclose(fp);

    return AX_TRUE;
}

AX_S32 PatternAutoGen(AX_POOL PoolId, AX_IMG_FORMAT_E eImgFormat, AX_U16 nStride, AX_U32 nWidth, AX_U32 nHeight,
                      AX_BLK *BlkId, AX_U64 *nPhyAddr, AX_VOID **pVirAddr)
{
    AX_S32 ret;
    AX_U32 nImageSize;

    nImageSize = nStride * nHeight;
    if (nImageSize == 0)
    {
        ALOGE("nStride%d or nHeight%d is 0", nStride, nHeight);
        return -1;
    }
    switch (eImgFormat)
    {
    case AX_FORMAT_YUV400:
        break;
    case AX_FORMAT_YUV420_SEMIPLANAR:
    case AX_FORMAT_YUV420_SEMIPLANAR_VU:
    case AX_FORMAT_YUV422_SEMIPLANAR:
    case AX_FORMAT_YUV422_INTERLEAVED_YUYV:
        nImageSize = nImageSize * 3 / 2;
        break;
    case AX_FORMAT_RGB888:
    case AX_FORMAT_BGR888:
        nImageSize = nImageSize * 3;
        nStride = nStride * 3;
        break;
    case AX_FORMAT_ARGB1555:
    case AX_FORMAT_RGBA5551:
    case AX_FORMAT_ABGR1555:
    case AX_FORMAT_BGRA5551:
    case AX_FORMAT_ARGB4444:
    case AX_FORMAT_RGBA4444:
    case AX_FORMAT_ABGR4444:
    case AX_FORMAT_BGRA4444:
    case AX_FORMAT_RGB565:
    case AX_FORMAT_BGR565:
        nImageSize = nImageSize * 2;
        nStride = nStride * 2;
        break;
    case AX_FORMAT_ARGB8888:
    case AX_FORMAT_RGBA8888:
    case AX_FORMAT_ABGR8888:
    case AX_FORMAT_BGRA8888:
        nImageSize = nImageSize * 4;
        nStride = nStride * 4;
        break;
    default:
        ALOGE("Not support format:%d", eImgFormat);
        nImageSize = nImageSize * 4;
        break;
    }

    ret = BufPoolBlockAddrGet(PoolId, nImageSize, nPhyAddr, pVirAddr, BlkId);
    if (0 != ret)
    {
        ALOGE("BufPoolBlockAddrGet fail, ret=0x%x", ret);
        return ret;
    }
    PatternSmpteFill(eImgFormat, nWidth, nHeight, nStride, *pVirAddr);
    return 0;
}

/* Save image file and  free memory */
AX_BOOL SaveImage(const char *pszImge, AX_U32 pBufSize, AX_U64 pPhyAddr, AX_VOID *ppVirAddr)
{
    FILE *fp = fopen(pszImge, "wb");
    if (fp)
    {

        fseek(fp, 0, SEEK_SET);

        if (fwrite(ppVirAddr, 1, pBufSize, fp) != pBufSize)
        {
            ALOGE("fwrite fail, %s", strerror(errno));
            fclose(fp);
            return AX_FALSE;
        }
        fclose(fp);

        AX_SYS_MemFree(pPhyAddr, ppVirAddr);

        return AX_TRUE;
    }
    else
    {
        ALOGE("fopen %s fail, %s", pszImge, strerror(errno));
        return AX_FALSE;
    }
}

static ivps_string_map_t global_format_map[] = {
    {AX_FORMAT_INVALID, "-1"},
    {AX_FORMAT_YUV400, "Y8"},
    {AX_FORMAT_YUV420_SEMIPLANAR, "NV12"},
    {AX_FORMAT_YUV420_SEMIPLANAR_VU, "NV21"},
    {AX_FORMAT_YUV422_SEMIPLANAR, "NV16"},
    {AX_FORMAT_YUV422_SEMIPLANAR_VU, "NV61"},
    {AX_FORMAT_YUV400_10BIT, "Y10"},
    {AX_FORMAT_YUV422_INTERLEAVED_YUYV, "YUYV"},
    {AX_FORMAT_YUV422_INTERLEAVED_YVYU, "YVYU"},
    {AX_FORMAT_YUV422_INTERLEAVED_UYVY, "UYVY"},
    {AX_FORMAT_YUV422_INTERLEAVED_VYUY, "VYUY"},
    {AX_FORMAT_YUV420_PLANAR_10BIT_UV_PACKED_4Y5B, "4Y5B"},
    {AX_FORMAT_YUV420_PLANAR_10BIT_I010, "I010"},
    {AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P101010, "NV12_P101010"},
    {AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P010, "NV12_P010"},
    {AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P016, "P016"},
    {AX_FORMAT_YUV420_SEMIPLANAR_10BIT_I016, "I016"},
    {AX_FORMAT_YUV420_SEMIPLANAR_10BIT_12P16B, "12P16B"},
    {AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P101010, "NV16_P101010"},
    {AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P010, "NV16_P010"},
    {AX_FORMAT_RGB565, "RGB565"},
    {AX_FORMAT_RGB888, "RGB888"},
    {AX_FORMAT_BGR888, "BGR888"},
    {AX_FORMAT_BGR565, "BGR565"},
    {AX_FORMAT_ARGB4444, "ARGB4444"},
    {AX_FORMAT_ARGB1555, "ARGB1555"},
    {AX_FORMAT_ARGB8888, "ARGB8888"},
    {AX_FORMAT_RGBA8888, "RGBA8888"},
    {AX_FORMAT_ARGB8565, "ARGB8565"},
    {AX_FORMAT_RGBA5658, "RGBA5658"},
    {AX_FORMAT_RGBA5551, "RGBA5551"},
    {AX_FORMAT_RGBA4444, "RGBA4444"},
    {AX_FORMAT_ABGR4444, "ABGR4444"},
    {AX_FORMAT_ABGR1555, "ABGR1555"},
    {AX_FORMAT_ABGR8888, "ABGR8888"},
    {AX_FORMAT_BGRA8888, "BGRA8888"},
    {AX_FORMAT_ABGR8565, "ABGR8565"},
    {AX_FORMAT_BGRA5658, "BGRA5658"},
    {AX_FORMAT_BGRA5551, "BGRA5551"},
    {AX_FORMAT_BGRA4444, "BGRA4444"},
    {AX_FORMAT_BITMAP, "BITMAP"},
};

char *global_format2string(int value)
{
    int i;
    for (i = 0; i < sizeof(global_format_map) / sizeof(ivps_string_map_t); i++)
    {
        if (value == global_format_map[i].value)
            return global_format_map[i].str;
    }
    ALOGE("Not support fromat %d", value);
    return "null";
}

static AX_U8 ivps_bytes_per_pixel(AX_IMG_FORMAT_E type)
{
    switch (type) {
    case AX_FORMAT_YUV420_SEMIPLANAR:
    case AX_FORMAT_YUV420_SEMIPLANAR_VU:
    case AX_FORMAT_YUV422_SEMIPLANAR:
    case AX_FORMAT_YUV422_SEMIPLANAR_VU:
        return 1;
    case AX_FORMAT_RGB888:
    case AX_FORMAT_BGR888:
    case AX_FORMAT_ARGB8565:
    case AX_FORMAT_RGBA5658:
    case AX_FORMAT_ABGR8565:
    case AX_FORMAT_BGRA5658:
        return 3;
    case AX_FORMAT_RGBA8888:
    case AX_FORMAT_ARGB8888:
    case AX_FORMAT_BGRA8888:
    case AX_FORMAT_ABGR8888:
        return 4;
    case AX_FORMAT_RGBA4444:
    case AX_FORMAT_ARGB4444:
    case AX_FORMAT_BGRA4444:
    case AX_FORMAT_ABGR4444:
    case AX_FORMAT_RGBA5551:
    case AX_FORMAT_ARGB1555:
    case AX_FORMAT_BGRA5551:
    case AX_FORMAT_ABGR1555:
    case AX_FORMAT_RGB565:
    case AX_FORMAT_BGR565:
        return 2;
    default:
        return 1;
    }
}

static int ivps_padding_color_set(AX_U8 *vir_addr, AX_U8 byte_per_pixel, AX_U32 stride, AX_U32 width,
                     AX_U32 height, AX_U8 value)
{
    int h, delta;
    int byte_stride, byte_width;

    ALOGI("stride:%d width:%d height:%d, value:%d", stride, width, height, value);
    ALOGI("byte_per_pixel:%d", byte_per_pixel);
    if (stride <= width)
    {
        return 0;
    }
    byte_stride = stride * byte_per_pixel;
    byte_width = width * byte_per_pixel;
    delta = byte_stride - byte_width;

    for (h = 0; h < height; h++)
    {
        memset(vir_addr + (byte_stride * h + byte_width), value, delta);
    }
    return 0;
}

static int ivps_padding_color_set_v2(AX_U8 *vir_addr, AX_U8 byte_per_pixel, AX_U32 stride, AX_U32 width,
                     AX_U32 height, AX_S16 left, AX_S16 right, AX_S16 top, AX_S16 bottom, AX_U8 value)
{
    int h, delta;
    int byte_stride, byte_width, byte_left, byte_right;

    ALOGI("stride:%d width:%d height:%d, left:%d right:%d top:%d bottom:%d value:%d", stride, width, height, left, right, top, bottom, value);
    ALOGI("byte_per_pixel:%d", byte_per_pixel);

    byte_stride = stride * byte_per_pixel;
    byte_width = width * byte_per_pixel;
    byte_left = (int)left * byte_per_pixel;
    byte_right = (int)right * byte_per_pixel;

    if (top)
    {
        memset(vir_addr, value, byte_stride * top);
    }
    delta = height - bottom;
    if (delta > 0)
    {
        memset(vir_addr + byte_stride * bottom , value, byte_stride * delta);
    }

    delta = byte_width - byte_right;
    for (h = top; h < bottom; h++)
    {
        if (left)
        {
            memset(vir_addr + byte_stride * h, value, byte_left);
        }
        if (delta > 0)
        {
            memset(vir_addr + (byte_stride * h + byte_right), value, delta);
        }
    }
    return 0;
}

AX_VOID SaveFile(AX_VIDEO_FRAME_T *tDstFrame, AX_S32 nGrpIdx, AX_S32 nChnIdx, char *pFilePath, char *pFileName, char *pCaseId)
{
    AX_U32 nPixelSize;
    AX_S32 s32Ret1 = 0;
    AX_S32 s32Ret2 = 0;
    AX_S32 s32Ret3 = 0;
    AX_S32 bit_num = 0, byte_num = 0;
    AX_U8 nStoragePlanarNum = 0;
    char szOutImgFile[128] = {0};

    if (!pFilePath)
    {
        ALOGW("File path is null, no need to save file");
        return;
    }

    nPixelSize = (AX_U32)tDstFrame->u32PicStride[0] * tDstFrame->u32Height;

    switch (tDstFrame->enImgFormat)
    {
    case AX_FORMAT_YUV420_PLANAR:
    case AX_FORMAT_YUV420_SEMIPLANAR:       /* NV12 */
    case AX_FORMAT_YUV420_SEMIPLANAR_VU:    /* NV21 */
    case AX_FORMAT_YUV422_SEMIPLANAR:       /* NV16 */
    case AX_FORMAT_YUV422_SEMIPLANAR_VU:    /* NV61 */
    case AX_FORMAT_YUV422_INTERLEAVED_YUYV:
    case AX_FORMAT_YUV422_INTERLEAVED_YVYU:
    case AX_FORMAT_YUV422_INTERLEAVED_UYVY:
    case AX_FORMAT_YUV422_INTERLEAVED_VYUY:
        bit_num = 8;
        byte_num = 1;
        nStoragePlanarNum = 2;
        break;
    case AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P101010:
    case AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P101010:
        bit_num = 10;
        nStoragePlanarNum = 2;
        break;
    case AX_FORMAT_YUV420_SEMIPLANAR_10BIT_P010:
    case AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P010:
        bit_num = 16;
        byte_num = 2;
        nStoragePlanarNum = 2;
        break;
    case AX_FORMAT_RGBA8888:
    case AX_FORMAT_ARGB8888:
    case AX_FORMAT_ABGR8888:
    case AX_FORMAT_BGRA8888:
        byte_num = 4;
        nPixelSize = nPixelSize * 4;
        nStoragePlanarNum = 1;
        break;
    case AX_FORMAT_RGB888:
    case AX_FORMAT_BGR888:
    case AX_FORMAT_ARGB8565:
    case AX_FORMAT_BGRA5658:
    case AX_FORMAT_ABGR8565:
    case AX_FORMAT_RGBA5658:
        byte_num = 3;
        nPixelSize = nPixelSize * 3;
        nStoragePlanarNum = 1;
        break;
    case AX_FORMAT_RGB565:
    case AX_FORMAT_BGR565:
    case AX_FORMAT_ARGB4444:
    case AX_FORMAT_RGBA4444:
    case AX_FORMAT_ABGR4444:
    case AX_FORMAT_BGRA4444:
    case AX_FORMAT_ARGB1555:
    case AX_FORMAT_RGBA5551:
    case AX_FORMAT_ABGR1555:
    case AX_FORMAT_BGRA5551:
        byte_num = 2;
        nPixelSize = nPixelSize * 2;
        nStoragePlanarNum = 1;
        break;
    case AX_FORMAT_YUV400:
        byte_num = 1;
        nStoragePlanarNum = 1;
        break;
    default:
        ALOGE("Not support format %d", tDstFrame->enImgFormat);
        return;
        break;
    }

    printf("SaveFile nPixelSize: %d u32FrameSize: %d Height:%d Width:%d PhyAddrY:%llx PhyAddrUV:%llx Format:%d\n",
           nPixelSize, tDstFrame->u32FrameSize, tDstFrame->u32Height, tDstFrame->u32Width,
           tDstFrame->u64PhyAddr[0], tDstFrame->u64PhyAddr[1], tDstFrame->enImgFormat);

    if (tDstFrame->stCompressInfo.enCompressMode)
    {
        sprintf(szOutImgFile, "%s/%s_GRP%dCHN%d_%dx%d_FBC%d.%s", pFilePath, pFileName, nGrpIdx, nChnIdx,
                tDstFrame->u32PicStride[0], tDstFrame->u32Height, tDstFrame->stCompressInfo.u32CompressLevel,
                global_format2string(tDstFrame->enImgFormat));
    }
    else
    {
        sprintf(szOutImgFile, "%s/%s_GRP%dCHN%d_%dx%d.%s", pFilePath, pFileName, nGrpIdx, nChnIdx,
                tDstFrame->u32PicStride[0], tDstFrame->u32Height, global_format2string(tDstFrame->enImgFormat));
    }

    FILE *fp = fopen(szOutImgFile, "wb");
    if (!fp)
    {
        ALOGE("Fail to open file:%s!", szOutImgFile);
        return;
    }

    printf("Save file(%s)!\n", szOutImgFile);
    switch (nStoragePlanarNum)
    {
    case 2:
        if (tDstFrame->stCompressInfo.enCompressMode)
        {
            if (!tDstFrame->u64PhyAddr[1])
            {
                tDstFrame->u64PhyAddr[1] = tDstFrame->u64PhyAddr[0]
                    + tDstFrame->u32PicStride[0] * tDstFrame->u32Height * tDstFrame->stCompressInfo.u32CompressLevel / 8;
            }
            nPixelSize = nPixelSize * bit_num / 8 * tDstFrame->stCompressInfo.u32CompressLevel / 8;
        }
        else
        {
            if (!tDstFrame->u64PhyAddr[1])
            {
                tDstFrame->u64PhyAddr[1] = tDstFrame->u64PhyAddr[0] + tDstFrame->u32PicStride[0] * tDstFrame->u32Height;
            }
            nPixelSize = nPixelSize * bit_num / 8;
        }

        if (AX_FORMAT_YUV422_SEMIPLANAR == tDstFrame->enImgFormat
            || AX_FORMAT_YUV422_SEMIPLANAR_VU == tDstFrame->enImgFormat
            || AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P101010 == tDstFrame->enImgFormat
            || AX_FORMAT_YUV422_SEMIPLANAR_10BIT_P010 == tDstFrame->enImgFormat)
        {
            tDstFrame->u64VirAddr[0] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[0], nPixelSize);
            tDstFrame->u64VirAddr[1] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[1], nPixelSize);
            ivps_padding_color_set((void *)((unsigned long)tDstFrame->u64VirAddr[0]), byte_num,
                    tDstFrame->u32PicStride[0], tDstFrame->u32Width, tDstFrame->u32Height, 0x00);
            ivps_padding_color_set((void *)((unsigned long)tDstFrame->u64VirAddr[1]), byte_num,
                    tDstFrame->u32PicStride[0], tDstFrame->u32Width, tDstFrame->u32Height, 0x80);
            fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[0]), 1, nPixelSize, fp);
            fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[1]), 1, nPixelSize, fp);
            s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[0], nPixelSize);
            s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[1], nPixelSize);
        }
        else
        {
            tDstFrame->u64VirAddr[0] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[0], nPixelSize);
            tDstFrame->u64VirAddr[1] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[1], nPixelSize / 2);
            ivps_padding_color_set((void *)((unsigned long)tDstFrame->u64VirAddr[0]), byte_num,
                    tDstFrame->u32PicStride[0], tDstFrame->u32Width, tDstFrame->u32Height, 0x00);
            ivps_padding_color_set((void *)((unsigned long)tDstFrame->u64VirAddr[1]), byte_num,
                    tDstFrame->u32PicStride[0], tDstFrame->u32Width, tDstFrame->u32Height / 2, 0x80);
            fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[0]), 1, nPixelSize, fp);
            fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[1]), 1, nPixelSize / 2, fp);
            s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[0], nPixelSize);
            s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[1], nPixelSize / 2);
        }
        break;
    case 3:
        tDstFrame->u64VirAddr[0] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[0], nPixelSize);
        tDstFrame->u64VirAddr[1] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[1], nPixelSize / 2);
        tDstFrame->u64VirAddr[2] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[2], nPixelSize / 2);
        fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[0]), 1, nPixelSize, fp);
        fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[1]), 1, nPixelSize / 2, fp);
        fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[2]), 1, nPixelSize / 2, fp);
        s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[0], nPixelSize);
        s32Ret2 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[1], nPixelSize / 2);
        s32Ret3 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[2], nPixelSize / 2);
        break;
    default:
        if (tDstFrame->u32FrameSize)
        {
            tDstFrame->u64VirAddr[0] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[0], tDstFrame->u32FrameSize);
            ivps_padding_color_set((void *)((unsigned long)tDstFrame->u64VirAddr[0]), byte_num,
                    tDstFrame->u32PicStride[0], tDstFrame->u32Width, tDstFrame->u32Height, 0x00);
            fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[0]), 1, tDstFrame->u32FrameSize, fp);
            s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[0], tDstFrame->u32FrameSize);
        }
        else
        {
            tDstFrame->u64VirAddr[0] = (AX_ULONG)AX_SYS_Mmap(tDstFrame->u64PhyAddr[0], nPixelSize);
            ivps_padding_color_set((void *)((unsigned long)tDstFrame->u64VirAddr[0]), byte_num,
                    tDstFrame->u32PicStride[0], tDstFrame->u32Width, tDstFrame->u32Height, 0x00);
            fwrite((AX_VOID *)((AX_ULONG)tDstFrame->u64VirAddr[0]), 1, nPixelSize, fp);
            s32Ret1 = AX_SYS_Munmap((AX_VOID *)(AX_ULONG)tDstFrame->u64VirAddr[0], nPixelSize);
        }
        break;
    }
    fclose(fp);
    printf("Save success!\n");

    if (s32Ret1 || s32Ret2 || s32Ret3)
    {
        printf("AX_SYS_Munmap s32Ret1=0x%x ,s32Ret2=0x%x ,s32Ret2=0x%x", s32Ret1, s32Ret2, s32Ret3);
    }

    IVPS_FileMD5Check(szOutImgFile, pCaseId, nGrpIdx, nChnIdx);
}

AX_VOID SaveFileExt(AX_VIDEO_FRAME_T *ptDstFrame, AX_S32 nGrpIdx, AX_S32 nChnIdx,
                    char *pFilePath, char *pFileName, int nInputW, int nInputH, char *pCaseId)
{
    char szOutImgName[128] = {0};
    sprintf(szOutImgName, "%s_%dx%d", pFileName, nInputW, nInputH);
    SaveFile(ptDstFrame, nGrpIdx, nChnIdx, pFilePath, szOutImgName, pCaseId);
}

static int ImgInfoParse(IVPS_IMAGE_INFO_T *tImage, char *pArg)
{
    AX_S32 nNum = 0;
    char *end, *p = NULL, *ppToken[4] = {NULL};

    if (!pArg || strlen(pArg) <= 0)
    {
        ALOGE("error! pArg is wrong!");
        return -1;
    }
    if (!Split(pArg, "@", ppToken, 4, &nNum))
    {
        ALOGE("error! no @ separator!");
        return -1;
    }

    switch (nNum)
    {
        case 1:
            tImage->pImgFile = ppToken[0];
            return 0;
            break;
        case 3:
            tImage->pImgFile = ppToken[0];
            tImage->tImage.eFormat = atoi(ppToken[1]);
            p = ppToken[2];

            tImage->tImage.nStride = strtoul(p, &end, 10);
            if (*end != 'x')
                return -1;
            p = end + 1;
            tImage->tImage.nH = strtoul(p, &end, 10);
            break;
        case 4:
            tImage->pImgFile = ppToken[0];
            tImage->tImage.eFormat = atoi(ppToken[1]);
            p = ppToken[2];

            tImage->tImage.nStride = strtoul(p, &end, 10);
            if (*end != 'x')
                return -1;
            p = end + 1;
            tImage->tImage.nH = strtoul(p, &end, 10);
            p = ppToken[3];
            if (!p)
            {
                ALOGE("Error! p == null!");
                return -1;
            }
            tImage->tRect.nW = strtoul(p, &end, 10);
            if (*end != 'x')
                return -1;
            p = end + 1;
            tImage->tRect.nH = strtoul(p, &end, 10);

            if (*end == '+' || *end == '-')
            {
                p = end + 1;
                tImage->tRect.nX = strtol(p, &end, 10);
                if (*end != '+' && *end != '-')
                    return -1;
                p = end + 1;
                tImage->tRect.nY = strtol(p, &end, 10);
            }
            else
            {
                tImage->tRect.nX = 0;
                tImage->tRect.nY = 0;
            }
            break;
        default:
            ALOGE("nNum:%d is illegal!", nNum);
            return -1;
            break;
    }

    if (*end == '#')
    {
        p = end + 1;
        tImage->nFbcLevel = strtoul(p, &end, 10);
    }
    else
    {
        tImage->nFbcLevel = 0;
    }

    printf("File:%s Format:%d Stride:%d Crop(w:%d h:%d x:%d y:%d) nFbcLevel:%d\n",
           tImage->pImgFile, tImage->tImage.eFormat, tImage->tImage.nStride,
           tImage->tRect.nW, tImage->tRect.nH, tImage->tRect.nX,
           tImage->tRect.nY, tImage->nFbcLevel);
    return 0;
}

char *FrameInfoGet(char *optArg, AX_VIDEO_FRAME_T *ptFrame)
{
    IVPS_IMAGE_INFO_T tImage = {0};

    ImgInfoParse(&tImage, optArg);

    ptFrame->s16CropX = tImage.tRect.nX;
    ptFrame->s16CropY = tImage.tRect.nY;
    ptFrame->s16CropWidth = tImage.tRect.nW;
    ptFrame->s16CropHeight = tImage.tRect.nH;
    ptFrame->enImgFormat = tImage.tImage.eFormat;
    ptFrame->u32PicStride[0] = tImage.tImage.nStride;
    ptFrame->u32Width = tImage.tImage.nStride;
    ptFrame->u32Height = tImage.tImage.nH;
    if (tImage.nFbcLevel)
    {
        ptFrame->stCompressInfo.enCompressMode = AX_COMPRESS_MODE_LOSSY;
        ptFrame->stCompressInfo.u32CompressLevel = tImage.nFbcLevel;
        ptFrame->u32FrameSize = CalcImgSize(ptFrame->u32PicStride[0], ptFrame->u32Width,
                                ptFrame->u32Height, ptFrame->enImgFormat, 0) * tImage.nFbcLevel / 8;
    }
    else
    {
        ptFrame->stCompressInfo.enCompressMode = AX_COMPRESS_MODE_NONE;
        ptFrame->u32FrameSize = CalcImgSize(ptFrame->u32PicStride[0], ptFrame->u32Width,
                                ptFrame->u32Height, ptFrame->enImgFormat, 0);
    }

    ALOGI("ptFrame Width,:%d Height:%d u32FrameSize:%d", ptFrame->u32Width, ptFrame->u32Height, ptFrame->u32FrameSize);
    ALOGI("CROP: X0:%d Y0:%d Width:%d Height:%d", ptFrame->s16CropX, ptFrame->s16CropY,
          ptFrame->s16CropWidth, ptFrame->s16CropHeight);

    ptFrame->u64PTS = 0x2020;
    ptFrame->u64SeqNum = 0;

    return tImage.pImgFile;
}

char *OverlayInfoGet(char *optArg, AX_VIDEO_FRAME_T *ptOverlay)
{
    IVPS_IMAGE_INFO_T tImage = {0};

    ImgInfoParse(&tImage, optArg);

    ptOverlay->s16CropX = tImage.tRect.nX;
    ptOverlay->s16CropY = tImage.tRect.nY;
    ptOverlay->s16CropWidth = tImage.tRect.nW;
    ptOverlay->s16CropHeight = tImage.tRect.nH;
    ptOverlay->enImgFormat = tImage.tImage.eFormat;
    ptOverlay->u32PicStride[0] = tImage.tImage.nStride;
    ptOverlay->u32Width = tImage.tImage.nStride;
    ptOverlay->u32Height = tImage.tImage.nH;
    ALOGI("ptOverlay nW:%d nH:%d", ptOverlay->u32Width, ptOverlay->u32Height);
    ALOGI("CROP X0:%d Y0:%d W:%d H:%d", ptOverlay->s16CropX, ptOverlay->s16CropY,
          ptOverlay->s16CropWidth, ptOverlay->s16CropHeight);

    ptOverlay->u64PTS = 0x20220725;
    ptOverlay->u64SeqNum = 54591234;

    return tImage.pImgFile;
}

int ChnInfoParse(char *optArg, IVPS_CHN_INFO_T *tChnInfo)
{
    char *end, *p = NULL;
    p = optArg;

    tChnInfo->nW = strtoul(p, &end, 10);
    if (*end != 'x')
    {
        ALOGE("no x seprarator");
        return -1;
    }
    p = end + 1;
    tChnInfo->nH = strtoul(p, &end, 10);

    if (!tChnInfo->nW || !tChnInfo->nH)
    {
        ALOGE("nW[%d] or nH[%d] is 0", tChnInfo->nW, tChnInfo->nH);
        return -1;
    }
    return 0;
}

int CropInfoParse(char *optArg, AX_IVPS_CROP_INFO_T *ptCropInfo)
{
    char *p = NULL;
    char *ppToken[4] = {NULL};
    AX_S32 nNum = 0;

    if (!optArg || strlen(optArg) <= 0)
    {
        ALOGE("optArg is NULL!");
        return -1;
    }
    if (!Split(optArg, ":", ppToken, 4, &nNum))
    {
        ALOGE("para is not right!");
        return -1;
    }
    if (nNum != 4)
    {
        ALOGE("crop info nNum[%d] is not 4!", nNum);
        return -1;
    }

    ptCropInfo->tCropRect.nX = atoi(ppToken[0]);
    ptCropInfo->tCropRect.nY = atoi(ppToken[1]);
    ptCropInfo->tCropRect.nW = atoi(ppToken[2]);
    ptCropInfo->tCropRect.nH = atoi(ppToken[3]);

    printf("Crop nX:%d nY:%d nW:%d nH:%d\n", ptCropInfo->tCropRect.nX, ptCropInfo->tCropRect.nY,
           ptCropInfo->tCropRect.nW, ptCropInfo->tCropRect.nH);

    if (ptCropInfo->tCropRect.nW && ptCropInfo->tCropRect.nH)
        ptCropInfo->bEnable = AX_TRUE;
    else
        ptCropInfo->bEnable = AX_FALSE;
    return 0;
}

int ResizeInfoParse(char *optArg, IVPS_RESIZE_ATTR_T *ptResizeAttr)
{
    char *p = NULL;
    char *ppToken[4] = {NULL};
    AX_S32 nNum = 0;

    if (!optArg || strlen(optArg) <= 0)
    {
        ALOGE("optArg is NULL!");
        return -1;
    }
    if (!Split(optArg, ":", ppToken, 4, &nNum))
    {
        ALOGE("para is not right!");
        return -1;
    }
    if (nNum == 4)
    {
        ptResizeAttr->nSclType = atoi(ppToken[0]);
        ptResizeAttr->nAspectMode = atoi(ppToken[1]);
        ptResizeAttr->nBGColor = strtol(ppToken[2], NULL, 16);
        ptResizeAttr->nDstFormat = atoi(ppToken[3]);
    }
    else if (nNum == 3)
    {
        ptResizeAttr->nSclType = atoi(ppToken[0]);
        ptResizeAttr->nAspectMode = atoi(ppToken[1]);
        ptResizeAttr->nBGColor = strtol(ppToken[2], NULL, 16);
    }
    else
    {
        ALOGE("nNum[%d] is not 3 or 4!", nNum);
        return -1;
    }

    printf("nNum[%d] nSclType:%d nAspectMode:%d nBGColor:0x%x [nDstFormat:0x%x]\n", nNum,
           ptResizeAttr->nSclType, ptResizeAttr->nAspectMode,
           ptResizeAttr->nBGColor, ptResizeAttr->nDstFormat);

    return 0;
}

int LdcInfoParse(char *optArg, AX_IVPS_LDC_ATTR_T *tLdcAttr, AX_U8 *nFilterId)
{
    char *p = NULL;
    char *ppToken[5] = {NULL};
    AX_S32 nNum = 0;

    if (!optArg || strlen(optArg) <= 0)
    {
        ALOGE("optArg is NULL!");
        return -1;
    }
    if (!Split(optArg, ":", ppToken, 5, &nNum))
    {
        ALOGE("para is not right!");
        return -1;
    }
    if (nNum == 5)
    {
        tLdcAttr->nXRatio = atoi(ppToken[0]);
        tLdcAttr->nYRatio = atoi(ppToken[1]);
        tLdcAttr->nDistortionRatio = atoi(ppToken[2]);
        tLdcAttr->nSpreadCoef = atoi(ppToken[3]);
        *nFilterId = atoi(ppToken[4]);
    }
    else if (nNum == 4)
    {
        tLdcAttr->nXRatio = atoi(ppToken[0]);
        tLdcAttr->nYRatio = atoi(ppToken[1]);
        tLdcAttr->nDistortionRatio = atoi(ppToken[2]);
        tLdcAttr->nSpreadCoef = atoi(ppToken[3]);
    }
    else
    {
        ALOGE("nNum[%d] is not 4 or 5!", nNum);
        return -1;
    }

    printf("nXRatio:%d nYRatio:%d nDistortionRatio:%d nSpreadCoef:%d [nFilterId:%d]\n",
           tLdcAttr->nXRatio, tLdcAttr->nYRatio, tLdcAttr->nDistortionRatio,
           tLdcAttr->nSpreadCoef, *nFilterId);

    return 0;
}

AX_S32 FrameBufGet(AX_S32 nFrameIdx, AX_VIDEO_FRAME_T *ptImage, char *pImgFile)
{

    if (!pImgFile)
    {
        ALOGE("pImgFile is NULL!");
        return -1;
    }

    if (!LoadImageExt(-1, pImgFile, nFrameIdx * ptImage->u32FrameSize, ptImage->u32FrameSize, &ptImage->u32BlkId[0],
                      AX_FALSE, &ptImage->u64PhyAddr[0], (AX_VOID **)&ptImage->u64VirAddr[0]))
    {
        ALOGE("LoadImageExt error!");
        return -1;
    }
    ALOGI("VirAddr:0x%x VirAddr_UV:0x%x", (AX_U32)ptImage->u64VirAddr[0], (AX_U32)ptImage->u64VirAddr[1]);

    return 0;
}

int IVPS_FrameDataCreate(char *pFrameInfo, char **pImgFile, AX_VIDEO_FRAME_T *ptImage, AX_BOOL bPoolBuf)
{
    int ret;
    AX_U32 *pBlkId = NULL;

    *pImgFile = FrameInfoGet(pFrameInfo, ptImage);
    if (bPoolBuf)
        pBlkId = &ptImage->u32BlkId[0];
    printf("nImageSize:%d\n", ptImage->u32FrameSize);

    if (!(*pImgFile) || access(*pImgFile, 0))
    {
        printf("FILE:%s not accessed, autogen test pattern!\n", *pImgFile);
        ret = PatternAutoGen(-1, ptImage->enImgFormat, ptImage->u32PicStride[0],
                             ptImage->u32Width, ptImage->u32Height,
                             pBlkId, &ptImage->u64PhyAddr[0],
                             (AX_VOID **)&ptImage->u64VirAddr[0]);
        if (0 != ret) {
            ALOGE("PatternAutoGen fail, ret=0x%x", ret);
            return ret;
        }
        printf("CMM:u64PhyAddr [0]:0x%llx [1]:0x%llx\n", ptImage->u64PhyAddr[0], ptImage->u64PhyAddr[1]);
        return 0;
    }

    if (!LoadImageExt(-1, *pImgFile, 0, ptImage->u32FrameSize, pBlkId,
                      AX_FALSE, &ptImage->u64PhyAddr[0], (AX_VOID **)&ptImage->u64VirAddr[0]))
    {
        ALOGE("LoadImageExt error!");
        return -1;
    }
    printf("POOL:u64PhyAddr [0]:0x%llx [1]:0x%llx\n", ptImage->u64PhyAddr[0], ptImage->u64PhyAddr[1]);

    return 0;
}

int IVPS_FrameDataDestroy(AX_VIDEO_FRAME_T *ptImage, AX_BOOL bPoolBuf)
{
    int ret;

    if (bPoolBuf)
    {
        if (!ptImage->u32BlkId[0])
        {
            ALOGW("Blk is released!");
            return 0;
        }
        ret = AX_POOL_ReleaseBlock(ptImage->u32BlkId[0]);
        if (ret)
        {
            ALOGE("IVPS Release Overlay BlkId fail, ret=0x%x", ret);
            return ret;
        }
    }
    else
    {
        if (!ptImage->u64PhyAddr[0])
        {
            ALOGW("Addr is released!");
            return 0;
        }
        IVPS_MEM_FREE(ptImage->u64PhyAddr[0], ptImage->u64VirAddr[0]);
    }
    return 0;
}

/*
 * ByteReverse()
 * Arrange each bit in reverse order for one byte.
 */
AX_S32 ByteReverse(AX_U8 *ptBitmap, AX_S32 nSize)
{
    int idx;
    unsigned char data;
    for (idx = 0; idx < nSize; idx++)
    {
        data = *(ptBitmap + idx);
        data = (data & 0x55) << 1 | (data & 0xAA) >> 1; // swap 12,34,56,78
        data = (data & 0x33) << 2 | (data & 0xCC) >> 2; // swap (21 43),(65 87)
        data = (data & 0x0F) << 4 | (data & 0xF0) >> 4; // swap 4bit
        *(ptBitmap + idx) = data;
    }
    return IVPS_SUCC;
}

AX_VOID IVPS_FramePrint(const AX_VIDEO_FRAME_T *p, char *key_str)
{
	printf("%s\n", key_str);
    printf("u32PicStride:%d u32Width:%d Height:%d\n", p->u32PicStride[0], p->u32Width, p->u32Height);
	printf("enImgFormat:0x%x FBC(en:%d level:%d)\n", p->enImgFormat, p->stCompressInfo.enCompressMode, p->stCompressInfo.u32CompressLevel);
	printf("Crop(X:%d Y:%d W:%d H:%d)\n", p->s16CropX, p->s16CropWidth, p->s16CropY, p->s16CropHeight);
	printf("Addr [0]:0x%llx [1]:0x%llx\n", p->u64PhyAddr[0], p->u64PhyAddr[1]);
}

#define det3(m)                                           \
    (m[0] * ((double)m[4] * m[8] - (double)m[5] * m[7]) - \
     m[1] * ((double)m[3] * m[8] - (double)m[5] * m[6]) + \
     m[2] * ((double)m[3] * m[7] - (double)m[4] * m[6]))

void IVPS_MatrixInverse(double Sd[], double *Dd)
{
    double d = det3(Sd);
    printf("*det3:%f\n", d);
    *Dd = (Sd[4] * Sd[8] - Sd[5] * Sd[7]) * d;
    printf("*Dd[0]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[2] * Sd[7] - Sd[1] * Sd[8]) * d;
    printf("*Dd[1]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[1] * Sd[5] - Sd[2] * Sd[4]) * d;
    printf("*Dd[2]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[5] * Sd[6] - Sd[3] * Sd[8]) * d;
    printf("*Dd[3]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[0] * Sd[8] - Sd[2] * Sd[6]) * d;
    printf("*Dd[4]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[2] * Sd[3] - Sd[0] * Sd[5]) * d;
    printf("*Dd[5]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[3] * Sd[7] - Sd[4] * Sd[6]) * d;
    printf("*Dd[6]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[1] * Sd[6] - Sd[0] * Sd[7]) * d;
    printf("*Dd[7]:%f\n", *Dd);
    Dd++;
    *Dd = (Sd[0] * Sd[4] - Sd[1] * Sd[3]) * d;
    printf("*Dd[8]:%f\n", *Dd);
}

static void IVPS_RGB24ToNV12(AX_U8 *rgb, AX_U8 *nv12, int w, int h)
{
	AX_U8 *u, *v, *y, *uu, *vv;
	AX_U8 *pu1, *pu2, *pu3, *pu4;
	AX_U8 *pv1, *pv2, *pv3, *pv4;
	AX_U8 *r, *g, *b;
	AX_U8 *uv;
	int i, j;

	y = nv12;
	u = uu = nv12 + 2 * w * h;
	v = vv = nv12 + 3 * w * h;

	r = rgb;
	g = rgb + 1;
	b = rgb + 2;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			*y = (AX_U8)((66 * (*r) + 129 * (*g) + 25 * (*b) + 128) >> 8) + 16;
			*y = (AX_U8)((*y < 0) ? 0 : ((*y > 255) ? 255 : *y));
			y++;
			*u++ = (AX_U8)((-38 * (*r) - 74 * (*g) + 112 * (*b) + 128) >> 8) + 128;
			*v++ = (AX_U8)((112 * (*r) - 94 * (*g) - 18 * (*b) + 128) >> 8) + 128;
			r += 3;
			g += 3;
			b += 3;
		}
	}

	/*
     * Now sample the U & V to obtain YUV 4:2:0 format
	 * Sampling mechanism...
	 *  @ -> Y
        # -> U or V
        @ @ @ @
        @ @ @ @
        # #
        # #
    */

	/* Get the right pointers */
	uv = nv12 + w * h;
	/* For U */
	pu1 = uu;
	pu2 = pu1 + 1;
	pu3 = pu1 + w;
	pu4 = pu3 + 1;

	/* For V */
	pv1 = vv;
	pv2 = pv1 + 1;
	pv3 = pv1 + w;
	pv4 = pv3 + 1;

	/* Do sampling */
	for (i = 0; i < h; i += 2)
	{
		for (j = 0; j < w; j += 2)
		{
			*uv++ = (*pu1 + *pu2 + *pu3 + *pu4) >> 2;
			*uv++ = (*pv1 + *pv2 + *pv3 + *pv4) >> 2;
			pu1 += 2;
			pu2 += 2;
			pu3 += 2;
			pu4 += 2;

			pv1 += 2;
			pv2 += 2;
			pv3 += 2;
			pv4 += 2;
		}
		pu1 += w;
		pu2 += w;
		pu3 += w;
		pu4 += w;
		pv1 += w;
		pv2 += w;
		pv3 += w;
		pv4 += w;
	}
}

static void IVPS_NV12ToYUYV(AX_U8 *nv12, AX_U8 *yuyv, int width, int height, int stride)
{
	int i, j;
	int yuv422_stride = stride * 2;
	/* Configure the Y U V data location of the NV12 */
	AX_U8 *y = NULL;  /* Y location where the data is stored */
	AX_U8 *uv = NULL; /* UV location where the data is stored */
	AX_U8 *yuyv1 = NULL;
	/* Data conversion: Two rows of pixels are processed together */
	for (i = 0; i < height; i += 2)
	{

		/* First line, 2 pixels processed together, 1 byte per pixel */
		y = nv12 + i * stride;							/* Y location where the data is stored */
		uv = nv12 + stride * height + (i >> 1) * stride; /* UV location where the data is stored */
		yuyv1 = yuyv + i * yuv422_stride;
		for (j = 0; j < width; j += 2)
		{
			yuyv1[j * 2] = *(uv + j + 1);	 /* v1 */
			yuyv1[j * 2 + 1] = *(y + j + 1); /* y1 */
			yuyv1[j * 2 + 2] = *(uv + j);	 /* u0 */
			yuyv1[j * 2 + 3] = *(y + j);	 /* y0 */
		}

		/* Second line, 2 pixels are processed together, each pixel is 1 byte */
		y = nv12 + (i + 1) * stride;
		yuyv1 = yuyv + (i + 1) * yuv422_stride;
		for (j = 0; j < width; j += 2)
		{
			yuyv1[j * 2] = *(uv + j + 1);	/* v1 */
			yuyv1[j * 2 + 1] = *(y + j + 1); /* y1 */
			yuyv1[j * 2 + 2] = *(uv + j);	/* u0 */
			yuyv1[j * 2 + 3] = *(y + j);		/* y0 */
		}
	}
}