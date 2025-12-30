#ifndef __OS04D10_SDR_H__
#define __OS04D10_SDR_H__

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
    /* szBuildTime[32] */
    "Mar 10 2025 19:38:47",
    /* szIspVersion[64] */
    "AX620E_ISP_V4.0.39",
};

const static AX_ISP_IQ_SCENE_PARAM_T scene_param_sdr = {
    /* nAutoMode */
    1,
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
        512,
        /* nRefValStart[4] */
        {1024, 2048, /*0 - 1*/},
        /* nRefValEnd[4] */
        {2048, 1024000, /*0 - 1*/},
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
        1042,
        /* nAGain */
        15360,
        /* nDgain */
        1024,
        /* nHcgLcg */
        0,
        /* nSnsTotalAGain */
        48000,
        /* nSysTotalGain */
        48865,
        /* nShutter */
        49993,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        0,
        /* nHdrRealRatioLtoS */
        1024,
        /* nHdrRealRatioStoVS */
        1024,
        /* nSetPoint */
        22817,
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
        999637,
        /* nRealMaxShutter */
        490000,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        22817,
        /* nFaceTarget */
        35840,
        /* nVehicleTarget */
        35840,
        /* nTolerance */
        5242880,
        /* nAgainLcg2HcgTh */
        3200,
        /* nAgainHcg2LcgTh */
        1024,
        /* nAgainLcg2HcgRatio */
        3200,
        /* nAgainHcg2LcgRatio */
        3200,
        /* nLuxk */
        71596,
        /* nCompensationMode */
        2,
        /* nMaxIspGain */
        16384,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        2048,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        49600,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        1024000,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        499000,
        /* nMinShutter */
        22,
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
            1,
            /* nFlickerPeriod */
            0,
            /* tAntiFlickerToleranceCurve */
            {
                /* nSize */
                2,
                /* nRefList[12] */
                {102400, 204800, /*0 - 1*/},
                /* nAntiFlickerToleranceList[12] */
                {114, 114, /*0 - 1*/},
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
                    9,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            22,
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
                            30000,
                            /* nGain */
                            24576,
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
                            32768,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            50000,
                            /* nGain */
                            49562,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            80000,
                            /* nGain */
                            99123,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 5 */
                        {
                            /* nIntergrationTime */
                            120000,
                            /* nGain */
                            138547,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 6 */
                        {
                            /* nIntergrationTime */
                            249000,
                            /* nGain */
                            307200,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 7 */
                        {
                            /* nIntergrationTime */
                            249000,
                            /* nGain */
                            327680,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 8 */
                        {
                            /* nIntergrationTime */
                            499000,
                            /* nGain */
                            737280,
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
                            22,
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
                            20,
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
                            38320,
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
                            38320,
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
                            38320,
                            /* nGain */
                            2097152,
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
            6,
            /* nRefList[10] */
            {307, 512, 1536, 20480, 102400, 2048000, /*0 - 5*/},
            /* nSetPointList[10] */
            {16384, 22528, 24576, 24576, 26624, 28672, /*0 - 5*/},
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
            0,
            /* tRatioStrategyParam */
            {
                /* nShortNonSatAreaPercent */
                104438168,
                /* nTolerance */
                10485760,
                /* nConvergeCntFrameNum */
                3,
                /* nDampRatio */
                870,
                /* tHdrRatioParamCurve */
                {
                    /* nListSize */
                    6,
                    /* nRefList[10] */
                    {102, 10240, 30720, 102400, 204800, 1024000, /*0 - 5*/},
                    /* nSatLumaList[10] */
                    {153600, 122880, 61440, 40960, 20480, 10240, /*0 - 5*/},
                    /* nMinRatioList[10] */
                    {1024, 1024, 1024, 1024, 1024, 1024, /*0 - 5*/},
                    /* nMaxRatioList[10] */
                    {16384, 16384, 16384, 16384, 16384, 16384, /*0 - 5*/},
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
                {123, 154, 154, 154, 154, 154, 154, 154, 154, 154, 154, /*0 - 10*/},
                /* nSlowUnderSpeedDownFactorList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nSlowUnderSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
            },
        },
        /* tSleepWakeUpParam */
        {
            /* nEnableSleepSetting */
            0,
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
            579,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            474,
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
            1387625,
            /* nBg */
            1366608,
        },
        /* nCenterPntRadius */
        1219575,
        /* nLowCut */
        0,
        /* nHighCut */
        0,
        /* nCctMax */
        14000,
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
            5000, 5187, 5375, 5562, 5750, 5937, 6125, 6312, 6500, 6625, 6750, 6875, 7000, 7125, 7250, 7375, 7500, 8312, 9125, 9937, 10750, 11562, 12375, 13187, 14000, /*32 - 56*/
        },
        /* tChordKB */
        {
            /* nK */
            -839,
            /* nB */
            1277,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1414414,
                /* nBg */
                147325,
            },
            /* 1 */
            {
                /* nRg */
                1359122,
                /* nBg */
                192686,
            },
            /* 2 */
            {
                /* nRg */
                1307679,
                /* nBg */
                234892,
            },
            /* 3 */
            {
                /* nRg */
                1259508,
                /* nBg */
                274412,
            },
            /* 4 */
            {
                /* nRg */
                1214115,
                /* nBg */
                311647,
            },
            /* 5 */
            {
                /* nRg */
                1171081,
                /* nBg */
                346953,
            },
            /* 6 */
            {
                /* nRg */
                1130061,
                /* nBg */
                380602,
            },
            /* 7 */
            {
                /* nRg */
                1090760,
                /* nBg */
                412845,
            },
            /* 8 */
            {
                /* nRg */
                1052907,
                /* nBg */
                443904,
            },
            /* 9 */
            {
                /* nRg */
                1037503,
                /* nBg */
                456540,
            },
            /* 10 */
            {
                /* nRg */
                1022288,
                /* nBg */
                469007,
            },
            /* 11 */
            {
                /* nRg */
                1007262,
                /* nBg */
                481338,
            },
            /* 12 */
            {
                /* nRg */
                992404,
                /* nBg */
                493533,
            },
            /* 13 */
            {
                /* nRg */
                977703,
                /* nBg */
                505592,
            },
            /* 14 */
            {
                /* nRg */
                963128,
                /* nBg */
                517546,
            },
            /* 15 */
            {
                /* nRg */
                948689,
                /* nBg */
                529395,
            },
            /* 16 */
            {
                /* nRg */
                934365,
                /* nBg */
                541139,
            },
            /* 17 */
            {
                /* nRg */
                921845,
                /* nBg */
                551415,
            },
            /* 18 */
            {
                /* nRg */
                909399,
                /* nBg */
                561628,
            },
            /* 19 */
            {
                /* nRg */
                897015,
                /* nBg */
                571788,
            },
            /* 20 */
            {
                /* nRg */
                884684,
                /* nBg */
                581897,
            },
            /* 21 */
            {
                /* nRg */
                872405,
                /* nBg */
                591974,
            },
            /* 22 */
            {
                /* nRg */
                860168,
                /* nBg */
                602008,
            },
            /* 23 */
            {
                /* nRg */
                847973,
                /* nBg */
                612022,
            },
            /* 24 */
            {
                /* nRg */
                835799,
                /* nBg */
                622005,
            },
            /* 25 */
            {
                /* nRg */
                821769,
                /* nBg */
                633518,
            },
            /* 26 */
            {
                /* nRg */
                807750,
                /* nBg */
                645021,
            },
            /* 27 */
            {
                /* nRg */
                793741,
                /* nBg */
                656513,
            },
            /* 28 */
            {
                /* nRg */
                779721,
                /* nBg */
                668006,
            },
            /* 29 */
            {
                /* nRg */
                765691,
                /* nBg */
                679519,
            },
            /* 30 */
            {
                /* nRg */
                751630,
                /* nBg */
                691054,
            },
            /* 31 */
            {
                /* nRg */
                737537,
                /* nBg */
                702619,
            },
            /* 32 */
            {
                /* nRg */
                723392,
                /* nBg */
                714217,
            },
            /* 33 */
            {
                /* nRg */
                714552,
                /* nBg */
                721473,
            },
            /* 34 */
            {
                /* nRg */
                705681,
                /* nBg */
                728750,
            },
            /* 35 */
            {
                /* nRg */
                696779,
                /* nBg */
                736048,
            },
            /* 36 */
            {
                /* nRg */
                687855,
                /* nBg */
                743367,
            },
            /* 37 */
            {
                /* nRg */
                678890,
                /* nBg */
                750728,
            },
            /* 38 */
            {
                /* nRg */
                669893,
                /* nBg */
                758110,
            },
            /* 39 */
            {
                /* nRg */
                660855,
                /* nBg */
                765523,
            },
            /* 40 */
            {
                /* nRg */
                651774,
                /* nBg */
                772979,
            },
            /* 41 */
            {
                /* nRg */
                645493,
                /* nBg */
                778127,
            },
            /* 42 */
            {
                /* nRg */
                639180,
                /* nBg */
                783297,
            },
            /* 43 */
            {
                /* nRg */
                632858,
                /* nBg */
                788498,
            },
            /* 44 */
            {
                /* nRg */
                626493,
                /* nBg */
                793709,
            },
            /* 45 */
            {
                /* nRg */
                620117,
                /* nBg */
                798942,
            },
            /* 46 */
            {
                /* nRg */
                613711,
                /* nBg */
                804205,
            },
            /* 47 */
            {
                /* nRg */
                607272,
                /* nBg */
                809480,
            },
            /* 48 */
            {
                /* nRg */
                600803,
                /* nBg */
                814785,
            },
            /* 49 */
            {
                /* nRg */
                557989,
                /* nBg */
                849913,
            },
            /* 50 */
            {
                /* nRg */
                513551,
                /* nBg */
                886372,
            },
            /* 51 */
            {
                /* nRg */
                467120,
                /* nBg */
                924456,
            },
            /* 52 */
            {
                /* nRg */
                418266,
                /* nBg */
                964533,
            },
            /* 53 */
            {
                /* nRg */
                366477,
                /* nBg */
                1007021,
            },
            /* 54 */
            {
                /* nRg */
                311133,
                /* nBg */
                1052424,
            },
            /* 55 */
            {
                /* nRg */
                251490,
                /* nBg */
                1101351,
            },
            /* 56 */
            {
                /* nRg */
                186626,
                /* nBg */
                1154566,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1412568,
                /* nBg */
                231190,
            },
            /* 1 */
            {
                /* nRg */
                1359930,
                /* nBg */
                226010,
            },
            /* 2 */
            {
                /* nRg */
                1306861,
                /* nBg */
                223284,
            },
            /* 3 */
            {
                /* nRg */
                1253478,
                /* nBg */
                223032,
            },
            /* 4 */
            {
                /* nRg */
                1199906,
                /* nBg */
                225287,
            },
            /* 5 */
            {
                /* nRg */
                1146251,
                /* nBg */
                230047,
            },
            /* 6 */
            {
                /* nRg */
                1092648,
                /* nBg */
                237356,
            },
            /* 7 */
            {
                /* nRg */
                1039202,
                /* nBg */
                247191,
            },
            /* 8 */
            {
                /* nRg */
                986028,
                /* nBg */
                259565,
            },
            /* 9 */
            {
                /* nRg */
                962897,
                /* nBg */
                262616,
            },
            /* 10 */
            {
                /* nRg */
                939723,
                /* nBg */
                266150,
            },
            /* 11 */
            {
                /* nRg */
                916539,
                /* nBg */
                270166,
            },
            /* 12 */
            {
                /* nRg */
                893334,
                /* nBg */
                274674,
            },
            /* 13 */
            {
                /* nRg */
                870129,
                /* nBg */
                279666,
            },
            /* 14 */
            {
                /* nRg */
                846945,
                /* nBg */
                285150,
            },
            /* 15 */
            {
                /* nRg */
                823772,
                /* nBg */
                291127,
            },
            /* 16 */
            {
                /* nRg */
                800630,
                /* nBg */
                297586,
            },
            /* 17 */
            {
                /* nRg */
                782594,
                /* nBg */
                307694,
            },
            /* 18 */
            {
                /* nRg */
                764726,
                /* nBg */
                318107,
            },
            /* 19 */
            {
                /* nRg */
                747037,
                /* nBg */
                328812,
            },
            /* 20 */
            {
                /* nRg */
                729536,
                /* nBg */
                339823,
            },
            /* 21 */
            {
                /* nRg */
                712224,
                /* nBg */
                351126,
            },
            /* 22 */
            {
                /* nRg */
                695101,
                /* nBg */
                362723,
            },
            /* 23 */
            {
                /* nRg */
                678187,
                /* nBg */
                374614,
            },
            /* 24 */
            {
                /* nRg */
                661473,
                /* nBg */
                386778,
            },
            /* 25 */
            {
                /* nRg */
                642431,
                /* nBg */
                401185,
            },
            /* 26 */
            {
                /* nRg */
                623672,
                /* nBg */
                415960,
            },
            /* 27 */
            {
                /* nRg */
                605207,
                /* nBg */
                431091,
            },
            /* 28 */
            {
                /* nRg */
                587045,
                /* nBg */
                446589,
            },
            /* 29 */
            {
                /* nRg */
                569188,
                /* nBg */
                462433,
            },
            /* 30 */
            {
                /* nRg */
                551645,
                /* nBg */
                478633,
            },
            /* 31 */
            {
                /* nRg */
                534428,
                /* nBg */
                495169,
            },
            /* 32 */
            {
                /* nRg */
                517525,
                /* nBg */
                512030,
            },
            /* 33 */
            {
                /* nRg */
                507175,
                /* nBg */
                522705,
            },
            /* 34 */
            {
                /* nRg */
                496941,
                /* nBg */
                533505,
            },
            /* 35 */
            {
                /* nRg */
                486854,
                /* nBg */
                544431,
            },
            /* 36 */
            {
                /* nRg */
                476892,
                /* nBg */
                555483,
            },
            /* 37 */
            {
                /* nRg */
                467067,
                /* nBg */
                566650,
            },
            /* 38 */
            {
                /* nRg */
                457378,
                /* nBg */
                577933,
            },
            /* 39 */
            {
                /* nRg */
                447826,
                /* nBg */
                589342,
            },
            /* 40 */
            {
                /* nRg */
                438420,
                /* nBg */
                600855,
            },
            /* 41 */
            {
                /* nRg */
                432024,
                /* nBg */
                608856,
            },
            /* 42 */
            {
                /* nRg */
                425690,
                /* nBg */
                616909,
            },
            /* 43 */
            {
                /* nRg */
                419420,
                /* nBg */
                625025,
            },
            /* 44 */
            {
                /* nRg */
                413223,
                /* nBg */
                633183,
            },
            /* 45 */
            {
                /* nRg */
                407099,
                /* nBg */
                641393,
            },
            /* 46 */
            {
                /* nRg */
                401038,
                /* nBg */
                649656,
            },
            /* 47 */
            {
                /* nRg */
                395051,
                /* nBg */
                657971,
            },
            /* 48 */
            {
                /* nRg */
                389137,
                /* nBg */
                666339,
            },
            /* 49 */
            {
                /* nRg */
                352405,
                /* nBg */
                721882,
            },
            /* 50 */
            {
                /* nRg */
                318757,
                /* nBg */
                779344,
            },
            /* 51 */
            {
                /* nRg */
                288295,
                /* nBg */
                838557,
            },
            /* 52 */
            {
                /* nRg */
                261116,
                /* nBg */
                899343,
            },
            /* 53 */
            {
                /* nRg */
                237293,
                /* nBg */
                961534,
            },
            /* 54 */
            {
                /* nRg */
                216898,
                /* nBg */
                1024920,
            },
            /* 55 */
            {
                /* nRg */
                199984,
                /* nBg */
                1089334,
            },
            /* 56 */
            {
                /* nRg */
                186626,
                /* nBg */
                1154566,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                -46608,
                /* nB */
                63014,
            },
            /* 1 */
            {
                /* nK */
                42168,
                /* nB */
                -54467,
            },
            /* 2 */
            {
                /* nK */
                14496,
                /* nB */
                -17847,
            },
            /* 3 */
            {
                /* nK */
                8729,
                /* nB */
                -10216,
            },
            /* 4 */
            {
                /* nK */
                6226,
                /* nB */
                -6903,
            },
            /* 5 */
            {
                /* nK */
                4822,
                /* nB */
                -5045,
            },
            /* 6 */
            {
                /* nK */
                3920,
                /* nB */
                -3852,
            },
            /* 7 */
            {
                /* nK */
                3290,
                /* nB */
                -3018,
            },
            /* 8 */
            {
                /* nK */
                2823,
                /* nB */
                -2400,
            },
            /* 9 */
            {
                /* nK */
                2662,
                /* nB */
                -2187,
            },
            /* 10 */
            {
                /* nK */
                2516,
                /* nB */
                -1994,
            },
            /* 11 */
            {
                /* nK */
                2383,
                /* nB */
                -1818,
            },
            /* 12 */
            {
                /* nK */
                2262,
                /* nB */
                -1658,
            },
            /* 13 */
            {
                /* nK */
                2151,
                /* nB */
                -1511,
            },
            /* 14 */
            {
                /* nK */
                2048,
                /* nB */
                -1375,
            },
            /* 15 */
            {
                /* nK */
                1953,
                /* nB */
                -1249,
            },
            /* 16 */
            {
                /* nK */
                1865,
                /* nB */
                -1132,
            },
            /* 17 */
            {
                /* nK */
                1792,
                /* nB */
                -1036,
            },
            /* 18 */
            {
                /* nK */
                1724,
                /* nB */
                -945,
            },
            /* 19 */
            {
                /* nK */
                1659,
                /* nB */
                -860,
            },
            /* 20 */
            {
                /* nK */
                1598,
                /* nB */
                -779,
            },
            /* 21 */
            {
                /* nK */
                1540,
                /* nB */
                -702,
            },
            /* 22 */
            {
                /* nK */
                1484,
                /* nB */
                -629,
            },
            /* 23 */
            {
                /* nK */
                1432,
                /* nB */
                -559,
            },
            /* 24 */
            {
                /* nK */
                1382,
                /* nB */
                -493,
            },
            /* 25 */
            {
                /* nK */
                1327,
                /* nB */
                -420,
            },
            /* 26 */
            {
                /* nK */
                1274,
                /* nB */
                -351,
            },
            /* 27 */
            {
                /* nK */
                1224,
                /* nB */
                -285,
            },
            /* 28 */
            {
                /* nK */
                1177,
                /* nB */
                -222,
            },
            /* 29 */
            {
                /* nK */
                1131,
                /* nB */
                -161,
            },
            /* 30 */
            {
                /* nK */
                1088,
                /* nB */
                -104,
            },
            /* 31 */
            {
                /* nK */
                1046,
                /* nB */
                -49,
            },
            /* 32 */
            {
                /* nK */
                1006,
                /* nB */
                4,
            },
            /* 33 */
            {
                /* nK */
                981,
                /* nB */
                36,
            },
            /* 34 */
            {
                /* nK */
                958,
                /* nB */
                67,
            },
            /* 35 */
            {
                /* nK */
                935,
                /* nB */
                98,
            },
            /* 36 */
            {
                /* nK */
                912,
                /* nB */
                128,
            },
            /* 37 */
            {
                /* nK */
                890,
                /* nB */
                157,
            },
            /* 38 */
            {
                /* nK */
                868,
                /* nB */
                186,
            },
            /* 39 */
            {
                /* nK */
                847,
                /* nB */
                214,
            },
            /* 40 */
            {
                /* nK */
                826,
                /* nB */
                241,
            },
            /* 41 */
            {
                /* nK */
                812,
                /* nB */
                260,
            },
            /* 42 */
            {
                /* nK */
                798,
                /* nB */
                278,
            },
            /* 43 */
            {
                /* nK */
                784,
                /* nB */
                297,
            },
            /* 44 */
            {
                /* nK */
                771,
                /* nB */
                315,
            },
            /* 45 */
            {
                /* nK */
                757,
                /* nB */
                332,
            },
            /* 46 */
            {
                /* nK */
                744,
                /* nB */
                350,
            },
            /* 47 */
            {
                /* nK */
                731,
                /* nB */
                367,
            },
            /* 48 */
            {
                /* nK */
                718,
                /* nB */
                384,
            },
            /* 49 */
            {
                /* nK */
                638,
                /* nB */
                491,
            },
            /* 50 */
            {
                /* nK */
                563,
                /* nB */
                590,
            },
            /* 51 */
            {
                /* nK */
                492,
                /* nB */
                684,
            },
            /* 52 */
            {
                /* nK */
                425,
                /* nB */
                773,
            },
            /* 53 */
            {
                /* nK */
                361,
                /* nB */
                857,
            },
            /* 54 */
            {
                /* nK */
                299,
                /* nB */
                939,
            },
            /* 55 */
            {
                /* nK */
                239,
                /* nB */
                1018,
            },
            /* 56 */
            {
                /* nK */
                181,
                /* nB */
                1095,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1414644,
                /* nBg */
                136839,
            },
            /* 1 */
            {
                /* nRg */
                1357633,
                /* nBg */
                131670,
            },
            /* 2 */
            {
                /* nRg */
                1300213,
                /* nBg */
                129143,
            },
            /* 3 */
            {
                /* nRg */
                1242489,
                /* nBg */
                129300,
            },
            /* 4 */
            {
                /* nRg */
                1184587,
                /* nBg */
                132163,
            },
            /* 5 */
            {
                /* nRg */
                1126653,
                /* nBg */
                137741,
            },
            /* 6 */
            {
                /* nRg */
                1068793,
                /* nBg */
                146046,
            },
            /* 7 */
            {
                /* nRg */
                1011152,
                /* nBg */
                157087,
            },
            /* 8 */
            {
                /* nRg */
                953848,
                /* nBg */
                170855,
            },
            /* 9 */
            {
                /* nRg */
                929007,
                /* nBg */
                174535,
            },
            /* 10 */
            {
                /* nRg */
                904145,
                /* nBg */
                178740,
            },
            /* 11 */
            {
                /* nRg */
                879283,
                /* nBg */
                183459,
            },
            /* 12 */
            {
                /* nRg */
                854422,
                /* nBg */
                188702,
            },
            /* 13 */
            {
                /* nRg */
                829570,
                /* nBg */
                194458,
            },
            /* 14 */
            {
                /* nRg */
                804740,
                /* nBg */
                200739,
            },
            /* 15 */
            {
                /* nRg */
                779952,
                /* nBg */
                207545,
            },
            /* 16 */
            {
                /* nRg */
                755205,
                /* nBg */
                214864,
            },
            /* 17 */
            {
                /* nRg */
                735775,
                /* nBg */
                225758,
            },
            /* 18 */
            {
                /* nRg */
                716523,
                /* nBg */
                236968,
            },
            /* 19 */
            {
                /* nRg */
                697471,
                /* nBg */
                248513,
            },
            /* 20 */
            {
                /* nRg */
                678617,
                /* nBg */
                260372,
            },
            /* 21 */
            {
                /* nRg */
                659963,
                /* nBg */
                272546,
            },
            /* 22 */
            {
                /* nRg */
                641519,
                /* nBg */
                285045,
            },
            /* 23 */
            {
                /* nRg */
                623284,
                /* nBg */
                297848,
            },
            /* 24 */
            {
                /* nRg */
                605280,
                /* nBg */
                310955,
            },
            /* 25 */
            {
                /* nRg */
                584759,
                /* nBg */
                326474,
            },
            /* 26 */
            {
                /* nRg */
                564553,
                /* nBg */
                342392,
            },
            /* 27 */
            {
                /* nRg */
                544662,
                /* nBg */
                358697,
            },
            /* 28 */
            {
                /* nRg */
                525095,
                /* nBg */
                375390,
            },
            /* 29 */
            {
                /* nRg */
                505854,
                /* nBg */
                392472,
            },
            /* 30 */
            {
                /* nRg */
                486959,
                /* nBg */
                409920,
            },
            /* 31 */
            {
                /* nRg */
                468399,
                /* nBg */
                427735,
            },
            /* 32 */
            {
                /* nRg */
                450196,
                /* nBg */
                445907,
            },
            /* 33 */
            {
                /* nRg */
                439039,
                /* nBg */
                457410,
            },
            /* 34 */
            {
                /* nRg */
                428029,
                /* nBg */
                469039,
            },
            /* 35 */
            {
                /* nRg */
                417145,
                /* nBg */
                480814,
            },
            /* 36 */
            {
                /* nRg */
                406418,
                /* nBg */
                492715,
            },
            /* 37 */
            {
                /* nRg */
                395837,
                /* nBg */
                504743,
            },
            /* 38 */
            {
                /* nRg */
                385394,
                /* nBg */
                516906,
            },
            /* 39 */
            {
                /* nRg */
                375107,
                /* nBg */
                529195,
            },
            /* 40 */
            {
                /* nRg */
                364967,
                /* nBg */
                541600,
            },
            /* 41 */
            {
                /* nRg */
                358078,
                /* nBg */
                550219,
            },
            /* 42 */
            {
                /* nRg */
                351252,
                /* nBg */
                558901,
            },
            /* 43 */
            {
                /* nRg */
                344499,
                /* nBg */
                567636,
            },
            /* 44 */
            {
                /* nRg */
                337830,
                /* nBg */
                576423,
            },
            /* 45 */
            {
                /* nRg */
                331224,
                /* nBg */
                585273,
            },
            /* 46 */
            {
                /* nRg */
                324702,
                /* nBg */
                594176,
            },
            /* 47 */
            {
                /* nRg */
                318253,
                /* nBg */
                603130,
            },
            /* 48 */
            {
                /* nRg */
                311867,
                /* nBg */
                612148,
            },
            /* 49 */
            {
                /* nRg */
                272294,
                /* nBg */
                671990,
            },
            /* 50 */
            {
                /* nRg */
                236045,
                /* nBg */
                733898,
            },
            /* 51 */
            {
                /* nRg */
                203225,
                /* nBg */
                797694,
            },
            /* 52 */
            {
                /* nRg */
                173938,
                /* nBg */
                863188,
            },
            /* 53 */
            {
                /* nRg */
                148269,
                /* nBg */
                930181,
            },
            /* 54 */
            {
                /* nRg */
                126301,
                /* nBg */
                998486,
            },
            /* 55 */
            {
                /* nRg */
                108087,
                /* nBg */
                1067870,
            },
            /* 56 */
            {
                /* nRg */
                93690,
                /* nBg */
                1138156,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1410723,
                /* nBg */
                315055,
            },
            /* 1 */
            {
                /* nRg */
                1361964,
                /* nBg */
                309875,
            },
            /* 2 */
            {
                /* nRg */
                1312765,
                /* nBg */
                306960,
            },
            /* 3 */
            {
                /* nRg */
                1263251,
                /* nBg */
                306341,
            },
            /* 4 */
            {
                /* nRg */
                1213517,
                /* nBg */
                308051,
            },
            /* 5 */
            {
                /* nRg */
                1163678,
                /* nBg */
                312109,
            },
            /* 6 */
            {
                /* nRg */
                1113850,
                /* nBg */
                318515,
            },
            /* 7 */
            {
                /* nRg */
                1064126,
                /* nBg */
                327282,
            },
            /* 8 */
            {
                /* nRg */
                1014644,
                /* nBg */
                338428,
            },
            /* 9 */
            {
                /* nRg */
                993012,
                /* nBg */
                340913,
            },
            /* 10 */
            {
                /* nRg */
                971348,
                /* nBg */
                343849,
            },
            /* 11 */
            {
                /* nRg */
                949653,
                /* nBg */
                347236,
            },
            /* 12 */
            {
                /* nRg */
                927927,
                /* nBg */
                351095,
            },
            /* 13 */
            {
                /* nRg */
                906190,
                /* nBg */
                355404,
            },
            /* 14 */
            {
                /* nRg */
                884453,
                /* nBg */
                360175,
            },
            /* 15 */
            {
                /* nRg */
                862726,
                /* nBg */
                365418,
            },
            /* 16 */
            {
                /* nRg */
                841000,
                /* nBg */
                371123,
            },
            /* 17 */
            {
                /* nRg */
                824202,
                /* nBg */
                380528,
            },
            /* 18 */
            {
                /* nRg */
                807571,
                /* nBg */
                390228,
            },
            /* 19 */
            {
                /* nRg */
                791098,
                /* nBg */
                400200,
            },
            /* 20 */
            {
                /* nRg */
                774803,
                /* nBg */
                410455,
            },
            /* 21 */
            {
                /* nRg */
                758676,
                /* nBg */
                420972,
            },
            /* 22 */
            {
                /* nRg */
                742738,
                /* nBg */
                431772,
            },
            /* 23 */
            {
                /* nRg */
                726978,
                /* nBg */
                442845,
            },
            /* 24 */
            {
                /* nRg */
                711417,
                /* nBg */
                454180,
            },
            /* 25 */
            {
                /* nRg */
                693685,
                /* nBg */
                467591,
            },
            /* 26 */
            {
                /* nRg */
                676216,
                /* nBg */
                481349,
            },
            /* 27 */
            {
                /* nRg */
                659030,
                /* nBg */
                495442,
            },
            /* 28 */
            {
                /* nRg */
                642116,
                /* nBg */
                509870,
            },
            /* 29 */
            {
                /* nRg */
                625486,
                /* nBg */
                524624,
            },
            /* 30 */
            {
                /* nRg */
                609149,
                /* nBg */
                539713,
            },
            /* 31 */
            {
                /* nRg */
                593106,
                /* nBg */
                555106,
            },
            /* 32 */
            {
                /* nRg */
                577377,
                /* nBg */
                570813,
            },
            /* 33 */
            {
                /* nRg */
                567731,
                /* nBg */
                580754,
            },
            /* 34 */
            {
                /* nRg */
                558209,
                /* nBg */
                590810,
            },
            /* 35 */
            {
                /* nRg */
                548814,
                /* nBg */
                600981,
            },
            /* 36 */
            {
                /* nRg */
                539534,
                /* nBg */
                611267,
            },
            /* 37 */
            {
                /* nRg */
                530391,
                /* nBg */
                621669,
            },
            /* 38 */
            {
                /* nRg */
                521362,
                /* nBg */
                632176,
            },
            /* 39 */
            {
                /* nRg */
                512471,
                /* nBg */
                642798,
            },
            /* 40 */
            {
                /* nRg */
                503704,
                /* nBg */
                653525,
            },
            /* 41 */
            {
                /* nRg */
                497749,
                /* nBg */
                660980,
            },
            /* 42 */
            {
                /* nRg */
                491856,
                /* nBg */
                668478,
            },
            /* 43 */
            {
                /* nRg */
                486015,
                /* nBg */
                676027,
            },
            /* 44 */
            {
                /* nRg */
                480248,
                /* nBg */
                683630,
            },
            /* 45 */
            {
                /* nRg */
                474544,
                /* nBg */
                691274,
            },
            /* 46 */
            {
                /* nRg */
                468902,
                /* nBg */
                698970,
            },
            /* 47 */
            {
                /* nRg */
                463324,
                /* nBg */
                706709,
            },
            /* 48 */
            {
                /* nRg */
                457819,
                /* nBg */
                714500,
            },
            /* 49 */
            {
                /* nRg */
                423604,
                /* nBg */
                766226,
            },
            /* 50 */
            {
                /* nRg */
                392272,
                /* nBg */
                819735,
            },
            /* 51 */
            {
                /* nRg */
                363908,
                /* nBg */
                874879,
            },
            /* 52 */
            {
                /* nRg */
                338596,
                /* nBg */
                931492,
            },
            /* 53 */
            {
                /* nRg */
                316408,
                /* nBg */
                989394,
            },
            /* 54 */
            {
                /* nRg */
                297418,
                /* nBg */
                1048419,
            },
            /* 55 */
            {
                /* nRg */
                281679,
                /* nBg */
                1108408,
            },
            /* 56 */
            {
                /* nRg */
                269232,
                /* nBg */
                1169152,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1416028,
                /* nBg */
                73946,
            },
            /* 1 */
            {
                /* nRg */
                1356113,
                /* nBg */
                68776,
            },
            /* 2 */
            {
                /* nRg */
                1295778,
                /* nBg */
                66385,
            },
            /* 3 */
            {
                /* nRg */
                1235149,
                /* nBg */
                66815,
            },
            /* 4 */
            {
                /* nRg */
                1174374,
                /* nBg */
                70076,
            },
            /* 5 */
            {
                /* nRg */
                1113577,
                /* nBg */
                76200,
            },
            /* 6 */
            {
                /* nRg */
                1052896,
                /* nBg */
                85176,
            },
            /* 7 */
            {
                /* nRg */
                992456,
                /* nBg */
                97014,
            },
            /* 8 */
            {
                /* nRg */
                932394,
                /* nBg */
                111705,
            },
            /* 9 */
            {
                /* nRg */
                906421,
                /* nBg */
                115815,
            },
            /* 10 */
            {
                /* nRg */
                880426,
                /* nBg */
                120471,
            },
            /* 11 */
            {
                /* nRg */
                854443,
                /* nBg */
                125651,
            },
            /* 12 */
            {
                /* nRg */
                828469,
                /* nBg */
                131376,
            },
            /* 13 */
            {
                /* nRg */
                802517,
                /* nBg */
                137647,
            },
            /* 14 */
            {
                /* nRg */
                776607,
                /* nBg */
                144462,
            },
            /* 15 */
            {
                /* nRg */
                750738,
                /* nBg */
                151823,
            },
            /* 16 */
            {
                /* nRg */
                724923,
                /* nBg */
                159719,
            },
            /* 17 */
            {
                /* nRg */
                704559,
                /* nBg */
                171128,
            },
            /* 18 */
            {
                /* nRg */
                684395,
                /* nBg */
                182882,
            },
            /* 19 */
            {
                /* nRg */
                664420,
                /* nBg */
                194972,
            },
            /* 20 */
            {
                /* nRg */
                644665,
                /* nBg */
                207398,
            },
            /* 21 */
            {
                /* nRg */
                625119,
                /* nBg */
                220170,
            },
            /* 22 */
            {
                /* nRg */
                605794,
                /* nBg */
                233256,
            },
            /* 23 */
            {
                /* nRg */
                586689,
                /* nBg */
                246678,
            },
            /* 24 */
            {
                /* nRg */
                567814,
                /* nBg */
                260414,
            },
            /* 25 */
            {
                /* nRg */
                546319,
                /* nBg */
                276677,
            },
            /* 26 */
            {
                /* nRg */
                525148,
                /* nBg */
                293350,
            },
            /* 27 */
            {
                /* nRg */
                504302,
                /* nBg */
                310441,
            },
            /* 28 */
            {
                /* nRg */
                483792,
                /* nBg */
                327932,
            },
            /* 29 */
            {
                /* nRg */
                463638,
                /* nBg */
                345831,
            },
            /* 30 */
            {
                /* nRg */
                443831,
                /* nBg */
                364108,
            },
            /* 31 */
            {
                /* nRg */
                424390,
                /* nBg */
                382772,
            },
            /* 32 */
            {
                /* nRg */
                405317,
                /* nBg */
                401825,
            },
            /* 33 */
            {
                /* nRg */
                393625,
                /* nBg */
                413873,
            },
            /* 34 */
            {
                /* nRg */
                382080,
                /* nBg */
                426068,
            },
            /* 35 */
            {
                /* nRg */
                370682,
                /* nBg */
                438399,
            },
            /* 36 */
            {
                /* nRg */
                359431,
                /* nBg */
                450867,
            },
            /* 37 */
            {
                /* nRg */
                348347,
                /* nBg */
                463481,
            },
            /* 38 */
            {
                /* nRg */
                337411,
                /* nBg */
                476221,
            },
            /* 39 */
            {
                /* nRg */
                326631,
                /* nBg */
                489098,
            },
            /* 40 */
            {
                /* nRg */
                315999,
                /* nBg */
                502100,
            },
            /* 41 */
            {
                /* nRg */
                308774,
                /* nBg */
                511128,
            },
            /* 42 */
            {
                /* nRg */
                301633,
                /* nBg */
                520230,
            },
            /* 43 */
            {
                /* nRg */
                294555,
                /* nBg */
                529384,
            },
            /* 44 */
            {
                /* nRg */
                287561,
                /* nBg */
                538591,
            },
            /* 45 */
            {
                /* nRg */
                280641,
                /* nBg */
                547860,
            },
            /* 46 */
            {
                /* nRg */
                273804,
                /* nBg */
                557192,
            },
            /* 47 */
            {
                /* nRg */
                267041,
                /* nBg */
                566577,
            },
            /* 48 */
            {
                /* nRg */
                260361,
                /* nBg */
                576025,
            },
            /* 49 */
            {
                /* nRg */
                218890,
                /* nBg */
                638730,
            },
            /* 50 */
            {
                /* nRg */
                180900,
                /* nBg */
                703605,
            },
            /* 51 */
            {
                /* nRg */
                146518,
                /* nBg */
                770452,
            },
            /* 52 */
            {
                /* nRg */
                115826,
                /* nBg */
                839081,
            },
            /* 53 */
            {
                /* nRg */
                88930,
                /* nBg */
                909283,
            },
            /* 54 */
            {
                /* nRg */
                65903,
                /* nBg */
                980859,
            },
            /* 55 */
            {
                /* nRg */
                46819,
                /* nBg */
                1053567,
            },
            /* 56 */
            {
                /* nRg */
                31730,
                /* nBg */
                1127219,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1409349,
                /* nBg */
                377959,
            },
            /* 1 */
            {
                /* nRg */
                1363495,
                /* nBg */
                372769,
            },
            /* 2 */
            {
                /* nRg */
                1317200,
                /* nBg */
                369717,
            },
            /* 3 */
            {
                /* nRg */
                1270581,
                /* nBg */
                368837,
            },
            /* 4 */
            {
                /* nRg */
                1223730,
                /* nBg */
                370137,
            },
            /* 5 */
            {
                /* nRg */
                1176754,
                /* nBg */
                373650,
            },
            /* 6 */
            {
                /* nRg */
                1129746,
                /* nBg */
                379385,
            },
            /* 7 */
            {
                /* nRg */
                1082822,
                /* nBg */
                387354,
            },
            /* 8 */
            {
                /* nRg */
                1036098,
                /* nBg */
                397568,
            },
            /* 9 */
            {
                /* nRg */
                1015609,
                /* nBg */
                399623,
            },
            /* 10 */
            {
                /* nRg */
                995067,
                /* nBg */
                402118,
            },
            /* 11 */
            {
                /* nRg */
                974484,
                /* nBg */
                405044,
            },
            /* 12 */
            {
                /* nRg */
                953869,
                /* nBg */
                408410,
            },
            /* 13 */
            {
                /* nRg */
                933233,
                /* nBg */
                412206,
            },
            /* 14 */
            {
                /* nRg */
                912586,
                /* nBg */
                416452,
            },
            /* 15 */
            {
                /* nRg */
                891940,
                /* nBg */
                421140,
            },
            /* 16 */
            {
                /* nRg */
                871283,
                /* nBg */
                426267,
            },
            /* 17 */
            {
                /* nRg */
                855418,
                /* nBg */
                435159,
            },
            /* 18 */
            {
                /* nRg */
                839700,
                /* nBg */
                444313,
            },
            /* 19 */
            {
                /* nRg */
                824149,
                /* nBg */
                453740,
            },
            /* 20 */
            {
                /* nRg */
                808756,
                /* nBg */
                463418,
            },
            /* 21 */
            {
                /* nRg */
                793520,
                /* nBg */
                473359,
            },
            /* 22 */
            {
                /* nRg */
                778463,
                /* nBg */
                483561,
            },
            /* 23 */
            {
                /* nRg */
                763584,
                /* nBg */
                494016,
            },
            /* 24 */
            {
                /* nRg */
                748882,
                /* nBg */
                504722,
            },
            /* 25 */
            {
                /* nRg */
                732126,
                /* nBg */
                517388,
            },
            /* 26 */
            {
                /* nRg */
                715632,
                /* nBg */
                530380,
            },
            /* 27 */
            {
                /* nRg */
                699390,
                /* nBg */
                543697,
            },
            /* 28 */
            {
                /* nRg */
                683409,
                /* nBg */
                557329,
            },
            /* 29 */
            {
                /* nRg */
                667702,
                /* nBg */
                571275,
            },
            /* 30 */
            {
                /* nRg */
                652277,
                /* nBg */
                585514,
            },
            /* 31 */
            {
                /* nRg */
                637125,
                /* nBg */
                600058,
            },
            /* 32 */
            {
                /* nRg */
                622267,
                /* nBg */
                614895,
            },
            /* 33 */
            {
                /* nRg */
                613155,
                /* nBg */
                624291,
            },
            /* 34 */
            {
                /* nRg */
                604158,
                /* nBg */
                633791,
            },
            /* 35 */
            {
                /* nRg */
                595277,
                /* nBg */
                643396,
            },
            /* 36 */
            {
                /* nRg */
                586521,
                /* nBg */
                653116,
            },
            /* 37 */
            {
                /* nRg */
                577870,
                /* nBg */
                662941,
            },
            /* 38 */
            {
                /* nRg */
                569356,
                /* nBg */
                672871,
            },
            /* 39 */
            {
                /* nRg */
                560957,
                /* nBg */
                682896,
            },
            /* 40 */
            {
                /* nRg */
                552673,
                /* nBg */
                693035,
            },
            /* 41 */
            {
                /* nRg */
                547042,
                /* nBg */
                700071,
            },
            /* 42 */
            {
                /* nRg */
                541474,
                /* nBg */
                707149,
            },
            /* 43 */
            {
                /* nRg */
                535969,
                /* nBg */
                714290,
            },
            /* 44 */
            {
                /* nRg */
                530517,
                /* nBg */
                721462,
            },
            /* 45 */
            {
                /* nRg */
                525127,
                /* nBg */
                728687,
            },
            /* 46 */
            {
                /* nRg */
                519800,
                /* nBg */
                735954,
            },
            /* 47 */
            {
                /* nRg */
                514526,
                /* nBg */
                743273,
            },
            /* 48 */
            {
                /* nRg */
                509325,
                /* nBg */
                750623,
            },
            /* 49 */
            {
                /* nRg */
                477008,
                /* nBg */
                799487,
            },
            /* 50 */
            {
                /* nRg */
                447417,
                /* nBg */
                850028,
            },
            /* 51 */
            {
                /* nRg */
                420626,
                /* nBg */
                902121,
            },
            /* 52 */
            {
                /* nRg */
                396708,
                /* nBg */
                955588,
            },
            /* 53 */
            {
                /* nRg */
                375757,
                /* nBg */
                1010292,
            },
            /* 54 */
            {
                /* nRg */
                357816,
                /* nBg */
                1066045,
            },
            /* 55 */
            {
                /* nRg */
                342947,
                /* nBg */
                1122710,
            },
            /* 56 */
            {
                /* nRg */
                331193,
                /* nBg */
                1180088,
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
                    975176,
                    /* nBg */
                    229638,
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
                    799015,
                    /* nBg */
                    294650,
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
                    655360,
                    /* nBg */
                    378536,
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
                    503316,
                    /* nBg */
                    498074,
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
                    448791,
                    /* nBg */
                    609223,
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
                    397410,
                    /* nBg */
                    672137,
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
                    564134,
                    /* nBg */
                    370147,
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
                500,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                500,
            },
            /* nDampRatio */
            10000,
        },
        /* nMode */
        0,
        /* nIndex */
        0,
        /* nDampRatio */
        524288,
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
        1800,
        /* nCctMaxInner */
        8500,
        /* nCctMinOuter */
        1600,
        /* nCctMaxOuter */
        12000,
        /* nCctSplitHtoA */
        2800,
        /* nCctSplitAtoF */
        3300,
        /* nCctSplitFtoD5 */
        4700,
        /* nCctSplitD5toD6 */
        5600,
        /* nCctSplitD6toS */
        6600,
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
            {200, 200, 100, 50, 20, 10, 10, 10, /*0 - 7*/},
            {600, 500, 400, 400, 200, 100, 100, 100, /*0 - 7*/},
            {600, 500, 400, 400, 200, 100, 100, 100, /*0 - 7*/},
            {300, 200, 100, 50, 20, 10, 10, 10, /*0 - 7*/},
            {500, 300, 150, 150, 80, 30, 30, 30, /*0 - 7*/},
            {700, 700, 500, 400, 200, 100, 100, 100, /*0 - 7*/},
            {700, 700, 500, 400, 200, 100, 100, 100, /*0 - 7*/},
            {400, 200, 150, 150, 80, 30, 30, 30, /*0 - 7*/},
            {250, 200, 200, 100, 100, 50, 50, 100, /*0 - 7*/},
            {400, 400, 200, 300, 400, 400, 400, 300, /*0 - 7*/},
            {700, 600, 600, 600, 600, 600, 600, 400, /*0 - 7*/},
            {300, 250, 200, 100, 50, 50, 50, 50, /*0 - 7*/},
            {400, 400, 400, 200, 100, 100, 100, 100, /*0 - 7*/},
            {600, 900, 900, 600, 700, 700, 700, 600, /*0 - 7*/},
            {700, 900, 1000, 800, 800, 800, 700, 500, /*0 - 7*/},
            {500, 300, 300, 100, 50, 50, 50, 50, /*0 - 7*/},
            {500, 500, 400, 400, 300, 200, 200, 200, /*0 - 7*/},
            {700, 700, 700, 900, 900, 900, 900, 900, /*0 - 7*/},
            {900, 900, 900, 1000, 900, 900, 900, 900, /*0 - 7*/},
            {300, 200, 100, 80, 50, 50, 50, 50, /*0 - 7*/},
            {200, 200, 200, 200, 200, 100, 100, 100, /*0 - 7*/},
            {400, 500, 700, 500, 500, 500, 500, 500, /*0 - 7*/},
            {400, 800, 1000, 1000, 1000, 800, 700, 700, /*0 - 7*/},
            {200, 300, 500, 500, 400, 400, 100, 50, /*0 - 7*/},
        },
        /* nExtIlllumLuxWeight[32][8] */
        {
            {1000, 1000, 900, 500, 100, 0, 0, 0, /*0 - 7*/},
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
            {256, 512, 512, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 102, 205, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 0, 0, 512, 1024, 1024, 1024, 820, /*0 - 7*/},
        },
        /* bMixLightEn */
        1,
        /* nMixLightProba_0_CctStd[8] */
        {450, 450, 400, 450, 600, 9998, 9998, 9998, /*0 - 7*/},
        /* nMixLightProba_100_CctStd[8] */
        {750, 750, 600, 600, 1000, 9999, 9999, 9999, /*0 - 7*/},
        /* nMixLightProba_100_SatDiscnt[8] */
        {100, 100, 100, 100, 100, 100, 100, 100, /*0 - 7*/},
        /* nMixLightKneeNum */
        8,
        /* nMixLightKneeCctList[32] */
        {2300, 2800, 3500, 4600, 5500, 6500, 7500, 8500, /*0 - 7*/},
        /* nMixLightKneeWtList[8][32] */
        {
            {205, 307, 512, 717, 1024, 1024, 819, 358, /*0 - 7*/},
            {614, 614, 614, 1024, 1024, 820, 819, 358, /*0 - 7*/},
            {205, 205, 307, 820, 1024, 820, 819, 358, /*0 - 7*/},
            {205, 205, 410, 819, 922, 1024, 922, 358, /*0 - 7*/},
            {307, 307, 512, 1024, 1024, 820, 819, 358, /*0 - 7*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
        },
        /* tDomParamList[4] */
        {
            /* 0 */
            {
                /* nDominantEnable */
                0,
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
                0,
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
                0,
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
        1,
        /* nPreferCctNum */
        10,
        /* nPreferSrcCctList[32] */
        {1500, 2000, 2300, 2800, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
        /* nPreferDstCct[8][32] */
        {
            {1500, 2000, 2300, 2700, 3700, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 4800, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 5000, 6600, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2300, 2800, 3800, 5000, 6500, 9000, 10000, 12000, /*0 - 9*/},
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
        1,
        /* nGreenCutLuxListNum */
        4,
        /* nGreenCutCctListNum */
        4,
        /* nGreenCutLuxList[8] */
        {102400, 122880, 4096000, 4116480, /*0 - 3*/},
        /* nGreenCutWeight[8] */
        {1024, 10, 10, 1024, /*0 - 3*/},
        /* nGreenCutBreakAngle[8] */
        {125829, 125829, 125829, 125829, /*0 - 3*/},
        /* nGreenCutOffsetRg[8] */
        {-41943, -31457, -31457, -41943, /*0 - 3*/},
        /* nGreenCutOffsetBg[8] */
        {-52429, -41943, -41943, -52429, /*0 - 3*/},
        /* nGreenCutCctList[8] */
        {4608000, 4710400, 7116800, 7168000, /*0 - 3*/},
        /* nGreenCutCctDiscount[8] */
        {1024, 410, 410, 1024, /*0 - 3*/},
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
    /* tZoomTracking */
    {
        /* nDefaultDistance */
        0,
        /* nStepFactor */
        0,
        /* nProbStepCoff */
        0,
        /* nMaxProbeStep */
        0,
        /* nMinProbeStep */
        0,
        /* nFvDiffOverThresh */
        0,
        /* nFvDiffMiddleThresh */
        0,
        /* nFvDiffUnderThresh */
        0,
        /* nHeightDistanceCoff */
        0,
        /* nMiddleDistanceCoff */
        0,
        /* nUnderDistanceCoff */
        0,
        /* nProportionalCoff */
        0,
        /* nIntegralCoff */
        0,
        /* nDifferentialCoff */
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
    0,
    /* nRefMode */
    1,
    /* tDpcParam */
    {
        /* tHcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {154236277, 153976128, 153931397, 154786328, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {2651599, 3324422, 3685411, 1774564, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {7931792, 7935557, 7971379, 8007012, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {32432480, 31663460, 32006577, 31866601, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {33930221, 36227242, 35804793, 35182579, /*0 - 3*/},
        },
        /* tLcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {35416523, 35417714, 35423902, 35421682, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {-386665, -459927, -439376, -288491, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {2034207, 2001760, 1973960, 2031931, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {2031931, 18213528, 18883095, 17734840, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {49967466, 53292461, 51951927, 54656236, /*0 - 3*/},
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
        128,
        /* nDetFineStr */
        48,
        /* nDynamicDpcStr */
        128,
        /* nEdgeStr */
        54,
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
        12,
        /* nRefVal[16] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1026432, 2052684, /*0 - 11*/},
        /* nNoiseRatio[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 100, 86, 76, 66, /*0 - 11*/},
        /* nDpType[16] */
        {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, /*0 - 11*/},
        /* nNonChwiseEn[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nChwiseStr[16] */
        {30, 30, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, /*0 - 11*/},
        /* nDetCoarseStr[16] */
        {96, 128, 192, 192, 192, 210, 255, 255, 255, 225, 225, 225, /*0 - 11*/},
        /* nDetFineStr[16] */
        {48, 48, 48, 48, 48, 48, 48, 48, 48, 54, 60, 63, /*0 - 11*/},
        /* nDynamicDpcStr[16] */
        {128, 256, 512, 512, 1024, 1024, 1532, 2048, 2048, 3272, 4095, 4095, /*0 - 11*/},
        /* nEdgeStr[16] */
        {255, 255, 255, 255, 255, 255, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nHotColdTypeStr[16] */
        {32, 32, 32, 32, 32, 32, 48, 64, 64, 64, 64, 64, /*0 - 11*/},
        /* nSupWinkStr[16] */
        {255, 255, 255, 255, 255, 255, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
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
                256,
                /* nLowerLimit */
                256,
            },
            /* 7 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 8 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 9 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 10 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 11 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
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
                256,
                /* nLowerLimit */
                256,
            },
            /* 7 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 8 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 9 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 10 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 11 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
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
                256,
                /* nLowerLimit */
                256,
            },
            /* 7 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 8 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 9 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 10 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
            /* 11 */
            {
                /* nUpperLimit */
                256,
                /* nLowerLimit */
                256,
            },
        },
        /* nDynamicDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nStaticDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nNormalPixDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nPreDetLevelSlope[16] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nPreDetLevelOffset[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nPreDetLevelMax[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 11*/},
    },
};

const static AX_ISP_IQ_BLC_PARAM_T blc_param_sdr = {
    /* nBlcEnable */
    1,
    /* nSblEnable */
    1,
    /* nAutoMode */
    1,
    /* tBiasOut */
    {
        /* nBiasOut[4] */
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
            1,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 16384, 32382, 55525, 65536, 257218, 513216, 1026432, 2052684, /*0 - 11*/},
            /* nExposeTime[10] */
            { 5000, /*0 - 1*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
                {4096,  /*0 - 1*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
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
                },
                /* 1 */
                {
                    /* 0 */
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
                },
                /* 3 */
                {
                    /* 0 */
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
                },
                /* 5 */
                {
                    /* 0 */
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
                },
                /* 7 */
                {
                    /* 0 */
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
                },
                /* 9 */
                {
                    /* 0 */
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
                },
                /* 11 */
                {
                    /* 0 */
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
            12,
            /* nExposeTimeGrpNum */
            1,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1026432, 2052684, /*0 - 11*/},
            /* nExposeTime[10] */
            {5000, /*0 - 1*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
                {4096, /*0 - 1*/},
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
                },
                /* 1 */
                {
                    /* 0 */
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
                },
                /* 3 */
                {
                    /* 0 */
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
                },
                /* 5 */
                {
                    /* 0 */
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
                },
                /* 7 */
                {
                    /* 0 */
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
                },
                /* 9 */
                {
                    /* 0 */
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
                },
                /* 11 */
                {
                    /* 0 */
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
        /* nExpWeightGain[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tDgstParam */
    {
        /* nDeghostEnable */
        0,
        /* nDgstStrenThre[2] */
        {0, 0, /*0 - 1*/},
        /* nDgstStrenLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nDgstBaseFid */
        0,
    },
    /* tFusionParam */
    {
        /* nFusionProtectThreshold[2][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
    },
    /* tHdrManualParam */
    {
        /* nNoiseLutScale */
        0,
        /* nCoarseMotMaskNoiseLvl */
        0,
        /* nCoarseMotMaskSen */
        0,
        /* nCoarseExpMaskSen[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tHdrAutoParam */
    {
        /* nParamGrpNum */
        0,
        /* nRefVal[16] */
        {0, /*0 - 0*/},
        /* nNoiseLutScale[16] */
        {0, /*0 - 0*/},
        /* nCoarseMotMaskNoiseLvl[16] */
        {0, /*0 - 0*/},
        /* nCoarseMotMaskSen[16] */
        {0, /*0 - 0*/},
        /* nCoarseExpMaskSen[16][2] */
        {
            {0, 0, /*0 - 1*/},
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
        /* tMeta */
        {
            /* szModelPath[256] */
            "/opt/etc/models/aiisp/OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
            /* szModelName[256] */
            "OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
            /* szTemporalBaseNrName[256] */
            "0.3.0-Patch-VB1_3d_S1-R600C_SDR_iso300_5000_L1000_8000_F2_C1_M2",
            /* szSpatialBaseNrName[256] */
            "0.3.0-Patch-VB1_2d_S1-R600C_SDR_iso300_5000_L800_8000_F3_C2",
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
                    {16, 128, /*0 - 1*/},
                    {32, 128, /*0 - 1*/},
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
                    {0, 600, /*0 - 1*/},
                    {26, 3200, /*0 - 1*/},
                    {50, 3200, /*0 - 1*/},
                    {75, 3200, /*0 - 1*/},
                    {100, 3200, /*0 - 1*/},
                    {125, 3400, /*0 - 1*/},
                    {150, 3600, /*0 - 1*/},
                    {175, 3600, /*0 - 1*/},
                    {180, 3600, /*0 - 1*/},
                    {190, 3600, /*0 - 1*/},
                    {200, 3600, /*0 - 1*/},
                    {210, 3600, /*0 - 1*/},
                    {220, 3600, /*0 - 1*/},
                    {230, 3600, /*0 - 1*/},
                    {240, 3600, /*0 - 1*/},
                    {250, 3600, /*0 - 1*/},
                    {254, 3600, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_SDR_iso300_5000_L1000_8000_F2_C1_M2",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_SDR_iso300_5000_L800_8000_F3_C2",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    150,
                    /* nIsoThresholdMax */
                    1000,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
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
                        {5120, 14336, 24576, 28672, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {14336, 24576, 28672, 32768, /*0 - 3*/},
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
                        {5120, 14336, 24576, 28672, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {14336, 24576, 28672, 32768, /*0 - 3*/},
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
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
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
                        {5120, 14336, 24576, 28672, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {14336, 24576, 28672, 32768, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {29, 2000, /*0 - 1*/},
                                {55, 2000, /*0 - 1*/},
                                {77, 2000, /*0 - 1*/},
                                {102, 2200, /*0 - 1*/},
                                {124, 2500, /*0 - 1*/},
                                {150, 3000, /*0 - 1*/},
                                {175, 3300, /*0 - 1*/},
                                {180, 3300, /*0 - 1*/},
                                {190, 3300, /*0 - 1*/},
                                {200, 3300, /*0 - 1*/},
                                {210, 3300, /*0 - 1*/},
                                {220, 3300, /*0 - 1*/},
                                {230, 3300, /*0 - 1*/},
                                {240, 3300, /*0 - 1*/},
                                {250, 3300, /*0 - 1*/},
                                {254, 3300, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {29, 2000, /*0 - 1*/},
                                {55, 2000, /*0 - 1*/},
                                {77, 2000, /*0 - 1*/},
                                {102, 2200, /*0 - 1*/},
                                {124, 2500, /*0 - 1*/},
                                {150, 3000, /*0 - 1*/},
                                {175, 3300, /*0 - 1*/},
                                {180, 3300, /*0 - 1*/},
                                {190, 3300, /*0 - 1*/},
                                {200, 3300, /*0 - 1*/},
                                {210, 3300, /*0 - 1*/},
                                {220, 3300, /*0 - 1*/},
                                {230, 3300, /*0 - 1*/},
                                {240, 3300, /*0 - 1*/},
                                {250, 3300, /*0 - 1*/},
                                {254, 3300, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {29, 2000, /*0 - 1*/},
                                {55, 2000, /*0 - 1*/},
                                {77, 2000, /*0 - 1*/},
                                {102, 2200, /*0 - 1*/},
                                {124, 2500, /*0 - 1*/},
                                {150, 3000, /*0 - 1*/},
                                {175, 3300, /*0 - 1*/},
                                {180, 3300, /*0 - 1*/},
                                {190, 3300, /*0 - 1*/},
                                {200, 3300, /*0 - 1*/},
                                {210, 3300, /*0 - 1*/},
                                {220, 3300, /*0 - 1*/},
                                {230, 3300, /*0 - 1*/},
                                {240, 3300, /*0 - 1*/},
                                {250, 3300, /*0 - 1*/},
                                {254, 3300, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {29, 2000, /*0 - 1*/},
                                {55, 2000, /*0 - 1*/},
                                {77, 2000, /*0 - 1*/},
                                {102, 2200, /*0 - 1*/},
                                {124, 2500, /*0 - 1*/},
                                {150, 3000, /*0 - 1*/},
                                {175, 3300, /*0 - 1*/},
                                {180, 3300, /*0 - 1*/},
                                {190, 3300, /*0 - 1*/},
                                {200, 3300, /*0 - 1*/},
                                {210, 3300, /*0 - 1*/},
                                {220, 3300, /*0 - 1*/},
                                {230, 3300, /*0 - 1*/},
                                {240, 3300, /*0 - 1*/},
                                {250, 3300, /*0 - 1*/},
                                {254, 3300, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_SDR_iso300_5000_L1000_8000_F2_C1_M2",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_SDR_iso300_5000_L800_8000_F3_C2",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    1000,
                    /* nIsoThresholdMax */
                    1550,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
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
                        {32678, 36864, 40960, 45056, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {36864, 40960, 45056, 49152, /*0 - 3*/},
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
                        {32678, 36864, 40960, 45056, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {36864, 40960, 45056, 49152, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
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
                        {32678, 36864, 40960, 45056, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {36864, 40960, 45056, 49152, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {26, 2300, /*0 - 1*/},
                                {50, 2300, /*0 - 1*/},
                                {75, 2300, /*0 - 1*/},
                                {100, 2500, /*0 - 1*/},
                                {125, 2800, /*0 - 1*/},
                                {150, 3200, /*0 - 1*/},
                                {175, 3400, /*0 - 1*/},
                                {180, 3600, /*0 - 1*/},
                                {190, 3600, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {26, 2300, /*0 - 1*/},
                                {50, 2300, /*0 - 1*/},
                                {75, 2300, /*0 - 1*/},
                                {100, 2500, /*0 - 1*/},
                                {125, 2800, /*0 - 1*/},
                                {150, 3200, /*0 - 1*/},
                                {175, 3400, /*0 - 1*/},
                                {180, 3600, /*0 - 1*/},
                                {190, 3600, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 600, /*0 - 1*/},
                                {26, 3200, /*0 - 1*/},
                                {50, 3200, /*0 - 1*/},
                                {75, 3200, /*0 - 1*/},
                                {100, 3200, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3600, /*0 - 1*/},
                                {175, 3600, /*0 - 1*/},
                                {180, 3600, /*0 - 1*/},
                                {190, 3600, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 600, /*0 - 1*/},
                                {26, 3200, /*0 - 1*/},
                                {50, 3200, /*0 - 1*/},
                                {75, 3200, /*0 - 1*/},
                                {100, 3200, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3600, /*0 - 1*/},
                                {175, 3600, /*0 - 1*/},
                                {180, 3600, /*0 - 1*/},
                                {190, 3600, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_SDR_iso5000_80000_L1000_8000_F4_C3_M2",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_SDR_iso5000_20000_L200_2000_F6_C2",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    1550,
                    /* nIsoThresholdMax */
                    6200,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
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
                        {49152, 60304, 147456, 196607, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {60304, 147456, 196607, 196608, /*0 - 3*/},
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
                        {49152, 60304, 147456, 196607, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {60304, 147456, 196607, 196608, /*0 - 3*/},
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
                        {49152, 60304, 147456, 196607, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {60304, 147456, 196607, 196608, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2700, /*0 - 1*/},
                                {26, 2900, /*0 - 1*/},
                                {50, 3100, /*0 - 1*/},
                                {75, 3200, /*0 - 1*/},
                                {100, 3400, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3600, /*0 - 1*/},
                                {175, 3600, /*0 - 1*/},
                                {180, 3600, /*0 - 1*/},
                                {190, 3600, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3200, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3600, /*0 - 1*/},
                                {75, 4096, /*0 - 1*/},
                                {100, 4096, /*0 - 1*/},
                                {125, 4096, /*0 - 1*/},
                                {150, 4096, /*0 - 1*/},
                                {175, 4096, /*0 - 1*/},
                                {180, 4096, /*0 - 1*/},
                                {190, 4096, /*0 - 1*/},
                                {200, 4096, /*0 - 1*/},
                                {210, 4096, /*0 - 1*/},
                                {220, 4096, /*0 - 1*/},
                                {230, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {250, 4096, /*0 - 1*/},
                                {254, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 3200, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3600, /*0 - 1*/},
                                {75, 4096, /*0 - 1*/},
                                {100, 4096, /*0 - 1*/},
                                {125, 4096, /*0 - 1*/},
                                {150, 4096, /*0 - 1*/},
                                {175, 4096, /*0 - 1*/},
                                {180, 4096, /*0 - 1*/},
                                {190, 4096, /*0 - 1*/},
                                {200, 4096, /*0 - 1*/},
                                {210, 4096, /*0 - 1*/},
                                {220, 4096, /*0 - 1*/},
                                {230, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {250, 4096, /*0 - 1*/},
                                {254, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 3200, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3600, /*0 - 1*/},
                                {75, 4096, /*0 - 1*/},
                                {100, 4096, /*0 - 1*/},
                                {125, 4096, /*0 - 1*/},
                                {150, 4096, /*0 - 1*/},
                                {175, 4096, /*0 - 1*/},
                                {180, 4096, /*0 - 1*/},
                                {190, 4096, /*0 - 1*/},
                                {200, 4096, /*0 - 1*/},
                                {210, 4096, /*0 - 1*/},
                                {220, 4096, /*0 - 1*/},
                                {230, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {250, 4096, /*0 - 1*/},
                                {254, 4096, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_SDR_iso5000_80000_L1000_8000_F4_C3_M2",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_SDR_iso5000_20000_L200_2000_F6_C2",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    6200,
                    /* nIsoThresholdMax */
                    12400,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
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
                        {196608, 245760, 294912, 344064, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {245760, 294912, 344064, 393216, /*0 - 3*/},
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
                        {196608, 245760, 294912, 344064, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {245760, 294912, 344064, 393216, /*0 - 3*/},
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
                        {196608, 245760, 294912, 344064, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {245760, 294912, 344064, 393216, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1000, /*0 - 1*/},
                                {26, 2800, /*0 - 1*/},
                                {50, 3600, /*0 - 1*/},
                                {75, 4096, /*0 - 1*/},
                                {100, 4096, /*0 - 1*/},
                                {125, 4096, /*0 - 1*/},
                                {150, 4096, /*0 - 1*/},
                                {175, 4096, /*0 - 1*/},
                                {180, 4096, /*0 - 1*/},
                                {190, 4096, /*0 - 1*/},
                                {200, 4096, /*0 - 1*/},
                                {210, 4096, /*0 - 1*/},
                                {220, 4096, /*0 - 1*/},
                                {230, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {250, 4096, /*0 - 1*/},
                                {254, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1000, /*0 - 1*/},
                                {26, 2800, /*0 - 1*/},
                                {50, 3600, /*0 - 1*/},
                                {75, 4096, /*0 - 1*/},
                                {100, 4096, /*0 - 1*/},
                                {125, 4096, /*0 - 1*/},
                                {150, 4096, /*0 - 1*/},
                                {175, 4096, /*0 - 1*/},
                                {180, 4096, /*0 - 1*/},
                                {190, 4096, /*0 - 1*/},
                                {200, 4096, /*0 - 1*/},
                                {210, 4096, /*0 - 1*/},
                                {220, 4096, /*0 - 1*/},
                                {230, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {250, 4096, /*0 - 1*/},
                                {254, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 1000, /*0 - 1*/},
                                {26, 2800, /*0 - 1*/},
                                {50, 3600, /*0 - 1*/},
                                {75, 4096, /*0 - 1*/},
                                {100, 4096, /*0 - 1*/},
                                {125, 4096, /*0 - 1*/},
                                {150, 4096, /*0 - 1*/},
                                {175, 4096, /*0 - 1*/},
                                {180, 4096, /*0 - 1*/},
                                {190, 4096, /*0 - 1*/},
                                {200, 4096, /*0 - 1*/},
                                {210, 4096, /*0 - 1*/},
                                {220, 4096, /*0 - 1*/},
                                {230, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {250, 4096, /*0 - 1*/},
                                {254, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 3000, /*0 - 1*/},
                                {26, 3200, /*0 - 1*/},
                                {50, 3200, /*0 - 1*/},
                                {75, 3200, /*0 - 1*/},
                                {100, 3400, /*0 - 1*/},
                                {125, 3500, /*0 - 1*/},
                                {150, 3800, /*0 - 1*/},
                                {175, 3800, /*0 - 1*/},
                                {180, 3800, /*0 - 1*/},
                                {190, 3800, /*0 - 1*/},
                                {200, 3800, /*0 - 1*/},
                                {210, 3800, /*0 - 1*/},
                                {220, 3800, /*0 - 1*/},
                                {230, 3800, /*0 - 1*/},
                                {240, 3800, /*0 - 1*/},
                                {250, 3800, /*0 - 1*/},
                                {254, 3800, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szModelName[256] */
                    "OS04D10_SDR_S1-R600C_2560x1440_10b_HCG_ISP1_A1-50X_I1-16X_multi4_1734070862_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_SDR_iso5000_80000_L1000_8000_F4_C3_M2",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_SDR_iso20000_80000_L50_500_F7_C2",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    12400,
                    /* nIsoThresholdMax */
                    24800,
					/* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
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
                        {393216, 491520, 589824, 688128, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {491520, 589824, 688128, 793600, /*0 - 3*/},
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
                        {393216, 491520, 589824, 688128, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {491520, 589824, 688128, 793600, /*0 - 3*/},
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
                        {393216, 491520, 589824, 688128, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {491520, 589824, 688128, 793600, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2000, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3400, /*0 - 1*/},
                                {75, 3400, /*0 - 1*/},
                                {100, 3400, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3400, /*0 - 1*/},
                                {175, 3400, /*0 - 1*/},
                                {180, 3400, /*0 - 1*/},
                                {190, 3400, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2000, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3400, /*0 - 1*/},
                                {75, 3400, /*0 - 1*/},
                                {100, 3400, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3400, /*0 - 1*/},
                                {175, 3400, /*0 - 1*/},
                                {180, 3400, /*0 - 1*/},
                                {190, 3400, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2000, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3400, /*0 - 1*/},
                                {75, 3400, /*0 - 1*/},
                                {100, 3400, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3400, /*0 - 1*/},
                                {175, 3400, /*0 - 1*/},
                                {180, 3400, /*0 - 1*/},
                                {190, 3400, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2000, /*0 - 1*/},
                                {26, 3400, /*0 - 1*/},
                                {50, 3400, /*0 - 1*/},
                                {75, 3400, /*0 - 1*/},
                                {100, 3400, /*0 - 1*/},
                                {125, 3400, /*0 - 1*/},
                                {150, 3400, /*0 - 1*/},
                                {175, 3400, /*0 - 1*/},
                                {180, 3400, /*0 - 1*/},
                                {190, 3400, /*0 - 1*/},
                                {200, 3600, /*0 - 1*/},
                                {210, 3600, /*0 - 1*/},
                                {220, 3600, /*0 - 1*/},
                                {230, 3600, /*0 - 1*/},
                                {240, 3600, /*0 - 1*/},
                                {250, 3600, /*0 - 1*/},
                                {254, 3600, /*0 - 1*/},
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
                {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
            },
            /* nLowFreqNrFactor[2][17] */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
            },
            /* nHfNrStrength[2] */
            {64, 160, /*0 - 1*/},
            /* nMfNrStrength[2] */
            {64, 160, /*0 - 1*/},
        },
    },
    /* tAuto */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[12] */
        {1024, 3072, 5120, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nEdgePreserveRatio[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nNoiseProfileFactor[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nInterChannelStrength[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
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
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 1 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 2 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 3 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 4 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 5 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 6 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 7 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 8 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                            {512, 512, 512, 512, 512, 512, 512, 512, 573, 808, 1024, 1176, 1511, 1813, 2182, 2617, 3072, /*0 - 16*/},
                        },
                    },
                    /* nLowFreqNrFactor[12][2][17] */
                    {
                        /* nLowFreqNrFactor 0 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 1 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 2 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 3 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 4 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 5 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 6 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 7 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 8 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 47, 64, 83, 96, 111, 126, 144, 165, 192, /*0 - 16*/},
                        },
                    },
                    /* nHfNrStrength[12][2] */
                    {
                        {16, 16, /*0 - 1*/},
                        {64, 128, /*0 - 1*/},
                        {64, 128, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                    },
                    /* nMfNrStrength[12][2] */
                    {
                        {16, 16, /*0 - 1*/},
                        {64, 128, /*0 - 1*/},
                        {64, 128, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
                        {64, 160, /*0 - 1*/},
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
            0,
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
            1,
            /* nRefColorTempStart[8] */
            {0, /*0 - 0*/},
            /* nRefColorTempEnd[8] */
            {0, /*0 - 0*/},
            /* nColorTemp[8] */
            {0, /*0 - 0*/},
            /* nColorRatio[8] */
            {0, /*0 - 0*/},
            /* nRRMeshLut[8][15][19] */
            {
                /* nRRMeshLut 0 */
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
            /* nGRMeshLut[8][15][19] */
            {
                /* nGRMeshLut 0 */
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
            /* nGBMeshLut[8][15][19] */
            {
                /* nGBMeshLut 0 */
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
            /* nBBMeshLut[8][15][19] */
            {
                /* nBBMeshLut 0 */
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
        256,
        /* nWinSize */
        512,
    },
    /* tTempoFilter */
    {
        /* nAlpha */
        32768,
        /* nReset */
        0,
        /* nStopUpdating */
        0,
    },
    /* tLumaWt */
    {
        /* nLumaWeight[5] */
        {16, 16, 16, 16, 64, /*0 - 4*/},
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
        200,
    },
    /* tManualParam */
    {
        /* nKMax */
        3504,
        /* nPreGamma */
        32,
        /* nExtraDgain */
        16,
        /* nLog10Offset */
        86,
        /* nBaseGain */
        64,
        /* nDitherMode */
        0,
        /* nDitherScale */
        64,
        /* nHistWtBrightLow[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHistWtBrightHigh[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHistWtThreshold[4] */
        {129, 129, 129, 129, /*0 - 3*/},
        /* nSCurveList[1025] */
        {
            0, 81, 146, 206, 263, 318, 371, 423, 473, 523, 571, 619, 666, 713, 759, 805, 850, 894, 939, 982, 1026, 1069, 1112, 1155, 1197, 1239, 1280, 1322, 1363, 1404, 1445, 1486,  /* 0 - 31*/
            1526, 1566, 1606, 1646, 1685, 1725, 1764, 1803, 1842, 1881, 1920, 1958, 1997, 2035, 2073, 2111, 2149, 2187, 2224, 2262, 2299, 2336, 2374, 2411, 2448, 2485, 2521, 2558, 2594, 2631, 2667, 2704,  /* 32 - 63*/
            2740, 2776, 2812, 2848, 2884, 2919, 2955, 2991, 3026, 3062, 3097, 3132, 3168, 3203, 3238, 3273, 3308, 3343, 3378, 3412, 3447, 3482, 3516, 3551, 3585, 3619, 3654, 3688, 3722, 3756, 3790, 3824,  /* 64 - 95*/
            3858, 3892, 3926, 3960, 3994, 4027, 4061, 4095, 4128, 4162, 4195, 4228, 4262, 4295, 4328, 4361, 4395, 4428, 4461, 4494, 4527, 4560, 4593, 4625, 4658, 4691, 4724, 4756, 4789, 4822, 4854, 4887,  /* 96 - 127*/
            4919, 4952, 4984, 5016, 5049, 5081, 5113, 5145, 5177, 5210, 5242, 5274, 5306, 5338, 5370, 5402, 5433, 5465, 5497, 5529, 5561, 5592, 5624, 5656, 5687, 5719, 5750, 5782, 5813, 5845, 5876, 5908,  /* 128 - 159*/
            5939, 5970, 6001, 6033, 6064, 6095, 6126, 6157, 6189, 6220, 6251, 6282, 6313, 6344, 6375, 6406, 6437, 6467, 6498, 6529, 6560, 6591, 6621, 6652, 6683, 6713, 6744, 6775, 6805, 6836, 6866, 6897,  /* 160 - 191*/
            6927, 6958, 6988, 7018, 7049, 7079, 7109, 7140, 7170, 7200, 7231, 7261, 7291, 7321, 7351, 7381, 7411, 7442, 7472, 7502, 7532, 7562, 7592, 7621, 7651, 7681, 7711, 7741, 7771, 7801, 7830, 7860,  /* 192 - 223*/
            7890, 7920, 7949, 7979, 8009, 8038, 8068, 8098, 8127, 8157, 8186, 8216, 8245, 8275, 8304, 8334, 8363, 8393, 8422, 8451, 8481, 8510, 8539, 8569, 8598, 8627, 8656, 8686, 8715, 8744, 8773, 8802,  /* 224 - 255*/
            8832, 8861, 8890, 8919, 8948, 8977, 9006, 9035, 9065, 9094, 9123, 9152, 9181, 9210, 9239, 9268, 9298, 9327, 9356, 9385, 9414, 9443, 9472, 9501, 9531, 9560, 9589, 9618, 9647, 9676, 9705, 9734,  /* 256 - 287*/
            9764, 9793, 9822, 9851, 9880, 9909, 9938, 9967, 9997, 10026, 10055, 10084, 10113, 10142, 10171, 10200, 10230, 10259, 10288, 10317, 10346, 10375, 10404, 10433, 10463, 10492, 10521, 10550, 10579, 10608, 10637, 10666,  /* 288 - 319*/
            10696, 10725, 10754, 10783, 10812, 10841, 10870, 10899, 10929, 10958, 10987, 11016, 11045, 11074, 11103, 11132, 11162, 11191, 11220, 11249, 11278, 11307, 11336, 11365, 11395, 11424, 11453, 11482, 11511, 11540, 11569, 11598,  /* 320 - 351*/
            11628, 11657, 11686, 11715, 11744, 11773, 11802, 11831, 11861, 11890, 11919, 11948, 11977, 12006, 12035, 12064, 12094, 12123, 12152, 12181, 12210, 12239, 12268, 12297, 12327, 12356, 12385, 12414, 12443, 12472, 12501, 12530,  /* 352 - 383*/
            12560, 12589, 12618, 12647, 12676, 12705, 12734, 12763, 12793, 12822, 12851, 12880, 12909, 12938, 12967, 12996, 13026, 13055, 13084, 13113, 13142, 13171, 13200, 13229, 13259, 13288, 13317, 13346, 13375, 13404, 13433, 13462,  /* 384 - 415*/
            13492, 13521, 13550, 13579, 13608, 13637, 13666, 13695, 13725, 13754, 13783, 13812, 13841, 13870, 13899, 13928, 13958, 13987, 14016, 14045, 14074, 14103, 14132, 14161, 14191, 14220, 14249, 14278, 14307, 14336, 14365, 14394,  /* 416 - 447*/
            14424, 14453, 14482, 14511, 14540, 14569, 14598, 14627, 14657, 14686, 14715, 14744, 14773, 14802, 14831, 14860, 14890, 14919, 14948, 14977, 15006, 15035, 15064, 15093, 15123, 15152, 15181, 15210, 15239, 15268, 15297, 15326,  /* 448 - 479*/
            15356, 15385, 15414, 15443, 15472, 15501, 15530, 15559, 15589, 15618, 15647, 15676, 15705, 15734, 15763, 15792, 15822, 15851, 15880, 15909, 15938, 15967, 15996, 16025, 16055, 16084, 16113, 16142, 16171, 16200, 16229, 16258,  /* 480 - 511*/
            16288, 16317, 16346, 16375, 16404, 16433, 16462, 16491, 16521, 16550, 16579, 16608, 16637, 16666, 16695, 16724, 16754, 16783, 16812, 16841, 16870, 16899, 16928, 16957, 16987, 17016, 17045, 17074, 17103, 17132, 17161, 17190,  /* 512 - 543*/
            17220, 17249, 17278, 17307, 17336, 17365, 17394, 17423, 17453, 17482, 17511, 17540, 17569, 17598, 17627, 17656, 17686, 17715, 17744, 17773, 17802, 17831, 17860, 17889, 17919, 17948, 17977, 18006, 18035, 18064, 18093, 18122,  /* 544 - 575*/
            18152, 18181, 18210, 18239, 18268, 18297, 18326, 18355, 18385, 18414, 18443, 18472, 18501, 18530, 18559, 18588, 18618, 18647, 18676, 18705, 18734, 18763, 18792, 18821, 18851, 18880, 18909, 18938, 18967, 18996, 19025, 19054,  /* 576 - 607*/
            19084, 19113, 19142, 19171, 19200, 19229, 19258, 19287, 19317, 19346, 19375, 19404, 19433, 19462, 19491, 19520, 19550, 19579, 19608, 19637, 19666, 19695, 19724, 19753, 19783, 19812, 19841, 19870, 19899, 19928, 19957, 19986,  /* 608 - 639*/
            20016, 20045, 20074, 20103, 20132, 20161, 20190, 20219, 20249, 20278, 20307, 20336, 20365, 20394, 20423, 20452, 20482, 20511, 20540, 20569, 20598, 20627, 20656, 20685, 20715, 20744, 20773, 20802, 20831, 20860, 20889, 20918,  /* 640 - 671*/
            20948, 20977, 21006, 21035, 21064, 21093, 21122, 21151, 21181, 21210, 21239, 21268, 21297, 21326, 21355, 21384, 21414, 21443, 21472, 21501, 21530, 21559, 21588, 21617, 21647, 21676, 21705, 21734, 21763, 21792, 21821, 21850,  /* 672 - 703*/
            21880, 21909, 21938, 21967, 21996, 22025, 22054, 22083, 22113, 22142, 22171, 22200, 22229, 22258, 22287, 22316, 22346, 22375, 22404, 22433, 22462, 22491, 22520, 22549, 22579, 22608, 22637, 22666, 22695, 22724, 22753, 22782,  /* 704 - 735*/
            22812, 22841, 22870, 22899, 22928, 22957, 22986, 23015, 23045, 23074, 23103, 23132, 23161, 23190, 23219, 23248, 23278, 23307, 23336, 23365, 23394, 23423, 23452, 23481, 23511, 23540, 23569, 23598, 23627, 23656, 23685, 23714,  /* 736 - 767*/
            23744, 23773, 23802, 23831, 23860, 23889, 23919, 23948, 23977, 24006, 24036, 24065, 24094, 24124, 24153, 24183, 24212, 24242, 24271, 24301, 24330, 24360, 24389, 24419, 24448, 24478, 24508, 24537, 24567, 24597, 24627, 24656,  /* 768 - 799*/
            24686, 24716, 24746, 24776, 24806, 24835, 24865, 24895, 24925, 24955, 24985, 25015, 25046, 25076, 25106, 25136, 25166, 25196, 25227, 25257, 25287, 25317, 25348, 25378, 25409, 25439, 25469, 25500, 25530, 25561, 25591, 25622,  /* 800 - 831*/
            25653, 25683, 25714, 25745, 25775, 25806, 25837, 25868, 25898, 25929, 25960, 25991, 26022, 26053, 26084, 26115, 26146, 26177, 26208, 26240, 26271, 26302, 26333, 26364, 26396, 26427, 26459, 26490, 26521, 26553, 26584, 26616,  /* 832 - 863*/
            26648, 26679, 26711, 26743, 26774, 26806, 26838, 26870, 26902, 26933, 26965, 26997, 27029, 27061, 27093, 27126, 27158, 27190, 27222, 27255, 27287, 27319, 27352, 27384, 27417, 27449, 27482, 27514, 27547, 27580, 27612, 27645,  /* 864 - 895*/
            27678, 27711, 27744, 27777, 27810, 27843, 27876, 27909, 27942, 27976, 28009, 28042, 28076, 28109, 28143, 28176, 28210, 28243, 28277, 28311, 28345, 28378, 28412, 28446, 28480, 28514, 28549, 28583, 28617, 28651, 28686, 28720,  /* 896 - 927*/
            28755, 28789, 28824, 28859, 28893, 28928, 28963, 28998, 29033, 29068, 29103, 29139, 29174, 29209, 29245, 29280, 29316, 29352, 29387, 29423, 29459, 29495, 29531, 29567, 29604, 29640, 29676, 29713, 29750, 29786, 29823, 29860,  /* 928 - 959*/
            29897, 29934, 29971, 30009, 30046, 30084, 30121, 30159, 30197, 30235, 30273, 30311, 30350, 30388, 30427, 30465, 30504, 30543, 30583, 30622, 30661, 30701, 30741, 30781, 30821, 30861, 30902, 30942, 30983, 31024, 31065, 31107,  /* 960 - 991*/
            31149, 31190, 31233, 31275, 31318, 31361, 31404, 31447, 31491, 31535, 31580, 31624, 31670, 31715, 31761, 31808, 31854, 31902, 31950, 31998, 32048, 32098, 32148, 32200, 32253, 32306, 32361, 32418, 32477, 32539, 32604, 32675,  /* 992 - 1023*/
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
            9000,
            /* nDetailSigmaVal */
            1000,
            /* nDetailExtraStrPos */
            0,
            /* nDetailExtraStrNeg */
            0,
            /* nDetailGainLimitPos */
            65535,
            /* nDetailGainLimitNeg */
            65535,
            /* nSlopeStrengthLut[33] */
            {
                8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                8192, /*32 - 32*/
            },
            /* nSlopeCoeff */
            256,
        },
        /* tLowFreqEnh */
        {
            /* nRltmDetailLowEn */
            0,
            /* nSigmaDisBlur */
            9000,
            /* nDetailGainPosLow */
            128,
            /* nDetailGainNegLow */
            128,
            /* nDetailLimitPosLow */
            57344,
            /* nDetailLimitNegLow */
            57344,
            /* nSigmaDisPst */
            9000,
            /* nSigmaValPst */
            1000,
        },
        /* tHrParam */
        {
            /* nLocalFactor */
            110,
            /* nRltmStrength */
            55,
            /* nContrastStrength */
            44,
            /* nPostGamma */
            40,
            /* nHighlightSup */
            3,
            /* nDetailCoringPos */
            40,
            /* nDetailCoringNeg */
            40,
            /* nDetailGainPos */
            32,
            /* nDetailGainNeg */
            24,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 49600, 198400, 396800, 595200, 716800, /*0 - 11*/},
        /* nKMax[12] */
        {5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, /*0 - 11*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nLog10Offset[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nBaseGain[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 90, 90, /*0 - 11*/},
        /* nDitherMode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nDitherScale[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
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
                0, 123, 211, 290, 363, 432, 497, 561, 623, 683, 741, 798, 854, 909, 963, 1017, 1069, 1121, 1172, 1222, 1272, 1321, 1370, 1419, 1466, 1514, 1561, 1607, 1654, 1699, 1745, 1790,  /* 0 - 31*/
                1835, 1880, 1924, 1968, 2011, 2055, 2098, 2141, 2184, 2226, 2268, 2310, 2352, 2394, 2435, 2476, 2517, 2558, 2599, 2639, 2679, 2719, 2759, 2799, 2838, 2878, 2917, 2956, 2995, 3034, 3073, 3111,  /* 32 - 63*/
                3150, 3188, 3226, 3264, 3302, 3340, 3378, 3415, 3453, 3490, 3527, 3564, 3601, 3638, 3675, 3712, 3748, 3785, 3821, 3857, 3893, 3930, 3966, 4001, 4037, 4073, 4109, 4144, 4180, 4215, 4250, 4285,  /* 64 - 95*/
                4321, 4356, 4391, 4425, 4460, 4495, 4530, 4564, 4599, 4633, 4667, 4702, 4736, 4770, 4804, 4838, 4872, 4906, 4940, 4973, 5007, 5041, 5074, 5108, 5141, 5175, 5208, 5241, 5274, 5307, 5340, 5374,  /* 96 - 127*/
                5406, 5439, 5472, 5505, 5538, 5570, 5603, 5636, 5668, 5700, 5733, 5765, 5798, 5830, 5862, 5894, 5926, 5958, 5990, 6022, 6054, 6086, 6118, 6150, 6181, 6213, 6245, 6276, 6308, 6339, 6371, 6402,  /* 128 - 159*/
                6433, 6465, 6496, 6527, 6558, 6590, 6621, 6652, 6683, 6714, 6745, 6776, 6806, 6837, 6868, 6899, 6929, 6960, 6991, 7021, 7052, 7082, 7113, 7143, 7174, 7204, 7234, 7265, 7295, 7325, 7355, 7386,  /* 160 - 191*/
                7416, 7446, 7476, 7506, 7536, 7566, 7596, 7626, 7655, 7685, 7715, 7745, 7774, 7804, 7834, 7863, 7893, 7923, 7952, 7982, 8011, 8041, 8070, 8099, 8129, 8158, 8187, 8217, 8246, 8275, 8304, 8333,  /* 192 - 223*/
                8362, 8391, 8420, 8450, 8479, 8507, 8536, 8565, 8594, 8623, 8652, 8681, 8709, 8738, 8767, 8796, 8824, 8853, 8882, 8910, 8939, 8967, 8996, 9024, 9053, 9081, 9110, 9138, 9166, 9195, 9223, 9251,  /* 224 - 255*/
                9280, 9308, 9336, 9364, 9393, 9421, 9449, 9477, 9506, 9534, 9562, 9590, 9619, 9647, 9675, 9703, 9732, 9760, 9788, 9816, 9845, 9873, 9901, 9929, 9958, 9986, 10014, 10042, 10071, 10099, 10127, 10155,  /* 256 - 287*/
                10184, 10212, 10240, 10268, 10297, 10325, 10353, 10381, 10410, 10438, 10466, 10494, 10523, 10551, 10579, 10607, 10636, 10664, 10692, 10720, 10749, 10777, 10805, 10833, 10862, 10890, 10918, 10946, 10975, 11003, 11031, 11059,  /* 288 - 319*/
                11088, 11116, 11144, 11172, 11201, 11229, 11257, 11285, 11314, 11342, 11370, 11398, 11427, 11455, 11483, 11511, 11540, 11568, 11596, 11624, 11653, 11681, 11709, 11737, 11766, 11794, 11822, 11850, 11879, 11907, 11935, 11963,  /* 320 - 351*/
                11992, 12020, 12048, 12076, 12105, 12133, 12161, 12189, 12218, 12246, 12274, 12302, 12331, 12359, 12387, 12415, 12444, 12472, 12500, 12528, 12557, 12585, 12613, 12641, 12670, 12698, 12726, 12754, 12783, 12811, 12839, 12867,  /* 352 - 383*/
                12896, 12924, 12952, 12980, 13009, 13037, 13065, 13093, 13122, 13150, 13178, 13206, 13235, 13263, 13291, 13319, 13348, 13376, 13404, 13432, 13461, 13489, 13517, 13545, 13574, 13602, 13630, 13658, 13687, 13715, 13743, 13771,  /* 384 - 415*/
                13800, 13828, 13856, 13884, 13913, 13941, 13969, 13997, 14026, 14054, 14082, 14110, 14139, 14167, 14195, 14223, 14252, 14280, 14308, 14336, 14365, 14393, 14421, 14449, 14478, 14506, 14534, 14562, 14591, 14619, 14647, 14675,  /* 416 - 447*/
                14704, 14732, 14760, 14788, 14817, 14845, 14873, 14901, 14930, 14958, 14986, 15014, 15043, 15071, 15099, 15127, 15156, 15184, 15212, 15240, 15269, 15297, 15325, 15353, 15382, 15410, 15438, 15466, 15495, 15523, 15551, 15579,  /* 448 - 479*/
                15608, 15636, 15664, 15692, 15721, 15749, 15777, 15805, 15834, 15862, 15890, 15918, 15947, 15975, 16003, 16031, 16060, 16088, 16116, 16144, 16173, 16201, 16229, 16257, 16286, 16314, 16342, 16370, 16399, 16427, 16455, 16483,  /* 480 - 511*/
                16512, 16540, 16568, 16596, 16625, 16653, 16681, 16709, 16738, 16766, 16794, 16822, 16851, 16879, 16907, 16935, 16964, 16992, 17020, 17048, 17077, 17105, 17133, 17161, 17190, 17218, 17246, 17274, 17303, 17331, 17359, 17387,  /* 512 - 543*/
                17416, 17444, 17472, 17500, 17529, 17557, 17585, 17613, 17642, 17670, 17698, 17726, 17755, 17783, 17811, 17839, 17868, 17896, 17924, 17952, 17981, 18009, 18037, 18065, 18094, 18122, 18150, 18178, 18207, 18235, 18263, 18291,  /* 544 - 575*/
                18320, 18348, 18376, 18404, 18433, 18461, 18489, 18517, 18546, 18574, 18602, 18630, 18659, 18687, 18715, 18743, 18772, 18800, 18828, 18856, 18885, 18913, 18941, 18969, 18998, 19026, 19054, 19082, 19111, 19139, 19167, 19195,  /* 576 - 607*/
                19224, 19252, 19280, 19308, 19337, 19365, 19393, 19421, 19450, 19478, 19506, 19534, 19563, 19591, 19619, 19647, 19676, 19704, 19732, 19760, 19789, 19817, 19845, 19873, 19902, 19930, 19958, 19986, 20015, 20043, 20071, 20099,  /* 608 - 639*/
                20128, 20156, 20184, 20212, 20241, 20269, 20297, 20325, 20354, 20382, 20410, 20438, 20467, 20495, 20523, 20551, 20580, 20608, 20636, 20664, 20693, 20721, 20749, 20777, 20806, 20834, 20862, 20890, 20919, 20947, 20975, 21003,  /* 640 - 671*/
                21032, 21060, 21088, 21116, 21145, 21173, 21201, 21229, 21258, 21286, 21314, 21342, 21371, 21399, 21427, 21455, 21484, 21512, 21540, 21568, 21597, 21625, 21653, 21681, 21710, 21738, 21766, 21794, 21823, 21851, 21879, 21907,  /* 672 - 703*/
                21936, 21964, 21992, 22020, 22049, 22077, 22105, 22133, 22162, 22190, 22218, 22246, 22275, 22303, 22331, 22359, 22388, 22416, 22444, 22472, 22501, 22529, 22557, 22585, 22614, 22642, 22670, 22698, 22727, 22755, 22783, 22811,  /* 704 - 735*/
                22840, 22868, 22896, 22924, 22953, 22981, 23009, 23037, 23066, 23094, 23122, 23150, 23179, 23207, 23235, 23263, 23292, 23320, 23348, 23376, 23405, 23433, 23461, 23489, 23518, 23546, 23574, 23602, 23631, 23659, 23687, 23715,  /* 736 - 767*/
                23744, 23772, 23800, 23828, 23857, 23885, 23913, 23942, 23970, 23999, 24027, 24056, 24084, 24113, 24141, 24170, 24198, 24227, 24256, 24284, 24313, 24342, 24370, 24399, 24428, 24457, 24486, 24515, 24543, 24572, 24601, 24630,  /* 768 - 799*/
                24659, 24688, 24717, 24746, 24776, 24805, 24834, 24863, 24892, 24921, 24951, 24980, 25009, 25039, 25068, 25097, 25127, 25156, 25186, 25215, 25245, 25274, 25304, 25334, 25363, 25393, 25423, 25452, 25482, 25512, 25542, 25572,  /* 800 - 831*/
                25602, 25632, 25661, 25691, 25721, 25752, 25782, 25812, 25842, 25872, 25902, 25933, 25963, 25993, 26023, 26054, 26084, 26115, 26145, 26176, 26206, 26237, 26267, 26298, 26329, 26360, 26390, 26421, 26452, 26483, 26514, 26545,  /* 832 - 863*/
                26576, 26607, 26638, 26669, 26700, 26731, 26763, 26794, 26825, 26856, 26888, 26919, 26951, 26982, 27014, 27045, 27077, 27109, 27141, 27172, 27204, 27236, 27268, 27300, 27332, 27364, 27396, 27428, 27460, 27493, 27525, 27557,  /* 864 - 895*/
                27590, 27622, 27655, 27687, 27720, 27752, 27785, 27818, 27851, 27884, 27916, 27949, 27982, 28016, 28049, 28082, 28115, 28148, 28182, 28215, 28249, 28282, 28316, 28350, 28383, 28417, 28451, 28485, 28519, 28553, 28587, 28622,  /* 896 - 927*/
                28656, 28690, 28725, 28759, 28794, 28828, 28863, 28898, 28933, 28968, 29003, 29038, 29073, 29108, 29144, 29179, 29215, 29250, 29286, 29322, 29358, 29394, 29430, 29466, 29502, 29539, 29575, 29612, 29649, 29685, 29722, 29759,  /* 928 - 959*/
                29797, 29834, 29871, 29909, 29946, 29984, 30022, 30060, 30098, 30136, 30175, 30213, 30252, 30291, 30330, 30369, 30408, 30448, 30487, 30527, 30567, 30607, 30648, 30688, 30729, 30770, 30811, 30852, 30894, 30936, 30978, 31020,  /* 960 - 991*/
                31063, 31106, 31149, 31192, 31236, 31280, 31324, 31369, 31414, 31459, 31505, 31551, 31598, 31645, 31693, 31741, 31789, 31839, 31889, 31939, 31991, 32043, 32096, 32151, 32206, 32263, 32322, 32382, 32445, 32512, 32583, 32661,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 123, 211, 290, 363, 432, 497, 561, 623, 683, 741, 798, 854, 909, 963, 1017, 1069, 1121, 1172, 1222, 1272, 1321, 1370, 1419, 1466, 1514, 1561, 1607, 1654, 1699, 1745, 1790,  /* 0 - 31*/
                1835, 1880, 1924, 1968, 2011, 2055, 2098, 2141, 2184, 2226, 2268, 2310, 2352, 2394, 2435, 2476, 2517, 2558, 2599, 2639, 2679, 2719, 2759, 2799, 2838, 2878, 2917, 2956, 2995, 3034, 3073, 3111,  /* 32 - 63*/
                3150, 3188, 3226, 3264, 3302, 3340, 3378, 3415, 3453, 3490, 3527, 3564, 3601, 3638, 3675, 3712, 3748, 3785, 3821, 3857, 3893, 3930, 3966, 4001, 4037, 4073, 4109, 4144, 4180, 4215, 4250, 4285,  /* 64 - 95*/
                4321, 4356, 4391, 4425, 4460, 4495, 4530, 4564, 4599, 4633, 4667, 4702, 4736, 4770, 4804, 4838, 4872, 4906, 4940, 4973, 5007, 5041, 5074, 5108, 5141, 5175, 5208, 5241, 5274, 5307, 5340, 5374,  /* 96 - 127*/
                5406, 5439, 5472, 5505, 5538, 5570, 5603, 5636, 5668, 5700, 5733, 5765, 5798, 5830, 5862, 5894, 5926, 5958, 5990, 6022, 6054, 6086, 6118, 6150, 6181, 6213, 6245, 6276, 6308, 6339, 6371, 6402,  /* 128 - 159*/
                6433, 6465, 6496, 6527, 6558, 6590, 6621, 6652, 6683, 6714, 6745, 6776, 6806, 6837, 6868, 6899, 6929, 6960, 6991, 7021, 7052, 7082, 7113, 7143, 7174, 7204, 7234, 7265, 7295, 7325, 7355, 7386,  /* 160 - 191*/
                7416, 7446, 7476, 7506, 7536, 7566, 7596, 7626, 7655, 7685, 7715, 7745, 7774, 7804, 7834, 7863, 7893, 7923, 7952, 7982, 8011, 8041, 8070, 8099, 8129, 8158, 8187, 8217, 8246, 8275, 8304, 8333,  /* 192 - 223*/
                8362, 8391, 8420, 8450, 8479, 8507, 8536, 8565, 8594, 8623, 8652, 8681, 8709, 8738, 8767, 8796, 8824, 8853, 8882, 8910, 8939, 8967, 8996, 9024, 9053, 9081, 9110, 9138, 9166, 9195, 9223, 9251,  /* 224 - 255*/
                9280, 9308, 9336, 9364, 9393, 9421, 9449, 9477, 9506, 9534, 9562, 9590, 9619, 9647, 9675, 9703, 9732, 9760, 9788, 9816, 9845, 9873, 9901, 9929, 9958, 9986, 10014, 10042, 10071, 10099, 10127, 10155,  /* 256 - 287*/
                10184, 10212, 10240, 10268, 10297, 10325, 10353, 10381, 10410, 10438, 10466, 10494, 10523, 10551, 10579, 10607, 10636, 10664, 10692, 10720, 10749, 10777, 10805, 10833, 10862, 10890, 10918, 10946, 10975, 11003, 11031, 11059,  /* 288 - 319*/
                11088, 11116, 11144, 11172, 11201, 11229, 11257, 11285, 11314, 11342, 11370, 11398, 11427, 11455, 11483, 11511, 11540, 11568, 11596, 11624, 11653, 11681, 11709, 11737, 11766, 11794, 11822, 11850, 11879, 11907, 11935, 11963,  /* 320 - 351*/
                11992, 12020, 12048, 12076, 12105, 12133, 12161, 12189, 12218, 12246, 12274, 12302, 12331, 12359, 12387, 12415, 12444, 12472, 12500, 12528, 12557, 12585, 12613, 12641, 12670, 12698, 12726, 12754, 12783, 12811, 12839, 12867,  /* 352 - 383*/
                12896, 12924, 12952, 12980, 13009, 13037, 13065, 13093, 13122, 13150, 13178, 13206, 13235, 13263, 13291, 13319, 13348, 13376, 13404, 13432, 13461, 13489, 13517, 13545, 13574, 13602, 13630, 13658, 13687, 13715, 13743, 13771,  /* 384 - 415*/
                13800, 13828, 13856, 13884, 13913, 13941, 13969, 13997, 14026, 14054, 14082, 14110, 14139, 14167, 14195, 14223, 14252, 14280, 14308, 14336, 14365, 14393, 14421, 14449, 14478, 14506, 14534, 14562, 14591, 14619, 14647, 14675,  /* 416 - 447*/
                14704, 14732, 14760, 14788, 14817, 14845, 14873, 14901, 14930, 14958, 14986, 15014, 15043, 15071, 15099, 15127, 15156, 15184, 15212, 15240, 15269, 15297, 15325, 15353, 15382, 15410, 15438, 15466, 15495, 15523, 15551, 15579,  /* 448 - 479*/
                15608, 15636, 15664, 15692, 15721, 15749, 15777, 15805, 15834, 15862, 15890, 15918, 15947, 15975, 16003, 16031, 16060, 16088, 16116, 16144, 16173, 16201, 16229, 16257, 16286, 16314, 16342, 16370, 16399, 16427, 16455, 16483,  /* 480 - 511*/
                16512, 16540, 16568, 16596, 16625, 16653, 16681, 16709, 16738, 16766, 16794, 16822, 16851, 16879, 16907, 16935, 16964, 16992, 17020, 17048, 17077, 17105, 17133, 17161, 17190, 17218, 17246, 17274, 17303, 17331, 17359, 17387,  /* 512 - 543*/
                17416, 17444, 17472, 17500, 17529, 17557, 17585, 17613, 17642, 17670, 17698, 17726, 17755, 17783, 17811, 17839, 17868, 17896, 17924, 17952, 17981, 18009, 18037, 18065, 18094, 18122, 18150, 18178, 18207, 18235, 18263, 18291,  /* 544 - 575*/
                18320, 18348, 18376, 18404, 18433, 18461, 18489, 18517, 18546, 18574, 18602, 18630, 18659, 18687, 18715, 18743, 18772, 18800, 18828, 18856, 18885, 18913, 18941, 18969, 18998, 19026, 19054, 19082, 19111, 19139, 19167, 19195,  /* 576 - 607*/
                19224, 19252, 19280, 19308, 19337, 19365, 19393, 19421, 19450, 19478, 19506, 19534, 19563, 19591, 19619, 19647, 19676, 19704, 19732, 19760, 19789, 19817, 19845, 19873, 19902, 19930, 19958, 19986, 20015, 20043, 20071, 20099,  /* 608 - 639*/
                20128, 20156, 20184, 20212, 20241, 20269, 20297, 20325, 20354, 20382, 20410, 20438, 20467, 20495, 20523, 20551, 20580, 20608, 20636, 20664, 20693, 20721, 20749, 20777, 20806, 20834, 20862, 20890, 20919, 20947, 20975, 21003,  /* 640 - 671*/
                21032, 21060, 21088, 21116, 21145, 21173, 21201, 21229, 21258, 21286, 21314, 21342, 21371, 21399, 21427, 21455, 21484, 21512, 21540, 21568, 21597, 21625, 21653, 21681, 21710, 21738, 21766, 21794, 21823, 21851, 21879, 21907,  /* 672 - 703*/
                21936, 21964, 21992, 22020, 22049, 22077, 22105, 22133, 22162, 22190, 22218, 22246, 22275, 22303, 22331, 22359, 22388, 22416, 22444, 22472, 22501, 22529, 22557, 22585, 22614, 22642, 22670, 22698, 22727, 22755, 22783, 22811,  /* 704 - 735*/
                22840, 22868, 22896, 22924, 22953, 22981, 23009, 23037, 23066, 23094, 23122, 23150, 23179, 23207, 23235, 23263, 23292, 23320, 23348, 23376, 23405, 23433, 23461, 23489, 23518, 23546, 23574, 23602, 23631, 23659, 23687, 23715,  /* 736 - 767*/
                23744, 23772, 23800, 23828, 23857, 23885, 23913, 23942, 23970, 23999, 24027, 24056, 24084, 24113, 24141, 24170, 24198, 24227, 24256, 24284, 24313, 24342, 24370, 24399, 24428, 24457, 24486, 24515, 24543, 24572, 24601, 24630,  /* 768 - 799*/
                24659, 24688, 24717, 24746, 24776, 24805, 24834, 24863, 24892, 24921, 24951, 24980, 25009, 25039, 25068, 25097, 25127, 25156, 25186, 25215, 25245, 25274, 25304, 25334, 25363, 25393, 25423, 25452, 25482, 25512, 25542, 25572,  /* 800 - 831*/
                25602, 25632, 25661, 25691, 25721, 25752, 25782, 25812, 25842, 25872, 25902, 25933, 25963, 25993, 26023, 26054, 26084, 26115, 26145, 26176, 26206, 26237, 26267, 26298, 26329, 26360, 26390, 26421, 26452, 26483, 26514, 26545,  /* 832 - 863*/
                26576, 26607, 26638, 26669, 26700, 26731, 26763, 26794, 26825, 26856, 26888, 26919, 26951, 26982, 27014, 27045, 27077, 27109, 27141, 27172, 27204, 27236, 27268, 27300, 27332, 27364, 27396, 27428, 27460, 27493, 27525, 27557,  /* 864 - 895*/
                27590, 27622, 27655, 27687, 27720, 27752, 27785, 27818, 27851, 27884, 27916, 27949, 27982, 28016, 28049, 28082, 28115, 28148, 28182, 28215, 28249, 28282, 28316, 28350, 28383, 28417, 28451, 28485, 28519, 28553, 28587, 28622,  /* 896 - 927*/
                28656, 28690, 28725, 28759, 28794, 28828, 28863, 28898, 28933, 28968, 29003, 29038, 29073, 29108, 29144, 29179, 29215, 29250, 29286, 29322, 29358, 29394, 29430, 29466, 29502, 29539, 29575, 29612, 29649, 29685, 29722, 29759,  /* 928 - 959*/
                29797, 29834, 29871, 29909, 29946, 29984, 30022, 30060, 30098, 30136, 30175, 30213, 30252, 30291, 30330, 30369, 30408, 30448, 30487, 30527, 30567, 30607, 30648, 30688, 30729, 30770, 30811, 30852, 30894, 30936, 30978, 31020,  /* 960 - 991*/
                31063, 31106, 31149, 31192, 31236, 31280, 31324, 31369, 31414, 31459, 31505, 31551, 31598, 31645, 31693, 31741, 31789, 31839, 31889, 31939, 31991, 32043, 32096, 32151, 32206, 32263, 32322, 32382, 32445, 32512, 32583, 32661,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 154, 257, 348, 430, 508, 581, 652, 720, 785, 849, 911, 972, 1032, 1090, 1147, 1204, 1259, 1313, 1367, 1420, 1473, 1524, 1575, 1626, 1676, 1725, 1774, 1823, 1871, 1919, 1966,  /* 0 - 31*/
                2013, 2059, 2105, 2151, 2196, 2241, 2286, 2331, 2375, 2419, 2462, 2506, 2549, 2592, 2634, 2677, 2719, 2761, 2802, 2844, 2885, 2926, 2967, 3007, 3048, 3088, 3128, 3168, 3208, 3247, 3287, 3326,  /* 32 - 63*/
                3365, 3404, 3443, 3481, 3520, 3558, 3596, 3634, 3672, 3710, 3748, 3785, 3823, 3860, 3897, 3934, 3971, 4008, 4044, 4081, 4117, 4153, 4190, 4226, 4262, 4297, 4333, 4369, 4404, 4440, 4475, 4510,  /* 64 - 95*/
                4546, 4581, 4616, 4651, 4685, 4720, 4755, 4789, 4824, 4858, 4892, 4926, 4961, 4995, 5028, 5062, 5096, 5130, 5163, 5197, 5230, 5264, 5297, 5330, 5364, 5397, 5430, 5463, 5496, 5529, 5561, 5594,  /* 96 - 127*/
                5627, 5659, 5692, 5724, 5756, 5789, 5821, 5853, 5885, 5917, 5949, 5981, 6013, 6045, 6077, 6108, 6140, 6172, 6203, 6235, 6266, 6298, 6329, 6360, 6391, 6422, 6454, 6485, 6516, 6547, 6577, 6608,  /* 128 - 159*/
                6639, 6670, 6701, 6731, 6762, 6792, 6823, 6853, 6884, 6914, 6944, 6975, 7005, 7035, 7065, 7095, 7125, 7155, 7185, 7215, 7245, 7275, 7305, 7334, 7364, 7394, 7423, 7453, 7483, 7512, 7541, 7571,  /* 160 - 191*/
                7600, 7630, 7659, 7688, 7717, 7747, 7776, 7805, 7834, 7863, 7892, 7921, 7950, 7979, 8007, 8036, 8065, 8094, 8122, 8151, 8180, 8208, 8237, 8265, 8294, 8322, 8351, 8379, 8408, 8436, 8464, 8492,  /* 192 - 223*/
                8521, 8549, 8577, 8605, 8633, 8661, 8689, 8717, 8745, 8773, 8801, 8829, 8857, 8885, 8912, 8940, 8968, 8996, 9023, 9051, 9078, 9106, 9134, 9161, 9189, 9216, 9244, 9271, 9298, 9326, 9353, 9380,  /* 224 - 255*/
                9408, 9435, 9462, 9489, 9517, 9544, 9571, 9598, 9626, 9653, 9680, 9707, 9735, 9762, 9789, 9816, 9844, 9871, 9898, 9925, 9953, 9980, 10007, 10034, 10062, 10089, 10116, 10143, 10171, 10198, 10225, 10252,  /* 256 - 287*/
                10280, 10307, 10334, 10361, 10389, 10416, 10443, 10470, 10498, 10525, 10552, 10579, 10607, 10634, 10661, 10688, 10716, 10743, 10770, 10797, 10825, 10852, 10879, 10906, 10934, 10961, 10988, 11015, 11043, 11070, 11097, 11124,  /* 288 - 319*/
                11152, 11179, 11206, 11233, 11261, 11288, 11315, 11342, 11370, 11397, 11424, 11451, 11479, 11506, 11533, 11560, 11588, 11615, 11642, 11669, 11697, 11724, 11751, 11778, 11806, 11833, 11860, 11887, 11915, 11942, 11969, 11996,  /* 320 - 351*/
                12024, 12051, 12078, 12105, 12133, 12160, 12187, 12214, 12242, 12269, 12296, 12323, 12351, 12378, 12405, 12432, 12460, 12487, 12514, 12541, 12569, 12596, 12623, 12650, 12678, 12705, 12732, 12759, 12787, 12814, 12841, 12868,  /* 352 - 383*/
                12896, 12923, 12950, 12977, 13005, 13032, 13059, 13086, 13114, 13141, 13168, 13195, 13223, 13250, 13277, 13304, 13332, 13359, 13386, 13413, 13441, 13468, 13495, 13522, 13550, 13577, 13604, 13631, 13659, 13686, 13713, 13740,  /* 384 - 415*/
                13768, 13795, 13822, 13849, 13877, 13904, 13931, 13958, 13986, 14013, 14040, 14067, 14095, 14122, 14149, 14176, 14204, 14231, 14258, 14285, 14313, 14340, 14367, 14394, 14422, 14449, 14476, 14503, 14531, 14558, 14585, 14612,  /* 416 - 447*/
                14640, 14667, 14694, 14721, 14749, 14776, 14803, 14830, 14858, 14885, 14912, 14939, 14967, 14994, 15021, 15048, 15076, 15103, 15130, 15157, 15185, 15212, 15239, 15266, 15294, 15321, 15348, 15375, 15403, 15430, 15457, 15484,  /* 448 - 479*/
                15512, 15539, 15566, 15593, 15621, 15648, 15675, 15702, 15730, 15757, 15784, 15811, 15839, 15866, 15893, 15920, 15948, 15975, 16002, 16029, 16057, 16084, 16111, 16138, 16166, 16193, 16220, 16247, 16275, 16302, 16329, 16356,  /* 480 - 511*/
                16384, 16411, 16438, 16465, 16493, 16520, 16547, 16574, 16602, 16629, 16656, 16683, 16711, 16738, 16765, 16792, 16820, 16847, 16874, 16901, 16929, 16956, 16983, 17010, 17038, 17065, 17092, 17119, 17147, 17174, 17201, 17228,  /* 512 - 543*/
                17256, 17283, 17310, 17337, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17583, 17610, 17637, 17664, 17692, 17719, 17746, 17773, 17801, 17828, 17855, 17882, 17910, 17937, 17964, 17991, 18019, 18046, 18073, 18100,  /* 544 - 575*/
                18128, 18155, 18182, 18209, 18237, 18264, 18291, 18318, 18346, 18373, 18400, 18427, 18455, 18482, 18509, 18536, 18564, 18591, 18618, 18645, 18673, 18700, 18727, 18754, 18782, 18809, 18836, 18863, 18891, 18918, 18945, 18972,  /* 576 - 607*/
                19000, 19027, 19054, 19081, 19109, 19136, 19163, 19190, 19218, 19245, 19272, 19299, 19327, 19354, 19381, 19408, 19436, 19463, 19490, 19517, 19545, 19572, 19599, 19626, 19654, 19681, 19708, 19735, 19763, 19790, 19817, 19844,  /* 608 - 639*/
                19872, 19899, 19926, 19953, 19981, 20008, 20035, 20062, 20090, 20117, 20144, 20171, 20199, 20226, 20253, 20280, 20308, 20335, 20362, 20389, 20417, 20444, 20471, 20498, 20526, 20553, 20580, 20607, 20635, 20662, 20689, 20716,  /* 640 - 671*/
                20744, 20771, 20798, 20825, 20853, 20880, 20907, 20934, 20962, 20989, 21016, 21043, 21071, 21098, 21125, 21152, 21180, 21207, 21234, 21261, 21289, 21316, 21343, 21370, 21398, 21425, 21452, 21479, 21507, 21534, 21561, 21588,  /* 672 - 703*/
                21616, 21643, 21670, 21697, 21725, 21752, 21779, 21806, 21834, 21861, 21888, 21915, 21943, 21970, 21997, 22024, 22052, 22079, 22106, 22133, 22161, 22188, 22215, 22242, 22270, 22297, 22324, 22351, 22379, 22406, 22433, 22460,  /* 704 - 735*/
                22488, 22515, 22542, 22569, 22597, 22624, 22651, 22678, 22706, 22733, 22760, 22787, 22815, 22842, 22869, 22896, 22924, 22951, 22978, 23005, 23033, 23060, 23087, 23114, 23142, 23169, 23196, 23223, 23251, 23278, 23305, 23332,  /* 736 - 767*/
                23360, 23387, 23414, 23441, 23469, 23496, 23524, 23551, 23578, 23606, 23633, 23661, 23689, 23716, 23744, 23771, 23799, 23827, 23855, 23882, 23910, 23938, 23966, 23994, 24022, 24050, 24078, 24106, 24134, 24162, 24190, 24218,  /* 768 - 799*/
                24246, 24275, 24303, 24331, 24359, 24388, 24416, 24445, 24473, 24502, 24530, 24559, 24587, 24616, 24645, 24673, 24702, 24731, 24760, 24788, 24817, 24846, 24875, 24904, 24933, 24962, 24991, 25020, 25050, 25079, 25108, 25137,  /* 800 - 831*/
                25167, 25196, 25226, 25255, 25284, 25314, 25344, 25373, 25403, 25433, 25462, 25492, 25522, 25552, 25582, 25612, 25642, 25672, 25702, 25732, 25762, 25792, 25823, 25853, 25883, 25914, 25944, 25975, 26005, 26036, 26066, 26097,  /* 832 - 863*/
                26128, 26159, 26190, 26220, 26251, 26282, 26313, 26345, 26376, 26407, 26438, 26469, 26501, 26532, 26564, 26595, 26627, 26659, 26690, 26722, 26754, 26786, 26818, 26850, 26882, 26914, 26946, 26978, 27011, 27043, 27075, 27108,  /* 864 - 895*/
                27140, 27173, 27206, 27238, 27271, 27304, 27337, 27370, 27403, 27437, 27470, 27503, 27537, 27570, 27604, 27637, 27671, 27705, 27739, 27772, 27806, 27841, 27875, 27909, 27943, 27978, 28012, 28047, 28082, 28116, 28151, 28186,  /* 896 - 927*/
                28221, 28257, 28292, 28327, 28363, 28398, 28434, 28470, 28505, 28541, 28577, 28614, 28650, 28686, 28723, 28759, 28796, 28833, 28870, 28907, 28944, 28982, 29019, 29057, 29095, 29133, 29171, 29209, 29247, 29286, 29324, 29363,  /* 928 - 959*/
                29402, 29441, 29480, 29520, 29559, 29599, 29639, 29679, 29719, 29760, 29800, 29841, 29882, 29923, 29965, 30006, 30048, 30090, 30133, 30175, 30218, 30261, 30305, 30348, 30392, 30436, 30481, 30526, 30571, 30616, 30662, 30708,  /* 960 - 991*/
                30754, 30801, 30848, 30896, 30944, 30993, 31042, 31091, 31141, 31192, 31243, 31294, 31347, 31400, 31454, 31508, 31563, 31620, 31677, 31735, 31795, 31856, 31918, 31982, 32047, 32115, 32186, 32259, 32337, 32420, 32510, 32613,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 154, 257, 348, 430, 508, 581, 652, 720, 785, 849, 911, 972, 1032, 1090, 1147, 1204, 1259, 1313, 1367, 1420, 1473, 1524, 1575, 1626, 1676, 1725, 1774, 1823, 1871, 1919, 1966,  /* 0 - 31*/
                2013, 2059, 2105, 2151, 2196, 2241, 2286, 2331, 2375, 2419, 2462, 2506, 2549, 2592, 2634, 2677, 2719, 2761, 2802, 2844, 2885, 2926, 2967, 3007, 3048, 3088, 3128, 3168, 3208, 3247, 3287, 3326,  /* 32 - 63*/
                3365, 3404, 3443, 3481, 3520, 3558, 3596, 3634, 3672, 3710, 3748, 3785, 3823, 3860, 3897, 3934, 3971, 4008, 4044, 4081, 4117, 4153, 4190, 4226, 4262, 4297, 4333, 4369, 4404, 4440, 4475, 4510,  /* 64 - 95*/
                4546, 4581, 4616, 4651, 4685, 4720, 4755, 4789, 4824, 4858, 4892, 4926, 4961, 4995, 5028, 5062, 5096, 5130, 5163, 5197, 5230, 5264, 5297, 5330, 5364, 5397, 5430, 5463, 5496, 5529, 5561, 5594,  /* 96 - 127*/
                5627, 5659, 5692, 5724, 5756, 5789, 5821, 5853, 5885, 5917, 5949, 5981, 6013, 6045, 6077, 6108, 6140, 6172, 6203, 6235, 6266, 6298, 6329, 6360, 6391, 6422, 6454, 6485, 6516, 6547, 6577, 6608,  /* 128 - 159*/
                6639, 6670, 6701, 6731, 6762, 6792, 6823, 6853, 6884, 6914, 6944, 6975, 7005, 7035, 7065, 7095, 7125, 7155, 7185, 7215, 7245, 7275, 7305, 7334, 7364, 7394, 7423, 7453, 7483, 7512, 7541, 7571,  /* 160 - 191*/
                7600, 7630, 7659, 7688, 7717, 7747, 7776, 7805, 7834, 7863, 7892, 7921, 7950, 7979, 8007, 8036, 8065, 8094, 8122, 8151, 8180, 8208, 8237, 8265, 8294, 8322, 8351, 8379, 8408, 8436, 8464, 8492,  /* 192 - 223*/
                8521, 8549, 8577, 8605, 8633, 8661, 8689, 8717, 8745, 8773, 8801, 8829, 8857, 8885, 8912, 8940, 8968, 8996, 9023, 9051, 9078, 9106, 9134, 9161, 9189, 9216, 9244, 9271, 9298, 9326, 9353, 9380,  /* 224 - 255*/
                9408, 9435, 9462, 9489, 9517, 9544, 9571, 9598, 9626, 9653, 9680, 9707, 9735, 9762, 9789, 9816, 9844, 9871, 9898, 9925, 9953, 9980, 10007, 10034, 10062, 10089, 10116, 10143, 10171, 10198, 10225, 10252,  /* 256 - 287*/
                10280, 10307, 10334, 10361, 10389, 10416, 10443, 10470, 10498, 10525, 10552, 10579, 10607, 10634, 10661, 10688, 10716, 10743, 10770, 10797, 10825, 10852, 10879, 10906, 10934, 10961, 10988, 11015, 11043, 11070, 11097, 11124,  /* 288 - 319*/
                11152, 11179, 11206, 11233, 11261, 11288, 11315, 11342, 11370, 11397, 11424, 11451, 11479, 11506, 11533, 11560, 11588, 11615, 11642, 11669, 11697, 11724, 11751, 11778, 11806, 11833, 11860, 11887, 11915, 11942, 11969, 11996,  /* 320 - 351*/
                12024, 12051, 12078, 12105, 12133, 12160, 12187, 12214, 12242, 12269, 12296, 12323, 12351, 12378, 12405, 12432, 12460, 12487, 12514, 12541, 12569, 12596, 12623, 12650, 12678, 12705, 12732, 12759, 12787, 12814, 12841, 12868,  /* 352 - 383*/
                12896, 12923, 12950, 12977, 13005, 13032, 13059, 13086, 13114, 13141, 13168, 13195, 13223, 13250, 13277, 13304, 13332, 13359, 13386, 13413, 13441, 13468, 13495, 13522, 13550, 13577, 13604, 13631, 13659, 13686, 13713, 13740,  /* 384 - 415*/
                13768, 13795, 13822, 13849, 13877, 13904, 13931, 13958, 13986, 14013, 14040, 14067, 14095, 14122, 14149, 14176, 14204, 14231, 14258, 14285, 14313, 14340, 14367, 14394, 14422, 14449, 14476, 14503, 14531, 14558, 14585, 14612,  /* 416 - 447*/
                14640, 14667, 14694, 14721, 14749, 14776, 14803, 14830, 14858, 14885, 14912, 14939, 14967, 14994, 15021, 15048, 15076, 15103, 15130, 15157, 15185, 15212, 15239, 15266, 15294, 15321, 15348, 15375, 15403, 15430, 15457, 15484,  /* 448 - 479*/
                15512, 15539, 15566, 15593, 15621, 15648, 15675, 15702, 15730, 15757, 15784, 15811, 15839, 15866, 15893, 15920, 15948, 15975, 16002, 16029, 16057, 16084, 16111, 16138, 16166, 16193, 16220, 16247, 16275, 16302, 16329, 16356,  /* 480 - 511*/
                16384, 16411, 16438, 16465, 16493, 16520, 16547, 16574, 16602, 16629, 16656, 16683, 16711, 16738, 16765, 16792, 16820, 16847, 16874, 16901, 16929, 16956, 16983, 17010, 17038, 17065, 17092, 17119, 17147, 17174, 17201, 17228,  /* 512 - 543*/
                17256, 17283, 17310, 17337, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17583, 17610, 17637, 17664, 17692, 17719, 17746, 17773, 17801, 17828, 17855, 17882, 17910, 17937, 17964, 17991, 18019, 18046, 18073, 18100,  /* 544 - 575*/
                18128, 18155, 18182, 18209, 18237, 18264, 18291, 18318, 18346, 18373, 18400, 18427, 18455, 18482, 18509, 18536, 18564, 18591, 18618, 18645, 18673, 18700, 18727, 18754, 18782, 18809, 18836, 18863, 18891, 18918, 18945, 18972,  /* 576 - 607*/
                19000, 19027, 19054, 19081, 19109, 19136, 19163, 19190, 19218, 19245, 19272, 19299, 19327, 19354, 19381, 19408, 19436, 19463, 19490, 19517, 19545, 19572, 19599, 19626, 19654, 19681, 19708, 19735, 19763, 19790, 19817, 19844,  /* 608 - 639*/
                19872, 19899, 19926, 19953, 19981, 20008, 20035, 20062, 20090, 20117, 20144, 20171, 20199, 20226, 20253, 20280, 20308, 20335, 20362, 20389, 20417, 20444, 20471, 20498, 20526, 20553, 20580, 20607, 20635, 20662, 20689, 20716,  /* 640 - 671*/
                20744, 20771, 20798, 20825, 20853, 20880, 20907, 20934, 20962, 20989, 21016, 21043, 21071, 21098, 21125, 21152, 21180, 21207, 21234, 21261, 21289, 21316, 21343, 21370, 21398, 21425, 21452, 21479, 21507, 21534, 21561, 21588,  /* 672 - 703*/
                21616, 21643, 21670, 21697, 21725, 21752, 21779, 21806, 21834, 21861, 21888, 21915, 21943, 21970, 21997, 22024, 22052, 22079, 22106, 22133, 22161, 22188, 22215, 22242, 22270, 22297, 22324, 22351, 22379, 22406, 22433, 22460,  /* 704 - 735*/
                22488, 22515, 22542, 22569, 22597, 22624, 22651, 22678, 22706, 22733, 22760, 22787, 22815, 22842, 22869, 22896, 22924, 22951, 22978, 23005, 23033, 23060, 23087, 23114, 23142, 23169, 23196, 23223, 23251, 23278, 23305, 23332,  /* 736 - 767*/
                23360, 23387, 23414, 23441, 23469, 23496, 23524, 23551, 23578, 23606, 23633, 23661, 23689, 23716, 23744, 23771, 23799, 23827, 23855, 23882, 23910, 23938, 23966, 23994, 24022, 24050, 24078, 24106, 24134, 24162, 24190, 24218,  /* 768 - 799*/
                24246, 24275, 24303, 24331, 24359, 24388, 24416, 24445, 24473, 24502, 24530, 24559, 24587, 24616, 24645, 24673, 24702, 24731, 24760, 24788, 24817, 24846, 24875, 24904, 24933, 24962, 24991, 25020, 25050, 25079, 25108, 25137,  /* 800 - 831*/
                25167, 25196, 25226, 25255, 25284, 25314, 25344, 25373, 25403, 25433, 25462, 25492, 25522, 25552, 25582, 25612, 25642, 25672, 25702, 25732, 25762, 25792, 25823, 25853, 25883, 25914, 25944, 25975, 26005, 26036, 26066, 26097,  /* 832 - 863*/
                26128, 26159, 26190, 26220, 26251, 26282, 26313, 26345, 26376, 26407, 26438, 26469, 26501, 26532, 26564, 26595, 26627, 26659, 26690, 26722, 26754, 26786, 26818, 26850, 26882, 26914, 26946, 26978, 27011, 27043, 27075, 27108,  /* 864 - 895*/
                27140, 27173, 27206, 27238, 27271, 27304, 27337, 27370, 27403, 27437, 27470, 27503, 27537, 27570, 27604, 27637, 27671, 27705, 27739, 27772, 27806, 27841, 27875, 27909, 27943, 27978, 28012, 28047, 28082, 28116, 28151, 28186,  /* 896 - 927*/
                28221, 28257, 28292, 28327, 28363, 28398, 28434, 28470, 28505, 28541, 28577, 28614, 28650, 28686, 28723, 28759, 28796, 28833, 28870, 28907, 28944, 28982, 29019, 29057, 29095, 29133, 29171, 29209, 29247, 29286, 29324, 29363,  /* 928 - 959*/
                29402, 29441, 29480, 29520, 29559, 29599, 29639, 29679, 29719, 29760, 29800, 29841, 29882, 29923, 29965, 30006, 30048, 30090, 30133, 30175, 30218, 30261, 30305, 30348, 30392, 30436, 30481, 30526, 30571, 30616, 30662, 30708,  /* 960 - 991*/
                30754, 30801, 30848, 30896, 30944, 30993, 31042, 31091, 31141, 31192, 31243, 31294, 31347, 31400, 31454, 31508, 31563, 31620, 31677, 31735, 31795, 31856, 31918, 31982, 32047, 32115, 32186, 32259, 32337, 32420, 32510, 32613,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 154, 257, 348, 430, 508, 581, 652, 720, 785, 849, 911, 972, 1032, 1090, 1147, 1204, 1259, 1313, 1367, 1420, 1473, 1524, 1575, 1626, 1676, 1725, 1774, 1823, 1871, 1919, 1966,  /* 0 - 31*/
                2013, 2059, 2105, 2151, 2196, 2241, 2286, 2331, 2375, 2419, 2462, 2506, 2549, 2592, 2634, 2677, 2719, 2761, 2802, 2844, 2885, 2926, 2967, 3007, 3048, 3088, 3128, 3168, 3208, 3247, 3287, 3326,  /* 32 - 63*/
                3365, 3404, 3443, 3481, 3520, 3558, 3596, 3634, 3672, 3710, 3748, 3785, 3823, 3860, 3897, 3934, 3971, 4008, 4044, 4081, 4117, 4153, 4190, 4226, 4262, 4297, 4333, 4369, 4404, 4440, 4475, 4510,  /* 64 - 95*/
                4546, 4581, 4616, 4651, 4685, 4720, 4755, 4789, 4824, 4858, 4892, 4926, 4961, 4995, 5028, 5062, 5096, 5130, 5163, 5197, 5230, 5264, 5297, 5330, 5364, 5397, 5430, 5463, 5496, 5529, 5561, 5594,  /* 96 - 127*/
                5627, 5659, 5692, 5724, 5756, 5789, 5821, 5853, 5885, 5917, 5949, 5981, 6013, 6045, 6077, 6108, 6140, 6172, 6203, 6235, 6266, 6298, 6329, 6360, 6391, 6422, 6454, 6485, 6516, 6547, 6577, 6608,  /* 128 - 159*/
                6639, 6670, 6701, 6731, 6762, 6792, 6823, 6853, 6884, 6914, 6944, 6975, 7005, 7035, 7065, 7095, 7125, 7155, 7185, 7215, 7245, 7275, 7305, 7334, 7364, 7394, 7423, 7453, 7483, 7512, 7541, 7571,  /* 160 - 191*/
                7600, 7630, 7659, 7688, 7717, 7747, 7776, 7805, 7834, 7863, 7892, 7921, 7950, 7979, 8007, 8036, 8065, 8094, 8122, 8151, 8180, 8208, 8237, 8265, 8294, 8322, 8351, 8379, 8408, 8436, 8464, 8492,  /* 192 - 223*/
                8521, 8549, 8577, 8605, 8633, 8661, 8689, 8717, 8745, 8773, 8801, 8829, 8857, 8885, 8912, 8940, 8968, 8996, 9023, 9051, 9078, 9106, 9134, 9161, 9189, 9216, 9244, 9271, 9298, 9326, 9353, 9380,  /* 224 - 255*/
                9408, 9435, 9462, 9489, 9517, 9544, 9571, 9598, 9626, 9653, 9680, 9707, 9735, 9762, 9789, 9816, 9844, 9871, 9898, 9925, 9953, 9980, 10007, 10034, 10062, 10089, 10116, 10143, 10171, 10198, 10225, 10252,  /* 256 - 287*/
                10280, 10307, 10334, 10361, 10389, 10416, 10443, 10470, 10498, 10525, 10552, 10579, 10607, 10634, 10661, 10688, 10716, 10743, 10770, 10797, 10825, 10852, 10879, 10906, 10934, 10961, 10988, 11015, 11043, 11070, 11097, 11124,  /* 288 - 319*/
                11152, 11179, 11206, 11233, 11261, 11288, 11315, 11342, 11370, 11397, 11424, 11451, 11479, 11506, 11533, 11560, 11588, 11615, 11642, 11669, 11697, 11724, 11751, 11778, 11806, 11833, 11860, 11887, 11915, 11942, 11969, 11996,  /* 320 - 351*/
                12024, 12051, 12078, 12105, 12133, 12160, 12187, 12214, 12242, 12269, 12296, 12323, 12351, 12378, 12405, 12432, 12460, 12487, 12514, 12541, 12569, 12596, 12623, 12650, 12678, 12705, 12732, 12759, 12787, 12814, 12841, 12868,  /* 352 - 383*/
                12896, 12923, 12950, 12977, 13005, 13032, 13059, 13086, 13114, 13141, 13168, 13195, 13223, 13250, 13277, 13304, 13332, 13359, 13386, 13413, 13441, 13468, 13495, 13522, 13550, 13577, 13604, 13631, 13659, 13686, 13713, 13740,  /* 384 - 415*/
                13768, 13795, 13822, 13849, 13877, 13904, 13931, 13958, 13986, 14013, 14040, 14067, 14095, 14122, 14149, 14176, 14204, 14231, 14258, 14285, 14313, 14340, 14367, 14394, 14422, 14449, 14476, 14503, 14531, 14558, 14585, 14612,  /* 416 - 447*/
                14640, 14667, 14694, 14721, 14749, 14776, 14803, 14830, 14858, 14885, 14912, 14939, 14967, 14994, 15021, 15048, 15076, 15103, 15130, 15157, 15185, 15212, 15239, 15266, 15294, 15321, 15348, 15375, 15403, 15430, 15457, 15484,  /* 448 - 479*/
                15512, 15539, 15566, 15593, 15621, 15648, 15675, 15702, 15730, 15757, 15784, 15811, 15839, 15866, 15893, 15920, 15948, 15975, 16002, 16029, 16057, 16084, 16111, 16138, 16166, 16193, 16220, 16247, 16275, 16302, 16329, 16356,  /* 480 - 511*/
                16384, 16411, 16438, 16465, 16493, 16520, 16547, 16574, 16602, 16629, 16656, 16683, 16711, 16738, 16765, 16792, 16820, 16847, 16874, 16901, 16929, 16956, 16983, 17010, 17038, 17065, 17092, 17119, 17147, 17174, 17201, 17228,  /* 512 - 543*/
                17256, 17283, 17310, 17337, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17583, 17610, 17637, 17664, 17692, 17719, 17746, 17773, 17801, 17828, 17855, 17882, 17910, 17937, 17964, 17991, 18019, 18046, 18073, 18100,  /* 544 - 575*/
                18128, 18155, 18182, 18209, 18237, 18264, 18291, 18318, 18346, 18373, 18400, 18427, 18455, 18482, 18509, 18536, 18564, 18591, 18618, 18645, 18673, 18700, 18727, 18754, 18782, 18809, 18836, 18863, 18891, 18918, 18945, 18972,  /* 576 - 607*/
                19000, 19027, 19054, 19081, 19109, 19136, 19163, 19190, 19218, 19245, 19272, 19299, 19327, 19354, 19381, 19408, 19436, 19463, 19490, 19517, 19545, 19572, 19599, 19626, 19654, 19681, 19708, 19735, 19763, 19790, 19817, 19844,  /* 608 - 639*/
                19872, 19899, 19926, 19953, 19981, 20008, 20035, 20062, 20090, 20117, 20144, 20171, 20199, 20226, 20253, 20280, 20308, 20335, 20362, 20389, 20417, 20444, 20471, 20498, 20526, 20553, 20580, 20607, 20635, 20662, 20689, 20716,  /* 640 - 671*/
                20744, 20771, 20798, 20825, 20853, 20880, 20907, 20934, 20962, 20989, 21016, 21043, 21071, 21098, 21125, 21152, 21180, 21207, 21234, 21261, 21289, 21316, 21343, 21370, 21398, 21425, 21452, 21479, 21507, 21534, 21561, 21588,  /* 672 - 703*/
                21616, 21643, 21670, 21697, 21725, 21752, 21779, 21806, 21834, 21861, 21888, 21915, 21943, 21970, 21997, 22024, 22052, 22079, 22106, 22133, 22161, 22188, 22215, 22242, 22270, 22297, 22324, 22351, 22379, 22406, 22433, 22460,  /* 704 - 735*/
                22488, 22515, 22542, 22569, 22597, 22624, 22651, 22678, 22706, 22733, 22760, 22787, 22815, 22842, 22869, 22896, 22924, 22951, 22978, 23005, 23033, 23060, 23087, 23114, 23142, 23169, 23196, 23223, 23251, 23278, 23305, 23332,  /* 736 - 767*/
                23360, 23387, 23414, 23441, 23469, 23496, 23524, 23551, 23578, 23606, 23633, 23661, 23689, 23716, 23744, 23771, 23799, 23827, 23855, 23882, 23910, 23938, 23966, 23994, 24022, 24050, 24078, 24106, 24134, 24162, 24190, 24218,  /* 768 - 799*/
                24246, 24275, 24303, 24331, 24359, 24388, 24416, 24445, 24473, 24502, 24530, 24559, 24587, 24616, 24645, 24673, 24702, 24731, 24760, 24788, 24817, 24846, 24875, 24904, 24933, 24962, 24991, 25020, 25050, 25079, 25108, 25137,  /* 800 - 831*/
                25167, 25196, 25226, 25255, 25284, 25314, 25344, 25373, 25403, 25433, 25462, 25492, 25522, 25552, 25582, 25612, 25642, 25672, 25702, 25732, 25762, 25792, 25823, 25853, 25883, 25914, 25944, 25975, 26005, 26036, 26066, 26097,  /* 832 - 863*/
                26128, 26159, 26190, 26220, 26251, 26282, 26313, 26345, 26376, 26407, 26438, 26469, 26501, 26532, 26564, 26595, 26627, 26659, 26690, 26722, 26754, 26786, 26818, 26850, 26882, 26914, 26946, 26978, 27011, 27043, 27075, 27108,  /* 864 - 895*/
                27140, 27173, 27206, 27238, 27271, 27304, 27337, 27370, 27403, 27437, 27470, 27503, 27537, 27570, 27604, 27637, 27671, 27705, 27739, 27772, 27806, 27841, 27875, 27909, 27943, 27978, 28012, 28047, 28082, 28116, 28151, 28186,  /* 896 - 927*/
                28221, 28257, 28292, 28327, 28363, 28398, 28434, 28470, 28505, 28541, 28577, 28614, 28650, 28686, 28723, 28759, 28796, 28833, 28870, 28907, 28944, 28982, 29019, 29057, 29095, 29133, 29171, 29209, 29247, 29286, 29324, 29363,  /* 928 - 959*/
                29402, 29441, 29480, 29520, 29559, 29599, 29639, 29679, 29719, 29760, 29800, 29841, 29882, 29923, 29965, 30006, 30048, 30090, 30133, 30175, 30218, 30261, 30305, 30348, 30392, 30436, 30481, 30526, 30571, 30616, 30662, 30708,  /* 960 - 991*/
                30754, 30801, 30848, 30896, 30944, 30993, 31042, 31091, 31141, 31192, 31243, 31294, 31347, 31400, 31454, 31508, 31563, 31620, 31677, 31735, 31795, 31856, 31918, 31982, 32047, 32115, 32186, 32259, 32337, 32420, 32510, 32613,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 81, 146, 206, 263, 318, 371, 423, 473, 523, 571, 619, 666, 713, 759, 805, 850, 894, 939, 982, 1026, 1069, 1112, 1155, 1197, 1239, 1280, 1322, 1363, 1404, 1445, 1486,  /* 0 - 31*/
                1526, 1566, 1606, 1646, 1685, 1725, 1764, 1803, 1842, 1881, 1920, 1958, 1997, 2035, 2073, 2111, 2149, 2187, 2224, 2262, 2299, 2336, 2374, 2411, 2448, 2485, 2521, 2558, 2594, 2631, 2667, 2704,  /* 32 - 63*/
                2740, 2776, 2812, 2848, 2884, 2919, 2955, 2991, 3026, 3062, 3097, 3132, 3168, 3203, 3238, 3273, 3308, 3343, 3378, 3412, 3447, 3482, 3516, 3551, 3585, 3619, 3654, 3688, 3722, 3756, 3790, 3824,  /* 64 - 95*/
                3858, 3892, 3926, 3960, 3994, 4027, 4061, 4095, 4128, 4162, 4195, 4228, 4262, 4295, 4328, 4361, 4395, 4428, 4461, 4494, 4527, 4560, 4593, 4625, 4658, 4691, 4724, 4756, 4789, 4822, 4854, 4887,  /* 96 - 127*/
                4919, 4952, 4984, 5016, 5049, 5081, 5113, 5145, 5177, 5210, 5242, 5274, 5306, 5338, 5370, 5402, 5433, 5465, 5497, 5529, 5561, 5592, 5624, 5656, 5687, 5719, 5750, 5782, 5813, 5845, 5876, 5908,  /* 128 - 159*/
                5939, 5970, 6001, 6033, 6064, 6095, 6126, 6157, 6189, 6220, 6251, 6282, 6313, 6344, 6375, 6406, 6437, 6467, 6498, 6529, 6560, 6591, 6621, 6652, 6683, 6713, 6744, 6775, 6805, 6836, 6866, 6897,  /* 160 - 191*/
                6927, 6958, 6988, 7018, 7049, 7079, 7109, 7140, 7170, 7200, 7231, 7261, 7291, 7321, 7351, 7381, 7411, 7442, 7472, 7502, 7532, 7562, 7592, 7621, 7651, 7681, 7711, 7741, 7771, 7801, 7830, 7860,  /* 192 - 223*/
                7890, 7920, 7949, 7979, 8009, 8038, 8068, 8098, 8127, 8157, 8186, 8216, 8245, 8275, 8304, 8334, 8363, 8393, 8422, 8451, 8481, 8510, 8539, 8569, 8598, 8627, 8656, 8686, 8715, 8744, 8773, 8802,  /* 224 - 255*/
                8832, 8861, 8890, 8919, 8948, 8977, 9006, 9035, 9065, 9094, 9123, 9152, 9181, 9210, 9239, 9268, 9298, 9327, 9356, 9385, 9414, 9443, 9472, 9501, 9531, 9560, 9589, 9618, 9647, 9676, 9705, 9734,  /* 256 - 287*/
                9764, 9793, 9822, 9851, 9880, 9909, 9938, 9967, 9997, 10026, 10055, 10084, 10113, 10142, 10171, 10200, 10230, 10259, 10288, 10317, 10346, 10375, 10404, 10433, 10463, 10492, 10521, 10550, 10579, 10608, 10637, 10666,  /* 288 - 319*/
                10696, 10725, 10754, 10783, 10812, 10841, 10870, 10899, 10929, 10958, 10987, 11016, 11045, 11074, 11103, 11132, 11162, 11191, 11220, 11249, 11278, 11307, 11336, 11365, 11395, 11424, 11453, 11482, 11511, 11540, 11569, 11598,  /* 320 - 351*/
                11628, 11657, 11686, 11715, 11744, 11773, 11802, 11831, 11861, 11890, 11919, 11948, 11977, 12006, 12035, 12064, 12094, 12123, 12152, 12181, 12210, 12239, 12268, 12297, 12327, 12356, 12385, 12414, 12443, 12472, 12501, 12530,  /* 352 - 383*/
                12560, 12589, 12618, 12647, 12676, 12705, 12734, 12763, 12793, 12822, 12851, 12880, 12909, 12938, 12967, 12996, 13026, 13055, 13084, 13113, 13142, 13171, 13200, 13229, 13259, 13288, 13317, 13346, 13375, 13404, 13433, 13462,  /* 384 - 415*/
                13492, 13521, 13550, 13579, 13608, 13637, 13666, 13695, 13725, 13754, 13783, 13812, 13841, 13870, 13899, 13928, 13958, 13987, 14016, 14045, 14074, 14103, 14132, 14161, 14191, 14220, 14249, 14278, 14307, 14336, 14365, 14394,  /* 416 - 447*/
                14424, 14453, 14482, 14511, 14540, 14569, 14598, 14627, 14657, 14686, 14715, 14744, 14773, 14802, 14831, 14860, 14890, 14919, 14948, 14977, 15006, 15035, 15064, 15093, 15123, 15152, 15181, 15210, 15239, 15268, 15297, 15326,  /* 448 - 479*/
                15356, 15385, 15414, 15443, 15472, 15501, 15530, 15559, 15589, 15618, 15647, 15676, 15705, 15734, 15763, 15792, 15822, 15851, 15880, 15909, 15938, 15967, 15996, 16025, 16055, 16084, 16113, 16142, 16171, 16200, 16229, 16258,  /* 480 - 511*/
                16288, 16317, 16346, 16375, 16404, 16433, 16462, 16491, 16521, 16550, 16579, 16608, 16637, 16666, 16695, 16724, 16754, 16783, 16812, 16841, 16870, 16899, 16928, 16957, 16987, 17016, 17045, 17074, 17103, 17132, 17161, 17190,  /* 512 - 543*/
                17220, 17249, 17278, 17307, 17336, 17365, 17394, 17423, 17453, 17482, 17511, 17540, 17569, 17598, 17627, 17656, 17686, 17715, 17744, 17773, 17802, 17831, 17860, 17889, 17919, 17948, 17977, 18006, 18035, 18064, 18093, 18122,  /* 544 - 575*/
                18152, 18181, 18210, 18239, 18268, 18297, 18326, 18355, 18385, 18414, 18443, 18472, 18501, 18530, 18559, 18588, 18618, 18647, 18676, 18705, 18734, 18763, 18792, 18821, 18851, 18880, 18909, 18938, 18967, 18996, 19025, 19054,  /* 576 - 607*/
                19084, 19113, 19142, 19171, 19200, 19229, 19258, 19287, 19317, 19346, 19375, 19404, 19433, 19462, 19491, 19520, 19550, 19579, 19608, 19637, 19666, 19695, 19724, 19753, 19783, 19812, 19841, 19870, 19899, 19928, 19957, 19986,  /* 608 - 639*/
                20016, 20045, 20074, 20103, 20132, 20161, 20190, 20219, 20249, 20278, 20307, 20336, 20365, 20394, 20423, 20452, 20482, 20511, 20540, 20569, 20598, 20627, 20656, 20685, 20715, 20744, 20773, 20802, 20831, 20860, 20889, 20918,  /* 640 - 671*/
                20948, 20977, 21006, 21035, 21064, 21093, 21122, 21151, 21181, 21210, 21239, 21268, 21297, 21326, 21355, 21384, 21414, 21443, 21472, 21501, 21530, 21559, 21588, 21617, 21647, 21676, 21705, 21734, 21763, 21792, 21821, 21850,  /* 672 - 703*/
                21880, 21909, 21938, 21967, 21996, 22025, 22054, 22083, 22113, 22142, 22171, 22200, 22229, 22258, 22287, 22316, 22346, 22375, 22404, 22433, 22462, 22491, 22520, 22549, 22579, 22608, 22637, 22666, 22695, 22724, 22753, 22782,  /* 704 - 735*/
                22812, 22841, 22870, 22899, 22928, 22957, 22986, 23015, 23045, 23074, 23103, 23132, 23161, 23190, 23219, 23248, 23278, 23307, 23336, 23365, 23394, 23423, 23452, 23481, 23511, 23540, 23569, 23598, 23627, 23656, 23685, 23714,  /* 736 - 767*/
                23744, 23773, 23802, 23831, 23860, 23889, 23919, 23948, 23977, 24006, 24036, 24065, 24094, 24124, 24153, 24183, 24212, 24242, 24271, 24301, 24330, 24360, 24389, 24419, 24448, 24478, 24508, 24537, 24567, 24597, 24627, 24656,  /* 768 - 799*/
                24686, 24716, 24746, 24776, 24806, 24835, 24865, 24895, 24925, 24955, 24985, 25015, 25046, 25076, 25106, 25136, 25166, 25196, 25227, 25257, 25287, 25317, 25348, 25378, 25409, 25439, 25469, 25500, 25530, 25561, 25591, 25622,  /* 800 - 831*/
                25653, 25683, 25714, 25745, 25775, 25806, 25837, 25868, 25898, 25929, 25960, 25991, 26022, 26053, 26084, 26115, 26146, 26177, 26208, 26240, 26271, 26302, 26333, 26364, 26396, 26427, 26459, 26490, 26521, 26553, 26584, 26616,  /* 832 - 863*/
                26648, 26679, 26711, 26743, 26774, 26806, 26838, 26870, 26902, 26933, 26965, 26997, 27029, 27061, 27093, 27126, 27158, 27190, 27222, 27255, 27287, 27319, 27352, 27384, 27417, 27449, 27482, 27514, 27547, 27580, 27612, 27645,  /* 864 - 895*/
                27678, 27711, 27744, 27777, 27810, 27843, 27876, 27909, 27942, 27976, 28009, 28042, 28076, 28109, 28143, 28176, 28210, 28243, 28277, 28311, 28345, 28378, 28412, 28446, 28480, 28514, 28549, 28583, 28617, 28651, 28686, 28720,  /* 896 - 927*/
                28755, 28789, 28824, 28859, 28893, 28928, 28963, 28998, 29033, 29068, 29103, 29139, 29174, 29209, 29245, 29280, 29316, 29352, 29387, 29423, 29459, 29495, 29531, 29567, 29604, 29640, 29676, 29713, 29750, 29786, 29823, 29860,  /* 928 - 959*/
                29897, 29934, 29971, 30009, 30046, 30084, 30121, 30159, 30197, 30235, 30273, 30311, 30350, 30388, 30427, 30465, 30504, 30543, 30583, 30622, 30661, 30701, 30741, 30781, 30821, 30861, 30902, 30942, 30983, 31024, 31065, 31107,  /* 960 - 991*/
                31149, 31190, 31233, 31275, 31318, 31361, 31404, 31447, 31491, 31535, 31580, 31624, 31670, 31715, 31761, 31808, 31854, 31902, 31950, 31998, 32048, 32098, 32148, 32200, 32253, 32306, 32361, 32418, 32477, 32539, 32604, 32675,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 81, 146, 206, 263, 318, 371, 423, 473, 523, 571, 619, 666, 713, 759, 805, 850, 894, 939, 982, 1026, 1069, 1112, 1155, 1197, 1239, 1280, 1322, 1363, 1404, 1445, 1486,  /* 0 - 31*/
                1526, 1566, 1606, 1646, 1685, 1725, 1764, 1803, 1842, 1881, 1920, 1958, 1997, 2035, 2073, 2111, 2149, 2187, 2224, 2262, 2299, 2336, 2374, 2411, 2448, 2485, 2521, 2558, 2594, 2631, 2667, 2704,  /* 32 - 63*/
                2740, 2776, 2812, 2848, 2884, 2919, 2955, 2991, 3026, 3062, 3097, 3132, 3168, 3203, 3238, 3273, 3308, 3343, 3378, 3412, 3447, 3482, 3516, 3551, 3585, 3619, 3654, 3688, 3722, 3756, 3790, 3824,  /* 64 - 95*/
                3858, 3892, 3926, 3960, 3994, 4027, 4061, 4095, 4128, 4162, 4195, 4228, 4262, 4295, 4328, 4361, 4395, 4428, 4461, 4494, 4527, 4560, 4593, 4625, 4658, 4691, 4724, 4756, 4789, 4822, 4854, 4887,  /* 96 - 127*/
                4919, 4952, 4984, 5016, 5049, 5081, 5113, 5145, 5177, 5210, 5242, 5274, 5306, 5338, 5370, 5402, 5433, 5465, 5497, 5529, 5561, 5592, 5624, 5656, 5687, 5719, 5750, 5782, 5813, 5845, 5876, 5908,  /* 128 - 159*/
                5939, 5970, 6001, 6033, 6064, 6095, 6126, 6157, 6189, 6220, 6251, 6282, 6313, 6344, 6375, 6406, 6437, 6467, 6498, 6529, 6560, 6591, 6621, 6652, 6683, 6713, 6744, 6775, 6805, 6836, 6866, 6897,  /* 160 - 191*/
                6927, 6958, 6988, 7018, 7049, 7079, 7109, 7140, 7170, 7200, 7231, 7261, 7291, 7321, 7351, 7381, 7411, 7442, 7472, 7502, 7532, 7562, 7592, 7621, 7651, 7681, 7711, 7741, 7771, 7801, 7830, 7860,  /* 192 - 223*/
                7890, 7920, 7949, 7979, 8009, 8038, 8068, 8098, 8127, 8157, 8186, 8216, 8245, 8275, 8304, 8334, 8363, 8393, 8422, 8451, 8481, 8510, 8539, 8569, 8598, 8627, 8656, 8686, 8715, 8744, 8773, 8802,  /* 224 - 255*/
                8832, 8861, 8890, 8919, 8948, 8977, 9006, 9035, 9065, 9094, 9123, 9152, 9181, 9210, 9239, 9268, 9298, 9327, 9356, 9385, 9414, 9443, 9472, 9501, 9531, 9560, 9589, 9618, 9647, 9676, 9705, 9734,  /* 256 - 287*/
                9764, 9793, 9822, 9851, 9880, 9909, 9938, 9967, 9997, 10026, 10055, 10084, 10113, 10142, 10171, 10200, 10230, 10259, 10288, 10317, 10346, 10375, 10404, 10433, 10463, 10492, 10521, 10550, 10579, 10608, 10637, 10666,  /* 288 - 319*/
                10696, 10725, 10754, 10783, 10812, 10841, 10870, 10899, 10929, 10958, 10987, 11016, 11045, 11074, 11103, 11132, 11162, 11191, 11220, 11249, 11278, 11307, 11336, 11365, 11395, 11424, 11453, 11482, 11511, 11540, 11569, 11598,  /* 320 - 351*/
                11628, 11657, 11686, 11715, 11744, 11773, 11802, 11831, 11861, 11890, 11919, 11948, 11977, 12006, 12035, 12064, 12094, 12123, 12152, 12181, 12210, 12239, 12268, 12297, 12327, 12356, 12385, 12414, 12443, 12472, 12501, 12530,  /* 352 - 383*/
                12560, 12589, 12618, 12647, 12676, 12705, 12734, 12763, 12793, 12822, 12851, 12880, 12909, 12938, 12967, 12996, 13026, 13055, 13084, 13113, 13142, 13171, 13200, 13229, 13259, 13288, 13317, 13346, 13375, 13404, 13433, 13462,  /* 384 - 415*/
                13492, 13521, 13550, 13579, 13608, 13637, 13666, 13695, 13725, 13754, 13783, 13812, 13841, 13870, 13899, 13928, 13958, 13987, 14016, 14045, 14074, 14103, 14132, 14161, 14191, 14220, 14249, 14278, 14307, 14336, 14365, 14394,  /* 416 - 447*/
                14424, 14453, 14482, 14511, 14540, 14569, 14598, 14627, 14657, 14686, 14715, 14744, 14773, 14802, 14831, 14860, 14890, 14919, 14948, 14977, 15006, 15035, 15064, 15093, 15123, 15152, 15181, 15210, 15239, 15268, 15297, 15326,  /* 448 - 479*/
                15356, 15385, 15414, 15443, 15472, 15501, 15530, 15559, 15589, 15618, 15647, 15676, 15705, 15734, 15763, 15792, 15822, 15851, 15880, 15909, 15938, 15967, 15996, 16025, 16055, 16084, 16113, 16142, 16171, 16200, 16229, 16258,  /* 480 - 511*/
                16288, 16317, 16346, 16375, 16404, 16433, 16462, 16491, 16521, 16550, 16579, 16608, 16637, 16666, 16695, 16724, 16754, 16783, 16812, 16841, 16870, 16899, 16928, 16957, 16987, 17016, 17045, 17074, 17103, 17132, 17161, 17190,  /* 512 - 543*/
                17220, 17249, 17278, 17307, 17336, 17365, 17394, 17423, 17453, 17482, 17511, 17540, 17569, 17598, 17627, 17656, 17686, 17715, 17744, 17773, 17802, 17831, 17860, 17889, 17919, 17948, 17977, 18006, 18035, 18064, 18093, 18122,  /* 544 - 575*/
                18152, 18181, 18210, 18239, 18268, 18297, 18326, 18355, 18385, 18414, 18443, 18472, 18501, 18530, 18559, 18588, 18618, 18647, 18676, 18705, 18734, 18763, 18792, 18821, 18851, 18880, 18909, 18938, 18967, 18996, 19025, 19054,  /* 576 - 607*/
                19084, 19113, 19142, 19171, 19200, 19229, 19258, 19287, 19317, 19346, 19375, 19404, 19433, 19462, 19491, 19520, 19550, 19579, 19608, 19637, 19666, 19695, 19724, 19753, 19783, 19812, 19841, 19870, 19899, 19928, 19957, 19986,  /* 608 - 639*/
                20016, 20045, 20074, 20103, 20132, 20161, 20190, 20219, 20249, 20278, 20307, 20336, 20365, 20394, 20423, 20452, 20482, 20511, 20540, 20569, 20598, 20627, 20656, 20685, 20715, 20744, 20773, 20802, 20831, 20860, 20889, 20918,  /* 640 - 671*/
                20948, 20977, 21006, 21035, 21064, 21093, 21122, 21151, 21181, 21210, 21239, 21268, 21297, 21326, 21355, 21384, 21414, 21443, 21472, 21501, 21530, 21559, 21588, 21617, 21647, 21676, 21705, 21734, 21763, 21792, 21821, 21850,  /* 672 - 703*/
                21880, 21909, 21938, 21967, 21996, 22025, 22054, 22083, 22113, 22142, 22171, 22200, 22229, 22258, 22287, 22316, 22346, 22375, 22404, 22433, 22462, 22491, 22520, 22549, 22579, 22608, 22637, 22666, 22695, 22724, 22753, 22782,  /* 704 - 735*/
                22812, 22841, 22870, 22899, 22928, 22957, 22986, 23015, 23045, 23074, 23103, 23132, 23161, 23190, 23219, 23248, 23278, 23307, 23336, 23365, 23394, 23423, 23452, 23481, 23511, 23540, 23569, 23598, 23627, 23656, 23685, 23714,  /* 736 - 767*/
                23744, 23773, 23802, 23831, 23860, 23889, 23919, 23948, 23977, 24006, 24036, 24065, 24094, 24124, 24153, 24183, 24212, 24242, 24271, 24301, 24330, 24360, 24389, 24419, 24448, 24478, 24508, 24537, 24567, 24597, 24627, 24656,  /* 768 - 799*/
                24686, 24716, 24746, 24776, 24806, 24835, 24865, 24895, 24925, 24955, 24985, 25015, 25046, 25076, 25106, 25136, 25166, 25196, 25227, 25257, 25287, 25317, 25348, 25378, 25409, 25439, 25469, 25500, 25530, 25561, 25591, 25622,  /* 800 - 831*/
                25653, 25683, 25714, 25745, 25775, 25806, 25837, 25868, 25898, 25929, 25960, 25991, 26022, 26053, 26084, 26115, 26146, 26177, 26208, 26240, 26271, 26302, 26333, 26364, 26396, 26427, 26459, 26490, 26521, 26553, 26584, 26616,  /* 832 - 863*/
                26648, 26679, 26711, 26743, 26774, 26806, 26838, 26870, 26902, 26933, 26965, 26997, 27029, 27061, 27093, 27126, 27158, 27190, 27222, 27255, 27287, 27319, 27352, 27384, 27417, 27449, 27482, 27514, 27547, 27580, 27612, 27645,  /* 864 - 895*/
                27678, 27711, 27744, 27777, 27810, 27843, 27876, 27909, 27942, 27976, 28009, 28042, 28076, 28109, 28143, 28176, 28210, 28243, 28277, 28311, 28345, 28378, 28412, 28446, 28480, 28514, 28549, 28583, 28617, 28651, 28686, 28720,  /* 896 - 927*/
                28755, 28789, 28824, 28859, 28893, 28928, 28963, 28998, 29033, 29068, 29103, 29139, 29174, 29209, 29245, 29280, 29316, 29352, 29387, 29423, 29459, 29495, 29531, 29567, 29604, 29640, 29676, 29713, 29750, 29786, 29823, 29860,  /* 928 - 959*/
                29897, 29934, 29971, 30009, 30046, 30084, 30121, 30159, 30197, 30235, 30273, 30311, 30350, 30388, 30427, 30465, 30504, 30543, 30583, 30622, 30661, 30701, 30741, 30781, 30821, 30861, 30902, 30942, 30983, 31024, 31065, 31107,  /* 960 - 991*/
                31149, 31190, 31233, 31275, 31318, 31361, 31404, 31447, 31491, 31535, 31580, 31624, 31670, 31715, 31761, 31808, 31854, 31902, 31950, 31998, 32048, 32098, 32148, 32200, 32253, 32306, 32361, 32418, 32477, 32539, 32604, 32675,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 81, 146, 206, 263, 318, 371, 423, 473, 523, 571, 619, 666, 713, 759, 805, 850, 894, 939, 982, 1026, 1069, 1112, 1155, 1197, 1239, 1280, 1322, 1363, 1404, 1445, 1486,  /* 0 - 31*/
                1526, 1566, 1606, 1646, 1685, 1725, 1764, 1803, 1842, 1881, 1920, 1958, 1997, 2035, 2073, 2111, 2149, 2187, 2224, 2262, 2299, 2336, 2374, 2411, 2448, 2485, 2521, 2558, 2594, 2631, 2667, 2704,  /* 32 - 63*/
                2740, 2776, 2812, 2848, 2884, 2919, 2955, 2991, 3026, 3062, 3097, 3132, 3168, 3203, 3238, 3273, 3308, 3343, 3378, 3412, 3447, 3482, 3516, 3551, 3585, 3619, 3654, 3688, 3722, 3756, 3790, 3824,  /* 64 - 95*/
                3858, 3892, 3926, 3960, 3994, 4027, 4061, 4095, 4128, 4162, 4195, 4228, 4262, 4295, 4328, 4361, 4395, 4428, 4461, 4494, 4527, 4560, 4593, 4625, 4658, 4691, 4724, 4756, 4789, 4822, 4854, 4887,  /* 96 - 127*/
                4919, 4952, 4984, 5016, 5049, 5081, 5113, 5145, 5177, 5210, 5242, 5274, 5306, 5338, 5370, 5402, 5433, 5465, 5497, 5529, 5561, 5592, 5624, 5656, 5687, 5719, 5750, 5782, 5813, 5845, 5876, 5908,  /* 128 - 159*/
                5939, 5970, 6001, 6033, 6064, 6095, 6126, 6157, 6189, 6220, 6251, 6282, 6313, 6344, 6375, 6406, 6437, 6467, 6498, 6529, 6560, 6591, 6621, 6652, 6683, 6713, 6744, 6775, 6805, 6836, 6866, 6897,  /* 160 - 191*/
                6927, 6958, 6988, 7018, 7049, 7079, 7109, 7140, 7170, 7200, 7231, 7261, 7291, 7321, 7351, 7381, 7411, 7442, 7472, 7502, 7532, 7562, 7592, 7621, 7651, 7681, 7711, 7741, 7771, 7801, 7830, 7860,  /* 192 - 223*/
                7890, 7920, 7949, 7979, 8009, 8038, 8068, 8098, 8127, 8157, 8186, 8216, 8245, 8275, 8304, 8334, 8363, 8393, 8422, 8451, 8481, 8510, 8539, 8569, 8598, 8627, 8656, 8686, 8715, 8744, 8773, 8802,  /* 224 - 255*/
                8832, 8861, 8890, 8919, 8948, 8977, 9006, 9035, 9065, 9094, 9123, 9152, 9181, 9210, 9239, 9268, 9298, 9327, 9356, 9385, 9414, 9443, 9472, 9501, 9531, 9560, 9589, 9618, 9647, 9676, 9705, 9734,  /* 256 - 287*/
                9764, 9793, 9822, 9851, 9880, 9909, 9938, 9967, 9997, 10026, 10055, 10084, 10113, 10142, 10171, 10200, 10230, 10259, 10288, 10317, 10346, 10375, 10404, 10433, 10463, 10492, 10521, 10550, 10579, 10608, 10637, 10666,  /* 288 - 319*/
                10696, 10725, 10754, 10783, 10812, 10841, 10870, 10899, 10929, 10958, 10987, 11016, 11045, 11074, 11103, 11132, 11162, 11191, 11220, 11249, 11278, 11307, 11336, 11365, 11395, 11424, 11453, 11482, 11511, 11540, 11569, 11598,  /* 320 - 351*/
                11628, 11657, 11686, 11715, 11744, 11773, 11802, 11831, 11861, 11890, 11919, 11948, 11977, 12006, 12035, 12064, 12094, 12123, 12152, 12181, 12210, 12239, 12268, 12297, 12327, 12356, 12385, 12414, 12443, 12472, 12501, 12530,  /* 352 - 383*/
                12560, 12589, 12618, 12647, 12676, 12705, 12734, 12763, 12793, 12822, 12851, 12880, 12909, 12938, 12967, 12996, 13026, 13055, 13084, 13113, 13142, 13171, 13200, 13229, 13259, 13288, 13317, 13346, 13375, 13404, 13433, 13462,  /* 384 - 415*/
                13492, 13521, 13550, 13579, 13608, 13637, 13666, 13695, 13725, 13754, 13783, 13812, 13841, 13870, 13899, 13928, 13958, 13987, 14016, 14045, 14074, 14103, 14132, 14161, 14191, 14220, 14249, 14278, 14307, 14336, 14365, 14394,  /* 416 - 447*/
                14424, 14453, 14482, 14511, 14540, 14569, 14598, 14627, 14657, 14686, 14715, 14744, 14773, 14802, 14831, 14860, 14890, 14919, 14948, 14977, 15006, 15035, 15064, 15093, 15123, 15152, 15181, 15210, 15239, 15268, 15297, 15326,  /* 448 - 479*/
                15356, 15385, 15414, 15443, 15472, 15501, 15530, 15559, 15589, 15618, 15647, 15676, 15705, 15734, 15763, 15792, 15822, 15851, 15880, 15909, 15938, 15967, 15996, 16025, 16055, 16084, 16113, 16142, 16171, 16200, 16229, 16258,  /* 480 - 511*/
                16288, 16317, 16346, 16375, 16404, 16433, 16462, 16491, 16521, 16550, 16579, 16608, 16637, 16666, 16695, 16724, 16754, 16783, 16812, 16841, 16870, 16899, 16928, 16957, 16987, 17016, 17045, 17074, 17103, 17132, 17161, 17190,  /* 512 - 543*/
                17220, 17249, 17278, 17307, 17336, 17365, 17394, 17423, 17453, 17482, 17511, 17540, 17569, 17598, 17627, 17656, 17686, 17715, 17744, 17773, 17802, 17831, 17860, 17889, 17919, 17948, 17977, 18006, 18035, 18064, 18093, 18122,  /* 544 - 575*/
                18152, 18181, 18210, 18239, 18268, 18297, 18326, 18355, 18385, 18414, 18443, 18472, 18501, 18530, 18559, 18588, 18618, 18647, 18676, 18705, 18734, 18763, 18792, 18821, 18851, 18880, 18909, 18938, 18967, 18996, 19025, 19054,  /* 576 - 607*/
                19084, 19113, 19142, 19171, 19200, 19229, 19258, 19287, 19317, 19346, 19375, 19404, 19433, 19462, 19491, 19520, 19550, 19579, 19608, 19637, 19666, 19695, 19724, 19753, 19783, 19812, 19841, 19870, 19899, 19928, 19957, 19986,  /* 608 - 639*/
                20016, 20045, 20074, 20103, 20132, 20161, 20190, 20219, 20249, 20278, 20307, 20336, 20365, 20394, 20423, 20452, 20482, 20511, 20540, 20569, 20598, 20627, 20656, 20685, 20715, 20744, 20773, 20802, 20831, 20860, 20889, 20918,  /* 640 - 671*/
                20948, 20977, 21006, 21035, 21064, 21093, 21122, 21151, 21181, 21210, 21239, 21268, 21297, 21326, 21355, 21384, 21414, 21443, 21472, 21501, 21530, 21559, 21588, 21617, 21647, 21676, 21705, 21734, 21763, 21792, 21821, 21850,  /* 672 - 703*/
                21880, 21909, 21938, 21967, 21996, 22025, 22054, 22083, 22113, 22142, 22171, 22200, 22229, 22258, 22287, 22316, 22346, 22375, 22404, 22433, 22462, 22491, 22520, 22549, 22579, 22608, 22637, 22666, 22695, 22724, 22753, 22782,  /* 704 - 735*/
                22812, 22841, 22870, 22899, 22928, 22957, 22986, 23015, 23045, 23074, 23103, 23132, 23161, 23190, 23219, 23248, 23278, 23307, 23336, 23365, 23394, 23423, 23452, 23481, 23511, 23540, 23569, 23598, 23627, 23656, 23685, 23714,  /* 736 - 767*/
                23744, 23773, 23802, 23831, 23860, 23889, 23919, 23948, 23977, 24006, 24036, 24065, 24094, 24124, 24153, 24183, 24212, 24242, 24271, 24301, 24330, 24360, 24389, 24419, 24448, 24478, 24508, 24537, 24567, 24597, 24627, 24656,  /* 768 - 799*/
                24686, 24716, 24746, 24776, 24806, 24835, 24865, 24895, 24925, 24955, 24985, 25015, 25046, 25076, 25106, 25136, 25166, 25196, 25227, 25257, 25287, 25317, 25348, 25378, 25409, 25439, 25469, 25500, 25530, 25561, 25591, 25622,  /* 800 - 831*/
                25653, 25683, 25714, 25745, 25775, 25806, 25837, 25868, 25898, 25929, 25960, 25991, 26022, 26053, 26084, 26115, 26146, 26177, 26208, 26240, 26271, 26302, 26333, 26364, 26396, 26427, 26459, 26490, 26521, 26553, 26584, 26616,  /* 832 - 863*/
                26648, 26679, 26711, 26743, 26774, 26806, 26838, 26870, 26902, 26933, 26965, 26997, 27029, 27061, 27093, 27126, 27158, 27190, 27222, 27255, 27287, 27319, 27352, 27384, 27417, 27449, 27482, 27514, 27547, 27580, 27612, 27645,  /* 864 - 895*/
                27678, 27711, 27744, 27777, 27810, 27843, 27876, 27909, 27942, 27976, 28009, 28042, 28076, 28109, 28143, 28176, 28210, 28243, 28277, 28311, 28345, 28378, 28412, 28446, 28480, 28514, 28549, 28583, 28617, 28651, 28686, 28720,  /* 896 - 927*/
                28755, 28789, 28824, 28859, 28893, 28928, 28963, 28998, 29033, 29068, 29103, 29139, 29174, 29209, 29245, 29280, 29316, 29352, 29387, 29423, 29459, 29495, 29531, 29567, 29604, 29640, 29676, 29713, 29750, 29786, 29823, 29860,  /* 928 - 959*/
                29897, 29934, 29971, 30009, 30046, 30084, 30121, 30159, 30197, 30235, 30273, 30311, 30350, 30388, 30427, 30465, 30504, 30543, 30583, 30622, 30661, 30701, 30741, 30781, 30821, 30861, 30902, 30942, 30983, 31024, 31065, 31107,  /* 960 - 991*/
                31149, 31190, 31233, 31275, 31318, 31361, 31404, 31447, 31491, 31535, 31580, 31624, 31670, 31715, 31761, 31808, 31854, 31902, 31950, 31998, 32048, 32098, 32148, 32200, 32253, 32306, 32361, 32418, 32477, 32539, 32604, 32675,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 278, 435, 565, 680, 785, 882, 974, 1061, 1145, 1225, 1303, 1378, 1450, 1521, 1590, 1658, 1724, 1788, 1851, 1913, 1974, 2034, 2093, 2151, 2209, 2265, 2321, 2376, 2430, 2483, 2536,  /* 0 - 31*/
                2589, 2640, 2691, 2742, 2792, 2842, 2891, 2940, 2988, 3036, 3083, 3130, 3177, 3223, 3269, 3314, 3360, 3404, 3449, 3493, 3537, 3581, 3624, 3667, 3710, 3752, 3794, 3836, 3878, 3919, 3960, 4001,  /* 32 - 63*/
                4042, 4083, 4123, 4163, 4203, 4242, 4282, 4321, 4360, 4399, 4438, 4476, 4514, 4552, 4590, 4628, 4666, 4703, 4740, 4777, 4814, 4851, 4888, 4924, 4961, 4997, 5033, 5069, 5104, 5140, 5175, 5211,  /* 64 - 95*/
                5246, 5281, 5316, 5351, 5385, 5420, 5454, 5489, 5523, 5557, 5591, 5625, 5659, 5692, 5726, 5759, 5792, 5826, 5859, 5892, 5925, 5957, 5990, 6023, 6055, 6088, 6120, 6152, 6184, 6216, 6248, 6280,  /* 96 - 127*/
                6312, 6343, 6375, 6406, 6438, 6469, 6500, 6532, 6563, 6594, 6624, 6655, 6686, 6717, 6747, 6778, 6808, 6839, 6869, 6899, 6929, 6959, 6989, 7019, 7049, 7079, 7109, 7138, 7168, 7197, 7227, 7256,  /* 128 - 159*/
                7285, 7315, 7344, 7373, 7402, 7431, 7460, 7489, 7518, 7546, 7575, 7604, 7632, 7661, 7689, 7717, 7746, 7774, 7802, 7830, 7858, 7886, 7914, 7942, 7970, 7998, 8026, 8054, 8081, 8109, 8136, 8164,  /* 160 - 191*/
                8191, 8219, 8246, 8273, 8301, 8328, 8355, 8382, 8409, 8436, 8463, 8490, 8517, 8544, 8571, 8597, 8624, 8651, 8677, 8704, 8730, 8757, 8783, 8809, 8836, 8862, 8888, 8914, 8941, 8967, 8993, 9019,  /* 192 - 223*/
                9045, 9071, 9097, 9122, 9148, 9174, 9200, 9225, 9251, 9277, 9302, 9328, 9353, 9379, 9404, 9430, 9455, 9480, 9506, 9531, 9556, 9581, 9606, 9631, 9656, 9681, 9706, 9731, 9756, 9781, 9806, 9831,  /* 224 - 255*/
                9856, 9880, 9905, 9930, 9955, 9979, 10004, 10029, 10054, 10078, 10103, 10128, 10153, 10177, 10202, 10227, 10252, 10276, 10301, 10326, 10351, 10375, 10400, 10425, 10450, 10474, 10499, 10524, 10549, 10573, 10598, 10623,  /* 256 - 287*/
                10648, 10672, 10697, 10722, 10747, 10771, 10796, 10821, 10846, 10870, 10895, 10920, 10945, 10969, 10994, 11019, 11044, 11068, 11093, 11118, 11143, 11167, 11192, 11217, 11242, 11266, 11291, 11316, 11341, 11365, 11390, 11415,  /* 288 - 319*/
                11440, 11464, 11489, 11514, 11539, 11563, 11588, 11613, 11638, 11662, 11687, 11712, 11737, 11761, 11786, 11811, 11836, 11860, 11885, 11910, 11935, 11959, 11984, 12009, 12034, 12058, 12083, 12108, 12133, 12157, 12182, 12207,  /* 320 - 351*/
                12232, 12256, 12281, 12306, 12331, 12355, 12380, 12405, 12430, 12454, 12479, 12504, 12529, 12553, 12578, 12603, 12628, 12652, 12677, 12702, 12727, 12751, 12776, 12801, 12826, 12850, 12875, 12900, 12925, 12949, 12974, 12999,  /* 352 - 383*/
                13024, 13048, 13073, 13098, 13123, 13147, 13172, 13197, 13222, 13246, 13271, 13296, 13321, 13345, 13370, 13395, 13420, 13444, 13469, 13494, 13519, 13543, 13568, 13593, 13618, 13642, 13667, 13692, 13717, 13741, 13766, 13791,  /* 384 - 415*/
                13816, 13840, 13865, 13890, 13915, 13939, 13964, 13989, 14014, 14038, 14063, 14088, 14113, 14137, 14162, 14187, 14212, 14236, 14261, 14286, 14311, 14335, 14360, 14385, 14410, 14434, 14459, 14484, 14509, 14533, 14558, 14583,  /* 416 - 447*/
                14608, 14632, 14657, 14682, 14707, 14731, 14756, 14781, 14806, 14830, 14855, 14880, 14905, 14929, 14954, 14979, 15004, 15028, 15053, 15078, 15103, 15127, 15152, 15177, 15202, 15226, 15251, 15276, 15301, 15325, 15350, 15375,  /* 448 - 479*/
                15400, 15424, 15449, 15474, 15499, 15523, 15548, 15573, 15598, 15622, 15647, 15672, 15697, 15721, 15746, 15771, 15796, 15820, 15845, 15870, 15895, 15919, 15944, 15969, 15994, 16018, 16043, 16068, 16093, 16117, 16142, 16167,  /* 480 - 511*/
                16192, 16216, 16241, 16266, 16291, 16315, 16340, 16365, 16390, 16414, 16439, 16464, 16489, 16513, 16538, 16563, 16588, 16612, 16637, 16662, 16687, 16711, 16736, 16761, 16786, 16810, 16835, 16860, 16885, 16909, 16934, 16959,  /* 512 - 543*/
                16984, 17008, 17033, 17058, 17083, 17107, 17132, 17157, 17182, 17206, 17231, 17256, 17281, 17305, 17330, 17355, 17380, 17404, 17429, 17454, 17479, 17503, 17528, 17553, 17578, 17602, 17627, 17652, 17677, 17701, 17726, 17751,  /* 544 - 575*/
                17776, 17800, 17825, 17850, 17875, 17899, 17924, 17949, 17974, 17998, 18023, 18048, 18073, 18097, 18122, 18147, 18172, 18196, 18221, 18246, 18271, 18295, 18320, 18345, 18370, 18394, 18419, 18444, 18469, 18493, 18518, 18543,  /* 576 - 607*/
                18568, 18592, 18617, 18642, 18667, 18691, 18716, 18741, 18766, 18790, 18815, 18840, 18865, 18889, 18914, 18939, 18964, 18988, 19013, 19038, 19063, 19087, 19112, 19137, 19162, 19186, 19211, 19236, 19261, 19285, 19310, 19335,  /* 608 - 639*/
                19360, 19384, 19409, 19434, 19459, 19483, 19508, 19533, 19558, 19582, 19607, 19632, 19657, 19681, 19706, 19731, 19756, 19780, 19805, 19830, 19855, 19879, 19904, 19929, 19954, 19978, 20003, 20028, 20053, 20077, 20102, 20127,  /* 640 - 671*/
                20152, 20176, 20201, 20226, 20251, 20275, 20300, 20325, 20350, 20374, 20399, 20424, 20449, 20473, 20498, 20523, 20548, 20572, 20597, 20622, 20647, 20671, 20696, 20721, 20746, 20770, 20795, 20820, 20845, 20869, 20894, 20919,  /* 672 - 703*/
                20944, 20968, 20993, 21018, 21043, 21067, 21092, 21117, 21142, 21166, 21191, 21216, 21241, 21265, 21290, 21315, 21340, 21364, 21389, 21414, 21439, 21463, 21488, 21513, 21538, 21562, 21587, 21612, 21637, 21661, 21686, 21711,  /* 704 - 735*/
                21736, 21760, 21785, 21810, 21835, 21859, 21884, 21909, 21934, 21958, 21983, 22008, 22033, 22057, 22082, 22107, 22132, 22156, 22181, 22206, 22231, 22255, 22280, 22305, 22330, 22354, 22379, 22404, 22429, 22453, 22478, 22503,  /* 736 - 767*/
                22528, 22552, 22577, 22602, 22627, 22652, 22677, 22702, 22727, 22752, 22777, 22802, 22827, 22852, 22878, 22903, 22928, 22954, 22979, 23005, 23030, 23056, 23081, 23107, 23133, 23158, 23184, 23210, 23236, 23262, 23288, 23314,  /* 768 - 799*/
                23340, 23366, 23392, 23418, 23444, 23470, 23497, 23523, 23549, 23576, 23602, 23629, 23655, 23682, 23709, 23735, 23762, 23789, 23816, 23843, 23870, 23897, 23924, 23951, 23978, 24005, 24032, 24060, 24087, 24115, 24142, 24170,  /* 800 - 831*/
                24197, 24225, 24253, 24280, 24308, 24336, 24364, 24392, 24420, 24448, 24476, 24504, 24533, 24561, 24589, 24618, 24646, 24675, 24704, 24732, 24761, 24790, 24819, 24848, 24877, 24906, 24935, 24964, 24994, 25023, 25052, 25082,  /* 832 - 863*/
                25112, 25141, 25171, 25201, 25231, 25260, 25290, 25321, 25351, 25381, 25411, 25442, 25472, 25503, 25533, 25564, 25595, 25626, 25657, 25688, 25719, 25750, 25781, 25812, 25844, 25875, 25907, 25939, 25971, 26003, 26035, 26067,  /* 864 - 895*/
                26099, 26131, 26164, 26196, 26229, 26261, 26294, 26327, 26360, 26393, 26426, 26460, 26493, 26526, 26560, 26594, 26628, 26662, 26696, 26730, 26764, 26799, 26833, 26868, 26903, 26938, 26973, 27008, 27043, 27079, 27115, 27150,  /* 896 - 927*/
                27186, 27222, 27258, 27295, 27331, 27368, 27405, 27442, 27479, 27516, 27553, 27591, 27629, 27667, 27705, 27743, 27782, 27820, 27859, 27898, 27937, 27977, 28016, 28056, 28096, 28137, 28177, 28218, 28259, 28300, 28341, 28383,  /* 928 - 959*/
                28425, 28467, 28509, 28552, 28595, 28638, 28681, 28725, 28769, 28813, 28858, 28903, 28948, 28994, 29040, 29086, 29133, 29180, 29227, 29275, 29323, 29372, 29421, 29471, 29521, 29571, 29622, 29673, 29725, 29778, 29831, 29885,  /* 960 - 991*/
                29939, 29994, 30050, 30106, 30164, 30222, 30280, 30340, 30400, 30462, 30525, 30588, 30653, 30719, 30786, 30855, 30926, 30998, 31072, 31148, 31226, 31307, 31390, 31477, 31568, 31663, 31764, 31871, 31986, 32114, 32259, 32436,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 278, 435, 565, 680, 785, 882, 974, 1061, 1145, 1225, 1303, 1378, 1450, 1521, 1590, 1658, 1724, 1788, 1851, 1913, 1974, 2034, 2093, 2151, 2209, 2265, 2321, 2376, 2430, 2483, 2536,  /* 0 - 31*/
                2589, 2640, 2691, 2742, 2792, 2842, 2891, 2940, 2988, 3036, 3083, 3130, 3177, 3223, 3269, 3314, 3360, 3404, 3449, 3493, 3537, 3581, 3624, 3667, 3710, 3752, 3794, 3836, 3878, 3919, 3960, 4001,  /* 32 - 63*/
                4042, 4083, 4123, 4163, 4203, 4242, 4282, 4321, 4360, 4399, 4438, 4476, 4514, 4552, 4590, 4628, 4666, 4703, 4740, 4777, 4814, 4851, 4888, 4924, 4961, 4997, 5033, 5069, 5104, 5140, 5175, 5211,  /* 64 - 95*/
                5246, 5281, 5316, 5351, 5385, 5420, 5454, 5489, 5523, 5557, 5591, 5625, 5659, 5692, 5726, 5759, 5792, 5826, 5859, 5892, 5925, 5957, 5990, 6023, 6055, 6088, 6120, 6152, 6184, 6216, 6248, 6280,  /* 96 - 127*/
                6312, 6343, 6375, 6406, 6438, 6469, 6500, 6532, 6563, 6594, 6624, 6655, 6686, 6717, 6747, 6778, 6808, 6839, 6869, 6899, 6929, 6959, 6989, 7019, 7049, 7079, 7109, 7138, 7168, 7197, 7227, 7256,  /* 128 - 159*/
                7285, 7315, 7344, 7373, 7402, 7431, 7460, 7489, 7518, 7546, 7575, 7604, 7632, 7661, 7689, 7717, 7746, 7774, 7802, 7830, 7858, 7886, 7914, 7942, 7970, 7998, 8026, 8054, 8081, 8109, 8136, 8164,  /* 160 - 191*/
                8191, 8219, 8246, 8273, 8301, 8328, 8355, 8382, 8409, 8436, 8463, 8490, 8517, 8544, 8571, 8597, 8624, 8651, 8677, 8704, 8730, 8757, 8783, 8809, 8836, 8862, 8888, 8914, 8941, 8967, 8993, 9019,  /* 192 - 223*/
                9045, 9071, 9097, 9122, 9148, 9174, 9200, 9225, 9251, 9277, 9302, 9328, 9353, 9379, 9404, 9430, 9455, 9480, 9506, 9531, 9556, 9581, 9606, 9631, 9656, 9681, 9706, 9731, 9756, 9781, 9806, 9831,  /* 224 - 255*/
                9856, 9880, 9905, 9930, 9955, 9979, 10004, 10029, 10054, 10078, 10103, 10128, 10153, 10177, 10202, 10227, 10252, 10276, 10301, 10326, 10351, 10375, 10400, 10425, 10450, 10474, 10499, 10524, 10549, 10573, 10598, 10623,  /* 256 - 287*/
                10648, 10672, 10697, 10722, 10747, 10771, 10796, 10821, 10846, 10870, 10895, 10920, 10945, 10969, 10994, 11019, 11044, 11068, 11093, 11118, 11143, 11167, 11192, 11217, 11242, 11266, 11291, 11316, 11341, 11365, 11390, 11415,  /* 288 - 319*/
                11440, 11464, 11489, 11514, 11539, 11563, 11588, 11613, 11638, 11662, 11687, 11712, 11737, 11761, 11786, 11811, 11836, 11860, 11885, 11910, 11935, 11959, 11984, 12009, 12034, 12058, 12083, 12108, 12133, 12157, 12182, 12207,  /* 320 - 351*/
                12232, 12256, 12281, 12306, 12331, 12355, 12380, 12405, 12430, 12454, 12479, 12504, 12529, 12553, 12578, 12603, 12628, 12652, 12677, 12702, 12727, 12751, 12776, 12801, 12826, 12850, 12875, 12900, 12925, 12949, 12974, 12999,  /* 352 - 383*/
                13024, 13048, 13073, 13098, 13123, 13147, 13172, 13197, 13222, 13246, 13271, 13296, 13321, 13345, 13370, 13395, 13420, 13444, 13469, 13494, 13519, 13543, 13568, 13593, 13618, 13642, 13667, 13692, 13717, 13741, 13766, 13791,  /* 384 - 415*/
                13816, 13840, 13865, 13890, 13915, 13939, 13964, 13989, 14014, 14038, 14063, 14088, 14113, 14137, 14162, 14187, 14212, 14236, 14261, 14286, 14311, 14335, 14360, 14385, 14410, 14434, 14459, 14484, 14509, 14533, 14558, 14583,  /* 416 - 447*/
                14608, 14632, 14657, 14682, 14707, 14731, 14756, 14781, 14806, 14830, 14855, 14880, 14905, 14929, 14954, 14979, 15004, 15028, 15053, 15078, 15103, 15127, 15152, 15177, 15202, 15226, 15251, 15276, 15301, 15325, 15350, 15375,  /* 448 - 479*/
                15400, 15424, 15449, 15474, 15499, 15523, 15548, 15573, 15598, 15622, 15647, 15672, 15697, 15721, 15746, 15771, 15796, 15820, 15845, 15870, 15895, 15919, 15944, 15969, 15994, 16018, 16043, 16068, 16093, 16117, 16142, 16167,  /* 480 - 511*/
                16192, 16216, 16241, 16266, 16291, 16315, 16340, 16365, 16390, 16414, 16439, 16464, 16489, 16513, 16538, 16563, 16588, 16612, 16637, 16662, 16687, 16711, 16736, 16761, 16786, 16810, 16835, 16860, 16885, 16909, 16934, 16959,  /* 512 - 543*/
                16984, 17008, 17033, 17058, 17083, 17107, 17132, 17157, 17182, 17206, 17231, 17256, 17281, 17305, 17330, 17355, 17380, 17404, 17429, 17454, 17479, 17503, 17528, 17553, 17578, 17602, 17627, 17652, 17677, 17701, 17726, 17751,  /* 544 - 575*/
                17776, 17800, 17825, 17850, 17875, 17899, 17924, 17949, 17974, 17998, 18023, 18048, 18073, 18097, 18122, 18147, 18172, 18196, 18221, 18246, 18271, 18295, 18320, 18345, 18370, 18394, 18419, 18444, 18469, 18493, 18518, 18543,  /* 576 - 607*/
                18568, 18592, 18617, 18642, 18667, 18691, 18716, 18741, 18766, 18790, 18815, 18840, 18865, 18889, 18914, 18939, 18964, 18988, 19013, 19038, 19063, 19087, 19112, 19137, 19162, 19186, 19211, 19236, 19261, 19285, 19310, 19335,  /* 608 - 639*/
                19360, 19384, 19409, 19434, 19459, 19483, 19508, 19533, 19558, 19582, 19607, 19632, 19657, 19681, 19706, 19731, 19756, 19780, 19805, 19830, 19855, 19879, 19904, 19929, 19954, 19978, 20003, 20028, 20053, 20077, 20102, 20127,  /* 640 - 671*/
                20152, 20176, 20201, 20226, 20251, 20275, 20300, 20325, 20350, 20374, 20399, 20424, 20449, 20473, 20498, 20523, 20548, 20572, 20597, 20622, 20647, 20671, 20696, 20721, 20746, 20770, 20795, 20820, 20845, 20869, 20894, 20919,  /* 672 - 703*/
                20944, 20968, 20993, 21018, 21043, 21067, 21092, 21117, 21142, 21166, 21191, 21216, 21241, 21265, 21290, 21315, 21340, 21364, 21389, 21414, 21439, 21463, 21488, 21513, 21538, 21562, 21587, 21612, 21637, 21661, 21686, 21711,  /* 704 - 735*/
                21736, 21760, 21785, 21810, 21835, 21859, 21884, 21909, 21934, 21958, 21983, 22008, 22033, 22057, 22082, 22107, 22132, 22156, 22181, 22206, 22231, 22255, 22280, 22305, 22330, 22354, 22379, 22404, 22429, 22453, 22478, 22503,  /* 736 - 767*/
                22528, 22552, 22577, 22602, 22627, 22652, 22677, 22702, 22727, 22752, 22777, 22802, 22827, 22852, 22878, 22903, 22928, 22954, 22979, 23005, 23030, 23056, 23081, 23107, 23133, 23158, 23184, 23210, 23236, 23262, 23288, 23314,  /* 768 - 799*/
                23340, 23366, 23392, 23418, 23444, 23470, 23497, 23523, 23549, 23576, 23602, 23629, 23655, 23682, 23709, 23735, 23762, 23789, 23816, 23843, 23870, 23897, 23924, 23951, 23978, 24005, 24032, 24060, 24087, 24115, 24142, 24170,  /* 800 - 831*/
                24197, 24225, 24253, 24280, 24308, 24336, 24364, 24392, 24420, 24448, 24476, 24504, 24533, 24561, 24589, 24618, 24646, 24675, 24704, 24732, 24761, 24790, 24819, 24848, 24877, 24906, 24935, 24964, 24994, 25023, 25052, 25082,  /* 832 - 863*/
                25112, 25141, 25171, 25201, 25231, 25260, 25290, 25321, 25351, 25381, 25411, 25442, 25472, 25503, 25533, 25564, 25595, 25626, 25657, 25688, 25719, 25750, 25781, 25812, 25844, 25875, 25907, 25939, 25971, 26003, 26035, 26067,  /* 864 - 895*/
                26099, 26131, 26164, 26196, 26229, 26261, 26294, 26327, 26360, 26393, 26426, 26460, 26493, 26526, 26560, 26594, 26628, 26662, 26696, 26730, 26764, 26799, 26833, 26868, 26903, 26938, 26973, 27008, 27043, 27079, 27115, 27150,  /* 896 - 927*/
                27186, 27222, 27258, 27295, 27331, 27368, 27405, 27442, 27479, 27516, 27553, 27591, 27629, 27667, 27705, 27743, 27782, 27820, 27859, 27898, 27937, 27977, 28016, 28056, 28096, 28137, 28177, 28218, 28259, 28300, 28341, 28383,  /* 928 - 959*/
                28425, 28467, 28509, 28552, 28595, 28638, 28681, 28725, 28769, 28813, 28858, 28903, 28948, 28994, 29040, 29086, 29133, 29180, 29227, 29275, 29323, 29372, 29421, 29471, 29521, 29571, 29622, 29673, 29725, 29778, 29831, 29885,  /* 960 - 991*/
                29939, 29994, 30050, 30106, 30164, 30222, 30280, 30340, 30400, 30462, 30525, 30588, 30653, 30719, 30786, 30855, 30926, 30998, 31072, 31148, 31226, 31307, 31390, 31477, 31568, 31663, 31764, 31871, 31986, 32114, 32259, 32436,  /* 992 - 1023*/
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
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 1 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 2 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 3 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 4 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 5 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 6 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 7 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 8 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 9 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                256,
            },
            /* 10 */
            {
                /* nDetailSigmaDis */
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
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
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                65535,
                /* nDetailGainLimitNeg */
                65535,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
                128,
                /* nDetailGainNegLow */
                128,
                /* nDetailLimitPosLow */
                57344,
                /* nDetailLimitNegLow */
                57344,
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
            /* tHrParam[4] */
            {
                /* 0 */
                {
			        /* nLocalFactor[12] */
			        {110, 110, 110, 110, 110, 110, 110, 90, 90, 90, 90, 90, /*0 - 11*/},
			        /* nRltmStrength[12] */
			        {46, 50, 60, 60, 60, 60, 65, 70, 73, 73, 75, 75, /*0 - 11*/},
			        /* nContrastStrength[12] */
			        {40, 42, 42, 42, 40, 40, 40, 45, 45, 50, 50, 50, /*0 - 11*/},
			        /* nPostGamma[12] */
			        {40, 38, 36, 36, 34, 34, 34, 38, 42, 42, 44, 44, /*0 - 11*/},
			        /* nHighlightSup[12] */
			        {24, 20, 20, 20, 20, 20, 20, 20, 25, 25, 25, 25, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 11*/},
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
    16,
    /* nEdgeDirectEstStrengthLut[9] */
    {128, 256, 384, 448, 512, 576, 640, 704, 768, /*0 - 8*/},
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* tManualParam */
    {
        /* nEdgeDirectEstStrength */
        255,
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

const static AX_ISP_IQ_GIC_PARAM_T gic_param_sdr = {
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

const static AX_ISP_IQ_FCC_PARAM_T fcc_param_sdr = {
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
        {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, /*0 - 15*/},
        /* nFcCorSatLevel1[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_DEPURPLE_PARAM_T depurple_param_sdr = {
    /* nEnable */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        1,
        /* nDetEdgeSlopeY */
        20,
        /* nDetEdgeOffsetY */
        -115,
        /* nDetEdgeEnableC */
        1,
        /* nDetEdgeSlopeC */
        2,
        /* nDetEdgeOffsetC */
        -64,
        /* nDetSeledgeThrY */
        13440,
        /* nDetSeledgeSlopeY */
        127,
        /* nDetSeledgeWeight[7] */
        {64, 32, 0, 0, 0, 0, 0, /*0 - 6*/},
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
        {0, 0, 0, 81, 100, 128, 128, 128, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 86, 0, 0, 64, 64, 0, 0, 13, 26, 38, 32, 32, 64, 100, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {0, 0, 96, 128, 128, 100, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[16] */
        {102, 512, 1024, 5120, 10240, 51200, 102400, 512000, 1024000, 5120000, 10240000, 20480000, /*0 - 11*/},
        /* nCompStrength[16] */
        {60, 60, 60, 60, 60, 60, 60, 80, 128, 128, 128, 128, /*0 - 11*/},
        /* nCompTargetLuma[16][8] */
        {
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
            {6, 12, 24, 64, 64, 98, 128, 128, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
            {128, 128, 128, 77, 0, 0, 0, 0, 0, 13, 26, 38, 32, 32, 32, 64, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
            {0, 0, 0, 80, 118, 128, /*0 - 5*/},
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
    {32, 32, /*0 - 1*/},
    /* tManualParam */
    {
        /* nCcmCtrlLevel */
        256,
        /* nCcmSat */
        -2,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-178, 7, -80, -58, -3, -160, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {-31, -31, -21, -11, -16, -15, -14, -14, -10, 9, 11, 11, 0, -11, -16, -28, /*0 - 15*/},
        /* nXcmHue[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 252, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
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
            {2300, 2854, 3800, 4150, 5000, 6500, 7500, /*0 - 6*/},
            /* nLuxGainNum */
            5,
            /* nRefValLuxGain[12][5] */
            {
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
                {3072, 16229, 99200, 262144, 716800, /*0 - 4*/},
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
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, -2, 0, -5, /*0 - 4*/},
                {0, 0, -5, -3, 2, /*0 - 4*/},
                {0, 0, -5, -3, 2, /*0 - 4*/},
                {0, 0, -5, -5, -5, /*0 - 4*/},
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
                    {-200, -95, -165, -5, 30, -180, /*0 - 5*/},
                    {-200, -95, -165, -5, 30, -140, /*0 - 5*/},
                    {-200, -95, -165, -5, 30, -140, /*0 - 5*/},
                    {-200, -95, -165, -5, 30, -140, /*0 - 5*/},
                    {-200, -95, -165, -5, 30, -140, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {-200, -54, -138, -34, 12, -160, /*0 - 5*/},
                    {-200, -54, -138, -34, 12, -110, /*0 - 5*/},
                    {-200, -54, -138, -34, 12, -110, /*0 - 5*/},
                    {-200, -54, -138, -34, 12, -110, /*0 - 5*/},
                    {-200, -54, -138, -34, 12, -110, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-160, -42, -119, -50, 6, -145, /*0 - 5*/},
                    {-160, -42, -119, -50, 6, -145, /*0 - 5*/},
                    {-160, -42, -119, -50, 6, -145, /*0 - 5*/},
                    {-160, -42, -119, -50, 6, -145, /*0 - 5*/},
                    {-160, -42, -119, -50, 6, -145, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-132, -10, -113, -55, 3, -186, /*0 - 5*/},
                    {-132, -10, -113, -55, 3, -160, /*0 - 5*/},
                    {-132, -10, -113, -55, 3, -160, /*0 - 5*/},
                    {-132, -10, -113, -55, 3, -160, /*0 - 5*/},
                    {-132, -10, -113, -55, 3, -160, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-148, 10, -86, -55, -1, -166, /*0 - 5*/},
                    {-148, 10, -86, -55, -1, -166, /*0 - 5*/},
                    {-148, 10, -86, -55, -1, -166, /*0 - 5*/},
                    {-148, 10, -86, -55, -1, -166, /*0 - 5*/},
                    {-148, 10, -86, -55, -1, -166, /*0 - 5*/},
                },
                /* nCcmMatrix 5 */
                {
                    {-194, 5, -77, -60, -4, -157, /*0 - 5*/},
                    {-194, 5, -77, -60, -4, -157, /*0 - 5*/},
                    {-194, 5, -77, -60, -4, -157, /*0 - 5*/},
                    {-194, 5, -77, -60, -4, -157, /*0 - 5*/},
                    {-194, 5, -77, -60, -4, -157, /*0 - 5*/},
                },
                /* nCcmMatrix 6 */
                {
                    {-150, -14, -81, -83, -6, -149, /*0 - 5*/},
                    {-150, -14, -81, -83, -6, -149, /*0 - 5*/},
                    {-150, -14, -81, -83, -6, -149, /*0 - 5*/},
                    {-150, -14, -81, -83, -6, -149, /*0 - 5*/},
                    {-150, -14, -81, -83, -6, -149, /*0 - 5*/},
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
                    {-10, -25, -20, -20, -20, -15, -15, -15, 10, 15, 15, 15, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 15, 15, 15, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 5, 5, 5, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 5, 5, 5, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 5, 5, 5, 0, 0, 0, -10, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 15, 15, 15, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 15, 15, 15, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 5, 5, 5, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, 5, 5, 5, 5, 0, 0, 0, -10, /*0 - 15*/},
                    {-10, -25, -20, -20, -20, -15, -15, -15, -5, 5, 5, 5, 0, 0, 0, -10, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {-15, -15, -15, -5, -5, -15, -15, -15, -10, 15, 15, 15, 0, 0, 0, -15, /*0 - 15*/},
                    {-15, -15, -15, -5, -5, -5, -10, -10, -10, 15, 15, 15, 0, 0, 0, -15, /*0 - 15*/},
                    {-15, -15, -15, -5, -20, -15, -10, -10, -10, 5, 10, 10, 0, 0, 0, -15, /*0 - 15*/},
                    {-15, -15, -15, -5, -20, -15, -10, -10, 5, 5, 12, 12, 0, 0, 0, -15, /*0 - 15*/},
                    {-15, -15, -15, -5, -20, -15, -10, -10, 5, 5, 5, 5, 0, 0, 0, -15, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {-25, -25, -25, -15, -15, -15, -15, -15, -5, 10, 10, 10, 0, 0, -5, -25, /*0 - 15*/},
                    {-31, -31, -15, -15, -15, -15, -15, -15, -10, 15, 15, 15, 0, 0, -5, -25, /*0 - 15*/},
                    {-31, -31, -15, -5, -25, -15, -15, -15, -10, 5, 5, 5, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -25, -15, -15, -15, -10, 5, 12, 12, 4, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -15, -15, -10, 5, 5, 5, 0, -18, -20, -31, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {-25, -25, -24, -15, -15, -15, -15, -15, -5, 10, 10, 10, 0, 0, -5, -20, /*0 - 15*/},
                    {-31, -31, -25, -15, -15, -15, -15, -15, -10, 5, 15, 15, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -15, -15, -15, -15, -10, 5, 5, 5, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, 5, 5, 5, 5, 0, -18, -20, -31, /*0 - 15*/},
                    {-20, -20, -15, -5, -20, -15, -10, -10, 5, 15, 15, 15, 0, -18, -20, -20, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {-25, -25, -25, -15, -15, -15, -15, -15, -5, 10, 10, 10, 0, 0, -10, -25, /*0 - 15*/},
                    {-31, -31, -25, -15, -15, -15, -15, -15, -10, 15, 15, 15, 0, 0, -10, -25, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, -10, 5, 5, 5, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, 5, 5, 5, 5, 0, -18, -20, -31, /*0 - 15*/},
                    {-20, -20, -15, -5, -20, -15, -10, -10, 5, 15, 15, 15, 0, -18, -20, -20, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {-25, -25, -15, -5, -15, -10, -10, -10, 10, 10, 10, 10, 0, -18, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, 10, 10, 10, 10, 0, 0, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, 5, 5, 5, 5, 0, 0, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, 5, 5, 5, 5, 0, 0, -20, -31, /*0 - 15*/},
                    {-31, -31, -15, -5, -20, -15, -10, -10, 5, 5, 5, 5, 0, 0, -20, -31, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 640, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
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
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 8192, 9216, 11264, 13312, 15360, 17408, 19456, 21504, 23552, 25600, 27648, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 8192, 9216, 11264, 13312, 15360, 17408, 19456, 21504, 23552, 25600, 27648, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
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
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
                                {0, 2048, 4096, 6144, 8192, 10240, 12288, 14336, 16384, 18432, 20480, 22528, 24576, 26624, 28672, 30720, /*0 - 15*/},
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
    0,
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
                0, 77, 155, 232, 310, 387, 464, 541, 617, 693, 769, 845, 920, 994, 1068, 1142, 1215, 1287, 1358, 1429, 1499, 1568, 1637, 1704, 1771, 1836, 1901, 1965, 2027, 2088, 2149, 2208,  /* 0 - 31*/
                2266, 2322, 2377, 2431, 2484, 2535, 2585, 2633, 2680, 2726, 2771, 2814, 2855, 2895, 2934, 2971, 3006, 3041, 3073, 3105, 3135, 3163, 3191, 3217, 3242, 3266, 3289, 3311, 3332, 3353, 3372, 3391,  /* 32 - 63*/
                3409, 3426, 3442, 3458, 3474, 3488, 3503, 3516, 3529, 3542, 3555, 3567, 3578, 3589, 3600, 3611, 3621, 3631, 3641, 3651, 3660, 3670, 3679, 3688, 3697, 3707, 3716, 3725, 3734, 3743, 3752, 3762,  /* 64 - 95*/
                3772, 3781, 3791, 3801, 3811, 3822, 3832, 3842, 3853, 3864, 3874, 3885, 3896, 3906, 3917, 3928, 3939, 3949, 3960, 3970, 3981, 3991, 4001, 4011, 4021, 4031, 4041, 4050, 4059, 4069, 4077, 4086,  /* 96 - 127*/
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
        {1024, 24576, 131072, /*0 - 2*/},
        /* nRefValEnd[3] */
        {24567, 131072, 819200, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 75, 150, 226, 302, 379, 455, 532, 609, 685, 762, 838, 914, 990, 1065, 1140, 1215, 1288, 1362, 1434, 1506, 1577, 1648, 1718, 1787, 1855, 1922, 1988, 2053, 2116, 2178, 2238,  /* 0 - 31*/
                    2297, 2353, 2407, 2460, 2511, 2560, 2608, 2654, 2700, 2743, 2786, 2827, 2867, 2905, 2943, 2978, 3013, 3045, 3077, 3107, 3136, 3165, 3193, 3220, 3248, 3275, 3301, 3328, 3353, 3378, 3402, 3424,  /* 32 - 63*/
                    3446, 3465, 3483, 3500, 3516, 3531, 3546, 3560, 3574, 3587, 3601, 3615, 3628, 3641, 3654, 3667, 3679, 3690, 3701, 3711, 3721, 3731, 3741, 3750, 3759, 3767, 3776, 3784, 3792, 3800, 3807, 3815,  /* 64 - 95*/
                    3823, 3830, 3837, 3844, 3851, 3858, 3865, 3872, 3880, 3887, 3894, 3901, 3909, 3916, 3923, 3931, 3939, 3946, 3954, 3961, 3969, 3977, 3986, 3994, 4004, 4013, 4023, 4033, 4044, 4056, 4068, 4081,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 75, 151, 227, 303, 379, 456, 532, 609, 685, 762, 838, 914, 990, 1065, 1140, 1215, 1288, 1362, 1435, 1507, 1578, 1649, 1718, 1787, 1855, 1922, 1987, 2052, 2115, 2177, 2238,  /* 0 - 31*/
                    2298, 2355, 2412, 2467, 2521, 2573, 2624, 2673, 2721, 2768, 2813, 2856, 2898, 2939, 2978, 3016, 3053, 3087, 3121, 3153, 3184, 3213, 3241, 3268, 3294, 3319, 3343, 3366, 3387, 3408, 3428, 3447,  /* 32 - 63*/
                    3466, 3483, 3500, 3516, 3532, 3547, 3561, 3575, 3588, 3601, 3614, 3626, 3637, 3649, 3660, 3671, 3681, 3692, 3702, 3712, 3722, 3731, 3741, 3750, 3759, 3768, 3776, 3785, 3793, 3801, 3809, 3817,  /* 64 - 95*/
                    3825, 3832, 3840, 3847, 3854, 3861, 3868, 3875, 3882, 3889, 3896, 3902, 3909, 3917, 3924, 3931, 3939, 3946, 3954, 3962, 3970, 3979, 3987, 3996, 4006, 4016, 4026, 4036, 4047, 4058, 4070, 4082,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 77, 155, 232, 310, 387, 464, 541, 617, 693, 769, 845, 920, 994, 1068, 1142, 1215, 1287, 1358, 1429, 1499, 1568, 1637, 1704, 1771, 1836, 1901, 1965, 2027, 2088, 2149, 2208,  /* 0 - 31*/
                    2266, 2322, 2377, 2431, 2484, 2535, 2585, 2633, 2680, 2726, 2771, 2814, 2855, 2895, 2934, 2971, 3006, 3041, 3073, 3105, 3135, 3163, 3191, 3217, 3242, 3266, 3289, 3311, 3332, 3353, 3372, 3391,  /* 32 - 63*/
                    3409, 3426, 3442, 3458, 3474, 3488, 3503, 3516, 3529, 3542, 3555, 3567, 3578, 3589, 3600, 3611, 3621, 3631, 3641, 3651, 3660, 3670, 3679, 3688, 3697, 3707, 3716, 3725, 3734, 3743, 3752, 3762,  /* 64 - 95*/
                    3772, 3781, 3791, 3801, 3811, 3822, 3832, 3842, 3853, 3864, 3874, 3885, 3896, 3906, 3917, 3928, 3939, 3949, 3960, 3970, 3981, 3991, 4001, 4011, 4021, 4031, 4041, 4050, 4059, 4069, 4077, 4086,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEHAZE_PARAM_T dehaze_param_sdr = {
    /* nDehazeEn */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* tGlbParam */
    {
        /* nCalcMode */
        1,
        /* nAirReflect */
        52224,
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
        54,
        /* nGrayDcRatio */
        64,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 49600, 198400, 396800, 595200, 793600, /*0 - 11*/},
        /* nEffectStrength[12] */
        {64, 64, 64, 64, 54, 54, 54, 54, 66, 78, 84, 84, /*0 - 11*/},
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
        {102, 309, 512, 512, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 49600, 198400, 396800, 595200, 793600, /*0 - 11*/},
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
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {102, 309, 512, 512, /*0 - 3*/},
            {128, 128, 512, 512, /*0 - 3*/},
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
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 49600, 198400, 396800, 595200, 793600, /*0 - 11*/},
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
            {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
            {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {255, 0, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {0, 0, /*0 - 1*/},
        /* nMotDetSmoothLuma[2] */
        {2, 2, /*0 - 1*/},
        /* nMotDetSmoothChroma[2] */
        {2, 2, /*0 - 1*/},
        /* nMotDetLimitLuma[2] */
        {0, 256, /*0 - 1*/},
        /* nMotDetLimitChrom[2] */
        {0, 256, /*0 - 1*/},
        /* nMotDetBlendRatio[2] */
        {256, 0, /*0 - 1*/},
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
        128,
        /* nSf0DirStre */
        128,
        /* nSf0DetailStre */
        128,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {469, 411, 323, 283, 240, 179, 134, 117, 93, /*0 - 8*/},
            {536, 455, 391, 333, 250, 197, 137, 74, 70, /*0 - 8*/},
            {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
            {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {3, 3, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {32, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {48, 48, 160, /*0 - 2*/},
            {58, 58, 141, /*0 - 2*/},
        },
        /* nSf0ChromaAttenStre[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {184, 220, /*0 - 1*/},
        /* nSf0ChromaProtLut[2][9] */
        {
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
        },
        /* nSf1LumaMedEn */
        0,
        /* nSf1LumaGauStre[2] */
        {128, 128, /*0 - 1*/},
        /* nSf1LumaGauRatio[2] */
        {256, 256, /*0 - 1*/},
        /* nSf1LumaKernelSize */
        2,
        /* nSf1LumaNoiseLut[2][9] */
        {
            {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
            {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {512, 462, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {256, 224, /*0 - 1*/},
        /* nSf1ChromaCoring */
        1023,
        /* nSf1ChromaBlendRatio */
        23,
        /* nSf2LumaGauStre[2] */
        {256, 128, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        1,
        /* nSf2NoiseLut[2][9] */
        {
            {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
            {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {48, 48, 160, /*0 - 2*/},
            {128, 0, 128, /*0 - 2*/},
        },
        /* nExtMaskStrenLuma */
        128,
        /* nExtMaskStrenChrom */
        128,
        /* nExtMaskStrenStatus */
        128,
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
        {128, 256, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {256, 0, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 4096, 5120, 8192, 14336, 20480, 32768, 40960, 50800, 204800, 406400, 812800, /*0 - 11*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {24, 32, 40, 48, 40, 40, 32, 28, 28, 24, 20, 16, 16, 12, 8, 8, 4, /*0 - 16*/},
                {24, 32, 40, 48, 40, 40, 52, 64, 64, 52, 20, 16, 16, 12, 8, 8, 4, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {42, 48, 52, 54, 60, 64, 60, 54, 52, 42, 42, 30, 30, 30, 20, 20, 10, /*0 - 16*/},
                {42, 48, 52, 54, 60, 64, 86, 92, 92, 86, 42, 30, 30, 30, 20, 20, 10, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {42, 48, 52, 54, 60, 64, 60, 54, 52, 42, 42, 30, 30, 30, 20, 20, 10, /*0 - 16*/},
                {42, 48, 52, 54, 60, 64, 86, 92, 92, 86, 42, 30, 30, 30, 20, 20, 10, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {42, 48, 52, 54, 60, 64, 60, 54, 52, 42, 42, 30, 30, 30, 20, 20, 10, /*0 - 16*/},
                {42, 48, 52, 54, 60, 64, 86, 96, 96, 86, 42, 30, 30, 30, 20, 20, 10, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {110, 110, 110, 110, 110, 130, 130, 130, 130, 130, 110, 110, 110, 110, 110, 110, 110, /*0 - 16*/},
                {110, 110, 110, 110, 110, 130, 130, 130, 130, 130, 110, 110, 110, 110, 110, 110, 110, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {110, 110, 110, 110, 110, 130, 130, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 16*/},
                {236, 236, 236, 226, 226, 226, 213, 213, 186, 186, 164, 115, 105, 95, 84, 74, 64, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {128, 128, 128, 128, 128, 128, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 86, /*0 - 16*/},
                {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 7 */
            {
                {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
                {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 8 */
            {
                {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
                {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 9 */
            {
                {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
                {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 10 */
            {
                {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
                {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 11 */
            {
                {40, 40, 40, 40, 40, 40, 36, 32, 28, 24, 20, 16, 12, 8, 4, 2, 2, /*0 - 16*/},
                {300, 300, 300, 270, 260, 240, 220, 200, 180, 160, 140, 120, 100, 80, 60, 40, 20, /*0 - 16*/},
            },
        },
        /* nMotDetStrenLuma[12][2] */
        {
            {128, 0, /*0 - 1*/},
            {146, -5, /*0 - 1*/},
            {146, -5, /*0 - 1*/},
            {168, -5, /*0 - 1*/},
            {168, -5, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {96, 0, /*0 - 1*/},
            {168, 0, /*0 - 1*/},
            {168, 0, /*0 - 1*/},
            {168, 0, /*0 - 1*/},
            {168, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nMotDetSmoothLuma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
        },
        /* nMotDetSmoothChroma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
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
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
            {256, 0, /*0 - 1*/},
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
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 11 */
            {
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
        },
        /* nTfRatioLut[12][16] */
        {
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
        },
        /* nTfRatLimitLuma[12][2][2] */
        {
            /* nTfRatLimitLuma 0 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 1 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
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
                {32, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 5 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 6 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 7 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 8 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 9 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 10 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 11 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
        },
        /* nTfRatLimitChroma[12][2][2] */
        {
            /* nTfRatLimitChroma 0 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 1 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 2 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 3 */
            {
                {16, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 4 */
            {
                {32, 255, /*0 - 1*/},
                {16, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 5 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 6 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 7 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 8 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 9 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 10 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 11 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
        },
        /* nSf0EdgeStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nSf0DirStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nSf0DetailStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nSf0LumaNoiseLut[12][4][9] */
        {
            /* nSf0LumaNoiseLut 0 */
            {
                {64, 64, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {64, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {64, 32, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {64, 32, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {512, 384, 96, 84, 64, 64, 64, 64, 64, /*0 - 8*/},
                {512, 384, 128, 96, 72, 64, 32, 32, 32, /*0 - 8*/},
                {512, 384, 96, 84, 64, 64, 64, 64, 64, /*0 - 8*/},
                {512, 384, 128, 96, 72, 64, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {512, 384, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {512, 384, 128, 96, 72, 64, 32, 32, 32, /*0 - 8*/},
                {512, 384, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {256, 192, 128, 96, 72, 64, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {512, 256, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {512, 256, 128, 96, 72, 64, 32, 32, 32, /*0 - 8*/},
                {512, 256, 128, 96, 72, 64, 32, 32, 32, /*0 - 8*/},
                {512, 256, 128, 128, 84, 84, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {512, 256, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {512, 256, 128, 128, 84, 84, 64, 64, 64, /*0 - 8*/},
                {512, 256, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {512, 256, 128, 128, 84, 84, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {512, 256, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {512, 256, 128, 128, 128, 128, 128, 64, 64, /*0 - 8*/},
                {512, 256, 138, 101, 89, 64, 64, 64, 64, /*0 - 8*/},
                {512, 256, 128, 128, 84, 84, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {295, 253, 212, 200, 176, 146, 134, 117, 93, /*0 - 8*/},
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
                {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
                {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 9 */
            {
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
                {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 10 */
            {
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
                {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 11 */
            {
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {512, 450, 350, 303, 256, 187, 134, 117, 93, /*0 - 8*/},
                {256, 206, 181, 150, 108, 64, 64, 64, 64, /*0 - 8*/},
                {542, 456, 401, 340, 248, 199, 138, 64, 64, /*0 - 8*/},
            },
        },
        /* nSf0LumaKernelSize[12][2] */
        {
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
        },
        /* nSf0LumaGauStre[12][2] */
        {
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
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
                {128, 0, 128, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 1 */
            {
                {128, 0, 128, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 2 */
            {
                {0, 0, 256, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 3 */
            {
                {0, 0, 256, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 4 */
            {
                {0, 0, 256, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {0, 0, 256, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {0, 0, 256, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {0, 0, 256, /*0 - 2*/},
                {32, 32, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {60, 60, 136, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 9 */
            {
                {60, 60, 136, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 10 */
            {
                {60, 60, 136, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 11 */
            {
                {60, 60, 136, /*0 - 2*/},
                {64, 64, 128, /*0 - 2*/},
            },
        },
        /* nSf0ChromaAttenStre[12][2] */
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
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {240, 255, /*0 - 1*/},
            {240, 255, /*0 - 1*/},
            {240, 255, /*0 - 1*/},
            {240, 255, /*0 - 1*/},
            {240, 240, /*0 - 1*/},
            {220, 230, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {180, 220, /*0 - 1*/},
            {180, 220, /*0 - 1*/},
            {170, 220, /*0 - 1*/},
            {170, 220, /*0 - 1*/},
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
                {100, 80, 60, 40, 40, 20, 20, 20, 20, /*0 - 8*/},
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 2 */
            {
                {180, 160, 140, 120, 100, 70, 50, 30, 20, /*0 - 8*/},
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {180, 160, 140, 120, 100, 70, 50, 30, 20, /*0 - 8*/},
                {60, 50, 40, 30, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {180, 160, 140, 120, 100, 70, 50, 30, 20, /*0 - 8*/},
                {120, 100, 80, 60, 40, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {180, 160, 140, 120, 100, 70, 50, 30, 20, /*0 - 8*/},
                {120, 100, 80, 60, 40, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 9 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 10 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 11 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 32, 32, 32, 16, 16, 8, 8, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf1LumaGauStre[12][2] */
        {
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
        },
        /* nSf1LumaGauRatio[12][2] */
        {
            {128, 32, /*0 - 1*/},
            {128, 32, /*0 - 1*/},
            {128, 32, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nSf1LumaKernelSize[12] */
        {1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, /*0 - 11*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {256, 128, 64, 32, 16, 12, 12, 12, 12, /*0 - 8*/},
                {64, 32, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {512, 384, 64, 32, 16, 12, 12, 12, 12, /*0 - 8*/},
                {512, 256, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {512, 389, 303, 248, 218, 181, 175, 132, 64, /*0 - 8*/},
                {512, 256, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 3 */
            {
                {512, 389, 303, 248, 218, 181, 175, 132, 64, /*0 - 8*/},
                {512, 389, 303, 248, 218, 181, 175, 132, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 4 */
            {
                {512, 389, 303, 248, 218, 181, 175, 132, 64, /*0 - 8*/},
                {512, 389, 303, 248, 218, 181, 175, 132, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 5 */
            {
                {689, 567, 481, 426, 383, 346, 285, 120, 64, /*0 - 8*/},
                {512, 389, 303, 248, 218, 181, 175, 132, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 6 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 9 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 10 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 11 */
            {
                {247, 229, 206, 176, 152, 134, 117, 93, 63, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
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
            {96, 64, /*0 - 1*/},
            {96, 96, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {512, 128, /*0 - 1*/},
            {512, 128, /*0 - 1*/},
            {512, 128, /*0 - 1*/},
            {512, 128, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {64, 192, /*0 - 1*/},
            {64, 168, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
            {256, 224, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {128, 256, 256, 256, 1023, 1023, 1023, 1023, 1023, 1023, 1023, 1023, /*0 - 11*/},
        /* nSf1ChromaBlendRatio[12] */
        {168, 168, 168, 128, 64, 23, 23, 23, 23, 23, 23, 23, /*0 - 11*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {32, 64, /*0 - 1*/},
            {32, 64, /*0 - 1*/},
            {32, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
        },
        /* nSf2LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf2KernelSize[12] */
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 11*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {64, 32, 16, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {128, 64, 32, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {128, 64, 32, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {128, 64, 32, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {48, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 8*/},
                {24, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {352, 285, 224, 181, 157, 128, 128, 128, 128, /*0 - 8*/},
                {352, 285, 224, 181, 157, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {352, 285, 224, 181, 157, 128, 128, 128, 128, /*0 - 8*/},
                {352, 285, 224, 181, 157, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {648, 542, 486, 386, 322, 242, 212, 169, 109, /*0 - 8*/},
                {352, 285, 224, 181, 157, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 9 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 10 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
            /* nSf2NoiseLut 11 */
            {
                {289, 271, 253, 218, 182, 158, 140, 111, 69, /*0 - 8*/},
                {123, 105, 87, 87, 57, 51, 51, 45, 32, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {128, 64, 64, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {128, 64, 64, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 2 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
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
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {0, 0, 256, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {0, 0, 256, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {60, 60, 136, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 9 */
            {
                {60, 60, 136, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 10 */
            {
                {60, 60, 136, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
            },
            /* nSf2BlendRatio 11 */
            {
                {60, 60, 136, /*0 - 2*/},
                {128, 0, 128, /*0 - 2*/},
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
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
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
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
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
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
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
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
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
        {0, 0, 0, 32, 64, 95, 128, 168, 215, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 16*/},
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
        {127, 127, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {4, 2, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {6, 4, /*0 - 1*/},
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
            {464, -172, -176, /*0 - 2*/},
            {728, -96, 100, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorRange[8][3] */
        {
            {440, 144, 144, /*0 - 2*/},
            {64, 32, 64, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSmooth[8][3] */
        {
            {7, 2, 2, /*0 - 2*/},
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
        0,
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
        {0, 0, 0, -6, -22, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {-32, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {0, 10, 20, 32, 82, 82, 82, 82, 82, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-24, -13, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 15, 29, /*0 - 4*/},
            {0, 0, 0, -5, -15, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nHighFreqOsGain[2] */
        {4, 4, /*0 - 1*/},
    },
    /* tMedFreqControl */
    {
        /* nMedFreqEnable */
        1,
        /* nMedFreqMotionMskEn */
        0,
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
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {-36, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {0, 5, 15, 26, 34, 62, 72, 84, 96, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-28, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 8, 29, /*0 - 4*/},
            {0, 0, 0, -8, -15, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {64, 16, /*0 - 1*/},
        /* nMedFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
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
        {1, 1, 0, 0, /*0 - 3*/},
        /* nDirFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqMotionLut[5] */
        {0, 0, 0, 127, 127, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {0, 32, 64, 96, 96, 96, 96, 96, 96, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-55, 0, 22, 53, 79, 88, 88, 72, 63, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 6, 12, /*0 - 4*/},
            {0, 0, 0, -6, -12, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {4, 2, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {64, 64, 128, 192, 192, 192, 224, 249, 252, /*0 - 8*/},
    },
    /* tLowFreqControl */
    {
        /* nLowFreqEnable */
        1,
        /* nLowFreqMotionMskEn */
        0,
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
        {1, 1, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {0, 10, 20, 20, 0, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqTextureLutMotion[9] */
        {-48, -26, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqClnpLut[4][5] */
        {
            {0, 0, 0, 32, 45, /*0 - 4*/},
            {0, 0, 0, -16, -20, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {29, 38, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {1, 1, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {64, 32, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 67, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        6,
        /* nHighFreqCorSlope */
        6,
        /* nHighFreqCorOffset */
        12,
        /* nHighFreqLimit[2] */
        {1023, 256, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {16, 0, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 86, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        8,
        /* nMedFreqCorSlope */
        5,
        /* nMedFreqCorOffset */
        16,
        /* nMedFreqLimit[2] */
        {512, 256, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {48, 16, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        6,
        /* nDirFreqCorSlope */
        8,
        /* nDirFreqCorOffset */
        16,
        /* nDirFreqLimit[2] */
        {1023, 256, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {0, -16, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 168, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        4,
        /* nLowFreqCorSlope */
        8,
        /* nLowFreqCorOffset */
        16,
        /* nLowFreqLimit[2] */
        {512, 512, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {8, 18, 28, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {16, 36, 56, /*0 - 2*/},
        /* nShpHpfScale[3] */
        {128, 128, 128, /*0 - 2*/},
        /* nShpGain[2] */
        {32, 28, /*0 - 1*/},
        /* nShpLimit[2] */
        {-4096, 4095, /*0 - 1*/},
        /* nGrainLogGain */
        32,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 14336, 20480, 32768, 49600, 198400, 396800, 595200, 793600, /*0 - 11*/},
        /* nHighFreqLogGain[12][2] */
        {
            {47, 36, /*0 - 1*/},
            {47, 36, /*0 - 1*/},
            {64, 36, /*0 - 1*/},
            {64, 36, /*0 - 1*/},
            {64, 36, /*0 - 1*/},
            {64, 36, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
        },
        /* nHighFreqCorBaseGain[12] */
        {5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, /*0 - 11*/},
        /* nHighFreqCorSlope[12] */
        {7, 7, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, /*0 - 11*/},
        /* nHighFreqCorOffset[12] */
        {38, 38, 18, 18, 18, 12, 12, 12, 12, 12, 12, 12, /*0 - 11*/},
        /* nHighFreqLimit[12][2] */
        {
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
        },
        /* nMedFreqLogGain[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 84, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 48, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
        },
        /* nMedFreqCorBaseGain[12] */
        {3, 3, 5, 8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nMedFreqCorSlope[12] */
        {6, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, /*0 - 11*/},
        /* nMedFreqCorOffset[12] */
        {35, 35, 24, 24, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nMedFreqLimit[12][2] */
        {
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
            {512, 256, /*0 - 1*/},
        },
        /* nDirFreqLogGain[12][2] */
        {
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
            {48, 16, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 96, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {4, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, /*0 - 11*/},
        /* nDirFreqCorSlope[12] */
        {6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nDirFreqCorOffset[12] */
        {37, 37, 37, 37, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nDirFreqLimit[12][2] */
        {
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
        },
        /* nLowFreqLogGain[12][2] */
        {
            {8, 8, /*0 - 1*/},
            {6, 8, /*0 - 1*/},
            {4, 6, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
        },
        /* nLowFreqGainLimit[12][2] */
        {
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
            {0, 168, /*0 - 1*/},
        },
        /* nLowFreqCorBaseGain[12] */
        {3, 3, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, /*0 - 11*/},
        /* nLowFreqCorSlope[12] */
        {7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nLowFreqCorOffset[12] */
        {40, 40, 40, 40, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
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
            {512, 200, /*0 - 1*/},
            {512, 200, /*0 - 1*/},
            {512, 200, /*0 - 1*/},
        },
        /* nShpHpfBsigma[12][3] */
        {
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 18, 28, /*0 - 2*/},
            {8, 18, 28, /*0 - 2*/},
            {8, 18, 28, /*0 - 2*/},
            {8, 18, 28, /*0 - 2*/},
            {8, 18, 28, /*0 - 2*/},
            {16, 32, 28, /*0 - 2*/},
            {16, 32, 28, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {16, 24, 32, /*0 - 2*/},
            {16, 24, 32, /*0 - 2*/},
            {16, 24, 32, /*0 - 2*/},
            {16, 32, 32, /*0 - 2*/},
            {16, 32, 48, /*0 - 2*/},
            {16, 36, 56, /*0 - 2*/},
            {16, 36, 56, /*0 - 2*/},
            {16, 36, 56, /*0 - 2*/},
            {16, 36, 56, /*0 - 2*/},
            {20, 36, 56, /*0 - 2*/},
            {32, 36, 56, /*0 - 2*/},
            {32, 36, 56, /*0 - 2*/},
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
            {36, 28, /*0 - 1*/},
            {36, 28, /*0 - 1*/},
            {36, 28, /*0 - 1*/},
            {36, 28, /*0 - 1*/},
            {34, 26, /*0 - 1*/},
            {32, 20, /*0 - 1*/},
            {32, 20, /*0 - 1*/},
            {32, 28, /*0 - 1*/},
            {28, 24, /*0 - 1*/},
            {28, 28, /*0 - 1*/},
            {28, 28, /*0 - 1*/},
            {28, 28, /*0 - 1*/},
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
        {0, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
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
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 49600, 198400, 396800, 595200, 793600, /*0 - 11*/},
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
            {380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
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
            {380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
            {380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 380, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
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
        1,
        /* nCropRatio */
        205,
        /* nFramePosWeights[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
        /* nSadThreshold */
        16777215,
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
        2,
        /* nRoiRegionSizeH */
        664,
        /* nRoiRegionSizeV */
        760,
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
        4,
        /* nRoiRegionNumV */
        3,
        /* nRoiRegionSizeH */
        672,
        /* nRoiRegionSizeV */
        496,
        /* nSearchRange */
        32,
    },
};

#endif
