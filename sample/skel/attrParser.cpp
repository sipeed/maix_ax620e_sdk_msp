/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#include "attrParser.h"
#include "picojson.h"

#define PICO_OBJECT get<picojson::object>()
#define PICO_OBJECT_SIZE PICO_OBJECT.size()
#define PICO_ARRAY get<picojson::array>()
#define PICO_ARRAY_SIZE PICO_ARRAY.size()
#define PICO_VALUE get<double>()
#define PICO_BOOL get<bool>()
#define PICO_STRING get<std::string>()
#define PICO_ROOT obj.PICO_OBJECT

typedef struct _AI_Plate_Attr_t {
    AX_BOOL bExist;
    AX_BOOL bValid;
    AX_F32 fScore;
    /*
    string:
        blue
        yellow
        black
        white
        green
        small_new_energy
        large_new_energy
        absence
        unknown
    */
    std::string strPlateColor;
    /*
    string:
        one_row
        two_rows
        unknown
    */
    std::string strPlateType;
    /* string: UTF8*/
    std::string strPlateCode;

    _AI_Plate_Attr_t() {
        bExist = AX_FALSE;
        bValid = AX_FALSE;
        fScore = 0;
        strPlateColor = "";
        strPlateType = "";
        strPlateCode = "";
    }
} AI_Plate_Attr_t;

typedef struct _AI_Gesture_Attr_t {
    AX_BOOL bExist;
    AX_BOOL bValid;
    AX_F32 fScore;
    /*
    string:
        phone
        ok
    */
    std::string strGdType;

    _AI_Gesture_Attr_t() {
        bExist = AX_FALSE;
        bValid = AX_FALSE;
        fScore = 0;
        strGdType = "";
    }
} AI_Gesture_Attr_t;

typedef struct _AI_Ebike_Attr_t {
    AX_BOOL bExist;
    AX_BOOL bValid;
    AX_F32 fScore;
    /*
    string:
        bike
        emotor
    */
    std::string strEbikeType;

    _AI_Ebike_Attr_t() {
        bExist = AX_FALSE;
        bValid = AX_FALSE;
        fScore = 0;
        strEbikeType = "";
    }
} AI_Ebike_Attr_t;

typedef struct _AI_Package_Attr_t {
    AX_BOOL bExist;
    AX_BOOL bValid;
    AX_F32 fScore;
    /*
    string:
        box
        bag
    */
    std::string strPackageType;

    _AI_Package_Attr_t() {
        bExist = AX_FALSE;
        bValid = AX_FALSE;
        fScore = 0;
        strPackageType = "";
    }
} AI_Package_Attr_t;

static AX_VOID FaceAttrResult(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    pAttrInfo->eType = ATTR_TYPE_FACE;
    pAttrInfo->bExist = AX_TRUE;

    if (pstObjectItems->bFaceAttr) {
        pAttrInfo->tFaceInfo.nAge = pstObjectItems->stFaceAttr.nAge;
        pAttrInfo->tFaceInfo.nGender = pstObjectItems->stFaceAttr.nGender;

        if (pstObjectItems->stFaceAttr.nAge == 0) {
            strcpy(pAttrInfo->tFaceInfo.szGender, "female");
        } else {
            strcpy(pAttrInfo->tFaceInfo.szGender, "male");
        }

        if (pstObjectItems->stFaceAttr.nMask == 0) {
            strcpy(pAttrInfo->tFaceInfo.szMask, "no");
        } else {
            strcpy(pAttrInfo->tFaceInfo.szMask, "yes");
        }
    } else {
        strcpy(pAttrInfo->tFaceInfo.szGender, "unknown");
        strcpy(pAttrInfo->tFaceInfo.szMask, "unknown");
    }
}

