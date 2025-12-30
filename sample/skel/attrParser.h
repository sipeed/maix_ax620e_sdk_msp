/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef _ATTR_PARSER_H_
#define _ATTR_PARSER_H_
#include "ax_global_type.h"
#include "ax_sys_api.h"
#include "ax_skel_api.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum _ATTR_TYPE_E {
    ATTR_TYPE_BODY = 0,
    ATTR_TYPE_VEHICLE,
    ATTR_TYPE_CYCLE,
    ATTR_TYPE_FACE,
    ATTR_TYPE_PLATE,
    ATTR_TYPE_GESTURE,
    ATTR_TYPE_EBIKE,
    ATTR_TYPE_PACKAGE,
    ATTR_TYPE_BUTT
} ATTR_TYPE_E;

typedef struct _FACEINFO_T {
    AX_U8   nGender; /* 0-female, 1-male */
    AX_U8   nAge;
    AX_CHAR szMask[32];
    AX_CHAR szGender[32];
} FACEINFO_T;

typedef struct _PLATEINFO_T {
    AX_BOOL bValid;
    AX_F32 fScore;
    AX_CHAR szNum[16];
    AX_CHAR szColor[32];
} PLATEINFO_T;

typedef struct _GDINFO_T {
    AX_BOOL bValid;
    AX_F32 fScore;
    AX_CHAR szType[32];
} GDINFO_T;

typedef struct _EBIKEINFO_T {
    AX_BOOL bValid;
    AX_F32 fScore;
    AX_CHAR szType[32];
} EBIKEINFO_T;

typedef struct _PACKAGEINFO_T {
    AX_BOOL bValid;
    AX_F32 fScore;
    AX_CHAR szType[32];
} PACKAGEINFO_T;

typedef struct _ATTRINFO_T {
    ATTR_TYPE_E eType; /* ATTR_TYPE_E */
    AX_BOOL bExist;

    union
    {
        FACEINFO_T tFaceInfo;
        PLATEINFO_T tPlateInfo;
        GDINFO_T tGdInfo;
        EBIKEINFO_T tEbikeInfo;
        PACKAGEINFO_T tPackageInfo;
    };
} ATTRINFO_T;

extern AX_VOID AttrParser(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo);

#ifdef __cplusplus
}
#endif

#endif
