#ifndef __OV04A10_HDR_2X_H__
#define __OV04A10_HDR_2X_H__

/********************************************************************
* Store the default parameters of the hdr 2x mode
* warn: user need to add 'static' when defining global variables.
        Limit the scope of the variable to this sensor
*********************************************************************/

#include "ax_isp_iq_api.h"
#include "ax_isp_api.h"


const static AX_ISP_VERSION_T ax_isp_version_param_hdr_2x = {

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

const static AX_ISP_IQ_SCENE_PARAM_T scene_param_hdr_2x = {
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
        /* nRefValStart[2] */
        {1024,16384, /*0 - 2*/},
        /* nRefValEnd[2] */
        {16384,4193280, /*0 - 2*/},
        /* eAiWorkMode[2] */
        {0, 1, /*0 - 2*/},
    },
};

const static AX_ISP_IQ_AE_PARAM_T ae_param_hdr_2x = {
    /* nEnable */
    1,
    /* tExpManual */
    {
        /* nIspGain */
        1024,
        /* nAGain */
        1024,
        /* nDgain */
        1024,
        /* nHcgLcg */
        1,
        /* nSnsTotalAGain */
        1024,
        /* nSysTotalGain */
        1024,
        /* nShutter */
        9999,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        512,
        /* nHdrRealRatioLtoS */
        15652,
        /* nHdrRealRatioStoVS */
        1024,
        /* nSetPoint */
        25599,
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
        16384,
        /* nHdrMaxShutterHwLimit */
        31175,
        /* nRealMaxShutter */
        31175,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        87997,
        /* nFaceTarget */
        35840,
        /* nVehicleTarget */
        35840,
        /* nTolerance */
        10485760,
        /* nAgainLcg2HcgTh */
        4352,
        /* nAgainHcg2LcgTh */
        1228,
        /* nAgainLcg2HcgRatio */
        4352,
        /* nAgainHcg2LcgRatio */
        4352,
        /* nLuxk */
        67933,
        /* nCompensationMode */
        2,
        /* nMaxIspGain */
        16384,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        1024,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        69633,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        225280,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        37957,
        /* nMinShutter */
        1600,
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
            {139, 175, 215, 255, 293, 327, 354, 371, 377, 371, 354, 327, 293, 255, 215, 175, 139, /*0 - 16*/},
            {181, 228, 280, 332, 383, 427, 461, 484, 491, 484, 461, 427, 383, 332, 280, 228, 181, /*0 - 16*/},
            {226, 286, 350, 416, 479, 534, 578, 605, 615, 605, 578, 534, 479, 416, 350, 286, 226, /*0 - 16*/},
            {272, 344, 421, 500, 575, 642, 694, 727, 739, 727, 694, 642, 575, 500, 421, 344, 272, /*0 - 16*/},
            {313, 396, 486, 577, 664, 740, 801, 839, 852, 839, 801, 740, 664, 577, 486, 396, 313, /*0 - 16*/},
            {347, 439, 538, 639, 735, 820, 887, 929, 944, 929, 887, 820, 735, 639, 538, 439, 347, /*0 - 16*/},
            {369, 467, 572, 679, 781, 872, 943, 988, 1003, 988, 943, 872, 781, 679, 572, 467, 369, /*0 - 16*/},
            {377, 476, 583, 693, 797, 890, 962, 1008, 1024, 1008, 962, 890, 797, 693, 583, 476, 377, /*0 - 16*/},
            {369, 467, 572, 679, 781, 872, 943, 988, 1003, 988, 943, 872, 781, 679, 572, 467, 369, /*0 - 16*/},
            {347, 439, 538, 639, 735, 820, 887, 929, 944, 929, 887, 820, 735, 639, 538, 439, 347, /*0 - 16*/},
            {313, 396, 486, 577, 664, 740, 801, 839, 852, 839, 801, 740, 664, 577, 486, 396, 313, /*0 - 16*/},
            {272, 344, 421, 500, 575, 642, 694, 727, 739, 727, 694, 642, 575, 500, 421, 344, 272, /*0 - 16*/},
            {226, 286, 350, 416, 479, 534, 578, 605, 615, 605, 578, 534, 479, 416, 350, 286, 226, /*0 - 16*/},
            {181, 228, 280, 332, 383, 427, 461, 484, 491, 484, 461, 427, 383, 332, 280, 228, 181, /*0 - 16*/},
            {139, 175, 215, 255, 293, 327, 354, 371, 377, 371, 354, 327, 293, 255, 215, 175, 139, /*0 - 16*/},
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
                {409600, 512000, /*0 - 1*/},
                /* nAntiFlickerToleranceList[12] */
                {200, 10, /*0 - 1*/},
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
                2,
                /* nRefList[12] */
                {409600, 1024000, /*0 - 1*/},
                /* nFlickerValidThList[12] */
                {102, 3072, /*0 - 1*/},
                /* nFlickerTrigTimeList[12] */
                {50, 50, /*0 - 1*/},
            },
            /* nSkipTh */
            2,
            /* nUpSlopeTh */
            6,
            /* nDownSlopeTh */
            -6,
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
                            37950,
                            /* nGain */
                            225280,
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
                            39500,
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
                            39500,
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
                            39500,
                            /* nGain */
                            225280,
                            /* nAperture */
                            0,
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
                /* 5 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 6 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 7 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 8 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 9 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 10 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 11 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 12 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 13 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 14 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
                /* 15 */
                {
                    /* nIntergrationTime */
                    0,
                    /* nTotalAGain */
                    0,
                    /* nDGain */
                    0,
                    /* nIspGain */
                    0,
                },
            },
        },
        /* tAeSetPointCurve */
        {
            /* nSize */
            10,
            /* nRefList[10] */
            {205, 1024, 51200, 102400, 204800, 307200, 409600, 614400, 1024000, 5120000, /*0 - 9*/},
            /* nSetPointList[10] */
            {30720, 40960, 51200, 71680, 81920, 88064, 81920, 81920, 87040, 90112, /*0 - 9*/},
        },
        /* tFaceUIParam */
        {
            /* nEnable */
            0,
            /* tFaceTargetCurve */
            {
                /* nSize */
                6,
                /* nRefList[12] */
                {102, 1536, 10240, 51200, 307200, 2048000, /*0 - 5*/},
                /* nFaceTargetList[12] */
                {18432, 18432, 18432, 22528, 25600, 25600, /*0 - 5*/},
            },
            /* nFaceScoreList[8] */
            {0, 205, 410, 614, 819, 1024, 0, 0, /*0 - 7*/},
            /* nFaceScoreWeightList[8] */
            {0, 205, 410, 614, 819, 1024, 0, 0, /*0 - 7*/},
            /* nFaceDistanceList[8] */
            {0, 205, 410, 614, 819, 1024, 0, 0, /*0 - 7*/},
            /* nFaceDistanceWeightList[8] */
            {1024, 922, 768, 563, 307, 0, 0, 0, /*0 - 7*/},
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
                /* nFaceLumaDiff[8] */
                {2048, 5120, 10240, 15360, 20480, /*0 - 4*/},
                /* nFaceWeight[8] */
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
                /* nRefList[12] */
                {102, 1536, 10240, 51200, 307200, 2048000, /*0 - 5*/},
                /* nVehicleTargetList[12] */
                {18432, 18432, 18432, 22528, 25600, 25600, /*0 - 5*/},
            },
            /* nVehicleScoreList[8] */
            {0, 205, 410, 614, 819, 1024, 0, 0, /*0 - 7*/},
            /* nVehicleScoreWeightList[8] */
            {0, 205, 410, 614, 819, 1024, 0, 0, /*0 - 7*/},
            /* nVehicleDistanceList[8] */
            {0, 205, 410, 614, 819, 1024, 0, 0, /*0 - 7*/},
            /* nVehicleDistanceWeightList[8] */
            {1024, 922, 768, 563, 307, 0, 0, 0, /*0 - 7*/},
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
                /* nVehicleLumaDiff[8] */
                {2048, 5120, 10240, 15360, 20480, /*0 - 4*/},
                /* nVehicleWeight[8] */
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
            1,
            /* tRatioStrategyParam */
            {
                /* nShortNonSatAreaPercent */
                103284736,
                /* nTolerance */
                8388608,
                /* nConvergeCntFrameNum */
                3,
                /* nDampRatio */
                922,
                /* tHdrRatioParamCurve */
                {
                    /* nListSize */
                    7,
                    /* nRefList[10] */
                    {102, 10240, 30720, 102400, 204800, 614400, 1024000, /*0 - 6*/},
                    /* nSatLumaList[10] */
                    {153600, 122880, 102400, 81920, 71680, 51200, 30720, /*0 - 6*/},
                    /* nMinRatioList[10] */
                    {1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 6*/},
                    /* nMaxRatioList[10] */
                    {32768, 32768, 32768, 32768, 32768, 32768, 32768, /*0 - 6*/},
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
            16384,
        },
        /* nMultiCamSyncMode */
        0,
        /* nMultiCamSyncRatio */
        1048576,
        /* tSlowShutterParam */
        {
            /* nFrameRateMode */
            0,
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
            {0, 16384, 32768, 49152, 65535, 81920, 98304, 114688, 131072, 147456, 163840, 180224, 196608, 212992, 229376, 245760, /*0 - 15*/},
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
                8,
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
                {31, 51, 51, 51, 82, 82, 82, 82, 102, 102, 123, 123, 154, 154, /*0 - 13*/},
                /* nSlowOverSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowUnderKneeCnt */
                11,
                /* nSlowUnderLumaDiffList[16] */
                {5120, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nSlowUnderStepFactorList[16] */
                {31, 31, 51, 51, 51, 51, 82, 82, 102, 102, 123, /*0 - 10*/},
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
                    102400,
                    /* nLuxEnd */
                    204800,
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
            /* tDynamicRangeDetInfo */
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
        },
    },
    /* nLogLevel */
    4,
    /* nLogTarget */
    2,
};