static AX_VOID PlateAttrResult(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    picojson::value obj;
    AI_Plate_Attr_t plat_attr;

    pAttrInfo->eType = ATTR_TYPE_PLATE;

    plat_attr.bExist = AX_FALSE;
    plat_attr.bValid = AX_FALSE;
    plat_attr.strPlateColor = "";
    plat_attr.strPlateType = "";
    plat_attr.strPlateCode = "";

    for (size_t i = 0; i < pstObjectItems->nMetaInfoSize; i++) {
        if (!strcmp(pstObjectItems->pstMetaInfo[i].pstrType, "plate_attr")) {
            std::string value = pstObjectItems->pstMetaInfo[i].pstrValue;
            std::string strParseRet = picojson::parse(obj, value);
            if (!strParseRet.empty() || !obj.is<picojson::object>()) {
                break;
            }

            plat_attr.bExist = AX_TRUE;
            // color
            plat_attr.strPlateColor = "unknown";
            if (PICO_ROOT.end() != PICO_ROOT.find("color")) {
                plat_attr.strPlateColor = PICO_ROOT["color"].PICO_OBJECT["name"].PICO_STRING;
            }

            // style
            plat_attr.strPlateType = "unknown";
            if (PICO_ROOT.end() != PICO_ROOT.find("style")) {
                plat_attr.strPlateType = PICO_ROOT["style"].PICO_OBJECT["name"].PICO_STRING;
            }

            // code
            plat_attr.strPlateCode = PICO_ROOT["code_result"].PICO_STRING;

            if (PICO_ROOT["code_killed"].PICO_BOOL) {
                plat_attr.bValid = AX_FALSE;
            } else {
                plat_attr.bValid = AX_TRUE;
            }

            // score
            plat_attr.fScore = PICO_ROOT["code_confidence"].PICO_VALUE;

            pAttrInfo->bExist = AX_TRUE;

            pAttrInfo->tPlateInfo.fScore = plat_attr.fScore;

            strncpy(pAttrInfo->tPlateInfo.szColor, (const AX_CHAR *)plat_attr.strPlateColor.c_str(), sizeof(pAttrInfo->tPlateInfo.szColor) - 1);

            pAttrInfo->tPlateInfo.bValid = plat_attr.bValid;
            strncpy(pAttrInfo->tPlateInfo.szNum, (const AX_CHAR *)plat_attr.strPlateCode.c_str(), sizeof(pAttrInfo->tPlateInfo.szNum) - 1);
        }
    }
}

static AX_VOID VehicleAttrResult(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    picojson::value obj;
    AI_Plate_Attr_t plat_attr;

    pAttrInfo->eType = ATTR_TYPE_VEHICLE;

    plat_attr.bExist = AX_FALSE;
    plat_attr.bValid = AX_FALSE;
    plat_attr.strPlateColor = "";
    plat_attr.strPlateType = "";
    plat_attr.strPlateCode = "";

    for (size_t i = 0; i < pstObjectItems->nMetaInfoSize; i++) {
        if (!strcmp(pstObjectItems->pstMetaInfo[i].pstrType, "plate_attr")) {
            std::string value = pstObjectItems->pstMetaInfo[i].pstrValue;
            std::string strParseRet = picojson::parse(obj, value);
            if (!strParseRet.empty() || !obj.is<picojson::object>()) {
                break;
            }

            plat_attr.bExist = AX_TRUE;
            // color
            plat_attr.strPlateColor = "unknown";
            if (PICO_ROOT.end() != PICO_ROOT.find("color")) {
                plat_attr.strPlateColor = PICO_ROOT["color"].PICO_OBJECT["name"].PICO_STRING;
            }

            // style
            plat_attr.strPlateType = "unknown";
            if (PICO_ROOT.end() != PICO_ROOT.find("style")) {
                plat_attr.strPlateType = PICO_ROOT["style"].PICO_OBJECT["name"].PICO_STRING;
            }

            // code
            plat_attr.strPlateCode = PICO_ROOT["code_result"].PICO_STRING;

            if (PICO_ROOT["code_killed"].PICO_BOOL) {
                plat_attr.bValid = AX_FALSE;
            } else {
                plat_attr.bValid = AX_TRUE;
            }

            // score
            plat_attr.fScore = PICO_ROOT["code_confidence"].PICO_VALUE;

            pAttrInfo->bExist = AX_TRUE;

            pAttrInfo->tPlateInfo.fScore = plat_attr.fScore;

            strncpy(pAttrInfo->tPlateInfo.szColor, (const AX_CHAR *)plat_attr.strPlateColor.c_str(), sizeof(pAttrInfo->tPlateInfo.szColor) - 1);

            pAttrInfo->tPlateInfo.bValid = plat_attr.bValid;
            strncpy(pAttrInfo->tPlateInfo.szNum, (const AX_CHAR *)plat_attr.strPlateCode.c_str(), sizeof(pAttrInfo->tPlateInfo.szNum) - 1);
        }
    }
}

static AX_VOID GestureAttrResult(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    picojson::value obj;
    AI_Gesture_Attr_t gesture_attr;

    pAttrInfo->eType = ATTR_TYPE_GESTURE;

    gesture_attr.bExist = AX_FALSE;
    gesture_attr.bValid = AX_FALSE;
    gesture_attr.strGdType = "";

    for (size_t i = 0; i < pstObjectItems->nMetaInfoSize; i++) {
        if (!strcmp(pstObjectItems->pstMetaInfo[i].pstrType, "gd_attr")) {
            std::string value = pstObjectItems->pstMetaInfo[i].pstrValue;
            std::string strParseRet = picojson::parse(obj, value);
            if (!strParseRet.empty() || !obj.is<picojson::object>()) {
                break;
            }

            gesture_attr.bExist = AX_TRUE;
            gesture_attr.bValid = AX_TRUE;

            // type
            gesture_attr.strGdType = PICO_ROOT["category"].PICO_STRING;

            // score
            gesture_attr.fScore = PICO_ROOT["score"].PICO_VALUE;

            pAttrInfo->bExist = AX_TRUE;

            pAttrInfo->tGdInfo.bValid = gesture_attr.bValid;
            pAttrInfo->tGdInfo.fScore = gesture_attr.fScore;
            strncpy(pAttrInfo->tGdInfo.szType, (const AX_CHAR *)gesture_attr.strGdType.c_str(), sizeof(pAttrInfo->tPlateInfo.szColor) - 1);
        }
    }
}

