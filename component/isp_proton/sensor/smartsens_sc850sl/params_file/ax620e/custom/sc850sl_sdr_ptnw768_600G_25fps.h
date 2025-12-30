#ifndef __SC850SL_SDR_H__
#define __SC850SL_SDR_H__

/********************************************************************
* Store the default parameters of the sdr mode
* warn: user need to add 'static' when defining global variables.
        Limit the scope of the variable to this sensor
*********************************************************************/

#include "ax_isp_iq_api.h"
#include "ax_isp_api.h"


const static AX_ISP_VERSION_T ax_isp_version_param_sdr = {
    /* nIspMajor */
    4,
    /* nIspMinor1 */
    0,
    /* nIspMinor2 */
    39,
    /* szBuildTime */
    "",
    /* szIspVersion */
    "AX620E_ISP_V4.0.39",
};

const static AX_ISP_IQ_SCENE_PARAM_T scene_param_sdr = {
    /* nAutoMode */
    0,
    /* tManualParam */
    {
        /* nAiWorkMode */
        1,
    },
    /* tAutoParam */
    {
        /* nSceneNum */
        2,
        /* nDelta */
        10,
        /* nRefValStart[4] */
        {1024, 2048, /*0 - 1*/},
        /* nRefValEnd[4] */
        {2048, 4193280, /*0 - 1*/},
        /* nAiWorkMode[4] */
        {0, 1, /*0 - 1*/},
    },
};

const static AX_ISP_IQ_AE_PARAM_T ae_param_sdr = {
    /* nEnable */
    1,
    /* tExpManual */
    {
        /* nIspGain */
        10568,
        /* nAGain */
        50799,
        /* nDgain */
        1024,
        /* nHcgLcg */
        2,
        /* nSnsTotalAGain */
        50799,
        /* nSysTotalGain */
        524267,
        /* nShutter */
        83303,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        0,
        /* nHdrRealRatioLtoS */
        1024,
        /* nHdrRealRatioStoVS */
        1024,
        /* nSetPoint */
        44161,
        /* nShortAgain */
        0,
        /* nShortDgain */
        0,
        /* nShortShutter */
        0,
        /* nVsAgain */
        0,
        /* nVsDgain */
        0,
        /* nVsShutter */
        0,
        /* nHdrRatio */
        1024,
        /* nHdrMaxShutterHwLimit */
        970829,
        /* nRealMaxShutter */
        83333,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        20480,
        /* nFaceTarget */
        35840,
        /* nVehicleTarget */
        35840,
        /* nTolerance */
        5242880,
        /* nAgainLcg2HcgTh */
        6451,
        /* nAgainHcg2LcgTh */
        1229,
        /* nAgainLcg2HcgRatio */
        1024,
        /* nAgainHcg2LcgRatio */
        1024,
        /* nLuxk */
        28313,
        /* nCompensationMode */
        1,
        /* nMaxIspGain */
        42270,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        1024,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        50800,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        1048576,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        83333,
        /* nMinShutter */
        29,
        /* nPositionWeightMode */
        1,
        /* nRoiStartX */
        0,
        /* nRoiStartY */
        0,
        /* nRoiWidth */
        0,
        /* nRoiHeight */
        0,
        /* nWeightRoi */
        1024,
        /* nWeightBackgnd */
        1024,
        /* nGridWeightRow */
        15,
        /* nGridWeightColumn */
        17,
        /* nGridWeightTable[54][72] */
        {
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 512, 512, 512, 512, 512, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 512, 512, 512, 512, 512, 512, 512, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 512, 512, 512, 768, 768, 768, 512, 512, 512, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 512, 512, 512, 768, 768, 1024, 768, 768, 512, 512, 512, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 512, 512, 768, 768, 1024, 1024, 1024, 768, 768, 512, 512, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 512, 512, 512, 768, 768, 1024, 768, 768, 512, 512, 512, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 512, 512, 512, 768, 768, 768, 512, 512, 512, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 512, 512, 512, 512, 512, 512, 512, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 512, 512, 512, 512, 512, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
        },
        /* tAntiFlickerParam */
        {
            /* nAntiFlickerMode */
            0,
            /* nFlickerPeriod */
            0,
            /* tAntiFlickerToleranceCurve */
            {
                /* nSize */
                2,
                /* nRefList[12] */
                {102400, 204800, /*0 - 1*/},
                /* nAntiFlickerToleranceList[12] */
                {114, 10, /*0 - 1*/},
            },
            /* nOverExpMode */
            1,
            /* nUnderExpMode */
            1,
        },
        /* tAutoFlickerDetectParam */
        {
            /* nFlickerValidNum */
            5,
            /* tFlickerParamCurve */
            {
                /* nSize */
                6,
                /* nRefList[12] */
                {25600, 51200, 204800, 512000, 716800, 2048000, /*0 - 5*/},
                /* nFlickerValidThList[12] */
                {2048, 2560, 5120, 5120, 30720, 30720, /*0 - 5*/},
                /* nFlickerTrigTimeList[12] */
                {200, 200, 200, 200, 200, 200, /*0 - 5*/},
            },
            /* nSkipTh */
            2,
            /* nUpSlopeTh */
            1536,
            /* nDownSlopeTh */
            -1024,
        },
        /* nSetPointMode */
        2,
        /* nFaceTargetMode */
        0,
        /* nVehicleTargetMode */
        0,
        /* nStrategyMode */
        2,
        /* nAeRouteMode */
        0,
        /* tAeRouteParam */
        {
            /* nTableNum */
            2,
            /* nUsedTableId */
            0,
            /* tRouteTable[8] */
            {
                /* 0 */
                {
                    /* sTableName[32] */
                    "DefaultAeRoute",
                    /* nRouteCurveNum */
                    5,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            20,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 1 */
                        {
                            /* nIntergrationTime */
                            40000,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            40000,
                            /* nGain */
                            16384,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            83333,
                            /* nGain */
                            16384,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            83333,
                            /* nGain */
                            1048576,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                    },
                },
                /* 1 */
                {
                    /* sTableName[32] */
                    "PirisAeRoute",
                    /* nRouteCurveNum */
                    5,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            40,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 1 */
                        {
                            /* nIntergrationTime */
                            40,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            39940,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            39940,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            39940,
                            /* nGain */
                            1048576,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                    },
                },
                /* 1 */
                {
                    /* sTableName[32] */
                    "",
                    /* nRouteCurveNum */
                    2,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            40,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 1 */
                        {
                            /* nIntergrationTime */
                            39888,
                            /* nGain */
                            1024000,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                    },
                },
                /* 2 */
                {
                    /* sTableName[32] */
                    "PirisAeRoute",
                    /* nRouteCurveNum */
                    5,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            40,
                            /* nGain */
                            1024,
                            /* nAperture */
                            5,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 1 */
                        {
                            /* nIntergrationTime */
                            40,
                            /* nGain */
                            1024,
                            /* nAperture */
                            296,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            39888,
                            /* nGain */
                            1024,
                            /* nAperture */
                            296,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            39888,
                            /* nGain */
                            1024,
                             /* nAperture */
                            512,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            39888,
                            /* nGain */
                            1024000,
                            /* nAperture */
                            512,
                            /* nIncrementPriority */
                            0,
                        },
                    },
                },
            },
        },
        /* tAeRouteAdvanceTable */
        {
            /* sAdvanceTableName[32] */
            "AeRouteAdvance",
            /* nRouteAdvanceCurveNum */
            5,
            /* tRouteAdvanceCurveList[16] */
            {
                /* 0 */
                {
                    /* nIntergrationTime */
                    40,
                    /* nTotalAGain */
                    1024,
                    /* nDGain */
                    1024,
                    /* nIspGain */
                    1024,
                },
                /* 1 */
                {
                    /* nIntergrationTime */
                    39500,
                    /* nTotalAGain */
                    1024,
                    /* nDGain */
                    1024,
                    /* nIspGain */
                    1024,
                },
                /* 2 */
                {
                    /* nIntergrationTime */
                    39500,
                    /* nTotalAGain */
                    1024,
                    /* nDGain */
                    1024,
                    /* nIspGain */
                    2048,
                },
                /* 3 */
                {
                    /* nIntergrationTime */
                    39500,
                    /* nTotalAGain */
                    69632,
                    /* nDGain */
                    1024,
                    /* nIspGain */
                    2048,
                },
                /* 4 */
                {
                    /* nIntergrationTime */
                    39500,
                    /* nTotalAGain */
                    69632,
                    /* nDGain */
                    1024,
                    /* nIspGain */
                    524288,
                },
            },
        },
        /* tAeSetPointCurve */
        {
            /* nSize */
            10,
            /* nRefList[10] */
            {512, 5120, 25600, 51200, 102400, 512000, 1024000, 2048000, 5120000, 10240000, /*0 - 9*/},
            /* nSetPointList[10] */
            {20480, 21504, 22528, 23552, 25600, 26624, 28672, 30720, 32768, 34816, /*0 - 9*/},
        },
        /* tFaceUIParam */
        {
            /* nEnable */
            0,
            /* tFaceTargetCurve */
            {
                /* nSize */
                6,
                /* nRefList[10] */
                {102, 1536, 10240, 51200, 307200, 2048000, /*0 - 5*/},
                /* nFaceTargetList[10] */
                {18432, 18432, 18432, 22528, 25600, 25600, /*0 - 5*/},
            },
            /* nFaceScoreList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nFaceScoreWeightList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nFaceDistanceList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nFaceDistanceWeightList[6] */
            {1024, 922, 768, 563, 307, 0, /*0 - 5*/},
            /* nFaceTargetWeight */
            512,
            /* nFaceRoiFactor */
            1024,
            /* nNoFaceFrameTh */
            20,
            /* nToNormalFrameTh */
            8,
            /* nWithFaceFrameTh */
            3,
            /* nToFaceAeFrameTh */
            8,
            /* tFaceWeightList */
            {
                /* nSize */
                5,
                /* nFaceLumaDiff[5] */
                {2048, 5120, 10240, 15360, 20480, /*0 - 4*/},
                /* nFaceWeight[5] */
                {0, 102, 154, 154, 205, /*0 - 4*/},
            },
            /* nFaceWeightDampRatio */
            870,
            /* nToleranceAdjustRatio */
            2048,
            /* nNoFaceDampRatio */
            512,
        },
        /* tVehicleUIParam */
        {
            /* nEnable */
            0,
            /* nPriorityMode */
            0,
            /* tVehicleTargetCurve */
            {
                /* nSize */
                6,
                /* nRefList[10] */
                {102, 1536, 10240, 51200, 307200, 2048000, /*0 - 5*/},
                /* nVehicleTargetList[10] */
                {18432, 18432, 18432, 22528, 25600, 25600, /*0 - 5*/},
            },
            /* nVehicleScoreList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nVehicleScoreWeightList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nVehicleDistanceList[6] */
            {0, 205, 410, 614, 819, 1024, /*0 - 5*/},
            /* nVehicleDistanceWeightList[6] */
            {1024, 922, 768, 563, 307, 0, /*0 - 5*/},
            /* nVehicleTargetWeight */
            512,
            /* nVehicleRoiFactor */
            1024,
            /* nNoVehicleFrameTh */
            20,
            /* nToNormalFrameTh */
            8,
            /* nWithVehicleFrameTh */
            3,
            /* nToVehicleAeFrameTh */
            8,
            /* tVehicleWeightList */
            {
                /* nSize */
                5,
                /* nVehicleLumaDiff[5] */
                {2048, 5120, 10240, 15360, 20480, /*0 - 4*/},
                /* nVehicleWeight[5] */
                {0, 102, 154, 154, 205, /*0 - 4*/},
            },
            /* nVehicleWeightDampRatio */
            870,
            /* nToleranceAdjustRatio */
            2048,
            /* nNoVehicleDampRatio */
            512,
        },
        /* tAeHdrRatio */
        {
            /* nHdrMode */
            0,
            /* tRatioStrategyParam */
            {
                /* nShortNonSatAreaPercent */
                104438168,
                /* nTolerance */
                8388608,
                /* nConvergeCntFrameNum */
                3,
                /* nDampRatio */
                922,
                /* tHdrRatioParamCurve */
                {
                    /* nListSize */
                    6,
                    /* nRefList[10] */
                    {102, 10240, 30720, 102400, 204800, 1024000, 0, 0, 0, 0, /*0 - 9*/},
                    /* nSatLumaList[10] */
                    {153600, 122880, 61440, 40960, 20480, 10240, 0, 0, 0, 0, /*0 - 9*/},
                    /* nMinRatioList[10] */
                    {1024, 1024, 1024, 1024, 1024, 1024, 0, 0, 0, 0, /*0 - 9*/},
                    /* nMaxRatioList[10] */
                    {16384, 16384, 16384, 16384, 16384, 16384, 0, 0, 0, 0, /*0 - 9*/},
                },
            },
            /* tHdrRatioExtendParam */
            {
                /* nCommonHdrRatio */
                16384,
                /* nExtendHdrRatio */
                32768,
                /* nHdrRatioTh */
                20480,
                /* nShortNonSatAreaPercent */
                104438168,
                /* nTolerance */
                8388608,
                /* nConvergeCntFrameNum */
                3,
                /* nDampRatio */
                922,
                /* tHdrRatioExtendParamCurve */
                {
                    /* nListSize */
                    6,
                    /* nRefList[10] */
                    {102, 10240, 30720, 102400, 204800, 1024000, /*0 - 5*/},
                    /* nSatLumaList[10] */
                    {153600, 122880, 61440, 40960, 20480, 10240, /*0 - 5*/},
                },
            },
            /* nFixedHdrRatio */
            1024,
        },
        /* nMultiCamSyncMode */
        0,
        /* nMultiCamSyncRatio */
        1048576,
        /* tSlowShutterParam */
        {
            /* nFrameRateMode */
            1,
            /* nFpsIncreaseDelayFrame */
            0,
        },
        /* tIrisParam */
        {
            /* nIrisType */
            0,
            /* tDcIrisParam */
            {
                /* nBigStepFactor */
                104858,
                /* nSmallStepFactor */
                10486,
                /* nLumaDiffOverThresh */
                35840,
                /* nLumaDiffUnderThresh */
                35840,
                /* nLumaSpeedThresh */
                205,
                /* nSpeedDownFactor */
                209715,
                /* nMinUserPwmDuty */
                30720,
                /* nMaxUserPwmDuty */
                66560,
                /* nOpenPwmDuty */
                61440,
                /* nConvergeLumaDiffTolerance */
                52429,
                /* nConvergeFrameCntThresh */
                10,
            },
        },
        /* tLumaWeightParam */
        {
            /* nEnable */
            0,
            /* nLumaWeightNum */
            16,
            /* nLumaSplitList[64] */
            {0, 16384, 32768, 49152, 65536, 81920, 98304, 114688, 131072, 147456, 163840, 180224, 196608, 212992, 229376, 245760, /*0 - 15*/},
            /* nWeightList[64] */
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        },
        /* tTimeSmoothParam */
        {
            /* tStateMachineParam */
            {
                /* nToFastLumaThOver */
                1536,
                /* nToFastLumaThUnder */
                819,
                /* nToSlowFrameTh */
                3,
                /* nToConvergedFrameTh */
                2,
            },
            /* tConvergeSpeedParam */
            {
                /* nFastOverKneeCnt */
                14,
                /* nFastOverLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 40960, 51200, 71680, 92160, 112640, 153600, 209920, 262144, /*0 - 13*/},
                /* nFastOverStepFactorList[16] */
                {102, 154, 184, 184, 205, 205, 205, 205, 256, 307, 358, 410, 512, 614, /*0 - 13*/},
                /* nFastOverSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 102, 307, /*0 - 13*/},
                /* nFastOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nFastUnderKneeCnt */
                11,
                /* nFastUnderLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nFastUnderStepFactorList[16] */
                {102, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, /*0 - 10*/},
                /* nFastUnderSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nFastUnderSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nSlowOverKneeCnt */
                14,
                /* nSlowOverLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 40960, 51200, 81920, 92160, 112640, 153600, 209920, 262144, /*0 - 13*/},
                /* nSlowOverStepFactorList[16] */
                {82, 102, 123, 154, 154, 174, 184, 184, 184, 184, 184, 184, 184, 184, /*0 - 13*/},
                /* nSlowOverSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowUnderKneeCnt */
                11,
                /* nSlowUnderLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nSlowUnderStepFactorList[16] */
                {51, 51, 82, 102, 123, 123, 123, 123, 154, 154, 154, /*0 - 10*/},
                /* nSlowUnderSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nSlowUnderSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
            },
        },
        /* tSleepWakeUpParam */
        {
            /* nEnableSleepSetting */
            1,
            /* nAovSmoothFrameNums */
            6,
            /* nNoiseLevel */
            41,
            /* nLinearLumaTh */
            51,
            /* nAeStatsDelayFrame */
            4,
            /* tSleepSetting */
            {
                /* nAGain */
                1024,
                /* nDGain */
                1024,
                /* nIspGain */
                1024,
                /* nHcgLcg */
                1,
                /* nShutter */
                1000,
            },
            /* nOverExpCompLumaTh */
            102400,
            /* tOverExpCompLut */
            {
                /* nLutNum */
                5,
                /* nLumaSplitList[8] */
                {179200, 220160, 225280, 240640, 244736, /*0 - 4*/},
                /* nCompFactorList[8] */
                {1024, 1208, 1352, 2324, 2560, /*0 - 4*/},
            },
        },
        /* tHistPointCtrlParam */
        {
            /* nEnable */
            0,
            /* nHistPointLutNum */
            1,
            /* tHistPointCtrlLut[10] */
            {
                /* 0 */
                {
                    /* nLuxStart */
                    240000,
                    /* nLuxEnd */
                    4000000,
                    /* tHistPointTh */
                    {
                        /* nLumaThList[2] */
                        {0, 0, /*0 - 1*/},
                        /* nPercentThList[2] */
                        {102400, 102400, /*0 - 1*/},
                    },
                },
            },
        },
        /* tDynamicRangeDetParam */
        {
            /* nEnable */
            0,
            /* tDynamicRangeDetList */
            {
                /* nListSize */
                8,
                /* nRefList[12] */
                {512, 1024, 5120, 10240, 51200, 102400, 512000, 1024000, /*0 - 7*/},
                /* nDarkRegionStart[12] */
                {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
                /* nDarkRegionEnd[12] */
                {5120, 5120, 5120, 5120, 5120, 5120, 5120, 5120, /*0 - 7*/},
                /* nLightRegionStart[12] */
                {256000, 256000, 256000, 256000, 256000, 256000, 256000, 256000, /*0 - 7*/},
                /* nLightRegionEnd[12] */
                {261120, 261120, 261120, 261120, 261120, 261120, 261120, 261120, /*0 - 7*/},
                /* nThdDarkRegion[12] */
                {102400, 10240, 10240, 10240, 10240, 10240, 10240, 10240, /*0 - 7*/},
                /* nThdUnSatLightRegion[12] */
                {1536, 1536, 3072, 5120, 5120, 6144, 7168, 7168, /*0 - 7*/},
                /* nThdSatLightRegion[12] */
                {12288, 12288, 12288, 12288, 12288, 12288, 12288, 10240, /*0 - 7*/},
            },
            /* nSwitchFrameTh */
            30,
        }
    },
    /* nLogLevel */
    4,
    /* nLogTarget */
    2,
};