const static AX_ISP_IQ_AWB_PARAM_T awb_param_hdr_2x = {
    /* nEnable */
    1,
    /* tManualParam */
    {
        /* nManualMode */
        0,
        /* tGain */
        {
            /* nGainR */
            435,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            611,
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
            1523187,
            /* nBg */
            1396608,
        },
        /* nCenterPntRadius */
        1241394,
        /* nLowCut */
        0,
        /* nHighCut */
        0,
        /* nCctMax */
        10500,
        /* nCctMin */
        1800,
        /* nPartCtrlPntNum */
        8,
        /* nCtrlPntNum */
        57,
        /* nCtrlSegKbNum */
        56,
        /* nCctList[512] */
        {
            1800, 1862, 1925, 1987, 2050, 2112, 2175, 2237, 2300, 2369, 2439, 2508, 2578, 2647, 2717, 2786, 2856, 2974, 3092, 3210, 3328, 3446, 3564, 3682, 3800, 3950, 4100, 4250, 4400, 4550, 4700, 4850,  /* 0 - 31*/
            5000, 5187, 5375, 5562, 5750, 5937, 6125, 6312, 6500, 6625, 6750, 6875, 7000, 7125, 7250, 7375, 7500, 7875, 8250, 8625, 9000, 9375, 9750, 10125, 10500, /*32 - 56*/
        },
        /* tChordKB */
        {
            /* nK */
            -1029,
            /* nB */
            1357,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1180697,
                /* nBg */
                203392,
            },
            /* 1 */
            {
                /* nRg */
                1164412,
                /* nBg */
                219761,
            },
            /* 2 */
            {
                /* nRg */
                1148411,
                /* nBg */
                235846,
            },
            /* 3 */
            {
                /* nRg */
                1132682,
                /* nBg */
                251648,
            },
            /* 4 */
            {
                /* nRg */
                1117205,
                /* nBg */
                267209,
            },
            /* 5 */
            {
                /* nRg */
                1101959,
                /* nBg */
                282528,
            },
            /* 6 */
            {
                /* nRg */
                1086943,
                /* nBg */
                297617,
            },
            /* 7 */
            {
                /* nRg */
                1072148,
                /* nBg */
                312497,
            },
            /* 8 */
            {
                /* nRg */
                1057541,
                /* nBg */
                327166,
            },
            /* 9 */
            {
                /* nRg */
                1041530,
                /* nBg */
                343272,
            },
            /* 10 */
            {
                /* nRg */
                1025728,
                /* nBg */
                359148,
            },
            /* 11 */
            {
                /* nRg */
                1010135,
                /* nBg */
                374824,
            },
            /* 12 */
            {
                /* nRg */
                994721,
                /* nBg */
                390311,
            },
            /* 13 */
            {
                /* nRg */
                979496,
                /* nBg */
                405621,
            },
            /* 14 */
            {
                /* nRg */
                964428,
                /* nBg */
                420762,
            },
            /* 15 */
            {
                /* nRg */
                949507,
                /* nBg */
                435757,
            },
            /* 16 */
            {
                /* nRg */
                934722,
                /* nBg */
                450615,
            },
            /* 17 */
            {
                /* nRg */
                923953,
                /* nBg */
                461436,
            },
            /* 18 */
            {
                /* nRg */
                913247,
                /* nBg */
                472195,
            },
            /* 19 */
            {
                /* nRg */
                902604,
                /* nBg */
                482901,
            },
            /* 20 */
            {
                /* nRg */
                892013,
                /* nBg */
                493544,
            },
            /* 21 */
            {
                /* nRg */
                881475,
                /* nBg */
                504134,
            },
            /* 22 */
            {
                /* nRg */
                870979,
                /* nBg */
                514683,
            },
            /* 23 */
            {
                /* nRg */
                860524,
                /* nBg */
                525179,
            },
            /* 24 */
            {
                /* nRg */
                850112,
                /* nBg */
                535644,
            },
            /* 25 */
            {
                /* nRg */
                830283,
                /* nBg */
                555578,
            },
            /* 26 */
            {
                /* nRg */
                810549,
                /* nBg */
                575417,
            },
            /* 27 */
            {
                /* nRg */
                790888,
                /* nBg */
                595172,
            },
            /* 28 */
            {
                /* nRg */
                771280,
                /* nBg */
                614885,
            },
            /* 29 */
            {
                /* nRg */
                751693,
                /* nBg */
                634567,
            },
            /* 30 */
            {
                /* nRg */
                732095,
                /* nBg */
                654259,
            },
            /* 31 */
            {
                /* nRg */
                712476,
                /* nBg */
                673983,
            },
            /* 32 */
            {
                /* nRg */
                692805,
                /* nBg */
                693759,
            },
            /* 33 */
            {
                /* nRg */
                686555,
                /* nBg */
                700040,
            },
            /* 34 */
            {
                /* nRg */
                680295,
                /* nBg */
                706331,
            },
            /* 35 */
            {
                /* nRg */
                674025,
                /* nBg */
                712623,
            },
            /* 36 */
            {
                /* nRg */
                667754,
                /* nBg */
                718935,
            },
            /* 37 */
            {
                /* nRg */
                661463,
                /* nBg */
                725258,
            },
            /* 38 */
            {
                /* nRg */
                655161,
                /* nBg */
                731591,
            },
            /* 39 */
            {
                /* nRg */
                648848,
                /* nBg */
                737935,
            },
            /* 40 */
            {
                /* nRg */
                642515,
                /* nBg */
                744290,
            },
            /* 41 */
            {
                /* nRg */
                633644,
                /* nBg */
                753213,
            },
            /* 42 */
            {
                /* nRg */
                624731,
                /* nBg */
                762168,
            },
            /* 43 */
            {
                /* nRg */
                615787,
                /* nBg */
                771165,
            },
            /* 44 */
            {
                /* nRg */
                606800,
                /* nBg */
                780193,
            },
            /* 45 */
            {
                /* nRg */
                597783,
                /* nBg */
                789253,
            },
            /* 46 */
            {
                /* nRg */
                588723,
                /* nBg */
                798365,
            },
            /* 47 */
            {
                /* nRg */
                579611,
                /* nBg */
                807519,
            },
            /* 48 */
            {
                /* nRg */
                570457,
                /* nBg */
                816725,
            },
            /* 49 */
            {
                /* nRg */
                542680,
                /* nBg */
                844638,
            },
            /* 50 */
            {
                /* nRg */
                514368,
                /* nBg */
                873086,
            },
            /* 51 */
            {
                /* nRg */
                485459,
                /* nBg */
                902153,
            },
            /* 52 */
            {
                /* nRg */
                455837,
                /* nBg */
                931922,
            },
            /* 53 */
            {
                /* nRg */
                425418,
                /* nBg */
                962488,
            },
            /* 54 */
            {
                /* nRg */
                394097,
                /* nBg */
                993977,
            },
            /* 55 */
            {
                /* nRg */
                361759,
                /* nBg */
                1026483,
            },
            /* 56 */
            {
                /* nRg */
                328257,
                /* nBg */
                1060142,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1180697,
                /* nBg */
                203392,
            },
            /* 1 */
            {
                /* nRg */
                1161183,
                /* nBg */
                209170,
            },
            /* 2 */
            {
                /* nRg */
                1141773,
                /* nBg */
                215262,
            },
            /* 3 */
            {
                /* nRg */
                1122459,
                /* nBg */
                221669,
            },
            /* 4 */
            {
                /* nRg */
                1103249,
                /* nBg */
                228401,
            },
            /* 5 */
            {
                /* nRg */
                1084154,
                /* nBg */
                235437,
            },
            /* 6 */
            {
                /* nRg */
                1065185,
                /* nBg */
                242787,
            },
            /* 7 */
            {
                /* nRg */
                1046332,
                /* nBg */
                250452,
            },
            /* 8 */
            {
                /* nRg */
                1027615,
                /* nBg */
                258422,
            },
            /* 9 */
            {
                /* nRg */
                1006948,
                /* nBg */
                267649,
            },
            /* 10 */
            {
                /* nRg */
                986458,
                /* nBg */
                277243,
            },
            /* 11 */
            {
                /* nRg */
                966137,
                /* nBg */
                287215,
            },
            /* 12 */
            {
                /* nRg */
                946015,
                /* nBg */
                297554,
            },
            /* 13 */
            {
                /* nRg */
                926071,
                /* nBg */
                308250,
            },
            /* 14 */
            {
                /* nRg */
                906337,
                /* nBg */
                319323,
            },
            /* 15 */
            {
                /* nRg */
                886802,
                /* nBg */
                330742,
            },
            /* 16 */
            {
                /* nRg */
                867476,
                /* nBg */
                342517,
            },
            /* 17 */
            {
                /* nRg */
                853436,
                /* nBg */
                351388,
            },
            /* 18 */
            {
                /* nRg */
                839511,
                /* nBg */
                360438,
            },
            /* 19 */
            {
                /* nRg */
                825712,
                /* nBg */
                369675,
            },
            /* 20 */
            {
                /* nRg */
                812028,
                /* nBg */
                379102,
            },
            /* 21 */
            {
                /* nRg */
                798480,
                /* nBg */
                388707,
            },
            /* 22 */
            {
                /* nRg */
                785058,
                /* nBg */
                398501,
            },
            /* 23 */
            {
                /* nRg */
                771773,
                /* nBg */
                408462,
            },
            /* 24 */
            {
                /* nRg */
                758613,
                /* nBg */
                418602,
            },
            /* 25 */
            {
                /* nRg */
                733825,
                /* nBg */
                438504,
            },
            /* 26 */
            {
                /* nRg */
                709550,
                /* nBg */
                459025,
            },
            /* 27 */
            {
                /* nRg */
                685811,
                /* nBg */
                480174,
            },
            /* 28 */
            {
                /* nRg */
                662616,
                /* nBg */
                501911,
            },
            /* 29 */
            {
                /* nRg */
                639988,
                /* nBg */
                524236,
            },
            /* 30 */
            {
                /* nRg */
                617947,
                /* nBg */
                547136,
            },
            /* 31 */
            {
                /* nRg */
                596493,
                /* nBg */
                570593,
            },
            /* 32 */
            {
                /* nRg */
                575647,
                /* nBg */
                594595,
            },
            /* 33 */
            {
                /* nRg */
                569167,
                /* nBg */
                602313,
            },
            /* 34 */
            {
                /* nRg */
                562760,
                /* nBg */
                610072,
            },
            /* 35 */
            {
                /* nRg */
                556416,
                /* nBg */
                617884,
            },
            /* 36 */
            {
                /* nRg */
                550125,
                /* nBg */
                625748,
            },
            /* 37 */
            {
                /* nRg */
                543907,
                /* nBg */
                633665,
            },
            /* 38 */
            {
                /* nRg */
                537752,
                /* nBg */
                641634,
            },
            /* 39 */
            {
                /* nRg */
                531659,
                /* nBg */
                649656,
            },
            /* 40 */
            {
                /* nRg */
                525641,
                /* nBg */
                657719,
            },
            /* 41 */
            {
                /* nRg */
                517325,
                /* nBg */
                669086,
            },
            /* 42 */
            {
                /* nRg */
                509136,
                /* nBg */
                680547,
            },
            /* 43 */
            {
                /* nRg */
                501073,
                /* nBg */
                692092,
            },
            /* 44 */
            {
                /* nRg */
                493145,
                /* nBg */
                703731,
            },
            /* 45 */
            {
                /* nRg */
                485354,
                /* nBg */
                715464,
            },
            /* 46 */
            {
                /* nRg */
                477689,
                /* nBg */
                727282,
            },
            /* 47 */
            {
                /* nRg */
                470161,
                /* nBg */
                739183,
            },
            /* 48 */
            {
                /* nRg */
                462768,
                /* nBg */
                751179,
            },
            /* 49 */
            {
                /* nRg */
                441419,
                /* nBg */
                787638,
            },
            /* 50 */
            {
                /* nRg */
                421328,
                /* nBg */
                824799,
            },
            /* 51 */
            {
                /* nRg */
                402506,
                /* nBg */
                862632,
            },
            /* 52 */
            {
                /* nRg */
                384985,
                /* nBg */
                901073,
            },
            /* 53 */
            {
                /* nRg */
                368784,
                /* nBg */
                940090,
            },
            /* 54 */
            {
                /* nRg */
                353915,
                /* nBg */
                979643,
            },
            /* 55 */
            {
                /* nRg */
                340399,
                /* nBg */
                1019677,
            },
            /* 56 */
            {
                /* nRg */
                328257,
                /* nBg */
                1060142,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                3567,
                /* nB */
                -3818,
            },
            /* 1 */
            {
                /* nK */
                3358,
                /* nB */
                -3515,
            },
            /* 2 */
            {
                /* nK */
                3171,
                /* nB */
                -3243,
            },
            /* 3 */
            {
                /* nK */
                3002,
                /* nB */
                -2997,
            },
            /* 4 */
            {
                /* nK */
                2848,
                /* nB */
                -2774,
            },
            /* 5 */
            {
                /* nK */
                2708,
                /* nB */
                -2570,
            },
            /* 6 */
            {
                /* nK */
                2579,
                /* nB */
                -2383,
            },
            /* 7 */
            {
                /* nK */
                2461,
                /* nB */
                -2211,
            },
            /* 8 */
            {
                /* nK */
                2351,
                /* nB */
                -2052,
            },
            /* 9 */
            {
                /* nK */
                2239,
                /* nB */
                -1889,
            },
            /* 10 */
            {
                /* nK */
                2135,
                /* nB */
                -1738,
            },
            /* 11 */
            {
                /* nK */
                2039,
                /* nB */
                -1598,
            },
            /* 12 */
            {
                /* nK */
                1949,
                /* nB */
                -1468,
            },
            /* 13 */
            {
                /* nK */
                1866,
                /* nB */
                -1347,
            },
            /* 14 */
            {
                /* nK */
                1788,
                /* nB */
                -1233,
            },
            /* 15 */
            {
                /* nK */
                1715,
                /* nB */
                -1127,
            },
            /* 16 */
            {
                /* nK */
                1646,
                /* nB */
                -1027,
            },
            /* 17 */
            {
                /* nK */
                1598,
                /* nB */
                -957,
            },
            /* 18 */
            {
                /* nK */
                1551,
                /* nB */
                -890,
            },
            /* 19 */
            {
                /* nK */
                1507,
                /* nB */
                -826,
            },
            /* 20 */
            {
                /* nK */
                1465,
                /* nB */
                -764,
            },
            /* 21 */
            {
                /* nK */
                1424,
                /* nB */
                -704,
            },
            /* 22 */
            {
                /* nK */
                1384,
                /* nB */
                -647,
            },
            /* 23 */
            {
                /* nK */
                1346,
                /* nB */
                -592,
            },
            /* 24 */
            {
                /* nK */
                1309,
                /* nB */
                -538,
            },
            /* 25 */
            {
                /* nK */
                1242,
                /* nB */
                -441,
            },
            /* 26 */
            {
                /* nK */
                1179,
                /* nB */
                -350,
            },
            /* 27 */
            {
                /* nK */
                1120,
                /* nB */
                -264,
            },
            /* 28 */
            {
                /* nK */
                1064,
                /* nB */
                -182,
            },
            /* 29 */
            {
                /* nK */
                1011,
                /* nB */
                -105,
            },
            /* 30 */
            {
                /* nK */
                960,
                /* nB */
                -31,
            },
            /* 31 */
            {
                /* nK */
                912,
                /* nB */
                38,
            },
            /* 32 */
            {
                /* nK */
                866,
                /* nB */
                104,
            },
            /* 33 */
            {
                /* nK */
                852,
                /* nB */
                125,
            },
            /* 34 */
            {
                /* nK */
                838,
                /* nB */
                145,
            },
            /* 35 */
            {
                /* nK */
                824,
                /* nB */
                165,
            },
            /* 36 */
            {
                /* nK */
                811,
                /* nB */
                185,
            },
            /* 37 */
            {
                /* nK */
                797,
                /* nB */
                204,
            },
            /* 38 */
            {
                /* nK */
                784,
                /* nB */
                224,
            },
            /* 39 */
            {
                /* nK */
                771,
                /* nB */
                243,
            },
            /* 40 */
            {
                /* nK */
                758,
                /* nB */
                262,
            },
            /* 41 */
            {
                /* nK */
                740,
                /* nB */
                288,
            },
            /* 42 */
            {
                /* nK */
                723,
                /* nB */
                313,
            },
            /* 43 */
            {
                /* nK */
                705,
                /* nB */
                338,
            },
            /* 44 */
            {
                /* nK */
                688,
                /* nB */
                363,
            },
            /* 45 */
            {
                /* nK */
                672,
                /* nB */
                387,
            },
            /* 46 */
            {
                /* nK */
                655,
                /* nB */
                411,
            },
            /* 47 */
            {
                /* nK */
                639,
                /* nB */
                435,
            },
            /* 48 */
            {
                /* nK */
                623,
                /* nB */
                458,
            },
            /* 49 */
            {
                /* nK */
                576,
                /* nB */
                526,
            },
            /* 50 */
            {
                /* nK */
                531,
                /* nB */
                591,
            },
            /* 51 */
            {
                /* nK */
                487,
                /* nB */
                655,
            },
            /* 52 */
            {
                /* nK */
                445,
                /* nB */
                716,
            },
            /* 53 */
            {
                /* nK */
                404,
                /* nB */
                775,
            },
            /* 54 */
            {
                /* nK */
                365,
                /* nB */
                833,
            },
            /* 55 */
            {
                /* nK */
                326,
                /* nB */
                889,
            },
            /* 56 */
            {
                /* nK */
                288,
                /* nB */
                945,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1145978,
                /* nBg */
                82450,
            },
            /* 1 */
            {
                /* nRg */
                1124493,
                /* nBg */
                88804,
            },
            /* 2 */
            {
                /* nRg */
                1103112,
                /* nBg */
                95515,
            },
            /* 3 */
            {
                /* nRg */
                1081837,
                /* nBg */
                102582,
            },
            /* 4 */
            {
                /* nRg */
                1060687,
                /* nBg */
                109985,
            },
            /* 5 */
            {
                /* nRg */
                1039663,
                /* nBg */
                117745,
            },
            /* 6 */
            {
                /* nRg */
                1018765,
                /* nBg */
                125840,
            },
            /* 7 */
            {
                /* nRg */
                998003,
                /* nBg */
                134281,
            },
            /* 8 */
            {
                /* nRg */
                977378,
                /* nBg */
                143057,
            },
            /* 9 */
            {
                /* nRg */
                954624,
                /* nBg */
                153218,
            },
            /* 10 */
            {
                /* nRg */
                932048,
                /* nBg */
                163788,
            },
            /* 11 */
            {
                /* nRg */
                909682,
                /* nBg */
                174766,
            },
            /* 12 */
            {
                /* nRg */
                887504,
                /* nBg */
                186154,
            },
            /* 13 */
            {
                /* nRg */
                865547,
                /* nBg */
                197940,
            },
            /* 14 */
            {
                /* nRg */
                843810,
                /* nBg */
                210124,
            },
            /* 15 */
            {
                /* nRg */
                822293,
                /* nBg */
                222707,
            },
            /* 16 */
            {
                /* nRg */
                801018,
                /* nBg */
                235678,
            },
            /* 17 */
            {
                /* nRg */
                785551,
                /* nBg */
                245440,
            },
            /* 18 */
            {
                /* nRg */
                770211,
                /* nBg */
                255412,
            },
            /* 19 */
            {
                /* nRg */
                755006,
                /* nBg */
                265594,
            },
            /* 20 */
            {
                /* nRg */
                739949,
                /* nBg */
                275964,
            },
            /* 21 */
            {
                /* nRg */
                725027,
                /* nBg */
                286544,
            },
            /* 22 */
            {
                /* nRg */
                710242,
                /* nBg */
                297324,
            },
            /* 23 */
            {
                /* nRg */
                695604,
                /* nBg */
                308302,
            },
            /* 24 */
            {
                /* nRg */
                681124,
                /* nBg */
                319470,
            },
            /* 25 */
            {
                /* nRg */
                653819,
                /* nBg */
                341385,
            },
            /* 26 */
            {
                /* nRg */
                627080,
                /* nBg */
                363992,
            },
            /* 27 */
            {
                /* nRg */
                600928,
                /* nBg */
                387281,
            },
            /* 28 */
            {
                /* nRg */
                575396,
                /* nBg */
                411220,
            },
            /* 29 */
            {
                /* nRg */
                550471,
                /* nBg */
                435820,
            },
            /* 30 */
            {
                /* nRg */
                526186,
                /* nBg */
                461038,
            },
            /* 31 */
            {
                /* nRg */
                502562,
                /* nBg */
                486875,
            },
            /* 32 */
            {
                /* nRg */
                479598,
                /* nBg */
                513309,
            },
            /* 33 */
            {
                /* nRg */
                472467,
                /* nBg */
                521792,
            },
            /* 34 */
            {
                /* nRg */
                465410,
                /* nBg */
                530349,
            },
            /* 35 */
            {
                /* nRg */
                458416,
                /* nBg */
                538958,
            },
            /* 36 */
            {
                /* nRg */
                451496,
                /* nBg */
                547619,
            },
            /* 37 */
            {
                /* nRg */
                444649,
                /* nBg */
                556332,
            },
            /* 38 */
            {
                /* nRg */
                437875,
                /* nBg */
                565109,
            },
            /* 39 */
            {
                /* nRg */
                431164,
                /* nBg */
                573938,
            },
            /* 40 */
            {
                /* nRg */
                424526,
                /* nBg */
                582820,
            },
            /* 41 */
            {
                /* nRg */
                415362,
                /* nBg */
                595340,
            },
            /* 42 */
            {
                /* nRg */
                406344,
                /* nBg */
                607964,
            },
            /* 43 */
            {
                /* nRg */
                397473,
                /* nBg */
                620684,
            },
            /* 44 */
            {
                /* nRg */
                388739,
                /* nBg */
                633508,
            },
            /* 45 */
            {
                /* nRg */
                380151,
                /* nBg */
                646426,
            },
            /* 46 */
            {
                /* nRg */
                371720,
                /* nBg */
                659439,
            },
            /* 47 */
            {
                /* nRg */
                363426,
                /* nBg */
                672557,
            },
            /* 48 */
            {
                /* nRg */
                355289,
                /* nBg */
                685758,
            },
            /* 49 */
            {
                /* nRg */
                331769,
                /* nBg */
                725908,
            },
            /* 50 */
            {
                /* nRg */
                309644,
                /* nBg */
                766845,
            },
            /* 51 */
            {
                /* nRg */
                288914,
                /* nBg */
                808505,
            },
            /* 52 */
            {
                /* nRg */
                269610,
                /* nBg */
                850846,
            },
            /* 53 */
            {
                /* nRg */
                251774,
                /* nBg */
                893817,
            },
            /* 54 */
            {
                /* nRg */
                235395,
                /* nBg */
                937375,
            },
            /* 55 */
            {
                /* nRg */
                220516,
                /* nBg */
                981467,
            },
            /* 56 */
            {
                /* nRg */
                207146,
                /* nBg */
                1026042,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1209627,
                /* nBg */
                304181,
            },
            /* 1 */
            {
                /* nRg */
                1191759,
                /* nBg */
                309466,
            },
            /* 2 */
            {
                /* nRg */
                1173986,
                /* nBg */
                315045,
            },
            /* 3 */
            {
                /* nRg */
                1156307,
                /* nBg */
                320917,
            },
            /* 4 */
            {
                /* nRg */
                1138722,
                /* nBg */
                327072,
            },
            /* 5 */
            {
                /* nRg */
                1121242,
                /* nBg */
                333521,
            },
            /* 6 */
            {
                /* nRg */
                1103867,
                /* nBg */
                340252,
            },
            /* 7 */
            {
                /* nRg */
                1086608,
                /* nBg */
                347267,
            },
            /* 8 */
            {
                /* nRg */
                1069474,
                /* nBg */
                354565,
            },
            /* 9 */
            {
                /* nRg */
                1050547,
                /* nBg */
                363007,
            },
            /* 10 */
            {
                /* nRg */
                1031788,
                /* nBg */
                371794,
            },
            /* 11 */
            {
                /* nRg */
                1013197,
                /* nBg */
                380916,
            },
            /* 12 */
            {
                /* nRg */
                994763,
                /* nBg */
                390385,
            },
            /* 13 */
            {
                /* nRg */
                976507,
                /* nBg */
                400189,
            },
            /* 14 */
            {
                /* nRg */
                958440,
                /* nBg */
                410318,
            },
            /* 15 */
            {
                /* nRg */
                940552,
                /* nBg */
                420773,
            },
            /* 16 */
            {
                /* nRg */
                922862,
                /* nBg */
                431552,
            },
            /* 17 */
            {
                /* nRg */
                910007,
                /* nBg */
                439668,
            },
            /* 18 */
            {
                /* nRg */
                897256,
                /* nBg */
                447962,
            },
            /* 19 */
            {
                /* nRg */
                884621,
                /* nBg */
                456424,
            },
            /* 20 */
            {
                /* nRg */
                872101,
                /* nBg */
                465054,
            },
            /* 21 */
            {
                /* nRg */
                859696,
                /* nBg */
                473841,
            },
            /* 22 */
            {
                /* nRg */
                847407,
                /* nBg */
                482806,
            },
            /* 23 */
            {
                /* nRg */
                835243,
                /* nBg */
                491929,
            },
            /* 24 */
            {
                /* nRg */
                823195,
                /* nBg */
                501219,
            },
            /* 25 */
            {
                /* nRg */
                800504,
                /* nBg */
                519433,
            },
            /* 26 */
            {
                /* nRg */
                778274,
                /* nBg */
                538224,
            },
            /* 27 */
            {
                /* nRg */
                756537,
                /* nBg */
                557580,
            },
            /* 28 */
            {
                /* nRg */
                735314,
                /* nBg */
                577482,
            },
            /* 29 */
            {
                /* nRg */
                714594,
                /* nBg */
                597929,
            },
            /* 30 */
            {
                /* nRg */
                694409,
                /* nBg */
                618891,
            },
            /* 31 */
            {
                /* nRg */
                674769,
                /* nBg */
                640365,
            },
            /* 32 */
            {
                /* nRg */
                655685,
                /* nBg */
                662344,
            },
            /* 33 */
            {
                /* nRg */
                649750,
                /* nBg */
                669400,
            },
            /* 34 */
            {
                /* nRg */
                643889,
                /* nBg */
                676510,
            },
            /* 35 */
            {
                /* nRg */
                638079,
                /* nBg */
                683661,
            },
            /* 36 */
            {
                /* nRg */
                632323,
                /* nBg */
                690865,
            },
            /* 37 */
            {
                /* nRg */
                626629,
                /* nBg */
                698110,
            },
            /* 38 */
            {
                /* nRg */
                620988,
                /* nBg */
                705409,
            },
            /* 39 */
            {
                /* nRg */
                615420,
                /* nBg */
                712749,
            },
            /* 40 */
            {
                /* nRg */
                609904,
                /* nBg */
                720131,
            },
            /* 41 */
            {
                /* nRg */
                602281,
                /* nBg */
                730532,
            },
            /* 42 */
            {
                /* nRg */
                594784,
                /* nBg */
                741029,
            },
            /* 43 */
            {
                /* nRg */
                587412,
                /* nBg */
                751598,
            },
            /* 44 */
            {
                /* nRg */
                580146,
                /* nBg */
                762262,
            },
            /* 45 */
            {
                /* nRg */
                573015,
                /* nBg */
                773000,
            },
            /* 46 */
            {
                /* nRg */
                566000,
                /* nBg */
                783821,
            },
            /* 47 */
            {
                /* nRg */
                559111,
                /* nBg */
                794716,
            },
            /* 48 */
            {
                /* nRg */
                552348,
                /* nBg */
                805694,
            },
            /* 49 */
            {
                /* nRg */
                532792,
                /* nBg */
                839071,
            },
            /* 50 */
            {
                /* nRg */
                514400,
                /* nBg */
                873097,
            },
            /* 51 */
            {
                /* nRg */
                497172,
                /* nBg */
                907731,
            },
            /* 52 */
            {
                /* nRg */
                481129,
                /* nBg */
                942932,
            },
            /* 53 */
            {
                /* nRg */
                466291,
                /* nBg */
                978657,
            },
            /* 54 */
            {
                /* nRg */
                452681,
                /* nBg */
                1014864,
            },
            /* 55 */
            {
                /* nRg */
                440308,
                /* nBg */
                1051512,
            },
            /* 56 */
            {
                /* nRg */
                429193,
                /* nBg */
                1088558,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1128624,
                /* nBg */
                21978,
            },
            /* 1 */
            {
                /* nRg */
                1106143,
                /* nBg */
                28626,
            },
            /* 2 */
            {
                /* nRg */
                1083777,
                /* nBg */
                35652,
            },
            /* 3 */
            {
                /* nRg */
                1061526,
                /* nBg */
                43034,
            },
            /* 4 */
            {
                /* nRg */
                1039401,
                /* nBg */
                50783,
            },
            /* 5 */
            {
                /* nRg */
                1017412,
                /* nBg */
                58888,
            },
            /* 6 */
            {
                /* nRg */
                995550,
                /* nBg */
                67361,
            },
            /* 7 */
            {
                /* nRg */
                973834,
                /* nBg */
                76190,
            },
            /* 8 */
            {
                /* nRg */
                952264,
                /* nBg */
                85375,
            },
            /* 9 */
            {
                /* nRg */
                928451,
                /* nBg */
                95997,
            },
            /* 10 */
            {
                /* nRg */
                904848,
                /* nBg */
                107049,
            },
            /* 11 */
            {
                /* nRg */
                881443,
                /* nBg */
                118542,
            },
            /* 12 */
            {
                /* nRg */
                858259,
                /* nBg */
                130443,
            },
            /* 13 */
            {
                /* nRg */
                835285,
                /* nBg */
                142774,
            },
            /* 14 */
            {
                /* nRg */
                812552,
                /* nBg */
                155525,
            },
            /* 15 */
            {
                /* nRg */
                790050,
                /* nBg */
                168684,
            },
            /* 16 */
            {
                /* nRg */
                767788,
                /* nBg */
                182253,
            },
            /* 17 */
            {
                /* nRg */
                751609,
                /* nBg */
                192466,
            },
            /* 18 */
            {
                /* nRg */
                735566,
                /* nBg */
                202899,
            },
            /* 19 */
            {
                /* nRg */
                719659,
                /* nBg */
                213543,
            },
            /* 20 */
            {
                /* nRg */
                703909,
                /* nBg */
                224406,
            },
            /* 21 */
            {
                /* nRg */
                688296,
                /* nBg */
                235468,
            },
            /* 22 */
            {
                /* nRg */
                672829,
                /* nBg */
                246740,
            },
            /* 23 */
            {
                /* nRg */
                657520,
                /* nBg */
                258222,
            },
            /* 24 */
            {
                /* nRg */
                642368,
                /* nBg */
                269903,
            },
            /* 25 */
            {
                /* nRg */
                613805,
                /* nBg */
                292825,
            },
            /* 26 */
            {
                /* nRg */
                585839,
                /* nBg */
                316481,
            },
            /* 27 */
            {
                /* nRg */
                558493,
                /* nBg */
                340829,
            },
            /* 28 */
            {
                /* nRg */
                531775,
                /* nBg */
                365880,
            },
            /* 29 */
            {
                /* nRg */
                505707,
                /* nBg */
                391601,
            },
            /* 30 */
            {
                /* nRg */
                480311,
                /* nBg */
                417983,
            },
            /* 31 */
            {
                /* nRg */
                455596,
                /* nBg */
                445005,
            },
            /* 32 */
            {
                /* nRg */
                431573,
                /* nBg */
                472656,
            },
            /* 33 */
            {
                /* nRg */
                424118,
                /* nBg */
                481538,
            },
            /* 34 */
            {
                /* nRg */
                416736,
                /* nBg */
                490482,
            },
            /* 35 */
            {
                /* nRg */
                409427,
                /* nBg */
                499489,
            },
            /* 36 */
            {
                /* nRg */
                402181,
                /* nBg */
                508549,
            },
            /* 37 */
            {
                /* nRg */
                395020,
                /* nBg */
                517671,
            },
            /* 38 */
            {
                /* nRg */
                387931,
                /* nBg */
                526847,
            },
            /* 39 */
            {
                /* nRg */
                380916,
                /* nBg */
                536084,
            },
            /* 40 */
            {
                /* nRg */
                373975,
                /* nBg */
                545375,
            },
            /* 41 */
            {
                /* nRg */
                364391,
                /* nBg */
                558472,
            },
            /* 42 */
            {
                /* nRg */
                354953,
                /* nBg */
                571673,
            },
            /* 43 */
            {
                /* nRg */
                345674,
                /* nBg */
                584980,
            },
            /* 44 */
            {
                /* nRg */
                336540,
                /* nBg */
                598391,
            },
            /* 45 */
            {
                /* nRg */
                327554,
                /* nBg */
                611907,
            },
            /* 46 */
            {
                /* nRg */
                318736,
                /* nBg */
                625518,
            },
            /* 47 */
            {
                /* nRg */
                310064,
                /* nBg */
                639233,
            },
            /* 48 */
            {
                /* nRg */
                301549,
                /* nBg */
                653043,
            },
            /* 49 */
            {
                /* nRg */
                276950,
                /* nBg */
                695049,
            },
            /* 50 */
            {
                /* nRg */
                253797,
                /* nBg */
                737862,
            },
            /* 51 */
            {
                /* nRg */
                232113,
                /* nBg */
                781441,
            },
            /* 52 */
            {
                /* nRg */
                211928,
                /* nBg */
                825733,
            },
            /* 53 */
            {
                /* nRg */
                193263,
                /* nBg */
                870685,
            },
            /* 54 */
            {
                /* nRg */
                176140,
                /* nBg */
                916246,
            },
            /* 55 */
            {
                /* nRg */
                160568,
                /* nBg */
                962362,
            },
            /* 56 */
            {
                /* nRg */
                146580,
                /* nBg */
                1008982,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1224097,
                /* nBg */
                354576,
            },
            /* 1 */
            {
                /* nRg */
                1207047,
                /* nBg */
                359620,
            },
            /* 2 */
            {
                /* nRg */
                1190092,
                /* nBg */
                364936,
            },
            /* 3 */
            {
                /* nRg */
                1173231,
                /* nBg */
                370535,
            },
            /* 4 */
            {
                /* nRg */
                1156453,
                /* nBg */
                376407,
            },
            /* 5 */
            {
                /* nRg */
                1139781,
                /* nBg */
                382562,
            },
            /* 6 */
            {
                /* nRg */
                1123214,
                /* nBg */
                388980,
            },
            /* 7 */
            {
                /* nRg */
                1106751,
                /* nBg */
                395670,
            },
            /* 8 */
            {
                /* nRg */
                1090404,
                /* nBg */
                402632,
            },
            /* 9 */
            {
                /* nRg */
                1072358,
                /* nBg */
                410685,
            },
            /* 10 */
            {
                /* nRg */
                1054459,
                /* nBg */
                419063,
            },
            /* 11 */
            {
                /* nRg */
                1036717,
                /* nBg */
                427777,
            },
            /* 12 */
            {
                /* nRg */
                1019142,
                /* nBg */
                436805,
            },
            /* 13 */
            {
                /* nRg */
                1001726,
                /* nBg */
                446148,
            },
            /* 14 */
            {
                /* nRg */
                984487,
                /* nBg */
                455816,
            },
            /* 15 */
            {
                /* nRg */
                967437,
                /* nBg */
                465788,
            },
            /* 16 */
            {
                /* nRg */
                950555,
                /* nBg */
                476074,
            },
            /* 17 */
            {
                /* nRg */
                938297,
                /* nBg */
                483813,
            },
            /* 18 */
            {
                /* nRg */
                926134,
                /* nBg */
                491719,
            },
            /* 19 */
            {
                /* nRg */
                914075,
                /* nBg */
                499793,
            },
            /* 20 */
            {
                /* nRg */
                902132,
                /* nBg */
                508025,
            },
            /* 21 */
            {
                /* nRg */
                890304,
                /* nBg */
                516413,
            },
            /* 22 */
            {
                /* nRg */
                878581,
                /* nBg */
                524959,
            },
            /* 23 */
            {
                /* nRg */
                866973,
                /* nBg */
                533662,
            },
            /* 24 */
            {
                /* nRg */
                855491,
                /* nBg */
                542523,
            },
            /* 25 */
            {
                /* nRg */
                833838,
                /* nBg */
                559898,
            },
            /* 26 */
            {
                /* nRg */
                812636,
                /* nBg */
                577818,
            },
            /* 27 */
            {
                /* nRg */
                791906,
                /* nBg */
                596283,
            },
            /* 28 */
            {
                /* nRg */
                771658,
                /* nBg */
                615273,
            },
            /* 29 */
            {
                /* nRg */
                751892,
                /* nBg */
                634766,
            },
            /* 30 */
            {
                /* nRg */
                732640,
                /* nBg */
                654773,
            },
            /* 31 */
            {
                /* nRg */
                713902,
                /* nBg */
                675251,
            },
            /* 32 */
            {
                /* nRg */
                695699,
                /* nBg */
                696213,
            },
            /* 33 */
            {
                /* nRg */
                690047,
                /* nBg */
                702944,
            },
            /* 34 */
            {
                /* nRg */
                684447,
                /* nBg */
                709729,
            },
            /* 35 */
            {
                /* nRg */
                678901,
                /* nBg */
                716555,
            },
            /* 36 */
            {
                /* nRg */
                673416,
                /* nBg */
                723423,
            },
            /* 37 */
            {
                /* nRg */
                667985,
                /* nBg */
                730333,
            },
            /* 38 */
            {
                /* nRg */
                662606,
                /* nBg */
                737296,
            },
            /* 39 */
            {
                /* nRg */
                657289,
                /* nBg */
                744290,
            },
            /* 40 */
            {
                /* nRg */
                652026,
                /* nBg */
                751336,
            },
            /* 41 */
            {
                /* nRg */
                644769,
                /* nBg */
                761266,
            },
            /* 42 */
            {
                /* nRg */
                637618,
                /* nBg */
                771270,
            },
            /* 43 */
            {
                /* nRg */
                630572,
                /* nBg */
                781357,
            },
            /* 44 */
            {
                /* nRg */
                623651,
                /* nBg */
                791528,
            },
            /* 45 */
            {
                /* nRg */
                616846,
                /* nBg */
                801762,
            },
            /* 46 */
            {
                /* nRg */
                610156,
                /* nBg */
                812091,
            },
            /* 47 */
            {
                /* nRg */
                603581,
                /* nBg */
                822482,
            },
            /* 48 */
            {
                /* nRg */
                597133,
                /* nBg */
                832957,
            },
            /* 49 */
            {
                /* nRg */
                578489,
                /* nBg */
                864792,
            },
            /* 50 */
            {
                /* nRg */
                560936,
                /* nBg */
                897246,
            },
            /* 51 */
            {
                /* nRg */
                544494,
                /* nBg */
                930286,
            },
            /* 52 */
            {
                /* nRg */
                529195,
                /* nBg */
                963862,
            },
            /* 53 */
            {
                /* nRg */
                515050,
                /* nBg */
                997940,
            },
            /* 54 */
            {
                /* nRg */
                502058,
                /* nBg */
                1032470,
            },
            /* 55 */
            {
                /* nRg */
                490262,
                /* nBg */
                1067429,
            },
            /* 56 */
            {
                /* nRg */
                479661,
                /* nBg */
                1102777,
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
                    1040187,
                    /* nBg */
                    287310,
                },
            },
            /* 1 */
            {
                /* szName[32] */
                "A",
                /* nCct */
                2856,
                /* nRadius */
                0,
                /* tCoord */
                {
                    /* nRg */
                    870318,
                    /* nBg */
                    347079,
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
                    718275,
                    /* nBg */
                    367002,
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
                    596640,
                    /* nBg */
                    612368,
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
                    501219,
                    /* nBg */
                    639631,
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
                    489685,
                    /* nBg */
                    767558,
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
                    585105,
                    /* nBg */
                    360710,
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
                    4,
                    /* tPntArray[15] */
                    {
                        /* 0 */
                        {
                            /* nRg */
                            0,
                            /* nBg */
                            0,
                        },
                        /* 1 */
                        {
                            /* nRg */
                            0,
                            /* nBg */
                            0,
                        },
                        /* 2 */
                        {
                            /* nRg */
                            0,
                            /* nBg */
                            0,
                        },
                        /* 3 */
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
                /* nTrigerValue1st[4] */
                {0, 0, 0, 0, /*0 - 3*/},
                /* nTrigerValue2nd[4] */
                {0, 0, 0, 0, /*0 - 3*/},
                /* nTrigerValue3rd */
                0,
            },
        },
        /* tInitParam */
        {
            /* tGains */
            {
                /* nGainR */
                374,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                731,
            },
            /* nDampRatio */
            100000,
        },
        /* nMode */
        0,
        /* nIndex */
        0,
        /* nDampRatio */
        943718,
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
        2100,
        /* nCctMaxInner */
        7800,
        /* nCctMinOuter */
        1800,
        /* nCctMaxOuter */
        10000,
        /* nCctSplitHtoA */
        2600,
        /* nCctSplitAtoF */
        3600,
        /* nCctSplitFtoD5 */
        4500,
        /* nCctSplitD5toD6 */
        5400,
        /* nCctSplitD6toS */
        6800,
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
            {300, 300, 300, 200, 50, 50, 50, 50, /*0 - 7*/},
            {800, 800, 700, 400, 100, 100, 100, 100, /*0 - 7*/},
            {800, 800, 700, 400, 100, 100, 100, 100, /*0 - 7*/},
            {300, 300, 300, 50, 50, 50, 50, 50, /*0 - 7*/},
            {600, 150, 50, 50, 50, 50, 50, 50, /*0 - 7*/},
            {800, 300, 200, 200, 200, 200, 100, 100, /*0 - 7*/},
            {800, 300, 200, 200, 200, 200, 100, 100, /*0 - 7*/},
            {600, 150, 50, 50, 50, 50, 50, 50, /*0 - 7*/},
            {100, 100, 100, 100, 100, 50, 50, 50, /*0 - 7*/},
            {400, 400, 800, 500, 400, 200, 100, 100, /*0 - 7*/},
            {400, 400, 800, 500, 400, 200, 200, 200, /*0 - 7*/},
            {100, 10, 10, 10, 10, 10, 10, 10, /*0 - 7*/},
            {400, 400, 200, 400, 450, 450, 300, 200, /*0 - 7*/},
            {500, 1000, 600, 1000, 900, 900, 1000, 800, /*0 - 7*/},
            {500, 1000, 600, 1000, 900, 900, 200, 900, /*0 - 7*/},
            {10, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 200, 400, 300, 500, 400, 300, 300, /*0 - 7*/},
            {400, 800, 300, 400, 1000, 700, 500, 450, /*0 - 7*/},
            {400, 800, 300, 400, 1000, 700, 700, 700, /*0 - 7*/},
            {100, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 100, 200, 200, 200, 200, 200, 200, /*0 - 7*/},
            {400, 400, 500, 500, 500, 500, 400, 400, /*0 - 7*/},
            {400, 400, 500, 500, 500, 500, 500, 600, /*0 - 7*/},
            {100, 100, 300, 300, 100, 0, 0, 0, /*0 - 7*/},
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
        {51, 819, 3072, 8192, 20480, 92160, 215040, 250880, /*0 - 7*/},
        /* nLumaWeightList[8][32] */
        {
            {51, 102, 614, 1024, 1024, 1024, 512, 0, /*0 - 7*/},
            {102, 205, 819, 1024, 1024, 1024, 512, 0, /*0 - 7*/},
            {100, 200, 820, 1024, 1024, 1024, 819, 0, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 819, 0, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 819, 0, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 819, 0, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 819, 0, /*0 - 7*/},
            {0, 200, 820, 1024, 1024, 1024, 819, 0, /*0 - 7*/},
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
                2400,
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
                2600,
                /* nDomMaxCctThresh */
                3200,
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
                3600,
                /* nDomMaxCctThresh */
                4300,
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
                4500,
                /* nDomMaxCctThresh */
                7600,
                /* nDom2AllRatioThresh */
                307,
                /* nDom2MinorRatioThresh */
                1126,
                /* nMinorWeight */
                0,
                /* nSmoothPercent */
                205,
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
            {1800, 2300, 2500, 2850, 3800, 4400, 4900, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 4900, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6600, 7600, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
        },
        /* nPreferGrShift[8][32] */
        {
            {0, 0, 0, 0, 0, 0, 15729, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 15729, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 20972, 20972, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 83886, 83886, 0, 0, /*0 - 9*/},
        },
        /* nGreenCutEn */
        0,
        /* nGreenCutLuxListNum */
        1,
        /* nGreenCutCctListNum */
        0,
        /* nGreenCutLuxList[8] */
        {1024000, /*0 - 0*/},
        /* nGreenCutWeight[8] */
        {102, /*0 - 0*/},
        /* nGreenCutBreakAngle[8] */
        {52429, /*0 - 0*/},
        /* nGreenCutOffsetRg[8] */
        {-31456, /*0 - 0*/},
        /* nGreenCutOffsetBg[8] */
        {-62914, /*0 - 0*/},
        /* nGreenCutCctList[8] */
        {0, /*0 - 0*/},
        /* nGreenCutCctDiscount[8] */
        {1024, /*0 - 0*/},
        /* nMultiCamSyncMode */
        0,
    },
    /* tLogParam */
    {
        /* nLogLevel */
        4,
        /* nLogTarget */
        2,
        /* nAlgoPrintInterval */
        0,
        /* nStatisticsPrintInterval */
        0,
    },
};

const static AX_ISP_IQ_CAF_PARAM_T caf_param_hdr_2x = {
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
        1,
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

const static AX_ISP_IQ_DPC_PARAM_T dpc_param_hdr_2x = {
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
            {154451139, 152870846, 153255590, 154699876, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {13840120, 20632215, 20876088, 12133979, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {6529576, 6532419, 6449761, 6498451, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {27818796, 27824017, 28471222, 28156829, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {29481682, 27445089, 27620499, 28535918, /*0 - 3*/},
        },
        /* tLcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {36863371, 36889750, 36887419, 36784136, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {5747087, 6168625, 6705084, 5549101, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {1526043, 1569756, 1552586, 1544424, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {25445201, 24908808, 24845929, 25340783, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {15015910, 13550075, 15978964, 13922947, /*0 - 3*/},
        },
    },
    /* tManualParam */
    {
        /* nNoiseRatio */
        1024,
        /* nDpType */
        0,
        /* nNonChwiseEn */
        0,
        /* nChwiseStr */
        20,
        /* nDetCoarseStr */
        236,
        /* nDetFineStr */
        48,
        /* nDynamicDpcStr */
        128,
        /* nEdgeStr */
        102,
        /* nHotColdTypeStr */
        32,
        /* nSupWinkStr */
        16,
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
        10,
        /* nRefVal[16] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, /*0 - 9*/},
        /* nNoiseRatio[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nDpType[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nNonChwiseEn[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nChwiseStr[16] */
        {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, /*0 - 9*/},
        /* nDetCoarseStr[16] */
        {200, 200, 200, 128, 156, 184, 200, 200, 200, 200, /*0 - 9*/},
        /* nDetFineStr[16] */
        {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 9*/},
        /* nDynamicDpcStr[16] */
        {128, 256, 512, 512, 1024, 1024, 1532, 2048, 2048, 2800, /*0 - 9*/},
        /* nEdgeStr[16] */
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 9*/},
        /* nHotColdTypeStr[16] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 9*/},
        /* nSupWinkStr[16] */
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 9*/},
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
        },
        /* nDynamicDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nStaticDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nNormalPixDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nPreDetLevelSlope[16] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 9*/},
        /* nPreDetLevelOffset[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nPreDetLevelMax[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 9*/},
    },
};

const static AX_ISP_IQ_BLC_PARAM_T blc_param_hdr_2x = {
    /* nBlcEnable */
    1,
    /* nSblEnable */
    1,
    /* nAutoMode */
    1,
    /* tBiasOut[4] */
    {
        {0, 0, 0, 0, /*0 - 3*/},
    },
    /* tManualParam[4] */
    {
        /* 0 */
        {
            /* nSblRValue */
            4096,
            /* nSblGrValue */
            4096,
            /* nSblGbValue */
            4096,
            /* nSblBValue */
            4096,
        },
        /* 1 */
        {
            /* nSblRValue */
            4096,
            /* nSblGrValue */
            4096,
            /* nSblGbValue */
            4096,
            /* nSblBValue */
            4096,
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
            9,
            /* nExposeTimeGrpNum */
            3,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, /*0 - 8*/},
            /* nExposeTime[10] */
            {1024, 10240, 40960, /*0 - 2*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
            9,
            /* nExposeTimeGrpNum */
            3,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, /*0 - 8*/},
            /* nExposeTime[10] */
            {1024, 10240, 40960, /*0 - 2*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
                {4096, 4096, 4096, /*0 - 2*/},
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
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
                    /* 2 */
                    {
                        /* nBiasOut[4] */
                        {0, 0, 0, 0, /*0 - 3*/},
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_HDR_PARAM_T hdr_param_hdr_2x = {
    /* nEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
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
                0, 1031, 2062, 3093, 4124, 6006, 7888, 9770, 11653, 13029, 14406, 15783, 17160, 18646, 20133, 21620, 23107, 24483, 25860, 27236, 28613, 29651, 30690, 31729, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 0 - 31*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 32 - 63*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 64 - 95*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 96 - 127*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 128 - 159*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 160 - 191*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 192 - 223*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 224 - 255*/
                32768, /*256 - 256*/
            },
            {
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 0 - 31*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 32 - 63*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 64 - 95*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 96 - 127*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 128 - 159*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 160 - 191*/
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 192 - 223*/
                32768, 32756, 32744, 32732, 32720, 32708, 32696, 32685, 32673, 32661, 32649, 32637, 32625, 32614, 32602, 32590, 32578, 30542, 28506, 26470, 24433, 22397, 20361, 18325, 16289, 14253, 12216, 10180, 8144, 6108, 4072, 2036,  /* 224 - 255*/
                0, /*256 - 256*/
            },
        },
        /* nExpWeightGain[2] */
        {256, 256, /*0 - 1*/},
    },
    /* tDgstParam */
    {
        /* nDeghostEnable */
        1,
        /* nDgstStrenThre[2] */
        {0, 256, /*0 - 1*/},
        /* nDgstStrenLimit[2] */
        {0, 256, /*0 - 1*/},
        /* nDgstBaseFid */
        0,
    },
    /* tFusionParam */
    {
        /* nFusionProtectThreshold[2][2] */
        {
            {15104, 15168, /*0 - 1*/},
            {15104, 15168, /*0 - 1*/},
        },
    },
    /* tHdrManualParam */
    {
        /* nNoiseLutScale */
        512,
        /* nCoarseMotMaskNoiseLvl */
        256,
        /* nCoarseMotMaskSen */
        4096,
        /* nCoarseExpMaskSen[2] */
        {28672, 28672, /*0 - 1*/},
    },
    /* tHdrAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, 262144, 262144, 262144, 262144, 262144, 262144, /*0 - 15*/},
        /* nNoiseLutScale[16] */
        {512, 512, 1024, 1024, 2048, 2048, 6400, 6400, 6400, 6400, 6400, 6400, 6400, 6400, 6400, 6400, /*0 - 15*/},
        /* nCoarseMotMaskNoiseLvl[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nCoarseMotMaskSen[16] */
        {4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, /*0 - 15*/},
        /* nCoarseExpMaskSen[16][2] */
        {
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
            {28672, 28672, /*0 - 1*/},
        },
    },
};