static AX_VOID EbikeAttrResult(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    picojson::value obj;
    AI_Ebike_Attr_t ebike_attr;

    pAttrInfo->eType = ATTR_TYPE_EBIKE;

    ebike_attr.bExist = AX_FALSE;
    ebike_attr.bValid = AX_FALSE;
    ebike_attr.strEbikeType = "";

    for (size_t i = 0; i < pstObjectItems->nMetaInfoSize; i++) {
        if (!strcmp(pstObjectItems->pstMetaInfo[i].pstrType, "ebike_attr")) {
            std::string value = pstObjectItems->pstMetaInfo[i].pstrValue;
            std::string strParseRet = picojson::parse(obj, value);
            if (!strParseRet.empty() || !obj.is<picojson::object>()) {
                break;
            }

            ebike_attr.bExist = AX_TRUE;
            ebike_attr.bValid = AX_TRUE;

            // type
            ebike_attr.strEbikeType = PICO_ROOT["category"].PICO_STRING;

            // score
            ebike_attr.fScore = PICO_ROOT["score"].PICO_VALUE;

            pAttrInfo->bExist = AX_TRUE;

            pAttrInfo->tEbikeInfo.bValid = ebike_attr.bValid;
            pAttrInfo->tEbikeInfo.fScore = ebike_attr.fScore;
            strncpy(pAttrInfo->tEbikeInfo.szType, (const AX_CHAR *)ebike_attr.strEbikeType.c_str(), sizeof(pAttrInfo->tPlateInfo.szColor) - 1);
        }
    }
}

static AX_VOID PackageAttrResult(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    picojson::value obj;
    AI_Package_Attr_t package_attr;

    pAttrInfo->eType = ATTR_TYPE_PACKAGE;

    package_attr.bExist = AX_FALSE;
    package_attr.bValid = AX_FALSE;
    package_attr.strPackageType = "";

    for (size_t i = 0; i < pstObjectItems->nMetaInfoSize; i++) {
        if (!strcmp(pstObjectItems->pstMetaInfo[i].pstrType, "package_attr")) {
            std::string value = pstObjectItems->pstMetaInfo[i].pstrValue;
            std::string strParseRet = picojson::parse(obj, value);
            if (!strParseRet.empty() || !obj.is<picojson::object>()) {
                break;
            }

            package_attr.bExist = AX_TRUE;
            package_attr.bValid = AX_TRUE;

            // type
            package_attr.strPackageType = PICO_ROOT["category"].PICO_STRING;

            // score
            package_attr.fScore = PICO_ROOT["score"].PICO_VALUE;

            pAttrInfo->bExist = AX_TRUE;

            pAttrInfo->tPackageInfo.bValid = package_attr.bValid;
            pAttrInfo->tPackageInfo.fScore = package_attr.fScore;
            strncpy(pAttrInfo->tPackageInfo.szType, (const AX_CHAR *)package_attr.strPackageType.c_str(), sizeof(pAttrInfo->tPlateInfo.szColor) - 1);
        }
    }
}

AX_VOID AttrParser(const AX_SKEL_OBJECT_ITEM_T *pstObjectItems, ATTRINFO_T *pAttrInfo) {
    if (!pstObjectItems || !pAttrInfo) {
        return;
    }

    pAttrInfo->bExist = AX_FALSE;
    pAttrInfo->eType = ATTR_TYPE_BUTT;

    std::string strObjectCategory = pstObjectItems->pstrObjectCategory;

    if (strObjectCategory == "face") {
        FaceAttrResult(pstObjectItems, pAttrInfo);
    }
    else if (strObjectCategory == "plate") {
        PlateAttrResult(pstObjectItems, pAttrInfo);
    }
    else if (strObjectCategory == "vehicle") {
        VehicleAttrResult(pstObjectItems, pAttrInfo);
    }
    else if (strObjectCategory == "gesture") {
        GestureAttrResult(pstObjectItems, pAttrInfo);
    }
    else if (strObjectCategory == "ebike") {
        EbikeAttrResult(pstObjectItems, pAttrInfo);
    }
    else if (strObjectCategory == "package") {
        PackageAttrResult(pstObjectItems, pAttrInfo);
    }
}