const static AX_ISP_IQ_AWB_PARAM_T awb_param_sdr = {
    /* nEnable */
    1,
    /* tManualParam */
    {
        /* nManualMode */
        0,
        /* tGain */
        {
            /* nGainR */
            538,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            521,
        },
        /* tManualLightSource */
        {
            /* nLightSourceIndex */
            0,
            /* tLightSource[15] */
            {
                /* 0 */
                {
                    /* szName[32] */
                    "Shade",
                    /* nColorTemperature */
                    7500,
                    /* nGreenShift */
                    0,
                },
                /* 1 */
                {
                    /* szName[32] */
                    "Day",
                    /* nColorTemperature */
                    6500,
                    /* nGreenShift */
                    0,
                },
                /* 2 */
                {
                    /* szName[32] */
                    "Cloudy",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 3 */
                {
                    /* szName[32] */
                    "Flourescent",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 4 */
                {
                    /* szName[32] */
                    "Sunset",
                    /* nColorTemperature */
                    3500,
                    /* nGreenShift */
                    0,
                },
                /* 5 */
                {
                    /* szName[32] */
                    "Incandescent",
                    /* nColorTemperature */
                    2800,
                    /* nGreenShift */
                    0,
                },
                /* 6 */
                {
                    /* szName[32] */
                    "Candle",
                    /* nColorTemperature */
                    2000,
                    /* nGreenShift */
                    0,
                },
                /* 7 */
                {
                    /* szName[32] */
                    "Flash",
                    /* nColorTemperature */
                    3500,
                    /* nGreenShift */
                    0,
                },
                /* 8 */
                {
                    /* szName[32] */
                    "UserDefined-1",
                    /* nColorTemperature */
                    2800,
                    /* nGreenShift */
                    0,
                },
                /* 9 */
                {
                    /* szName[32] */
                    "UserDefined-2",
                    /* nColorTemperature */
                    2000,
                    /* nGreenShift */
                    0,
                },
                /* 10 */
                {
                    /* szName[32] */
                    "UserDefined-3",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 11 */
                {
                    /* szName[32] */
                    "UserDefined-4",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 12 */
                {
                    /* szName[32] */
                    "UserDefined-5",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 13 */
                {
                    /* szName[32] */
                    "UserDefined-6",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
                /* 14 */
                {
                    /* szName[32] */
                    "UserDefined-7",
                    /* nColorTemperature */
                    5000,
                    /* nGreenShift */
                    0,
                },
            },
        },
    },
    /* tAutoParam */
    {
        /* tCenterPnt */
        {
            /* nRg */
            1341774,
            /* nBg */
            1442842,
        },
        /* nCenterPntRadius */
        1230038,
        /* nLowCut */
        0,
        /* nHighCut */
        0,
        /* nCctMax */
        12000,
        /* nCctMin */
        1100,
        /* nPartCtrlPntNum */
        8,
        /* nCtrlPntNum */
        57,
        /* nCtrlSegKbNum */
        56,
        /* nCctList[512] */
        {
            1100, 1250, 1400, 1550, 1700, 1850, 2000, 2150, 2300, 2362, 2425, 2487, 2550, 2612, 2675, 2737, 2800, 2925, 3050, 3175, 3300, 3425, 3550, 3675, 3800, 3950, 4100, 4250, 4400, 4550, 4700, 4850,  /* 0 - 31*/
            5000, 5187, 5375, 5562, 5750, 5937, 6125, 6312, 6500, 6625, 6750, 6875, 7000, 7125, 7250, 7375, 7500, 8062, 8625, 9187, 9750, 10312, 10875, 11437, 12000, /*32 - 56*/
        },
        /* tChordKB */
        {
            /* nK */
            -509,
            /* nB */
            1022,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1613433,
                /* nBg */
                243175,
            },
            /* 1 */
            {
                /* nRg */
                1541438,
                /* nBg */
                279037,
            },
            /* 2 */
            {
                /* nRg */
                1474791,
                /* nBg */
                312224,
            },
            /* 3 */
            {
                /* nRg */
                1412610,
                /* nBg */
                343199,
            },
            /* 4 */
            {
                /* nRg */
                1354131,
                /* nBg */
                372328,
            },
            /* 5 */
            {
                /* nRg */
                1298735,
                /* nBg */
                399916,
            },
            /* 6 */
            {
                /* nRg */
                1245897,
                /* nBg */
                426225,
            },
            /* 7 */
            {
                /* nRg */
                1195167,
                /* nBg */
                451496,
            },
            /* 8 */
            {
                /* nRg */
                1146156,
                /* nBg */
                475907,
            },
            /* 9 */
            {
                /* nRg */
                1126160,
                /* nBg */
                485858,
            },
            /* 10 */
            {
                /* nRg */
                1106384,
                /* nBg */
                495714,
            },
            /* 11 */
            {
                /* nRg */
                1086786,
                /* nBg */
                505466,
            },
            /* 12 */
            {
                /* nRg */
                1067366,
                /* nBg */
                515144,
            },
            /* 13 */
            {
                /* nRg */
                1048104,
                /* nBg */
                524739,
            },
            /* 14 */
            {
                /* nRg */
                1028957,
                /* nBg */
                534270,
            },
            /* 15 */
            {
                /* nRg */
                1009936,
                /* nBg */
                543750,
            },
            /* 16 */
            {
                /* nRg */
                990999,
                /* nBg */
                553176,
            },
            /* 17 */
            {
                /* nRg */
                968811,
                /* nBg */
                564228,
            },
            /* 18 */
            {
                /* nRg */
                946686,
                /* nBg */
                575249,
            },
            /* 19 */
            {
                /* nRg */
                924613,
                /* nBg */
                586248,
            },
            /* 20 */
            {
                /* nRg */
                902541,
                /* nBg */
                597237,
            },
            /* 21 */
            {
                /* nRg */
                880458,
                /* nBg */
                608237,
            },
            /* 22 */
            {
                /* nRg */
                858312,
                /* nBg */
                619258,
            },
            /* 23 */
            {
                /* nRg */
                836103,
                /* nBg */
                630330,
            },
            /* 24 */
            {
                /* nRg */
                813779,
                /* nBg */
                641445,
            },
            /* 25 */
            {
                /* nRg */
                803461,
                /* nBg */
                646583,
            },
            /* 26 */
            {
                /* nRg */
                793111,
                /* nBg */
                651732,
            },
            /* 27 */
            {
                /* nRg */
                782731,
                /* nBg */
                656912,
            },
            /* 28 */
            {
                /* nRg */
                772308,
                /* nBg */
                662102,
            },
            /* 29 */
            {
                /* nRg */
                761843,
                /* nBg */
                667314,
            },
            /* 30 */
            {
                /* nRg */
                751326,
                /* nBg */
                672546,
            },
            /* 31 */
            {
                /* nRg */
                740767,
                /* nBg */
                677800,
            },
            /* 32 */
            {
                /* nRg */
                730165,
                /* nBg */
                683084,
            },
            /* 33 */
            {
                /* nRg */
                720277,
                /* nBg */
                688013,
            },
            /* 34 */
            {
                /* nRg */
                710347,
                /* nBg */
                692951,
            },
            /* 35 */
            {
                /* nRg */
                700365,
                /* nBg */
                697932,
            },
            /* 36 */
            {
                /* nRg */
                690330,
                /* nBg */
                702923,
            },
            /* 37 */
            {
                /* nRg */
                680232,
                /* nBg */
                707957,
            },
            /* 38 */
            {
                /* nRg */
                670072,
                /* nBg */
                713021,
            },
            /* 39 */
            {
                /* nRg */
                659837,
                /* nBg */
                718107,
            },
            /* 40 */
            {
                /* nRg */
                649551,
                /* nBg */
                723234,
            },
            /* 41 */
            {
                /* nRg */
                641414,
                /* nBg */
                727292,
            },
            /* 42 */
            {
                /* nRg */
                633246,
                /* nBg */
                731361,
            },
            /* 43 */
            {
                /* nRg */
                625014,
                /* nBg */
                735450,
            },
            /* 44 */
            {
                /* nRg */
                616741,
                /* nBg */
                739571,
            },
            /* 45 */
            {
                /* nRg */
                608426,
                /* nBg */
                743723,
            },
            /* 46 */
            {
                /* nRg */
                600048,
                /* nBg */
                747886,
            },
            /* 47 */
            {
                /* nRg */
                591617,
                /* nBg */
                752091,
            },
            /* 48 */
            {
                /* nRg */
                583134,
                /* nBg */
                756317,
            },
            /* 49 */
            {
                /* nRg */
                544211,
                /* nBg */
                775695,
            },
            /* 50 */
            {
                /* nRg */
                503946,
                /* nBg */
                795754,
            },
            /* 51 */
            {
                /* nRg */
                462118,
                /* nBg */
                816589,
            },
            /* 52 */
            {
                /* nRg */
                418518,
                /* nBg */
                838295,
            },
            /* 53 */
            {
                /* nRg */
                372895,
                /* nBg */
                861028,
            },
            /* 54 */
            {
                /* nRg */
                324933,
                /* nBg */
                884904,
            },
            /* 55 */
            {
                /* nRg */
                274307,
                /* nBg */
                910122,
            },
            /* 56 */
            {
                /* nRg */
                220620,
                /* nBg */
                936861,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1594905,
                /* nBg */
                324996,
            },
            /* 1 */
            {
                /* nRg */
                1536457,
                /* nBg */
                308030,
            },
            /* 2 */
            {
                /* nRg */
                1476930,
                /* nBg */
                294126,
            },
            /* 3 */
            {
                /* nRg */
                1416469,
                /* nBg */
                283367,
            },
            /* 4 */
            {
                /* nRg */
                1355243,
                /* nBg */
                275796,
            },
            /* 5 */
            {
                /* nRg */
                1293429,
                /* nBg */
                271476,
            },
            /* 6 */
            {
                /* nRg */
                1231196,
                /* nBg */
                270438,
            },
            /* 7 */
            {
                /* nRg */
                1168732,
                /* nBg */
                272714,
            },
            /* 8 */
            {
                /* nRg */
                1106195,
                /* nBg */
                278334,
            },
            /* 9 */
            {
                /* nRg */
                1079488,
                /* nBg */
                278691,
            },
            /* 10 */
            {
                /* nRg */
                1052676,
                /* nBg */
                279645,
            },
            /* 11 */
            {
                /* nRg */
                1025790,
                /* nBg */
                281228,
            },
            /* 12 */
            {
                /* nRg */
                998832,
                /* nBg */
                283430,
            },
            /* 13 */
            {
                /* nRg */
                971820,
                /* nBg */
                286261,
            },
            /* 14 */
            {
                /* nRg */
                944767,
                /* nBg */
                289722,
            },
            /* 15 */
            {
                /* nRg */
                917682,
                /* nBg */
                293811,
            },
            /* 16 */
            {
                /* nRg */
                890598,
                /* nBg */
                298540,
            },
            /* 17 */
            {
                /* nRg */
                861143,
                /* nBg */
                310599,
            },
            /* 18 */
            {
                /* nRg */
                832003,
                /* nBg */
                323412,
            },
            /* 19 */
            {
                /* nRg */
                803220,
                /* nBg */
                336970,
            },
            /* 20 */
            {
                /* nRg */
                774782,
                /* nBg */
                351273,
            },
            /* 21 */
            {
                /* nRg */
                746733,
                /* nBg */
                366310,
            },
            /* 22 */
            {
                /* nRg */
                719082,
                /* nBg */
                382070,
            },
            /* 23 */
            {
                /* nRg */
                691840,
                /* nBg */
                398532,
            },
            /* 24 */
            {
                /* nRg */
                665038,
                /* nBg */
                415697,
            },
            /* 25 */
            {
                /* nRg */
                652864,
                /* nBg */
                423824,
            },
            /* 26 */
            {
                /* nRg */
                640785,
                /* nBg */
                432097,
            },
            /* 27 */
            {
                /* nRg */
                628800,
                /* nBg */
                440517,
            },
            /* 28 */
            {
                /* nRg */
                616919,
                /* nBg */
                449074,
            },
            /* 29 */
            {
                /* nRg */
                605144,
                /* nBg */
                457766,
            },
            /* 30 */
            {
                /* nRg */
                593473,
                /* nBg */
                466606,
            },
            /* 31 */
            {
                /* nRg */
                581907,
                /* nBg */
                475582,
            },
            /* 32 */
            {
                /* nRg */
                570446,
                /* nBg */
                484694,
            },
            /* 33 */
            {
                /* nRg */
                559929,
                /* nBg */
                493261,
            },
            /* 34 */
            {
                /* nRg */
                549506,
                /* nBg */
                501932,
            },
            /* 35 */
            {
                /* nRg */
                539178,
                /* nBg */
                510730,
            },
            /* 36 */
            {
                /* nRg */
                528954,
                /* nBg */
                519632,
            },
            /* 37 */
            {
                /* nRg */
                518814,
                /* nBg */
                528650,
            },
            /* 38 */
            {
                /* nRg */
                508790,
                /* nBg */
                537783,
            },
            /* 39 */
            {
                /* nRg */
                498860,
                /* nBg */
                547021,
            },
            /* 40 */
            {
                /* nRg */
                489035,
                /* nBg */
                556374,
            },
            /* 41 */
            {
                /* nRg */
                481391,
                /* nBg */
                563788,
            },
            /* 42 */
            {
                /* nRg */
                473810,
                /* nBg */
                571275,
            },
            /* 43 */
            {
                /* nRg */
                466302,
                /* nBg */
                578814,
            },
            /* 44 */
            {
                /* nRg */
                458857,
                /* nBg */
                586427,
            },
            /* 45 */
            {
                /* nRg */
                451475,
                /* nBg */
                594102,
            },
            /* 46 */
            {
                /* nRg */
                444166,
                /* nBg */
                601841,
            },
            /* 47 */
            {
                /* nRg */
                436921,
                /* nBg */
                609642,
            },
            /* 48 */
            {
                /* nRg */
                429738,
                /* nBg */
                617496,
            },
            /* 49 */
            {
                /* nRg */
                398291,
                /* nBg */
                653640,
            },
            /* 50 */
            {
                /* nRg */
                368281,
                /* nBg */
                690980,
            },
            /* 51 */
            {
                /* nRg */
                339739,
                /* nBg */
                729463,
            },
            /* 52 */
            {
                /* nRg */
                312717,
                /* nBg */
                769015,
            },
            /* 53 */
            {
                /* nRg */
                287257,
                /* nBg */
                809606,
            },
            /* 54 */
            {
                /* nRg */
                263402,
                /* nBg */
                851150,
            },
            /* 55 */
            {
                /* nRg */
                241183,
                /* nBg */
                893586,
            },
            /* 56 */
            {
                /* nRg */
                220620,
                /* nBg */
                936861,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                -4521,
                /* nB */
                7195,
            },
            /* 1 */
            {
                /* nK */
                -5968,
                /* nB */
                9047,
            },
            /* 2 */
            {
                /* nK */
                -8702,
                /* nB */
                12546,
            },
            /* 3 */
            {
                /* nK */
                -15895,
                /* nB */
                21750,
            },
            /* 4 */
            {
                /* nK */
                -88725,
                /* nB */
                114945,
            },
            /* 5 */
            {
                /* nK */
                24812,
                /* nB */
                -30340,
            },
            /* 6 */
            {
                /* nK */
                10857,
                /* nB */
                -12483,
            },
            /* 7 */
            {
                /* nK */
                6924,
                /* nB */
                -7450,
            },
            /* 8 */
            {
                /* nK */
                5062,
                /* nB */
                -5067,
            },
            /* 9 */
            {
                /* nK */
                4545,
                /* nB */
                -4406,
            },
            /* 10 */
            {
                /* nK */
                4120,
                /* nB */
                -3862,
            },
            /* 11 */
            {
                /* nK */
                3764,
                /* nB */
                -3407,
            },
            /* 12 */
            {
                /* nK */
                3462,
                /* nB */
                -3020,
            },
            /* 13 */
            {
                /* nK */
                3201,
                /* nB */
                -2686,
            },
            /* 14 */
            {
                /* nK */
                2974,
                /* nB */
                -2396,
            },
            /* 15 */
            {
                /* nK */
                2774,
                /* nB */
                -2140,
            },
            /* 16 */
            {
                /* nK */
                2597,
                /* nB */
                -1913,
            },
            /* 17 */
            {
                /* nK */
                2412,
                /* nB */
                -1677,
            },
            /* 18 */
            {
                /* nK */
                2249,
                /* nB */
                -1467,
            },
            /* 19 */
            {
                /* nK */
                2103,
                /* nB */
                -1281,
            },
            /* 20 */
            {
                /* nK */
                1971,
                /* nB */
                -1113,
            },
            /* 21 */
            {
                /* nK */
                1853,
                /* nB */
                -961,
            },
            /* 22 */
            {
                /* nK */
                1744,
                /* nB */
                -822,
            },
            /* 23 */
            {
                /* nK */
                1645,
                /* nB */
                -695,
            },
            /* 24 */
            {
                /* nK */
                1554,
                /* nB */
                -579,
            },
            /* 25 */
            {
                /* nK */
                1515,
                /* nB */
                -528,
            },
            /* 26 */
            {
                /* nK */
                1476,
                /* nB */
                -479,
            },
            /* 27 */
            {
                /* nK */
                1440,
                /* nB */
                -432,
            },
            /* 28 */
            {
                /* nK */
                1404,
                /* nB */
                -386,
            },
            /* 29 */
            {
                /* nK */
                1369,
                /* nB */
                -342,
            },
            /* 30 */
            {
                /* nK */
                1336,
                /* nB */
                -299,
            },
            /* 31 */
            {
                /* nK */
                1303,
                /* nB */
                -258,
            },
            /* 32 */
            {
                /* nK */
                1272,
                /* nB */
                -218,
            },
            /* 33 */
            {
                /* nK */
                1244,
                /* nB */
                -181,
            },
            /* 34 */
            {
                /* nK */
                1216,
                /* nB */
                -146,
            },
            /* 35 */
            {
                /* nK */
                1189,
                /* nB */
                -112,
            },
            /* 36 */
            {
                /* nK */
                1163,
                /* nB */
                -78,
            },
            /* 37 */
            {
                /* nK */
                1138,
                /* nB */
                -46,
            },
            /* 38 */
            {
                /* nK */
                1113,
                /* nB */
                -14,
            },
            /* 39 */
            {
                /* nK */
                1088,
                /* nB */
                16,
            },
            /* 40 */
            {
                /* nK */
                1064,
                /* nB */
                47,
            },
            /* 41 */
            {
                /* nK */
                1046,
                /* nB */
                70,
            },
            /* 42 */
            {
                /* nK */
                1028,
                /* nB */
                93,
            },
            /* 43 */
            {
                /* nK */
                1011,
                /* nB */
                116,
            },
            /* 44 */
            {
                /* nK */
                993,
                /* nB */
                138,
            },
            /* 45 */
            {
                /* nK */
                976,
                /* nB */
                160,
            },
            /* 46 */
            {
                /* nK */
                959,
                /* nB */
                181,
            },
            /* 47 */
            {
                /* nK */
                943,
                /* nB */
                202,
            },
            /* 48 */
            {
                /* nK */
                927,
                /* nB */
                223,
            },
            /* 49 */
            {
                /* nK */
                857,
                /* nB */
                313,
            },
            /* 50 */
            {
                /* nK */
                791,
                /* nB */
                397,
            },
            /* 51 */
            {
                /* nK */
                729,
                /* nB */
                476,
            },
            /* 52 */
            {
                /* nK */
                671,
                /* nB */
                551,
            },
            /* 53 */
            {
                /* nK */
                615,
                /* nB */
                622,
            },
            /* 54 */
            {
                /* nK */
                562,
                /* nB */
                690,
            },
            /* 55 */
            {
                /* nK */
                511,
                /* nB */
                755,
            },
            /* 56 */
            {
                /* nK */
                462,
                /* nB */
                818,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1615751,
                /* nBg */
                232952,
            },
            /* 1 */
            {
                /* nRg */
                1552417,
                /* nBg */
                215011,
            },
            /* 2 */
            {
                /* nRg */
                1487950,
                /* nBg */
                200404,
            },
            /* 3 */
            {
                /* nRg */
                1422530,
                /* nBg */
                189184,
            },
            /* 4 */
            {
                /* nRg */
                1356333,
                /* nBg */
                181435,
            },
            /* 5 */
            {
                /* nRg */
                1289539,
                /* nBg */
                177178,
            },
            /* 6 */
            {
                /* nRg */
                1222336,
                /* nBg */
                176486,
            },
            /* 7 */
            {
                /* nRg */
                1154923,
                /* nBg */
                179359,
            },
            /* 8 */
            {
                /* nRg */
                1087478,
                /* nBg */
                185839,
            },
            /* 9 */
            {
                /* nRg */
                1058737,
                /* nBg */
                186626,
            },
            /* 10 */
            {
                /* nRg */
                1029922,
                /* nBg */
                188062,
            },
            /* 11 */
            {
                /* nRg */
                1001023,
                /* nBg */
                190170,
            },
            /* 12 */
            {
                /* nRg */
                972061,
                /* nBg */
                192938,
            },
            /* 13 */
            {
                /* nRg */
                943068,
                /* nBg */
                196377,
            },
            /* 14 */
            {
                /* nRg */
                914044,
                /* nBg */
                200488,
            },
            /* 15 */
            {
                /* nRg */
                885009,
                /* nBg */
                205280,
            },
            /* 16 */
            {
                /* nRg */
                855974,
                /* nBg */
                210743,
            },
            /* 17 */
            {
                /* nRg */
                824265,
                /* nBg */
                223724,
            },
            /* 18 */
            {
                /* nRg */
                792891,
                /* nBg */
                237523,
            },
            /* 19 */
            {
                /* nRg */
                761895,
                /* nBg */
                252130,
            },
            /* 20 */
            {
                /* nRg */
                731287,
                /* nBg */
                267534,
            },
            /* 21 */
            {
                /* nRg */
                701078,
                /* nBg */
                283713,
            },
            /* 22 */
            {
                /* nRg */
                671309,
                /* nBg */
                300679,
            },
            /* 23 */
            {
                /* nRg */
                641980,
                /* nBg */
                318411,
            },
            /* 24 */
            {
                /* nRg */
                613123,
                /* nBg */
                336897,
            },
            /* 25 */
            {
                /* nRg */
                600006,
                /* nBg */
                345642,
            },
            /* 26 */
            {
                /* nRg */
                587003,
                /* nBg */
                354555,
            },
            /* 27 */
            {
                /* nRg */
                574106,
                /* nBg */
                363615,
            },
            /* 28 */
            {
                /* nRg */
                561313,
                /* nBg */
                372821,
            },
            /* 29 */
            {
                /* nRg */
                548636,
                /* nBg */
                382185,
            },
            /* 30 */
            {
                /* nRg */
                536064,
                /* nBg */
                391706,
            },
            /* 31 */
            {
                /* nRg */
                523606,
                /* nBg */
                401374,
            },
            /* 32 */
            {
                /* nRg */
                511275,
                /* nBg */
                411178,
            },
            /* 33 */
            {
                /* nRg */
                499940,
                /* nBg */
                420406,
            },
            /* 34 */
            {
                /* nRg */
                488720,
                /* nBg */
                429748,
            },
            /* 35 */
            {
                /* nRg */
                477605,
                /* nBg */
                439217,
            },
            /* 36 */
            {
                /* nRg */
                466585,
                /* nBg */
                448801,
            },
            /* 37 */
            {
                /* nRg */
                455680,
                /* nBg */
                458521,
            },
            /* 38 */
            {
                /* nRg */
                444879,
                /* nBg */
                468346,
            },
            /* 39 */
            {
                /* nRg */
                434184,
                /* nBg */
                478297,
            },
            /* 40 */
            {
                /* nRg */
                423604,
                /* nBg */
                488364,
            },
            /* 41 */
            {
                /* nRg */
                415383,
                /* nBg */
                496343,
            },
            /* 42 */
            {
                /* nRg */
                407225,
                /* nBg */
                504397,
            },
            /* 43 */
            {
                /* nRg */
                399130,
                /* nBg */
                512523,
            },
            /* 44 */
            {
                /* nRg */
                391119,
                /* nBg */
                520723,
            },
            /* 45 */
            {
                /* nRg */
                383171,
                /* nBg */
                528986,
            },
            /* 46 */
            {
                /* nRg */
                375296,
                /* nBg */
                537311,
            },
            /* 47 */
            {
                /* nRg */
                367494,
                /* nBg */
                545710,
            },
            /* 48 */
            {
                /* nRg */
                359766,
                /* nBg */
                554183,
            },
            /* 49 */
            {
                /* nRg */
                325908,
                /* nBg */
                593096,
            },
            /* 50 */
            {
                /* nRg */
                293591,
                /* nBg */
                633298,
            },
            /* 51 */
            {
                /* nRg */
                262857,
                /* nBg */
                674727,
            },
            /* 52 */
            {
                /* nRg */
                233770,
                /* nBg */
                717320,
            },
            /* 53 */
            {
                /* nRg */
                206360,
                /* nBg */
                761015,
            },
            /* 54 */
            {
                /* nRg */
                180670,
                /* nBg */
                805747,
            },
            /* 55 */
            {
                /* nRg */
                156741,
                /* nBg */
                851444,
            },
            /* 56 */
            {
                /* nRg */
                134606,
                /* nBg */
                898042,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1576377,
                /* nBg */
                406806,
            },
            /* 1 */
            {
                /* nRg */
                1522281,
                /* nBg */
                390710,
            },
            /* 2 */
            {
                /* nRg */
                1467126,
                /* nBg */
                377435,
            },
            /* 3 */
            {
                /* nRg */
                1411069,
                /* nBg */
                367075,
            },
            /* 4 */
            {
                /* nRg */
                1354278,
                /* nBg */
                359672,
            },
            /* 5 */
            {
                /* nRg */
                1296889,
                /* nBg */
                355289,
            },
            /* 6 */
            {
                /* nRg */
                1239081,
                /* nBg */
                353947,
            },
            /* 7 */
            {
                /* nRg */
                1181001,
                /* nBg */
                355698,
            },
            /* 8 */
            {
                /* nRg */
                1122826,
                /* nBg */
                360563,
            },
            /* 9 */
            {
                /* nRg */
                1097922,
                /* nBg */
                360521,
            },
            /* 10 */
            {
                /* nRg */
                1072913,
                /* nBg */
                361056,
            },
            /* 11 */
            {
                /* nRg */
                1047811,
                /* nBg */
                362178,
            },
            /* 12 */
            {
                /* nRg */
                1022624,
                /* nBg */
                363877,
            },
            /* 13 */
            {
                /* nRg */
                997374,
                /* nBg */
                366163,
            },
            /* 14 */
            {
                /* nRg */
                972072,
                /* nBg */
                369036,
            },
            /* 15 */
            {
                /* nRg */
                946728,
                /* nBg */
                372507,
            },
            /* 16 */
            {
                /* nRg */
                921363,
                /* nBg */
                376575,
            },
            /* 17 */
            {
                /* nRg */
                893922,
                /* nBg */
                387816,
            },
            /* 18 */
            {
                /* nRg */
                866774,
                /* nBg */
                399749,
            },
            /* 19 */
            {
                /* nRg */
                839941,
                /* nBg */
                412394,
            },
            /* 20 */
            {
                /* nRg */
                813454,
                /* nBg */
                425722,
            },
            /* 21 */
            {
                /* nRg */
                787313,
                /* nBg */
                439731,
            },
            /* 22 */
            {
                /* nRg */
                761549,
                /* nBg */
                454411,
            },
            /* 23 */
            {
                /* nRg */
                736163,
                /* nBg */
                469752,
            },
            /* 24 */
            {
                /* nRg */
                711197,
                /* nBg */
                485742,
            },
            /* 25 */
            {
                /* nRg */
                699851,
                /* nBg */
                493324,
            },
            /* 26 */
            {
                /* nRg */
                688589,
                /* nBg */
                501031,
            },
            /* 27 */
            {
                /* nRg */
                677422,
                /* nBg */
                508874,
            },
            /* 28 */
            {
                /* nRg */
                666360,
                /* nBg */
                516843,
            },
            /* 29 */
            {
                /* nRg */
                655381,
                /* nBg */
                524949,
            },
            /* 30 */
            {
                /* nRg */
                644507,
                /* nBg */
                533180,
            },
            /* 31 */
            {
                /* nRg */
                633728,
                /* nBg */
                541548,
            },
            /* 32 */
            {
                /* nRg */
                623053,
                /* nBg */
                550041,
            },
            /* 33 */
            {
                /* nRg */
                613249,
                /* nBg */
                558021,
            },
            /* 34 */
            {
                /* nRg */
                603539,
                /* nBg */
                566105,
            },
            /* 35 */
            {
                /* nRg */
                593913,
                /* nBg */
                574295,
            },
            /* 36 */
            {
                /* nRg */
                584382,
                /* nBg */
                582599,
            },
            /* 37 */
            {
                /* nRg */
                574945,
                /* nBg */
                590998,
            },
            /* 38 */
            {
                /* nRg */
                565591,
                /* nBg */
                599513,
            },
            /* 39 */
            {
                /* nRg */
                556343,
                /* nBg */
                608122,
            },
            /* 40 */
            {
                /* nRg */
                547189,
                /* nBg */
                616835,
            },
            /* 41 */
            {
                /* nRg */
                540069,
                /* nBg */
                623735,
            },
            /* 42 */
            {
                /* nRg */
                533012,
                /* nBg */
                630708,
            },
            /* 43 */
            {
                /* nRg */
                526008,
                /* nBg */
                637744,
            },
            /* 44 */
            {
                /* nRg */
                519066,
                /* nBg */
                644832,
            },
            /* 45 */
            {
                /* nRg */
                512198,
                /* nBg */
                651984,
            },
            /* 46 */
            {
                /* nRg */
                505382,
                /* nBg */
                659187,
            },
            /* 47 */
            {
                /* nRg */
                498629,
                /* nBg */
                666464,
            },
            /* 48 */
            {
                /* nRg */
                491939,
                /* nBg */
                673783,
            },
            /* 49 */
            {
                /* nRg */
                462642,
                /* nBg */
                707464,
            },
            /* 50 */
            {
                /* nRg */
                434666,
                /* nBg */
                742255,
            },
            /* 51 */
            {
                /* nRg */
                408074,
                /* nBg */
                778106,
            },
            /* 52 */
            {
                /* nRg */
                382898,
                /* nBg */
                814974,
            },
            /* 53 */
            {
                /* nRg */
                359179,
                /* nBg */
                852786,
            },
            /* 54 */
            {
                /* nRg */
                336949,
                /* nBg */
                891499,
            },
            /* 55 */
            {
                /* nRg */
                316240,
                /* nBg */
                931041,
            },
            /* 56 */
            {
                /* nRg */
                297083,
                /* nBg */
                971369,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1629644,
                /* nBg */
                171589,
            },
            /* 1 */
            {
                /* nRg */
                1563060,
                /* nBg */
                153008,
            },
            /* 2 */
            {
                /* nRg */
                1495301,
                /* nBg */
                137919,
            },
            /* 3 */
            {
                /* nRg */
                1426577,
                /* nBg */
                126406,
            },
            /* 4 */
            {
                /* nRg */
                1357057,
                /* nBg */
                118521,
            },
            /* 5 */
            {
                /* nRg */
                1286949,
                /* nBg */
                114316,
            },
            /* 6 */
            {
                /* nRg */
                1216432,
                /* nBg */
                113844,
            },
            /* 7 */
            {
                /* nRg */
                1145716,
                /* nBg */
                117126,
            },
            /* 8 */
            {
                /* nRg */
                1075000,
                /* nBg */
                124172,
            },
            /* 9 */
            {
                /* nRg */
                1044916,
                /* nBg */
                125242,
            },
            /* 10 */
            {
                /* nRg */
                1014738,
                /* nBg */
                127004,
            },
            /* 11 */
            {
                /* nRg */
                984508,
                /* nBg */
                129457,
            },
            /* 12 */
            {
                /* nRg */
                954215,
                /* nBg */
                132603,
            },
            /* 13 */
            {
                /* nRg */
                923900,
                /* nBg */
                136451,
            },
            /* 14 */
            {
                /* nRg */
                893565,
                /* nBg */
                141002,
            },
            /* 15 */
            {
                /* nRg */
                863230,
                /* nBg */
                146255,
            },
            /* 16 */
            {
                /* nRg */
                832905,
                /* nBg */
                152211,
            },
            /* 17 */
            {
                /* nRg */
                799676,
                /* nBg */
                165811,
            },
            /* 18 */
            {
                /* nRg */
                766824,
                /* nBg */
                180271,
            },
            /* 19 */
            {
                /* nRg */
                734349,
                /* nBg */
                195559,
            },
            /* 20 */
            {
                /* nRg */
                702284,
                /* nBg */
                211697,
            },
            /* 21 */
            {
                /* nRg */
                670648,
                /* nBg */
                228652,
            },
            /* 22 */
            {
                /* nRg */
                636759,
                /* nBg */
                241837,
            },
            /* 23 */
            {
                /* nRg */
                604402,
                /* nBg */
                258041,
            },
            /* 24 */
            {
                /* nRg */
                573070,
                /* nBg */
                276096,
            },
            /* 25 */
            {
                /* nRg */
                559236,
                /* nBg */
                285325,
            },
            /* 26 */
            {
                /* nRg */
                545507,
                /* nBg */
                294725,
            },
            /* 27 */
            {
                /* nRg */
                531904,
                /* nBg */
                304281,
            },
            /* 28 */
            {
                /* nRg */
                518409,
                /* nBg */
                314008,
            },
            /* 29 */
            {
                /* nRg */
                505028,
                /* nBg */
                323882,
            },
            /* 30 */
            {
                /* nRg */
                491774,
                /* nBg */
                333925,
            },
            /* 31 */
            {
                /* nRg */
                478637,
                /* nBg */
                344116,
            },
            /* 32 */
            {
                /* nRg */
                468284,
                /* nBg */
                357790,
            },
            /* 33 */
            {
                /* nRg */
                457301,
                /* nBg */
                368609,
            },
            /* 34 */
            {
                /* nRg */
                446427,
                /* nBg */
                379509,
            },
            /* 35 */
            {
                /* nRg */
                436554,
                /* nBg */
                391538,
            },
            /* 36 */
            {
                /* nRg */
                425009,
                /* nBg */
                401584,
            },
            /* 37 */
            {
                /* nRg */
                413590,
                /* nBg */
                411755,
            },
            /* 38 */
            {
                /* nRg */
                402276,
                /* nBg */
                422052,
            },
            /* 39 */
            {
                /* nRg */
                391077,
                /* nBg */
                432475,
            },
            /* 40 */
            {
                /* nRg */
                379993,
                /* nBg */
                443023,
            },
            /* 41 */
            {
                /* nRg */
                371374,
                /* nBg */
                451381,
            },
            /* 42 */
            {
                /* nRg */
                362828,
                /* nBg */
                459822,
            },
            /* 43 */
            {
                /* nRg */
                354356,
                /* nBg */
                468325,
            },
            /* 44 */
            {
                /* nRg */
                345957,
                /* nBg */
                476913,
            },
            /* 45 */
            {
                /* nRg */
                337631,
                /* nBg */
                485564,
            },
            /* 46 */
            {
                /* nRg */
                329389,
                /* nBg */
                494299,
            },
            /* 47 */
            {
                /* nRg */
                321210,
                /* nBg */
                503096,
            },
            /* 48 */
            {
                /* nRg */
                313115,
                /* nBg */
                511967,
            },
            /* 49 */
            {
                /* nRg */
                277652,
                /* nBg */
                552725,
            },
            /* 50 */
            {
                /* nRg */
                243794,
                /* nBg */
                594836,
            },
            /* 51 */
            {
                /* nRg */
                211603,
                /* nBg */
                638237,
            },
            /* 52 */
            {
                /* nRg */
                181131,
                /* nBg */
                682854,
            },
            /* 53 */
            {
                /* nRg */
                152421,
                /* nBg */
                728624,
            },
            /* 54 */
            {
                /* nRg */
                125504,
                /* nBg */
                775485,
            },
            /* 55 */
            {
                /* nRg */
                100443,
                /* nBg */
                823352,
            },
            /* 56 */
            {
                /* nRg */
                77259,
                /* nBg */
                872164,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1562483,
                /* nBg */
                468168,
            },
            /* 1 */
            {
                /* nRg */
                1511638,
                /* nBg */
                452712,
            },
            /* 2 */
            {
                /* nRg */
                1459775,
                /* nBg */
                439920,
            },
            /* 3 */
            {
                /* nRg */
                1407032,
                /* nBg */
                429864,
            },
            /* 4 */
            {
                /* nRg */
                1353544,
                /* nBg */
                422587,
            },
            /* 5 */
            {
                /* nRg */
                1301634,
                /* nBg */
                470366,
            },
            /* 6 */
            {
                /* nRg */
                1250619,
                /* nBg */
                476327,
            },
            /* 7 */
            {
                /* nRg */
                1200124,
                /* nBg */
                485001,
            },
            /* 8 */
            {
                /* nRg */
                1149054,
                /* nBg */
                490189,
            },
            /* 9 */
            {
                /* nRg */
                1127421,
                /* nBg */
                491436,
            },
            /* 10 */
            {
                /* nRg */
                1106138,
                /* nBg */
                494750,
            },
            /* 11 */
            {
                /* nRg */
                1085084,
                /* nBg */
                499191,
            },
            /* 12 */
            {
                /* nRg */
                1063709,
                /* nBg */
                502764,
            },
            /* 13 */
            {
                /* nRg */
                1041502,
                /* nBg */
                504111,
            },
            /* 14 */
            {
                /* nRg */
                1019222,
                /* nBg */
                505987,
            },
            /* 15 */
            {
                /* nRg */
                998640,
                /* nBg */
                513146,
            },
            /* 16 */
            {
                /* nRg */
                978937,
                /* nBg */
                522597,
            },
            /* 17 */
            {
                /* nRg */
                955679,
                /* nBg */
                533313,
            },
            /* 18 */
            {
                /* nRg */
                932254,
                /* nBg */
                543560,
            },
            /* 19 */
            {
                /* nRg */
                911275,
                /* nBg */
                558868,
            },
            /* 20 */
            {
                /* nRg */
                889575,
                /* nBg */
                572280,
            },
            /* 21 */
            {
                /* nRg */
                868425,
                /* nBg */
                586468,
            },
            /* 22 */
            {
                /* nRg */
                845811,
                /* nBg */
                597955,
            },
            /* 23 */
            {
                /* nRg */
                823366,
                /* nBg */
                609857,
            },
            /* 24 */
            {
                /* nRg */
                800114,
                /* nBg */
                620708,
            },
            /* 25 */
            {
                /* nRg */
                789653,
                /* nBg */
                626155,
            },
            /* 26 */
            {
                /* nRg */
                778447,
                /* nBg */
                630596,
            },
            /* 27 */
            {
                /* nRg */
                766975,
                /* nBg */
                634765,
            },
            /* 28 */
            {
                /* nRg */
                755934,
                /* nBg */
                639656,
            },
            /* 29 */
            {
                /* nRg */
                745447,
                /* nBg */
                645394,
            },
            /* 30 */
            {
                /* nRg */
                735640,
                /* nBg */
                652076,
            },
            /* 31 */
            {
                /* nRg */
                725046,
                /* nBg */
                657780,
            },
            /* 32 */
            {
                /* nRg */
                713674,
                /* nBg */
                662608,
            },
            /* 33 */
            {
                /* nRg */
                703475,
                /* nBg */
                667602,
            },
            /* 34 */
            {
                /* nRg */
                691986,
                /* nBg */
                671145,
            },
            /* 35 */
            {
                /* nRg */
                682538,
                /* nBg */
                677224,
            },
            /* 36 */
            {
                /* nRg */
                672513,
                /* nBg */
                682694,
            },
            /* 37 */
            {
                /* nRg */
                662751,
                /* nBg */
                688549,
            },
            /* 38 */
            {
                /* nRg */
                654402,
                /* nBg */
                695990,
            },
            /* 39 */
            {
                /* nRg */
                646469,
                /* nBg */
                703893,
            },
            /* 40 */
            {
                /* nRg */
                636898,
                /* nBg */
                710096,
            },
            /* 41 */
            {
                /* nRg */
                629982,
                /* nBg */
                715598,
            },
            /* 42 */
            {
                /* nRg */
                622071,
                /* nBg */
                720151,
            },
            /* 43 */
            {
                /* nRg */
                615500,
                /* nBg */
                726055,
            },
            /* 44 */
            {
                /* nRg */
                609261,
                /* nBg */
                732311,
            },
            /* 45 */
            {
                /* nRg */
                601984,
                /* nBg */
                737586,
            },
            /* 46 */
            {
                /* nRg */
                593885,
                /* nBg */
                742120,
            },
            /* 47 */
            {
                /* nRg */
                588074,
                /* nBg */
                748822,
            },
            /* 48 */
            {
                /* nRg */
                582478,
                /* nBg */
                755715,
            },
            /* 49 */
            {
                /* nRg */
                559378,
                /* nBg */
                788386,
            },
            /* 50 */
            {
                /* nRg */
                534676,
                /* nBg */
                819488,
            },
            /* 51 */
            {
                /* nRg */
                511001,
                /* nBg */
                851385,
            },
            /* 52 */
            {
                /* nRg */
                488769,
                /* nBg */
                884296,
            },
            /* 53 */
            {
                /* nRg */
                465376,
                /* nBg */
                916564,
            },
            /* 54 */
            {
                /* nRg */
                441070,
                /* nBg */
                948627,
            },
            /* 55 */
            {
                /* nRg */
                417056,
                /* nBg */
                981364,
            },
            /* 56 */
            {
                /* nRg */
                393703,
                /* nBg */
                1014972,
            },
        },
        /* nIllumNum */
        6,
        /* tIllumList[16] */
        {
            /* 0 */
            {
                /* szName[32] */
                "H",
                /* nCct */
                2300,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    1101005,
                    /* nBg */
                    252707,
                },
            },
            /* 1 */
            {
                /* szName[32] */
                "A",
                /* nCct */
                2800,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    894435,
                    /* nBg */
                    308281,
                },
            },
            /* 2 */
            {
                /* szName[32] */
                "TL84",
                /* nCct */
                3800,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    630194,
                    /* nBg */
                    362807,
                },
            },
            /* 3 */
            {
                /* szName[32] */
                "D50",
                /* nCct */
                5000,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    565182,
                    /* nBg */
                    478151,
                },
            },
            /* 4 */
            {
                /* szName[32] */
                "D65",
                /* nCct */
                6500,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    509608,
                    /* nBg */
                    577765,
                },
            },
            /* 5 */
            {
                /* szName[32] */
                "D75",
                /* nCct */
                7500,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    441450,
                    /* nBg */
                    628097,
                },
            },
        },
        /* nExtIllumNum */
        1,
        /* tExtIllumList[32] */
        {
            /* 0 */
            {
                /* szName[32] */
                "CWF",
                /* nCct */
                4100,
                /* nRadius */
                31457,
                /* tCoord */
                {
                    /* nRg */
                    558891,
                    /* nBg */
                    369099,
                },
            },
        },
        /* nMLCNum */
        0,
        /* tMLCZoneList[15] */
        {
            /* 0 */
            {
                /* nEnable */
                0,
                /* szDescription[32] */
                "",
                /* nZoneType */
                0,
                /* tPoly */
                {
                    /* nPntCnt */
                    0,
                    /* tPntArray[15] */
                    {
                        /* 0 */
                        {
                            /* nRg */
                            0,
                            /* nBg */
                            0,
                        },
                    },
                },
                /* nDetectionZoneGroupNum */
                0,
                /* tGroupDetectionZoneList[10] */
                {
                    /* 0 */
                    {
                        /* nDetectionZoneNum */
                        0,
                        /* tDetectionZoneList[5] */
                        {
                            /* 0 */
                            {
                                /* szDescription[32] */
                                "",
                                /* nZoneType */
                                0,
                                /* tPoly */
                                {
                                    /* nPntCnt */
                                    0,
                                    /* tPntArray[15] */
                                    {
                                        /* 0 */
                                        {
                                            /* nRg */
                                            0,
                                            /* nBg */
                                            0,
                                        },
                                    },
                                },
                                /* nLux[2] */
                                {0, 0, /*0 - 1*/},
                            },
                        },
                    },
                },
                /* nTrigerType1st */
                0,
                /* nTrigerType2nd */
                0,
                /* nTrigerType3rd */
                0,
                /* nTrigerValue1st[2] */
                {0, 0, /*0 - 1*/},
                /* nTrigerValue2nd[2] */
                {0, 0, /*0 - 1*/},
                /* nTrigerValue3rd */
                0,
            },
        },
        /* tInitParam */
        {
            /* tGains */
            {
                /* nGainR */
                486,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                543,
            },
            /* nDampRatio */
            100000,
        },
        /* nMode */
        0,
        /* nIndex */
        0,
        /* nDampRatio */
        838861,
        /* nToleranceRg */
        3145,
        /* nToleranceBg */
        3145,
        /* nLuxVeryDarkStart */
        0,
        /* nLuxVeryDarkEnd */
        8192,
        /* nLuxDarkStart */
        10240,
        /* nLuxDarkEnd */
        51200,
        /* nLuxIndoorStart */
        61440,
        /* nLuxIndoorEnd */
        409600,
        /* nLuxTransInStart */
        460800,
        /* nLuxTransInEnd */
        972800,
        /* nLuxTransOutStart */
        1024000,
        /* nLuxTransOutEnd */
        1894400,
        /* nLuxOutdoorStart */
        1945600,
        /* nLuxOutdoorEnd */
        4044800,
        /* nLuxBrightStart */
        4096000,
        /* nLuxBrightEnd */
        10137600,
        /* nLuxVeryBrightStart */
        10240000,
        /* nCctMinInner */
        2000,
        /* nCctMaxInner */
        10000,
        /* nCctMinOuter */
        1800,
        /* nCctMaxOuter */
        12000,
        /* nCctSplitHtoA */
        2450,
        /* nCctSplitAtoF */
        3000,
        /* nCctSplitFtoD5 */
        4100,
        /* nCctSplitD5toD6 */
        5350,
        /* nCctSplitD6toS */
        7000,
        /* nGridWeightEnable */
        0,
        /* nGridWeightRow */
        9,
        /* nGridWeightColumn */
        9,
        /* nGridWeightTable[54][72] */
        {
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 8*/},
        },
        /* nGrayZoneLuxWeight[24][8] */
        {
            {300, 300, 300, 200, 0, 0, 0, 0, /*0 - 7*/},
            {800, 800, 700, 400, 0, 0, 0, 0, /*0 - 7*/},
            {300, 800, 700, 400, 0, 0, 0, 0, /*0 - 7*/},
            {200, 100, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {200, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {800, 600, 500, 200, 0, 0, 0, 0, /*0 - 7*/},
            {200, 600, 800, 200, 0, 0, 0, 0, /*0 - 7*/},
            {500, 150, 1000, 50, 0, 0, 0, 0, /*0 - 7*/},
            {100, 100, 100, 0, 0, 0, 50, 50, /*0 - 7*/},
            {600, 500, 400, 500, 400, 200, 100, 100, /*0 - 7*/},
            {300, 1000, 1000, 600, 800, 200, 200, 200, /*0 - 7*/},
            {400, 600, 600, 0, 0, 0, 0, 0, /*0 - 7*/},
            {300, 100, 0, 100, 100, 450, 250, 200, /*0 - 7*/},
            {400, 500, 200, 600, 600, 900, 500, 400, /*0 - 7*/},
            {800, 500, 800, 900, 800, 900, 700, 700, /*0 - 7*/},
            {400, 10, 500, 600, 0, 0, 400, 400, /*0 - 7*/},
            {100, 300, 0, 100, 500, 400, 300, 300, /*0 - 7*/},
            {400, 500, 800, 600, 1000, 700, 500, 450, /*0 - 7*/},
            {500, 500, 800, 800, 1000, 800, 900, 800, /*0 - 7*/},
            {100, 10, 400, 400, 0, 0, 0, 0, /*0 - 7*/},
            {100, 200, 200, 200, 700, 700, 700, 700, /*0 - 7*/},
            {500, 500, 500, 500, 500, 500, 400, 400, /*0 - 7*/},
            {500, 500, 500, 500, 600, 400, 400, 400, /*0 - 7*/},
            {400, 400, 500, 500, 700, 700, 700, 700, /*0 - 7*/},
        },
        /* nExtIlllumLuxWeight[32][8] */
        {
            {1000, 1000, 1000, 200, 50, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        },
        /* nLumaWeightNum */
        8,
        /* nLumaSplitList[32] */
        {51, 819, 3072, 8192, 20480, 40960, 92160, 215040, /*0 - 7*/},
        /* nLumaWeightList[8][32] */
        {
            {51, 102, 614, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {102, 205, 819, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {100, 200, 820, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
        },
        /* bMixLightEn */
        1,
        /* nMixLightProba_0_CctStd[8] */
        {400, 400, 400, 450, 600, 9998, 9998, 9998, /*0 - 7*/},
        /* nMixLightProba_100_CctStd[8] */
        {600, 600, 600, 800, 1000, 9999, 9999, 9999, /*0 - 7*/},
        /* nMixLightProba_100_SatDiscnt[8] */
        {100, 100, 100, 100, 100, 100, 100, 100, /*0 - 7*/},
        /* nMixLightKneeNum */
        8,
        /* nMixLightKneeCctList[32] */
        {2300, 2800, 3500, 4600, 5500, 6500, 7500, 8500, /*0 - 7*/},
        /* nMixLightKneeWtList[8][32] */
        {
            {100, 512, 614, 640, 820, 820, 820, 820, /*0 - 7*/},
            {100, 512, 614, 820, 820, 820, 820, 820, /*0 - 7*/},
            {205, 307, 310, 820, 820, 820, 820, 820, /*0 - 7*/},
            {205, 205, 310, 820, 820, 820, 820, 820, /*0 - 7*/},
            {407, 407, 512, 1024, 1024, 820, 820, 820, /*0 - 7*/},
            {512, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {512, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {512, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
        },
        /* tDomParamList[4] */
        {
            /* 0 */
            {
                /* nDominantEnable */
                1,
                /* nDomMinCctThresh */
                2000,
                /* nDomMaxCctThresh */
                2500,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
            /* 1 */
            {
                /* nDominantEnable */
                1,
                /* nDomMinCctThresh */
                2500,
                /* nDomMaxCctThresh */
                3300,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
            /* 2 */
            {
                /* nDominantEnable */
                1,
                /* nDomMinCctThresh */
                3300,
                /* nDomMaxCctThresh */
                4600,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
            /* 3 */
            {
                /* nDominantEnable */
                1,
                /* nDomMinCctThresh */
                4600,
                /* nDomMaxCctThresh */
                8500,
                /* nDom2AllRatioThresh */
                409,
                /* nDom2MinorRatioThresh */
                4096,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                204,
            },
        },
        /* nTmpoStabTriggerAvgBlkWt */
        10,
        /* nPlanckianLocusProjEn */
        0,
        /* nPlanckianLocusNotProjLux */
        4096000,
        /* nPlanckianLocusFullProjLux */
        10240000,
        /* nSpatialEn */
        0,
        /* nSpatialSegmetNum */
        2,
        /* nSpatialStartLux[32] */
        {4096000, 11264000, /*0 - 1*/},
        /* nSpatialEndLux[32] */
        {10240000, 1024000000, /*0 - 1*/},
        /* nSpatialRg[32] */
        {488636, 622854, /*0 - 1*/},
        /* nSpatialBg[32] */
        {636485, 615514, /*0 - 1*/},
        /* nFusionGrayZoneConfid_0_AvgBlkWeight */
        20,
        /* nFusionGrayZoneConfid_100_AvgBlkWeight */
        500,
        /* nFusionSpatialConfid_0_Lux */
        5120000,
        /* nFusionSpatialConfid_100_Lux */
        15360000,
        /* nFusionWeightGrayZone */
        1024,
        /* nFusionWeightSpatial */
        0,
        /* nPreferEn */
        0,
        /* nPreferCctNum */
        10,
        /* nPreferSrcCctList[32] */
        {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
        /* nPreferDstCct[8][32] */
        {
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2950, 3800, 4450, 5050, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4550, 5100, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4500, 5100, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4450, 5100, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4500, 5100, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4500, 5100, 6600, 7600, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
        },
        /* nPreferGrShift[8][32] */
        {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        },
        /* nGreenCutEn */
        0,
        /* nGreenCutLuxListNum */
        0,
        /* nGreenCutCctListNum */
        0,
        /* nGreenCutLuxList */
        {0, 0, 0, 0, 0, 0, 0, 0},
        /* nGreenCutWeight */
        {102, 102, 102, 102, 102, 102, 102, 102},
        /* nGreenCutBreakAngle */
        {52429, 52429, 52429, 52429, 52429, 52429, 52429, 52429},
        /* nGreenCutOffsetRg */
        {31457, 31457, 31457, 31457, 31457, 31457, 31457, 31457},
        /* nGreenCutOffsetBg */
        {-20971, -20971, -20971, -20971, -20971, -20971, -20971, -20971},
        /* nGreenCutCctList */
        {0, 0, 0, 0, 0, 0, 0, 0},
        /* nGreenCutCctDiscount */
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024},
        /* nMultiCamSyncMode */
        0,
    },
    /* tLogParam */
    {
        /* nLogLevel */
        4,
        /* nLogTarget */
        0,
        /* nAlgoPrintInterval */
        0,
        /* nStatisticsPrintInterval */
        0,
    },
};

const static AX_ISP_IQ_CAF_PARAM_T caf_param_sdr = {
    /* nScanType */
    0,
    /* nGlobalScanStep */
    0,
    /* nSearchDownFrameTh */
    0,
    /* nSearchDownSerialSlopeTh */
    0,
    /* nSearchDownSingleSlopeTh */
    0,
    /* nSearchUpFrameTh */
    0,
    /* nSearchUpSerialSlopeTh */
    0,
    /* nSearchUpSingleSlopeTh */
    0,
    /* nSearchBigStepUpSlopeTh */
    0,
    /* nSearchBigStep */
    0,
    /* nSearchSmallStep */
    0,
    /* nSearchProbeStep */
    0,
    /* nSearchProbeFrameTh */
    0,
    /* bContinuousAfEn */
    0,
    /* nSceneChangeLumaTh */
    0,
    /* nSceneSettledLumaTh */
    0,
    /* nSceneSlowChangeLumaTh */
    0,
    /* nSceneFvChangeLumaTh */
    0,
    /* nSceneFvChangeRatioTh */
    0,
    /* nSpotlightZoomRatioTh */
    0,
    /* tWeight */
    {
        /* nMuX */
        0,
        /* nMuY */
        0,
        /* nSigmaX */
        0,
        /* nSigmaY */
        0,
        /* nCoeffV1 */
        0,
        /* nCoeffV2 */
        0,
        /* nCoeffH1 */
        0,
        /* nCoeffH2 */
        0,
    },
            /* zoom tracking */
    {
        /*nDefaultDistance*/
        0,
        /*nStepFactor*/
        0,
        /*nProbStepCoff*/
        0,
        /*nMaxProbeStep*/
        0,
        /*nMinProbeStep*/
        0,
        /*nFvDiffOverThresh*/
        0,
        /*nFvDiffMiddleThresh*/
        0,
        /*nFvDiffUnderThresh*/
        0,
        /*nHeightDistanceCoff*/
        0,
        /*nMiddleDistanceCoff*/
        0,
        /*nUnderDistanceCoff*/
        0,
        /*nProportionalCoff*/
        0,
        /*nIntegralCoff*/
        0,
        /*nDifferentialCoff*/
        0,
    },
};

const static AX_ISP_IQ_DPC_PARAM_T dpc_param_sdr = {
    /* nDpcEnable */
    1,
    /* nStaticDpcEnable */
    0,
    /* nDynamicDpcEnable */
    1,
    /* nColorLimitEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tDpcParam */
    {
        /* tHcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {0, 0, 0, 0, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {0, 0, 0, 0, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {0, 0, 0, 0, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {0, 0, 0, 0, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* tLcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {31885391, 33453032, 33478218, 30073262, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {1581515385, 1659270375, 1660519599, 1491633774, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {699012, 652693, 658010, 711650, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {13784189, 14521898, 14174042, 13461120, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {-660543, -4851408, -3321388, 689692, /*0 - 3*/},
        },
    },
    /* tManualParam */
    {
        /* nNoiseRatio */
        128,
        /* nDpType */
        0,
        /* nNonChwiseEn */
        0,
        /* nChwiseStr */
        30,
        /* nDetCoarseStr */
        65,
        /* nDetFineStr */
        48,
        /* nDynamicDpcStr */
        136,
        /* nEdgeStr */
        255,
        /* nHotColdTypeStr */
        32,
        /* nSupWinkStr */
        255,
        /* nDynamicDpClrLimOffset */
        {
            /* nUpperLimit */
            1024,
            /* nLowerLimit */
            1024,
        },
        /* nStaticDpClrLimOffset */
        {
            /* nUpperLimit */
            1024,
            /* nLowerLimit */
            1024,
        },
        /* nNormalPixDpClrLimOffset */
        {
            /* nUpperLimit */
            1024,
            /* nLowerLimit */
            1024,
        },
        /* nDynamicDpClrLimStr */
        128,
        /* nStaticDpClrLimStr */
        128,
        /* nNormalPixDpClrLimStr */
        128,
        /* nPreDetLevelSlope */
        4,
        /* nPreDetLevelOffset */
        0,
        /* nPreDetLevelMax */
        256,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[16] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nNoiseRatio[16] */
        {1, 1, 1, 1, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nDpType[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nNonChwiseEn[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nChwiseStr[16] */
        {16, 16, 16, 16, 30, 30, 30, 30, 30, 30, 30, 30, /*0 - 11*/},
        /* nDetCoarseStr[16] */
        {230, 230, 230, 228, 156, 230, 230, 230, 230, 200, 200, 200, /*0 - 11*/},
        /* nDetFineStr[16] */
        {8, 8, 8, 8, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 11*/},
        /* nDynamicDpcStr[16] */
        {256, 256, 256, 200, 200, 3000, 3000, 3000, 3000, 3000, 2800, 2800, /*0 - 11*/},
        /* nEdgeStr[16] */
        {128, 128, 128, 128, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 11*/},
        /* nHotColdTypeStr[16] */
        {0, 0, 0, 0, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nSupWinkStr[16] */
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 11*/},
        /* nDynamicDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 1 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 2 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 3 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 4 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 5 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 6 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 7 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 8 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 9 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 10 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 11 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
        },
        /* nStaticDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 1 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 2 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 3 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 4 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 5 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 6 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 7 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 8 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 9 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 10 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 11 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
        },
        /* nNormalPixDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 1 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 2 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 3 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 4 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 5 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 6 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 7 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 8 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 9 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 10 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
            /* 11 */
            {
                /* nUpperLimit */
                1024,
                /* nLowerLimit */
                1024,
            },
        },
        /* nDynamicDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nStaticDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nNormalPixDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nPreDetLevelSlope[16] */
        {0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nPreDetLevelOffset[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nPreDetLevelMax[16] */
        {0, 0, 0, 0, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 11*/},
    },
};

const static AX_ISP_IQ_BLC_PARAM_T blc_param_sdr = {
    /* nBlcEnable */
    1,
    /* nSblEnable */
    1,
    /* nAutoMode */
    0,
    /* tBiasOut[4] */
    {
        {0, 0, 0, 0, /*0 - 3*/},
    },
    /* tManualParam[4] */
    {
        /* 0 */
        {
            /* nSblRValue */
            4260,
            /* nSblGrValue */
            4260,
            /* nSblGbValue */
            4260,
            /* nSblBValue */
            4260,
        },
        /* 1 */
        {
            /* nSblRValue */
            0,
            /* nSblGrValue */
            0,
            /* nSblGbValue */
            0,
            /* nSblBValue */
            0,
        },
        /* 2 */
        {
            /* nSblRValue */
            0,
            /* nSblGrValue */
            0,
            /* nSblGbValue */
            0,
            /* nSblBValue */
            0,
        },
        /* 3 */
        {
            /* nSblRValue */
            0,
            /* nSblGrValue */
            0,
            /* nSblGbValue */
            0,
            /* nSblBValue */
            0,
        },
    },
    /* tAutoParam */
    {
        /* tHcgAutoTable */
        {
            /* nGainGrpNum */
            12,
            /* nExposeTimeGrpNum */
            2,
            /* nGain[16] */
            {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
            /* nExposeTime[10] */
            {1000, 5000, /*0 - 1*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4100, 4096, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4250, 4250, /*0 - 1*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4100, 4096, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4250, 4250, /*0 - 1*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4100, 4096, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4250, 4250, /*0 - 1*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4100, 4096, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4100, 4100, /*0 - 1*/},
                {4250, 4250, /*0 - 1*/},
            },
            /* tBiasOut */
            {
                /* 0 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 1 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 2 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 3 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 4 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 5 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 6 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 7 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 8 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 9 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 10 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 11 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
            },
        },
        /* tLcgAutoTable */
        {
            /* nGainGrpNum */
            16,
            /* nExposeTimeGrpNum */
            1,
            /* nGain[16] */
            {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 184320, 262133, 262656, 389120, 491520, 655360, 8460160, 1048535, /*0 - 15*/},
            /* nExposeTime[10] */
            {40000, /*0 - 0*/},
            /* nAutoSblRValue[16][10] */
            {
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4364, /*0 - 0*/},
                {4361, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4352, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4350, /*0 - 0*/},
                {4360, /*0 - 0*/},
                {4354, /*0 - 0*/},
                {4350, /*0 - 0*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4364, /*0 - 0*/},
                {4363, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4365, /*0 - 0*/},
                {4365, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4335, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4317, /*0 - 0*/},
                {4360, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4310, /*0 - 0*/},
                {4314, /*0 - 0*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4364, /*0 - 0*/},
                {4363, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4365, /*0 - 0*/},
                {4365, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4335, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4317, /*0 - 0*/},
                {4360, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4310, /*0 - 0*/},
                {4314, /*0 - 0*/},
            },
            /* nAutoSblBValue[16][10] */
            {
   				{4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4364, /*0 - 0*/},
                {4361, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4280, /*0 - 0*/},
                {4300, /*0 - 0*/},
                {4297, /*0 - 0*/},
                {4295, /*0 - 0*/},
                {4299, /*0 - 0*/},
                {4298, /*0 - 0*/},
                {4279, /*0 - 0*/},
                {4275, /*0 - 0*/},
            },
            /* tBiasOut */
            {
                /* 0 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 1 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 2 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 3 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 4 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 5 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 6 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 7 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 8 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 9 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 10 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
                /* 11 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                    /* 1 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_HDR_PARAM_T hdr_param_sdr = {
    /* nEnable */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* nDebugMode */
    0,
    /* tMotDetParam */
    {
        /* nCoarseMotMaskRatio[2] */
        {0, 0, /*0 - 1*/},
        /* nMotIirRatio[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tExpMaskParam */
    {
        /* nCoarseExpMaskRatio[2][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nExpIirRatio[2][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nExpYRatio[2] */
        {0, 0, /*0 - 1*/},
        /* nExpWeightLut[2][257] */
        {
            {
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
                0, /*256 - 256*/
            },
        },
    },
};

const static AX_ISP_IQ_AINR_PARAM_T ainr_param_sdr = {
    /* nEnable */
    1,
    /* nAutoMode */
    1,
    /* bUpdateTable */
    1,
    /* nRefMode */
    1,
    /* nHdrMode */
    1,
    /* tManualParam */
    {
        /* AX_ISP_AINR_META_PARAM_T */
        {
            /* szModelPath[256] */
            "/opt/etc/models/aiisp/SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
            /* szModelName[256] */
            "SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
            /* szTemporalBaseNrName[256] */
            "sr_3d_S1-R600C_SDR_SR1-4x",
            /* szSpatialBaseNrName[256] */
            "sr_2d_S1-R600C_SDR_SR1-4x_0701",
            /* nHcgMode */
            0,
            /* nIsoThresholdMin */
            0,
            /* nIsoThresholdMax */
            0,
            /* nHdrRatioMin */
            1024,
            /* nHdrRatioMax */
            1024,
            /* nBiasIn2D[4] */
            {4260, 4260, 4260, 4260, /*0 - 3*/},
            /* nBiasIn3D[4] */
            {4260, 4260, 4260, 4260, /*0 - 3*/},
        },
        /* AX_ISP_AINR_MANUAL_PARAM_T */
        {
            /*tBias[4][4]*/
            {
                /* nBiasIn[4] */
                {3, 0, 0, 3, /*0 - 3*/},
            },
            /* tNonSens */
            {
                /* nTemporalFilterStrLut[17][2] */
                {
                    {0, 0, /*0 - 1*/},
                    {16, 307, /*0 - 1*/},
                    {32, 586, /*0 - 1*/},
                    {48, 1350, /*0 - 1*/},
                    {64, 1664, /*0 - 1*/},
                    {80, 1977, /*0 - 1*/},
                    {96, 2360, /*0 - 1*/},
                    {112, 2638, /*0 - 1*/},
                    {128, 2917, /*0 - 1*/},
                    {144, 3126, /*0 - 1*/},
                    {160, 3370, /*0 - 1*/},
                    {176, 3648, /*0 - 1*/},
                    {192, 3787, /*0 - 1*/},
                    {208, 3857, /*0 - 1*/},
                    {224, 3857, /*0 - 1*/},
                    {240, 4096, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
                /* nVstTemporalFilterStrLut[17][2] */
                {
                    {0, 0, /*0 - 1*/},
                    {16, 256, /*0 - 1*/},
                    {32, 512, /*0 - 1*/},
                    {48, 768, /*0 - 1*/},
                    {64, 1024, /*0 - 1*/},
                    {80, 1280, /*0 - 1*/},
                    {96, 1536, /*0 - 1*/},
                    {112, 1792, /*0 - 1*/},
                    {128, 2048, /*0 - 1*/},
                    {144, 2304, /*0 - 1*/},
                    {160, 2560, /*0 - 1*/},
                    {176, 2816, /*0 - 1*/},
                    {192, 3072, /*0 - 1*/},
                    {208, 3328, /*0 - 1*/},
                    {224, 3584, /*0 - 1*/},
                    {240, 3840, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
            },
            /* tSens */
            {
                /* nSpatialNrStrLut[17][2] */
                {
                    {0, 3382, /*0 - 1*/},
                    {16, 3382, /*0 - 1*/},
                    {32, 3546, /*0 - 1*/},
                    {48, 3663, /*0 - 1*/},
                    {64, 3751, /*0 - 1*/},
                    {80, 3839, /*0 - 1*/},
                    {96, 3898, /*0 - 1*/},
                    {112, 3927, /*0 - 1*/},
                    {128, 3986, /*0 - 1*/},
                    {144, 4015, /*0 - 1*/},
                    {160, 4074, /*0 - 1*/},
                    {176, 4096, /*0 - 1*/},
                    {192, 4096, /*0 - 1*/},
                    {208, 4096, /*0 - 1*/},
                    {224, 4096, /*0 - 1*/},
                    {240, 4066, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
            },
        },
    },
    /* tAutoParam */
    {
        /* nAutoModelNum */
        5,
        /* tAutoModelTable[12] */
        {
            /* 0 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "sr_3d_S1-R600C_SDR_SR1-4x",
                    /* szSpatialBaseNrName[256] */
                    "sr_2d_S1-R600C_SDR_SR1-4x_0701",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    100,
                    /* nIsoThresholdMax */
                    400,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4240, 4240, 4240, 4240, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4240, 4240, 4240, 4240, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {1024, 2048, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {2048, 4100, /*0 - 1*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, 1, 1, 2, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, 0, 0, 2, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {1024, 2048, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {2048, 4100, /*0 - 1*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64, 1024, /*0 - 1*/},
                                {80, 1325, /*0 - 1*/},
                                {96, 1652, /*0 - 1*/},
                                {112, 1920, /*0 - 1*/},
                                {128, 2247, /*0 - 1*/},
                                {144, 2574, /*0 - 1*/},
                                {160, 2901, /*0 - 1*/},
                                {176, 3198, /*0 - 1*/},
                                {192, 3495, /*0 - 1*/},
                                {208, 3763, /*0 - 1*/},
                                {224, 3971, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64, 1024, /*0 - 1*/},
                                {80, 1308, /*0 - 1*/},
                                {96, 1609, /*0 - 1*/},
                                {112, 1872, /*0 - 1*/},
                                {128, 2173, /*0 - 1*/},
                                {144, 2473, /*0 - 1*/},
                                {160, 2773, /*0 - 1*/},
                                {176, 3055, /*0 - 1*/},
                                {192, 3337, /*0 - 1*/},
                                {208, 3600, /*0 - 1*/},
                                {224, 3826, /*0 - 1*/},
                                {240, 4000, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },

                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
 
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {1024, 2048, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {2048, 4100, /*0 - 1*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1037, /*0 - 1*/},
                                {16, 1176, /*0 - 1*/},
                                {32, 1316, /*0 - 1*/},
                                {48, 1490, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1664, /*0 - 1*/},
                                {96, 1664, /*0 - 1*/},
                                {112, 1664, /*0 - 1*/},
                                {128, 1664, /*0 - 1*/},
                                {144, 1664, /*0 - 1*/},
                                {160, 1664, /*0 - 1*/},
                                {176, 1664, /*0 - 1*/},
                                {192, 1664, /*0 - 1*/},
                                {208, 1664, /*0 - 1*/},
                                {224, 1520, /*0 - 1*/},
                                {240, 1316, /*0 - 1*/},
                                {255, 1037, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1001, /*0 - 1*/},
                                {16, 1164, /*0 - 1*/},
                                {32, 1306, /*0 - 1*/},
                                {48, 1459, /*0 - 1*/},
                                {64, 1586, /*0 - 1*/},
                                {80, 1586, /*0 - 1*/},
                                {96, 1586, /*0 - 1*/},
                                {112, 1586, /*0 - 1*/},
                                {128, 1586, /*0 - 1*/},
                                {144, 1586, /*0 - 1*/},
                                {160, 1586, /*0 - 1*/},
                                {176, 1586, /*0 - 1*/},
                                {192, 1586, /*0 - 1*/},
                                {208, 1586, /*0 - 1*/},
                                {224, 1378, /*0 - 1*/},
                                {240, 1160, /*0 - 1*/},
                                {255, 867, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 1 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-plus-Patch-VB1_3d_S1-R600C_iso100_800_L300_1500_F5_C4_M1",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-plus-Patch-VB1_2d_S1-R600C_iso100_800_L800_8000_F1_C1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    400,
                    /* nIsoThresholdMax */
                    1600,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4350, 4335, 4335, 4350, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4350, 4335, 4335, 4350, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {4100, 8200, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {8200, 16400, /*0 - 1*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 1, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {4100, 8200, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {8200, 16400, /*0 - 1*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 534, /*0 - 1*/},
                                {32, 1045, /*0 - 1*/},
                                {48, 1571, /*0 - 1*/},
                                {64, 1996, /*0 - 1*/},
                                {80, 2391, /*0 - 1*/},
                                {96, 2749, /*0 - 1*/},
                                {112, 3072, /*0 - 1*/},
                                {128, 3337, /*0 - 1*/},
                                {144, 3600, /*0 - 1*/},
                                {160, 3802, /*0 - 1*/},
                                {176, 3935, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 615, /*0 - 1*/},
                                {32, 1236, /*0 - 1*/},
                                {48, 1791, /*0 - 1*/},
                                {64, 2362, /*0 - 1*/},
                                {80, 2804, /*0 - 1*/},
                                {96, 3210, /*0 - 1*/},
                                {112, 3485, /*0 - 1*/},
                                {128, 3698, /*0 - 1*/},
                                {144, 3810, /*0 - 1*/},
                                {160, 3887, /*0 - 1*/},
                                {176, 3894, /*0 - 1*/},
                                {192, 3968, /*0 - 1*/},
                                {208, 4034, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },                           
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {4100, 8200, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {8200, 16400, /*0 - 1*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 911, /*0 - 1*/},
                                {32, 1348, /*0 - 1*/},
                                {48, 1627, /*0 - 1*/},
                                {64, 1772, /*0 - 1*/},
                                {80, 1981, /*0 - 1*/},
                                {96, 2057, /*0 - 1*/},
                                {112, 2132, /*0 - 1*/},
                                {128, 2241, /*0 - 1*/},
                                {144, 2348, /*0 - 1*/},
                                {160, 2420, /*0 - 1*/},
                                {176, 2524, /*0 - 1*/},
                                {192, 2694, /*0 - 1*/},
                                {208, 2799, /*0 - 1*/},
                                {224, 2937, /*0 - 1*/},
                                {240, 3103, /*0 - 1*/},
                                {255, 3271, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3300, /*0 - 1*/},
                                {16, 3300, /*0 - 1*/},
                                {32, 3300, /*0 - 1*/},
                                {48, 3300, /*0 - 1*/},
                                {64,  3300, /*0 - 1*/},
                                {80,  3300, /*0 - 1*/},
                                {96,  3300, /*0 - 1*/},
                                {112, 3300, /*0 - 1*/},
                                {128, 3300, /*0 - 1*/},
                                {144, 3300, /*0 - 1*/},
                                {160, 3300, /*0 - 1*/},
                                {176, 3500, /*0 - 1*/},
                                {192, 3500, /*0 - 1*/},
                                {208, 3500, /*0 - 1*/},
                                {224, 3700, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 2 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso100_2000_L1000_8000_F4_C2_M3",
                    /* szSpatialBaseNrName[256] */
                    "0.0.6-SC850SL-add_2d_600G_iso5000_40000_L400_1500_F1_C1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    1600,
                    /* nIsoThresholdMax */
                    6400,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4350, 4317, 4317, 4350, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4350, 4317, 4317, 4350, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {16400, 32799, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {32799, 65533, /*0 - 1*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 1, /*0 - 3*/},
                            {0, 0, 0, 1, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {16400, 32799, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {32799, 65533, /*0 - 1*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 619, /*0 - 1*/},
                                {32, 1246, /*0 - 1*/},
                                {48, 1803, /*0 - 1*/},
                                {64, 2374, /*0 - 1*/},
                                {80, 2814, /*0 - 1*/},
                                {96, 3220, /*0 - 1*/},
                                {112, 3492, /*0 - 1*/},
                                {128, 3703, /*0 - 1*/},
                                {144, 3810, /*0 - 1*/},
                                {160, 3884, /*0 - 1*/},
                                {176, 3889, /*0 - 1*/},
                                {192, 3958, /*0 - 1*/},
                                {208, 4028, /*0 - 1*/},
                                {224, 4091, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 619, /*0 - 1*/},
                                {32, 1186, /*0 - 1*/},
                                {48, 1653, /*0 - 1*/},
                                {64, 2011, /*0 - 1*/},
                                {80, 2270, /*0 - 1*/},
                                {96, 2474, /*0 - 1*/},
                                {112, 2711, /*0 - 1*/},
                                {128, 2896, /*0 - 1*/},
                                {144, 3098, /*0 - 1*/},
                                {160, 3292, /*0 - 1*/},
                                {176, 3508, /*0 - 1*/},
                                {192, 3695, /*0 - 1*/},
                                {208, 3907, /*0 - 1*/},
                                {224, 4082, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {16400, 32799, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {32799, 65533, /*0 - 1*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 42, /*0 - 1*/},
                                {16, 1449, /*0 - 1*/},
                                {32, 1826, /*0 - 1*/},
                                {48, 1998, /*0 - 1*/},
                                {64, 2142, /*0 - 1*/},
                                {80, 2282, /*0 - 1*/},
                                {96, 2398, /*0 - 1*/},
                                {112, 2567, /*0 - 1*/},
                                {128, 2654, /*0 - 1*/},
                                {144, 2685, /*0 - 1*/},
                                {160, 2770, /*0 - 1*/},
                                {176, 2827, /*0 - 1*/},
                                {192, 2914, /*0 - 1*/},
                                {208, 3001, /*0 - 1*/},
                                {224, 3060, /*0 - 1*/},
                                {240, 3119, /*0 - 1*/},
                                {255, 3118, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 375, /*0 - 1*/},
                                {16, 3099, /*0 - 1*/},
                                {32, 3171, /*0 - 1*/},
                                {48, 3185, /*0 - 1*/},
                                {64, 3195, /*0 - 1*/},
                                {80, 3199, /*0 - 1*/},
                                {96, 3209, /*0 - 1*/},
                                {112, 3218, /*0 - 1*/},
                                {128, 3258, /*0 - 1*/},
                                {144, 3262, /*0 - 1*/},
                                {160, 3267, /*0 - 1*/},
                                {176, 3302, /*0 - 1*/},
                                {192, 3311, /*0 - 1*/},
                                {208, 3321, /*0 - 1*/},
                                {224, 3330, /*0 - 1*/},
                                {240, 3340, /*0 - 1*/},
                                {255, 3384, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 3 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso100_2000_L1000_8000_F4_C2_M3",
                    /* szSpatialBaseNrName[256] */
                    "0.0.6-SC850SL-add_2d_600G_iso5000_40000_L400_1500_F1_C1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    6400,
                    /* nIsoThresholdMax */
                    25600,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4247, 4243, 4243, 4245, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4247, 4243, 4243, 4245, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {65533, 102400, 131066, 184320, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {102400, 131066, 184320, 262133, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            {1, 0, 0, 1, /*0 - 3*/},
                            {2, 0, 0, 3, /*0 - 3*/},
                            {2, 0, 0, 3, /*0 - 3*/},
                            {2, 0, 0, 3, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {65533, 131066, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {131066, 262133, /*0 - 1*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 478, /*0 - 1*/},
                                {32, 909, /*0 - 1*/},
                                {48, 1299, /*0 - 1*/},
                                {64, 1604, /*0 - 1*/},
                                {80, 1860, /*0 - 1*/},
                                {96, 2098, /*0 - 1*/},
                                {112, 2333, /*0 - 1*/},
                                {128, 2569, /*0 - 1*/},
                                {144, 2821, /*0 - 1*/},
                                {160, 3087, /*0 - 1*/},
                                {176, 3366, /*0 - 1*/},
                                {192, 3617, /*0 - 1*/},
                                {208, 3867, /*0 - 1*/},
                                {224, 4085, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 338, /*0 - 1*/},
                                {32, 645, /*0 - 1*/},
                                {48, 973, /*0 - 1*/},
                                {64, 1232, /*0 - 1*/},
                                {80, 1514, /*0 - 1*/},
                                {96, 1827, /*0 - 1*/},
                                {112, 2097, /*0 - 1*/},
                                {128, 2444, /*0 - 1*/},
                                {144, 2782, /*0 - 1*/},
                                {160, 3120, /*0 - 1*/},
                                {176, 3433, /*0 - 1*/},
                                {192, 3685, /*0 - 1*/},
                                {208, 3900, /*0 - 1*/},
                                {224, 4069, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {65533, 131066, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {131066, 262133, /*0 - 1*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 341, /*0 - 1*/},
                                {16, 3303, /*0 - 1*/},
                                {32, 3301, /*0 - 1*/},
                                {48, 3301, /*0 - 1*/},
                                {64, 3283, /*0 - 1*/},
                                {80, 3283, /*0 - 1*/},
                                {96, 3283, /*0 - 1*/},
                                {112, 3283, /*0 - 1*/},
                                {128, 3323, /*0 - 1*/},
                                {144, 3318, /*0 - 1*/},
                                {160, 3336, /*0 - 1*/},
                                {176, 3371, /*0 - 1*/},
                                {192, 3389, /*0 - 1*/},
                                {208, 3426, /*0 - 1*/},
                                {224, 3444, /*0 - 1*/},
                                {240, 3462, /*0 - 1*/},
                                {255, 3478, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 691, /*0 - 1*/},
                                {16, 3421, /*0 - 1*/},
                                {32, 3408, /*0 - 1*/},
                                {48, 3408, /*0 - 1*/},
                                {64, 3382, /*0 - 1*/},
                                {80, 3382, /*0 - 1*/},
                                {96, 3382, /*0 - 1*/},
                                {112, 3382, /*0 - 1*/},
                                {128, 3416, /*0 - 1*/},
                                {144, 3408, /*0 - 1*/},
                                {160, 3435, /*0 - 1*/},
                                {176, 3478, /*0 - 1*/},
                                {192, 3512, /*0 - 1*/},
                                {208, 3588, /*0 - 1*/},
                                {224, 3638, /*0 - 1*/},
                                {240, 3687, /*0 - 1*/},
                                {255, 3695, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 4 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC850SL_SDR_3840x2160_10b_LCG_ISP1_A1-8X__0300_MULTI5_00000876771_240808_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso100_2000_L1000_8000_F4_C2_M3",
                    /* szSpatialBaseNrName[256] */
                    "0.0.6-SC850SL-add_2d_600G_iso5000_40000_L400_1500_F1_C1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    25600,
                    /* nIsoThresholdMax */
                    102400,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4260, 4260, 4260, 4260, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4260, 4260, 4260, 4260, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {262133, 491520, 819200, 1048576, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {491520, 716800, 819300, 1048600, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            {4, 0, 0, 3, /*0 - 3*/},
                            {3, 0, 0, 3, /*0 - 3*/},
                            {3, 0, 0, 3, /*0 - 3*/},
                            {3, 0, 0, 3, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {262133, 524267, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {524267, 1048535, /*0 - 1*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 307, /*0 - 1*/},
                                {32, 586, /*0 - 1*/},
                                {48, 1350, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1977, /*0 - 1*/},
                                {96, 2360, /*0 - 1*/},
                                {112, 2638, /*0 - 1*/},
                                {128, 2917, /*0 - 1*/},
                                {144, 3126, /*0 - 1*/},
                                {160, 3370, /*0 - 1*/},
                                {176, 3648, /*0 - 1*/},
                                {192, 3787, /*0 - 1*/},
                                {208, 3857, /*0 - 1*/},
                                {224, 3857, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 308, /*0 - 1*/},
                                {32, 588, /*0 - 1*/},
                                {48, 1349, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1977, /*0 - 1*/},
                                {96, 2360, /*0 - 1*/},
                                {112, 2638, /*0 - 1*/},
                                {128, 2917, /*0 - 1*/},
                                {144, 3126, /*0 - 1*/},
                                {160, 3370, /*0 - 1*/},
                                {176, 3647, /*0 - 1*/},
                                {192, 3787, /*0 - 1*/},
                                {208, 3858, /*0 - 1*/},
                                {224, 3859, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64,  1024, /*0 - 1*/},
                                {80,  1280, /*0 - 1*/},
                                {96,  1536, /*0 - 1*/},
                                {112, 1792, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2304, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        2,
                        /* nRefValStart[4] */
                        {262133, 524267, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {524267, 1048535, /*0 - 1*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 3382, /*0 - 1*/},
                                {16, 3382, /*0 - 1*/},
                                {32, 3546, /*0 - 1*/},
                                {48, 3663, /*0 - 1*/},
                                {64, 3751, /*0 - 1*/},
                                {80, 3839, /*0 - 1*/},
                                {96, 3898, /*0 - 1*/},
                                {112, 3927, /*0 - 1*/},
                                {128, 3986, /*0 - 1*/},
                                {144, 4015, /*0 - 1*/},
                                {160, 4074, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4066, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3384, /*0 - 1*/},
                                {16, 3384, /*0 - 1*/},
                                {32, 3547, /*0 - 1*/},
                                {48, 3664, /*0 - 1*/},
                                {64, 3751, /*0 - 1*/},
                                {80, 3839, /*0 - 1*/},
                                {96, 3898, /*0 - 1*/},
                                {112, 3927, /*0 - 1*/},
                                {128, 3986, /*0 - 1*/},
                                {144, 4015, /*0 - 1*/},
                                {160, 4073, /*0 - 1*/},
                                {176, 4095, /*0 - 1*/},
                                {192, 4095, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4066, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },				
                        },
                    },
                },
            },			
		},
    },
};

const static AX_ISP_IQ_RAW2DNR_PARAM_T raw2dnr_param_sdr = {
    /* nRaw2dnrEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tGlb */
    {
        /* nMfEnable */
        1,
        /* nHfEnable */
        1,
        /* nLutType */
        0,
        /* nMaskThreshold */
        16,
        /* nMaskLimit[2] */
        {0, 255, /*0 - 1*/},
    },
    /* tManual */
    {
        /* nEdgePreserveRatio */
        128,
        /* nNoiseProfileFactor */
        128,
        /* nInterChannelStrength */
        128,
        /* tHrParam */
        {
            /* nHighFreqNrFactor[2][17] */
            {
            {2421, 1200, 128, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
            {3608, 1776, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nLowFreqNrFactor[2][17] */
            {
            {78, 45, 25, 12, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
            {109, 36, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nHfNrStrength[2] */
            {32, 12, /*0 - 1*/},
            /* nMfNrStrength[2] */
            {32, 12, /*0 - 1*/},
        },
    },
    /* tAuto */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nEdgePreserveRatio[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nNoiseProfileFactor[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nInterChannelStrength[12] */
        {255, 255, 255, 255, 255, 255, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* tHrAuto */
        {
            /* nHrGrpNum */
            1,
            /* nHrRefVal[4] */
            {1024, /*0 - 0*/},
            /* tHrParam */
            {
                /* 0 */
                {
                    /* nHighFreqNrFactor[12][2][17] */
                    {
                        /* nHighFreqNrFactor 0 */
                        {
                {512, 384, 256, 256, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
                {512, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
            },
            /* nHighFreqNrFactor 1 */
            {
                {512, 384, 256, 256, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
                {512, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
            },
            /* nHighFreqNrFactor 2 */
            {
                {512, 384, 256, 256, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
                {512, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256},
            },
            /* nHighFreqNrFactor 3 */
            {
                {589, 250, 13, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1200, 589, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 4 */
            {
                {589, 250, 13, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1200, 589, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 5 */
            {
                {589, 250, 13, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1200, 589, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 6 */
            {
                {589, 250, 13, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {1200, 589, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 7 */
            {
                {2421, 1200, 128, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {3608, 1776, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 8 */
            {
                {2421, 1200, 128, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {3608, 1776, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 9 */
            {
                {2421, 1200, 128, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {3608, 1776, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 10 */
            {
                {2421, 1200, 128, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {3608, 1776, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
            },
            /* nHighFreqNrFactor 11 */
            {
                {3608, 1776, 128, 12, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                {3608, 1776, 182, 114, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
                        },
                    },
                    /* nLowFreqNrFactor[12][2][17] */
                    {
                        /* nLowFreqNrFactor 0 */
                        {
                {16, 16, 12, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                {16, 16, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            },
            /* nLowFreqNrFactor 1 */
            {
                {16, 16, 12, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                {16, 16, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            },
            /* nLowFreqNrFactor 2 */
            {
                {16, 16, 12, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                {16, 16, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            },
            /* nLowFreqNrFactor 3 */
            {
                {16, 0, 0, 0, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
                {52, 25, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 4 */
            {
                {36, 12, 5, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {52, 25, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 5 */
            {
                {36, 12, 5, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {52, 25, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 6 */
            {
                {36, 12, 5, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {52, 25, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 7 */
            {
                {78, 45, 25, 12, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {109, 36, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 8 */
            {
                {78, 45, 25, 12, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {109, 36, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 9 */
            {
                {78, 45, 25, 12, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {109, 36, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 10 */
            {
                {78, 45, 25, 12, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {109, 36, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
            },
            /* nLowFreqNrFactor 11 */
            {
                {109, 64, 12, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                {109, 36, 16, 12, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
                        },
                    },
                    /* nHfNrStrength[12][2] */
                    {
            {0, 128, /*0 - 1*/},
            {8, 168, /*0 - 1*/},
            {16, 200, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 20, /*0 - 1*/},
            {24, 20, /*0 - 1*/},
            {26, 20, /*0 - 1*/},
            {16, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 12, /*0 - 1*/},
            {128, 20, /*0 - 1*/},
            {32, 12, /*0 - 1*/},
                    },
                    /* nMfNrStrength[12][2] */
                    {
            {0, 128, /*0 - 1*/},
            {8, 168, /*0 - 1*/},
            {16, 200, /*0 - 1*/},
            {25, 32, /*0 - 1*/},
            {24, 20, /*0 - 1*/},
            {24, 20, /*0 - 1*/},
            {26, 20, /*0 - 1*/},
            {16, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 12, /*0 - 1*/},
            {64, 20, /*0 - 1*/},
            {32, 12, /*0 - 1*/},
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_LSC_PARAM_T lsc_param_sdr = {
    /* nLscEn */
    0,
    /* nRefMode */
    1,
    /* nMeshMode */
    1,
    /* nAutoMode */
    0,
    /* nAlgMode */
    0,
    /* tManualParam */
    {
        /* nLumaRatio */
        100,
        /* nColorRatio */
        100,
        /* nLumaMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nRRMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nGRMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nGBMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
        /* nBBMeshLut[15][19] */
        {
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
        },
    },
    /* tAutoParam */
    {
        /* nDampRatio */
        0,
        /* nToleranceRatio */
        0,
        /* tLumaParam */
        {
            /* nParamGrpNum */
            1,
            /* nRefValStart[12] */
            {0, /*0 - 0*/},
            /* nRefValEnd[12] */
            {0, /*0 - 0*/},
            /* nLumaRatio[12] */
            {0, /*0 - 0*/},
            /* nLumaMeshLut[15][19] */
            {
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
            },
        },
        /* tColTempParam */
        {
            /* nColTempNum */
            8,
            /* nRefColorTempStart[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nRefColorTempEnd[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nColorTemp[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nColorRatio[10] */
            {0, 0, 0, 0, 0, 0, 0, 0,/*0 - 9*/},
            /* nRRMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
            /* nGRMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
            /* nGBMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
            /* nBBMeshLut[10][15][19] */
            {
                /* 0 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 1 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 2 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 3 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 4 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 5 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 6 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
                /* 7 */
                {
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                    {16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, 16384, /*0 - 18*/},
                },
            },
        },
    },
};

const static AX_ISP_IQ_RLTM_PARAM_T rltm_param_sdr = {
    /* nRltmEn */
    1,
    /* nMultiCamSyncMode */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nAlgMode */
    0,
    /* tCommonGlb */
    {
        /* nGtmSwEn */
        0,
        /* nGtmSwDgain */
        1024,
        /* nWinSize */
        1024,
    },
    /* tTempoFilter */
    {
        /* nAlpha */
        512,
        /* nReset */
        0,
        /* nStopUpdating */
        0,
    },
    /* tLumaWt */
    {
        /* nLumaWeight[5] */
        {37, 38, 38, 15, 0, /*0 - 4*/},
    },
    /* tMultiHistWt */
    {
        /* nMode */
        0,
        /* nRegionNum */
        0,
        /* nHistWtNum */
        1,
        /* tRoi */
        {
            /* nTop */
            0,
            /* nBottom */
            1520,
            /* nLeft */
            0,
            /* nRight */
            2688,
        },
        /* tHistWt */
        {
            /* nHistogramWeight[63] */
            {
                1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
            },
        },
        /* nFlagHistId[16][16] */
        {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        },
    },
    /* tLfEnhGlb */
    {
        /* nDownSampleRatio */
        1,
        /* nCoeffWinRad */
        2,
        /* nCoeffEps */
        200,
    },
    /* tManualParam */
    {
        /* nKMax */
        2500,
        /* nPreGamma */
        32,
        /* nExtraDgain */
        16,
        /* nLog10Offset */
        96,
        /* nBaseGain */
        64,
        /* nDitherMode */
        0,
        /* nDitherScale */
        4,
        /* nHistWtBrightLow[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHistWtBrightHigh[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHistWtThreshold[4] */
        {129, 129, 129, 129, /*0 - 3*/},
        /* nSCurveList[1025] */
        {
            0, 53, 106, 159, 212, 265, 317, 369, 421, 473, 524, 575, 626, 676, 727, 777, 827, 876, 926, 975, 1024, 1073, 1121, 1169, 1217, 1265, 1312, 1359, 1406, 1453, 1500, 1546,  /* 0 - 31*/
            1592, 1638, 1684, 1729, 1774, 1819, 1864, 1908, 1952, 1996, 2040, 2083, 2127, 2170, 2213, 2255, 2297, 2340, 2381, 2423, 2465, 2506, 2547, 2588, 2628, 2669, 2709, 2749, 2788, 2828, 2867, 2906,  /* 32 - 63*/
            2945, 2983, 3022, 3060, 3098, 3135, 3173, 3210, 3247, 3284, 3321, 3357, 3393, 3429, 3465, 3500, 3536, 3571, 3606, 3641, 3675, 3709, 3743, 3777, 3811, 3844, 3878, 3911, 3944, 3976, 4009, 4041,  /* 64 - 95*/
            4073, 4105, 4136, 4168, 4199, 4230, 4261, 4292, 4322, 4353, 4383, 4413, 4443, 4473, 4503, 4532, 4562, 4591, 4620, 4649, 4678, 4707, 4735, 4764, 4792, 4821, 4849, 4877, 4905, 4933, 4961, 4989,  /* 96 - 127*/
            5016, 5044, 5071, 5099, 5126, 5154, 5181, 5208, 5235, 5262, 5290, 5317, 5344, 5371, 5397, 5424, 5451, 5478, 5505, 5532, 5559, 5586, 5612, 5639, 5666, 5693, 5719, 5746, 5773, 5800, 5827, 5854,  /* 128 - 159*/
            5880, 5907, 5934, 5961, 5988, 6015, 6042, 6069, 6096, 6124, 6151, 6178, 6205, 6233, 6260, 6288, 6315, 6343, 6371, 6398, 6426, 6454, 6482, 6510, 6539, 6567, 6595, 6624, 6652, 6681, 6709, 6738,  /* 160 - 191*/
            6767, 6796, 6825, 6854, 6883, 6912, 6941, 6971, 7000, 7029, 7059, 7088, 7118, 7147, 7177, 7206, 7236, 7266, 7295, 7325, 7355, 7384, 7414, 7444, 7474, 7503, 7533, 7563, 7593, 7622, 7652, 7682,  /* 192 - 223*/
            7712, 7741, 7771, 7801, 7830, 7860, 7890, 7919, 7949, 7978, 8008, 8037, 8066, 8096, 8125, 8155, 8184, 8213, 8242, 8272, 8301, 8330, 8360, 8389, 8418, 8447, 8476, 8506, 8535, 8564, 8593, 8622,  /* 224 - 255*/
            8651, 8681, 8710, 8739, 8768, 8797, 8827, 8856, 8885, 8914, 8944, 8973, 9002, 9031, 9061, 9090, 9119, 9149, 9178, 9208, 9237, 9267, 9296, 9326, 9355, 9385, 9414, 9444, 9474, 9503, 9533, 9562,  /* 256 - 287*/
            9592, 9622, 9651, 9681, 9710, 9740, 9769, 9799, 9829, 9858, 9887, 9917, 9946, 9976, 10005, 10034, 10063, 10093, 10122, 10151, 10180, 10209, 10238, 10267, 10296, 10324, 10353, 10382, 10410, 10438, 10467, 10495,  /* 288 - 319*/
            10523, 10551, 10580, 10607, 10635, 10663, 10691, 10718, 10746, 10773, 10801, 10828, 10855, 10883, 10910, 10937, 10964, 10991, 11018, 11045, 11072, 11099, 11126, 11153, 11180, 11207, 11234, 11261, 11288, 11315, 11342, 11369,  /* 320 - 351*/
            11396, 11423, 11450, 11477, 11504, 11531, 11559, 11586, 11613, 11641, 11668, 11696, 11723, 11751, 11779, 11807, 11835, 11863, 11891, 11919, 11947, 11976, 12004, 12033, 12061, 12090, 12119, 12148, 12177, 12206, 12235, 12265,  /* 352 - 383*/
            12294, 12323, 12353, 12383, 12412, 12442, 12472, 12502, 12532, 12562, 12592, 12623, 12653, 12684, 12714, 12745, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12993, 13024, 13055, 13087, 13118, 13150, 13182, 13213, 13245,  /* 384 - 415*/
            13277, 13309, 13341, 13374, 13406, 13438, 13470, 13503, 13535, 13568, 13600, 13633, 13665, 13698, 13731, 13763, 13796, 13829, 13862, 13894, 13927, 13960, 13993, 14026, 14059, 14092, 14125, 14158, 14190, 14223, 14256, 14289,  /* 416 - 447*/
            14322, 14355, 14388, 14421, 14454, 14486, 14519, 14552, 14585, 14618, 14650, 14683, 14716, 14748, 14781, 14813, 14846, 14878, 14910, 14943, 14975, 15007, 15040, 15072, 15104, 15136, 15168, 15200, 15233, 15265, 15297, 15329,  /* 448 - 479*/
            15361, 15393, 15425, 15457, 15489, 15521, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15807, 15839, 15871, 15903, 15935, 15967, 15998, 16030, 16062, 16094, 16126, 16158, 16190, 16221, 16253, 16285, 16317, 16349,  /* 480 - 511*/
            16381, 16413, 16445, 16477, 16509, 16541, 16573, 16605, 16637, 16669, 16701, 16733, 16765, 16797, 16829, 16861, 16893, 16925, 16957, 16989, 17021, 17053, 17085, 17117, 17149, 17181, 17214, 17246, 17278, 17310, 17342, 17374,  /* 512 - 543*/
            17406, 17438, 17471, 17503, 17535, 17567, 17599, 17631, 17664, 17696, 17728, 17760, 17792, 17824, 17857, 17889, 17921, 17953, 17985, 18017, 18050, 18082, 18114, 18146, 18178, 18210, 18242, 18274, 18307, 18339, 18371, 18403,  /* 544 - 575*/
            18435, 18467, 18499, 18531, 18563, 18595, 18627, 18659, 18691, 18723, 18755, 18786, 18818, 18850, 18882, 18914, 18945, 18977, 19009, 19041, 19072, 19104, 19136, 19167, 19199, 19230, 19262, 19293, 19325, 19356, 19387, 19419,  /* 576 - 607*/
            19450, 19482, 19513, 19544, 19576, 19607, 19638, 19670, 19701, 19732, 19764, 19795, 19826, 19858, 19889, 19920, 19952, 19983, 20014, 20046, 20077, 20109, 20140, 20172, 20203, 20235, 20266, 20298, 20329, 20361, 20393, 20424,  /* 608 - 639*/
            20456, 20488, 20520, 20552, 20584, 20615, 20647, 20679, 20711, 20744, 20776, 20808, 20840, 20872, 20904, 20937, 20969, 21001, 21034, 21066, 21098, 21131, 21163, 21195, 21228, 21260, 21293, 21325, 21357, 21390, 21422, 21454,  /* 640 - 671*/
            21487, 21519, 21552, 21584, 21616, 21649, 21681, 21713, 21745, 21778, 21810, 21842, 21874, 21906, 21938, 21971, 22003, 22035, 22067, 22098, 22130, 22162, 22194, 22226, 22257, 22289, 22321, 22352, 22384, 22416, 22447, 22479,  /* 672 - 703*/
            22510, 22542, 22573, 22605, 22636, 22668, 22699, 22731, 22762, 22794, 22825, 22857, 22889, 22920, 22952, 22983, 23015, 23046, 23078, 23110, 23141, 23173, 23205, 23237, 23268, 23300, 23332, 23364, 23396, 23428, 23460, 23492,  /* 704 - 735*/
            23525, 23557, 23589, 23621, 23654, 23686, 23719, 23751, 23784, 23816, 23849, 23881, 23914, 23947, 23979, 24012, 24045, 24078, 24110, 24143, 24176, 24209, 24241, 24274, 24307, 24340, 24373, 24405, 24438, 24471, 24504, 24536,  /* 736 - 767*/
            24569, 24602, 24634, 24667, 24700, 24732, 24765, 24797, 24830, 24862, 24894, 24927, 24959, 24991, 25023, 25056, 25088, 25120, 25152, 25184, 25215, 25247, 25279, 25310, 25342, 25374, 25405, 25437, 25468, 25499, 25531, 25562,  /* 768 - 799*/
            25594, 25625, 25657, 25689, 25720, 25752, 25784, 25816, 25848, 25880, 25912, 25944, 25975, 26007, 26038, 26070, 26101, 26133, 26165, 26198, 26230, 26263, 26296, 26329, 26362, 26394, 26426, 26457, 26486, 26515, 26544, 26572,  /* 800 - 831*/
            26601, 26629, 26658, 26687, 26718, 26749, 26781, 26813, 26846, 26880, 26914, 26948, 26982, 27016, 27050, 27084, 27118, 27152, 27186, 27220, 27253, 27286, 27318, 27351, 27383, 27415, 27447, 27479, 27510, 27542, 27573, 27604,  /* 832 - 863*/
            27635, 27666, 27696, 27727, 27758, 27788, 27819, 27849, 27879, 27910, 27940, 27970, 28000, 28031, 28061, 28091, 28121, 28152, 28182, 28212, 28243, 28273, 28304, 28335, 28365, 28396, 28427, 28458, 28489, 28521, 28552, 28583,  /* 864 - 895*/
            28615, 28647, 28679, 28711, 28743, 28775, 28807, 28840, 28872, 28905, 28937, 28970, 29003, 29035, 29068, 29101, 29134, 29166, 29199, 29232, 29265, 29298, 29331, 29363, 29396, 29429, 29462, 29494, 29527, 29560, 29592, 29624,  /* 896 - 927*/
            29657, 29689, 29721, 29754, 29786, 29818, 29850, 29882, 29914, 29946, 29978, 30010, 30041, 30073, 30105, 30137, 30168, 30200, 30232, 30263, 30295, 30326, 30358, 30390, 30421, 30453, 30484, 30516, 30547, 30579, 30610, 30641,  /* 928 - 959*/
            30673, 30704, 30736, 30767, 30799, 30830, 30862, 30893, 30925, 30956, 30988, 31019, 31051, 31083, 31114, 31146, 31178, 31209, 31241, 31273, 31305, 31337, 31368, 31400, 31432, 31464, 31496, 31529, 31561, 31593, 31625, 31658,  /* 960 - 991*/
            31690, 31722, 31755, 31788, 31820, 31853, 31886, 31918, 31951, 31984, 32017, 32051, 32084, 32117, 32150, 32184, 32217, 32251, 32285, 32319, 32353, 32387, 32421, 32455, 32489, 32524, 32558, 32593, 32627, 32662, 32697, 32732,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
        },
        /* tHistWt[16] */
        {
            /* 0 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 1 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 2 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 3 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 4 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 5 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 6 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 7 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 8 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 9 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 10 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 11 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 12 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 13 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 14 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
            /* 15 */
            {
                /* nHistogramWeight[63] */
                {
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                },
            },
        },
        /* tHighFreqEnh */
        {
            /* nDetailSigmaDis */
            5000,
            /* nDetailSigmaVal */
            1000,
            /* nDetailExtraStrPos */
            0,
            /* nDetailExtraStrNeg */
            0,
            /* nDetailGainLimitPos */
            256,
            /* nDetailGainLimitNeg */
            256,
            /* nSlopeStrengthLut[33] */
            {
                8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                128, /*32 - 32*/
            },
            /* nSlopeCoeff */
            255,
        },
        /* tLowFreqEnh */
        {
            /* nRltmDetailLowEn */
            0,
            /* nSigmaDisBlur */
            9000,
            /* nDetailGainPosLow */
            48,
            /* nDetailGainNegLow */
            48,
            /* nDetailLimitPosLow */
            2560,
            /* nDetailLimitNegLow */
            2560,
            /* nSigmaDisPst */
            9000,
            /* nSigmaValPst */
            1000,
        },
        /* tHrParam */
        {
            /* nLocalFactor */
            80,
            /* nRltmStrength */
            45,
            /* nContrastStrength */
            30,
			/* nPostGamma */
            36,
            /* nHighlightSup */
            30,
            /* nDetailCoringPos */
            80,
            /* nDetailCoringNeg */
            80,
            /* nDetailGainPos */
            40,
            /* nDetailGainNeg */
            40,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nKMax[12] */
        {5000, 5000, 5000, 65535, 65535, 65535, 65535, 65535, 65535, 2500, 2000, 1000, /*0 - 11*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nLog10Offset[12] */
        {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 11*/},
        /* nBaseGain[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
        /* nDitherMode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDitherScale[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nHistWtBrightLow[12][4] */
        {
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nHistWtBrightHigh[12][4] */
        {
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nHistWtThreshold[12][4] */
        {
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
            {129, 129, 129, 129, /*0 - 3*/},
        },
        /* nSCurveList[12][1025] */
        {
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 53, 106, 159, 212, 265, 317, 369, 421, 473, 524, 575, 626, 676, 727, 777, 827, 876, 926, 975, 1024, 1073, 1121, 1169, 1217, 1265, 1312, 1359, 1406, 1453, 1500, 1546,  /* 0 - 31*/
                1592, 1638, 1684, 1729, 1774, 1819, 1864, 1908, 1952, 1996, 2040, 2083, 2127, 2170, 2213, 2255, 2297, 2340, 2381, 2423, 2465, 2506, 2547, 2588, 2628, 2669, 2709, 2749, 2788, 2828, 2867, 2906,  /* 32 - 63*/
                2945, 2983, 3022, 3060, 3098, 3135, 3173, 3210, 3247, 3284, 3321, 3357, 3393, 3429, 3465, 3500, 3536, 3571, 3606, 3641, 3675, 3709, 3743, 3777, 3811, 3844, 3878, 3911, 3944, 3976, 4009, 4041,  /* 64 - 95*/
                4073, 4105, 4136, 4168, 4199, 4230, 4261, 4292, 4322, 4353, 4383, 4413, 4443, 4473, 4503, 4532, 4562, 4591, 4620, 4649, 4678, 4707, 4735, 4764, 4792, 4821, 4849, 4877, 4905, 4933, 4961, 4989,  /* 96 - 127*/
                5016, 5044, 5071, 5099, 5126, 5154, 5181, 5208, 5235, 5262, 5290, 5317, 5344, 5371, 5397, 5424, 5451, 5478, 5505, 5532, 5559, 5586, 5612, 5639, 5666, 5693, 5719, 5746, 5773, 5800, 5827, 5854,  /* 128 - 159*/
                5880, 5907, 5934, 5961, 5988, 6015, 6042, 6069, 6096, 6124, 6151, 6178, 6205, 6233, 6260, 6288, 6315, 6343, 6371, 6398, 6426, 6454, 6482, 6510, 6539, 6567, 6595, 6624, 6652, 6681, 6709, 6738,  /* 160 - 191*/
                6767, 6796, 6825, 6854, 6883, 6912, 6941, 6971, 7000, 7029, 7059, 7088, 7118, 7147, 7177, 7206, 7236, 7266, 7295, 7325, 7355, 7384, 7414, 7444, 7474, 7503, 7533, 7563, 7593, 7622, 7652, 7682,  /* 192 - 223*/
                7712, 7741, 7771, 7801, 7830, 7860, 7890, 7919, 7949, 7978, 8008, 8037, 8066, 8096, 8125, 8155, 8184, 8213, 8242, 8272, 8301, 8330, 8360, 8389, 8418, 8447, 8476, 8506, 8535, 8564, 8593, 8622,  /* 224 - 255*/
                8651, 8681, 8710, 8739, 8768, 8797, 8827, 8856, 8885, 8914, 8944, 8973, 9002, 9031, 9061, 9090, 9119, 9149, 9178, 9208, 9237, 9267, 9296, 9326, 9355, 9385, 9414, 9444, 9474, 9503, 9533, 9562,  /* 256 - 287*/
                9592, 9622, 9651, 9681, 9710, 9740, 9769, 9799, 9829, 9858, 9887, 9917, 9946, 9976, 10005, 10034, 10063, 10093, 10122, 10151, 10180, 10209, 10238, 10267, 10296, 10324, 10353, 10382, 10410, 10438, 10467, 10495,  /* 288 - 319*/
                10523, 10551, 10580, 10607, 10635, 10663, 10691, 10718, 10746, 10773, 10801, 10828, 10855, 10883, 10910, 10937, 10964, 10991, 11018, 11045, 11072, 11099, 11126, 11153, 11180, 11207, 11234, 11261, 11288, 11315, 11342, 11369,  /* 320 - 351*/
                11396, 11423, 11450, 11477, 11504, 11531, 11559, 11586, 11613, 11641, 11668, 11696, 11723, 11751, 11779, 11807, 11835, 11863, 11891, 11919, 11947, 11976, 12004, 12033, 12061, 12090, 12119, 12148, 12177, 12206, 12235, 12265,  /* 352 - 383*/
                12294, 12323, 12353, 12383, 12412, 12442, 12472, 12502, 12532, 12562, 12592, 12623, 12653, 12684, 12714, 12745, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12993, 13024, 13055, 13087, 13118, 13150, 13182, 13213, 13245,  /* 384 - 415*/
                13277, 13309, 13341, 13374, 13406, 13438, 13470, 13503, 13535, 13568, 13600, 13633, 13665, 13698, 13731, 13763, 13796, 13829, 13862, 13894, 13927, 13960, 13993, 14026, 14059, 14092, 14125, 14158, 14190, 14223, 14256, 14289,  /* 416 - 447*/
                14322, 14355, 14388, 14421, 14454, 14486, 14519, 14552, 14585, 14618, 14650, 14683, 14716, 14748, 14781, 14813, 14846, 14878, 14910, 14943, 14975, 15007, 15040, 15072, 15104, 15136, 15168, 15200, 15233, 15265, 15297, 15329,  /* 448 - 479*/
                15361, 15393, 15425, 15457, 15489, 15521, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15807, 15839, 15871, 15903, 15935, 15967, 15998, 16030, 16062, 16094, 16126, 16158, 16190, 16221, 16253, 16285, 16317, 16349,  /* 480 - 511*/
                16381, 16413, 16445, 16477, 16509, 16541, 16573, 16605, 16637, 16669, 16701, 16733, 16765, 16797, 16829, 16861, 16893, 16925, 16957, 16989, 17021, 17053, 17085, 17117, 17149, 17181, 17214, 17246, 17278, 17310, 17342, 17374,  /* 512 - 543*/
                17406, 17438, 17471, 17503, 17535, 17567, 17599, 17631, 17664, 17696, 17728, 17760, 17792, 17824, 17857, 17889, 17921, 17953, 17985, 18017, 18050, 18082, 18114, 18146, 18178, 18210, 18242, 18274, 18307, 18339, 18371, 18403,  /* 544 - 575*/
                18435, 18467, 18499, 18531, 18563, 18595, 18627, 18659, 18691, 18723, 18755, 18786, 18818, 18850, 18882, 18914, 18945, 18977, 19009, 19041, 19072, 19104, 19136, 19167, 19199, 19230, 19262, 19293, 19325, 19356, 19387, 19419,  /* 576 - 607*/
                19450, 19482, 19513, 19544, 19576, 19607, 19638, 19670, 19701, 19732, 19764, 19795, 19826, 19858, 19889, 19920, 19952, 19983, 20014, 20046, 20077, 20109, 20140, 20172, 20203, 20235, 20266, 20298, 20329, 20361, 20393, 20424,  /* 608 - 639*/
                20456, 20488, 20520, 20552, 20584, 20615, 20647, 20679, 20711, 20744, 20776, 20808, 20840, 20872, 20904, 20937, 20969, 21001, 21034, 21066, 21098, 21131, 21163, 21195, 21228, 21260, 21293, 21325, 21357, 21390, 21422, 21454,  /* 640 - 671*/
                21487, 21519, 21552, 21584, 21616, 21649, 21681, 21713, 21745, 21778, 21810, 21842, 21874, 21906, 21938, 21971, 22003, 22035, 22067, 22098, 22130, 22162, 22194, 22226, 22257, 22289, 22321, 22352, 22384, 22416, 22447, 22479,  /* 672 - 703*/
                22510, 22542, 22573, 22605, 22636, 22668, 22699, 22731, 22762, 22794, 22825, 22857, 22889, 22920, 22952, 22983, 23015, 23046, 23078, 23110, 23141, 23173, 23205, 23237, 23268, 23300, 23332, 23364, 23396, 23428, 23460, 23492,  /* 704 - 735*/
                23525, 23557, 23589, 23621, 23654, 23686, 23719, 23751, 23784, 23816, 23849, 23881, 23914, 23947, 23979, 24012, 24045, 24078, 24110, 24143, 24176, 24209, 24241, 24274, 24307, 24340, 24373, 24405, 24438, 24471, 24504, 24536,  /* 736 - 767*/
                24569, 24602, 24634, 24667, 24700, 24732, 24765, 24797, 24830, 24862, 24894, 24927, 24959, 24991, 25023, 25056, 25088, 25120, 25152, 25184, 25215, 25247, 25279, 25310, 25342, 25374, 25405, 25437, 25468, 25499, 25531, 25562,  /* 768 - 799*/
                25594, 25625, 25657, 25689, 25720, 25752, 25784, 25816, 25848, 25880, 25912, 25944, 25975, 26007, 26038, 26070, 26101, 26133, 26165, 26198, 26230, 26263, 26296, 26329, 26362, 26394, 26426, 26457, 26486, 26515, 26544, 26572,  /* 800 - 831*/
                26601, 26629, 26658, 26687, 26718, 26749, 26781, 26813, 26846, 26880, 26914, 26948, 26982, 27016, 27050, 27084, 27118, 27152, 27186, 27220, 27253, 27286, 27318, 27351, 27383, 27415, 27447, 27479, 27510, 27542, 27573, 27604,  /* 832 - 863*/
                27635, 27666, 27696, 27727, 27758, 27788, 27819, 27849, 27879, 27910, 27940, 27970, 28000, 28031, 28061, 28091, 28121, 28152, 28182, 28212, 28243, 28273, 28304, 28335, 28365, 28396, 28427, 28458, 28489, 28521, 28552, 28583,  /* 864 - 895*/
                28615, 28647, 28679, 28711, 28743, 28775, 28807, 28840, 28872, 28905, 28937, 28970, 29003, 29035, 29068, 29101, 29134, 29166, 29199, 29232, 29265, 29298, 29331, 29363, 29396, 29429, 29462, 29494, 29527, 29560, 29592, 29624,  /* 896 - 927*/
                29657, 29689, 29721, 29754, 29786, 29818, 29850, 29882, 29914, 29946, 29978, 30010, 30041, 30073, 30105, 30137, 30168, 30200, 30232, 30263, 30295, 30326, 30358, 30390, 30421, 30453, 30484, 30516, 30547, 30579, 30610, 30641,  /* 928 - 959*/
                30673, 30704, 30736, 30767, 30799, 30830, 30862, 30893, 30925, 30956, 30988, 31019, 31051, 31083, 31114, 31146, 31178, 31209, 31241, 31273, 31305, 31337, 31368, 31400, 31432, 31464, 31496, 31529, 31561, 31593, 31625, 31658,  /* 960 - 991*/
                31690, 31722, 31755, 31788, 31820, 31853, 31886, 31918, 31951, 31984, 32017, 32051, 32084, 32117, 32150, 32184, 32217, 32251, 32285, 32319, 32353, 32387, 32421, 32455, 32489, 32524, 32558, 32593, 32627, 32662, 32697, 32732,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 53, 106, 159, 212, 265, 317, 369, 421, 473, 524, 575, 626, 676, 727, 777, 827, 876, 926, 975, 1024, 1073, 1121, 1169, 1217, 1265, 1312, 1359, 1406, 1453, 1500, 1546,  /* 0 - 31*/
                1592, 1638, 1684, 1729, 1774, 1819, 1864, 1908, 1952, 1996, 2040, 2083, 2127, 2170, 2213, 2255, 2297, 2340, 2381, 2423, 2465, 2506, 2547, 2588, 2628, 2669, 2709, 2749, 2788, 2828, 2867, 2906,  /* 32 - 63*/
                2945, 2983, 3022, 3060, 3098, 3135, 3173, 3210, 3247, 3284, 3321, 3357, 3393, 3429, 3465, 3500, 3536, 3571, 3606, 3641, 3675, 3709, 3743, 3777, 3811, 3844, 3878, 3911, 3944, 3976, 4009, 4041,  /* 64 - 95*/
                4073, 4105, 4136, 4168, 4199, 4230, 4261, 4292, 4322, 4353, 4383, 4413, 4443, 4473, 4503, 4532, 4562, 4591, 4620, 4649, 4678, 4707, 4735, 4764, 4792, 4821, 4849, 4877, 4905, 4933, 4961, 4989,  /* 96 - 127*/
                5016, 5044, 5071, 5099, 5126, 5154, 5181, 5208, 5235, 5262, 5290, 5317, 5344, 5371, 5397, 5424, 5451, 5478, 5505, 5532, 5559, 5586, 5612, 5639, 5666, 5693, 5719, 5746, 5773, 5800, 5827, 5854,  /* 128 - 159*/
                5880, 5907, 5934, 5961, 5988, 6015, 6042, 6069, 6096, 6124, 6151, 6178, 6205, 6233, 6260, 6288, 6315, 6343, 6371, 6398, 6426, 6454, 6482, 6510, 6539, 6567, 6595, 6624, 6652, 6681, 6709, 6738,  /* 160 - 191*/
                6767, 6796, 6825, 6854, 6883, 6912, 6941, 6971, 7000, 7029, 7059, 7088, 7118, 7147, 7177, 7206, 7236, 7266, 7295, 7325, 7355, 7384, 7414, 7444, 7474, 7503, 7533, 7563, 7593, 7622, 7652, 7682,  /* 192 - 223*/
                7712, 7741, 7771, 7801, 7830, 7860, 7890, 7919, 7949, 7978, 8008, 8037, 8066, 8096, 8125, 8155, 8184, 8213, 8242, 8272, 8301, 8330, 8360, 8389, 8418, 8447, 8476, 8506, 8535, 8564, 8593, 8622,  /* 224 - 255*/
                8651, 8681, 8710, 8739, 8768, 8797, 8827, 8856, 8885, 8914, 8944, 8973, 9002, 9031, 9061, 9090, 9119, 9149, 9178, 9208, 9237, 9267, 9296, 9326, 9355, 9385, 9414, 9444, 9474, 9503, 9533, 9562,  /* 256 - 287*/
                9592, 9622, 9651, 9681, 9710, 9740, 9769, 9799, 9829, 9858, 9887, 9917, 9946, 9976, 10005, 10034, 10063, 10093, 10122, 10151, 10180, 10209, 10238, 10267, 10296, 10324, 10353, 10382, 10410, 10438, 10467, 10495,  /* 288 - 319*/
                10523, 10551, 10580, 10607, 10635, 10663, 10691, 10718, 10746, 10773, 10801, 10828, 10855, 10883, 10910, 10937, 10964, 10991, 11018, 11045, 11072, 11099, 11126, 11153, 11180, 11207, 11234, 11261, 11288, 11315, 11342, 11369,  /* 320 - 351*/
                11396, 11423, 11450, 11477, 11504, 11531, 11559, 11586, 11613, 11641, 11668, 11696, 11723, 11751, 11779, 11807, 11835, 11863, 11891, 11919, 11947, 11976, 12004, 12033, 12061, 12090, 12119, 12148, 12177, 12206, 12235, 12265,  /* 352 - 383*/
                12294, 12323, 12353, 12383, 12412, 12442, 12472, 12502, 12532, 12562, 12592, 12623, 12653, 12684, 12714, 12745, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12993, 13024, 13055, 13087, 13118, 13150, 13182, 13213, 13245,  /* 384 - 415*/
                13277, 13309, 13341, 13374, 13406, 13438, 13470, 13503, 13535, 13568, 13600, 13633, 13665, 13698, 13731, 13763, 13796, 13829, 13862, 13894, 13927, 13960, 13993, 14026, 14059, 14092, 14125, 14158, 14190, 14223, 14256, 14289,  /* 416 - 447*/
                14322, 14355, 14388, 14421, 14454, 14486, 14519, 14552, 14585, 14618, 14650, 14683, 14716, 14748, 14781, 14813, 14846, 14878, 14910, 14943, 14975, 15007, 15040, 15072, 15104, 15136, 15168, 15200, 15233, 15265, 15297, 15329,  /* 448 - 479*/
                15361, 15393, 15425, 15457, 15489, 15521, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15807, 15839, 15871, 15903, 15935, 15967, 15998, 16030, 16062, 16094, 16126, 16158, 16190, 16221, 16253, 16285, 16317, 16349,  /* 480 - 511*/
                16381, 16413, 16445, 16477, 16509, 16541, 16573, 16605, 16637, 16669, 16701, 16733, 16765, 16797, 16829, 16861, 16893, 16925, 16957, 16989, 17021, 17053, 17085, 17117, 17149, 17181, 17214, 17246, 17278, 17310, 17342, 17374,  /* 512 - 543*/
                17406, 17438, 17471, 17503, 17535, 17567, 17599, 17631, 17664, 17696, 17728, 17760, 17792, 17824, 17857, 17889, 17921, 17953, 17985, 18017, 18050, 18082, 18114, 18146, 18178, 18210, 18242, 18274, 18307, 18339, 18371, 18403,  /* 544 - 575*/
                18435, 18467, 18499, 18531, 18563, 18595, 18627, 18659, 18691, 18723, 18755, 18786, 18818, 18850, 18882, 18914, 18945, 18977, 19009, 19041, 19072, 19104, 19136, 19167, 19199, 19230, 19262, 19293, 19325, 19356, 19387, 19419,  /* 576 - 607*/
                19450, 19482, 19513, 19544, 19576, 19607, 19638, 19670, 19701, 19732, 19764, 19795, 19826, 19858, 19889, 19920, 19952, 19983, 20014, 20046, 20077, 20109, 20140, 20172, 20203, 20235, 20266, 20298, 20329, 20361, 20393, 20424,  /* 608 - 639*/
                20456, 20488, 20520, 20552, 20584, 20615, 20647, 20679, 20711, 20744, 20776, 20808, 20840, 20872, 20904, 20937, 20969, 21001, 21034, 21066, 21098, 21131, 21163, 21195, 21228, 21260, 21293, 21325, 21357, 21390, 21422, 21454,  /* 640 - 671*/
                21487, 21519, 21552, 21584, 21616, 21649, 21681, 21713, 21745, 21778, 21810, 21842, 21874, 21906, 21938, 21971, 22003, 22035, 22067, 22098, 22130, 22162, 22194, 22226, 22257, 22289, 22321, 22352, 22384, 22416, 22447, 22479,  /* 672 - 703*/
                22510, 22542, 22573, 22605, 22636, 22668, 22699, 22731, 22762, 22794, 22825, 22857, 22889, 22920, 22952, 22983, 23015, 23046, 23078, 23110, 23141, 23173, 23205, 23237, 23268, 23300, 23332, 23364, 23396, 23428, 23460, 23492,  /* 704 - 735*/
                23525, 23557, 23589, 23621, 23654, 23686, 23719, 23751, 23784, 23816, 23849, 23881, 23914, 23947, 23979, 24012, 24045, 24078, 24110, 24143, 24176, 24209, 24241, 24274, 24307, 24340, 24373, 24405, 24438, 24471, 24504, 24536,  /* 736 - 767*/
                24569, 24602, 24634, 24667, 24700, 24732, 24765, 24797, 24830, 24862, 24894, 24927, 24959, 24991, 25023, 25056, 25088, 25120, 25152, 25184, 25215, 25247, 25279, 25310, 25342, 25374, 25405, 25437, 25468, 25499, 25531, 25562,  /* 768 - 799*/
                25594, 25625, 25657, 25689, 25720, 25752, 25784, 25816, 25848, 25880, 25912, 25944, 25975, 26007, 26038, 26070, 26101, 26133, 26165, 26198, 26230, 26263, 26296, 26329, 26362, 26394, 26426, 26457, 26486, 26515, 26544, 26572,  /* 800 - 831*/
                26601, 26629, 26658, 26687, 26718, 26749, 26781, 26813, 26846, 26880, 26914, 26948, 26982, 27016, 27050, 27084, 27118, 27152, 27186, 27220, 27253, 27286, 27318, 27351, 27383, 27415, 27447, 27479, 27510, 27542, 27573, 27604,  /* 832 - 863*/
                27635, 27666, 27696, 27727, 27758, 27788, 27819, 27849, 27879, 27910, 27940, 27970, 28000, 28031, 28061, 28091, 28121, 28152, 28182, 28212, 28243, 28273, 28304, 28335, 28365, 28396, 28427, 28458, 28489, 28521, 28552, 28583,  /* 864 - 895*/
                28615, 28647, 28679, 28711, 28743, 28775, 28807, 28840, 28872, 28905, 28937, 28970, 29003, 29035, 29068, 29101, 29134, 29166, 29199, 29232, 29265, 29298, 29331, 29363, 29396, 29429, 29462, 29494, 29527, 29560, 29592, 29624,  /* 896 - 927*/
                29657, 29689, 29721, 29754, 29786, 29818, 29850, 29882, 29914, 29946, 29978, 30010, 30041, 30073, 30105, 30137, 30168, 30200, 30232, 30263, 30295, 30326, 30358, 30390, 30421, 30453, 30484, 30516, 30547, 30579, 30610, 30641,  /* 928 - 959*/
                30673, 30704, 30736, 30767, 30799, 30830, 30862, 30893, 30925, 30956, 30988, 31019, 31051, 31083, 31114, 31146, 31178, 31209, 31241, 31273, 31305, 31337, 31368, 31400, 31432, 31464, 31496, 31529, 31561, 31593, 31625, 31658,  /* 960 - 991*/
                31690, 31722, 31755, 31788, 31820, 31853, 31886, 31918, 31951, 31984, 32017, 32051, 32084, 32117, 32150, 32184, 32217, 32251, 32285, 32319, 32353, 32387, 32421, 32455, 32489, 32524, 32558, 32593, 32627, 32662, 32697, 32732,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 53, 106, 159, 212, 265, 317, 369, 421, 473, 524, 575, 626, 676, 727, 777, 827, 876, 926, 975, 1024, 1073, 1121, 1169, 1217, 1265, 1312, 1359, 1406, 1453, 1500, 1546,  /* 0 - 31*/
                1592, 1638, 1684, 1729, 1774, 1819, 1864, 1908, 1952, 1996, 2040, 2083, 2127, 2170, 2213, 2255, 2297, 2340, 2381, 2423, 2465, 2506, 2547, 2588, 2628, 2669, 2709, 2749, 2788, 2828, 2867, 2906,  /* 32 - 63*/
                2945, 2983, 3022, 3060, 3098, 3135, 3173, 3210, 3247, 3284, 3321, 3357, 3393, 3429, 3465, 3500, 3536, 3571, 3606, 3641, 3675, 3709, 3743, 3777, 3811, 3844, 3878, 3911, 3944, 3976, 4009, 4041,  /* 64 - 95*/
                4073, 4105, 4136, 4168, 4199, 4230, 4261, 4292, 4322, 4353, 4383, 4413, 4443, 4473, 4503, 4532, 4562, 4591, 4620, 4649, 4678, 4707, 4735, 4764, 4792, 4821, 4849, 4877, 4905, 4933, 4961, 4989,  /* 96 - 127*/
                5016, 5044, 5071, 5099, 5126, 5154, 5181, 5208, 5235, 5262, 5290, 5317, 5344, 5371, 5397, 5424, 5451, 5478, 5505, 5532, 5559, 5586, 5612, 5639, 5666, 5693, 5719, 5746, 5773, 5800, 5827, 5854,  /* 128 - 159*/
                5880, 5907, 5934, 5961, 5988, 6015, 6042, 6069, 6096, 6124, 6151, 6178, 6205, 6233, 6260, 6288, 6315, 6343, 6371, 6398, 6426, 6454, 6482, 6510, 6539, 6567, 6595, 6624, 6652, 6681, 6709, 6738,  /* 160 - 191*/
                6767, 6796, 6825, 6854, 6883, 6912, 6941, 6971, 7000, 7029, 7059, 7088, 7118, 7147, 7177, 7206, 7236, 7266, 7295, 7325, 7355, 7384, 7414, 7444, 7474, 7503, 7533, 7563, 7593, 7622, 7652, 7682,  /* 192 - 223*/
                7712, 7741, 7771, 7801, 7830, 7860, 7890, 7919, 7949, 7978, 8008, 8037, 8066, 8096, 8125, 8155, 8184, 8213, 8242, 8272, 8301, 8330, 8360, 8389, 8418, 8447, 8476, 8506, 8535, 8564, 8593, 8622,  /* 224 - 255*/
                8651, 8681, 8710, 8739, 8768, 8797, 8827, 8856, 8885, 8914, 8944, 8973, 9002, 9031, 9061, 9090, 9119, 9149, 9178, 9208, 9237, 9267, 9296, 9326, 9355, 9385, 9414, 9444, 9474, 9503, 9533, 9562,  /* 256 - 287*/
                9592, 9622, 9651, 9681, 9710, 9740, 9769, 9799, 9829, 9858, 9887, 9917, 9946, 9976, 10005, 10034, 10063, 10093, 10122, 10151, 10180, 10209, 10238, 10267, 10296, 10324, 10353, 10382, 10410, 10438, 10467, 10495,  /* 288 - 319*/
                10523, 10551, 10580, 10607, 10635, 10663, 10691, 10718, 10746, 10773, 10801, 10828, 10855, 10883, 10910, 10937, 10964, 10991, 11018, 11045, 11072, 11099, 11126, 11153, 11180, 11207, 11234, 11261, 11288, 11315, 11342, 11369,  /* 320 - 351*/
                11396, 11423, 11450, 11477, 11504, 11531, 11559, 11586, 11613, 11641, 11668, 11696, 11723, 11751, 11779, 11807, 11835, 11863, 11891, 11919, 11947, 11976, 12004, 12033, 12061, 12090, 12119, 12148, 12177, 12206, 12235, 12265,  /* 352 - 383*/
                12294, 12323, 12353, 12383, 12412, 12442, 12472, 12502, 12532, 12562, 12592, 12623, 12653, 12684, 12714, 12745, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12993, 13024, 13055, 13087, 13118, 13150, 13182, 13213, 13245,  /* 384 - 415*/
                13277, 13309, 13341, 13374, 13406, 13438, 13470, 13503, 13535, 13568, 13600, 13633, 13665, 13698, 13731, 13763, 13796, 13829, 13862, 13894, 13927, 13960, 13993, 14026, 14059, 14092, 14125, 14158, 14190, 14223, 14256, 14289,  /* 416 - 447*/
                14322, 14355, 14388, 14421, 14454, 14486, 14519, 14552, 14585, 14618, 14650, 14683, 14716, 14748, 14781, 14813, 14846, 14878, 14910, 14943, 14975, 15007, 15040, 15072, 15104, 15136, 15168, 15200, 15233, 15265, 15297, 15329,  /* 448 - 479*/
                15361, 15393, 15425, 15457, 15489, 15521, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15807, 15839, 15871, 15903, 15935, 15967, 15998, 16030, 16062, 16094, 16126, 16158, 16190, 16221, 16253, 16285, 16317, 16349,  /* 480 - 511*/
                16381, 16413, 16445, 16477, 16509, 16541, 16573, 16605, 16637, 16669, 16701, 16733, 16765, 16797, 16829, 16861, 16893, 16925, 16957, 16989, 17021, 17053, 17085, 17117, 17149, 17181, 17214, 17246, 17278, 17310, 17342, 17374,  /* 512 - 543*/
                17406, 17438, 17471, 17503, 17535, 17567, 17599, 17631, 17664, 17696, 17728, 17760, 17792, 17824, 17857, 17889, 17921, 17953, 17985, 18017, 18050, 18082, 18114, 18146, 18178, 18210, 18242, 18274, 18307, 18339, 18371, 18403,  /* 544 - 575*/
                18435, 18467, 18499, 18531, 18563, 18595, 18627, 18659, 18691, 18723, 18755, 18786, 18818, 18850, 18882, 18914, 18945, 18977, 19009, 19041, 19072, 19104, 19136, 19167, 19199, 19230, 19262, 19293, 19325, 19356, 19387, 19419,  /* 576 - 607*/
                19450, 19482, 19513, 19544, 19576, 19607, 19638, 19670, 19701, 19732, 19764, 19795, 19826, 19858, 19889, 19920, 19952, 19983, 20014, 20046, 20077, 20109, 20140, 20172, 20203, 20235, 20266, 20298, 20329, 20361, 20393, 20424,  /* 608 - 639*/
                20456, 20488, 20520, 20552, 20584, 20615, 20647, 20679, 20711, 20744, 20776, 20808, 20840, 20872, 20904, 20937, 20969, 21001, 21034, 21066, 21098, 21131, 21163, 21195, 21228, 21260, 21293, 21325, 21357, 21390, 21422, 21454,  /* 640 - 671*/
                21487, 21519, 21552, 21584, 21616, 21649, 21681, 21713, 21745, 21778, 21810, 21842, 21874, 21906, 21938, 21971, 22003, 22035, 22067, 22098, 22130, 22162, 22194, 22226, 22257, 22289, 22321, 22352, 22384, 22416, 22447, 22479,  /* 672 - 703*/
                22510, 22542, 22573, 22605, 22636, 22668, 22699, 22731, 22762, 22794, 22825, 22857, 22889, 22920, 22952, 22983, 23015, 23046, 23078, 23110, 23141, 23173, 23205, 23237, 23268, 23300, 23332, 23364, 23396, 23428, 23460, 23492,  /* 704 - 735*/
                23525, 23557, 23589, 23621, 23654, 23686, 23719, 23751, 23784, 23816, 23849, 23881, 23914, 23947, 23979, 24012, 24045, 24078, 24110, 24143, 24176, 24209, 24241, 24274, 24307, 24340, 24373, 24405, 24438, 24471, 24504, 24536,  /* 736 - 767*/
                24569, 24602, 24634, 24667, 24700, 24732, 24765, 24797, 24830, 24862, 24894, 24927, 24959, 24991, 25023, 25056, 25088, 25120, 25152, 25184, 25215, 25247, 25279, 25310, 25342, 25374, 25405, 25437, 25468, 25499, 25531, 25562,  /* 768 - 799*/
                25594, 25625, 25657, 25689, 25720, 25752, 25784, 25816, 25848, 25880, 25912, 25944, 25975, 26007, 26038, 26070, 26101, 26133, 26165, 26198, 26230, 26263, 26296, 26329, 26362, 26394, 26426, 26457, 26486, 26515, 26544, 26572,  /* 800 - 831*/
                26601, 26629, 26658, 26687, 26718, 26749, 26781, 26813, 26846, 26880, 26914, 26948, 26982, 27016, 27050, 27084, 27118, 27152, 27186, 27220, 27253, 27286, 27318, 27351, 27383, 27415, 27447, 27479, 27510, 27542, 27573, 27604,  /* 832 - 863*/
                27635, 27666, 27696, 27727, 27758, 27788, 27819, 27849, 27879, 27910, 27940, 27970, 28000, 28031, 28061, 28091, 28121, 28152, 28182, 28212, 28243, 28273, 28304, 28335, 28365, 28396, 28427, 28458, 28489, 28521, 28552, 28583,  /* 864 - 895*/
                28615, 28647, 28679, 28711, 28743, 28775, 28807, 28840, 28872, 28905, 28937, 28970, 29003, 29035, 29068, 29101, 29134, 29166, 29199, 29232, 29265, 29298, 29331, 29363, 29396, 29429, 29462, 29494, 29527, 29560, 29592, 29624,  /* 896 - 927*/
                29657, 29689, 29721, 29754, 29786, 29818, 29850, 29882, 29914, 29946, 29978, 30010, 30041, 30073, 30105, 30137, 30168, 30200, 30232, 30263, 30295, 30326, 30358, 30390, 30421, 30453, 30484, 30516, 30547, 30579, 30610, 30641,  /* 928 - 959*/
                30673, 30704, 30736, 30767, 30799, 30830, 30862, 30893, 30925, 30956, 30988, 31019, 31051, 31083, 31114, 31146, 31178, 31209, 31241, 31273, 31305, 31337, 31368, 31400, 31432, 31464, 31496, 31529, 31561, 31593, 31625, 31658,  /* 960 - 991*/
                31690, 31722, 31755, 31788, 31820, 31853, 31886, 31918, 31951, 31984, 32017, 32051, 32084, 32117, 32150, 32184, 32217, 32251, 32285, 32319, 32353, 32387, 32421, 32455, 32489, 32524, 32558, 32593, 32627, 32662, 32697, 32732,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 53, 106, 159, 212, 265, 317, 369, 421, 473, 524, 575, 626, 676, 727, 777, 827, 876, 926, 975, 1024, 1073, 1121, 1169, 1217, 1265, 1312, 1359, 1406, 1453, 1500, 1546,  /* 0 - 31*/
                1592, 1638, 1684, 1729, 1774, 1819, 1864, 1908, 1952, 1996, 2040, 2083, 2127, 2170, 2213, 2255, 2297, 2340, 2381, 2423, 2465, 2506, 2547, 2588, 2628, 2669, 2709, 2749, 2788, 2828, 2867, 2906,  /* 32 - 63*/
                2945, 2983, 3022, 3060, 3098, 3135, 3173, 3210, 3247, 3284, 3321, 3357, 3393, 3429, 3465, 3500, 3536, 3571, 3606, 3641, 3675, 3709, 3743, 3777, 3811, 3844, 3878, 3911, 3944, 3976, 4009, 4041,  /* 64 - 95*/
                4073, 4105, 4136, 4168, 4199, 4230, 4261, 4292, 4322, 4353, 4383, 4413, 4443, 4473, 4503, 4532, 4562, 4591, 4620, 4649, 4678, 4707, 4735, 4764, 4792, 4821, 4849, 4877, 4905, 4933, 4961, 4989,  /* 96 - 127*/
                5016, 5044, 5071, 5099, 5126, 5154, 5181, 5208, 5235, 5262, 5290, 5317, 5344, 5371, 5397, 5424, 5451, 5478, 5505, 5532, 5559, 5586, 5612, 5639, 5666, 5693, 5719, 5746, 5773, 5800, 5827, 5854,  /* 128 - 159*/
                5880, 5907, 5934, 5961, 5988, 6015, 6042, 6069, 6096, 6124, 6151, 6178, 6205, 6233, 6260, 6288, 6315, 6343, 6371, 6398, 6426, 6454, 6482, 6510, 6539, 6567, 6595, 6624, 6652, 6681, 6709, 6738,  /* 160 - 191*/
                6767, 6796, 6825, 6854, 6883, 6912, 6941, 6971, 7000, 7029, 7059, 7088, 7118, 7147, 7177, 7206, 7236, 7266, 7295, 7325, 7355, 7384, 7414, 7444, 7474, 7503, 7533, 7563, 7593, 7622, 7652, 7682,  /* 192 - 223*/
                7712, 7741, 7771, 7801, 7830, 7860, 7890, 7919, 7949, 7978, 8008, 8037, 8066, 8096, 8125, 8155, 8184, 8213, 8242, 8272, 8301, 8330, 8360, 8389, 8418, 8447, 8476, 8506, 8535, 8564, 8593, 8622,  /* 224 - 255*/
                8651, 8681, 8710, 8739, 8768, 8797, 8827, 8856, 8885, 8914, 8944, 8973, 9002, 9031, 9061, 9090, 9119, 9149, 9178, 9208, 9237, 9267, 9296, 9326, 9355, 9385, 9414, 9444, 9474, 9503, 9533, 9562,  /* 256 - 287*/
                9592, 9622, 9651, 9681, 9710, 9740, 9769, 9799, 9829, 9858, 9887, 9917, 9946, 9976, 10005, 10034, 10063, 10093, 10122, 10151, 10180, 10209, 10238, 10267, 10296, 10324, 10353, 10382, 10410, 10438, 10467, 10495,  /* 288 - 319*/
                10523, 10551, 10580, 10607, 10635, 10663, 10691, 10718, 10746, 10773, 10801, 10828, 10855, 10883, 10910, 10937, 10964, 10991, 11018, 11045, 11072, 11099, 11126, 11153, 11180, 11207, 11234, 11261, 11288, 11315, 11342, 11369,  /* 320 - 351*/
                11396, 11423, 11450, 11477, 11504, 11531, 11559, 11586, 11613, 11641, 11668, 11696, 11723, 11751, 11779, 11807, 11835, 11863, 11891, 11919, 11947, 11976, 12004, 12033, 12061, 12090, 12119, 12148, 12177, 12206, 12235, 12265,  /* 352 - 383*/
                12294, 12323, 12353, 12383, 12412, 12442, 12472, 12502, 12532, 12562, 12592, 12623, 12653, 12684, 12714, 12745, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12993, 13024, 13055, 13087, 13118, 13150, 13182, 13213, 13245,  /* 384 - 415*/
                13277, 13309, 13341, 13374, 13406, 13438, 13470, 13503, 13535, 13568, 13600, 13633, 13665, 13698, 13731, 13763, 13796, 13829, 13862, 13894, 13927, 13960, 13993, 14026, 14059, 14092, 14125, 14158, 14190, 14223, 14256, 14289,  /* 416 - 447*/
                14322, 14355, 14388, 14421, 14454, 14486, 14519, 14552, 14585, 14618, 14650, 14683, 14716, 14748, 14781, 14813, 14846, 14878, 14910, 14943, 14975, 15007, 15040, 15072, 15104, 15136, 15168, 15200, 15233, 15265, 15297, 15329,  /* 448 - 479*/
                15361, 15393, 15425, 15457, 15489, 15521, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15807, 15839, 15871, 15903, 15935, 15967, 15998, 16030, 16062, 16094, 16126, 16158, 16190, 16221, 16253, 16285, 16317, 16349,  /* 480 - 511*/
                16381, 16413, 16445, 16477, 16509, 16541, 16573, 16605, 16637, 16669, 16701, 16733, 16765, 16797, 16829, 16861, 16893, 16925, 16957, 16989, 17021, 17053, 17085, 17117, 17149, 17181, 17214, 17246, 17278, 17310, 17342, 17374,  /* 512 - 543*/
                17406, 17438, 17471, 17503, 17535, 17567, 17599, 17631, 17664, 17696, 17728, 17760, 17792, 17824, 17857, 17889, 17921, 17953, 17985, 18017, 18050, 18082, 18114, 18146, 18178, 18210, 18242, 18274, 18307, 18339, 18371, 18403,  /* 544 - 575*/
                18435, 18467, 18499, 18531, 18563, 18595, 18627, 18659, 18691, 18723, 18755, 18786, 18818, 18850, 18882, 18914, 18945, 18977, 19009, 19041, 19072, 19104, 19136, 19167, 19199, 19230, 19262, 19293, 19325, 19356, 19387, 19419,  /* 576 - 607*/
                19450, 19482, 19513, 19544, 19576, 19607, 19638, 19670, 19701, 19732, 19764, 19795, 19826, 19858, 19889, 19920, 19952, 19983, 20014, 20046, 20077, 20109, 20140, 20172, 20203, 20235, 20266, 20298, 20329, 20361, 20393, 20424,  /* 608 - 639*/
                20456, 20488, 20520, 20552, 20584, 20615, 20647, 20679, 20711, 20744, 20776, 20808, 20840, 20872, 20904, 20937, 20969, 21001, 21034, 21066, 21098, 21131, 21163, 21195, 21228, 21260, 21293, 21325, 21357, 21390, 21422, 21454,  /* 640 - 671*/
                21487, 21519, 21552, 21584, 21616, 21649, 21681, 21713, 21745, 21778, 21810, 21842, 21874, 21906, 21938, 21971, 22003, 22035, 22067, 22098, 22130, 22162, 22194, 22226, 22257, 22289, 22321, 22352, 22384, 22416, 22447, 22479,  /* 672 - 703*/
                22510, 22542, 22573, 22605, 22636, 22668, 22699, 22731, 22762, 22794, 22825, 22857, 22889, 22920, 22952, 22983, 23015, 23046, 23078, 23110, 23141, 23173, 23205, 23237, 23268, 23300, 23332, 23364, 23396, 23428, 23460, 23492,  /* 704 - 735*/
                23525, 23557, 23589, 23621, 23654, 23686, 23719, 23751, 23784, 23816, 23849, 23881, 23914, 23947, 23979, 24012, 24045, 24078, 24110, 24143, 24176, 24209, 24241, 24274, 24307, 24340, 24373, 24405, 24438, 24471, 24504, 24536,  /* 736 - 767*/
                24569, 24602, 24634, 24667, 24700, 24732, 24765, 24797, 24830, 24862, 24894, 24927, 24959, 24991, 25023, 25056, 25088, 25120, 25152, 25184, 25215, 25247, 25279, 25310, 25342, 25374, 25405, 25437, 25468, 25499, 25531, 25562,  /* 768 - 799*/
                25594, 25625, 25657, 25689, 25720, 25752, 25784, 25816, 25848, 25880, 25912, 25944, 25975, 26007, 26038, 26070, 26101, 26133, 26165, 26198, 26230, 26263, 26296, 26329, 26362, 26394, 26426, 26457, 26486, 26515, 26544, 26572,  /* 800 - 831*/
                26601, 26629, 26658, 26687, 26718, 26749, 26781, 26813, 26846, 26880, 26914, 26948, 26982, 27016, 27050, 27084, 27118, 27152, 27186, 27220, 27253, 27286, 27318, 27351, 27383, 27415, 27447, 27479, 27510, 27542, 27573, 27604,  /* 832 - 863*/
                27635, 27666, 27696, 27727, 27758, 27788, 27819, 27849, 27879, 27910, 27940, 27970, 28000, 28031, 28061, 28091, 28121, 28152, 28182, 28212, 28243, 28273, 28304, 28335, 28365, 28396, 28427, 28458, 28489, 28521, 28552, 28583,  /* 864 - 895*/
                28615, 28647, 28679, 28711, 28743, 28775, 28807, 28840, 28872, 28905, 28937, 28970, 29003, 29035, 29068, 29101, 29134, 29166, 29199, 29232, 29265, 29298, 29331, 29363, 29396, 29429, 29462, 29494, 29527, 29560, 29592, 29624,  /* 896 - 927*/
                29657, 29689, 29721, 29754, 29786, 29818, 29850, 29882, 29914, 29946, 29978, 30010, 30041, 30073, 30105, 30137, 30168, 30200, 30232, 30263, 30295, 30326, 30358, 30390, 30421, 30453, 30484, 30516, 30547, 30579, 30610, 30641,  /* 928 - 959*/
                30673, 30704, 30736, 30767, 30799, 30830, 30862, 30893, 30925, 30956, 30988, 31019, 31051, 31083, 31114, 31146, 31178, 31209, 31241, 31273, 31305, 31337, 31368, 31400, 31432, 31464, 31496, 31529, 31561, 31593, 31625, 31658,  /* 960 - 991*/
                31690, 31722, 31755, 31788, 31820, 31853, 31886, 31918, 31951, 31984, 32017, 32051, 32084, 32117, 32150, 32184, 32217, 32251, 32285, 32319, 32353, 32387, 32421, 32455, 32489, 32524, 32558, 32593, 32627, 32662, 32697, 32732,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 84, 149, 208, 264, 318, 370, 420, 469, 517, 564, 610, 655, 700, 744, 788, 831, 874, 916, 958, 999, 1040, 1081, 1121, 1161, 1201, 1241, 1280, 1319, 1358, 1396, 1435,  /* 0 - 31*/
                1473, 1510, 1548, 1586, 1623, 1660, 1697, 1734, 1770, 1807, 1843, 1879, 1915, 1951, 1987, 2022, 2058, 2093, 2128, 2163, 2198, 2233, 2268, 2303, 2337, 2371, 2406, 2440, 2474, 2508, 2542, 2576,  /* 32 - 63*/
                2609, 2643, 2676, 2710, 2743, 2776, 2810, 2843, 2876, 2909, 2942, 2974, 3007, 3040, 3072, 3105, 3137, 3169, 3202, 3234, 3266, 3298, 3330, 3362, 3394, 3425, 3457, 3489, 3520, 3552, 3584, 3615,  /* 64 - 95*/
                3646, 3678, 3709, 3740, 3771, 3802, 3833, 3864, 3895, 3926, 3957, 3988, 4019, 4049, 4080, 4110, 4141, 4171, 4202, 4232, 4263, 4293, 4323, 4353, 4384, 4414, 4444, 4474, 4504, 4534, 4564, 4594,  /* 96 - 127*/
                4623, 4653, 4683, 4713, 4742, 4772, 4801, 4831, 4861, 4890, 4919, 4949, 4978, 5008, 5037, 5066, 5095, 5124, 5154, 5183, 5212, 5241, 5270, 5299, 5328, 5357, 5386, 5414, 5443, 5472, 5501, 5529,  /* 128 - 159*/
                5558, 5587, 5615, 5644, 5673, 5701, 5730, 5758, 5786, 5815, 5843, 5872, 5900, 5928, 5956, 5985, 6013, 6041, 6069, 6097, 6125, 6154, 6182, 6210, 6238, 6266, 6293, 6321, 6349, 6377, 6405, 6433,  /* 160 - 191*/
                6461, 6488, 6516, 6544, 6571, 6599, 6627, 6654, 6682, 6709, 6737, 6764, 6792, 6819, 6847, 6874, 6902, 6929, 6956, 6984, 7011, 7038, 7066, 7093, 7120, 7147, 7174, 7201, 7229, 7256, 7283, 7310,  /* 192 - 223*/
                7337, 7364, 7391, 7418, 7445, 7472, 7499, 7526, 7552, 7579, 7606, 7633, 7660, 7686, 7713, 7740, 7767, 7793, 7820, 7847, 7873, 7900, 7927, 7953, 7980, 8006, 8033, 8059, 8086, 8112, 8139, 8165,  /* 224 - 255*/
                8192, 8218, 8244, 8271, 8297, 8324, 8350, 8376, 8403, 8429, 8456, 8482, 8508, 8535, 8561, 8588, 8614, 8640, 8667, 8693, 8720, 8746, 8772, 8799, 8825, 8852, 8878, 8904, 8931, 8957, 8984, 9010,  /* 256 - 287*/
                9036, 9063, 9089, 9116, 9142, 9168, 9195, 9221, 9248, 9274, 9300, 9327, 9353, 9380, 9406, 9432, 9459, 9485, 9512, 9538, 9565, 9591, 9617, 9644, 9670, 9697, 9723, 9749, 9776, 9802, 9829, 9855,  /* 288 - 319*/
                9881, 9908, 9934, 9961, 9987, 10013, 10040, 10066, 10093, 10119, 10145, 10172, 10198, 10225, 10251, 10277, 10304, 10330, 10357, 10383, 10409, 10436, 10462, 10489, 10515, 10541, 10568, 10594, 10621, 10647, 10673, 10700,  /* 320 - 351*/
                10726, 10753, 10779, 10805, 10832, 10858, 10885, 10911, 10938, 10964, 10990, 11017, 11043, 11070, 11096, 11122, 11149, 11175, 11202, 11228, 11254, 11281, 11307, 11334, 11360, 11386, 11413, 11439, 11466, 11492, 11518, 11545,  /* 352 - 383*/
                11571, 11598, 11624, 11650, 11677, 11703, 11730, 11756, 11782, 11809, 11835, 11862, 11888, 11914, 11941, 11967, 11994, 12020, 12046, 12073, 12099, 12126, 12152, 12178, 12205, 12231, 12258, 12284, 12311, 12337, 12363, 12390,  /* 384 - 415*/
                12416, 12443, 12469, 12495, 12522, 12548, 12575, 12601, 12627, 12654, 12680, 12707, 12733, 12759, 12786, 12812, 12839, 12865, 12891, 12918, 12944, 12971, 12997, 13023, 13050, 13076, 13103, 13129, 13155, 13182, 13208, 13235,  /* 416 - 447*/
                13261, 13287, 13314, 13340, 13367, 13393, 13419, 13446, 13472, 13499, 13525, 13551, 13578, 13604, 13631, 13657, 13684, 13710, 13736, 13763, 13789, 13816, 13842, 13868, 13895, 13921, 13948, 13974, 14000, 14027, 14053, 14080,  /* 448 - 479*/
                14106, 14132, 14159, 14185, 14212, 14238, 14264, 14291, 14317, 14344, 14370, 14396, 14423, 14449, 14476, 14502, 14528, 14555, 14581, 14608, 14634, 14660, 14687, 14713, 14740, 14766, 14792, 14819, 14845, 14872, 14898, 14924,  /* 480 - 511*/
                14951, 14977, 15004, 15030, 15057, 15083, 15109, 15136, 15162, 15189, 15215, 15241, 15268, 15294, 15321, 15347, 15373, 15400, 15426, 15453, 15479, 15505, 15532, 15558, 15585, 15611, 15637, 15664, 15690, 15717, 15743, 15769,  /* 512 - 543*/
                15796, 15822, 15849, 15875, 15901, 15928, 15954, 15981, 16007, 16033, 16060, 16086, 16113, 16139, 16165, 16192, 16218, 16245, 16271, 16297, 16324, 16350, 16377, 16403, 16430, 16456, 16482, 16509, 16535, 16562, 16588, 16614,  /* 544 - 575*/
                16641, 16667, 16694, 16720, 16746, 16773, 16799, 16826, 16852, 16878, 16905, 16931, 16958, 16984, 17010, 17037, 17063, 17090, 17116, 17142, 17169, 17195, 17222, 17248, 17274, 17301, 17327, 17354, 17380, 17406, 17433, 17459,  /* 576 - 607*/
                17486, 17512, 17538, 17565, 17591, 17618, 17644, 17670, 17697, 17723, 17750, 17776, 17803, 17829, 17855, 17882, 17908, 17935, 17961, 17987, 18014, 18040, 18067, 18093, 18119, 18146, 18172, 18199, 18225, 18251, 18278, 18304,  /* 608 - 639*/
                18331, 18357, 18383, 18410, 18436, 18463, 18489, 18515, 18542, 18568, 18595, 18621, 18647, 18674, 18700, 18727, 18753, 18779, 18806, 18832, 18859, 18885, 18911, 18938, 18964, 18991, 19017, 19043, 19070, 19096, 19123, 19149,  /* 640 - 671*/
                19176, 19202, 19228, 19255, 19281, 19308, 19334, 19360, 19387, 19413, 19440, 19466, 19492, 19519, 19545, 19572, 19598, 19624, 19651, 19677, 19704, 19730, 19756, 19783, 19809, 19836, 19862, 19888, 19915, 19941, 19968, 19994,  /* 672 - 703*/
                20020, 20047, 20073, 20100, 20126, 20152, 20179, 20205, 20232, 20258, 20284, 20311, 20337, 20364, 20390, 20416, 20443, 20469, 20496, 20522, 20549, 20575, 20601, 20628, 20654, 20681, 20707, 20733, 20760, 20786, 20813, 20839,  /* 704 - 735*/
                20865, 20892, 20918, 20945, 20971, 20997, 21024, 21050, 21077, 21103, 21129, 21156, 21182, 21209, 21235, 21261, 21288, 21314, 21341, 21367, 21393, 21420, 21446, 21473, 21499, 21525, 21552, 21578, 21605, 21631, 21657, 21684,  /* 736 - 767*/
                21710, 21737, 21763, 21789, 21816, 21842, 21869, 21895, 21922, 21948, 21974, 22001, 22027, 22054, 22080, 22106, 22133, 22159, 22186, 22212, 22238, 22265, 22291, 22318, 22344, 22370, 22397, 22423, 22450, 22476, 22502, 22529,  /* 768 - 799*/
                22555, 22582, 22608, 22634, 22661, 22687, 22714, 22740, 22766, 22793, 22819, 22846, 22872, 22898, 22925, 22951, 22978, 23004, 23030, 23057, 23083, 23110, 23136, 23162, 23189, 23215, 23242, 23268, 23295, 23321, 23347, 23374,  /* 800 - 831*/
                23400, 23427, 23453, 23479, 23506, 23532, 23559, 23585, 23611, 23638, 23664, 23691, 23717, 23743, 23770, 23796, 23823, 23849, 23875, 23902, 23928, 23955, 23981, 24007, 24034, 24060, 24087, 24113, 24139, 24166, 24192, 24219,  /* 832 - 863*/
                24245, 24271, 24298, 24324, 24351, 24377, 24403, 24430, 24456, 24483, 24509, 24535, 24562, 24588, 24615, 24641, 24668, 24694, 24721, 24747, 24774, 24801, 24828, 24855, 24882, 24909, 24937, 24964, 24992, 25019, 25047, 25075,  /* 864 - 895*/
                25103, 25131, 25160, 25188, 25217, 25245, 25274, 25303, 25332, 25361, 25390, 25420, 25449, 25479, 25509, 25539, 25569, 25599, 25629, 25660, 25691, 25722, 25752, 25784, 25815, 25846, 25878, 25910, 25942, 25974, 26006, 26039,  /* 896 - 927*/
                26071, 26104, 26137, 26170, 26204, 26237, 26271, 26305, 26339, 26374, 26408, 26443, 26478, 26513, 26549, 26585, 26621, 26657, 26693, 26730, 26767, 26804, 26841, 26879, 26917, 26955, 26994, 27033, 27072, 27112, 27151, 27191,  /* 928 - 959*/
                27232, 27273, 27314, 27355, 27397, 27439, 27482, 27525, 27568, 27612, 27656, 27701, 27746, 27791, 27838, 27884, 27931, 27979, 28027, 28075, 28125, 28174, 28225, 28276, 28328, 28380, 28433, 28487, 28542, 28598, 28654, 28711,  /* 960 - 991*/
                28769, 28828, 28889, 28950, 29012, 29076, 29141, 29207, 29274, 29343, 29414, 29487, 29561, 29637, 29716, 29796, 29880, 29966, 30055, 30148, 30245, 30345, 30451, 30563, 30682, 30808, 30945, 31095, 31261, 31451, 31679, 31982,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
        },
        /* tHistWt */
        {
            /* 0 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 1 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 2 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 3 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 4 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 5 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 6 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 7 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 8 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 9 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 10 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
            /* 11 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  /* 0 - 31*/
                        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*32 - 62*/
                    },
                },
            },
        },
        /* tHighFreqEnh[12] */
        {
            /* 0 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                600,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 1 */
            {
                /* nDetailSigmaDis */
                6000,
                /* nDetailSigmaVal */
                900,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 2 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 3 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 4 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 5 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 6 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 7 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 8 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 9 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 2048, 2048, 2048, 2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 256, 256,  /* 0 - 31*/
                    128, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 10 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                1,
                /* nDetailExtraStrNeg */
                1,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 11 */
            {
                /* nDetailSigmaDis */
                5000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                1,
                /* nDetailExtraStrNeg */
                1,
                /* nDetailGainLimitPos */
                256,
                /* nDetailGainLimitNeg */
                256,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
        },
        /* tLowFreqEnh[12] */
        {
            /* 0 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 1 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 2 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 3 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 4 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 5 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 6 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 7 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 8 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 9 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 10 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 11 */
            {
                /* nRltmDetailLowEn */
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                48,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
        },
        /* tHrAuto */
        {
            /* nHrGrpNum */
            1,
            /* nHrRefVal[4] */
            {1024, /*0 - 0*/},
            /* tHrParam */
            {
                /* 0 */
                {
                    /* nLocalFactor[12] */
                    {110, 110, 110, 110, 110, 110, 110, 110, 100, 90, 80, 70, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {50, 46, 44, 42, 42, 42, 48, 50, 42, 45, 40, 30, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {30, 30, 26, 24, 26, 30, 25, 32, 25, 40, 40, 30, /*0 - 11*/},
					/* nPostGamma[12] */
                    {38, 38, 38, 38, 38, 36, 40, 40, 40, 36, 36, 38, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {24, 24, 24, 24, 24, 24, 24, 24, 22, 30, 30, 20, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {0, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, 80, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {8, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {8, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 11*/},
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEMOSAIC_PARAM_T demosaic_param_sdr = {
    /* nDemosaicEn */
    1,
    /* nMode */
    0,
    /* nFreqSensitivity */
    12,
    /* nEdgeDirectEstStrengthLut[9] */
    {64, 128, 256, 512, 1024, 2048, 3072, 3694, 4095, /*0 - 8*/},
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nEdgeDirectEstStrength */
        64,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nEdgeDirectEstStrength[16] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_GIC_PARAM_T gic_param_sdr = {
    /* nGicEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nGicStrengthLut[9] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nGicStrengthLut[16][9] */
        {
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        },
    },
};

const static AX_ISP_IQ_FCC_PARAM_T fcc_param_sdr = {
    /* nFcCorEnable */
    1,
    /* nFcCorLimit */
    512,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nFcCorStrength */
        80,
        /* nFcCorSatLut[9] */
        {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
        /* nFcCorSatLevel0 */
        12,
        /* nFcCorSatLevel1 */
        168,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nFcCorStrength[16] */
        {4, 4, 4, 4, 4, 4, 4, 4, 64, 80, 100, 16, 16, 16, 16, 16, /*0 - 15*/},
        /* nFcCorSatLut[16][9] */
        {
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 64, 128, 128, 200, 200, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
        },
        /* nFcCorSatLevel0[16] */
        {12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, /*0 - 15*/},
        /* nFcCorSatLevel1[16] */
        {168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 168, 16, 16, 16, 16, 16, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_DEPURPLE_PARAM_T depurple_param_sdr = {
    /* nEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        1,
        /* nDetEdgeSlopeY */
        24,
        /* nDetEdgeOffsetY */
        -115,
        /* nDetEdgeEnableC */
        0,
        /* nDetEdgeSlopeC */
        127,
        /* nDetEdgeOffsetC */
        -21,
        /* nDetSeledgeThrY */
        13440,
        /* nDetSeledgeSlopeY */
        127,
        /* nDetSeledgeWeight[7] */
        {40, 0, 0, 0, 0, 0, 0, /*0 - 6*/},
        /* nDetMaskStrength */
        268,
        /* nDetMaskStrengthPre */
        32,
        /* nDetMaskWeightPre[11] */
        {64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
    },
    /* tCmpParam */
    {
        /* nDebugMaskHighlightEnable */
        0,
        /* nDebugMaskHighlightThr */
        0,
    },
    /* tManualParam */
    {
        /* nCompStrength */
        128,
        /* nCompTargetLuma[8] */
        {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {0, 128, 128, 128, 128, 128, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[16] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nCompStrength[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nCompTargetLuma[16][8] */
        {
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
            {0, 0, 0, 0, 128, 128, 128, 0, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 14, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
            {128, 128, 128, 102, 26, 12, 0, 0, 0, 0, 0, 0, 0, 50, 100, 128, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
            {0, 128, 128, 128, 128, 128, /*0 - 5*/},
        },
    },
};

const static AX_ISP_IQ_CC_PARAM_T cc_param_sdr = {
    /* nCcEn */
    1,
    /* nCcMode */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nLumaRatio[2] */
    {38, 14, /*0 - 1*/},
    /* tManualParam */
    {
        /* nCcmCtrlLevel */
        256,
        /* nCcmSat */
        8,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-10, -48, -54, -41, 8, -131, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {-10, 0, 0, 0, -8, -6, 0, 0, 0, 8, 8, 8, 0, -8, -8, -10, /*0 - 15*/},
        /* nXcmHue[16] */
        {0, 0, 0, 0, 0, 0, 0, 99, 0, 300, 300, 300, 0, 0, 0, 0, /*0 - 15*/},
    },
    /* tAutoParam */
    {
        /* nLightSourceRatio */
        0,
        /* tColorTempAuto */
        {
            /* nCtNum */
            7,
            /* nRefValCt[12] */
            {2200, 2600, 3650, 4200, 4900, 6000, 7500, /*0 - 6*/},
            /* nLuxGainNum */
            5,
            /* nRefValLuxGain[12][5] */
            {
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
                {1024, 8200, 32799, 131066, 524267, /*0 - 4*/},
            },
            /* nCcmCtrlLevel[12][5] */
            {
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
                {256, 256, 256, 256, 256, /*0 - 4*/},
            },
            /* nCcmSat[12][5] */
            {
                {8, 6, 4, 2, -10, /*0 - 4*/},
                {14, 8, 6, 4, 0, /*0 - 4*/},
                {11, 8, 6, 4, 0, /*0 - 4*/},
                {13, 8, 4, 4, 0, /*0 - 4*/},
                {13, 6, 4, 3, -10, /*0 - 4*/},
                {14, 8, 8, 8, 8, /*0 - 4*/},
                {14, 8, 8, 8, 8, /*0 - 4*/},
            },
            /* nCcmHue[12][5] */
            {
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
            },
            /* nCcmMatrix[12][5][6] */
            {
                /* nCcmMatrix 0 */
                {
                    {51, -121, -124, -8, -18, -305, /*0 - 5*/},
                    {51, -121, -124, -8, -18, -305, /*0 - 5*/},
                    {51, -121, -124, -8, -18, -305, /*0 - 5*/},
                    {51, -121, -124, -8, -18, -305, /*0 - 5*/},
                    {51, -121, -124, -8, -18, -305, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {15, -62, -117, -30, 5, -243, /*0 - 5*/},
                    {15, -62, -117, -30, 5, -243, /*0 - 5*/},
                    {15, -62, -117, -30, 5, -243, /*0 - 5*/},
                    {15, -62, -117, -31, 5, -243, /*0 - 5*/},
                    {15, -62, -117, -30, 5, -243, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-30, 0, -72, -20, 20, -194, /*0 - 5*/},
                    {-30, 0, -72, -20, 20, -194, /*0 - 5*/},
                    {-30, 0, -72, -20, 20, -194, /*0 - 5*/},
                    {-30, 0, -72, -20, 20, -194, /*0 - 5*/},
                    {-30, 0, -72, -20, 20, -194, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-107, -20, -88, -12, 10, -178, /*0 - 5*/},
                    {-107, -20, -88, -12, 10, -178, /*0 - 5*/},
                    {-107, -20, -88, -12, 10, -178, /*0 - 5*/},
                    {-107, -20, -88, -12, 10, -178, /*0 - 5*/},
                    {-107, -20, -88, -12, 10, -178, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-64, -57, -66, -68, 8, -142, /*0 - 5*/},
                    {-64, -57, -66, -68, 8, -142, /*0 - 5*/},
                    {-64, -57, -66, -68, 8, -142, /*0 - 5*/},
                    {-64, -57, -66, -68, 8, -142, /*0 - 5*/},
                    {-64, -57, -66, -68, 8, -142, /*0 - 5*/},
                },
                /* nCcmMatrix 5 */
                {
                    {-40, -48, -54, -40, 8, -131, /*0 - 5*/},
                    {-40, -48, -54, -40, 8, -131, /*0 - 5*/},
                    {-40, -48, -54, -40, 8, -131, /*0 - 5*/},
                    {-40, -48, -54, -40, 8, -131, /*0 - 5*/},
                    {-40, -48, -54, -40, 8, -131, /*0 - 5*/},
                },
                /* nCcmMatrix 6 */
                {
                    {-36, -31, -56, -80, 5, -108, /*0 - 5*/},
                    {-36, -31, -56, -80, 5, -108, /*0 - 5*/},
                    {-36, -31, -56, -80, 5, -108, /*0 - 5*/},
                    {-36, -31, -56, -80, 5, -108, /*0 - 5*/},
                    {-36, -31, -56, -80, 5, -108, /*0 - 5*/},
                },
            },
            /* nXcmCtrlLevel[12][5][16] */
            {
                /* nXcmCtrlLevel 0 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 1 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 2 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 3 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 4 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 5 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
                /* nXcmCtrlLevel 6 */
                {
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                    {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
                },
            },
            /* nXcmSat[12][5][16] */
            {
                /* nXcmSat 0 */
                {
                    {-24, 0, 0, -10, -12, -12, -32, -16, 0, 0, 0, -10, 0, -32, -24, -24, /*0 - 15*/},
                    {-24, 0, 0, -10, -12, -12, -32, -16, 0, 0, 0, -10, 0, -32, -24, -24, /*0 - 15*/},
                    {-24, 0, 0, -10, -12, -12, -16, -16, 0, 0, 0, -10, 0, -32, -24, -24, /*0 - 15*/},
                    {-24, 0, 0, -10, -12, -12, -32, -16, 0, 0, 0, -10, 0, -32, -24, -24, /*0 - 15*/},
                    {-24, 0, 0, -10, -12, -12, -32, -16, 0, 0, 0, -10, 0, -32, -24, -24, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {-32, 0, 0, 0, -8, -8, -10, -5, 10, 10, 10, 10, 10, -16, -20, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, -8, -8, -10, -5, 6, 6, 6, 6, 4, -16, -20, -32, /*0 - 15*/},
                    {-24, 0, 0, 0, -8, -8, -10, -5, 8, 8, 8, 8, 6, -16, -16, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, -8, -8, -20, -12, 4, 6, 6, 6, 4, -16, -20, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, -10, -10, -22, -16, 0, 0, 0, 0, 0, -16, -20, -32, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {-32, 0, 0, 0, 0, 0, -8, -5, 10, 10, 10, 10, 8, -20, -32, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, -8, -8, -4, -4, 6, 6, 6, 6, 4, -16, -20, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, -8, -8, -4, -4, 8, 8, 8, 8, 6, -16, -20, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, -10, -10, -20, -12, 6, 6, 6, 6, 4, -16, -20, -32, /*0 - 15*/},
                    {-20, 0, 0, 0, -10, -10, -20, -16, 0, 0, 0, 0, 0, -16, -16, -20, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {-32, 0, 0, 0, 0, -20, 0, 0, 10, 10, 10, 10, 8, -32, -32, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, 0, -20, 0, 0, 10, 10, 10, 10, 10, -16, -16, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, 0, -20, 0, 0, 0, 0, 0, 0, 0, -16, -16, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, 0, -20, 0, 0, 0, 0, 0, 0, 0, -16, -16, -32, /*0 - 15*/},
                    {-32, 0, 0, 0, 0, -20, 0, 0, 0, 0, 0, 0, 0, -16, -16, -32, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {8, 0, 0, 0, 0, 0, -8, 5, 5, 10, 10, 10, 10, 10, 8, 8, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -14, -8, -8, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {-2, 0, 0, 0, 0, -16, -8, -8, 6, -16, -16, -16, -16, -16, -16, -16, /*0 - 15*/},
                    {-20, 0, 0, 0, 0, -20, -8, -8, 0, -18, -18, -18, -18, -18, -18, -18, /*0 - 15*/},
                    {-20, 0, 0, 0, 0, -20, -8, -8, 0, -20, -20, -20, -20, -20, -20, -20, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {8, 0, 0, 0, -4, -2, -8, 0, 10, 15, 15, 15, 15, 15, 10, 8, /*0 - 15*/},
                    {8, 0, 0, 0, -8, -6, 0, 0, 8, 10, 10, 10, 14, 14, 10, 8, /*0 - 15*/},
                    {2, 0, 0, 0, -8, -6, 0, 0, 2, 8, 8, 8, 4, 4, 2, 2, /*0 - 15*/},
                    {-10, 0, 0, 0, -8, -6, 0, 0, 2, 9, 9, 9, 0, -8, -8, -10, /*0 - 15*/},
                    {-10, 0, 0, 0, -8, -6, 0, 0, 0, 8, 8, 8, 0, -8, -8, -10, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {8, 0, 0, 0, -6, -4, 0, 0, 0, 15, 15, 15, 15, 15, 10, 8, /*0 - 15*/},
                    {8, 0, 0, 0, -8, -6, 0, 0, 0, 10, 10, 10, 10, 10, 9, 8, /*0 - 15*/},
                    {5, 0, 0, 0, -8, -6, 0, 0, 0, 10, 10, 10, 10, 10, 5, 5, /*0 - 15*/},
                    {-4, 0, 0, 0, -8, -6, 0, 0, 0, 9, 9, 9, 0, -5, -5, -4, /*0 - 15*/},
                    {-9, 0, 0, 0, -8, -6, 0, 0, 0, 8, 8, 8, 0, -7, -7, -9, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {0, 0, 0, 0, -150, -150, 0, 0, 0, 0, 0, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -150, -150, 0, 0, 0, 0, 0, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -150, -150, 0, 0, 0, 0, 0, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -150, -150, 0, 0, 0, 0, 0, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -150, -150, 0, 0, 0, 0, 0, -640, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {0, 0, 0, 0, -100, -100, 320, 0, 0, 200, 200, 200, 100, 0, 0, 0, /*0 - 15*/},
                    {640, 0, 0, 0, -100, -100, 320, 0, 0, 200, 200, 200, 100, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 640, 0, 0, 200, 200, 200, 100, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 640, 0, 0, 100, 100, 100, 50, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {0, 0, 0, 0, -100, -100, 0, 0, 0, 200, 200, 200, 100, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 0, 0, 0, 200, 200, 200, 100, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 0, 0, 0, 200, 200, 200, 100, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 640, 0, 0, 200, 200, 100, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -100, -100, 640, 0, 0, -200, -200, -200, -200, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {200, 0, 0, 0, 0, -60, 0, 0, 0, 200, 200, 200, 100, 0, 200, 200, /*0 - 15*/},
                    {200, 0, 0, 0, -30, -40, 160, 0, 0, 200, 200, 200, 100, 0, 200, 200, /*0 - 15*/},
                    {200, 0, 0, 0, 100, 150, 200, 0, 0, -160, -160, -160, -100, 0, 200, 200, /*0 - 15*/},
                    {200, 0, 0, 0, 0, 200, 200, 0, -200, -150, -150, -200, -200, 0, 200, 200, /*0 - 15*/},
                    {200, 0, 0, 0, 0, 400, 0, 0, 0, -200, -200, -200, -200, 0, 200, 200, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {200, 0, 0, 0, 0, -320, 180, 120, 80, 0, 0, 0, 0, 0, 200, 200, /*0 - 15*/},
                    {200, 0, 0, 0, 0, -320, 160, 100, 0, 0, 0, 0, 0, 0, 200, 200, /*0 - 15*/},
                    {100, 0, 0, 0, 0, -320, 0, 0, 0, -160, -160, -160, -160, 0, 100, 100, /*0 - 15*/},
                    {20, 0, 0, 0, 0, -320, 0, 0, 0, -200, -200, -200, -320, 0, 20, 20, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -320, 0, 0, 0, -320, -320, -320, -320, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 50, 150, 100, 100, 100, 100, 0, 0, 480, 240, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 50, 100, 100, 100, 100, 0, 0, 480, 240, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 50, 50, 100, 100, 100, 100, 0, 0, 320, 220, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 100, 0, 100, 100, 100, 0, 0, 320, 160, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 100, 0, 100, 100, 100, 0, 0, 320, 160, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 0, 0, 480, 240, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 0, 0, 480, 240, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 0, 0, 320, 160, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 0, 0, 320, 160, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 100, 100, 0, 0, 320, 160, /*0 - 15*/},
                },
            },
        },
        /* tLightSourceAuto */
        {
            /* nLightSource */
            0,
            /* nLightSourceNum */
            0,
            /* nCcmCtrlLevel[12] */
            {0, /*0 - 0*/},
            /* nCcmSat[12] */
            {0, /*0 - 0*/},
            /* nCcmHue[12] */
            {0, /*0 - 0*/},
            /* nCcmMatrix[12][6] */
            {
                {0, 0, 0, 0, 0, 0, /*0 - 5*/},
            },
            /* nXcmCtrlLevel[12][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            },
            /* nXcmSat[12][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            },
            /* nXcmHue[12][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            },
        },
    },

};

const static AX_ISP_IQ_HS2DLUT_PARAM_T hs2dlut_param_sdr = {
    /* nHs2dLutEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    1,
    /* nConvergeSpeed */
    5,
    /* nGainTrigger */
    10240,
    /* nLuxTrigger */
    10240,
    /* nCctTrigger */
    50,
    /* tManualParam */
    {
        /* tHs2dLut */
        {
            /* nHueLut[24][16] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
            },
            /* nSatLut[24][16] */
            {
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
            },
        },
    },
    /* tAutoParam */
    {
        /* nRefListNum */
        1,
        /* tRefTbl[12] */
        {
            /* 0 */
            {
                /* nRefStartVal */
                1024,
                /* nRefEndVal */
                2048,
                /* nCctListNum */
                1,
                /* tCctTbl[16] */
                {
                    /* 0 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 1 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 2 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 3 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 4 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 5 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 6 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 7 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 8 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 9 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 10 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 11 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 12 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 13 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 14 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                    /* 15 */
                    {
                        /* nCctStart */
                        5000,
                        /* nCctEnd */
                        6000,
                        /* tHs2dLut */
                        {
                            /* nHueLut[24][16] */
                            {
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                                {1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, 1920, /*0 - 15*/},
                                {3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, 3840, /*0 - 15*/},
                                {5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, 5760, /*0 - 15*/},
                                {7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, 7680, /*0 - 15*/},
                                {9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, 9600, /*0 - 15*/},
                                {11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, 11520, /*0 - 15*/},
                                {13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, 13440, /*0 - 15*/},
                                {15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, 15360, /*0 - 15*/},
                                {17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, 17280, /*0 - 15*/},
                                {19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, 19200, /*0 - 15*/},
                                {21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, 21120, /*0 - 15*/},
                                {23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, 23040, /*0 - 15*/},
                                {24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, 24960, /*0 - 15*/},
                                {26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, 26880, /*0 - 15*/},
                                {28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, 28800, /*0 - 15*/},
                                {30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, 30720, /*0 - 15*/},
                                {32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, 32640, /*0 - 15*/},
                                {34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, 34560, /*0 - 15*/},
                                {36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, 36480, /*0 - 15*/},
                                {38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, 38400, /*0 - 15*/},
                                {40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, 40320, /*0 - 15*/},
                                {42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, 42240, /*0 - 15*/},
                                {44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, 44160, /*0 - 15*/},
                            },
                            /* nSatLut[24][16] */
                            {
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                                {2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, 32768, /*0 - 15*/},
                            },
                        },
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_GAMMA_PARAM_T gamma_param_sdr = {
    /* nGammaEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* eGammaMode */
    /* 0:AX_ISP_GAM_USER_GAMMA, 1:AX_ISP_GAM_PRESET_GAMMA */
    AX_ISP_GAM_USER_GAMMA,
    /* ePresetGammaType */
    /* 0:AX_ISP_GAM_LINEAR, 1:AX_ISP_GAM_BT709, 2:AX_ISP_GAM_SRGB, 10:AX_ISP_GAM_AX_GAM0, 11:AX_ISP_GAM_AX_GAM1, 12:AX_ISP_GAM_AX_GAM2, 255:AX_ISP_GAM_MODE_CUSTOMER */
    AX_ISP_GAM_MODE_CUSTOMER,
    /* tManualParam */
    {
        /* eLutMode */
        /* 0:AX_ISP_GAM_LUT_LINEAR, 1:AX_ISP_GAM_EXPONENTIAL */
       AX_ISP_GAM_LUT_LINEAR,
        /* tGammaLut */
        {
            /* nLut[129] */
            {
                0, 122, 239, 352, 461, 566, 667, 765, 858, 948, 1034, 1118, 1198, 1274, 1348, 1419, 1488, 1553, 1617, 1678, 1736, 1793, 1848, 1901, 1952, 2001, 2049, 2096, 2142, 2186, 2229, 2272,  /* 0 - 31*/
                2314, 2355, 2396, 2436, 2475, 2514, 2552, 2589, 2626, 2662, 2697, 2732, 2766, 2799, 2831, 2863, 2894, 2924, 2954, 2983, 3011, 3038, 3065, 3091, 3117, 3142, 3166, 3190, 3213, 3236, 3258, 3280,  /* 32 - 63*/
                3302, 3323, 3343, 3363, 3383, 3402, 3421, 3440, 3458, 3476, 3494, 3511, 3528, 3544, 3561, 3577, 3592, 3607, 3622, 3637, 3651, 3666, 3679, 3693, 3706, 3719, 3732, 3745, 3757, 3769, 3781, 3793,  /* 64 - 95*/
                3804, 3816, 3827, 3837, 3848, 3859, 3869, 3879, 3889, 3899, 3908, 3918, 3927, 3936, 3946, 3955, 3963, 3972, 3981, 3989, 3998, 4006, 4014, 4023, 4031, 4039, 4047, 4055, 4063, 4071, 4079, 4087,  /* 96 - 127*/
                4095, /*128 - 128*/
            },
        },
    },
    /* tAutoParam */
    {
        /* eLutMode */
        /* 0:AX_ISP_GAM_LUT_LINEAR, 1:AX_ISP_GAM_EXPONENTIAL */
       AX_ISP_GAM_LUT_LINEAR,
        /* nRefValStart[3] */
        {0, 51200, 512000, /*0 - 2*/},
        /* nRefValEnd[3] */
        {51200, 512000, 20480000, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 122, 239, 352, 461, 566, 667, 765, 858, 948, 1034, 1118, 1198, 1274, 1348, 1419, 1488, 1553, 1617, 1678, 1736, 1793, 1848, 1901, 1952, 2001, 2049, 2096, 2142, 2186, 2229, 2272,  /* 0 - 31*/
                    2314, 2355, 2396, 2436, 2475, 2514, 2552, 2589, 2626, 2662, 2697, 2732, 2766, 2799, 2831, 2863, 2894, 2924, 2954, 2983, 3011, 3038, 3065, 3091, 3117, 3142, 3166, 3190, 3213, 3236, 3258, 3280,  /* 32 - 63*/
                    3302, 3323, 3343, 3363, 3383, 3402, 3421, 3440, 3458, 3476, 3494, 3511, 3528, 3544, 3561, 3577, 3592, 3607, 3622, 3637, 3651, 3666, 3679, 3693, 3706, 3719, 3732, 3745, 3757, 3769, 3781, 3793,  /* 64 - 95*/
                    3804, 3816, 3827, 3837, 3848, 3859, 3869, 3879, 3889, 3899, 3908, 3918, 3927, 3936, 3946, 3955, 3963, 3972, 3981, 3989, 3998, 4006, 4014, 4023, 4031, 4039, 4047, 4055, 4063, 4071, 4079, 4087,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 116, 226, 331, 431, 526, 617, 703, 787, 866, 943, 1017, 1089, 1159, 1228, 1295, 1362, 1428, 1493, 1558, 1622, 1684, 1746, 1806, 1865, 1921, 1977, 2031, 2083, 2134, 2184, 2233,  /* 0 - 31*/
                    2280, 2327, 2373, 2418, 2462, 2504, 2546, 2586, 2625, 2662, 2698, 2733, 2767, 2800, 2832, 2863, 2894, 2923, 2953, 2981, 3009, 3037, 3063, 3090, 3115, 3141, 3165, 3189, 3213, 3236, 3258, 3280,  /* 32 - 63*/
                    3302, 3322, 3343, 3363, 3382, 3401, 3420, 3438, 3456, 3474, 3492, 3509, 3526, 3543, 3560, 3576, 3592, 3607, 3622, 3637, 3651, 3665, 3679, 3692, 3706, 3719, 3731, 3744, 3756, 3769, 3780, 3792,  /* 64 - 95*/
                    3803, 3815, 3826, 3836, 3847, 3857, 3868, 3878, 3887, 3897, 3907, 3917, 3926, 3935, 3945, 3954, 3963, 3971, 3980, 3988, 3997, 4005, 4013, 4021, 4029, 4038, 4046, 4054, 4062, 4070, 4078, 4086,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 116, 226, 331, 431, 526, 617, 703, 787, 866, 943, 1017, 1089, 1159, 1228, 1295, 1362, 1428, 1493, 1558, 1622, 1684, 1746, 1806, 1865, 1921, 1977, 2031, 2083, 2134, 2184, 2233,  /* 0 - 31*/
                    2280, 2327, 2373, 2418, 2462, 2504, 2546, 2586, 2625, 2662, 2698, 2733, 2767, 2800, 2832, 2863, 2894, 2923, 2953, 2981, 3009, 3037, 3063, 3090, 3115, 3141, 3165, 3189, 3213, 3236, 3258, 3280,  /* 32 - 63*/
                    3302, 3322, 3343, 3363, 3382, 3401, 3420, 3438, 3456, 3474, 3492, 3509, 3526, 3543, 3560, 3576, 3592, 3607, 3622, 3637, 3651, 3665, 3679, 3692, 3706, 3719, 3731, 3744, 3756, 3769, 3780, 3792,  /* 64 - 95*/
                    3803, 3815, 3826, 3836, 3847, 3857, 3868, 3878, 3887, 3897, 3907, 3917, 3926, 3935, 3945, 3954, 3963, 3971, 3980, 3988, 3997, 4005, 4013, 4021, 4029, 4038, 4046, 4054, 4062, 4070, 4078, 4086,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEHAZE_PARAM_T dehaze_param_sdr = {
    /* nDehazeEn */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tGlbParam */
    {
        /* nCalcMode */
        1,
        /* nAirReflect */
        65280,
        /* nSpatialSmoothness */
        2,
        /* nStrengthLimit */
        16,
        /* nMeshSize */
        128,
        /* nEps */
        8192,
        /* nBlurEnable */
        1,
        /* nSigmaBlur */
        4096,
    },
    /* tManualParam */
    {
        /* nEffectStrength */
        48,
        /* nGrayDcRatio */
        64,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nEffectStrength[12] */
        {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 11*/},
        /* nGrayDcRatio[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
    },
};

const static AX_ISP_IQ_CSC_PARAM_T csc_param_sdr = {
    /* nMatrix[3][3] */
    {
        {77, 150, 29, /*0 - 2*/},
        {-43, -85, 128, /*0 - 2*/},
        {128, -107, -21, /*0 - 2*/},
    },
    /* eColorSpaceMode */
    /* 0:AX_ISP_CSC_USER, 1:AX_ISP_CSC_BT601, 2:AX_ISP_CSC_BT709, 3:AX_ISP_CSC_BT2020, 4:AX_ISP_CSC_BUTT */
    AX_ISP_CSC_BT601,
    /* eUvSeqSel */
    /* 0:AX_ISP_NV12_SEL, 1:AX_ISP_NV21_SEL */
    AX_ISP_NV12_SEL,
};

const static AX_ISP_IQ_CA_PARAM_T ca_param_sdr = {
    /* nCppEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nCtrlLevel */
        0,
        /* nSat */
        0,
        /* nHue */
        0,
        /* nCmtx[2][2] */
        {
            {256, 0, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNumCt */
        12,
        /* nParamGrpNumLG */
        1,
        /* nRefValCt[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nRefValLG[12][5] */
        {
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
            {1024, /*0 - 0*/},
        },
        /* nCmtx[12][5][4] */
        {
            /* nCmtx 0 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 1 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 2 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 3 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 4 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 5 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 6 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 7 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 8 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 9 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 10 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* nCmtx 11 */
            {
                {0, 0, 0, 0, /*0 - 3*/},
            },
        },
    },
};

const static AX_ISP_IQ_YNR_PARAM_T ynr_param_sdr = {
    /* nYnrEn */
    1,
    /* nColorTargetEn */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nIoFlag */
    0,
    /* tManualParam */
    {
        /* nYnrCenter[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nYnrRadius[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nYnrSmooth[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nYnrLevel[2] */
        {255, 0, /*0 - 1*/},
        /* nYnrInvNrLut[4] */
        {1, 1, 1, 1, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nYnrCenter[12][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nYnrRadius[12][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nYnrSmooth[12][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nYnrLevel[12][2] */
        {
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
        },
        /* nYnrInvNrLut[12][4] */
        {
            {2047, 2047, 2047, 2047, /*0 - 3*/},
            {2047, 2047, 2047, 2047, /*0 - 3*/},
            {2047, 2047, 2047, 2047, /*0 - 3*/},
            {2047, 2047, 2047, 2047, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {64, 64, 64, 64, /*0 - 3*/},
            {44, 44, 44, 44, /*0 - 3*/},
            {4, 4, 4, 4, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_CNR_PARAM_T cnr_param_sdr = {
    /* nCnrEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nCnrLevel */
        16,
        /* nCnrInvNrLut[4] */
        {128, 128, 128, 128, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nCnrLevel[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nCnrInvNrLut[12][4] */
        {
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_YUV3DNR_PARAM_T yuv3dnr_param_sdr = {
    /* nYuv3dnrEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nConvergeSpeed */
    128,
    /* tExtMaskParam */
    {
        /* nExtMaskEnable */
        1,
        /* nExtMaskMode */
        0,
    },
    /* tSubModuleEnParam */
    {
        /* nMotionDetEnable */
        1,
        /* nTfEnable */
        1,
        /* nSf0YnrEnable */
        1,
        /* nSf1YnrEnable */
        1,
        /* nSf2YnrEnable */
        1,
        /* nSf0CnrEnable */
        1,
        /* nSf1CnrEnable */
        1,
    },
    /* tManualParam */
    {
        /* nMotDetNoiseLut[2][17] */
        {
            {132, 132, 132, 132, 132, 132, 128, 110, 100, 95, 90, 85, 80, 75, 70, 64, 64, /*0 - 16*/},
            {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {255, 0, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {255, 0, /*0 - 1*/},
        /* nMotDetSmoothLuma[2] */
        {2, 1, /*0 - 1*/},
        /* nMotDetSmoothChroma[2] */
        {2, 1, /*0 - 1*/},
        /* nMotDetLimitLuma[2] */
        {0, 256, /*0 - 1*/},
        /* nMotDetLimitChrom[2] */
        {0, 256, /*0 - 1*/},
        /* nMotDetBlendRatio[2] */
        {256, 256, /*0 - 1*/},
        /* nStasUpdateLut[2][16] */
        {
            {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
            {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
        },
        /* nTfRatioLut[16] */
        {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 16, /*0 - 15*/},
        /* nTfRatLimitLuma[2][2] */
        {
            {200, 255, /*0 - 1*/},
            {40, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {200, 255, /*0 - 1*/},
            {32, 255, /*0 - 1*/},
        },
        /* nSf0EdgeStre */
        64,
        /* nSf0DirStre */
        64,
        /* nSf0DetailStre */
        128,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
            {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {1, 0, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {32, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {128, 0, 128, /*0 - 2*/},
            {96, 0, 160, /*0 - 2*/},
        },
        /* nSf0ChromaAttenStre[2] */
        {12, 5, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nSf0ChromaProtLut[2][9] */
        {
            {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
        },
        /* nSf1LumaMedEn */
        0,
        /* nSf1LumaGauStre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaGauRatio[2] */
        {48, 56, /*0 - 1*/},
        /* nSf1LumaKernelSize */
        1,
        /* nSf1LumaNoiseLut[2][9] */
        {
            {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
            {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {12, 10, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {128, 128, /*0 - 1*/},
        /* nSf1ChromaCoring */
        0,
        /* nSf1ChromaBlendRatio */
        256,
        /* nSf2LumaGauStre[2] */
        {256, 256, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        0,
        /* nSf2NoiseLut[2][9] */
        {
            {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
            {493, 476, 283, 63, 48, 32, 24, 16, 12, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {128, 0, 128, /*0 - 2*/},
            {64, 0, 192, /*0 - 2*/},
        },
        /* nExtMaskStrenLuma */
        128,
        /* nExtMaskStrenChrom */
        128,
        /* nExtMaskStrenStatus */
        128,
        /* nExtMaskRatioLuma[2] */
        {40, 128, /*0 - 1*/},
        /* nExtMaskRatioChrom[2] */
        {40, 128, /*0 - 1*/},
        /* nExtMaskRatioStatus[2] */
        {40, 128, /*0 - 1*/},
        /* nY3dnrPos */
        0,
        /* nStaRefineErode */
        0,
        /* nSfGuideMapLuma[2] */
        {128, 256, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {256, 0, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {28, 28, 24, 24, 16, 16, 12, 12, 10, 10, 8, 8, 6, 6, 4, 4, 2, /*0 - 16*/},
                {48, 48, 48, 40, 32, 32, 32, 32, 32, 20, 20, 20, 16, 16, 16, 16, 16, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {28, 28, 24, 24, 16, 16, 12, 12, 10, 10, 8, 8, 6, 6, 4, 4, 2, /*0 - 16*/},
                {48, 48, 48, 40, 32, 32, 32, 32, 32, 20, 20, 20, 16, 16, 16, 16, 16, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {48, 44, 44, 42, 42, 40, 40, 36, 36, 32, 32, 32, 20, 20, 16, 12, 12, /*0 - 16*/},
                {48, 48, 48, 40, 32, 32, 32, 32, 32, 20, 20, 20, 16, 16, 16, 16, 16, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {48, 44, 44, 42, 42, 40, 40, 36, 36, 32, 32, 32, 20, 20, 16, 12, 12, /*0 - 16*/},
                {64, 64, 64, 72, 76, 76, 76, 64, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {48, 44, 44, 42, 42, 40, 40, 36, 36, 32, 32, 32, 20, 20, 16, 12, 12, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {48, 44, 44, 42, 42, 40, 40, 36, 36, 32, 32, 32, 20, 20, 16, 12, 12, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {60, 60, 53, 53, 51, 50, 48, 48, 48, 44, 39, 39, 38, 34, 30, 30, 28, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 7 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 8 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 9 */
            {
                {132, 132, 132, 132, 132, 132, 128, 110, 100, 95, 90, 85, 80, 75, 70, 64, 64, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 10 */
            {
                {132, 132, 132, 132, 132, 132, 128, 110, 100, 95, 90, 85, 80, 75, 70, 64, 64, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 11 */
            {
                {132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, 132, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
        },
        /* nMotDetStrenLuma[12][2] */
        {
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {230, 0, /*0 - 1*/},
            {230, 0, /*0 - 1*/},
        },
        /* nMotDetSmoothLuma[12][2] */
        {
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
        },
        /* nMotDetSmoothChroma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
        },
        /* nMotDetLimitLuma[12][2] */
        {
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
        /* nMotDetLimitChrom[12][2] */
        {
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
        /* nMotDetBlendRatio[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nStasUpdateLut[12][2][16] */
        {
            /* nStasUpdateLut 0 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 1 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 2 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 3 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 4 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 5 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 6 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 7 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 8 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 9 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 10 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 11 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
        },
        /* nTfRatioLut[12][16] */
        {
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 158, 158, 158, 88, 88, 88, 32, 32, 32, 20, 20, 16, 16, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 16, /*0 - 15*/},
            {200, 200, 200, 191, 170, 144, 128, 128, 100, 100, 88, 88, 40, 40, 20, 20, /*0 - 15*/},
            {200, 200, 200, 191, 170, 144, 118, 91, 75, 62, 40, 32, 24, 20, 16, 16, /*0 - 15*/},
            {200, 200, 200, 191, 170, 144, 118, 91, 75, 62, 50, 40, 28, 23, 20, 16, /*0 - 15*/},
            {200, 200, 200, 191, 170, 144, 118, 91, 75, 62, 50, 40, 28, 23, 20, 16, /*0 - 15*/},
            {224, 224, 224, 224, 160, 160, 160, 90, 90, 90, 80, 80, 60, 40, 20, 20, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 16, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 16, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 16, /*0 - 15*/},
        },
        /* nTfRatLimitLuma[12][2][2] */
        {
            /* nTfRatLimitLuma 0 */
            {
                {128, 255, /*0 - 1*/},
                {128, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 1 */
            {
                {128, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 2 */
            {
                {64, 255, /*0 - 1*/},
                {38, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 3 */
            {
                {64, 255, /*0 - 1*/},
                {38, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 4 */
            {
                {64, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 5 */
            {
                {64, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 6 */
            {
                {64, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 7 */
            {
                {64, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 8 */
            {
                {200, 255, /*0 - 1*/},
                {40, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 9 */
            {
                {200, 255, /*0 - 1*/},
                {40, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 10 */
            {
                {200, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 11 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
        },
        /* nTfRatLimitChroma[12][2][2] */
        {
            /* nTfRatLimitChroma 0 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 1 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 2 */
            {
                {32, 255, /*0 - 1*/},
                {24, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 3 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 4 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 5 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 6 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 7 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 8 */
            {
                {200, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 9 */
            {
                {200, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 10 */
            {
                {200, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 11 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
        },
        /* nSf0EdgeStre[12] */
        {128, 128, 32, 32, 32, 32, 32, 32, 32, 64, 64, 64, /*0 - 11*/},
        /* nSf0DirStre[12] */
        {128, 128, 32, 32, 32, 32, 32, 32, 32, 64, 64, 64, /*0 - 11*/},
        /* nSf0DetailStre[12] */
        {128, 128, 64, 64, 64, 64, 64, 64, 64, 128, 128, 128, /*0 - 11*/},
        /* nSf0LumaNoiseLut[12][4][9] */
        {
            /* nSf0LumaNoiseLut 0 */
            {
                {111, 69, 42, 24, 22, 21, 18, 18, 18, /*0 - 8*/},
                {64, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {111, 69, 42, 24, 22, 21, 18, 18, 18, /*0 - 8*/},
                {64, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {111, 69, 42, 24, 22, 21, 18, 18, 18, /*0 - 8*/},
                {64, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {111, 69, 42, 24, 22, 21, 18, 18, 18, /*0 - 8*/},
                {64, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {4, 4, 4, 4, 4, 4, 3, 2, 0, /*0 - 8*/},
                {32, 24, 20, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {4, 4, 4, 4, 4, 2, 2, 0, 0, /*0 - 8*/},
                {4, 2, 1, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {16, 16, 16, 16, 16, 14, 12, 10, 6, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 16, 14, 12, 10, 5, /*0 - 8*/},
                {4, 2, 1, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {24, 24, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 32, 16, 8, 4, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 16, 14, 12, 10, 5, /*0 - 8*/},
                {64, 40, 10, 8, 5, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {24, 24, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 16, 14, 12, 10, 5, /*0 - 8*/},
                {61, 38, 10, 8, 5, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {24, 24, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 45, 15, 11, 6, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 16, 14, 12, 10, 5, /*0 - 8*/},
                {64, 40, 10, 8, 5, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 9 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 10 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 11 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {256, 128, 64, 14, 16, 8, 0, 0, 0, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
        },
        /* nSf0LumaKernelSize[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
        },
        /* nSf0LumaGauStre[12][2] */
        {
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {32, 0, /*0 - 1*/},
            {32, 64, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
        },
        /* nSf0lumaBlendRatio[12][2][3] */
        {
            /* nSf0lumaBlendRatio 0 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 1 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 2 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 3 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 4 */
            {
                {0, 0, 256, /*0 - 2*/},
                {56, 0, 200, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 9 */
            {
                {128, 0, 128, /*0 - 2*/},
                {96, 0, 160, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 10 */
            {
                {128, 0, 128, /*0 - 2*/},
                {96, 32, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 11 */
            {
                {128, 0, 128, /*0 - 2*/},
                {96, 32, 128, /*0 - 2*/},
            },
        },
        /* nSf0ChromaAttenStre[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {8, 2, /*0 - 1*/},
            {9, 2, /*0 - 1*/},
            {10, 3, /*0 - 1*/},
            {11, 3, /*0 - 1*/},
            {12, 4, /*0 - 1*/},
            {12, 4, /*0 - 1*/},
            {12, 5, /*0 - 1*/},
            {12, 5, /*0 - 1*/},
            {12, 6, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {255, 235, /*0 - 1*/},
            {255, 235, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {128, 180, /*0 - 1*/},
        },
        /* nSf0ChromaProtLut[12][2][9] */
        {
            /* nSf0ChromaProtLut 0 */
            {
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 1 */
            {
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 2 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 9 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 10 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 11 */
            {
                {64, 64, 60, 52, 48, 40, 36, 24, 12, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf1LumaGauStre[12][2] */
        {
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {32, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nSf1LumaGauRatio[12][2] */
        {
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {36, 56, /*0 - 1*/},
            {64, 56, /*0 - 1*/},
            {36, 56, /*0 - 1*/},
            {48, 56, /*0 - 1*/},
            {48, 56, /*0 - 1*/},
            {48, 56, /*0 - 1*/},
            {48, 56, /*0 - 1*/},
            {48, 56, /*0 - 1*/},
        },
        /* nSf1LumaKernelSize[12] */
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, /*0 - 11*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {256, 192, 128, 64, 32, 32, 32, 32, 32, /*0 - 8*/},
                {128, 64, 64, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {256, 192, 128, 64, 32, 32, 32, 32, 32, /*0 - 8*/},
                {128, 64, 64, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {16, 12, 10, 8, 4, 2, 0, 0, 0, /*0 - 8*/},
                {48, 32, 10, 8, 4, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 3 */
            {
                {256, 192, 128, 64, 32, 32, 32, 32, 32, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 4 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 5 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 6 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 9 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 10 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 11 */
            {
                {48, 32, 24, 16, 8, 4, 2, 1, 1, /*0 - 8*/},
                {100, 64, 32, 4, 2, 0, 0, 0, 0, /*0 - 8*/},
            },
        },
        /* nSf1LumaIdrThre[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nSf1LumaIdrGain[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nSf1LumaClipLevel[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nSf1LumaCoring[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {10, 0, /*0 - 1*/},
            {10, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {10, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {12, 10, /*0 - 1*/},
            {12, 10, /*0 - 1*/},
            {12, 10, /*0 - 1*/},
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {32, 164, /*0 - 1*/},
            {32, 164, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 240, /*0 - 1*/},
            {256, 194, /*0 - 1*/},
            {256, 200, /*0 - 1*/},
            {256, 192, /*0 - 1*/},
            {128, 168, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {141, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf1ChromaBlendRatio[12] */
        {168, 168, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 11*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {32, 64, /*0 - 1*/},
            {32, 64, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nSf2LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf2KernelSize[12] */
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {71, 71, 71, 42, 42, 42, 42, 42, 42, /*0 - 8*/},
                {64, 64, 48, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {71, 71, 71, 42, 42, 42, 42, 42, 42, /*0 - 8*/},
                {64, 64, 48, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {128, 80, 32, 12, 10, 8, 6, 4, 2, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {180, 111, 63, 16, 1, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {180, 111, 63, 16, 1, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {180, 111, 63, 16, 1, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {180, 111, 63, 16, 1, 0, 0, 0, 0, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {241, 170, 111, 57, 42, 28, 21, 14, 10, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {128, 88, 64, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {493, 476, 283, 63, 48, 32, 24, 16, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 9 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {493, 476, 283, 63, 48, 32, 24, 16, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 10 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {493, 476, 283, 63, 48, 32, 24, 16, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 11 */
            {
                {40, 40, 36, 32, 30, 28, 24, 21, 21, /*0 - 8*/},
                {493, 476, 283, 63, 48, 32, 24, 16, 12, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {128, 0, 128, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {128, 0, 128, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 2 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 3 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 4 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 5 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {0, 0, 256, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 9 */
            {
                {128, 0, 128, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 10 */
            {
                {128, 0, 128, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 11 */
            {
                {128, 0, 128, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
        },
        /* nExtMaskStrenLuma[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nExtMaskStrenChrom[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nExtMaskStrenStatus[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nExtMaskRatioLuma[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {30, 128, /*0 - 1*/},
            {40, 128, /*0 - 1*/},
            {200, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {40, 128, /*0 - 1*/},
            {96, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nExtMaskRatioChrom[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {30, 128, /*0 - 1*/},
            {40, 128, /*0 - 1*/},
            {200, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {40, 128, /*0 - 1*/},
            {96, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nExtMaskRatioStatus[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {30, 128, /*0 - 1*/},
            {40, 128, /*0 - 1*/},
            {200, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {40, 128, /*0 - 1*/},
            {90, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nY3dnrPos[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nStaRefineErode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSfGuideMapLuma[12][2] */
        {
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
        },
        /* nSfGuideMapChroma[12][2] */
        {
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
        },
    },
};

const static AX_ISP_IQ_SHARPEN_PARAM_T sharpen_param_sdr = {
    /* nShpEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tMaskControl */
    {
        /* nMotionMaskEn */
        1,
        /* nShpClnpNpuMaskEn */
        0,
        /* nShpLumaMaskLut[17] */
        {0, 0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 255, 255, 255, /*0 - 16*/},
    },
    /* tFineGrainNoise */
    {
        /* nGrainNoiseEn */
        0,
        /* nGnMotionMskEn */
        0,
        /* nGnMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nGnLumaMskEn */
        0,
        /* nGnLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nGnTextureMskEn */
        0,
        /* nGnTextureLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nGnClnpMskEn[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nGnClnpLut[4][5] */
        {
            {127, 127, 127, 127, 127, /*0 - 4*/},
            {-128, -128, -128, -128, -128, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
    },
    /* tOsStaticMotion */
    {
        /* nOsStaticLimit[2] */
        {64, 64, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {6, 5, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {4, 4, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {1, 1, /*0 - 1*/},
    },
    /* tCommonLutCore */
    {
        /* nCommonLutEnable */
        0,
        /* nCommonMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nCommonLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nCommonTextureStaticLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nCommonTexturemotionLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nCommonClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
    },
    /* tColorTarget */
    {
        /* nColorEnable[8] */
        {1, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {464, -96, -76, /*0 - 2*/},
            {464, -255, -255, /*0 - 2*/},
            {464, -255, -255, /*0 - 2*/},
            {464, -255, -255, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorRange[8][3] */
        {
            {511, 32, 32, /*0 - 2*/},
            {511, 256, 256, /*0 - 2*/},
            {511, 256, 256, /*0 - 2*/},
            {511, 256, 256, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSmooth[8][3] */
        {
            {5, 4, 4, /*0 - 2*/},
            {1, 1, 1, /*0 - 2*/},
            {1, 1, 1, /*0 - 2*/},
            {1, 1, 1, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorIoFlag[8] */
        {0, 0, 1, 1, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskIndex[8] */
        {0, 0, 1, 1, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskLimit[8] */
        {128, 128, 128, 128, 0, 0, 0, 0, /*0 - 7*/},
    },
    /* tHighFreqControl */
    {
        /* nHighFreqEnable */
        1,
        /* nHighFreqMotionMskEn */
        1,
        /* nHighFreqMotionLutLevel */
        0,
        /* nHighFreqLumaMskEn */
        1,
        /* nHighFreqLumaLutLevel */
        0,
        /* nHighFreqTextureMskEn */
        1,
        /* nHighFreqTextureLutLevel */
        0,
        /* nHighFreqTextureCoring */
        64,
        /* nHighFreqTextureLutMotionLevel */
        0,
        /* nHighFreqClnpMskEn[4] */
        {1, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, 0, 0, 0, -14, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {-18, -7, 5, 15, 20, 23, 26, 28, 29, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-59, -46, -36, -26, -19, -14, -13, -14, -14, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {16, 16, /*0 - 1*/},
        /* nHighFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
    },
    /* tMedFreqControl */
    {
        /* nMedFreqEnable */
        1,
        /* nMedFreqMotionMskEn */
        1,
        /* nMedFreqMotionLutLevel */
        0,
        /* nMedFreqLumaMskEn */
        1,
        /* nMedFreqLumaLutLevel */
        0,
        /* nMedFreqTextureMskEn */
        1,
        /* nMedFreqTextureLutLevel */
        0,
        /* nMedFreqTextureCoring */
        64,
        /* nMedFreqTextureLutMotionLevel */
        0,
        /* nMedFreqClnpMskEn[4] */
        {1, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, 0, 0, 0, -32, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {-7, 2, 14, 22, 25, 25, 27, 27, 23, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-57, -37, -15, 0, 10, 11, 12, 13, 14, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {16, 16, /*0 - 1*/},
        /* nMedFreqOsGain[2] */
        {4, 2, /*0 - 1*/},
    },
    /* tDirFreqControl */
    {
        /* nDirFreqEnable */
        1,
        /* nDirFreqMotionMskEn */
        1,
        /* nDirFreqMotionLutLevel */
        0,
        /* nDirFreqLumaMskEn */
        1,
        /* nDirFreqLumaLutLevel */
        0,
        /* nDirFreqTextureMskEn */
        1,
        /* nDirFreqTextureLutLevel */
        0,
        /* nDirFreqTextureLutMotionLevel */
        0,
        /* nDirFreqClnpMskEn[4] */
        {1, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqMotionLut[5] */
        {0, 0, 0, 0, -24, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {-24, -4, 14, 33, 42, 46, 49, 53, 53, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-38, -32, -29, -26, -25, -21, -18, -16, -15, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 22, 22, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {16, 16, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {4, 4, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {148, 188, 220, 238, 255, 255, 255, 255, 255, /*0 - 8*/},
    },
    /* tLowFreqControl */
    {
        /* nLowFreqEnable */
        1,
        /* nLowFreqMotionMskEn */
        1,
        /* nLowFreqMotionLutLevel */
        0,
        /* nLowFreqLumaMskEn */
        1,
        /* nLowFreqLumaLutLevel */
        0,
        /* nLowFreqTextureMskEn */
        1,
        /* nLowFreqTextureLutLevel */
        0,
        /* nLowFreqTextureCoring */
        64,
        /* nLowFreqTextureLutMotionLevel */
        0,
        /* nLowFreqClnpMskEn[4] */
        {1, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 0, -16, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {-15, -7, 0, 5, 7, 7, 7, 5, 2, /*0 - 8*/},
        /* nLowFreqTextureLutMotion[9] */
        {-51, -35, -23, -15, -5, 0, 2, 4, 5, /*0 - 8*/},
        /* nLowFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {16, 16, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {4, 2, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {30, 25, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        0,
        /* nHighFreqCorSlope */
        0,
        /* nHighFreqCorOffset */
        8,
        /* nHighFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {20, 20, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        0,
        /* nMedFreqCorSlope */
        0,
        /* nMedFreqCorOffset */
        0,
        /* nMedFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {60, 60, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        0,
        /* nDirFreqCorSlope */
        0,
        /* nDirFreqCorOffset */
        8,
        /* nDirFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {-15, -15, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 64, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        0,
        /* nLowFreqCorSlope */
        0,
        /* nLowFreqCorOffset */
        8,
        /* nLowFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {8, 20, 50, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {14, 30, 50, /*0 - 2*/},
        /* nShpHpfScale[3] */
        {128, 128, 128, /*0 - 2*/},
        /* nShpGain[2] */
        {20, 18, /*0 - 1*/},
        /* nShpLimit[2] */
        {-2048, 2048, /*0 - 1*/},
        /* nGrainLogGain */
        0,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nHighFreqLogGain[12][2] */
        {
            {32, 32, /*0 - 1*/},
            {30, 30, /*0 - 1*/},
            {60, 60, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {50, 50, /*0 - 1*/},
            {40, 40, /*0 - 1*/},
            {30, 25, /*0 - 1*/},
            {30, 25, /*0 - 1*/},
            {54, 54, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nHighFreqCorBaseGain[12] */
        {0, 0, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nHighFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, /*0 - 11*/},
        /* nHighFreqCorOffset[12] */
        {0, 0, 10, 10, 10, 0, 0, 0, 0, 8, 8, 8, /*0 - 11*/},
        /* nHighFreqLimit[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nMedFreqLogGain[12][2] */
        {
            {20, 20, /*0 - 1*/},
            {19, 19, /*0 - 1*/},
            {70, 70, /*0 - 1*/},
            {68, 68, /*0 - 1*/},
            {68, 68, /*0 - 1*/},
            {60, 60, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {50, 50, /*0 - 1*/},
            {40, 40, /*0 - 1*/},
            {20, 20, /*0 - 1*/},
            {10, 10, /*0 - 1*/},
            {36, 36, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
            {0, 4, /*0 - 1*/},
            {0, 4, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nMedFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nMedFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, /*0 - 11*/},
        /* nMedFreqCorOffset[12] */
        {0, 0, 10, 8, 6, 0, 0, 0, 0, 0, 8, 8, /*0 - 11*/},
        /* nMedFreqLimit[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {640, 640, /*0 - 1*/},
        },
        /* nDirFreqLogGain[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {60, 60, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {75, 75, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {60, 60, /*0 - 1*/},
            {50, 50, /*0 - 1*/},
            {62, 62, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {0, 0, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDirFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, /*0 - 11*/},
        /* nDirFreqCorOffset[12] */
        {0, 0, 8, 8, 8, 0, 0, 0, 0, 8, 8, 8, /*0 - 11*/},
        /* nDirFreqLimit[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nLowFreqLogGain[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {-5, -5, /*0 - 1*/},
            {8, 8, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {5, 5, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {-5, -5, /*0 - 1*/},
            {-15, -15, /*0 - 1*/},
            {-25, -25, /*0 - 1*/},
            {8, 8, /*0 - 1*/},
        },
        /* nLowFreqGainLimit[12][2] */
        {
            {0, 4, /*0 - 1*/},
            {0, 2, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
        },
        /* nLowFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, /*0 - 11*/},
        /* nLowFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, /*0 - 11*/},
        /* nLowFreqCorOffset[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 8, /*0 - 11*/},
        /* nLowFreqLimit[12][2] */
        {
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nShpHpfBsigma[12][3] */
        {
            {12, 14, 16, /*0 - 2*/},
            {12, 14, 16, /*0 - 2*/},
            {8, 14, 18, /*0 - 2*/},
            {8, 14, 18, /*0 - 2*/},
            {8, 14, 18, /*0 - 2*/},
            {8, 14, 18, /*0 - 2*/},
            {8, 14, 18, /*0 - 2*/},
            {8, 16, 20, /*0 - 2*/},
            {8, 18, 28, /*0 - 2*/},
            {8, 20, 50, /*0 - 2*/},
            {8, 30, 50, /*0 - 2*/},
            {8, 20, 50, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {24, 32, 40, /*0 - 2*/},
            {24, 32, 40, /*0 - 2*/},
            {12, 20, 26, /*0 - 2*/},
            {12, 20, 26, /*0 - 2*/},
            {12, 20, 26, /*0 - 2*/},
            {14, 22, 28, /*0 - 2*/},
            {14, 22, 28, /*0 - 2*/},
            {14, 24, 30, /*0 - 2*/},
            {14, 26, 38, /*0 - 2*/},
            {14, 30, 50, /*0 - 2*/},
            {14, 40, 60, /*0 - 2*/},
            {14, 30, 50, /*0 - 2*/},
        },
        /* nShpHpfScale[12][3] */
        {
            {128, 96, 64, /*0 - 2*/},
            {128, 96, 64, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
        },
        /* nShpGain[12][2] */
        {
            {48, 32, /*0 - 1*/},
            {46, 30, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {20, 16, /*0 - 1*/},
            {20, 16, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {20, 18, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
        },
        /* nShpLimit[12][2] */
        {
            {-3072, 3072, /*0 - 1*/},
            {-3072, 3072, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
        },
        /* nGrainLogGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
    },
};

const static AX_ISP_IQ_CCMP_PARAM_T ccmp_param_sdr = {
    /* nChromaCompEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tManualParam */
    {
        /* nChromaCompY[29] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
        /* nChromaCompSat[23] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4100, 8200, 16400, 32799, 65533, 131066, 262133, 524267, 1048535, 2072515, /*0 - 11*/},
        /* nChromaCompY[12][29] */
        {
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
        },
        /* nChromaCompSat[12][23] */
        {
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 497, 479, 453, 427, 406, 388, 371, 360, 360, 360, 360, 360, 360, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 510, 494, 443, 392, 368, 359, 360, 360, 360, 360, 360, 360, 360, 360, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 502, 469, 419, 400, 395, 395, 390, 390, 385, 385, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 511, 510, 510, 510, 500, 488, 473, 452, 425, 398, 380, 380, 375, 375, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 508, 455, 403, 372, 372, 366, 363, 363, 363, 359, 359, 356, 356, /*0 - 22*/},
        },
    },
};

const static AX_ISP_IQ_SCM_PARAM_T scm_param_sdr = {
    /* nScmEn */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* nScmIoFlag */
    0,
    /* tManualParam */
    {
        /* nScmColor[2] */
        {0, 0, /*0 - 1*/},
        /* nScmCenterY */
        0,
        /* nScmCenterUv[2] */
        {0, 0, /*0 - 1*/},
        /* nScmRadius[3] */
        {0, 0, 0, /*0 - 2*/},
        /* nScmSmooth[3] */
        {0, 0, 0, /*0 - 2*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        /* nScmColor[16][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nScmCenterY[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        /* nScmCenterUv[16][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nScmRadius[16][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nScmSmooth[16][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
    },
};

const static AX_ISP_IQ_YCPROC_PARAM_T ycproc_param_sdr = {
    /* nYCprocEn */
    1,
    /* nBrightness */
    256,
    /* nContrast */
    256,
    /* nSaturation */
    4096,
    /* nHue */
    0,
};

const static AX_ISP_IQ_YCRT_PARAM_T ycrt_param_sdr = {
    /* nYcrtEn */
    1,
    /* nSignalRangeMode */
    0,
    /* nYrtInputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nYrtOutputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nCrtInputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nCrtOutputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nClipLevelY[2] */
    {0, 1023, /*0 - 1*/},
    /* nClipLevelUV[2] */
    {-512, 511, /*0 - 1*/},
};

const static AX_ISP_IQ_CLP_PARAM_T clp_param_sdr = {
    /* nClpEn */
    0,
    /* nColorPaletteId */
    0,
    /* nColorPaletteYuvLut[3][256] */
    {
        {
            0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,  /* 0 - 31*/
            32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,  /* 32 - 63*/
            64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,  /* 64 - 95*/
            96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,  /* 96 - 127*/
            128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,  /* 128 - 159*/
            160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,  /* 160 - 191*/
            192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,  /* 192 - 223*/
            224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,  /* 224 - 255*/
        },
        {
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 0 - 31*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 32 - 63*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 64 - 95*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 96 - 127*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 128 - 159*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 160 - 191*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 192 - 223*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 224 - 255*/
        },
        {
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 0 - 31*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 32 - 63*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 64 - 95*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 96 - 127*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 128 - 159*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 160 - 191*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 192 - 223*/
            128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128,  /* 224 - 255*/
        },
    },
};

const static AX_ISP_IQ_LDC_PARAM_T ldc_param_sdr = {
    /* nLdcEnable */
    0,
    /* nType */
    0,
    /* tLdcV1Param */
    {
        /* bAspect */
        /* 0:AX_FALSE, 1:AX_TRUE */
        AX_FALSE,
        /* nXRatio */
        0,
        /* nYRatio */
        0,
        /* nXYRatio */
        0,
        /* nCenterXOffset */
        0,
        /* nCenterYOffset */
        0,
        /* nDistortionRatio */
        0,
        /* nSpreadCoef */
        0,
    },
    /* tLdcV2Param */
    {
        /* nMatrix[3][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 1, /*0 - 2*/},
        },
        /* nDistortionCoeff[8] */
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
    },
};

const static AX_ISP_IQ_DIS_PARAM_T dis_param_sdr = {
    /* bDisEnable */
    0,
    /* nDisType */
    0,
    /* tDisV1Param */
    {
        /* bSWCalcEnable */
        0,
        /* nDelayFrameNum */
        0,
        /* nHistoryFrameNum */
        2,
        /* nCropRatio */
        205,
        /* nFramePosWeights[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
        /* nSadThreshold */
        0xFFFFFF,
    },
};

const static AX_ISP_IQ_ME_PARAM_T me_param_sdr = {
    /* nEnable */
    1,
    /* nLutEnable */
    1,
    /* nLut[33] */
    {
        0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 96, 104, 112, 120, 128, 136, 144, 152, 160, 168, 176, 184, 192, 200, 208, 216, 224, 232, 240, 248,  /* 0 - 31*/
        256, /*32 - 32*/
    },
    /* nProjShiftBit[2] */
    {2, 2, /*0 - 1*/},
    /* nScaleRatio */
    0,
    /* tGridRoiH */
    {
        /* nRoiOffsetH */
        16,
        /* nRoiOffsetV */
        0,
        /* nRoiRegionNumH */
        4,
        /* nRoiRegionNumV */
        4,
        /* nRoiRegionSizeH */
        952,
        /* nRoiRegionSizeV */
        540,
        /* nSearchRange */
        32,
    },
    /* tGridRoiV */
    {
        /* nRoiOffsetH */
        0,
        /* nRoiOffsetV */
        16,
        /* nRoiRegionNumH */
        5,
        /* nRoiRegionNumV */
        4,
        /* nRoiRegionSizeH */
        768,
        /* nRoiRegionSizeV */
        532,
        /* nSearchRange */
        32,
    },
};

const static AX_ISP_IQ_NUC_PARAM_T nuc_param_sdr = {
    /* nNucEnable */
    0,
    /* nModuleMode */
    0,
    /* tManualParam */
    {
        /* tSensorNucCalib */
        {
            /* nNuc1stFrame */
            1,
            /* nStepEnhEn */
            0,
            /* nEffectiveBits */
            7,
            /* nNucAdjustTrend */
            0,
            /* nNucFineBitMask */
            15,
            /* nNucCoarseBitMask */
            240,
            /* nNucInitFine */
            0,
            /* nNucInitCoarse */
            0,
            /* nNucFineStep */
            17,
            /* nNucCoarseStep */
            17,
            /* nNucMaxFVal */
            17,
            /* nNucMaxCVal */
            17,
            /* nNucMinFVal */
            0,
            /* nNucMinCVal */
            0,
            /* nNucAdFineHigh */
            65535,
            /* nNucAdCoarseHigh */
            65535,
            /* nNucAdFineLow */
            65535,
            /* nNucAdCoarseLow */
            65535,
            /* nNucFineCnt */
            1,
            /* nNucCoarseCnt */
            1,
        },
        /* tTwoPointsCalib */
        {
            /* nNucFpnEn */
            0,
            /* nNucBaseGain */
            256,
            /* nNucFpnGain */
            256,
        },
    },
};

#endif