const static AX_ISP_IQ_AINR_PARAM_T ainr_param_hdr_2x = {
    /* nEnable */
    1,
    /* nAutoMode */
    1,
    /* bUpdateTable */
    1,
    /* nRefMode */
    1,
    /* nHdrMode */
    2,
    /* tManualParam */
    {
        /* tMeta */
        {
            /* szModelPath[256] */
            "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
            /* szModelName[256] */
            "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
            /* szTemporalBaseNrName[256] */
            "3d_sr_again_1-16x_1014",
            /* szSpatialBaseNrName[256] */
            "2d_sr_again_1-16x_1031_lv0",
            /* nHcgMode */
            0,
            /* nIsoThresholdMin */
            0,
            /* nIsoThresholdMax */
            0,
            /* nHdrRatioMin */
            0,
            /* nHdrRatioMax */
            0,
            /* nBiasIn2D[4] */
            {4096, 4096, 4096, 4096, /*0 - 3*/},
            /* nBiasIn3D[4] */
            {4096, 4096, 4096, 4096, /*0 - 3*/},
        },
        /* tParams */
        {
            /* tBias */
            {
                /* nBiasIn[4] */
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* tNonSens */
            {
                /* nTemporalFilterStrLut[17][2] */
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
                    {0, 1024, /*0 - 1*/},
                    {16, 1024, /*0 - 1*/},
                    {32, 1024, /*0 - 1*/},
                    {48, 2048, /*0 - 1*/},
                    {64, 2048, /*0 - 1*/},
                    {80, 2048, /*0 - 1*/},
                    {96, 2048, /*0 - 1*/},
                    {112, 2048, /*0 - 1*/},
                    {128, 3072, /*0 - 1*/},
                    {144, 3072, /*0 - 1*/},
                    {160, 3072, /*0 - 1*/},
                    {176, 3072, /*0 - 1*/},
                    {192, 4096, /*0 - 1*/},
                    {208, 4096, /*0 - 1*/},
                    {224, 4096, /*0 - 1*/},
                    {240, 4096, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
            },
        },
    },
    /* tAutoParam */
    {
        /* nAutoModelNum */
        4,
        /* tAutoModelTable[12] */
        {
            /* 0 */
            {
                /* tMeta */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_1-16x_1014",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_1-16x_1031_lv0",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    100,
                    /* nIsoThresholdMax */
                    400,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    32768,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {1024, 1200, 2048, 3072, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {1200, 2048, 3072, 4096, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 1, 1, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {1024, 1200, 2048, 3072, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {1200, 2048, 3072, 4096, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
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
                            /* nTemporalFilterStrLut 1 */
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
                            /* nTemporalFilterStrLut 2 */
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
                            /* nTemporalFilterStrLut 3 */
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
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
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
                            /* nVstTemporalFilterStrLut 1 */
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
                            /* nVstTemporalFilterStrLut 2 */
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
                            /* nVstTemporalFilterStrLut 3 */
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
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {1024, 1200, 2048, 3072, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {1200, 2048, 3072, 4096, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1024, /*0 - 1*/},
                                {16, 1024, /*0 - 1*/},
                                {32, 1024, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 2048, /*0 - 1*/},
                                {80, 2048, /*0 - 1*/},
                                {96, 2048, /*0 - 1*/},
                                {112, 2048, /*0 - 1*/},
                                {128, 3072, /*0 - 1*/},
                                {144, 3072, /*0 - 1*/},
                                {160, 3072, /*0 - 1*/},
                                {176, 3072, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1024, /*0 - 1*/},
                                {16, 1024, /*0 - 1*/},
                                {32, 1024, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 2048, /*0 - 1*/},
                                {80, 2048, /*0 - 1*/},
                                {96, 2048, /*0 - 1*/},
                                {112, 2048, /*0 - 1*/},
                                {128, 3072, /*0 - 1*/},
                                {144, 3072, /*0 - 1*/},
                                {160, 3072, /*0 - 1*/},
                                {176, 3072, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 1024, /*0 - 1*/},
                                {16, 1024, /*0 - 1*/},
                                {32, 1024, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 2048, /*0 - 1*/},
                                {80, 2048, /*0 - 1*/},
                                {96, 2048, /*0 - 1*/},
                                {112, 2048, /*0 - 1*/},
                                {128, 3072, /*0 - 1*/},
                                {144, 3072, /*0 - 1*/},
                                {160, 3072, /*0 - 1*/},
                                {176, 3072, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 1024, /*0 - 1*/},
                                {16, 1024, /*0 - 1*/},
                                {32, 1024, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 2048, /*0 - 1*/},
                                {80, 2048, /*0 - 1*/},
                                {96, 2048, /*0 - 1*/},
                                {112, 2048, /*0 - 1*/},
                                {128, 3072, /*0 - 1*/},
                                {144, 3072, /*0 - 1*/},
                                {160, 3072, /*0 - 1*/},
                                {176, 3072, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 1 */
            {
                /* tMeta */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_16-32x_1014",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_1-16x_1031_lv1",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    100,
                    /* nIsoThresholdMax */
                    800,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    32768,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {4000, 8000, 16000, 24000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 16000, 24000, 33000, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {4000, 8000, 16000, 24000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 16000, 24000, 33000, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
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
                            /* nTemporalFilterStrLut 1 */
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
                            /* nTemporalFilterStrLut 2 */
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
                            /* nTemporalFilterStrLut 3 */
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
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
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
                            /* nVstTemporalFilterStrLut 1 */
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
                            /* nVstTemporalFilterStrLut 2 */
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
                            /* nVstTemporalFilterStrLut 3 */
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
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {4000, 8000, 16000, 24000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 16000, 24000, 33000, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 793, /*0 - 1*/},
                                {16, 1002, /*0 - 1*/},
                                {32, 1211, /*0 - 1*/},
                                {48, 1385, /*0 - 1*/},
                                {64, 1594, /*0 - 1*/},
                                {80, 1733, /*0 - 1*/},
                                {96, 1907, /*0 - 1*/},
                                {112, 2116, /*0 - 1*/},
                                {128, 2290, /*0 - 1*/},
                                {144, 2464, /*0 - 1*/},
                                {160, 2638, /*0 - 1*/},
                                {176, 2813, /*0 - 1*/},
                                {192, 2987, /*0 - 1*/},
                                {208, 3230, /*0 - 1*/},
                                {224, 3509, /*0 - 1*/},
                                {240, 3753, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 793, /*0 - 1*/},
                                {16, 1002, /*0 - 1*/},
                                {32, 1211, /*0 - 1*/},
                                {48, 1385, /*0 - 1*/},
                                {64, 1594, /*0 - 1*/},
                                {80, 1733, /*0 - 1*/},
                                {96, 1907, /*0 - 1*/},
                                {112, 2116, /*0 - 1*/},
                                {128, 2290, /*0 - 1*/},
                                {144, 2464, /*0 - 1*/},
                                {160, 2638, /*0 - 1*/},
                                {176, 2813, /*0 - 1*/},
                                {192, 2987, /*0 - 1*/},
                                {208, 3230, /*0 - 1*/},
                                {224, 3509, /*0 - 1*/},
                                {240, 3753, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 793, /*0 - 1*/},
                                {16, 1002, /*0 - 1*/},
                                {32, 1211, /*0 - 1*/},
                                {48, 1385, /*0 - 1*/},
                                {64, 1594, /*0 - 1*/},
                                {80, 1733, /*0 - 1*/},
                                {96, 1907, /*0 - 1*/},
                                {112, 2116, /*0 - 1*/},
                                {128, 2290, /*0 - 1*/},
                                {144, 2464, /*0 - 1*/},
                                {160, 2638, /*0 - 1*/},
                                {176, 2813, /*0 - 1*/},
                                {192, 2987, /*0 - 1*/},
                                {208, 3230, /*0 - 1*/},
                                {224, 3509, /*0 - 1*/},
                                {240, 3753, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 793, /*0 - 1*/},
                                {16, 1002, /*0 - 1*/},
                                {32, 1211, /*0 - 1*/},
                                {48, 1385, /*0 - 1*/},
                                {64, 1594, /*0 - 1*/},
                                {80, 1733, /*0 - 1*/},
                                {96, 1907, /*0 - 1*/},
                                {112, 2116, /*0 - 1*/},
                                {128, 2290, /*0 - 1*/},
                                {144, 2464, /*0 - 1*/},
                                {160, 2638, /*0 - 1*/},
                                {176, 2813, /*0 - 1*/},
                                {192, 2987, /*0 - 1*/},
                                {208, 3230, /*0 - 1*/},
                                {224, 3509, /*0 - 1*/},
                                {240, 3753, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 2 */
            {
                /* tMeta */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_H1-R250_1-16x_L100_500_F1_C1_M1",
                    /* szSpatialBaseNrName[256] */
                    "2d_H1-R250_4-16x_L200_500_F1_C1",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    800,
                    /* nIsoThresholdMax */
                    3200,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    32768,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {32000, 56000, 80000, 104000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {56000, 80000, 104000, 138000, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {1, 0, 0, 1, /*0 - 3*/},
                            {1, 0, 0, 1, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {32000, 56000, 80000, 104000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {56000, 80000, 104000, 138000, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
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
                            /* nTemporalFilterStrLut 1 */
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
                            /* nTemporalFilterStrLut 2 */
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
                            /* nTemporalFilterStrLut 3 */
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
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
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
                            /* nVstTemporalFilterStrLut 1 */
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
                            /* nVstTemporalFilterStrLut 2 */
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
                            /* nVstTemporalFilterStrLut 3 */
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
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {32000, 56000, 80000, 104000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {56000, 80000, 104000, 138000, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 0, /*0 - 1*/},
                                {32, 0, /*0 - 1*/},
                                {48, 0, /*0 - 1*/},
                                {64, 0, /*0 - 1*/},
                                {80, 0, /*0 - 1*/},
                                {96, 0, /*0 - 1*/},
                                {112, 0, /*0 - 1*/},
                                {128, 0, /*0 - 1*/},
                                {144, 0, /*0 - 1*/},
                                {160, 0, /*0 - 1*/},
                                {176, 0, /*0 - 1*/},
                                {192, 0, /*0 - 1*/},
                                {208, 0, /*0 - 1*/},
                                {224, 0, /*0 - 1*/},
                                {240, 0, /*0 - 1*/},
                                {255, 0, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 256, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 512, /*0 - 1*/},
                                {64, 512, /*0 - 1*/},
                                {80, 512, /*0 - 1*/},
                                {96, 512, /*0 - 1*/},
                                {112, 512, /*0 - 1*/},
                                {128, 512, /*0 - 1*/},
                                {144, 512, /*0 - 1*/},
                                {160, 512, /*0 - 1*/},
                                {176, 512, /*0 - 1*/},
                                {192, 512, /*0 - 1*/},
                                {208, 512, /*0 - 1*/},
                                {224, 512, /*0 - 1*/},
                                {240, 2048, /*0 - 1*/},
                                {255, 2048, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 256, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 512, /*0 - 1*/},
                                {64, 512, /*0 - 1*/},
                                {80, 512, /*0 - 1*/},
                                {96, 512, /*0 - 1*/},
                                {112, 512, /*0 - 1*/},
                                {128, 512, /*0 - 1*/},
                                {144, 512, /*0 - 1*/},
                                {160, 512, /*0 - 1*/},
                                {176, 512, /*0 - 1*/},
                                {192, 512, /*0 - 1*/},
                                {208, 512, /*0 - 1*/},
                                {224, 512, /*0 - 1*/},
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 3072, /*0 - 1*/},
                                {16, 3072, /*0 - 1*/},
                                {32, 3072, /*0 - 1*/},
                                {48, 3072, /*0 - 1*/},
                                {64, 3072, /*0 - 1*/},
                                {80, 3072, /*0 - 1*/},
                                {96, 3072, /*0 - 1*/},
                                {112, 3072, /*0 - 1*/},
                                {128, 3072, /*0 - 1*/},
                                {144, 3072, /*0 - 1*/},
                                {160, 3072, /*0 - 1*/},
                                {176, 3072, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3072, /*0 - 1*/},
                                {224, 3072, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 3 */
            {
                /* tMeta */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A1-64X_I1-4X_0100_MULTI9_01730702945_241104_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_H1-R250_16-128x_L300_1500_F7_C3_M1",
                    /* szSpatialBaseNrName[256] */
                    "2d_H1-R250_16-128x_L100_500_F7_C5",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    3200,
                    /* nIsoThresholdMax */
                    6400,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    32768,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {128000, 160000, 192000, 224000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {160000, 192000, 224000, 280000, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {128000, 160000, 192000, 224000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {160000, 192000, 224000, 280000, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
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
                            /* nTemporalFilterStrLut 1 */
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
                            /* nTemporalFilterStrLut 2 */
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
                            /* nTemporalFilterStrLut 3 */
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
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
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
                            /* nVstTemporalFilterStrLut 1 */
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
                            /* nVstTemporalFilterStrLut 2 */
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
                            /* nVstTemporalFilterStrLut 3 */
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
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {128000, 160000, 192000, 224000, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {160000, 192000, 224000, 280000, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2987, /*0 - 1*/},
                                {16, 3230, /*0 - 1*/},
                                {32, 3439, /*0 - 1*/},
                                {48, 3509, /*0 - 1*/},
                                {64, 3613, /*0 - 1*/},
                                {80, 3613, /*0 - 1*/},
                                {96, 3683, /*0 - 1*/},
                                {112, 3683, /*0 - 1*/},
                                {128, 3753, /*0 - 1*/},
                                {144, 3787, /*0 - 1*/},
                                {160, 3822, /*0 - 1*/},
                                {176, 3892, /*0 - 1*/},
                                {192, 3927, /*0 - 1*/},
                                {208, 3961, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2987, /*0 - 1*/},
                                {16, 3230, /*0 - 1*/},
                                {32, 3439, /*0 - 1*/},
                                {48, 3509, /*0 - 1*/},
                                {64, 3613, /*0 - 1*/},
                                {80, 3613, /*0 - 1*/},
                                {96, 3683, /*0 - 1*/},
                                {112, 3683, /*0 - 1*/},
                                {128, 3753, /*0 - 1*/},
                                {144, 3787, /*0 - 1*/},
                                {160, 3822, /*0 - 1*/},
                                {176, 3892, /*0 - 1*/},
                                {192, 3927, /*0 - 1*/},
                                {208, 3961, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2987, /*0 - 1*/},
                                {16, 3230, /*0 - 1*/},
                                {32, 3439, /*0 - 1*/},
                                {48, 3509, /*0 - 1*/},
                                {64, 3613, /*0 - 1*/},
                                {80, 3613, /*0 - 1*/},
                                {96, 3683, /*0 - 1*/},
                                {112, 3683, /*0 - 1*/},
                                {128, 3753, /*0 - 1*/},
                                {144, 3787, /*0 - 1*/},
                                {160, 3822, /*0 - 1*/},
                                {176, 3892, /*0 - 1*/},
                                {192, 3927, /*0 - 1*/},
                                {208, 3961, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2987, /*0 - 1*/},
                                {16, 3230, /*0 - 1*/},
                                {32, 3439, /*0 - 1*/},
                                {48, 3509, /*0 - 1*/},
                                {64, 3613, /*0 - 1*/},
                                {80, 3613, /*0 - 1*/},
                                {96, 3683, /*0 - 1*/},
                                {112, 3683, /*0 - 1*/},
                                {128, 3753, /*0 - 1*/},
                                {144, 3787, /*0 - 1*/},
                                {160, 3822, /*0 - 1*/},
                                {176, 3892, /*0 - 1*/},
                                {192, 3927, /*0 - 1*/},
                                {208, 3961, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_RAW2DNR_PARAM_T raw2dnr_param_hdr_2x = {
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
        32,
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
        255,
        /* tHrParam */
        {
            /* nHighFreqNrFactor[2][17] */
            {
                {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
                {2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 512, 256, 256, 256, 256, /*0 - 16*/},
            },
            /* nLowFreqNrFactor[2][17] */
            {
                {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nHfNrStrength[2] */
            {0, 160, /*0 - 1*/},
            /* nMfNrStrength[2] */
            {0, 0, /*0 - 1*/},
        },
    },
    /* tAuto */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nEdgePreserveRatio[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nNoiseProfileFactor[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nInterChannelStrength[12] */
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 9*/},
        /* tHrAuto */
        {
            /* nHrGrpNum */
            1,
            /* nHrRefVal[4] */
            {1024, /*0 - 0*/},
            /* tHrParam[4] */
            {
                /* 0 */
                {
                    /* nHighFreqNrFactor[12][2][17] */
                    {
                        /* nHighFreqNrFactor 0 */
                        {
                            {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
                            {2048, 2048, 2048, 2048, 1024, 1024, 1024, 1024, 1024, 512, 512, 512, 512, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 1 */
                        {
                            {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
                            {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 2 */
                        {
                            {512, 512, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {512, 512, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 3 */
                        {
                            {512, 512, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {512, 512, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 4 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 5 */
                        {
                            {1024, 1024, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {1024, 1024, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 6 */
                        {
                            {1024, 1024, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {1024, 1024, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 7 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 589, 928, 996, 793, 657, 691, 657, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 589, 928, 996, 793, 657, 691, 657, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 8 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 589, 928, 996, 793, 657, 691, 657, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 589, 928, 996, 793, 657, 691, 657, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 9 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 589, 928, 996, 793, 657, 691, 657, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 589, 928, 996, 793, 657, 691, 657, /*0 - 16*/},
                        },
                    },
                    /* nLowFreqNrFactor[12][2][17] */
                    {
                        /* nLowFreqNrFactor 0 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 1 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 2 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 3 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 4 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 5 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 6 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 7 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 8 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 9 */
                        {
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {128, 128, 128, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                    },
                    /* nHfNrStrength[12][2] */
                    {
                        {0, 160, /*0 - 1*/},
                        {0, 128, /*0 - 1*/},
                        {128, 120, /*0 - 1*/},
                        {130, 120, /*0 - 1*/},
                        {128, 120, /*0 - 1*/},
                        {64, 128, /*0 - 1*/},
                        {128, 128, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                    },
                    /* nMfNrStrength[12][2] */
                    {
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {160, 120, /*0 - 1*/},
                        {130, 120, /*0 - 1*/},
                        {64, 128, /*0 - 1*/},
                        {64, 140, /*0 - 1*/},
                        {96, 96, /*0 - 1*/},
                        {128, 128, /*0 - 1*/},
                        {128, 128, /*0 - 1*/},
                        {128, 128, /*0 - 1*/},
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_LSC_PARAM_T lsc_param_hdr_2x = {
    /* nLscEn */
    0,
    /* nRefMode */
    1,
    /* nMeshMode */
    1,
    /* nAutoMode */
    1,
    /* nAlgMode */
    0,
    /* tManualParam */
    {
        /* nLumaRatio */
        0,
        /* nColorRatio */
        0,
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
            /* nRefColorTempStart[8] */
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            /* nRefColorTempEnd[8] */
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            /* nColorTemp[8] */
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            /* nColorRatio[8] */
            {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
            /* nRRMeshLut[8][15][19] */
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

const static AX_ISP_IQ_RLTM_PARAM_T rltm_param_hdr_2x = {
    /* nRltmEn */
    1,
    /* nMultiCamSyncMode */
    0,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* nAlgMode */
    0,
    /* tCommonGlb */
    {
        /* nGtmSwEn */
        0,
        /* nGtmSwDgain */
        65535,
        /* nWinSize */
        256,
    },
    /* tTempoFilter */
    {
        /* nAlpha */
        1024,
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
        0,
        /* nCoeffWinRad */
        2,
        /* nCoeffEps */
        400,
    },
    /* tManualParam */
    {
        /* nKMax */
        65535,
        /* nPreGamma */
        32,
        /* nExtraDgain */
        16,
        /* nLog10Offset */
        0,
        /* nBaseGain */
        64,
        /* nDitherMode */
        0,
        /* nDitherScale */
        4,
        /* nHistWtBrightLow[4] */
        {20, 15, 0, 0, /*0 - 3*/},
        /* nHistWtBrightHigh[4] */
        {45, 35, 0, 0, /*0 - 3*/},
        /* nHistWtThreshold[4] */
        {96, 129, 129, 129, /*0 - 3*/},
        /* nSCurveList[1025] */
        {
            0, 143, 239, 321, 397, 467, 534, 598, 659, 719, 777, 833, 887, 941, 994, 1045, 1096, 1145, 1194, 1243, 1290, 1337, 1384, 1429, 1475, 1519, 1564, 1607, 1651, 1694, 1736, 1779,  /* 0 - 31*/
            1820, 1862, 1903, 1944, 1984, 2025, 2065, 2104, 2144, 2183, 2222, 2260, 2299, 2337, 2375, 2412, 2450, 2487, 2524, 2561, 2598, 2634, 2670, 2707, 2743, 2778, 2814, 2849, 2885, 2920, 2955, 2990,  /* 32 - 63*/
            3024, 3059, 3093, 3127, 3162, 3196, 3229, 3263, 3297, 3330, 3364, 3397, 3430, 3463, 3496, 3529, 3561, 3594, 3626, 3658, 3691, 3723, 3755, 3787, 3819, 3850, 3882, 3913, 3945, 3976, 4008, 4039,  /* 64 - 95*/
            4070, 4101, 4132, 4163, 4193, 4224, 4255, 4285, 4316, 4346, 4376, 4407, 4437, 4467, 4498, 4528, 4559, 4589, 4619, 4650, 4680, 4711, 4741, 4771, 4802, 4832, 4862, 4893, 4923, 4954, 4984, 5014,  /* 96 - 127*/
            5045, 5075, 5106, 5136, 5166, 5197, 5227, 5257, 5288, 5318, 5349, 5379, 5409, 5440, 5470, 5501, 5531, 5561, 5592, 5622, 5652, 5683, 5713, 5744, 5774, 5804, 5835, 5865, 5896, 5926, 5956, 5987,  /* 128 - 159*/
            6017, 6047, 6078, 6108, 6139, 6169, 6199, 6230, 6260, 6291, 6321, 6351, 6382, 6412, 6442, 6473, 6503, 6534, 6564, 6594, 6625, 6655, 6686, 6716, 6746, 6777, 6807, 6838, 6868, 6898, 6929, 6959,  /* 160 - 191*/
            6989, 7020, 7050, 7081, 7111, 7141, 7172, 7202, 7233, 7263, 7293, 7324, 7354, 7384, 7415, 7445, 7476, 7506, 7536, 7567, 7597, 7628, 7658, 7688, 7719, 7749, 7779, 7810, 7840, 7871, 7901, 7931,  /* 192 - 223*/
            7962, 7992, 8023, 8053, 8083, 8114, 8144, 8174, 8205, 8235, 8266, 8296, 8326, 8357, 8387, 8418, 8448, 8478, 8509, 8539, 8569, 8600, 8630, 8661, 8691, 8721, 8752, 8782, 8813, 8843, 8873, 8904,  /* 224 - 255*/
            8934, 8965, 8995, 9025, 9056, 9086, 9116, 9147, 9177, 9208, 9238, 9268, 9299, 9329, 9360, 9390, 9420, 9451, 9481, 9511, 9542, 9572, 9603, 9633, 9663, 9694, 9724, 9755, 9785, 9815, 9846, 9876,  /* 256 - 287*/
            9906, 9937, 9967, 9998, 10028, 10058, 10089, 10119, 10150, 10180, 10210, 10241, 10271, 10301, 10332, 10362, 10393, 10423, 10453, 10484, 10514, 10545, 10575, 10605, 10636, 10666, 10696, 10727, 10757, 10788, 10818, 10848,  /* 288 - 319*/
            10879, 10909, 10940, 10970, 11000, 11031, 11061, 11091, 11122, 11152, 11183, 11213, 11243, 11274, 11304, 11335, 11365, 11395, 11426, 11456, 11487, 11517, 11547, 11578, 11608, 11638, 11669, 11699, 11730, 11760, 11790, 11821,  /* 320 - 351*/
            11851, 11882, 11912, 11942, 11973, 12003, 12033, 12064, 12094, 12125, 12155, 12185, 12216, 12246, 12277, 12307, 12337, 12368, 12398, 12428, 12459, 12489, 12520, 12550, 12580, 12611, 12641, 12672, 12702, 12732, 12763, 12793,  /* 352 - 383*/
            12823, 12854, 12884, 12915, 12945, 12975, 13006, 13036, 13067, 13097, 13127, 13158, 13188, 13218, 13249, 13279, 13310, 13340, 13370, 13401, 13431, 13462, 13492, 13522, 13553, 13583, 13614, 13644, 13674, 13705, 13735, 13765,  /* 384 - 415*/
            13796, 13826, 13857, 13887, 13917, 13948, 13978, 14009, 14039, 14069, 14100, 14130, 14160, 14191, 14221, 14252, 14282, 14312, 14343, 14373, 14404, 14434, 14464, 14495, 14525, 14555, 14586, 14616, 14647, 14677, 14707, 14738,  /* 416 - 447*/
            14768, 14799, 14829, 14859, 14890, 14920, 14950, 14981, 15011, 15042, 15072, 15102, 15133, 15163, 15194, 15224, 15254, 15285, 15315, 15345, 15376, 15406, 15437, 15467, 15497, 15528, 15558, 15589, 15619, 15649, 15680, 15710,  /* 448 - 479*/
            15740, 15771, 15801, 15832, 15862, 15892, 15923, 15953, 15984, 16014, 16044, 16075, 16105, 16136, 16166, 16196, 16227, 16257, 16287, 16318, 16348, 16379, 16409, 16439, 16470, 16500, 16531, 16561, 16591, 16622, 16652, 16682,  /* 480 - 511*/
            16713, 16743, 16774, 16804, 16834, 16865, 16895, 16926, 16956, 16986, 17017, 17047, 17077, 17108, 17138, 17169, 17199, 17229, 17260, 17290, 17321, 17351, 17381, 17412, 17442, 17472, 17503, 17533, 17564, 17594, 17624, 17655,  /* 512 - 543*/
            17685, 17716, 17746, 17776, 17807, 17837, 17867, 17898, 17928, 17959, 17989, 18019, 18050, 18080, 18111, 18141, 18171, 18202, 18232, 18263, 18293, 18323, 18354, 18384, 18414, 18445, 18475, 18506, 18536, 18566, 18597, 18627,  /* 544 - 575*/
            18658, 18688, 18718, 18749, 18779, 18809, 18840, 18870, 18901, 18931, 18961, 18992, 19022, 19053, 19083, 19113, 19144, 19174, 19204, 19235, 19265, 19296, 19326, 19356, 19387, 19417, 19448, 19478, 19508, 19539, 19569, 19599,  /* 576 - 607*/
            19630, 19660, 19691, 19721, 19751, 19782, 19812, 19843, 19873, 19903, 19934, 19964, 19994, 20025, 20055, 20086, 20116, 20146, 20177, 20207, 20238, 20268, 20298, 20329, 20359, 20389, 20420, 20450, 20481, 20511, 20541, 20572,  /* 608 - 639*/
            20602, 20633, 20663, 20693, 20724, 20754, 20785, 20815, 20845, 20876, 20906, 20936, 20967, 20997, 21028, 21058, 21088, 21119, 21149, 21180, 21210, 21240, 21271, 21301, 21331, 21362, 21392, 21423, 21453, 21483, 21514, 21544,  /* 640 - 671*/
            21575, 21605, 21635, 21666, 21696, 21726, 21757, 21787, 21818, 21848, 21878, 21909, 21939, 21970, 22000, 22030, 22061, 22091, 22121, 22152, 22182, 22213, 22243, 22273, 22304, 22334, 22365, 22395, 22425, 22456, 22486, 22516,  /* 672 - 703*/
            22547, 22577, 22608, 22638, 22668, 22699, 22729, 22760, 22790, 22820, 22851, 22881, 22912, 22942, 22972, 23003, 23033, 23063, 23094, 23124, 23155, 23185, 23216, 23246, 23276, 23307, 23337, 23368, 23398, 23429, 23459, 23490,  /* 704 - 735*/
            23520, 23551, 23581, 23612, 23642, 23673, 23703, 23734, 23764, 23795, 23825, 23856, 23886, 23917, 23948, 23978, 24009, 24039, 24070, 24101, 24131, 24162, 24192, 24223, 24254, 24284, 24315, 24345, 24376, 24407, 24437, 24468,  /* 736 - 767*/
            24499, 24529, 24560, 24591, 24621, 24652, 24683, 24714, 24744, 24775, 24806, 24836, 24867, 24898, 24929, 24959, 24990, 25021, 25052, 25083, 25113, 25144, 25175, 25206, 25237, 25267, 25298, 25329, 25360, 25391, 25422, 25453,  /* 768 - 799*/
            25483, 25514, 25545, 25576, 25607, 25638, 25669, 25700, 25731, 25762, 25793, 25823, 25854, 25885, 25916, 25947, 25978, 26009, 26040, 26071, 26102, 26133, 26164, 26196, 26227, 26258, 26289, 26320, 26351, 26382, 26413, 26444,  /* 800 - 831*/
            26475, 26506, 26538, 26569, 26600, 26631, 26662, 26693, 26724, 26756, 26787, 26818, 26849, 26881, 26912, 26943, 26974, 27005, 27037, 27068, 27099, 27131, 27162, 27193, 27225, 27256, 27287, 27319, 27350, 27381, 27413, 27444,  /* 832 - 863*/
            27476, 27507, 27538, 27570, 27601, 27633, 27664, 27696, 27727, 27759, 27790, 27822, 27853, 27885, 27916, 27948, 27979, 28011, 28042, 28074, 28106, 28137, 28169, 28201, 28232, 28264, 28296, 28327, 28359, 28391, 28422, 28454,  /* 864 - 895*/
            28486, 28518, 28550, 28581, 28613, 28645, 28677, 28709, 28740, 28772, 28804, 28836, 28868, 28900, 28932, 28964, 28996, 29028, 29060, 29092, 29124, 29156, 29188, 29220, 29252, 29284, 29316, 29348, 29381, 29413, 29445, 29477,  /* 896 - 927*/
            29509, 29542, 29574, 29606, 29638, 29671, 29703, 29735, 29768, 29800, 29833, 29865, 29897, 29930, 29962, 29995, 30027, 30060, 30092, 30125, 30158, 30190, 30223, 30256, 30288, 30321, 30354, 30386, 30419, 30452, 30485, 30518,  /* 928 - 959*/
            30551, 30583, 30616, 30649, 30682, 30715, 30748, 30781, 30815, 30848, 30881, 30914, 30947, 30981, 31014, 31047, 31080, 31114, 31147, 31181, 31214, 31248, 31281, 31315, 31349, 31382, 31416, 31450, 31484, 31518, 31552, 31586,  /* 960 - 991*/
            31620, 31654, 31688, 31722, 31756, 31791, 31825, 31859, 31894, 31929, 31963, 31998, 32033, 32068, 32103, 32138, 32173, 32208, 32244, 32279, 32315, 32351, 32387, 32423, 32460, 32496, 32533, 32571, 32608, 32646, 32685, 32725,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
        },
        /* tHistWt[16] */
        {
            /* 0 */
            {
                /* nHistogramWeight[63] */
                {
                    1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                    1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                },
            },
            /* 1 */
            {
                /* nHistogramWeight[63] */
                {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                },
            },
            /* 2 */
            {
                /* nHistogramWeight[63] */
                {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
            4000,
            /* nDetailSigmaVal */
            4000,
            /* nDetailExtraStrPos */
            0,
            /* nDetailExtraStrNeg */
            0,
            /* nDetailGainLimitPos */
            500,
            /* nDetailGainLimitNeg */
            500,
            /* nSlopeStrengthLut[33] */
            {
                32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                8192, /*32 - 32*/
            },
            /* nSlopeCoeff */
            255,
        },
        /* tLowFreqEnh */
        {
            /* nRltmDetailLowEn */
            1,
            /* nSigmaDisBlur */
            9000,
            /* nDetailGainPosLow */
            32,
            /* nDetailGainNegLow */
            32,
            /* nDetailLimitPosLow */
            65535,
            /* nDetailLimitNegLow */
            65535,
            /* nSigmaDisPst */
            9000,
            /* nSigmaValPst */
            1000,
        },
        /* tHrParam */
        {
            /* nLocalFactor */
            89,
            /* nRltmStrength */
            69,
            /* nContrastStrength */
            42,
            /* nPostGamma */
            32,
            /* nHighlightSup */
            34,
            /* nDetailCoringPos */
            7,
            /* nDetailCoringNeg */
            7,
            /* nDetailGainPos */
            128,
            /* nDetailGainNeg */
            128,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {205, 1024, 20480, 102400, 204800, 307200, 409600, 614400, 1024000, 2048000, 5120000, 10240000, /*0 - 11*/},
        /* nKMax[12] */
        {65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, /*0 - 11*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nLog10Offset[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nBaseGain[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
        /* nDitherMode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDitherScale[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0, 0, /*0 - 11*/},
        /* nHistWtBrightLow[12][4] */
        {
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {20, 15, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nHistWtBrightHigh[12][4] */
        {
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {45, 35, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nHistWtThreshold[12][4] */
        {
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {96, 129, 129, 129, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
            {0, 0, 0, 0, /*0 - 3*/},
        },
        /* nSCurveList[12][1025] */
        {
            {
                0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768, 800, 832, 864, 896, 928, 960, 992,  /* 0 - 31*/
                1024, 1056, 1088, 1120, 1152, 1184, 1216, 1248, 1280, 1312, 1344, 1376, 1408, 1440, 1472, 1504, 1536, 1568, 1600, 1632, 1664, 1696, 1728, 1760, 1792, 1824, 1856, 1888, 1920, 1952, 1984, 2016,  /* 32 - 63*/
                2048, 2080, 2112, 2144, 2176, 2208, 2240, 2272, 2304, 2336, 2368, 2400, 2432, 2464, 2496, 2528, 2560, 2592, 2624, 2656, 2688, 2720, 2752, 2784, 2816, 2848, 2880, 2912, 2944, 2976, 3008, 3040,  /* 64 - 95*/
                3072, 3104, 3136, 3168, 3200, 3232, 3264, 3296, 3328, 3360, 3392, 3424, 3456, 3488, 3520, 3552, 3584, 3616, 3648, 3680, 3712, 3744, 3776, 3808, 3840, 3872, 3904, 3936, 3968, 4000, 4032, 4064,  /* 96 - 127*/
                4096, 4128, 4160, 4192, 4224, 4256, 4288, 4320, 4352, 4384, 4416, 4448, 4480, 4512, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800, 4832, 4864, 4896, 4928, 4960, 4992, 5024, 5056, 5088,  /* 128 - 159*/
                5120, 5152, 5184, 5216, 5248, 5280, 5312, 5344, 5376, 5408, 5440, 5472, 5504, 5536, 5568, 5600, 5632, 5664, 5696, 5728, 5760, 5792, 5824, 5856, 5888, 5920, 5952, 5984, 6016, 6048, 6080, 6112,  /* 160 - 191*/
                6144, 6176, 6208, 6240, 6272, 6304, 6336, 6368, 6400, 6432, 6464, 6496, 6528, 6560, 6592, 6624, 6656, 6688, 6720, 6752, 6784, 6816, 6848, 6880, 6912, 6944, 6976, 7008, 7040, 7072, 7104, 7136,  /* 192 - 223*/
                7168, 7200, 7232, 7264, 7296, 7328, 7360, 7392, 7424, 7456, 7488, 7520, 7552, 7584, 7616, 7648, 7680, 7712, 7744, 7776, 7808, 7840, 7872, 7904, 7936, 7968, 8000, 8032, 8064, 8096, 8128, 8160,  /* 224 - 255*/
                8192, 8224, 8256, 8288, 8320, 8352, 8384, 8416, 8448, 8480, 8512, 8544, 8576, 8608, 8640, 8672, 8704, 8736, 8768, 8800, 8832, 8864, 8896, 8928, 8960, 8992, 9024, 9056, 9088, 9120, 9152, 9184,  /* 256 - 287*/
                9216, 9248, 9280, 9312, 9344, 9376, 9408, 9440, 9472, 9504, 9536, 9568, 9600, 9632, 9664, 9696, 9728, 9760, 9792, 9824, 9856, 9888, 9920, 9952, 9984, 10016, 10048, 10080, 10112, 10144, 10176, 10208,  /* 288 - 319*/
                10240, 10272, 10304, 10336, 10368, 10400, 10432, 10464, 10496, 10528, 10560, 10592, 10624, 10656, 10688, 10720, 10752, 10784, 10816, 10848, 10880, 10912, 10944, 10976, 11008, 11040, 11072, 11104, 11136, 11168, 11200, 11232,  /* 320 - 351*/
                11264, 11296, 11328, 11360, 11392, 11424, 11456, 11488, 11520, 11552, 11584, 11616, 11648, 11680, 11712, 11744, 11776, 11808, 11840, 11872, 11904, 11936, 11968, 12000, 12032, 12064, 12096, 12128, 12160, 12192, 12224, 12256,  /* 352 - 383*/
                12288, 12320, 12352, 12384, 12416, 12448, 12480, 12512, 12544, 12576, 12608, 12640, 12672, 12704, 12736, 12768, 12800, 12832, 12864, 12896, 12928, 12960, 12992, 13024, 13056, 13088, 13120, 13152, 13184, 13216, 13248, 13280,  /* 384 - 415*/
                13312, 13344, 13376, 13408, 13440, 13472, 13504, 13536, 13568, 13600, 13632, 13664, 13696, 13728, 13760, 13792, 13824, 13856, 13888, 13920, 13952, 13984, 14016, 14048, 14080, 14112, 14144, 14176, 14208, 14240, 14272, 14304,  /* 416 - 447*/
                14336, 14368, 14400, 14432, 14464, 14496, 14528, 14560, 14592, 14624, 14656, 14688, 14720, 14752, 14784, 14816, 14848, 14880, 14912, 14944, 14976, 15008, 15040, 15072, 15104, 15136, 15168, 15200, 15232, 15264, 15296, 15328,  /* 448 - 479*/
                15360, 15392, 15424, 15456, 15488, 15520, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15808, 15840, 15872, 15904, 15936, 15968, 16000, 16032, 16064, 16096, 16128, 16160, 16192, 16224, 16256, 16288, 16320, 16352,  /* 480 - 511*/
                16384, 16416, 16448, 16480, 16512, 16544, 16576, 16608, 16640, 16672, 16704, 16736, 16768, 16800, 16832, 16864, 16896, 16928, 16960, 16992, 17024, 17056, 17088, 17120, 17152, 17184, 17216, 17248, 17280, 17312, 17344, 17376,  /* 512 - 543*/
                17408, 17440, 17472, 17504, 17536, 17568, 17600, 17632, 17664, 17696, 17728, 17760, 17792, 17824, 17856, 17888, 17920, 17952, 17984, 18016, 18048, 18080, 18112, 18144, 18176, 18208, 18240, 18272, 18304, 18336, 18368, 18400,  /* 544 - 575*/
                18432, 18464, 18496, 18528, 18560, 18592, 18624, 18656, 18688, 18720, 18752, 18784, 18816, 18848, 18880, 18912, 18944, 18976, 19008, 19040, 19072, 19104, 19136, 19168, 19200, 19232, 19264, 19296, 19328, 19360, 19392, 19424,  /* 576 - 607*/
                19456, 19488, 19520, 19552, 19584, 19616, 19648, 19680, 19712, 19744, 19776, 19808, 19840, 19872, 19904, 19936, 19968, 20000, 20032, 20064, 20096, 20128, 20160, 20192, 20224, 20256, 20288, 20320, 20352, 20384, 20416, 20448,  /* 608 - 639*/
                20480, 20512, 20544, 20576, 20608, 20640, 20672, 20704, 20736, 20768, 20800, 20832, 20864, 20896, 20928, 20960, 20992, 21024, 21056, 21088, 21120, 21152, 21184, 21216, 21248, 21280, 21312, 21344, 21376, 21408, 21440, 21472,  /* 640 - 671*/
                21504, 21536, 21568, 21600, 21632, 21664, 21696, 21728, 21760, 21792, 21824, 21856, 21888, 21920, 21952, 21984, 22016, 22048, 22080, 22112, 22144, 22176, 22208, 22240, 22272, 22304, 22336, 22368, 22400, 22432, 22464, 22496,  /* 672 - 703*/
                22528, 22560, 22592, 22624, 22656, 22688, 22720, 22752, 22784, 22816, 22848, 22880, 22912, 22944, 22976, 23008, 23040, 23072, 23104, 23136, 23168, 23200, 23232, 23264, 23296, 23328, 23360, 23392, 23424, 23456, 23488, 23520,  /* 704 - 735*/
                23552, 23584, 23616, 23648, 23680, 23712, 23744, 23776, 23808, 23840, 23872, 23904, 23936, 23968, 24000, 24032, 24064, 24096, 24128, 24160, 24192, 24224, 24256, 24288, 24320, 24352, 24384, 24416, 24448, 24480, 24512, 24544,  /* 736 - 767*/
                24576, 24608, 24640, 24672, 24704, 24736, 24768, 24800, 24832, 24864, 24896, 24928, 24960, 24992, 25024, 25056, 25088, 25120, 25152, 25184, 25216, 25248, 25280, 25312, 25344, 25376, 25408, 25440, 25472, 25504, 25536, 25568,  /* 768 - 799*/
                25600, 25632, 25664, 25696, 25728, 25760, 25792, 25824, 25856, 25888, 25920, 25952, 25984, 26016, 26048, 26080, 26112, 26144, 26176, 26208, 26240, 26272, 26304, 26336, 26368, 26400, 26432, 26464, 26496, 26528, 26560, 26592,  /* 800 - 831*/
                26624, 26656, 26688, 26720, 26752, 26784, 26816, 26848, 26880, 26912, 26944, 26976, 27008, 27040, 27072, 27104, 27136, 27168, 27200, 27232, 27264, 27296, 27328, 27360, 27392, 27424, 27456, 27488, 27520, 27552, 27584, 27616,  /* 832 - 863*/
                27648, 27680, 27712, 27744, 27776, 27808, 27840, 27872, 27904, 27936, 27968, 28000, 28032, 28064, 28096, 28128, 28160, 28192, 28224, 28256, 28288, 28320, 28352, 28384, 28416, 28448, 28480, 28512, 28544, 28576, 28608, 28640,  /* 864 - 895*/
                28672, 28704, 28736, 28768, 28800, 28832, 28864, 28896, 28928, 28960, 28992, 29024, 29056, 29088, 29120, 29152, 29184, 29216, 29248, 29280, 29312, 29344, 29376, 29408, 29440, 29472, 29504, 29536, 29568, 29600, 29632, 29664,  /* 896 - 927*/
                29696, 29728, 29760, 29792, 29824, 29856, 29888, 29920, 29952, 29984, 30016, 30048, 30080, 30112, 30144, 30176, 30208, 30240, 30272, 30304, 30336, 30368, 30400, 30432, 30464, 30496, 30528, 30560, 30592, 30624, 30656, 30688,  /* 928 - 959*/
                30720, 30752, 30784, 30816, 30848, 30880, 30912, 30944, 30976, 31008, 31040, 31072, 31104, 31136, 31168, 31200, 31232, 31264, 31296, 31328, 31360, 31392, 31424, 31456, 31488, 31520, 31552, 31584, 31616, 31648, 31680, 31712,  /* 960 - 991*/
                31744, 31776, 31808, 31840, 31872, 31904, 31936, 31968, 32000, 32032, 32064, 32096, 32128, 32160, 32192, 32224, 32256, 32288, 32320, 32352, 32384, 32416, 32448, 32480, 32512, 32544, 32576, 32608, 32640, 32672, 32704, 32736,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768, 800, 832, 864, 896, 928, 960, 992,  /* 0 - 31*/
                1024, 1056, 1088, 1120, 1152, 1184, 1216, 1248, 1280, 1312, 1344, 1376, 1408, 1440, 1472, 1504, 1536, 1568, 1600, 1632, 1664, 1696, 1728, 1760, 1792, 1824, 1856, 1888, 1920, 1952, 1984, 2016,  /* 32 - 63*/
                2048, 2080, 2112, 2144, 2176, 2208, 2240, 2272, 2304, 2336, 2368, 2400, 2432, 2464, 2496, 2528, 2560, 2592, 2624, 2656, 2688, 2720, 2752, 2784, 2816, 2848, 2880, 2912, 2944, 2976, 3008, 3040,  /* 64 - 95*/
                3072, 3104, 3136, 3168, 3200, 3232, 3264, 3296, 3328, 3360, 3392, 3424, 3456, 3488, 3520, 3552, 3584, 3616, 3648, 3680, 3712, 3744, 3776, 3808, 3840, 3872, 3904, 3936, 3968, 4000, 4032, 4064,  /* 96 - 127*/
                4096, 4128, 4160, 4192, 4224, 4256, 4288, 4320, 4352, 4384, 4416, 4448, 4480, 4512, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800, 4832, 4864, 4896, 4928, 4960, 4992, 5024, 5056, 5088,  /* 128 - 159*/
                5120, 5152, 5184, 5216, 5248, 5280, 5312, 5344, 5376, 5408, 5440, 5472, 5504, 5536, 5568, 5600, 5632, 5664, 5696, 5728, 5760, 5792, 5824, 5856, 5888, 5920, 5952, 5984, 6016, 6048, 6080, 6112,  /* 160 - 191*/
                6144, 6176, 6208, 6240, 6272, 6304, 6336, 6368, 6400, 6432, 6464, 6496, 6528, 6560, 6592, 6624, 6656, 6688, 6720, 6752, 6784, 6816, 6848, 6880, 6912, 6944, 6976, 7008, 7040, 7072, 7104, 7136,  /* 192 - 223*/
                7168, 7200, 7232, 7264, 7296, 7328, 7360, 7392, 7424, 7456, 7488, 7520, 7552, 7584, 7616, 7648, 7680, 7712, 7744, 7776, 7808, 7840, 7872, 7904, 7936, 7968, 8000, 8032, 8064, 8096, 8128, 8160,  /* 224 - 255*/
                8192, 8224, 8256, 8288, 8320, 8352, 8384, 8416, 8448, 8480, 8512, 8544, 8576, 8608, 8640, 8672, 8704, 8736, 8768, 8800, 8832, 8864, 8896, 8928, 8960, 8992, 9024, 9056, 9088, 9120, 9152, 9184,  /* 256 - 287*/
                9216, 9248, 9280, 9312, 9344, 9376, 9408, 9440, 9472, 9504, 9536, 9568, 9600, 9632, 9664, 9696, 9728, 9760, 9792, 9824, 9856, 9888, 9920, 9952, 9984, 10016, 10048, 10080, 10112, 10144, 10176, 10208,  /* 288 - 319*/
                10240, 10272, 10304, 10336, 10368, 10400, 10432, 10464, 10496, 10528, 10560, 10592, 10624, 10656, 10688, 10720, 10752, 10784, 10816, 10848, 10880, 10912, 10944, 10976, 11008, 11040, 11072, 11104, 11136, 11168, 11200, 11232,  /* 320 - 351*/
                11264, 11296, 11328, 11360, 11392, 11424, 11456, 11488, 11520, 11552, 11584, 11616, 11648, 11680, 11712, 11744, 11776, 11808, 11840, 11872, 11904, 11936, 11968, 12000, 12032, 12064, 12096, 12128, 12160, 12192, 12224, 12256,  /* 352 - 383*/
                12288, 12320, 12352, 12384, 12416, 12448, 12480, 12512, 12544, 12576, 12608, 12640, 12672, 12704, 12736, 12768, 12800, 12832, 12864, 12896, 12928, 12960, 12992, 13024, 13056, 13088, 13120, 13152, 13184, 13216, 13248, 13280,  /* 384 - 415*/
                13312, 13344, 13376, 13408, 13440, 13472, 13504, 13536, 13568, 13600, 13632, 13664, 13696, 13728, 13760, 13792, 13824, 13856, 13888, 13920, 13952, 13984, 14016, 14048, 14080, 14112, 14144, 14176, 14208, 14240, 14272, 14304,  /* 416 - 447*/
                14336, 14368, 14400, 14432, 14464, 14496, 14528, 14560, 14592, 14624, 14656, 14688, 14720, 14752, 14784, 14816, 14848, 14880, 14912, 14944, 14976, 15008, 15040, 15072, 15104, 15136, 15168, 15200, 15232, 15264, 15296, 15328,  /* 448 - 479*/
                15360, 15392, 15424, 15456, 15488, 15520, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15808, 15840, 15872, 15904, 15936, 15968, 16000, 16032, 16064, 16096, 16128, 16160, 16192, 16224, 16256, 16288, 16320, 16352,  /* 480 - 511*/
                16384, 16416, 16448, 16480, 16512, 16544, 16576, 16608, 16640, 16672, 16704, 16736, 16768, 16800, 16832, 16864, 16896, 16928, 16960, 16992, 17024, 17056, 17088, 17120, 17152, 17184, 17216, 17248, 17280, 17312, 17344, 17376,  /* 512 - 543*/
                17408, 17440, 17472, 17504, 17536, 17568, 17600, 17632, 17664, 17696, 17728, 17760, 17792, 17824, 17856, 17888, 17920, 17952, 17984, 18016, 18048, 18080, 18112, 18144, 18176, 18208, 18240, 18272, 18304, 18336, 18368, 18400,  /* 544 - 575*/
                18432, 18464, 18496, 18528, 18560, 18592, 18624, 18656, 18688, 18720, 18752, 18784, 18816, 18848, 18880, 18912, 18944, 18976, 19008, 19040, 19072, 19104, 19136, 19168, 19200, 19232, 19264, 19296, 19328, 19360, 19392, 19424,  /* 576 - 607*/
                19456, 19488, 19520, 19552, 19584, 19616, 19648, 19680, 19712, 19744, 19776, 19808, 19840, 19872, 19904, 19936, 19968, 20000, 20032, 20064, 20096, 20128, 20160, 20192, 20224, 20256, 20288, 20320, 20352, 20384, 20416, 20448,  /* 608 - 639*/
                20480, 20512, 20544, 20576, 20608, 20640, 20672, 20704, 20736, 20768, 20800, 20832, 20864, 20896, 20928, 20960, 20992, 21024, 21056, 21088, 21120, 21152, 21184, 21216, 21248, 21280, 21312, 21344, 21376, 21408, 21440, 21472,  /* 640 - 671*/
                21504, 21536, 21568, 21600, 21632, 21664, 21696, 21728, 21760, 21792, 21824, 21856, 21888, 21920, 21952, 21984, 22016, 22048, 22080, 22112, 22144, 22176, 22208, 22240, 22272, 22304, 22336, 22368, 22400, 22432, 22464, 22496,  /* 672 - 703*/
                22528, 22560, 22592, 22624, 22656, 22688, 22720, 22752, 22784, 22816, 22848, 22880, 22912, 22944, 22976, 23008, 23040, 23072, 23104, 23136, 23168, 23200, 23232, 23264, 23296, 23328, 23360, 23392, 23424, 23456, 23488, 23520,  /* 704 - 735*/
                23552, 23584, 23616, 23648, 23680, 23712, 23744, 23776, 23808, 23840, 23872, 23904, 23936, 23968, 24000, 24032, 24064, 24096, 24128, 24160, 24192, 24224, 24256, 24288, 24320, 24352, 24384, 24416, 24448, 24480, 24512, 24544,  /* 736 - 767*/
                24576, 24608, 24640, 24672, 24704, 24736, 24768, 24800, 24832, 24864, 24896, 24928, 24960, 24992, 25024, 25056, 25088, 25120, 25152, 25184, 25216, 25248, 25280, 25312, 25344, 25376, 25408, 25440, 25472, 25504, 25536, 25568,  /* 768 - 799*/
                25600, 25632, 25664, 25696, 25728, 25760, 25792, 25824, 25856, 25888, 25920, 25952, 25984, 26016, 26048, 26080, 26112, 26144, 26176, 26208, 26240, 26272, 26304, 26336, 26368, 26400, 26432, 26464, 26496, 26528, 26560, 26592,  /* 800 - 831*/
                26624, 26656, 26688, 26720, 26752, 26784, 26816, 26848, 26880, 26912, 26944, 26976, 27008, 27040, 27072, 27104, 27136, 27168, 27200, 27232, 27264, 27296, 27328, 27360, 27392, 27424, 27456, 27488, 27520, 27552, 27584, 27616,  /* 832 - 863*/
                27648, 27680, 27712, 27744, 27776, 27808, 27840, 27872, 27904, 27936, 27968, 28000, 28032, 28064, 28096, 28128, 28160, 28192, 28224, 28256, 28288, 28320, 28352, 28384, 28416, 28448, 28480, 28512, 28544, 28576, 28608, 28640,  /* 864 - 895*/
                28672, 28704, 28736, 28768, 28800, 28832, 28864, 28896, 28928, 28960, 28992, 29024, 29056, 29088, 29120, 29152, 29184, 29216, 29248, 29280, 29312, 29344, 29376, 29408, 29440, 29472, 29504, 29536, 29568, 29600, 29632, 29664,  /* 896 - 927*/
                29696, 29728, 29760, 29792, 29824, 29856, 29888, 29920, 29952, 29984, 30016, 30048, 30080, 30112, 30144, 30176, 30208, 30240, 30272, 30304, 30336, 30368, 30400, 30432, 30464, 30496, 30528, 30560, 30592, 30624, 30656, 30688,  /* 928 - 959*/
                30720, 30752, 30784, 30816, 30848, 30880, 30912, 30944, 30976, 31008, 31040, 31072, 31104, 31136, 31168, 31200, 31232, 31264, 31296, 31328, 31360, 31392, 31424, 31456, 31488, 31520, 31552, 31584, 31616, 31648, 31680, 31712,  /* 960 - 991*/
                31744, 31776, 31808, 31840, 31872, 31904, 31936, 31968, 32000, 32032, 32064, 32096, 32128, 32160, 32192, 32224, 32256, 32288, 32320, 32352, 32384, 32416, 32448, 32480, 32512, 32544, 32576, 32608, 32640, 32672, 32704, 32736,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448, 480, 512, 544, 576, 608, 640, 672, 704, 736, 768, 800, 832, 864, 896, 928, 960, 992,  /* 0 - 31*/
                1024, 1056, 1088, 1120, 1152, 1184, 1216, 1248, 1280, 1312, 1344, 1376, 1408, 1440, 1472, 1504, 1536, 1568, 1600, 1632, 1664, 1696, 1728, 1760, 1792, 1824, 1856, 1888, 1920, 1952, 1984, 2016,  /* 32 - 63*/
                2048, 2080, 2112, 2144, 2176, 2208, 2240, 2272, 2304, 2336, 2368, 2400, 2432, 2464, 2496, 2528, 2560, 2592, 2624, 2656, 2688, 2720, 2752, 2784, 2816, 2848, 2880, 2912, 2944, 2976, 3008, 3040,  /* 64 - 95*/
                3072, 3104, 3136, 3168, 3200, 3232, 3264, 3296, 3328, 3360, 3392, 3424, 3456, 3488, 3520, 3552, 3584, 3616, 3648, 3680, 3712, 3744, 3776, 3808, 3840, 3872, 3904, 3936, 3968, 4000, 4032, 4064,  /* 96 - 127*/
                4096, 4128, 4160, 4192, 4224, 4256, 4288, 4320, 4352, 4384, 4416, 4448, 4480, 4512, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800, 4832, 4864, 4896, 4928, 4960, 4992, 5024, 5056, 5088,  /* 128 - 159*/
                5120, 5152, 5184, 5216, 5248, 5280, 5312, 5344, 5376, 5408, 5440, 5472, 5504, 5536, 5568, 5600, 5632, 5664, 5696, 5728, 5760, 5792, 5824, 5856, 5888, 5920, 5952, 5984, 6016, 6048, 6080, 6112,  /* 160 - 191*/
                6144, 6176, 6208, 6240, 6272, 6304, 6336, 6368, 6400, 6432, 6464, 6496, 6528, 6560, 6592, 6624, 6656, 6688, 6720, 6752, 6784, 6816, 6848, 6880, 6912, 6944, 6976, 7008, 7040, 7072, 7104, 7136,  /* 192 - 223*/
                7168, 7200, 7232, 7264, 7296, 7328, 7360, 7392, 7424, 7456, 7488, 7520, 7552, 7584, 7616, 7648, 7680, 7712, 7744, 7776, 7808, 7840, 7872, 7904, 7936, 7968, 8000, 8032, 8064, 8096, 8128, 8160,  /* 224 - 255*/
                8192, 8224, 8256, 8288, 8320, 8352, 8384, 8416, 8448, 8480, 8512, 8544, 8576, 8608, 8640, 8672, 8704, 8736, 8768, 8800, 8832, 8864, 8896, 8928, 8960, 8992, 9024, 9056, 9088, 9120, 9152, 9184,  /* 256 - 287*/
                9216, 9248, 9280, 9312, 9344, 9376, 9408, 9440, 9472, 9504, 9536, 9568, 9600, 9632, 9664, 9696, 9728, 9760, 9792, 9824, 9856, 9888, 9920, 9952, 9984, 10016, 10048, 10080, 10112, 10144, 10176, 10208,  /* 288 - 319*/
                10240, 10272, 10304, 10336, 10368, 10400, 10432, 10464, 10496, 10528, 10560, 10592, 10624, 10656, 10688, 10720, 10752, 10784, 10816, 10848, 10880, 10912, 10944, 10976, 11008, 11040, 11072, 11104, 11136, 11168, 11200, 11232,  /* 320 - 351*/
                11264, 11296, 11328, 11360, 11392, 11424, 11456, 11488, 11520, 11552, 11584, 11616, 11648, 11680, 11712, 11744, 11776, 11808, 11840, 11872, 11904, 11936, 11968, 12000, 12032, 12064, 12096, 12128, 12160, 12192, 12224, 12256,  /* 352 - 383*/
                12288, 12320, 12352, 12384, 12416, 12448, 12480, 12512, 12544, 12576, 12608, 12640, 12672, 12704, 12736, 12768, 12800, 12832, 12864, 12896, 12928, 12960, 12992, 13024, 13056, 13088, 13120, 13152, 13184, 13216, 13248, 13280,  /* 384 - 415*/
                13312, 13344, 13376, 13408, 13440, 13472, 13504, 13536, 13568, 13600, 13632, 13664, 13696, 13728, 13760, 13792, 13824, 13856, 13888, 13920, 13952, 13984, 14016, 14048, 14080, 14112, 14144, 14176, 14208, 14240, 14272, 14304,  /* 416 - 447*/
                14336, 14368, 14400, 14432, 14464, 14496, 14528, 14560, 14592, 14624, 14656, 14688, 14720, 14752, 14784, 14816, 14848, 14880, 14912, 14944, 14976, 15008, 15040, 15072, 15104, 15136, 15168, 15200, 15232, 15264, 15296, 15328,  /* 448 - 479*/
                15360, 15392, 15424, 15456, 15488, 15520, 15552, 15584, 15616, 15648, 15680, 15712, 15744, 15776, 15808, 15840, 15872, 15904, 15936, 15968, 16000, 16032, 16064, 16096, 16128, 16160, 16192, 16224, 16256, 16288, 16320, 16352,  /* 480 - 511*/
                16384, 16416, 16448, 16480, 16512, 16544, 16576, 16608, 16640, 16672, 16704, 16736, 16768, 16800, 16832, 16864, 16896, 16928, 16960, 16992, 17024, 17056, 17088, 17120, 17152, 17184, 17216, 17248, 17280, 17312, 17344, 17376,  /* 512 - 543*/
                17408, 17440, 17472, 17504, 17536, 17568, 17600, 17632, 17664, 17696, 17728, 17760, 17792, 17824, 17856, 17888, 17920, 17952, 17984, 18016, 18048, 18080, 18112, 18144, 18176, 18208, 18240, 18272, 18304, 18336, 18368, 18400,  /* 544 - 575*/
                18432, 18464, 18496, 18528, 18560, 18592, 18624, 18656, 18688, 18720, 18752, 18784, 18816, 18848, 18880, 18912, 18944, 18976, 19008, 19040, 19072, 19104, 19136, 19168, 19200, 19232, 19264, 19296, 19328, 19360, 19392, 19424,  /* 576 - 607*/
                19456, 19488, 19520, 19552, 19584, 19616, 19648, 19680, 19712, 19744, 19776, 19808, 19840, 19872, 19904, 19936, 19968, 20000, 20032, 20064, 20096, 20128, 20160, 20192, 20224, 20256, 20288, 20320, 20352, 20384, 20416, 20448,  /* 608 - 639*/
                20480, 20512, 20544, 20576, 20608, 20640, 20672, 20704, 20736, 20768, 20800, 20832, 20864, 20896, 20928, 20960, 20992, 21024, 21056, 21088, 21120, 21152, 21184, 21216, 21248, 21280, 21312, 21344, 21376, 21408, 21440, 21472,  /* 640 - 671*/
                21504, 21536, 21568, 21600, 21632, 21664, 21696, 21728, 21760, 21792, 21824, 21856, 21888, 21920, 21952, 21984, 22016, 22048, 22080, 22112, 22144, 22176, 22208, 22240, 22272, 22304, 22336, 22368, 22400, 22432, 22464, 22496,  /* 672 - 703*/
                22528, 22560, 22592, 22624, 22656, 22688, 22720, 22752, 22784, 22816, 22848, 22880, 22912, 22944, 22976, 23008, 23040, 23072, 23104, 23136, 23168, 23200, 23232, 23264, 23296, 23328, 23360, 23392, 23424, 23456, 23488, 23520,  /* 704 - 735*/
                23552, 23584, 23616, 23648, 23680, 23712, 23744, 23776, 23808, 23840, 23872, 23904, 23936, 23968, 24000, 24032, 24064, 24096, 24128, 24160, 24192, 24224, 24256, 24288, 24320, 24352, 24384, 24416, 24448, 24480, 24512, 24544,  /* 736 - 767*/
                24576, 24608, 24640, 24672, 24704, 24736, 24768, 24800, 24832, 24864, 24896, 24928, 24960, 24992, 25024, 25056, 25088, 25120, 25152, 25184, 25216, 25248, 25280, 25312, 25344, 25376, 25408, 25440, 25472, 25504, 25536, 25568,  /* 768 - 799*/
                25600, 25632, 25664, 25696, 25728, 25760, 25792, 25824, 25856, 25888, 25920, 25952, 25984, 26016, 26048, 26080, 26112, 26144, 26176, 26208, 26240, 26272, 26304, 26336, 26368, 26400, 26432, 26464, 26496, 26528, 26560, 26592,  /* 800 - 831*/
                26624, 26656, 26688, 26720, 26752, 26784, 26816, 26848, 26880, 26912, 26944, 26976, 27008, 27040, 27072, 27104, 27136, 27168, 27200, 27232, 27264, 27296, 27328, 27360, 27392, 27424, 27456, 27488, 27520, 27552, 27584, 27616,  /* 832 - 863*/
                27648, 27680, 27712, 27744, 27776, 27808, 27840, 27872, 27904, 27936, 27968, 28000, 28032, 28064, 28096, 28128, 28160, 28192, 28224, 28256, 28288, 28320, 28352, 28384, 28416, 28448, 28480, 28512, 28544, 28576, 28608, 28640,  /* 864 - 895*/
                28672, 28704, 28736, 28768, 28800, 28832, 28864, 28896, 28928, 28960, 28992, 29024, 29056, 29088, 29120, 29152, 29184, 29216, 29248, 29280, 29312, 29344, 29376, 29408, 29440, 29472, 29504, 29536, 29568, 29600, 29632, 29664,  /* 896 - 927*/
                29696, 29728, 29760, 29792, 29824, 29856, 29888, 29920, 29952, 29984, 30016, 30048, 30080, 30112, 30144, 30176, 30208, 30240, 30272, 30304, 30336, 30368, 30400, 30432, 30464, 30496, 30528, 30560, 30592, 30624, 30656, 30688,  /* 928 - 959*/
                30720, 30752, 30784, 30816, 30848, 30880, 30912, 30944, 30976, 31008, 31040, 31072, 31104, 31136, 31168, 31200, 31232, 31264, 31296, 31328, 31360, 31392, 31424, 31456, 31488, 31520, 31552, 31584, 31616, 31648, 31680, 31712,  /* 960 - 991*/
                31744, 31776, 31808, 31840, 31872, 31904, 31936, 31968, 32000, 32032, 32064, 32096, 32128, 32160, 32192, 32224, 32256, 32288, 32320, 32352, 32384, 32416, 32448, 32480, 32512, 32544, 32576, 32608, 32640, 32672, 32704, 32736,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 235, 367, 476, 573, 662, 744, 822, 895, 966, 1033, 1099, 1162, 1223, 1283, 1341, 1398, 1453, 1508, 1561, 1613, 1665, 1715, 1765, 1814, 1862, 1909, 1956, 2003, 2048, 2093, 2138,  /* 0 - 31*/
                2182, 2226, 2269, 2311, 2354, 2395, 2437, 2478, 2518, 2559, 2599, 2638, 2678, 2716, 2755, 2793, 2832, 2869, 2907, 2944, 2981, 3018, 3054, 3090, 3126, 3162, 3198, 3233, 3268, 3303, 3338, 3372,  /* 32 - 63*/
                3406, 3441, 3474, 3508, 3542, 3575, 3608, 3641, 3674, 3707, 3739, 3772, 3804, 3836, 3868, 3900, 3932, 3963, 3994, 4026, 4057, 4088, 4119, 4149, 4180, 4210, 4241, 4271, 4301, 4331, 4361, 4391,  /* 64 - 95*/
                4420, 4450, 4479, 4508, 4538, 4567, 4596, 4625, 4654, 4682, 4711, 4740, 4769, 4797, 4826, 4855, 4884, 4912, 4941, 4970, 4999, 5027, 5056, 5085, 5114, 5142, 5171, 5200, 5229, 5257, 5286, 5315,  /* 96 - 127*/
                5344, 5372, 5401, 5430, 5459, 5487, 5516, 5545, 5574, 5602, 5631, 5660, 5689, 5717, 5746, 5775, 5804, 5832, 5861, 5890, 5919, 5947, 5976, 6005, 6034, 6062, 6091, 6120, 6149, 6177, 6206, 6235,  /* 128 - 159*/
                6264, 6292, 6321, 6350, 6379, 6407, 6436, 6465, 6494, 6522, 6551, 6580, 6609, 6637, 6666, 6695, 6724, 6752, 6781, 6810, 6839, 6867, 6896, 6925, 6954, 6982, 7011, 7040, 7069, 7097, 7126, 7155,  /* 160 - 191*/
                7184, 7212, 7241, 7270, 7299, 7327, 7356, 7385, 7414, 7442, 7471, 7500, 7529, 7557, 7586, 7615, 7644, 7672, 7701, 7730, 7759, 7787, 7816, 7845, 7874, 7902, 7931, 7960, 7989, 8017, 8046, 8075,  /* 192 - 223*/
                8104, 8132, 8161, 8190, 8219, 8247, 8276, 8305, 8334, 8362, 8391, 8420, 8449, 8477, 8506, 8535, 8564, 8592, 8621, 8650, 8679, 8707, 8736, 8765, 8794, 8822, 8851, 8880, 8909, 8937, 8966, 8995,  /* 224 - 255*/
                9024, 9052, 9081, 9110, 9139, 9167, 9196, 9225, 9254, 9282, 9311, 9340, 9369, 9397, 9426, 9455, 9484, 9512, 9541, 9570, 9599, 9627, 9656, 9685, 9714, 9742, 9771, 9800, 9829, 9857, 9886, 9915,  /* 256 - 287*/
                9944, 9972, 10001, 10030, 10059, 10087, 10116, 10145, 10174, 10202, 10231, 10260, 10289, 10317, 10346, 10375, 10404, 10432, 10461, 10490, 10519, 10547, 10576, 10605, 10634, 10662, 10691, 10720, 10749, 10777, 10806, 10835,  /* 288 - 319*/
                10864, 10892, 10921, 10950, 10979, 11007, 11036, 11065, 11094, 11122, 11151, 11180, 11209, 11237, 11266, 11295, 11324, 11352, 11381, 11410, 11439, 11467, 11496, 11525, 11554, 11582, 11611, 11640, 11669, 11697, 11726, 11755,  /* 320 - 351*/
                11784, 11812, 11841, 11870, 11899, 11927, 11956, 11985, 12014, 12042, 12071, 12100, 12129, 12157, 12186, 12215, 12244, 12272, 12301, 12330, 12359, 12387, 12416, 12445, 12474, 12502, 12531, 12560, 12589, 12617, 12646, 12675,  /* 352 - 383*/
                12704, 12732, 12761, 12790, 12819, 12847, 12876, 12905, 12934, 12962, 12991, 13020, 13049, 13077, 13106, 13135, 13164, 13192, 13221, 13250, 13279, 13307, 13336, 13365, 13394, 13422, 13451, 13480, 13509, 13537, 13566, 13595,  /* 384 - 415*/
                13624, 13652, 13681, 13710, 13739, 13767, 13796, 13825, 13854, 13882, 13911, 13940, 13969, 13997, 14026, 14055, 14084, 14112, 14141, 14170, 14199, 14227, 14256, 14285, 14314, 14342, 14371, 14400, 14429, 14457, 14486, 14515,  /* 416 - 447*/
                14544, 14572, 14601, 14630, 14659, 14687, 14716, 14745, 14774, 14802, 14831, 14860, 14889, 14917, 14946, 14975, 15004, 15032, 15061, 15090, 15119, 15147, 15176, 15205, 15234, 15262, 15291, 15320, 15349, 15377, 15406, 15435,  /* 448 - 479*/
                15464, 15492, 15521, 15550, 15579, 15607, 15636, 15665, 15694, 15722, 15751, 15780, 15809, 15837, 15866, 15895, 15924, 15952, 15981, 16010, 16039, 16067, 16096, 16125, 16154, 16182, 16211, 16240, 16269, 16297, 16326, 16355,  /* 480 - 511*/
                16384, 16412, 16441, 16470, 16499, 16527, 16556, 16585, 16614, 16642, 16671, 16700, 16729, 16758, 16787, 16815, 16844, 16873, 16902, 16931, 16960, 16989, 17017, 17046, 17075, 17104, 17133, 17162, 17191, 17220, 17249, 17278,  /* 512 - 543*/
                17306, 17335, 17364, 17393, 17422, 17451, 17480, 17509, 17538, 17567, 17596, 17625, 17654, 17683, 17712, 17741, 17770, 17799, 17828, 17857, 17887, 17916, 17945, 17974, 18003, 18032, 18061, 18090, 18119, 18148, 18177, 18207,  /* 544 - 575*/
                18236, 18265, 18294, 18323, 18352, 18382, 18411, 18440, 18469, 18498, 18528, 18557, 18586, 18615, 18644, 18674, 18703, 18732, 18761, 18791, 18820, 18849, 18879, 18908, 18937, 18966, 18996, 19025, 19054, 19084, 19113, 19142,  /* 576 - 607*/
                19172, 19201, 19231, 19260, 19289, 19319, 19348, 19378, 19407, 19436, 19466, 19495, 19525, 19554, 19584, 19613, 19643, 19672, 19702, 19731, 19761, 19790, 19820, 19849, 19879, 19908, 19938, 19967, 19997, 20026, 20056, 20086,  /* 608 - 639*/
                20115, 20145, 20174, 20204, 20234, 20263, 20293, 20323, 20352, 20382, 20412, 20441, 20471, 20501, 20530, 20560, 20590, 20620, 20649, 20679, 20709, 20739, 20768, 20798, 20828, 20858, 20888, 20917, 20947, 20977, 21007, 21037,  /* 640 - 671*/
                21067, 21096, 21126, 21156, 21186, 21216, 21246, 21276, 21306, 21336, 21366, 21396, 21426, 21456, 21486, 21516, 21546, 21576, 21606, 21636, 21666, 21696, 21726, 21756, 21786, 21816, 21846, 21876, 21906, 21936, 21967, 21997,  /* 672 - 703*/
                22027, 22057, 22087, 22117, 22148, 22178, 22208, 22238, 22268, 22299, 22329, 22359, 22389, 22420, 22450, 22480, 22511, 22541, 22571, 22602, 22632, 22662, 22693, 22723, 22753, 22784, 22814, 22845, 22875, 22906, 22936, 22966,  /* 704 - 735*/
                22997, 23027, 23058, 23088, 23119, 23149, 23180, 23211, 23241, 23272, 23302, 23333, 23363, 23394, 23425, 23455, 23486, 23517, 23547, 23578, 23609, 23639, 23670, 23701, 23732, 23762, 23793, 23824, 23855, 23886, 23916, 23947,  /* 736 - 767*/
                23978, 24009, 24040, 24071, 24102, 24132, 24163, 24194, 24225, 24256, 24287, 24318, 24349, 24380, 24411, 24442, 24473, 24504, 24535, 24566, 24597, 24629, 24660, 24691, 24722, 24753, 24784, 24816, 24847, 24878, 24909, 24940,  /* 768 - 799*/
                24972, 25003, 25034, 25066, 25097, 25128, 25160, 25191, 25222, 25254, 25285, 25317, 25348, 25379, 25411, 25442, 25474, 25505, 25537, 25568, 25600, 25632, 25663, 25695, 25726, 25758, 25790, 25821, 25853, 25885, 25916, 25948,  /* 800 - 831*/
                25980, 26012, 26043, 26075, 26107, 26139, 26171, 26203, 26235, 26266, 26298, 26330, 26362, 26394, 26426, 26458, 26490, 26522, 26554, 26587, 26619, 26651, 26683, 26715, 26747, 26779, 26812, 26844, 26876, 26909, 26941, 26973,  /* 832 - 863*/
                27005, 27038, 27070, 27103, 27135, 27168, 27200, 27232, 27265, 27298, 27330, 27363, 27395, 27428, 27461, 27493, 27526, 27559, 27591, 27624, 27657, 27690, 27723, 27755, 27788, 27821, 27854, 27887, 27920, 27953, 27986, 28019,  /* 864 - 895*/
                28052, 28085, 28118, 28152, 28185, 28218, 28251, 28285, 28318, 28351, 28385, 28418, 28451, 28485, 28518, 28552, 28585, 28619, 28652, 28686, 28720, 28753, 28787, 28821, 28855, 28889, 28922, 28956, 28990, 29024, 29058, 29092,  /* 896 - 927*/
                29126, 29160, 29194, 29229, 29263, 29297, 29331, 29366, 29400, 29434, 29469, 29503, 29538, 29572, 29607, 29642, 29676, 29711, 29746, 29781, 29816, 29851, 29885, 29920, 29956, 29991, 30026, 30061, 30096, 30132, 30167, 30202,  /* 928 - 959*/
                30238, 30273, 30309, 30345, 30380, 30416, 30452, 30488, 30524, 30560, 30596, 30632, 30668, 30705, 30741, 30778, 30814, 30851, 30887, 30924, 30961, 30998, 31035, 31072, 31109, 31147, 31184, 31221, 31259, 31297, 31334, 31372,  /* 960 - 991*/
                31410, 31449, 31487, 31525, 31564, 31603, 31641, 31680, 31720, 31759, 31798, 31838, 31878, 31918, 31958, 31999, 32039, 32081, 32122, 32163, 32205, 32248, 32290, 32333, 32377, 32421, 32466, 32511, 32558, 32606, 32655, 32707,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 96, 168, 232, 293, 350, 405, 459, 511, 561, 611, 660, 707, 754, 800, 846, 891, 936, 979, 1023, 1066, 1108, 1151, 1192, 1234, 1275, 1316, 1356, 1396, 1436, 1476, 1515,  /* 0 - 31*/
                1554, 1593, 1632, 1670, 1709, 1747, 1784, 1822, 1859, 1897, 1934, 1971, 2007, 2044, 2080, 2116, 2152, 2188, 2224, 2260, 2295, 2331, 2366, 2401, 2436, 2471, 2506, 2540, 2575, 2609, 2643, 2677,  /* 32 - 63*/
                2711, 2745, 2779, 2813, 2847, 2880, 2914, 2947, 2980, 3014, 3047, 3080, 3113, 3145, 3178, 3211, 3243, 3276, 3308, 3341, 3373, 3405, 3437, 3469, 3501, 3533, 3565, 3597, 3628, 3660, 3691, 3723,  /* 64 - 95*/
                3754, 3786, 3817, 3848, 3879, 3911, 3942, 3973, 4004, 4034, 4065, 4096, 4127, 4158, 4189, 4220, 4251, 4282, 4312, 4343, 4374, 4405, 4436, 4467, 4498, 4529, 4560, 4591, 4621, 4652, 4683, 4714,  /* 96 - 127*/
                4745, 4776, 4807, 4838, 4869, 4899, 4930, 4961, 4992, 5023, 5054, 5085, 5116, 5147, 5178, 5208, 5239, 5270, 5301, 5332, 5363, 5394, 5425, 5456, 5486, 5517, 5548, 5579, 5610, 5641, 5672, 5703,  /* 128 - 159*/
                5734, 5765, 5795, 5826, 5857, 5888, 5919, 5950, 5981, 6012, 6043, 6073, 6104, 6135, 6166, 6197, 6228, 6259, 6290, 6321, 6352, 6382, 6413, 6444, 6475, 6506, 6537, 6568, 6599, 6630, 6661, 6691,  /* 160 - 191*/
                6722, 6753, 6784, 6815, 6846, 6877, 6908, 6939, 6969, 7000, 7031, 7062, 7093, 7124, 7155, 7186, 7217, 7248, 7278, 7309, 7340, 7371, 7402, 7433, 7464, 7495, 7526, 7556, 7587, 7618, 7649, 7680,  /* 192 - 223*/
                7711, 7742, 7773, 7804, 7835, 7865, 7896, 7927, 7958, 7989, 8020, 8051, 8082, 8113, 8143, 8174, 8205, 8236, 8267, 8298, 8329, 8360, 8391, 8422, 8452, 8483, 8514, 8545, 8576, 8607, 8638, 8669,  /* 224 - 255*/
                8700, 8731, 8761, 8792, 8823, 8854, 8885, 8916, 8947, 8978, 9009, 9039, 9070, 9101, 9132, 9163, 9194, 9225, 9256, 9287, 9318, 9348, 9379, 9410, 9441, 9472, 9503, 9534, 9565, 9596, 9626, 9657,  /* 256 - 287*/
                9688, 9719, 9750, 9781, 9812, 9843, 9874, 9905, 9935, 9966, 9997, 10028, 10059, 10090, 10121, 10152, 10183, 10213, 10244, 10275, 10306, 10337, 10368, 10399, 10430, 10461, 10492, 10522, 10553, 10584, 10615, 10646,  /* 288 - 319*/
                10677, 10708, 10739, 10770, 10800, 10831, 10862, 10893, 10924, 10955, 10986, 11017, 11048, 11079, 11109, 11140, 11171, 11202, 11233, 11264, 11295, 11326, 11357, 11388, 11418, 11449, 11480, 11511, 11542, 11573, 11604, 11635,  /* 320 - 351*/
                11666, 11696, 11727, 11758, 11789, 11820, 11851, 11882, 11913, 11944, 11975, 12005, 12036, 12067, 12098, 12129, 12160, 12191, 12222, 12253, 12283, 12314, 12345, 12376, 12407, 12438, 12469, 12500, 12531, 12562, 12592, 12623,  /* 352 - 383*/
                12654, 12685, 12716, 12747, 12778, 12809, 12840, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13179, 13210, 13241, 13272, 13303, 13334, 13365, 13396, 13427, 13458, 13488, 13519, 13550, 13581, 13612,  /* 384 - 415*/
                13643, 13674, 13705, 13736, 13766, 13797, 13828, 13859, 13890, 13921, 13952, 13983, 14014, 14045, 14075, 14106, 14137, 14168, 14199, 14230, 14261, 14292, 14323, 14353, 14384, 14415, 14446, 14477, 14508, 14539, 14570, 14601,  /* 416 - 447*/
                14632, 14662, 14693, 14724, 14755, 14786, 14817, 14848, 14879, 14910, 14940, 14971, 15002, 15033, 15064, 15095, 15126, 15157, 15188, 15219, 15249, 15280, 15311, 15342, 15373, 15404, 15435, 15466, 15497, 15527, 15558, 15589,  /* 448 - 479*/
                15620, 15651, 15682, 15713, 15744, 15775, 15806, 15836, 15867, 15898, 15929, 15960, 15991, 16022, 16053, 16084, 16115, 16145, 16176, 16207, 16238, 16269, 16300, 16331, 16362, 16393, 16423, 16454, 16485, 16516, 16547, 16578,  /* 480 - 511*/
                16609, 16640, 16671, 16702, 16732, 16763, 16794, 16825, 16856, 16887, 16918, 16949, 16980, 17010, 17041, 17072, 17103, 17134, 17165, 17196, 17227, 17258, 17289, 17319, 17350, 17381, 17412, 17443, 17474, 17505, 17536, 17567,  /* 512 - 543*/
                17597, 17628, 17659, 17690, 17721, 17752, 17783, 17814, 17845, 17876, 17906, 17937, 17968, 17999, 18030, 18061, 18092, 18123, 18154, 18185, 18215, 18246, 18277, 18308, 18339, 18370, 18401, 18432, 18463, 18493, 18524, 18555,  /* 544 - 575*/
                18586, 18617, 18648, 18679, 18710, 18741, 18772, 18802, 18833, 18864, 18895, 18926, 18957, 18988, 19019, 19050, 19080, 19111, 19142, 19173, 19204, 19235, 19266, 19297, 19328, 19359, 19389, 19420, 19451, 19482, 19513, 19544,  /* 576 - 607*/
                19575, 19606, 19637, 19667, 19698, 19729, 19760, 19791, 19822, 19853, 19884, 19915, 19946, 19976, 20007, 20038, 20069, 20100, 20131, 20162, 20193, 20224, 20254, 20285, 20316, 20347, 20378, 20409, 20440, 20471, 20502, 20533,  /* 608 - 639*/
                20563, 20594, 20625, 20656, 20687, 20718, 20749, 20780, 20811, 20842, 20872, 20903, 20934, 20965, 20996, 21027, 21058, 21089, 21120, 21150, 21181, 21212, 21243, 21274, 21305, 21336, 21367, 21398, 21429, 21459, 21490, 21521,  /* 640 - 671*/
                21552, 21583, 21614, 21645, 21676, 21707, 21737, 21768, 21799, 21830, 21861, 21892, 21923, 21954, 21985, 22016, 22046, 22077, 22108, 22139, 22170, 22201, 22232, 22263, 22294, 22324, 22355, 22386, 22417, 22448, 22479, 22510,  /* 672 - 703*/
                22541, 22572, 22603, 22633, 22664, 22695, 22726, 22757, 22788, 22819, 22850, 22881, 22912, 22942, 22973, 23004, 23035, 23066, 23097, 23128, 23159, 23190, 23221, 23252, 23282, 23313, 23344, 23375, 23406, 23437, 23468, 23499,  /* 704 - 735*/
                23530, 23561, 23592, 23623, 23654, 23685, 23716, 23747, 23778, 23809, 23840, 23871, 23902, 23933, 23964, 23995, 24026, 24057, 24088, 24119, 24150, 24181, 24212, 24243, 24274, 24305, 24337, 24368, 24399, 24430, 24461, 24492,  /* 736 - 767*/
                24523, 24554, 24585, 24616, 24647, 24679, 24710, 24741, 24772, 24803, 24834, 24865, 24896, 24928, 24959, 24990, 25021, 25052, 25083, 25115, 25146, 25177, 25208, 25239, 25271, 25302, 25333, 25364, 25395, 25427, 25458, 25489,  /* 768 - 799*/
                25520, 25552, 25583, 25614, 25645, 25677, 25708, 25739, 25770, 25802, 25833, 25864, 25895, 25927, 25958, 25989, 26021, 26052, 26083, 26115, 26146, 26177, 26209, 26240, 26271, 26303, 26334, 26366, 26397, 26428, 26460, 26491,  /* 800 - 831*/
                26522, 26554, 26585, 26617, 26648, 26680, 26711, 26742, 26774, 26805, 26837, 26868, 26900, 26931, 26963, 26994, 27026, 27057, 27089, 27120, 27152, 27183, 27215, 27246, 27278, 27309, 27341, 27373, 27404, 27436, 27467, 27499,  /* 832 - 863*/
                27530, 27562, 27594, 27625, 27657, 27689, 27720, 27752, 27783, 27815, 27847, 27878, 27910, 27942, 27974, 28005, 28037, 28069, 28100, 28132, 28164, 28196, 28227, 28259, 28291, 28323, 28355, 28386, 28418, 28450, 28482, 28514,  /* 864 - 895*/
                28545, 28577, 28609, 28641, 28673, 28705, 28737, 28769, 28801, 28832, 28864, 28896, 28928, 28960, 28992, 29024, 29056, 29088, 29120, 29152, 29184, 29216, 29248, 29280, 29312, 29344, 29377, 29409, 29441, 29473, 29505, 29537,  /* 896 - 927*/
                29569, 29602, 29634, 29666, 29698, 29730, 29763, 29795, 29827, 29859, 29892, 29924, 29956, 29989, 30021, 30053, 30086, 30118, 30150, 30183, 30215, 30248, 30280, 30312, 30345, 30377, 30410, 30442, 30475, 30508, 30540, 30573,  /* 928 - 959*/
                30605, 30638, 30671, 30703, 30736, 30769, 30801, 30834, 30867, 30900, 30932, 30965, 30998, 31031, 31064, 31097, 31130, 31163, 31196, 31229, 31262, 31295, 31328, 31361, 31394, 31427, 31460, 31494, 31527, 31560, 31594, 31627,  /* 960 - 991*/
                31660, 31694, 31727, 31761, 31794, 31828, 31861, 31895, 31929, 31963, 31996, 32030, 32064, 32098, 32132, 32166, 32200, 32235, 32269, 32303, 32338, 32373, 32407, 32442, 32477, 32512, 32548, 32583, 32619, 32655, 32691, 32729,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 143, 239, 321, 397, 467, 534, 598, 659, 719, 777, 833, 887, 941, 994, 1045, 1096, 1145, 1194, 1243, 1290, 1337, 1384, 1429, 1475, 1519, 1564, 1607, 1651, 1694, 1736, 1779,  /* 0 - 31*/
                1820, 1862, 1903, 1944, 1984, 2025, 2065, 2104, 2144, 2183, 2222, 2260, 2299, 2337, 2375, 2412, 2450, 2487, 2524, 2561, 2598, 2634, 2670, 2707, 2743, 2778, 2814, 2849, 2885, 2920, 2955, 2990,  /* 32 - 63*/
                3024, 3059, 3093, 3127, 3162, 3196, 3229, 3263, 3297, 3330, 3364, 3397, 3430, 3463, 3496, 3529, 3561, 3594, 3626, 3658, 3691, 3723, 3755, 3787, 3819, 3850, 3882, 3913, 3945, 3976, 4008, 4039,  /* 64 - 95*/
                4070, 4101, 4132, 4163, 4193, 4224, 4255, 4285, 4316, 4346, 4376, 4407, 4437, 4467, 4498, 4528, 4559, 4589, 4619, 4650, 4680, 4711, 4741, 4771, 4802, 4832, 4862, 4893, 4923, 4954, 4984, 5014,  /* 96 - 127*/
                5045, 5075, 5106, 5136, 5166, 5197, 5227, 5257, 5288, 5318, 5349, 5379, 5409, 5440, 5470, 5501, 5531, 5561, 5592, 5622, 5652, 5683, 5713, 5744, 5774, 5804, 5835, 5865, 5896, 5926, 5956, 5987,  /* 128 - 159*/
                6017, 6047, 6078, 6108, 6139, 6169, 6199, 6230, 6260, 6291, 6321, 6351, 6382, 6412, 6442, 6473, 6503, 6534, 6564, 6594, 6625, 6655, 6686, 6716, 6746, 6777, 6807, 6838, 6868, 6898, 6929, 6959,  /* 160 - 191*/
                6989, 7020, 7050, 7081, 7111, 7141, 7172, 7202, 7233, 7263, 7293, 7324, 7354, 7384, 7415, 7445, 7476, 7506, 7536, 7567, 7597, 7628, 7658, 7688, 7719, 7749, 7779, 7810, 7840, 7871, 7901, 7931,  /* 192 - 223*/
                7962, 7992, 8023, 8053, 8083, 8114, 8144, 8174, 8205, 8235, 8266, 8296, 8326, 8357, 8387, 8418, 8448, 8478, 8509, 8539, 8569, 8600, 8630, 8661, 8691, 8721, 8752, 8782, 8813, 8843, 8873, 8904,  /* 224 - 255*/
                8934, 8965, 8995, 9025, 9056, 9086, 9116, 9147, 9177, 9208, 9238, 9268, 9299, 9329, 9360, 9390, 9420, 9451, 9481, 9511, 9542, 9572, 9603, 9633, 9663, 9694, 9724, 9755, 9785, 9815, 9846, 9876,  /* 256 - 287*/
                9906, 9937, 9967, 9998, 10028, 10058, 10089, 10119, 10150, 10180, 10210, 10241, 10271, 10301, 10332, 10362, 10393, 10423, 10453, 10484, 10514, 10545, 10575, 10605, 10636, 10666, 10696, 10727, 10757, 10788, 10818, 10848,  /* 288 - 319*/
                10879, 10909, 10940, 10970, 11000, 11031, 11061, 11091, 11122, 11152, 11183, 11213, 11243, 11274, 11304, 11335, 11365, 11395, 11426, 11456, 11487, 11517, 11547, 11578, 11608, 11638, 11669, 11699, 11730, 11760, 11790, 11821,  /* 320 - 351*/
                11851, 11882, 11912, 11942, 11973, 12003, 12033, 12064, 12094, 12125, 12155, 12185, 12216, 12246, 12277, 12307, 12337, 12368, 12398, 12428, 12459, 12489, 12520, 12550, 12580, 12611, 12641, 12672, 12702, 12732, 12763, 12793,  /* 352 - 383*/
                12823, 12854, 12884, 12915, 12945, 12975, 13006, 13036, 13067, 13097, 13127, 13158, 13188, 13218, 13249, 13279, 13310, 13340, 13370, 13401, 13431, 13462, 13492, 13522, 13553, 13583, 13614, 13644, 13674, 13705, 13735, 13765,  /* 384 - 415*/
                13796, 13826, 13857, 13887, 13917, 13948, 13978, 14009, 14039, 14069, 14100, 14130, 14160, 14191, 14221, 14252, 14282, 14312, 14343, 14373, 14404, 14434, 14464, 14495, 14525, 14555, 14586, 14616, 14647, 14677, 14707, 14738,  /* 416 - 447*/
                14768, 14799, 14829, 14859, 14890, 14920, 14950, 14981, 15011, 15042, 15072, 15102, 15133, 15163, 15194, 15224, 15254, 15285, 15315, 15345, 15376, 15406, 15437, 15467, 15497, 15528, 15558, 15589, 15619, 15649, 15680, 15710,  /* 448 - 479*/
                15740, 15771, 15801, 15832, 15862, 15892, 15923, 15953, 15984, 16014, 16044, 16075, 16105, 16136, 16166, 16196, 16227, 16257, 16287, 16318, 16348, 16379, 16409, 16439, 16470, 16500, 16531, 16561, 16591, 16622, 16652, 16682,  /* 480 - 511*/
                16713, 16743, 16774, 16804, 16834, 16865, 16895, 16926, 16956, 16986, 17017, 17047, 17077, 17108, 17138, 17169, 17199, 17229, 17260, 17290, 17321, 17351, 17381, 17412, 17442, 17472, 17503, 17533, 17564, 17594, 17624, 17655,  /* 512 - 543*/
                17685, 17716, 17746, 17776, 17807, 17837, 17867, 17898, 17928, 17959, 17989, 18019, 18050, 18080, 18111, 18141, 18171, 18202, 18232, 18263, 18293, 18323, 18354, 18384, 18414, 18445, 18475, 18506, 18536, 18566, 18597, 18627,  /* 544 - 575*/
                18658, 18688, 18718, 18749, 18779, 18809, 18840, 18870, 18901, 18931, 18961, 18992, 19022, 19053, 19083, 19113, 19144, 19174, 19204, 19235, 19265, 19296, 19326, 19356, 19387, 19417, 19448, 19478, 19508, 19539, 19569, 19599,  /* 576 - 607*/
                19630, 19660, 19691, 19721, 19751, 19782, 19812, 19843, 19873, 19903, 19934, 19964, 19994, 20025, 20055, 20086, 20116, 20146, 20177, 20207, 20238, 20268, 20298, 20329, 20359, 20389, 20420, 20450, 20481, 20511, 20541, 20572,  /* 608 - 639*/
                20602, 20633, 20663, 20693, 20724, 20754, 20785, 20815, 20845, 20876, 20906, 20936, 20967, 20997, 21028, 21058, 21088, 21119, 21149, 21180, 21210, 21240, 21271, 21301, 21331, 21362, 21392, 21423, 21453, 21483, 21514, 21544,  /* 640 - 671*/
                21575, 21605, 21635, 21666, 21696, 21726, 21757, 21787, 21818, 21848, 21878, 21909, 21939, 21970, 22000, 22030, 22061, 22091, 22121, 22152, 22182, 22213, 22243, 22273, 22304, 22334, 22365, 22395, 22425, 22456, 22486, 22516,  /* 672 - 703*/
                22547, 22577, 22608, 22638, 22668, 22699, 22729, 22760, 22790, 22820, 22851, 22881, 22912, 22942, 22972, 23003, 23033, 23063, 23094, 23124, 23155, 23185, 23216, 23246, 23276, 23307, 23337, 23368, 23398, 23429, 23459, 23490,  /* 704 - 735*/
                23520, 23551, 23581, 23612, 23642, 23673, 23703, 23734, 23764, 23795, 23825, 23856, 23886, 23917, 23948, 23978, 24009, 24039, 24070, 24101, 24131, 24162, 24192, 24223, 24254, 24284, 24315, 24345, 24376, 24407, 24437, 24468,  /* 736 - 767*/
                24499, 24529, 24560, 24591, 24621, 24652, 24683, 24714, 24744, 24775, 24806, 24836, 24867, 24898, 24929, 24959, 24990, 25021, 25052, 25083, 25113, 25144, 25175, 25206, 25237, 25267, 25298, 25329, 25360, 25391, 25422, 25453,  /* 768 - 799*/
                25483, 25514, 25545, 25576, 25607, 25638, 25669, 25700, 25731, 25762, 25793, 25823, 25854, 25885, 25916, 25947, 25978, 26009, 26040, 26071, 26102, 26133, 26164, 26196, 26227, 26258, 26289, 26320, 26351, 26382, 26413, 26444,  /* 800 - 831*/
                26475, 26506, 26538, 26569, 26600, 26631, 26662, 26693, 26724, 26756, 26787, 26818, 26849, 26881, 26912, 26943, 26974, 27005, 27037, 27068, 27099, 27131, 27162, 27193, 27225, 27256, 27287, 27319, 27350, 27381, 27413, 27444,  /* 832 - 863*/
                27476, 27507, 27538, 27570, 27601, 27633, 27664, 27696, 27727, 27759, 27790, 27822, 27853, 27885, 27916, 27948, 27979, 28011, 28042, 28074, 28106, 28137, 28169, 28201, 28232, 28264, 28296, 28327, 28359, 28391, 28422, 28454,  /* 864 - 895*/
                28486, 28518, 28550, 28581, 28613, 28645, 28677, 28709, 28740, 28772, 28804, 28836, 28868, 28900, 28932, 28964, 28996, 29028, 29060, 29092, 29124, 29156, 29188, 29220, 29252, 29284, 29316, 29348, 29381, 29413, 29445, 29477,  /* 896 - 927*/
                29509, 29542, 29574, 29606, 29638, 29671, 29703, 29735, 29768, 29800, 29833, 29865, 29897, 29930, 29962, 29995, 30027, 30060, 30092, 30125, 30158, 30190, 30223, 30256, 30288, 30321, 30354, 30386, 30419, 30452, 30485, 30518,  /* 928 - 959*/
                30551, 30583, 30616, 30649, 30682, 30715, 30748, 30781, 30815, 30848, 30881, 30914, 30947, 30981, 31014, 31047, 31080, 31114, 31147, 31181, 31214, 31248, 31281, 31315, 31349, 31382, 31416, 31450, 31484, 31518, 31552, 31586,  /* 960 - 991*/
                31620, 31654, 31688, 31722, 31756, 31791, 31825, 31859, 31894, 31929, 31963, 31998, 32033, 32068, 32103, 32138, 32173, 32208, 32244, 32279, 32315, 32351, 32387, 32423, 32460, 32496, 32533, 32571, 32608, 32646, 32685, 32725,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 143, 239, 321, 397, 467, 534, 598, 659, 719, 777, 833, 887, 941, 994, 1045, 1096, 1145, 1194, 1243, 1290, 1337, 1384, 1429, 1475, 1519, 1564, 1607, 1651, 1694, 1736, 1779,  /* 0 - 31*/
                1820, 1862, 1903, 1944, 1984, 2025, 2065, 2104, 2144, 2183, 2222, 2260, 2299, 2337, 2375, 2412, 2450, 2487, 2524, 2561, 2598, 2634, 2670, 2707, 2743, 2778, 2814, 2849, 2885, 2920, 2955, 2990,  /* 32 - 63*/
                3024, 3059, 3093, 3127, 3162, 3196, 3229, 3263, 3297, 3330, 3364, 3397, 3430, 3463, 3496, 3529, 3561, 3594, 3626, 3658, 3691, 3723, 3755, 3787, 3819, 3850, 3882, 3913, 3945, 3976, 4008, 4039,  /* 64 - 95*/
                4070, 4101, 4132, 4163, 4193, 4224, 4255, 4285, 4316, 4346, 4376, 4407, 4437, 4467, 4498, 4528, 4559, 4589, 4619, 4650, 4680, 4711, 4741, 4771, 4802, 4832, 4862, 4893, 4923, 4954, 4984, 5014,  /* 96 - 127*/
                5045, 5075, 5106, 5136, 5166, 5197, 5227, 5257, 5288, 5318, 5349, 5379, 5409, 5440, 5470, 5501, 5531, 5561, 5592, 5622, 5652, 5683, 5713, 5744, 5774, 5804, 5835, 5865, 5896, 5926, 5956, 5987,  /* 128 - 159*/
                6017, 6047, 6078, 6108, 6139, 6169, 6199, 6230, 6260, 6291, 6321, 6351, 6382, 6412, 6442, 6473, 6503, 6534, 6564, 6594, 6625, 6655, 6686, 6716, 6746, 6777, 6807, 6838, 6868, 6898, 6929, 6959,  /* 160 - 191*/
                6989, 7020, 7050, 7081, 7111, 7141, 7172, 7202, 7233, 7263, 7293, 7324, 7354, 7384, 7415, 7445, 7476, 7506, 7536, 7567, 7597, 7628, 7658, 7688, 7719, 7749, 7779, 7810, 7840, 7871, 7901, 7931,  /* 192 - 223*/
                7962, 7992, 8023, 8053, 8083, 8114, 8144, 8174, 8205, 8235, 8266, 8296, 8326, 8357, 8387, 8418, 8448, 8478, 8509, 8539, 8569, 8600, 8630, 8661, 8691, 8721, 8752, 8782, 8813, 8843, 8873, 8904,  /* 224 - 255*/
                8934, 8965, 8995, 9025, 9056, 9086, 9116, 9147, 9177, 9208, 9238, 9268, 9299, 9329, 9360, 9390, 9420, 9451, 9481, 9511, 9542, 9572, 9603, 9633, 9663, 9694, 9724, 9755, 9785, 9815, 9846, 9876,  /* 256 - 287*/
                9906, 9937, 9967, 9998, 10028, 10058, 10089, 10119, 10150, 10180, 10210, 10241, 10271, 10301, 10332, 10362, 10393, 10423, 10453, 10484, 10514, 10545, 10575, 10605, 10636, 10666, 10696, 10727, 10757, 10788, 10818, 10848,  /* 288 - 319*/
                10879, 10909, 10940, 10970, 11000, 11031, 11061, 11091, 11122, 11152, 11183, 11213, 11243, 11274, 11304, 11335, 11365, 11395, 11426, 11456, 11487, 11517, 11547, 11578, 11608, 11638, 11669, 11699, 11730, 11760, 11790, 11821,  /* 320 - 351*/
                11851, 11882, 11912, 11942, 11973, 12003, 12033, 12064, 12094, 12125, 12155, 12185, 12216, 12246, 12277, 12307, 12337, 12368, 12398, 12428, 12459, 12489, 12520, 12550, 12580, 12611, 12641, 12672, 12702, 12732, 12763, 12793,  /* 352 - 383*/
                12823, 12854, 12884, 12915, 12945, 12975, 13006, 13036, 13067, 13097, 13127, 13158, 13188, 13218, 13249, 13279, 13310, 13340, 13370, 13401, 13431, 13462, 13492, 13522, 13553, 13583, 13614, 13644, 13674, 13705, 13735, 13765,  /* 384 - 415*/
                13796, 13826, 13857, 13887, 13917, 13948, 13978, 14009, 14039, 14069, 14100, 14130, 14160, 14191, 14221, 14252, 14282, 14312, 14343, 14373, 14404, 14434, 14464, 14495, 14525, 14555, 14586, 14616, 14647, 14677, 14707, 14738,  /* 416 - 447*/
                14768, 14799, 14829, 14859, 14890, 14920, 14950, 14981, 15011, 15042, 15072, 15102, 15133, 15163, 15194, 15224, 15254, 15285, 15315, 15345, 15376, 15406, 15437, 15467, 15497, 15528, 15558, 15589, 15619, 15649, 15680, 15710,  /* 448 - 479*/
                15740, 15771, 15801, 15832, 15862, 15892, 15923, 15953, 15984, 16014, 16044, 16075, 16105, 16136, 16166, 16196, 16227, 16257, 16287, 16318, 16348, 16379, 16409, 16439, 16470, 16500, 16531, 16561, 16591, 16622, 16652, 16682,  /* 480 - 511*/
                16713, 16743, 16774, 16804, 16834, 16865, 16895, 16926, 16956, 16986, 17017, 17047, 17077, 17108, 17138, 17169, 17199, 17229, 17260, 17290, 17321, 17351, 17381, 17412, 17442, 17472, 17503, 17533, 17564, 17594, 17624, 17655,  /* 512 - 543*/
                17685, 17716, 17746, 17776, 17807, 17837, 17867, 17898, 17928, 17959, 17989, 18019, 18050, 18080, 18111, 18141, 18171, 18202, 18232, 18263, 18293, 18323, 18354, 18384, 18414, 18445, 18475, 18506, 18536, 18566, 18597, 18627,  /* 544 - 575*/
                18658, 18688, 18718, 18749, 18779, 18809, 18840, 18870, 18901, 18931, 18961, 18992, 19022, 19053, 19083, 19113, 19144, 19174, 19204, 19235, 19265, 19296, 19326, 19356, 19387, 19417, 19448, 19478, 19508, 19539, 19569, 19599,  /* 576 - 607*/
                19630, 19660, 19691, 19721, 19751, 19782, 19812, 19843, 19873, 19903, 19934, 19964, 19994, 20025, 20055, 20086, 20116, 20146, 20177, 20207, 20238, 20268, 20298, 20329, 20359, 20389, 20420, 20450, 20481, 20511, 20541, 20572,  /* 608 - 639*/
                20602, 20633, 20663, 20693, 20724, 20754, 20785, 20815, 20845, 20876, 20906, 20936, 20967, 20997, 21028, 21058, 21088, 21119, 21149, 21180, 21210, 21240, 21271, 21301, 21331, 21362, 21392, 21423, 21453, 21483, 21514, 21544,  /* 640 - 671*/
                21575, 21605, 21635, 21666, 21696, 21726, 21757, 21787, 21818, 21848, 21878, 21909, 21939, 21970, 22000, 22030, 22061, 22091, 22121, 22152, 22182, 22213, 22243, 22273, 22304, 22334, 22365, 22395, 22425, 22456, 22486, 22516,  /* 672 - 703*/
                22547, 22577, 22608, 22638, 22668, 22699, 22729, 22760, 22790, 22820, 22851, 22881, 22912, 22942, 22972, 23003, 23033, 23063, 23094, 23124, 23155, 23185, 23216, 23246, 23276, 23307, 23337, 23368, 23398, 23429, 23459, 23490,  /* 704 - 735*/
                23520, 23551, 23581, 23612, 23642, 23673, 23703, 23734, 23764, 23795, 23825, 23856, 23886, 23917, 23948, 23978, 24009, 24039, 24070, 24101, 24131, 24162, 24192, 24223, 24254, 24284, 24315, 24345, 24376, 24407, 24437, 24468,  /* 736 - 767*/
                24499, 24529, 24560, 24591, 24621, 24652, 24683, 24714, 24744, 24775, 24806, 24836, 24867, 24898, 24929, 24959, 24990, 25021, 25052, 25083, 25113, 25144, 25175, 25206, 25237, 25267, 25298, 25329, 25360, 25391, 25422, 25453,  /* 768 - 799*/
                25483, 25514, 25545, 25576, 25607, 25638, 25669, 25700, 25731, 25762, 25793, 25823, 25854, 25885, 25916, 25947, 25978, 26009, 26040, 26071, 26102, 26133, 26164, 26196, 26227, 26258, 26289, 26320, 26351, 26382, 26413, 26444,  /* 800 - 831*/
                26475, 26506, 26538, 26569, 26600, 26631, 26662, 26693, 26724, 26756, 26787, 26818, 26849, 26881, 26912, 26943, 26974, 27005, 27037, 27068, 27099, 27131, 27162, 27193, 27225, 27256, 27287, 27319, 27350, 27381, 27413, 27444,  /* 832 - 863*/
                27476, 27507, 27538, 27570, 27601, 27633, 27664, 27696, 27727, 27759, 27790, 27822, 27853, 27885, 27916, 27948, 27979, 28011, 28042, 28074, 28106, 28137, 28169, 28201, 28232, 28264, 28296, 28327, 28359, 28391, 28422, 28454,  /* 864 - 895*/
                28486, 28518, 28550, 28581, 28613, 28645, 28677, 28709, 28740, 28772, 28804, 28836, 28868, 28900, 28932, 28964, 28996, 29028, 29060, 29092, 29124, 29156, 29188, 29220, 29252, 29284, 29316, 29348, 29381, 29413, 29445, 29477,  /* 896 - 927*/
                29509, 29542, 29574, 29606, 29638, 29671, 29703, 29735, 29768, 29800, 29833, 29865, 29897, 29930, 29962, 29995, 30027, 30060, 30092, 30125, 30158, 30190, 30223, 30256, 30288, 30321, 30354, 30386, 30419, 30452, 30485, 30518,  /* 928 - 959*/
                30551, 30583, 30616, 30649, 30682, 30715, 30748, 30781, 30815, 30848, 30881, 30914, 30947, 30981, 31014, 31047, 31080, 31114, 31147, 31181, 31214, 31248, 31281, 31315, 31349, 31382, 31416, 31450, 31484, 31518, 31552, 31586,  /* 960 - 991*/
                31620, 31654, 31688, 31722, 31756, 31791, 31825, 31859, 31894, 31929, 31963, 31998, 32033, 32068, 32103, 32138, 32173, 32208, 32244, 32279, 32315, 32351, 32387, 32423, 32460, 32496, 32533, 32571, 32608, 32646, 32685, 32725,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 157, 258, 344, 423, 496, 565, 630, 693, 754, 813, 870, 926, 980, 1033, 1085, 1136, 1187, 1236, 1284, 1332, 1379, 1426, 1472, 1517, 1562, 1606, 1650, 1693, 1736, 1779, 1821,  /* 0 - 31*/
                1863, 1904, 1945, 1986, 2026, 2066, 2105, 2145, 2184, 2223, 2261, 2299, 2337, 2375, 2413, 2450, 2487, 2524, 2560, 2597, 2633, 2669, 2705, 2740, 2776, 2811, 2846, 2881, 2916, 2950, 2985, 3019,  /* 32 - 63*/
                3053, 3087, 3121, 3154, 3188, 3221, 3254, 3287, 3320, 3353, 3386, 3418, 3451, 3483, 3515, 3547, 3579, 3611, 3643, 3675, 3706, 3737, 3769, 3800, 3831, 3862, 3893, 3924, 3954, 3985, 4015, 4046,  /* 64 - 95*/
                4076, 4106, 4137, 4167, 4197, 4226, 4256, 4286, 4316, 4345, 4375, 4404, 4434, 4463, 4493, 4523, 4552, 4582, 4611, 4641, 4670, 4700, 4730, 4759, 4789, 4818, 4848, 4877, 4907, 4937, 4966, 4996,  /* 96 - 127*/
                5025, 5055, 5085, 5114, 5144, 5173, 5203, 5232, 5262, 5292, 5321, 5351, 5380, 5410, 5439, 5469, 5499, 5528, 5558, 5587, 5617, 5647, 5676, 5706, 5735, 5765, 5794, 5824, 5854, 5883, 5913, 5942,  /* 128 - 159*/
                5972, 6001, 6031, 6061, 6090, 6120, 6149, 6179, 6209, 6238, 6268, 6297, 6327, 6356, 6386, 6416, 6445, 6475, 6504, 6534, 6563, 6593, 6623, 6652, 6682, 6711, 6741, 6771, 6800, 6830, 6859, 6889,  /* 160 - 191*/
                6918, 6948, 6978, 7007, 7037, 7066, 7096, 7125, 7155, 7185, 7214, 7244, 7273, 7303, 7333, 7362, 7392, 7421, 7451, 7480, 7510, 7540, 7569, 7599, 7628, 7658, 7687, 7717, 7747, 7776, 7806, 7835,  /* 192 - 223*/
                7865, 7894, 7924, 7954, 7983, 8013, 8042, 8072, 8102, 8131, 8161, 8190, 8220, 8249, 8279, 8309, 8338, 8368, 8397, 8427, 8456, 8486, 8516, 8545, 8575, 8604, 8634, 8664, 8693, 8723, 8752, 8782,  /* 224 - 255*/
                8811, 8841, 8871, 8900, 8930, 8959, 8989, 9018, 9048, 9078, 9107, 9137, 9166, 9196, 9226, 9255, 9285, 9314, 9344, 9373, 9403, 9433, 9462, 9492, 9521, 9551, 9580, 9610, 9640, 9669, 9699, 9728,  /* 256 - 287*/
                9758, 9788, 9817, 9847, 9876, 9906, 9935, 9965, 9995, 10024, 10054, 10083, 10113, 10142, 10172, 10202, 10231, 10261, 10290, 10320, 10350, 10379, 10409, 10438, 10468, 10497, 10527, 10557, 10586, 10616, 10645, 10675,  /* 288 - 319*/
                10704, 10734, 10764, 10793, 10823, 10852, 10882, 10911, 10941, 10971, 11000, 11030, 11059, 11089, 11119, 11148, 11178, 11207, 11237, 11266, 11296, 11326, 11355, 11385, 11414, 11444, 11473, 11503, 11533, 11562, 11592, 11621,  /* 320 - 351*/
                11651, 11681, 11710, 11740, 11769, 11799, 11828, 11858, 11888, 11917, 11947, 11976, 12006, 12035, 12065, 12095, 12124, 12154, 12183, 12213, 12243, 12272, 12302, 12331, 12361, 12390, 12420, 12450, 12479, 12509, 12538, 12568,  /* 352 - 383*/
                12597, 12627, 12657, 12686, 12716, 12745, 12775, 12805, 12834, 12864, 12893, 12923, 12952, 12982, 13012, 13041, 13071, 13100, 13130, 13159, 13189, 13219, 13248, 13278, 13307, 13337, 13367, 13396, 13426, 13455, 13485, 13514,  /* 384 - 415*/
                13544, 13574, 13603, 13633, 13662, 13692, 13721, 13751, 13781, 13810, 13840, 13869, 13899, 13928, 13958, 13988, 14017, 14047, 14076, 14106, 14136, 14165, 14195, 14224, 14254, 14283, 14313, 14343, 14372, 14402, 14431, 14461,  /* 416 - 447*/
                14490, 14520, 14550, 14579, 14609, 14638, 14668, 14698, 14727, 14757, 14786, 14816, 14845, 14875, 14905, 14934, 14964, 14993, 15023, 15052, 15082, 15112, 15141, 15171, 15200, 15230, 15260, 15289, 15319, 15348, 15378, 15407,  /* 448 - 479*/
                15437, 15467, 15496, 15526, 15555, 15585, 15614, 15644, 15674, 15703, 15733, 15762, 15792, 15822, 15851, 15881, 15910, 15940, 15969, 15999, 16029, 16058, 16088, 16117, 16147, 16176, 16206, 16236, 16265, 16295, 16324, 16354,  /* 480 - 511*/
                16384, 16413, 16443, 16472, 16502, 16531, 16561, 16591, 16620, 16650, 16680, 16709, 16739, 16768, 16798, 16828, 16857, 16887, 16917, 16946, 16976, 17006, 17035, 17065, 17095, 17124, 17154, 17184, 17213, 17243, 17273, 17303,  /* 512 - 543*/
                17332, 17362, 17392, 17421, 17451, 17481, 17511, 17540, 17570, 17600, 17630, 17660, 17689, 17719, 17749, 17779, 17808, 17838, 17868, 17898, 17928, 17958, 17987, 18017, 18047, 18077, 18107, 18137, 18166, 18196, 18226, 18256,  /* 544 - 575*/
                18286, 18316, 18346, 18376, 18405, 18435, 18465, 18495, 18525, 18555, 18585, 18615, 18645, 18675, 18705, 18735, 18765, 18795, 18825, 18855, 18885, 18914, 18944, 18974, 19004, 19034, 19064, 19095, 19125, 19155, 19185, 19215,  /* 576 - 607*/
                19245, 19275, 19305, 19335, 19365, 19395, 19425, 19455, 19485, 19515, 19545, 19576, 19606, 19636, 19666, 19696, 19726, 19756, 19786, 19817, 19847, 19877, 19907, 19937, 19967, 19998, 20028, 20058, 20088, 20118, 20149, 20179,  /* 608 - 639*/
                20209, 20239, 20270, 20300, 20330, 20360, 20391, 20421, 20451, 20481, 20512, 20542, 20572, 20603, 20633, 20663, 20694, 20724, 20754, 20785, 20815, 20845, 20876, 20906, 20936, 20967, 20997, 21027, 21058, 21088, 21119, 21149,  /* 640 - 671*/
                21180, 21210, 21240, 21271, 21301, 21332, 21362, 21393, 21423, 21454, 21484, 21515, 21545, 21576, 21606, 21637, 21667, 21698, 21728, 21759, 21789, 21820, 21851, 21881, 21912, 21942, 21973, 22004, 22034, 22065, 22095, 22126,  /* 672 - 703*/
                22157, 22187, 22218, 22249, 22279, 22310, 22341, 22371, 22402, 22433, 22464, 22494, 22525, 22556, 22587, 22617, 22648, 22679, 22710, 22740, 22771, 22802, 22833, 22864, 22894, 22925, 22956, 22987, 23018, 23049, 23080, 23110,  /* 704 - 735*/
                23141, 23172, 23203, 23234, 23265, 23296, 23327, 23358, 23389, 23420, 23451, 23482, 23513, 23544, 23575, 23606, 23637, 23668, 23699, 23730, 23761, 23792, 23823, 23854, 23885, 23916, 23947, 23979, 24010, 24041, 24072, 24103,  /* 736 - 767*/
                24134, 24166, 24197, 24228, 24259, 24290, 24322, 24353, 24384, 24415, 24447, 24478, 24509, 24540, 24572, 24603, 24634, 24666, 24697, 24728, 24760, 24791, 24822, 24854, 24885, 24917, 24948, 24979, 25011, 25042, 25074, 25105,  /* 768 - 799*/
                25137, 25168, 25200, 25231, 25263, 25294, 25326, 25357, 25389, 25421, 25452, 25484, 25515, 25547, 25579, 25610, 25642, 25674, 25705, 25737, 25769, 25800, 25832, 25864, 25896, 25927, 25959, 25991, 26023, 26055, 26086, 26118,  /* 800 - 831*/
                26150, 26182, 26214, 26246, 26278, 26310, 26341, 26373, 26405, 26437, 26469, 26501, 26533, 26565, 26597, 26629, 26661, 26694, 26726, 26758, 26790, 26822, 26854, 26886, 26918, 26951, 26983, 27015, 27047, 27080, 27112, 27144,  /* 832 - 863*/
                27176, 27209, 27241, 27273, 27306, 27338, 27370, 27403, 27435, 27468, 27500, 27533, 27565, 27598, 27630, 27663, 27695, 27728, 27760, 27793, 27826, 27858, 27891, 27924, 27956, 27989, 28022, 28054, 28087, 28120, 28153, 28186,  /* 864 - 895*/
                28218, 28251, 28284, 28317, 28350, 28383, 28416, 28449, 28482, 28515, 28548, 28581, 28614, 28647, 28680, 28713, 28747, 28780, 28813, 28846, 28880, 28913, 28946, 28980, 29013, 29046, 29080, 29113, 29147, 29180, 29214, 29247,  /* 896 - 927*/
                29281, 29314, 29348, 29381, 29415, 29449, 29483, 29516, 29550, 29584, 29618, 29652, 29686, 29719, 29753, 29787, 29821, 29855, 29890, 29924, 29958, 29992, 30026, 30060, 30095, 30129, 30163, 30198, 30232, 30267, 30301, 30336,  /* 928 - 959*/
                30370, 30405, 30440, 30475, 30509, 30544, 30579, 30614, 30649, 30684, 30719, 30754, 30789, 30824, 30860, 30895, 30930, 30966, 31001, 31037, 31072, 31108, 31144, 31179, 31215, 31251, 31287, 31323, 31359, 31395, 31432, 31468,  /* 960 - 991*/
                31504, 31541, 31578, 31614, 31651, 31688, 31725, 31762, 31799, 31837, 31874, 31912, 31950, 31987, 32025, 32064, 32102, 32141, 32179, 32218, 32257, 32297, 32336, 32376, 32417, 32458, 32499, 32540, 32583, 32626, 32670, 32716,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 157, 258, 344, 423, 496, 565, 630, 693, 754, 813, 870, 926, 980, 1033, 1085, 1136, 1187, 1236, 1284, 1332, 1379, 1426, 1472, 1517, 1562, 1606, 1650, 1693, 1736, 1779, 1821,  /* 0 - 31*/
                1863, 1904, 1945, 1986, 2026, 2066, 2105, 2145, 2184, 2223, 2261, 2299, 2337, 2375, 2413, 2450, 2487, 2524, 2560, 2597, 2633, 2669, 2705, 2740, 2776, 2811, 2846, 2881, 2916, 2950, 2985, 3019,  /* 32 - 63*/
                3053, 3087, 3121, 3154, 3188, 3221, 3254, 3287, 3320, 3353, 3386, 3418, 3451, 3483, 3515, 3547, 3579, 3611, 3643, 3675, 3706, 3737, 3769, 3800, 3831, 3862, 3893, 3924, 3954, 3985, 4015, 4046,  /* 64 - 95*/
                4076, 4106, 4137, 4167, 4197, 4226, 4256, 4286, 4316, 4345, 4375, 4404, 4434, 4463, 4493, 4523, 4552, 4582, 4611, 4641, 4670, 4700, 4730, 4759, 4789, 4818, 4848, 4877, 4907, 4937, 4966, 4996,  /* 96 - 127*/
                5025, 5055, 5085, 5114, 5144, 5173, 5203, 5232, 5262, 5292, 5321, 5351, 5380, 5410, 5439, 5469, 5499, 5528, 5558, 5587, 5617, 5647, 5676, 5706, 5735, 5765, 5794, 5824, 5854, 5883, 5913, 5942,  /* 128 - 159*/
                5972, 6001, 6031, 6061, 6090, 6120, 6149, 6179, 6209, 6238, 6268, 6297, 6327, 6356, 6386, 6416, 6445, 6475, 6504, 6534, 6563, 6593, 6623, 6652, 6682, 6711, 6741, 6771, 6800, 6830, 6859, 6889,  /* 160 - 191*/
                6918, 6948, 6978, 7007, 7037, 7066, 7096, 7125, 7155, 7185, 7214, 7244, 7273, 7303, 7333, 7362, 7392, 7421, 7451, 7480, 7510, 7540, 7569, 7599, 7628, 7658, 7687, 7717, 7747, 7776, 7806, 7835,  /* 192 - 223*/
                7865, 7894, 7924, 7954, 7983, 8013, 8042, 8072, 8102, 8131, 8161, 8190, 8220, 8249, 8279, 8309, 8338, 8368, 8397, 8427, 8456, 8486, 8516, 8545, 8575, 8604, 8634, 8664, 8693, 8723, 8752, 8782,  /* 224 - 255*/
                8811, 8841, 8871, 8900, 8930, 8959, 8989, 9018, 9048, 9078, 9107, 9137, 9166, 9196, 9226, 9255, 9285, 9314, 9344, 9373, 9403, 9433, 9462, 9492, 9521, 9551, 9580, 9610, 9640, 9669, 9699, 9728,  /* 256 - 287*/
                9758, 9788, 9817, 9847, 9876, 9906, 9935, 9965, 9995, 10024, 10054, 10083, 10113, 10142, 10172, 10202, 10231, 10261, 10290, 10320, 10350, 10379, 10409, 10438, 10468, 10497, 10527, 10557, 10586, 10616, 10645, 10675,  /* 288 - 319*/
                10704, 10734, 10764, 10793, 10823, 10852, 10882, 10911, 10941, 10971, 11000, 11030, 11059, 11089, 11119, 11148, 11178, 11207, 11237, 11266, 11296, 11326, 11355, 11385, 11414, 11444, 11473, 11503, 11533, 11562, 11592, 11621,  /* 320 - 351*/
                11651, 11681, 11710, 11740, 11769, 11799, 11828, 11858, 11888, 11917, 11947, 11976, 12006, 12035, 12065, 12095, 12124, 12154, 12183, 12213, 12243, 12272, 12302, 12331, 12361, 12390, 12420, 12450, 12479, 12509, 12538, 12568,  /* 352 - 383*/
                12597, 12627, 12657, 12686, 12716, 12745, 12775, 12805, 12834, 12864, 12893, 12923, 12952, 12982, 13012, 13041, 13071, 13100, 13130, 13159, 13189, 13219, 13248, 13278, 13307, 13337, 13367, 13396, 13426, 13455, 13485, 13514,  /* 384 - 415*/
                13544, 13574, 13603, 13633, 13662, 13692, 13721, 13751, 13781, 13810, 13840, 13869, 13899, 13928, 13958, 13988, 14017, 14047, 14076, 14106, 14136, 14165, 14195, 14224, 14254, 14283, 14313, 14343, 14372, 14402, 14431, 14461,  /* 416 - 447*/
                14490, 14520, 14550, 14579, 14609, 14638, 14668, 14698, 14727, 14757, 14786, 14816, 14845, 14875, 14905, 14934, 14964, 14993, 15023, 15052, 15082, 15112, 15141, 15171, 15200, 15230, 15260, 15289, 15319, 15348, 15378, 15407,  /* 448 - 479*/
                15437, 15467, 15496, 15526, 15555, 15585, 15614, 15644, 15674, 15703, 15733, 15762, 15792, 15822, 15851, 15881, 15910, 15940, 15969, 15999, 16029, 16058, 16088, 16117, 16147, 16176, 16206, 16236, 16265, 16295, 16324, 16354,  /* 480 - 511*/
                16384, 16413, 16443, 16472, 16502, 16531, 16561, 16591, 16620, 16650, 16680, 16709, 16739, 16768, 16798, 16828, 16857, 16887, 16917, 16946, 16976, 17006, 17035, 17065, 17095, 17124, 17154, 17184, 17213, 17243, 17273, 17303,  /* 512 - 543*/
                17332, 17362, 17392, 17421, 17451, 17481, 17511, 17540, 17570, 17600, 17630, 17660, 17689, 17719, 17749, 17779, 17808, 17838, 17868, 17898, 17928, 17958, 17987, 18017, 18047, 18077, 18107, 18137, 18166, 18196, 18226, 18256,  /* 544 - 575*/
                18286, 18316, 18346, 18376, 18405, 18435, 18465, 18495, 18525, 18555, 18585, 18615, 18645, 18675, 18705, 18735, 18765, 18795, 18825, 18855, 18885, 18914, 18944, 18974, 19004, 19034, 19064, 19095, 19125, 19155, 19185, 19215,  /* 576 - 607*/
                19245, 19275, 19305, 19335, 19365, 19395, 19425, 19455, 19485, 19515, 19545, 19576, 19606, 19636, 19666, 19696, 19726, 19756, 19786, 19817, 19847, 19877, 19907, 19937, 19967, 19998, 20028, 20058, 20088, 20118, 20149, 20179,  /* 608 - 639*/
                20209, 20239, 20270, 20300, 20330, 20360, 20391, 20421, 20451, 20481, 20512, 20542, 20572, 20603, 20633, 20663, 20694, 20724, 20754, 20785, 20815, 20845, 20876, 20906, 20936, 20967, 20997, 21027, 21058, 21088, 21119, 21149,  /* 640 - 671*/
                21180, 21210, 21240, 21271, 21301, 21332, 21362, 21393, 21423, 21454, 21484, 21515, 21545, 21576, 21606, 21637, 21667, 21698, 21728, 21759, 21789, 21820, 21851, 21881, 21912, 21942, 21973, 22004, 22034, 22065, 22095, 22126,  /* 672 - 703*/
                22157, 22187, 22218, 22249, 22279, 22310, 22341, 22371, 22402, 22433, 22464, 22494, 22525, 22556, 22587, 22617, 22648, 22679, 22710, 22740, 22771, 22802, 22833, 22864, 22894, 22925, 22956, 22987, 23018, 23049, 23080, 23110,  /* 704 - 735*/
                23141, 23172, 23203, 23234, 23265, 23296, 23327, 23358, 23389, 23420, 23451, 23482, 23513, 23544, 23575, 23606, 23637, 23668, 23699, 23730, 23761, 23792, 23823, 23854, 23885, 23916, 23947, 23979, 24010, 24041, 24072, 24103,  /* 736 - 767*/
                24134, 24166, 24197, 24228, 24259, 24290, 24322, 24353, 24384, 24415, 24447, 24478, 24509, 24540, 24572, 24603, 24634, 24666, 24697, 24728, 24760, 24791, 24822, 24854, 24885, 24917, 24948, 24979, 25011, 25042, 25074, 25105,  /* 768 - 799*/
                25137, 25168, 25200, 25231, 25263, 25294, 25326, 25357, 25389, 25421, 25452, 25484, 25515, 25547, 25579, 25610, 25642, 25674, 25705, 25737, 25769, 25800, 25832, 25864, 25896, 25927, 25959, 25991, 26023, 26055, 26086, 26118,  /* 800 - 831*/
                26150, 26182, 26214, 26246, 26278, 26310, 26341, 26373, 26405, 26437, 26469, 26501, 26533, 26565, 26597, 26629, 26661, 26694, 26726, 26758, 26790, 26822, 26854, 26886, 26918, 26951, 26983, 27015, 27047, 27080, 27112, 27144,  /* 832 - 863*/
                27176, 27209, 27241, 27273, 27306, 27338, 27370, 27403, 27435, 27468, 27500, 27533, 27565, 27598, 27630, 27663, 27695, 27728, 27760, 27793, 27826, 27858, 27891, 27924, 27956, 27989, 28022, 28054, 28087, 28120, 28153, 28186,  /* 864 - 895*/
                28218, 28251, 28284, 28317, 28350, 28383, 28416, 28449, 28482, 28515, 28548, 28581, 28614, 28647, 28680, 28713, 28747, 28780, 28813, 28846, 28880, 28913, 28946, 28980, 29013, 29046, 29080, 29113, 29147, 29180, 29214, 29247,  /* 896 - 927*/
                29281, 29314, 29348, 29381, 29415, 29449, 29483, 29516, 29550, 29584, 29618, 29652, 29686, 29719, 29753, 29787, 29821, 29855, 29890, 29924, 29958, 29992, 30026, 30060, 30095, 30129, 30163, 30198, 30232, 30267, 30301, 30336,  /* 928 - 959*/
                30370, 30405, 30440, 30475, 30509, 30544, 30579, 30614, 30649, 30684, 30719, 30754, 30789, 30824, 30860, 30895, 30930, 30966, 31001, 31037, 31072, 31108, 31144, 31179, 31215, 31251, 31287, 31323, 31359, 31395, 31432, 31468,  /* 960 - 991*/
                31504, 31541, 31578, 31614, 31651, 31688, 31725, 31762, 31799, 31837, 31874, 31912, 31950, 31987, 32025, 32064, 32102, 32141, 32179, 32218, 32257, 32297, 32336, 32376, 32417, 32458, 32499, 32540, 32583, 32626, 32670, 32716,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 157, 258, 344, 423, 496, 565, 630, 693, 754, 813, 870, 926, 980, 1033, 1085, 1136, 1187, 1236, 1284, 1332, 1379, 1426, 1472, 1517, 1562, 1606, 1650, 1693, 1736, 1779, 1821,  /* 0 - 31*/
                1863, 1904, 1945, 1986, 2026, 2066, 2105, 2145, 2184, 2223, 2261, 2299, 2337, 2375, 2413, 2450, 2487, 2524, 2560, 2597, 2633, 2669, 2705, 2740, 2776, 2811, 2846, 2881, 2916, 2950, 2985, 3019,  /* 32 - 63*/
                3053, 3087, 3121, 3154, 3188, 3221, 3254, 3287, 3320, 3353, 3386, 3418, 3451, 3483, 3515, 3547, 3579, 3611, 3643, 3675, 3706, 3737, 3769, 3800, 3831, 3862, 3893, 3924, 3954, 3985, 4015, 4046,  /* 64 - 95*/
                4076, 4106, 4137, 4167, 4197, 4226, 4256, 4286, 4316, 4345, 4375, 4404, 4434, 4463, 4493, 4523, 4552, 4582, 4611, 4641, 4670, 4700, 4730, 4759, 4789, 4818, 4848, 4877, 4907, 4937, 4966, 4996,  /* 96 - 127*/
                5025, 5055, 5085, 5114, 5144, 5173, 5203, 5232, 5262, 5292, 5321, 5351, 5380, 5410, 5439, 5469, 5499, 5528, 5558, 5587, 5617, 5647, 5676, 5706, 5735, 5765, 5794, 5824, 5854, 5883, 5913, 5942,  /* 128 - 159*/
                5972, 6001, 6031, 6061, 6090, 6120, 6149, 6179, 6209, 6238, 6268, 6297, 6327, 6356, 6386, 6416, 6445, 6475, 6504, 6534, 6563, 6593, 6623, 6652, 6682, 6711, 6741, 6771, 6800, 6830, 6859, 6889,  /* 160 - 191*/
                6918, 6948, 6978, 7007, 7037, 7066, 7096, 7125, 7155, 7185, 7214, 7244, 7273, 7303, 7333, 7362, 7392, 7421, 7451, 7480, 7510, 7540, 7569, 7599, 7628, 7658, 7687, 7717, 7747, 7776, 7806, 7835,  /* 192 - 223*/
                7865, 7894, 7924, 7954, 7983, 8013, 8042, 8072, 8102, 8131, 8161, 8190, 8220, 8249, 8279, 8309, 8338, 8368, 8397, 8427, 8456, 8486, 8516, 8545, 8575, 8604, 8634, 8664, 8693, 8723, 8752, 8782,  /* 224 - 255*/
                8811, 8841, 8871, 8900, 8930, 8959, 8989, 9018, 9048, 9078, 9107, 9137, 9166, 9196, 9226, 9255, 9285, 9314, 9344, 9373, 9403, 9433, 9462, 9492, 9521, 9551, 9580, 9610, 9640, 9669, 9699, 9728,  /* 256 - 287*/
                9758, 9788, 9817, 9847, 9876, 9906, 9935, 9965, 9995, 10024, 10054, 10083, 10113, 10142, 10172, 10202, 10231, 10261, 10290, 10320, 10350, 10379, 10409, 10438, 10468, 10497, 10527, 10557, 10586, 10616, 10645, 10675,  /* 288 - 319*/
                10704, 10734, 10764, 10793, 10823, 10852, 10882, 10911, 10941, 10971, 11000, 11030, 11059, 11089, 11119, 11148, 11178, 11207, 11237, 11266, 11296, 11326, 11355, 11385, 11414, 11444, 11473, 11503, 11533, 11562, 11592, 11621,  /* 320 - 351*/
                11651, 11681, 11710, 11740, 11769, 11799, 11828, 11858, 11888, 11917, 11947, 11976, 12006, 12035, 12065, 12095, 12124, 12154, 12183, 12213, 12243, 12272, 12302, 12331, 12361, 12390, 12420, 12450, 12479, 12509, 12538, 12568,  /* 352 - 383*/
                12597, 12627, 12657, 12686, 12716, 12745, 12775, 12805, 12834, 12864, 12893, 12923, 12952, 12982, 13012, 13041, 13071, 13100, 13130, 13159, 13189, 13219, 13248, 13278, 13307, 13337, 13367, 13396, 13426, 13455, 13485, 13514,  /* 384 - 415*/
                13544, 13574, 13603, 13633, 13662, 13692, 13721, 13751, 13781, 13810, 13840, 13869, 13899, 13928, 13958, 13988, 14017, 14047, 14076, 14106, 14136, 14165, 14195, 14224, 14254, 14283, 14313, 14343, 14372, 14402, 14431, 14461,  /* 416 - 447*/
                14490, 14520, 14550, 14579, 14609, 14638, 14668, 14698, 14727, 14757, 14786, 14816, 14845, 14875, 14905, 14934, 14964, 14993, 15023, 15052, 15082, 15112, 15141, 15171, 15200, 15230, 15260, 15289, 15319, 15348, 15378, 15407,  /* 448 - 479*/
                15437, 15467, 15496, 15526, 15555, 15585, 15614, 15644, 15674, 15703, 15733, 15762, 15792, 15822, 15851, 15881, 15910, 15940, 15969, 15999, 16029, 16058, 16088, 16117, 16147, 16176, 16206, 16236, 16265, 16295, 16324, 16354,  /* 480 - 511*/
                16384, 16413, 16443, 16472, 16502, 16531, 16561, 16591, 16620, 16650, 16680, 16709, 16739, 16768, 16798, 16828, 16857, 16887, 16917, 16946, 16976, 17006, 17035, 17065, 17095, 17124, 17154, 17184, 17213, 17243, 17273, 17303,  /* 512 - 543*/
                17332, 17362, 17392, 17421, 17451, 17481, 17511, 17540, 17570, 17600, 17630, 17660, 17689, 17719, 17749, 17779, 17808, 17838, 17868, 17898, 17928, 17958, 17987, 18017, 18047, 18077, 18107, 18137, 18166, 18196, 18226, 18256,  /* 544 - 575*/
                18286, 18316, 18346, 18376, 18405, 18435, 18465, 18495, 18525, 18555, 18585, 18615, 18645, 18675, 18705, 18735, 18765, 18795, 18825, 18855, 18885, 18914, 18944, 18974, 19004, 19034, 19064, 19095, 19125, 19155, 19185, 19215,  /* 576 - 607*/
                19245, 19275, 19305, 19335, 19365, 19395, 19425, 19455, 19485, 19515, 19545, 19576, 19606, 19636, 19666, 19696, 19726, 19756, 19786, 19817, 19847, 19877, 19907, 19937, 19967, 19998, 20028, 20058, 20088, 20118, 20149, 20179,  /* 608 - 639*/
                20209, 20239, 20270, 20300, 20330, 20360, 20391, 20421, 20451, 20481, 20512, 20542, 20572, 20603, 20633, 20663, 20694, 20724, 20754, 20785, 20815, 20845, 20876, 20906, 20936, 20967, 20997, 21027, 21058, 21088, 21119, 21149,  /* 640 - 671*/
                21180, 21210, 21240, 21271, 21301, 21332, 21362, 21393, 21423, 21454, 21484, 21515, 21545, 21576, 21606, 21637, 21667, 21698, 21728, 21759, 21789, 21820, 21851, 21881, 21912, 21942, 21973, 22004, 22034, 22065, 22095, 22126,  /* 672 - 703*/
                22157, 22187, 22218, 22249, 22279, 22310, 22341, 22371, 22402, 22433, 22464, 22494, 22525, 22556, 22587, 22617, 22648, 22679, 22710, 22740, 22771, 22802, 22833, 22864, 22894, 22925, 22956, 22987, 23018, 23049, 23080, 23110,  /* 704 - 735*/
                23141, 23172, 23203, 23234, 23265, 23296, 23327, 23358, 23389, 23420, 23451, 23482, 23513, 23544, 23575, 23606, 23637, 23668, 23699, 23730, 23761, 23792, 23823, 23854, 23885, 23916, 23947, 23979, 24010, 24041, 24072, 24103,  /* 736 - 767*/
                24134, 24166, 24197, 24228, 24259, 24290, 24322, 24353, 24384, 24415, 24447, 24478, 24509, 24540, 24572, 24603, 24634, 24666, 24697, 24728, 24760, 24791, 24822, 24854, 24885, 24917, 24948, 24979, 25011, 25042, 25074, 25105,  /* 768 - 799*/
                25137, 25168, 25200, 25231, 25263, 25294, 25326, 25357, 25389, 25421, 25452, 25484, 25515, 25547, 25579, 25610, 25642, 25674, 25705, 25737, 25769, 25800, 25832, 25864, 25896, 25927, 25959, 25991, 26023, 26055, 26086, 26118,  /* 800 - 831*/
                26150, 26182, 26214, 26246, 26278, 26310, 26341, 26373, 26405, 26437, 26469, 26501, 26533, 26565, 26597, 26629, 26661, 26694, 26726, 26758, 26790, 26822, 26854, 26886, 26918, 26951, 26983, 27015, 27047, 27080, 27112, 27144,  /* 832 - 863*/
                27176, 27209, 27241, 27273, 27306, 27338, 27370, 27403, 27435, 27468, 27500, 27533, 27565, 27598, 27630, 27663, 27695, 27728, 27760, 27793, 27826, 27858, 27891, 27924, 27956, 27989, 28022, 28054, 28087, 28120, 28153, 28186,  /* 864 - 895*/
                28218, 28251, 28284, 28317, 28350, 28383, 28416, 28449, 28482, 28515, 28548, 28581, 28614, 28647, 28680, 28713, 28747, 28780, 28813, 28846, 28880, 28913, 28946, 28980, 29013, 29046, 29080, 29113, 29147, 29180, 29214, 29247,  /* 896 - 927*/
                29281, 29314, 29348, 29381, 29415, 29449, 29483, 29516, 29550, 29584, 29618, 29652, 29686, 29719, 29753, 29787, 29821, 29855, 29890, 29924, 29958, 29992, 30026, 30060, 30095, 30129, 30163, 30198, 30232, 30267, 30301, 30336,  /* 928 - 959*/
                30370, 30405, 30440, 30475, 30509, 30544, 30579, 30614, 30649, 30684, 30719, 30754, 30789, 30824, 30860, 30895, 30930, 30966, 31001, 31037, 31072, 31108, 31144, 31179, 31215, 31251, 31287, 31323, 31359, 31395, 31432, 31468,  /* 960 - 991*/
                31504, 31541, 31578, 31614, 31651, 31688, 31725, 31762, 31799, 31837, 31874, 31912, 31950, 31987, 32025, 32064, 32102, 32141, 32179, 32218, 32257, 32297, 32336, 32376, 32417, 32458, 32499, 32540, 32583, 32626, 32670, 32716,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 537, 756, 924, 1065, 1189, 1301, 1405, 1500, 1590, 1675, 1756, 1833, 1907, 1978, 2047, 2113, 2178, 2240, 2301, 2360, 2417, 2474, 2528, 2582, 2635, 2686, 2737, 2787, 2835, 2883, 2930,  /* 0 - 31*/
                2977, 3022, 3067, 3111, 3155, 3198, 3241, 3282, 3324, 3365, 3405, 3445, 3484, 3523, 3561, 3599, 3637, 3674, 3711, 3748, 3784, 3820, 3855, 3890, 3925, 3959, 3994, 4028, 4061, 4094, 4127, 4160,  /* 32 - 63*/
                4193, 4225, 4257, 4289, 4320, 4351, 4383, 4413, 4444, 4474, 4505, 4535, 4564, 4594, 4623, 4652, 4681, 4710, 4739, 4767, 4796, 4824, 4852, 4880, 4907, 4935, 4962, 4989, 5016, 5043, 5070, 5096,  /* 64 - 95*/
                5123, 5149, 5175, 5201, 5227, 5253, 5279, 5304, 5330, 5355, 5380, 5405, 5431, 5456, 5481, 5507, 5532, 5557, 5583, 5608, 5633, 5659, 5684, 5709, 5735, 5760, 5785, 5811, 5836, 5861, 5887, 5912,  /* 96 - 127*/
                5937, 5963, 5988, 6013, 6039, 6064, 6089, 6114, 6140, 6165, 6190, 6216, 6241, 6266, 6292, 6317, 6342, 6368, 6393, 6418, 6444, 6469, 6494, 6520, 6545, 6570, 6596, 6621, 6646, 6672, 6697, 6722,  /* 128 - 159*/
                6748, 6773, 6798, 6824, 6849, 6874, 6899, 6925, 6950, 6975, 7001, 7026, 7051, 7077, 7102, 7127, 7153, 7178, 7203, 7229, 7254, 7279, 7305, 7330, 7355, 7381, 7406, 7431, 7457, 7482, 7507, 7533,  /* 160 - 191*/
                7558, 7583, 7609, 7634, 7659, 7684, 7710, 7735, 7760, 7786, 7811, 7836, 7862, 7887, 7912, 7938, 7963, 7988, 8014, 8039, 8064, 8090, 8115, 8140, 8166, 8191, 8216, 8242, 8267, 8292, 8318, 8343,  /* 192 - 223*/
                8368, 8393, 8419, 8444, 8469, 8495, 8520, 8545, 8571, 8596, 8621, 8647, 8672, 8697, 8723, 8748, 8773, 8799, 8824, 8849, 8875, 8900, 8925, 8951, 8976, 9001, 9027, 9052, 9077, 9103, 9128, 9153,  /* 224 - 255*/
                9178, 9204, 9229, 9254, 9280, 9305, 9330, 9356, 9381, 9406, 9432, 9457, 9482, 9508, 9533, 9558, 9584, 9609, 9634, 9660, 9685, 9710, 9736, 9761, 9786, 9812, 9837, 9862, 9888, 9913, 9938, 9963,  /* 256 - 287*/
                9989, 10014, 10039, 10065, 10090, 10115, 10141, 10166, 10191, 10217, 10242, 10267, 10293, 10318, 10343, 10369, 10394, 10419, 10445, 10470, 10495, 10521, 10546, 10571, 10597, 10622, 10647, 10673, 10698, 10723, 10748, 10774,  /* 288 - 319*/
                10799, 10824, 10850, 10875, 10900, 10926, 10951, 10976, 11002, 11027, 11052, 11078, 11103, 11128, 11154, 11179, 11204, 11230, 11255, 11280, 11306, 11331, 11356, 11382, 11407, 11432, 11457, 11483, 11508, 11533, 11559, 11584,  /* 320 - 351*/
                11609, 11635, 11660, 11685, 11711, 11736, 11761, 11787, 11812, 11837, 11863, 11888, 11913, 11939, 11964, 11989, 12015, 12040, 12065, 12091, 12116, 12141, 12167, 12192, 12217, 12242, 12268, 12293, 12318, 12344, 12369, 12394,  /* 352 - 383*/
                12420, 12445, 12470, 12496, 12521, 12546, 12572, 12597, 12622, 12648, 12673, 12698, 12724, 12749, 12774, 12800, 12825, 12850, 12876, 12901, 12926, 12952, 12977, 13002, 13027, 13053, 13078, 13103, 13129, 13154, 13179, 13205,  /* 384 - 415*/
                13230, 13255, 13281, 13306, 13331, 13357, 13382, 13407, 13433, 13458, 13483, 13509, 13534, 13559, 13585, 13610, 13635, 13661, 13686, 13711, 13737, 13762, 13787, 13812, 13838, 13863, 13888, 13914, 13939, 13964, 13990, 14015,  /* 416 - 447*/
                14040, 14066, 14091, 14116, 14142, 14167, 14192, 14218, 14243, 14268, 14294, 14319, 14344, 14370, 14395, 14420, 14446, 14471, 14496, 14521, 14547, 14572, 14597, 14623, 14648, 14673, 14699, 14724, 14749, 14775, 14800, 14825,  /* 448 - 479*/
                14851, 14876, 14901, 14927, 14952, 14977, 15003, 15028, 15053, 15079, 15104, 15129, 15155, 15180, 15205, 15231, 15256, 15281, 15306, 15332, 15357, 15382, 15408, 15433, 15458, 15484, 15509, 15534, 15560, 15585, 15610, 15636,  /* 480 - 511*/
                15661, 15686, 15712, 15737, 15762, 15788, 15813, 15838, 15864, 15889, 15914, 15940, 15965, 15990, 16016, 16041, 16066, 16091, 16117, 16142, 16167, 16193, 16218, 16243, 16269, 16294, 16319, 16345, 16370, 16395, 16421, 16446,  /* 512 - 543*/
                16471, 16497, 16522, 16547, 16573, 16598, 16623, 16649, 16674, 16699, 16725, 16750, 16775, 16800, 16826, 16851, 16876, 16902, 16927, 16952, 16978, 17003, 17028, 17054, 17079, 17104, 17130, 17155, 17180, 17206, 17231, 17256,  /* 544 - 575*/
                17282, 17307, 17332, 17358, 17383, 17408, 17434, 17459, 17484, 17510, 17535, 17560, 17585, 17611, 17636, 17661, 17687, 17712, 17737, 17763, 17788, 17813, 17839, 17864, 17889, 17915, 17940, 17965, 17991, 18016, 18041, 18067,  /* 576 - 607*/
                18092, 18117, 18143, 18168, 18193, 18219, 18244, 18269, 18295, 18320, 18345, 18370, 18396, 18421, 18446, 18472, 18497, 18522, 18548, 18573, 18598, 18624, 18649, 18674, 18700, 18725, 18750, 18776, 18801, 18826, 18852, 18877,  /* 608 - 639*/
                18902, 18928, 18953, 18978, 19004, 19029, 19054, 19080, 19105, 19130, 19155, 19181, 19206, 19231, 19257, 19282, 19307, 19333, 19358, 19383, 19409, 19434, 19459, 19485, 19510, 19535, 19561, 19586, 19611, 19637, 19662, 19687,  /* 640 - 671*/
                19713, 19738, 19763, 19789, 19814, 19839, 19864, 19890, 19915, 19940, 19966, 19991, 20016, 20042, 20067, 20092, 20118, 20143, 20168, 20194, 20219, 20244, 20270, 20295, 20320, 20346, 20371, 20396, 20422, 20447, 20472, 20498,  /* 672 - 703*/
                20523, 20548, 20574, 20599, 20624, 20649, 20675, 20700, 20725, 20751, 20776, 20801, 20827, 20852, 20877, 20903, 20928, 20953, 20979, 21004, 21029, 21055, 21080, 21105, 21131, 21156, 21181, 21207, 21232, 21257, 21283, 21308,  /* 704 - 735*/
                21333, 21359, 21384, 21409, 21434, 21460, 21485, 21510, 21536, 21561, 21586, 21612, 21637, 21662, 21688, 21713, 21738, 21764, 21789, 21814, 21840, 21865, 21890, 21916, 21941, 21966, 21992, 22017, 22042, 22068, 22093, 22118,  /* 736 - 767*/
                22144, 22169, 22194, 22220, 22245, 22271, 22296, 22322, 22347, 22373, 22399, 22424, 22450, 22476, 22502, 22528, 22554, 22580, 22606, 22632, 22658, 22684, 22710, 22737, 22763, 22789, 22816, 22842, 22868, 22895, 22922, 22948,  /* 768 - 799*/
                22975, 23001, 23028, 23055, 23082, 23109, 23136, 23163, 23190, 23217, 23244, 23271, 23298, 23326, 23353, 23380, 23408, 23435, 23463, 23490, 23518, 23546, 23573, 23601, 23629, 23657, 23685, 23713, 23741, 23769, 23797, 23826,  /* 800 - 831*/
                23854, 23882, 23911, 23939, 23968, 23996, 24025, 24054, 24082, 24111, 24140, 24169, 24198, 24227, 24256, 24286, 24315, 24344, 24374, 24403, 24433, 24462, 24492, 24522, 24551, 24581, 24611, 24641, 24671, 24701, 24732, 24762,  /* 832 - 863*/
                24792, 24823, 24853, 24884, 24915, 24945, 24976, 25007, 25038, 25069, 25100, 25132, 25163, 25194, 25226, 25257, 25289, 25321, 25352, 25384, 25416, 25448, 25481, 25513, 25545, 25578, 25610, 25643, 25676, 25708, 25741, 25774,  /* 864 - 895*/
                25808, 25841, 25874, 25908, 25941, 25975, 26008, 26042, 26076, 26110, 26145, 26179, 26213, 26248, 26282, 26317, 26352, 26387, 26422, 26458, 26493, 26528, 26564, 26600, 26636, 26672, 26708, 26744, 26781, 26817, 26854, 26891,  /* 896 - 927*/
                26928, 26965, 27003, 27040, 27078, 27116, 27154, 27192, 27230, 27268, 27307, 27346, 27385, 27424, 27464, 27503, 27543, 27583, 27623, 27663, 27704, 27745, 27786, 27827, 27868, 27910, 27952, 27994, 28036, 28079, 28121, 28165,  /* 928 - 959*/
                28208, 28252, 28295, 28340, 28384, 28429, 28474, 28519, 28565, 28611, 28657, 28704, 28750, 28798, 28845, 28894, 28942, 28991, 29040, 29090, 29140, 29190, 29241, 29293, 29345, 29397, 29450, 29504, 29558, 29613, 29668, 29724,  /* 960 - 991*/
                29780, 29838, 29896, 29955, 30014, 30075, 30136, 30198, 30261, 30326, 30391, 30457, 30525, 30594, 30665, 30737, 30811, 30886, 30964, 31043, 31126, 31211, 31299, 31390, 31486, 31586, 31692, 31805, 31928, 32063, 32217, 32407,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 894, 1195, 1415, 1596, 1752, 1891, 2016, 2132, 2240, 2340, 2435, 2526, 2611, 2694, 2772, 2848, 2921, 2992, 3060, 3126, 3191, 3254, 3314, 3374, 3432, 3489, 3544, 3598, 3652, 3704, 3755,  /* 0 - 31*/
                3805, 3854, 3902, 3950, 3997, 4043, 4088, 4133, 4177, 4220, 4263, 4305, 4346, 4387, 4428, 4468, 4507, 4546, 4585, 4623, 4661, 4698, 4735, 4771, 4807, 4843, 4878, 4913, 4948, 4982, 5016, 5050,  /* 32 - 63*/
                5083, 5116, 5149, 5181, 5213, 5245, 5277, 5308, 5339, 5370, 5401, 5431, 5461, 5491, 5521, 5550, 5580, 5609, 5637, 5666, 5694, 5723, 5751, 5779, 5806, 5834, 5861, 5888, 5915, 5942, 5968, 5995,  /* 64 - 95*/
                6021, 6047, 6073, 6099, 6125, 6150, 6176, 6201, 6226, 6251, 6276, 6300, 6325, 6349, 6373, 6398, 6422, 6446, 6469, 6493, 6516, 6540, 6563, 6586, 6609, 6632, 6655, 6678, 6701, 6723, 6746, 6768,  /* 96 - 127*/
                6790, 6812, 6834, 6856, 6878, 6900, 6921, 6943, 6964, 6986, 7007, 7028, 7049, 7070, 7091, 7112, 7133, 7153, 7174, 7194, 7215, 7235, 7255, 7275, 7296, 7316, 7336, 7356, 7376, 7396, 7416, 7436,  /* 128 - 159*/
                7456, 7476, 7496, 7516, 7536, 7556, 7576, 7596, 7616, 7636, 7656, 7676, 7697, 7717, 7737, 7757, 7777, 7797, 7817, 7837, 7857, 7877, 7897, 7917, 7937, 7957, 7977, 7997, 8017, 8037, 8057, 8078,  /* 160 - 191*/
                8098, 8118, 8138, 8158, 8178, 8198, 8218, 8238, 8258, 8278, 8298, 8318, 8338, 8358, 8378, 8398, 8418, 8438, 8459, 8479, 8499, 8519, 8539, 8559, 8579, 8599, 8619, 8639, 8659, 8679, 8699, 8719,  /* 192 - 223*/
                8739, 8759, 8779, 8799, 8819, 8840, 8860, 8880, 8900, 8920, 8940, 8960, 8980, 9000, 9020, 9040, 9060, 9080, 9100, 9120, 9140, 9160, 9180, 9200, 9220, 9241, 9261, 9281, 9301, 9321, 9341, 9361,  /* 224 - 255*/
                9381, 9401, 9421, 9441, 9461, 9481, 9501, 9521, 9541, 9561, 9581, 9601, 9622, 9642, 9662, 9682, 9702, 9722, 9742, 9762, 9782, 9802, 9822, 9842, 9862, 9882, 9902, 9922, 9942, 9962, 9982, 10003,  /* 256 - 287*/
                10023, 10043, 10063, 10083, 10103, 10123, 10143, 10163, 10183, 10203, 10223, 10243, 10263, 10283, 10303, 10323, 10343, 10363, 10384, 10404, 10424, 10444, 10464, 10484, 10504, 10524, 10544, 10564, 10584, 10604, 10624, 10644,  /* 288 - 319*/
                10664, 10684, 10704, 10724, 10744, 10764, 10785, 10805, 10825, 10845, 10865, 10885, 10905, 10925, 10945, 10965, 10985, 11005, 11025, 11045, 11065, 11085, 11105, 11125, 11145, 11166, 11186, 11206, 11226, 11246, 11266, 11286,  /* 320 - 351*/
                11306, 11326, 11346, 11366, 11386, 11406, 11426, 11446, 11466, 11486, 11506, 11526, 11547, 11567, 11587, 11607, 11627, 11647, 11667, 11687, 11707, 11727, 11747, 11767, 11787, 11807, 11827, 11847, 11867, 11887, 11907, 11928,  /* 352 - 383*/
                11948, 11968, 11988, 12008, 12028, 12048, 12068, 12088, 12108, 12128, 12148, 12168, 12188, 12208, 12228, 12248, 12268, 12288, 12308, 12329, 12349, 12369, 12389, 12409, 12429, 12449, 12469, 12489, 12509, 12529, 12549, 12569,  /* 384 - 415*/
                12589, 12609, 12629, 12649, 12669, 12689, 12710, 12730, 12750, 12770, 12790, 12810, 12830, 12850, 12870, 12890, 12910, 12930, 12950, 12970, 12990, 13010, 13030, 13050, 13070, 13091, 13111, 13131, 13151, 13171, 13191, 13211,  /* 416 - 447*/
                13231, 13251, 13271, 13291, 13311, 13331, 13351, 13371, 13391, 13411, 13431, 13451, 13472, 13492, 13512, 13532, 13552, 13572, 13592, 13612, 13632, 13652, 13672, 13692, 13712, 13732, 13752, 13772, 13792, 13812, 13832, 13852,  /* 448 - 479*/
                13873, 13893, 13913, 13933, 13953, 13973, 13993, 14013, 14033, 14053, 14073, 14093, 14113, 14133, 14153, 14173, 14193, 14213, 14233, 14254, 14274, 14294, 14314, 14334, 14354, 14374, 14394, 14414, 14434, 14454, 14474, 14494,  /* 480 - 511*/
                14514, 14534, 14554, 14574, 14594, 14614, 14635, 14655, 14675, 14695, 14715, 14735, 14755, 14775, 14795, 14815, 14835, 14855, 14875, 14895, 14915, 14935, 14955, 14975, 14995, 15016, 15036, 15056, 15076, 15096, 15116, 15136,  /* 512 - 543*/
                15156, 15176, 15196, 15216, 15236, 15256, 15276, 15296, 15316, 15336, 15356, 15376, 15396, 15417, 15437, 15457, 15477, 15497, 15517, 15537, 15557, 15577, 15597, 15617, 15637, 15657, 15677, 15697, 15717, 15737, 15757, 15777,  /* 544 - 575*/
                15798, 15818, 15838, 15858, 15878, 15898, 15918, 15938, 15958, 15978, 15998, 16018, 16038, 16058, 16078, 16098, 16118, 16138, 16158, 16179, 16199, 16219, 16239, 16259, 16279, 16299, 16319, 16339, 16359, 16379, 16399, 16419,  /* 576 - 607*/
                16439, 16459, 16479, 16499, 16519, 16539, 16560, 16580, 16600, 16620, 16640, 16660, 16680, 16700, 16720, 16740, 16760, 16780, 16800, 16820, 16840, 16860, 16880, 16900, 16920, 16940, 16961, 16981, 17001, 17021, 17041, 17061,  /* 608 - 639*/
                17081, 17101, 17121, 17141, 17161, 17181, 17201, 17221, 17241, 17261, 17281, 17301, 17321, 17342, 17362, 17382, 17402, 17422, 17442, 17462, 17482, 17502, 17522, 17542, 17562, 17582, 17602, 17622, 17642, 17662, 17682, 17702,  /* 640 - 671*/
                17723, 17743, 17763, 17783, 17803, 17823, 17843, 17863, 17883, 17903, 17923, 17943, 17963, 17983, 18003, 18023, 18043, 18063, 18083, 18104, 18124, 18144, 18164, 18184, 18204, 18224, 18244, 18264, 18284, 18304, 18324, 18344,  /* 672 - 703*/
                18364, 18384, 18404, 18424, 18444, 18464, 18484, 18505, 18525, 18545, 18565, 18585, 18605, 18625, 18645, 18665, 18685, 18705, 18725, 18745, 18765, 18785, 18805, 18825, 18845, 18865, 18886, 18906, 18926, 18946, 18966, 18986,  /* 704 - 735*/
                19006, 19026, 19046, 19066, 19086, 19106, 19126, 19146, 19166, 19186, 19206, 19226, 19246, 19267, 19287, 19307, 19327, 19347, 19367, 19387, 19407, 19427, 19447, 19467, 19487, 19507, 19527, 19547, 19567, 19587, 19607, 19627,  /* 736 - 767*/
                19648, 19668, 19688, 19708, 19728, 19748, 19769, 19789, 19809, 19830, 19850, 19871, 19892, 19912, 19933, 19954, 19975, 19996, 20016, 20037, 20058, 20080, 20101, 20122, 20143, 20165, 20186, 20207, 20229, 20250, 20272, 20294,  /* 768 - 799*/
                20315, 20337, 20359, 20381, 20403, 20425, 20447, 20469, 20491, 20514, 20536, 20558, 20581, 20603, 20626, 20649, 20671, 20694, 20717, 20740, 20763, 20786, 20809, 20832, 20855, 20879, 20902, 20926, 20949, 20973, 20997, 21020,  /* 800 - 831*/
                21044, 21068, 21092, 21116, 21140, 21165, 21189, 21213, 21238, 21262, 21287, 21312, 21337, 21361, 21386, 21411, 21437, 21462, 21487, 21513, 21538, 21564, 21589, 21615, 21641, 21667, 21693, 21719, 21745, 21772, 21798, 21825,  /* 832 - 863*/
                21851, 21878, 21905, 21932, 21959, 21986, 22013, 22041, 22068, 22096, 22124, 22151, 22179, 22207, 22235, 22264, 22292, 22321, 22349, 22378, 22407, 22436, 22465, 22494, 22524, 22553, 22583, 22613, 22643, 22673, 22703, 22733,  /* 864 - 895*/
                22764, 22795, 22825, 22856, 22887, 22919, 22950, 22982, 23013, 23045, 23077, 23110, 23142, 23174, 23207, 23240, 23273, 23306, 23340, 23374, 23407, 23441, 23476, 23510, 23545, 23579, 23614, 23650, 23685, 23721, 23756, 23793,  /* 896 - 927*/
                23829, 23865, 23902, 23939, 23976, 24014, 24052, 24090, 24128, 24167, 24205, 24245, 24284, 24324, 24364, 24404, 24444, 24485, 24526, 24568, 24610, 24652, 24694, 24737, 24780, 24824, 24868, 24912, 24957, 25002, 25048, 25094,  /* 928 - 959*/
                25140, 25187, 25234, 25282, 25330, 25379, 25428, 25478, 25528, 25579, 25631, 25683, 25735, 25789, 25842, 25897, 25952, 26008, 26065, 26122, 26180, 26239, 26299, 26360, 26421, 26484, 26547, 26612, 26678, 26744, 26812, 26881,  /* 960 - 991*/
                26952, 27024, 27097, 27172, 27248, 27326, 27406, 27487, 27571, 27657, 27745, 27836, 27929, 28025, 28124, 28227, 28333, 28444, 28559, 28679, 28805, 28938, 29078, 29227, 29387, 29559, 29747, 29955, 30190, 30464, 30802, 31269,  /* 992 - 1023*/
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
                        4125, 4056, 3988, 3921, 3852, 3784, 3717, 3649, 3580, 3513, 3445, 3377, 3309, 3241, 3173, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106, 3106,  /* 0 - 31*/
                        2947, 2787, 2628, 2469, 2310, 2150, 1991, 1832, 1673, 1514, 1354, 1195, 1036, 877, 717, 558, 795, 1033, 1271, 1509, 1746, 1984, 2222, 2460, 2698, 2936, 3173, 3411, 3649, 3887, 4125, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
            },
            /* 10 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  /* 0 - 31*/
                        1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
            },
            /* 11 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096,  /* 0 - 31*/
                        4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, 4096, /*32 - 62*/
                    },
                },
                /* 1 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 2 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 3 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 4 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 5 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 6 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 7 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 8 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 9 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 10 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 11 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 12 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 13 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 14 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
                /* 15 */
                {
                    /* nHistogramWeight[63] */
                    {
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*32 - 62*/
                    },
                },
            },
        },
        /* tHighFreqEnh[12] */
        {
            /* 0 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    59501, 49326, 40678, 31521, 24398, 15750, 10408, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 1 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 2 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 3 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 4 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 5 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 6 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 7 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 8 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 9 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 10 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                255,
            },
            /* 11 */
            {
                /* nDetailSigmaDis */
                4000,
                /* nDetailSigmaVal */
                4000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                500,
                /* nDetailGainLimitNeg */
                500,
                /* nSlopeStrengthLut[33] */
                {
                    32029, 26942, 22872, 19565, 16767, 13715, 10408, 8628, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
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
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                2000,
            },
            /* 1 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                2000,
            },
            /* 2 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                2000,
            },
            /* 3 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                2560,
                /* nDetailLimitNegLow */
                2560,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                2000,
            },
            /* 4 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 5 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 6 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
            /* 7 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
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
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
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
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
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
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
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
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                32,
                /* nDetailGainNegLow */
                32,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
                /* nSigmaDisPst */
                9000,
                /* nSigmaValPst */
                1000,
            },
        },
        /* tHrAuto */
        {
            /* nHrGrpNum */
            4,
            /* nHrRefVal[4] */
            {1024, 8192, 16384, 32768, /*0 - 3*/},
            /* tHrParam[4] */
            {
                /* 0 */
                {
                    /* nLocalFactor[12] */
                    {90, 100, 112, 112, 128, 128, 128, 128, 128, 128, 128, 112, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {32, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {20, 20, 20, 28, 20, 24, 32, 24, 24, 20, 20, 20, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {16, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {16, 10, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {32, 32, 32, 28, 24, 24, 40, 48, 48, 32, 48, 64, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {32, 32, 32, 28, 24, 24, 40, 48, 48, 32, 48, 64, /*0 - 11*/},
                },
                /* 1 */
                {
                    /* nLocalFactor[12] */
                    {90, 100, 112, 112, 110, 110, 110, 110, 110, 110, 110, 112, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {32, 64, 64, 64, 54, 54, 72, 72, 80, 64, 64, 96, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {20, 20, 20, 28, 32, 28, 32, 24, 24, 20, 20, 20, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {16, 10, 10, 6, 5, 10, 10, 10, 10, 5, 5, 5, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {16, 10, 10, 6, 5, 10, 10, 10, 10, 5, 5, 5, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {32, 64, 64, 128, 160, 84, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {32, 64, 64, 128, 160, 84, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
                },
                /* 2 */
                {
                    /* nLocalFactor[12] */
                    {90, 90, 90, 90, 90, 84, 84, 84, 84, 100, 100, 112, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {32, 64, 80, 108, 90, 64, 64, 64, 64, 64, 64, 128, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {20, 20, 30, 28, 20, 32, 32, 24, 24, 20, 20, 20, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {16, 16, 10, 5, 5, 8, 5, 5, 5, 5, 5, 5, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {16, 16, 10, 5, 5, 8, 5, 5, 5, 5, 5, 5, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {48, 64, 90, 90, 128, 128, 90, 90, 90, 64, 64, 64, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {48, 64, 90, 90, 128, 128, 90, 90, 90, 64, 64, 64, /*0 - 11*/},
                },
                /* 3 */
                {
                    /* nLocalFactor[12] */
                    {90, 90, 90, 80, 85, 100, 100, 84, 84, 90, 90, 100, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {32, 64, 112, 96, 96, 80, 80, 96, 96, 96, 96, 96, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {42, 42, 42, 42, 42, 42, 42, 48, 50, 42, 42, 42, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {20, 20, 40, 16, 16, 40, 40, 24, 24, 20, 20, 20, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {16, 12, 10, 5, 5, 5, 5, 5, 5, 5, 10, 10, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {16, 12, 10, 5, 5, 5, 5, 5, 5, 5, 10, 10, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {32, 48, 96, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {32, 48, 96, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEMOSAIC_PARAM_T demosaic_param_hdr_2x = {
    /* nDemosaicEn */
    1,
    /* nMode */
    0,
    /* nFreqSensitivity */
    12,
    /* nEdgeDirectEstStrengthLut[9] */
    {128, 256, 384, 448, 512, 576, 640, 704, 768, /*0 - 8*/},
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
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
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nEdgeDirectEstStrength[16] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_GIC_PARAM_T gic_param_hdr_2x = {
    /* nGicEnable */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
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
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
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

const static AX_ISP_IQ_FCC_PARAM_T fcc_param_hdr_2x = {
    /* nFcCorEnable */
    0,
    /* nFcCorLimit */
    512,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nFcCorStrength */
        16,
        /* nFcCorSatLut[9] */
        {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
        /* nFcCorSatLevel0 */
        11,
        /* nFcCorSatLevel1 */
        16,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        16,
        /* nRefVal[16] */
        {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
        /* nFcCorStrength[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 15*/},
        /* nFcCorSatLut[16][9] */
        {
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
            {8, 16, 32, 64, 128, 256, 256, 256, 256, /*0 - 8*/},
        },
        /* nFcCorSatLevel0[16] */
        {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,  /*0 - 15*/},
        /* nFcCorSatLevel1[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,  /*0 - 15*/},
    },
};

const static AX_ISP_IQ_DEPURPLE_PARAM_T depurple_param_hdr_2x = {
    /* nEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        0,
        /* nDetEdgeSlopeY */
        4,
        /* nDetEdgeOffsetY */
        -50,
        /* nDetEdgeEnableC */
        0,
        /* nDetEdgeSlopeC */
        10,
        /* nDetEdgeOffsetC */
        -64,
        /* nDetSeledgeThrY */
        9600,
        /* nDetSeledgeSlopeY */
        13,
        /* nDetSeledgeWeight[7] */
        {98, 76, 62, 48, 30, 18, 9, /*0 - 6*/},
        /* nDetMaskStrength */
        256,
        /* nDetMaskStrengthPre */
        64,
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
        {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {0, 0, 96, 128, 128, 128, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[16] */
        {205, 1024, 20480, 102400, 204800, 307200, 409600, 614400, 1024000, 262144, /*0 - 9*/},
        /* nCompStrength[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nCompTargetLuma[16][8] */
        {
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
            {0, 0, 0, 64, 96, 128, 128, 128, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
            {90, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
            {0, 0, 96, 128, 128, 128, /*0 - 5*/},
        },
    },
};

const static AX_ISP_IQ_CC_PARAM_T cc_param_hdr_2x = {
    /* nCcEn */
    1,
    /* nCcMode */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nLumaRatio[2] */
    {37, 14, /*0 - 1*/},
    /* tManualParam */
    {
        /* nCcmCtrlLevel */
        256,
        /* nCcmSat */
        0,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-199, 23, -64, -66, 25, -212, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {-15, -22, -22, -22, -16, -6, -2, 1, 9, 16, 16, 1, 0, -15, -15, -15, /*0 - 15*/},
        /* nXcmHue[16] */
        {43, 0, 0, 0, 0, 0, 0, 0, 0, 0, -149, -149, 0, 0, 0, 0, /*0 - 15*/},
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
            {2300, 2800, 3800, 4150, 5000, 6500, 7500, /*0 - 6*/},
            /* nLuxGainNum */
            5,
            /* nRefValLuxGain[12][5] */
            {
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
                {1024, 8192, 32768, 65536, 182000, /*0 - 4*/},
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
                {5, 0, -4, -8, -8, /*0 - 4*/},
                {10, 0, -4, -8, -8, /*0 - 4*/},
                {10, 0, -4, -8, -8, /*0 - 4*/},
                {5, -8, 0, -4, -8, /*0 - 4*/},
                {0, 0, -4, -8, -8, /*0 - 4*/},
                {-5, -12, -4, -8, -8, /*0 - 4*/},
                {-6, -5, -4, -8, -8, /*0 - 4*/},
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
                    {-173, -29, -114, 53, -50, -594, /*0 - 5*/},
                    {-173, -29, -114, 53, -50, -594, /*0 - 5*/},
                    {-173, -29, -114, 53, -50, -594, /*0 - 5*/},
                    {-173, -29, -114, 53, -50, -594, /*0 - 5*/},
                    {-173, -29, -114, 53, -50, -594, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {-175, 21, -114, 64, 93, -455, /*0 - 5*/},
                    {-175, 21, -114, 64, 93, -455, /*0 - 5*/},
                    {-175, 21, -114, 64, 93, -455, /*0 - 5*/},
                    {-175, 21, -114, 64, 93, -455, /*0 - 5*/},
                    {-175, 21, -114, 64, 93, -455, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-143, 14, -88, 18, 20, -192, /*0 - 5*/},
                    {-143, 14, -88, 18, 20, -192, /*0 - 5*/},
                    {-143, 14, -88, 18, 20, -192, /*0 - 5*/},
                    {-143, 14, -88, 18, 20, -192, /*0 - 5*/},
                    {-143, 14, -88, 18, 20, -192, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-219, 30, -115, 5, 4, -159, /*0 - 5*/},
                    {-219, 30, -115, 5, 4, -159, /*0 - 5*/},
                    {-219, 30, -115, 5, 4, -159, /*0 - 5*/},
                    {-219, 30, -115, 5, 4, -159, /*0 - 5*/},
                    {-219, 30, -115, 5, 4, -159, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-198, 23, -60, -71, 26, -216, /*0 - 5*/},
                    {-198, 23, -60, -71, 26, -216, /*0 - 5*/},
                    {-198, 23, -60, -71, 26, -216, /*0 - 5*/},
                    {-198, 23, -60, -71, 26, -216, /*0 - 5*/},
                    {-198, 23, -60, -71, 26, -216, /*0 - 5*/},
                },
                /* nCcmMatrix 5 */
                {
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                },
                /* nCcmMatrix 6 */
                {
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
                    {-270, -27, -154, -120, -24, -222, /*0 - 5*/},
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
                    {0, -6, -6, -6, 0, 0, 0, -12, -5, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, -6, -6, -6, 0, 0, 0, -12, -5, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, -6, -6, -6, 0, 0, 0, -12, -5, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, -6, -6, -6, 0, 0, 0, -12, -5, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, -6, -6, -6, 0, 0, 0, -12, -5, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {0, 0, 0, 0, -32, -32, -12, -12, -12, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, -4, -4, -4, -4, -4, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, 0, 0, -4, -4, -4, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {0, 0, 0, 0, -16, -12, -8, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, -4, -4, 16, 12, 12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, 0, 0, 16, 12, 12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {-16, -24, -24, -24, -16, -6, -2, 0, 8, 16, 16, 0, 0, -16, -16, -16, /*0 - 15*/},
                    {-8, -16, -16, -16, -24, -16, -8, -8, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -18, -18, -18, -12, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {-16, -24, -24, -24, -20, -8, -6, 0, 0, 0, 0, 0, 0, -16, -16, -16, /*0 - 15*/},
                    {0, -16, -16, -16, -26, -20, -20, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, -4, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -4, -4, -4, 0, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -32, -32, -32, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {0, -16, -16, -16, -32, -16, -8, -8, -8, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, -16, -28, -16, -12, 0, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {0, 0, 0, 0, 0, 0, -640, -640, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, -640, -640, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 320, 320, 0, 0, 0, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 320, 320, 0, 0, 0, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 320, 320, 0, 0, 0, 0, -320, -320, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 320, 320, 0, 0, 0, 0, -320, -320, 0, 0, 0, 0, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -160, -160, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
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

const static AX_ISP_IQ_HS2DLUT_PARAM_T hs2dlut_param_hdr_2x = {
    /* nHs2dLutEn */
    0,
    /* nAutoMode */
    1,
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

const static AX_ISP_IQ_GAMMA_PARAM_T gamma_param_hdr_2x = {
    /* nGammaEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* eGammaMode */
    /* 0:AX_ISP_GAM_USER_GAMMA, 1:AX_ISP_GAM_PRESET_GAMMA */
    AX_ISP_GAM_PRESET_GAMMA,
    /* ePresetGammaType */
    /* 0:AX_ISP_GAM_LINEAR, 1:AX_ISP_GAM_BT709, 2:AX_ISP_GAM_SRGB, 10:AX_ISP_GAM_AX_GAM0, 11:AX_ISP_GAM_AX_GAM1, 12:AX_ISP_GAM_AX_GAM2, 255:AX_ISP_GAM_MODE_CUSTOMER */
    AX_ISP_GAM_AX_GAM2,
    /* tManualParam */
    {
        /* eLutMode */
        /* 0:AX_ISP_GAM_LUT_LINEAR, 1:AX_ISP_GAM_EXPONENTIAL */
        AX_ISP_GAM_EXPONENTIAL,
        /* tGammaLut */
        {
            /* nLut[129] */
            {
                0, 3, 6, 10, 13, 16, 20, 23, 27, 30, 34, 38, 41, 45, 48, 52, 56, 60, 63, 67, 71, 75, 79, 83, 87, 91, 94, 98, 103, 107, 111, 115,  /* 0 - 31*/
                119, 127, 136, 144, 153, 162, 171, 180, 189, 198, 207, 217, 226, 236, 245, 255, 265, 285, 306, 326, 348, 369, 391, 414, 437, 460, 483, 507, 531, 556, 581, 606,  /* 32 - 63*/
                632, 683, 733, 782, 830, 877, 922, 967, 1011, 1055, 1097, 1138, 1179, 1219, 1258, 1297, 1335, 1408, 1479, 1548, 1614, 1679, 1741, 1802, 1860, 1917, 1972, 2026, 2078, 2129, 2178, 2226,  /* 64 - 95*/
                2273, 2362, 2448, 2529, 2606, 2679, 2749, 2816, 2880, 2941, 2999, 3055, 3108, 3159, 3208, 3255, 3300, 3385, 3463, 3534, 3601, 3662, 3719, 3771, 3820, 3864, 3906, 3944, 3979, 4012, 4042, 4070,  /* 96 - 127*/
                4095, /*128 - 128*/
            },
        },
    },
    /* tAutoParam */
    {
        /* eLutMode */
        /* 0:AX_ISP_GAM_LUT_LINEAR, 1:AX_ISP_GAM_EXPONENTIAL */
        AX_ISP_GAM_EXPONENTIAL,
        /* nRefValStart[3] */
        {1024, 10240, 102400, /*0 - 2*/},
        /* nRefValEnd[3] */
        {2048, 15360, 204800, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 3, 6, 10, 13, 16, 20, 23, 27, 30, 34, 38, 41, 45, 48, 52, 56, 60, 63, 67, 71, 75, 79, 83, 87, 91, 94, 98, 103, 107, 111, 115,  /* 0 - 31*/
                    119, 127, 136, 144, 153, 162, 171, 180, 189, 198, 207, 217, 226, 236, 245, 255, 265, 285, 306, 326, 348, 369, 391, 414, 437, 460, 483, 507, 531, 556, 581, 606,  /* 32 - 63*/
                    632, 683, 733, 782, 830, 877, 922, 967, 1011, 1055, 1097, 1138, 1179, 1219, 1258, 1297, 1335, 1408, 1479, 1548, 1614, 1679, 1741, 1802, 1860, 1917, 1972, 2026, 2078, 2129, 2178, 2226,  /* 64 - 95*/
                    2273, 2362, 2448, 2529, 2606, 2679, 2749, 2816, 2880, 2941, 2999, 3055, 3108, 3159, 3208, 3255, 3300, 3385, 3463, 3534, 3601, 3662, 3719, 3771, 3820, 3864, 3906, 3944, 3979, 4012, 4042, 4070,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 3, 6, 10, 13, 16, 20, 23, 27, 30, 34, 38, 41, 45, 48, 52, 56, 60, 63, 67, 71, 75, 79, 83, 87, 91, 94, 98, 103, 107, 111, 115,  /* 0 - 31*/
                    119, 127, 136, 144, 153, 162, 171, 180, 189, 198, 207, 217, 226, 236, 245, 255, 265, 285, 306, 326, 348, 369, 391, 414, 437, 460, 483, 507, 531, 556, 581, 606,  /* 32 - 63*/
                    632, 683, 733, 782, 830, 877, 922, 967, 1011, 1055, 1097, 1138, 1179, 1219, 1258, 1297, 1335, 1408, 1479, 1548, 1614, 1679, 1741, 1802, 1860, 1917, 1972, 2026, 2078, 2129, 2178, 2226,  /* 64 - 95*/
                    2273, 2362, 2448, 2529, 2606, 2679, 2749, 2816, 2880, 2941, 2999, 3055, 3108, 3159, 3208, 3255, 3300, 3385, 3463, 3534, 3601, 3662, 3719, 3771, 3820, 3864, 3906, 3944, 3979, 4012, 4042, 4070,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 3, 6, 10, 13, 16, 20, 23, 27, 30, 34, 38, 41, 45, 48, 52, 56, 60, 63, 67, 71, 75, 79, 83, 87, 91, 94, 98, 103, 107, 111, 115,  /* 0 - 31*/
                    119, 127, 136, 144, 153, 162, 171, 180, 189, 198, 207, 217, 226, 236, 245, 255, 265, 285, 306, 326, 348, 369, 391, 414, 437, 460, 483, 507, 531, 556, 581, 606,  /* 32 - 63*/
                    632, 683, 733, 782, 830, 877, 922, 967, 1011, 1055, 1097, 1138, 1179, 1219, 1258, 1297, 1335, 1408, 1479, 1548, 1614, 1679, 1741, 1802, 1860, 1917, 1972, 2026, 2078, 2129, 2178, 2226,  /* 64 - 95*/
                    2273, 2362, 2448, 2529, 2606, 2679, 2749, 2816, 2880, 2941, 2999, 3055, 3108, 3159, 3208, 3255, 3300, 3385, 3463, 3534, 3601, 3662, 3719, 3771, 3820, 3864, 3906, 3944, 3979, 4012, 4042, 4070,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEHAZE_PARAM_T dehaze_param_hdr_2x = {
    /* nDehazeEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* tGlbParam */
    {
        /* nCalcMode */
        1,
        /* nAirReflect */
        65280,
        /* nSpatialSmoothness */
        2,
        /* nStrengthLimit */
        128,
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
        32,
        /* nGrayDcRatio */
        48,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {205, 1024, 20480, 102400, 204800, 307200, 409600, 614400, 1024000, 2048000, 5120000, /*0 - 10*/},
        /* nEffectStrength[12] */
        {32, 32, 32, 32, 48, 32, 32, 32, 32, 32, 32, /*0 - 10*/},
        /* nGrayDcRatio[12] */
        {20, 20, 48, 64, 64, 48, 48, 48, 48, 32, 32, /*0 - 10*/},
    },
};

const static AX_ISP_IQ_CSC_PARAM_T csc_param_hdr_2x = {
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

const static AX_ISP_IQ_CA_PARAM_T ca_param_hdr_2x = {
    /* nCppEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nCtrlLevel */
        256,
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

const static AX_ISP_IQ_YNR_PARAM_T ynr_param_hdr_2x = {
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
        {256, 256, 256, 256, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
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
        },
        /* nYnrInvNrLut[12][4] */
        {
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_CNR_PARAM_T cnr_param_hdr_2x = {
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
        {1024, 1024, 1024, 1024, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nCnrLevel[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 9*/},
        /* nCnrInvNrLut[12][4] */
        {
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_YUV3DNR_PARAM_T yuv3dnr_param_hdr_2x = {
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
        0,
        /* nSf1YnrEnable */
        0,
        /* nSf2YnrEnable */
        0,
        /* nSf0CnrEnable */
        1,
        /* nSf1CnrEnable */
        1,
    },
    /* tManualParam */
    {
        /* nMotDetNoiseLut[2][17] */
        {
            {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
            {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {160, 0, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {160, 0, /*0 - 1*/},
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
        {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
        /* nTfRatLimitLuma[2][2] */
        {
            {32, 255, /*0 - 1*/},
            {32, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {32, 255, /*0 - 1*/},
            {32, 255, /*0 - 1*/},
        },
        /* nSf0EdgeStre */
        0,
        /* nSf0DirStre */
        128,
        /* nSf0DetailStre */
        135,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
            {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
            {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
            {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {0, 0, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {128, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {0, 0, 256, /*0 - 2*/},
            {0, 0, 256, /*0 - 2*/},
        },
        /* nSf0ChromaAttenStre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {255, 255, /*0 - 1*/},
        /* nSf0ChromaProtLut[2][9] */
        {
            {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
        },
        /* nSf1LumaMedEn */
        0,
        /* nSf1LumaGauStre[2] */
        {32, 24, /*0 - 1*/},
        /* nSf1LumaGauRatio[2] */
        {16, 16, /*0 - 1*/},
        /* nSf1LumaKernelSize */
        0,
        /* nSf1LumaNoiseLut[2][9] */
        {
            {32, 32, 32, 32, 32, 36, 36, 36, 36, /*0 - 8*/},
            {8, 8, 8, 8, 8, 8, 8, 12, 12, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {64, 64, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {128, 128, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {32, 32, /*0 - 1*/},
        /* nSf1ChromaCoring */
        0,
        /* nSf1ChromaBlendRatio */
        256,
        /* nSf2LumaGauStre[2] */
        {64, 64, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        0,
        /* nSf2NoiseLut[2][9] */
        {
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            {10, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {0, 0, 256, /*0 - 2*/},
            {0, 0, 256, /*0 - 2*/},
        },
        /* nExtMaskStrenLuma */
        120,
        /* nExtMaskStrenChrom */
        120,
        /* nExtMaskStrenStatus */
        120,
        /* nExtMaskRatioLuma[2] */
        {256, 256, /*0 - 1*/},
        /* nExtMaskRatioChrom[2] */
        {256, 256, /*0 - 1*/},
        /* nExtMaskRatioStatus[2] */
        {256, 256, /*0 - 1*/},
        /* nY3dnrPos */
        0,
        /* nStaRefineErode */
        0,
        /* nSfGuideMapLuma[2] */
        {128, 0, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 20, 20, 20, 20, 16, 12, 12, 12, 12, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 7 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 8 */
            {
                {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 16*/},
                {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 9 */
            {
                {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 16*/},
                {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 16*/},
            },
        },
        /* nMotDetStrenLuma[12][2] */
        {
            {160, 0, /*0 - 1*/},
            {160, 0, /*0 - 1*/},
            {160, 0, /*0 - 1*/},
            {160, 0, /*0 - 1*/},
            {160, -40, /*0 - 1*/},
            {160, -40, /*0 - 1*/},
            {160, -40, /*0 - 1*/},
            {160, -64, /*0 - 1*/},
            {160, -128, /*0 - 1*/},
            {160, -128, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {160, 0, /*0 - 1*/},
            {160, 0, /*0 - 1*/},
            {160, 0, /*0 - 1*/},
            {160, 0, /*0 - 1*/},
            {160, -40, /*0 - 1*/},
            {160, -40, /*0 - 1*/},
            {160, -40, /*0 - 1*/},
            {160, -64, /*0 - 1*/},
            {160, -128, /*0 - 1*/},
            {160, -128, /*0 - 1*/},
        },
        /* nMotDetSmoothLuma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
        },
        /* nMotDetSmoothChroma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
            {3, 1, /*0 - 1*/},
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
        },
        /* nTfRatioLut[12][16] */
        {
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
        },
        /* nTfRatLimitLuma[12][2][2] */
        {
            /* nTfRatLimitLuma 0 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 1 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 2 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 3 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 4 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 5 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 6 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 7 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 8 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 9 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
        },
        /* nTfRatLimitChroma[12][2][2] */
        {
            /* nTfRatLimitChroma 0 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 1 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 2 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 3 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
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
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 9 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
        },
        /* nSf0EdgeStre[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nSf0DirStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nSf0DetailStre[12] */
        {135, 135, 135, 135, 135, 135, 135, 135, 135, 135, /*0 - 9*/},
        /* nSf0LumaNoiseLut[12][4][9] */
        {
            /* nSf0LumaNoiseLut 0 */
            {
                {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
                {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
                {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
                {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {16, 12, 12, 12, 12, 10, 10, 10, 16, /*0 - 8*/},
                {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
                {16, 12, 12, 12, 12, 10, 10, 10, 16, /*0 - 8*/},
                {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {32, 20, 20, 20, 20, 20, 20, 20, 32, /*0 - 8*/},
                {6, 6, 6, 6, 7, 7, 7, 7, 6, /*0 - 8*/},
                {32, 20, 20, 20, 20, 20, 20, 20, 32, /*0 - 8*/},
                {6, 6, 6, 6, 6, 6, 6, 6, 6, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {12, 12, 12, 12, 12, 14, 16, 16, 16, /*0 - 8*/},
                {12, 12, 12, 12, 12, 14, 14, 14, 14, /*0 - 8*/},
                {12, 12, 12, 12, 12, 14, 16, 16, 16, /*0 - 8*/},
                {12, 12, 12, 12, 12, 14, 14, 14, 14, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {15, 15, 15, 15, 15, 18, 20, 20, 20, /*0 - 8*/},
                {12, 12, 12, 12, 12, 14, 16, 16, 16, /*0 - 8*/},
                {15, 15, 15, 15, 15, 18, 20, 20, 20, /*0 - 8*/},
                {12, 12, 12, 12, 12, 14, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 9 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
        },
        /* nSf0LumaKernelSize[12][2] */
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
        },
        /* nSf0LumaGauStre[12][2] */
        {
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
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
                {0, 0, 256, /*0 - 2*/},
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
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 4 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {256, 0, 0, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {224, 32, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {194, 64, 0, /*0 - 2*/},
                {224, 32, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {194, 64, 0, /*0 - 2*/},
                {224, 32, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 9 */
            {
                {194, 64, 0, /*0 - 2*/},
                {224, 32, 0, /*0 - 2*/},
            },
        },
        /* nSf0ChromaAttenStre[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {8, 6, /*0 - 1*/},
            {8, 6, /*0 - 1*/},
            {8, 6, /*0 - 1*/},
            {10, 6, /*0 - 1*/},
            {16, 12, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
        },
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {240, 240, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {220, 220, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
        },
        /* nSf0ChromaProtLut[12][2][9] */
        {
            /* nSf0ChromaProtLut 0 */
            {
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 1 */
            {
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 2 */
            {
                {15, 15, 15, 15, 57, 170, 170, 170, 170, /*0 - 8*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {15, 15, 15, 15, 57, 170, 170, 170, 170, /*0 - 8*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {15, 15, 15, 15, 57, 170, 170, 170, 170, /*0 - 8*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {15, 15, 15, 15, 57, 170, 170, 170, 170, /*0 - 8*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {32, 32, 32, 32, 96, 182, 188, 164, 64, /*0 - 8*/},
                {32, 32, 32, 64, 96, 182, 188, 164, 64, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {64, 64, 64, 64, 128, 182, 188, 164, 64, /*0 - 8*/},
                {64, 64, 64, 128, 188, 182, 188, 164, 64, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {64, 64, 64, 64, 128, 182, 188, 164, 64, /*0 - 8*/},
                {64, 64, 64, 128, 188, 182, 188, 164, 64, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 9 */
            {
                {64, 64, 64, 64, 128, 182, 188, 164, 64, /*0 - 8*/},
                {64, 64, 64, 128, 188, 182, 188, 164, 64, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nSf1LumaGauStre[12][2] */
        {
            {32, 24, /*0 - 1*/},
            {32, 24, /*0 - 1*/},
            {32, 24, /*0 - 1*/},
            {32, 24, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
        },
        /* nSf1LumaGauRatio[12][2] */
        {
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {64, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
        },
        /* nSf1LumaKernelSize[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {32, 32, 32, 32, 32, 36, 36, 36, 36, /*0 - 8*/},
                {8, 8, 8, 8, 8, 8, 8, 12, 12, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 16, 16, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {42, 40, 40, 40, 40, 42, 42, 42, 42, /*0 - 8*/},
                {24, 19, 19, 19, 24, 24, 24, 24, 24, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 3 */
            {
                {512, 512, 512, 480, 480, 480, 480, 480, 480, /*0 - 8*/},
                {40, 32, 32, 32, 36, 40, 40, 40, 40, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 4 */
            {
                {1023, 1023, 1023, 768, 768, 768, 768, 768, 768, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 5 */
            {
                {40, 48, 48, 60, 60, 60, 60, 60, 60, /*0 - 8*/},
                {24, 30, 36, 36, 36, 36, 36, 36, 36, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 6 */
            {
                {40, 48, 48, 60, 60, 60, 60, 60, 60, /*0 - 8*/},
                {28, 32, 42, 42, 42, 42, 42, 42, 42, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {16, 16, 16, 16, 20, 20, 20, 20, 20, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {28, 28, 28, 28, 32, 32, 32, 32, 32, /*0 - 8*/},
                {28, 28, 28, 28, 28, 28, 28, 28, 28, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 9 */
            {
                {28, 28, 28, 28, 32, 32, 32, 32, 32, /*0 - 8*/},
                {28, 28, 28, 28, 28, 28, 28, 28, 28, /*0 - 8*/},
            },
        },
        /* nSf1LumaIdrThre[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
        },
        /* nSf1LumaIdrGain[12][2] */
        {
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
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
        },
        /* nSf1LumaCoring[12][2] */
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
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {32, 32, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {0, 0, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nSf1ChromaBlendRatio[12] */
        {256, 256, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 9*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
        },
        /* nSf2LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nSf2KernelSize[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {10, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {10, 8, 8, 8, 8, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {16, 16, 16, 16, 16, 16, 24, 24, 24, /*0 - 8*/},
                {10, 8, 8, 8, 8, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 22, 22, 22, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {24, 24, 24, 20, 18, 18, 18, 18, 18, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {20, 20, 20, 21, 22, 22, 22, 22, 22, /*0 - 8*/},
                {14, 17, 17, 17, 17, 17, 17, 17, 17, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {20, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {16, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {28, 28, 28, 28, 28, 30, 32, 32, 32, /*0 - 8*/},
                {28, 28, 28, 28, 28, 30, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf2NoiseLut 9 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 2 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 3 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 4 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 5 */
            {
                {224, 32, 0, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {224, 32, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {192, 64, 0, /*0 - 2*/},
                {192, 64, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {128, 128, 0, /*0 - 2*/},
                {128, 128, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 9 */
            {
                {128, 128, 0, /*0 - 2*/},
                {128, 128, 0, /*0 - 2*/},
            },
        },
        /* nExtMaskStrenLuma[12] */
        {120, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nExtMaskStrenChrom[12] */
        {120, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nExtMaskStrenStatus[12] */
        {120, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nExtMaskRatioLuma[12][2] */
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
        },
        /* nExtMaskRatioChrom[12][2] */
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
        },
        /* nExtMaskRatioStatus[12][2] */
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
        },
        /* nY3dnrPos[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nStaRefineErode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nSfGuideMapLuma[12][2] */
        {
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
            {128, 0, /*0 - 1*/},
        },
        /* nSfGuideMapChroma[12][2] */
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
        },
    },
};

const static AX_ISP_IQ_SHARPEN_PARAM_T sharpen_param_hdr_2x = {
    /* nShpEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* tMaskControl */
    {
        /* nMotionMaskEn */
        1,
        /* nShpClnpNpuMaskEn */
        0,
        /* nShpLumaMaskLut[17] */
        {255, 255, 255, 255, 255, 196, 128, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
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
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
    },
    /* tOsStaticMotion */
    {
        /* nOsStaticLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {5, 4, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {5, 4, /*0 - 1*/},
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
        {1, 1, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {728, -96, 100, /*0 - 2*/},
            {464, -96, -76, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorRange[8][3] */
        {
            {128, 32, 32, /*0 - 2*/},
            {64, 32, 32, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSpread[8][3] */
        {
            {5, 4, 4, /*0 - 2*/},
            {5, 4, 4, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorIoFlag[8] */
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskIndex[8] */
        {0, 1, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskLimit[8] */
        {128, 128, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
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
        {1, 1, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, -4, -8, -16, -32, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {0, -8, -16, -32, -64, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {-48, 0, 0, 0, 0, 0, -8, -16, -32, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-48, 0, 0, 0, 0, 0, -8, -16, -32, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, -4, -8, -16, -32, /*0 - 4*/},
            {0, 49, 75, 96, 116, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nHighFreqOsGain[2] */
        {5, 3, /*0 - 1*/},
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
        {1, 1, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, -4, -8, -16, -32, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {0, -8, -16, -32, -64, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {-48, 0, 0, 0, 0, 0, -8, -16, -32, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-48, 0, 0, 0, 0, 0, -8, -16, -32, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, -4, -8, -16, -32, /*0 - 4*/},
            {0, 32, 57, 81, 118, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nMedFreqOsGain[2] */
        {5, 3, /*0 - 1*/},
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
        {0, 1, 0, 0, /*0 - 3*/},
        /* nDirFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqMotionLut[5] */
        {0, -4, -8, -16, -32, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {0, -8, -16, -24, -32, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {-32, 0, 0, 0, -4, -8, -16, -24, -32, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-32, 0, 0, 0, -4, -8, -16, -24, -32, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 49, 69, 96, 122, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {5, 2, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {0, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 8*/},
    },
    /* tLowFreqControl */
    {
        /* nLowFreqEnable */
        0,
        /* nLowFreqMotionMskEn */
        0,
        /* nLowFreqMotionLutLevel */
        0,
        /* nLowFreqLumaMskEn */
        0,
        /* nLowFreqLumaLutLevel */
        0,
        /* nLowFreqTextureMskEn */
        0,
        /* nLowFreqTextureLutLevel */
        0,
        /* nLowFreqTextureCoring */
        64,
        /* nLowFreqTextureLutMotionLevel */
        0,
        /* nLowFreqClnpMskEn[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {-32, 6, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
        /* nLowFreqTextureLutMotion[9] */
        {-32, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {3, 2, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 128, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        0,
        /* nHighFreqCorSlope */
        0,
        /* nHighFreqCorOffset */
        0,
        /* nHighFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        0,
        /* nMedFreqCorSlope */
        0,
        /* nMedFreqCorOffset */
        0,
        /* nMedFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        0,
        /* nDirFreqCorSlope */
        0,
        /* nDirFreqCorOffset */
        0,
        /* nDirFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {0, 0, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        0,
        /* nLowFreqCorSlope */
        0,
        /* nLowFreqCorOffset */
        0,
        /* nLowFreqLimit[2] */
        {512, 512, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {16, 16, 16, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {16, 16, 16, /*0 - 2*/},
        /* nShpHpfScale[3] */
        {128, 128, 128, /*0 - 2*/},
        /* nShpGain[2] */
        {16, 16, /*0 - 1*/},
        /* nShpLimit[2] */
        {-4096, 4095, /*0 - 1*/},
        /* nGrainLogGain */
        0,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {205, 1024, 20480, 102400, 204800, 307200, 409600, 614400, 1024000, 2048000, 5120000, 10240000, /*0 - 11*/},
        /* nHighFreqLogGain[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nHighFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nHighFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nHighFreqCorOffset[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nHighFreqLimit[12][2] */
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
        /* nMedFreqLogGain[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
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
            {0, 255, /*0 - 1*/},
        },
        /* nMedFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nMedFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nMedFreqCorOffset[12] */
        {4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nMedFreqLimit[12][2] */
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
        /* nDirFreqLogGain[12][2] */
        {
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {64, 64, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
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
            {0, 255, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDirFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDirFreqCorOffset[12] */
        {4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDirFreqLimit[12][2] */
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
        /* nLowFreqLogGain[12][2] */
        {
            {8, 0, /*0 - 1*/},
            {8, 0, /*0 - 1*/},
            {6, 0, /*0 - 1*/},
            {4, 2, /*0 - 1*/},
            {4, 2, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nLowFreqGainLimit[12][2] */
        {
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
            {0, 255, /*0 - 1*/},
        },
        /* nLowFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nLowFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nLowFreqCorOffset[12] */
        {4, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nLowFreqLimit[12][2] */
        {
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
        },
        /* nShpHpfBsigma[12][3] */
        {
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
            {16, 16, 16, /*0 - 2*/},
        },
        /* nShpHpfScale[12][3] */
        {
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
            {128, 128, 128, /*0 - 2*/},
            {128, 128, 128, /*0 - 2*/},
        },
        /* nShpGain[12][2] */
        {
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 24, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
        },
        /* nShpLimit[12][2] */
        {
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
        },
        /* nGrainLogGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
    },
};

const static AX_ISP_IQ_CCMP_PARAM_T ccmp_param_hdr_2x = {
    /* nChromaCompEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nChromaCompY[29] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
        /* nChromaCompSat[23] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {2048, 4124, 8248, 32992, 63922, 127844, 255688, 511376, 767064, 1022752, 1534128, 1789816, /*0 - 11*/},
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
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
        },
    },
};

const static AX_ISP_IQ_SCM_PARAM_T scm_param_hdr_2x = {
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

const static AX_ISP_IQ_YCPROC_PARAM_T ycproc_param_hdr_2x = {
    /* nYCprocEn */
    0,
    /* nBrightness */
    256,
    /* nContrast */
    256,
    /* nSaturation */
    4096,
    /* nHue */
    0,
};

const static AX_ISP_IQ_YCRT_PARAM_T ycrt_param_hdr_2x = {
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

static AX_ISP_IQ_CLP_PARAM_T clp_param_hdr_2x = {
    /* nClpEn */
    0,
    /* nColorPaletteId */
    0,
    /* nColorPaletteYuvLut[3][256] */
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
        },
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
        },
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 0 - 31*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 32 - 63*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 64 - 95*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 96 - 127*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 128 - 159*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 160 - 191*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 192 - 223*/
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  /* 224 - 255*/
        },
    },
};

const static AX_ISP_IQ_LDC_PARAM_T ldc_param_hdr_2x = {
    /* nLdcEnable */
    0,
    /* nType */
    0,
    /* tLdcV1Param */
    {
        /* bAspect */
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

const static AX_ISP_IQ_DIS_PARAM_T dis_param_hdr_2x = {
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
        8,
        /* nCropRatio */
        205,
        /* nFramePosWeights[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
        /* nSadThreshold */
        0xFFFFFF,
    },
};

const static AX_ISP_IQ_ME_PARAM_T me_param_hdr_2x = {
    /* nEnable */
    0,
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
    1,
    /* tGridRoiH */
    {
        /* nRoiOffsetH */
        16,
        /* nRoiOffsetV */
        0,
        /* nRoiRegionNumH */
        5,
        /* nRoiRegionNumV */
        2,
        /* nRoiRegionSizeH */
        528,
        /* nRoiRegionSizeV */
        760,
        /* nSearchRange */
        16,
    },
    /* tGridRoiV */
    {
        /* nRoiOffsetH */
        0,
        /* nRoiOffsetV */
        32,
        /* nRoiRegionNumH */
        5,
        /* nRoiRegionNumV */
        5,
        /* nRoiRegionSizeH */
        536,
        /* nRoiRegionSizeV */
        288,
        /* nSearchRange */
        32,
    },
};

const static AX_ISP_IQ_NUC_PARAM_T nuc_param_hdr_2x = {
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
