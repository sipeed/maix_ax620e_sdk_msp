#ifndef __SC500AI_SDR_QS_H__
#define __SC500AI_SDR_QS_H__

/********************************************************************
* Store the default parameters of the sdr mode
* warn: user need to add 'static' when defining global variables.
        Limit the scope of the variable to this sensor
*********************************************************************/

#include "ax_isp_iq_api.h"
#include "ax_isp_api.h"


const static AX_ISP_VERSION_T ax_isp_version_param_sdr_qs = {
    /* nIspMajor */
    4,
    /* nIspMinor1 */
    0,
    /* nIspMinor2 */
    39,
    /* szBuildTime[32] */
    "Nov 29 2023 21:41:54",
    /* szIspVersion[64] */
    "AX620E_ISP_V4.0.39",
};

const static AX_ISP_IQ_SCENE_PARAM_T scene_param_sdr_qs = {
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
        10,
        /* nRefValStart[4] */
        {0, 13389, /*0 - 1*/},
        /* nRefValEnd[4] */
        {13389, 4193280, /*0 - 1*/},
        /* nAiWorkMode[4] */
        {0, 1, /*0 - 1*/},
    },
};

const static AX_ISP_IQ_AE_PARAM_T ae_param_sdr_qs = {
    /* nEnable */
    1,
    /* tExpManual */
    {
        /* nIspGain */
        1024,
        /* nAGain */
        1152,
        /* nDgain */
        1024,
        /* nHcgLcg */
        2,
        /* nSnsTotalAGain */
        1152,
        /* nSysTotalGain */
        1152,
        /* nShutter */
        40,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        512,
        /* nHdrRealRatioLtoS */
        1024,
        /* nHdrRealRatioStoVS */
        1024,
        /* nSetPoint */
        40960,
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
        39898,
        /* nRealMaxShutter */
        39888,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        40960,
        /* nFaceTarget */
        35840,
        /* nVehicleTarget */
        35840,
        /* nTolerance */
        10485760,
        /* nAgainLcg2HcgTh */
        6451,
        /* nAgainHcg2LcgTh */
        1229,
        /* nAgainLcg2HcgRatio */
        1024,
        /* nAgainHcg2LcgRatio */
        1024,
        /* nLuxk */
        72091,
        /* nCompensationMode */
        1,
        /* nMaxIspGain */
        43008,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        1024,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        24645,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        1048576,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        39888,
        /* nMinShutter */
        36,
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
                {409600, 512000, /*0 - 1*/},
                /* nAntiFlickerToleranceList[12] */
                {300, 300, /*0 - 1*/},
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
            3,
            /* nUsedTableId */
            0,
            /* tRouteTable[8] */
            {
                /* 0 */
                {
                    /* sTableName[32] */
                    "DefaultAeRoute",
                    /* nRouteCurveNum */
                    3,
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
                            30000,
                            /* nGain */
                            2048,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            39888,
                            /* nGain */
                            517120,
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
            5,
            /* nRefList[10] */
            {512, 5120, 102400, 512000, 2048000, /*0 - 4*/},
            /* nSetPointList[10] */
            {34816, 37888, 40960, 44032, 47104, /*0 - 4*/},
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
                    {102, 10240, 30720, 102400, 204800, 1024000, /*0 - 5*/},
                    /* nSatLumaList[10] */
                    {153600, 122880, 61440, 40960, 20480, 10240, /*0 - 5*/},
                    /* nMinRatioList[10] */
                    {1024, 1024, 1024, 1024, 1024, 1024, /*0 - 5*/},
                    /* nMaxRatioList[10] */
                    {32768, 32768, 32768, 32768, 32768, 32768, /*0 - 5*/},
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

const static AX_ISP_IQ_AWB_PARAM_T awb_param_sdr_qs = {
    /* nEnable */
    1,
    /* tManualParam */
    {
        /* nManualMode */
        0,
        /* tGain */
        {
            /* nGainR */
            530,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            418,
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
            1412364,
            /* nBg */
            1440118,
        },
        /* nCenterPntRadius */
        1232978,
        /* nLowCut */
        0,
        /* nHighCut */
        0,
        /* nCctMax */
        12000,
        /* nCctMin */
        1800,
        /* nPartCtrlPntNum */
        8,
        /* nCtrlPntNum */
        41,
        /* nCtrlSegKbNum */
        40,
        /* nCctList[512] */
        {
            1800, 1862, 1925, 1987, 2050, 2112, 2175, 2237, 2300, 2362, 2425, 2487, 2550, 2612, 2675, 2737, 2800, 2925, 3050, 3175, 3300, 3425, 3550, 3675, 3800, 4137, 4475, 4812, 5150, 5487, 5825, 6162,  /* 0 - 31*/
            6500, 7187, 7875, 8562, 9250, 9937, 10625, 11312, 12000, /*32 - 40*/
        },
        /* tChordKB */
        {
            /* nK */
            -715,
            /* nB */
            1339,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1534696,
                /* nBg */
                297554,
            },
            /* 1 */
            {
                /* nRg */
                1470198,
                /* nBg */
                342664,
            },
            /* 2 */
            {
                /* nRg */
                1410922,
                /* nBg */
                384125,
            },
            /* 3 */
            {
                /* nRg */
                1355956,
                /* nBg */
                422566,
            },
            /* 4 */
            {
                /* nRg */
                1304565,
                /* nBg */
                458511,
            },
            /* 5 */
            {
                /* nRg */
                1256110,
                /* nBg */
                492401,
            },
            /* 6 */
            {
                /* nRg */
                1210120,
                /* nBg */
                524571,
            },
            /* 7 */
            {
                /* nRg */
                1166132,
                /* nBg */
                555326,
            },
            /* 8 */
            {
                /* nRg */
                1123801,
                /* nBg */
                584938,
            },
            /* 9 */
            {
                /* nRg */
                1106573,
                /* nBg */
                596996,
            },
            /* 10 */
            {
                /* nRg */
                1089544,
                /* nBg */
                608898,
            },
            /* 11 */
            {
                /* nRg */
                1072704,
                /* nBg */
                620684,
            },
            /* 12 */
            {
                /* nRg */
                1056031,
                /* nBg */
                632344,
            },
            /* 13 */
            {
                /* nRg */
                1039506,
                /* nBg */
                643899,
            },
            /* 14 */
            {
                /* nRg */
                1023106,
                /* nBg */
                655370,
            },
            /* 15 */
            {
                /* nRg */
                1006822,
                /* nBg */
                666758,
            },
            /* 16 */
            {
                /* nRg */
                990632,
                /* nBg */
                678083,
            },
            /* 17 */
            {
                /* nRg */
                974452,
                /* nBg */
                689397,
            },
            /* 18 */
            {
                /* nRg */
                958346,
                /* nBg */
                700658,
            },
            /* 19 */
            {
                /* nRg */
                942271,
                /* nBg */
                711899,
            },
            /* 20 */
            {
                /* nRg */
                926228,
                /* nBg */
                723119,
            },
            /* 21 */
            {
                /* nRg */
                910195,
                /* nBg */
                734339,
            },
            /* 22 */
            {
                /* nRg */
                894163,
                /* nBg */
                745559,
            },
            /* 23 */
            {
                /* nRg */
                878099,
                /* nBg */
                756789,
            },
            /* 24 */
            {
                /* nRg */
                862003,
                /* nBg */
                768050,
            },
            /* 25 */
            {
                /* nRg */
                840906,
                /* nBg */
                782804,
            },
            /* 26 */
            {
                /* nRg */
                819682,
                /* nBg */
                797641,
            },
            /* 27 */
            {
                /* nRg */
                798281,
                /* nBg */
                812615,
            },
            /* 28 */
            {
                /* nRg */
                776680,
                /* nBg */
                827725,
            },
            /* 29 */
            {
                /* nRg */
                754828,
                /* nBg */
                843003,
            },
            /* 30 */
            {
                /* nRg */
                732672,
                /* nBg */
                858501,
            },
            /* 31 */
            {
                /* nRg */
                710180,
                /* nBg */
                874229,
            },
            /* 32 */
            {
                /* nRg */
                687300,
                /* nBg */
                890231,
            },
            /* 33 */
            {
                /* nRg */
                639285,
                /* nBg */
                923816,
            },
            /* 34 */
            {
                /* nRg */
                588964,
                /* nBg */
                959017,
            },
            /* 35 */
            {
                /* nRg */
                535770,
                /* nBg */
                996221,
            },
            /* 36 */
            {
                /* nRg */
                479042,
                /* nBg */
                1035888,
            },
            /* 37 */
            {
                /* nRg */
                417952,
                /* nBg */
                1078618,
            },
            /* 38 */
            {
                /* nRg */
                351493,
                /* nBg */
                1125101,
            },
            /* 39 */
            {
                /* nRg */
                278355,
                /* nBg */
                1176261,
            },
            /* 40 */
            {
                /* nRg */
                196860,
                /* nBg */
                1233251,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1245876,
                /* nBg */
                303154,
            },
            /* 1 */
            {
                /* nRg */
                1219462,
                /* nBg */
                302011,
            },
            /* 2 */
            {
                /* nRg */
                1192912,
                /* nBg */
                301497,
            },
            /* 3 */
            {
                /* nRg */
                1166237,
                /* nBg */
                301602,
            },
            /* 4 */
            {
                /* nRg */
                1139456,
                /* nBg */
                302325,
            },
            /* 5 */
            {
                /* nRg */
                1112581,
                /* nBg */
                303689,
            },
            /* 6 */
            {
                /* nRg */
                1085633,
                /* nBg */
                305681,
            },
            /* 7 */
            {
                /* nRg */
                1058621,
                /* nBg */
                308323,
            },
            /* 8 */
            {
                /* nRg */
                1031568,
                /* nBg */
                311595,
            },
            /* 9 */
            {
                /* nRg */
                1004483,
                /* nBg */
                315527,
            },
            /* 10 */
            {
                /* nRg */
                977378,
                /* nBg */
                320099,
            },
            /* 11 */
            {
                /* nRg */
                950282,
                /* nBg */
                325331,
            },
            /* 12 */
            {
                /* nRg */
                923198,
                /* nBg */
                331214,
            },
            /* 13 */
            {
                /* nRg */
                896145,
                /* nBg */
                337757,
            },
            /* 14 */
            {
                /* nRg */
                869133,
                /* nBg */
                344950,
            },
            /* 15 */
            {
                /* nRg */
                842195,
                /* nBg */
                352814,
            },
            /* 16 */
            {
                /* nRg */
                815331,
                /* nBg */
                361329,
            },
            /* 17 */
            {
                /* nRg */
                791119,
                /* nBg */
                375086,
            },
            /* 18 */
            {
                /* nRg */
                767222,
                /* nBg */
                389389,
            },
            /* 19 */
            {
                /* nRg */
                743661,
                /* nBg */
                404226,
            },
            /* 20 */
            {
                /* nRg */
                720435,
                /* nBg */
                419598,
            },
            /* 21 */
            {
                /* nRg */
                697565,
                /* nBg */
                435484,
            },
            /* 22 */
            {
                /* nRg */
                675052,
                /* nBg */
                451884,
            },
            /* 23 */
            {
                /* nRg */
                652917,
                /* nBg */
                468787,
            },
            /* 24 */
            {
                /* nRg */
                631180,
                /* nBg */
                486183,
            },
            /* 25 */
            {
                /* nRg */
                603403,
                /* nBg */
                509618,
            },
            /* 26 */
            {
                /* nRg */
                576339,
                /* nBg */
                533861,
            },
            /* 27 */
            {
                /* nRg */
                549999,
                /* nBg */
                558891,
            },
            /* 28 */
            {
                /* nRg */
                524403,
                /* nBg */
                584686,
            },
            /* 29 */
            {
                /* nRg */
                499584,
                /* nBg */
                611225,
            },
            /* 30 */
            {
                /* nRg */
                475550,
                /* nBg */
                638478,
            },
            /* 31 */
            {
                /* nRg */
                452335,
                /* nBg */
                666433,
            },
            /* 32 */
            {
                /* nRg */
                429958,
                /* nBg */
                695059,
            },
            /* 33 */
            {
                /* nRg */
                387019,
                /* nBg */
                755342,
            },
            /* 34 */
            {
                /* nRg */
                347781,
                /* nBg */
                818099,
            },
            /* 35 */
            {
                /* nRg */
                312381,
                /* nBg */
                883090,
            },
            /* 36 */
            {
                /* nRg */
                280945,
                /* nBg */
                950094,
            },
            /* 37 */
            {
                /* nRg */
                253577,
                /* nBg */
                1018859,
            },
            /* 38 */
            {
                /* nRg */
                230393,
                /* nBg */
                1089145,
            },
            /* 39 */
            {
                /* nRg */
                211466,
                /* nBg */
                1160700,
            },
            /* 40 */
            {
                /* nRg */
                196860,
                /* nBg */
                1233251,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                -9563,
                /* nB */
                14289,
            },
            /* 1 */
            {
                /* nK */
                -19431,
                /* nB */
                27579,
            },
            /* 2 */
            {
                /* nK */
                751402,
                /* nB */
                -1010682,
            },
            /* 3 */
            {
                /* nK */
                18473,
                /* nB */
                -23475,
            },
            /* 4 */
            {
                /* nK */
                9324,
                /* nB */
                -11151,
            },
            /* 5 */
            {
                /* nK */
                6211,
                /* nB */
                -6958,
            },
            /* 6 */
            {
                /* nK */
                4636,
                /* nB */
                -4836,
            },
            /* 7 */
            {
                /* nK */
                3680,
                /* nB */
                -3549,
            },
            /* 8 */
            {
                /* nK */
                3035,
                /* nB */
                -2680,
            },
            /* 9 */
            {
                /* nK */
                2823,
                /* nB */
                -2395,
            },
            /* 10 */
            {
                /* nK */
                2637,
                /* nB */
                -2144,
            },
            /* 11 */
            {
                /* nK */
                2470,
                /* nB */
                -1920,
            },
            /* 12 */
            {
                /* nK */
                2321,
                /* nB */
                -1719,
            },
            /* 13 */
            {
                /* nK */
                2187,
                /* nB */
                -1538,
            },
            /* 14 */
            {
                /* nK */
                2064,
                /* nB */
                -1373,
            },
            /* 15 */
            {
                /* nK */
                1953,
                /* nB */
                -1223,
            },
            /* 16 */
            {
                /* nK */
                1850,
                /* nB */
                -1085,
            },
            /* 17 */
            {
                /* nK */
                1755,
                /* nB */
                -957,
            },
            /* 18 */
            {
                /* nK */
                1668,
                /* nB */
                -839,
            },
            /* 19 */
            {
                /* nK */
                1586,
                /* nB */
                -729,
            },
            /* 20 */
            {
                /* nK */
                1510,
                /* nB */
                -627,
            },
            /* 21 */
            {
                /* nK */
                1439,
                /* nB */
                -531,
            },
            /* 22 */
            {
                /* nK */
                1372,
                /* nB */
                -441,
            },
            /* 23 */
            {
                /* nK */
                1310,
                /* nB */
                -357,
            },
            /* 24 */
            {
                /* nK */
                1250,
                /* nB */
                -277,
            },
            /* 25 */
            {
                /* nK */
                1178,
                /* nB */
                -179,
            },
            /* 26 */
            {
                /* nK */
                1110,
                /* nB */
                -88,
            },
            /* 27 */
            {
                /* nK */
                1046,
                /* nB */
                -2,
            },
            /* 28 */
            {
                /* nK */
                986,
                /* nB */
                78,
            },
            /* 29 */
            {
                /* nK */
                930,
                /* nB */
                154,
            },
            /* 30 */
            {
                /* nK */
                876,
                /* nB */
                226,
            },
            /* 31 */
            {
                /* nK */
                825,
                /* nB */
                295,
            },
            /* 32 */
            {
                /* nK */
                777,
                /* nB */
                360,
            },
            /* 33 */
            {
                /* nK */
                684,
                /* nB */
                485,
            },
            /* 34 */
            {
                /* nK */
                598,
                /* nB */
                600,
            },
            /* 35 */
            {
                /* nK */
                519,
                /* nB */
                708,
            },
            /* 36 */
            {
                /* nK */
                443,
                /* nB */
                809,
            },
            /* 37 */
            {
                /* nK */
                372,
                /* nB */
                905,
            },
            /* 38 */
            {
                /* nK */
                304,
                /* nB */
                997,
            },
            /* 39 */
            {
                /* nK */
                238,
                /* nB */
                1085,
            },
            /* 40 */
            {
                /* nK */
                174,
                /* nB */
                1172,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1232213,
                /* nBg */
                209778,
            },
            /* 1 */
            {
                /* nRg */
                1203692,
                /* nBg */
                208971,
            },
            /* 2 */
            {
                /* nRg */
                1175045,
                /* nBg */
                208834,
            },
            /* 3 */
            {
                /* nRg */
                1146293,
                /* nBg */
                209359,
            },
            /* 4 */
            {
                /* nRg */
                1117436,
                /* nBg */
                210554,
            },
            /* 5 */
            {
                /* nRg */
                1088506,
                /* nBg */
                212441,
            },
            /* 6 */
            {
                /* nRg */
                1059513,
                /* nBg */
                215000,
            },
            /* 7 */
            {
                /* nRg */
                1030467,
                /* nBg */
                218240,
            },
            /* 8 */
            {
                /* nRg */
                1001390,
                /* nBg */
                222183,
            },
            /* 9 */
            {
                /* nRg */
                972303,
                /* nBg */
                226807,
            },
            /* 10 */
            {
                /* nRg */
                943215,
                /* nBg */
                232134,
            },
            /* 11 */
            {
                /* nRg */
                914138,
                /* nBg */
                238153,
            },
            /* 12 */
            {
                /* nRg */
                885103,
                /* nBg */
                244863,
            },
            /* 13 */
            {
                /* nRg */
                856120,
                /* nBg */
                252287,
            },
            /* 14 */
            {
                /* nRg */
                827201,
                /* nBg */
                260414,
            },
            /* 15 */
            {
                /* nRg */
                798365,
                /* nBg */
                269232,
            },
            /* 16 */
            {
                /* nRg */
                769634,
                /* nBg */
                278764,
            },
            /* 17 */
            {
                /* nRg */
                743566,
                /* nBg */
                293570,
            },
            /* 18 */
            {
                /* nRg */
                717845,
                /* nBg */
                308973,
            },
            /* 19 */
            {
                /* nRg */
                692480,
                /* nBg */
                324943,
            },
            /* 20 */
            {
                /* nRg */
                667471,
                /* nBg */
                341490,
            },
            /* 21 */
            {
                /* nRg */
                642850,
                /* nBg */
                358592,
            },
            /* 22 */
            {
                /* nRg */
                618618,
                /* nBg */
                376240,
            },
            /* 23 */
            {
                /* nRg */
                594794,
                /* nBg */
                394443,
            },
            /* 24 */
            {
                /* nRg */
                571390,
                /* nBg */
                413170,
            },
            /* 25 */
            {
                /* nRg */
                541495,
                /* nBg */
                438399,
            },
            /* 26 */
            {
                /* nRg */
                512355,
                /* nBg */
                464498,
            },
            /* 27 */
            {
                /* nRg */
                483991,
                /* nBg */
                491447,
            },
            /* 28 */
            {
                /* nRg */
                456445,
                /* nBg */
                519213,
            },
            /* 29 */
            {
                /* nRg */
                429717,
                /* nBg */
                547776,
            },
            /* 30 */
            {
                /* nRg */
                403849,
                /* nBg */
                577126,
            },
            /* 31 */
            {
                /* nRg */
                378861,
                /* nBg */
                607220,
            },
            /* 32 */
            {
                /* nRg */
                354765,
                /* nBg */
                638038,
            },
            /* 33 */
            {
                /* nRg */
                308543,
                /* nBg */
                702934,
            },
            /* 34 */
            {
                /* nRg */
                266307,
                /* nBg */
                770494,
            },
            /* 35 */
            {
                /* nRg */
                228191,
                /* nBg */
                840455,
            },
            /* 36 */
            {
                /* nRg */
                194343,
                /* nBg */
                912586,
            },
            /* 37 */
            {
                /* nRg */
                164889,
                /* nBg */
                986616,
            },
            /* 38 */
            {
                /* nRg */
                139922,
                /* nBg */
                1062281,
            },
            /* 39 */
            {
                /* nRg */
                119548,
                /* nBg */
                1139309,
            },
            /* 40 */
            {
                /* nRg */
                103830,
                /* nBg */
                1217418,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1258040,
                /* nBg */
                386149,
            },
            /* 1 */
            {
                /* nRg */
                1233482,
                /* nBg */
                384723,
            },
            /* 2 */
            {
                /* nRg */
                1208788,
                /* nBg */
                383863,
            },
            /* 3 */
            {
                /* nRg */
                1183958,
                /* nBg */
                383590,
            },
            /* 4 */
            {
                /* nRg */
                1159023,
                /* nBg */
                383905,
            },
            /* 5 */
            {
                /* nRg */
                1133972,
                /* nBg */
                384796,
            },
            /* 6 */
            {
                /* nRg */
                1108848,
                /* nBg */
                386295,
            },
            /* 7 */
            {
                /* nRg */
                1083651,
                /* nBg */
                388382,
            },
            /* 8 */
            {
                /* nRg */
                1058391,
                /* nBg */
                391077,
            },
            /* 9 */
            {
                /* nRg */
                1033078,
                /* nBg */
                394380,
            },
            /* 10 */
            {
                /* nRg */
                1007744,
                /* nBg */
                398291,
            },
            /* 11 */
            {
                /* nRg */
                982400,
                /* nBg */
                402821,
            },
            /* 12 */
            {
                /* nRg */
                957046,
                /* nBg */
                407959,
            },
            /* 13 */
            {
                /* nRg */
                931712,
                /* nBg */
                413726,
            },
            /* 14 */
            {
                /* nRg */
                906410,
                /* nBg */
                420101,
            },
            /* 15 */
            {
                /* nRg */
                881150,
                /* nBg */
                427106,
            },
            /* 16 */
            {
                /* nRg */
                855953,
                /* nBg */
                434729,
            },
            /* 17 */
            {
                /* nRg */
                833387,
                /* nBg */
                447543,
            },
            /* 18 */
            {
                /* nRg */
                811115,
                /* nBg */
                460881,
            },
            /* 19 */
            {
                /* nRg */
                789148,
                /* nBg */
                474711,
            },
            /* 20 */
            {
                /* nRg */
                767505,
                /* nBg */
                489024,
            },
            /* 21 */
            {
                /* nRg */
                746188,
                /* nBg */
                503830,
            },
            /* 22 */
            {
                /* nRg */
                725216,
                /* nBg */
                519119,
            },
            /* 23 */
            {
                /* nRg */
                704591,
                /* nBg */
                534868,
            },
            /* 24 */
            {
                /* nRg */
                684322,
                /* nBg */
                551090,
            },
            /* 25 */
            {
                /* nRg */
                658443,
                /* nBg */
                572931,
            },
            /* 26 */
            {
                /* nRg */
                633214,
                /* nBg */
                595518,
            },
            /* 27 */
            {
                /* nRg */
                608667,
                /* nBg */
                618849,
            },
            /* 28 */
            {
                /* nRg */
                584822,
                /* nBg */
                642882,
            },
            /* 29 */
            {
                /* nRg */
                561680,
                /* nBg */
                667618,
            },
            /* 30 */
            {
                /* nRg */
                539293,
                /* nBg */
                693025,
            },
            /* 31 */
            {
                /* nRg */
                517651,
                /* nBg */
                719071,
            },
            /* 32 */
            {
                /* nRg */
                496794,
                /* nBg */
                745747,
            },
            /* 33 */
            {
                /* nRg */
                456781,
                /* nBg */
                801930,
            },
            /* 34 */
            {
                /* nRg */
                420217,
                /* nBg */
                860420,
            },
            /* 35 */
            {
                /* nRg */
                387218,
                /* nBg */
                920996,
            },
            /* 36 */
            {
                /* nRg */
                357921,
                /* nBg */
                983438,
            },
            /* 37 */
            {
                /* nRg */
                332420,
                /* nBg */
                1047517,
            },
            /* 38 */
            {
                /* nRg */
                310808,
                /* nBg */
                1113021,
            },
            /* 39 */
            {
                /* nRg */
                293171,
                /* nBg */
                1179711,
            },
            /* 40 */
            {
                /* nRg */
                279561,
                /* nBg */
                1247323,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1223091,
                /* nBg */
                147524,
            },
            /* 1 */
            {
                /* nRg */
                1193175,
                /* nBg */
                146937,
            },
            /* 2 */
            {
                /* nRg */
                1163143,
                /* nBg */
                147052,
            },
            /* 3 */
            {
                /* nRg */
                1132997,
                /* nBg */
                147860,
            },
            /* 4 */
            {
                /* nRg */
                1102766,
                /* nBg */
                149380,
            },
            /* 5 */
            {
                /* nRg */
                1072463,
                /* nBg */
                151603,
            },
            /* 6 */
            {
                /* nRg */
                1042106,
                /* nBg */
                154539,
            },
            /* 7 */
            {
                /* nRg */
                1011698,
                /* nBg */
                158199,
            },
            /* 8 */
            {
                /* nRg */
                981278,
                /* nBg */
                162571,
            },
            /* 9 */
            {
                /* nRg */
                950849,
                /* nBg */
                167667,
            },
            /* 10 */
            {
                /* nRg */
                920440,
                /* nBg */
                173487,
            },
            /* 11 */
            {
                /* nRg */
                890052,
                /* nBg */
                180030,
            },
            /* 12 */
            {
                /* nRg */
                859706,
                /* nBg */
                187307,
            },
            /* 13 */
            {
                /* nRg */
                829434,
                /* nBg */
                195308,
            },
            /* 14 */
            {
                /* nRg */
                799246,
                /* nBg */
                204042,
            },
            /* 15 */
            {
                /* nRg */
                769151,
                /* nBg */
                213511,
            },
            /* 16 */
            {
                /* nRg */
                739173,
                /* nBg */
                223714,
            },
            /* 17 */
            {
                /* nRg */
                711868,
                /* nBg */
                239222,
            },
            /* 18 */
            {
                /* nRg */
                684930,
                /* nBg */
                255349,
            },
            /* 19 */
            {
                /* nRg */
                658348,
                /* nBg */
                272085,
            },
            /* 20 */
            {
                /* nRg */
                632165,
                /* nBg */
                289407,
            },
            /* 21 */
            {
                /* nRg */
                606371,
                /* nBg */
                307327,
            },
            /* 22 */
            {
                /* nRg */
                580995,
                /* nBg */
                325814,
            },
            /* 23 */
            {
                /* nRg */
                556039,
                /* nBg */
                344877,
            },
            /* 24 */
            {
                /* nRg */
                531523,
                /* nBg */
                364496,
            },
            /* 25 */
            {
                /* nRg */
                500213,
                /* nBg */
                390920,
            },
            /* 26 */
            {
                /* nRg */
                469689,
                /* nBg */
                418256,
            },
            /* 27 */
            {
                /* nRg */
                439993,
                /* nBg */
                446473,
            },
            /* 28 */
            {
                /* nRg */
                411126,
                /* nBg */
                475561,
            },
            /* 29 */
            {
                /* nRg */
                383139,
                /* nBg */
                505487,
            },
            /* 30 */
            {
                /* nRg */
                356044,
                /* nBg */
                536221,
            },
            /* 31 */
            {
                /* nRg */
                329872,
                /* nBg */
                567741,
            },
            /* 32 */
            {
                /* nRg */
                304632,
                /* nBg */
                600016,
            },
            /* 33 */
            {
                /* nRg */
                256230,
                /* nBg */
                667995,
            },
            /* 34 */
            {
                /* nRg */
                211980,
                /* nBg */
                738753,
            },
            /* 35 */
            {
                /* nRg */
                172061,
                /* nBg */
                812038,
            },
            /* 36 */
            {
                /* nRg */
                136608,
                /* nBg */
                887588,
            },
            /* 37 */
            {
                /* nRg */
                105759,
                /* nBg */
                965120,
            },
            /* 38 */
            {
                /* nRg */
                79618,
                /* nBg */
                1044371,
            },
            /* 39 */
            {
                /* nRg */
                58269,
                /* nBg */
                1125049,
            },
            /* 40 */
            {
                /* nRg */
                41807,
                /* nBg */
                1206859,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1267152,
                /* nBg */
                448403,
            },
            /* 1 */
            {
                /* nRg */
                1243989,
                /* nBg */
                446756,
            },
            /* 2 */
            {
                /* nRg */
                1220689,
                /* nBg */
                445645,
            },
            /* 3 */
            {
                /* nRg */
                1197254,
                /* nBg */
                445089,
            },
            /* 4 */
            {
                /* nRg */
                1173692,
                /* nBg */
                445079,
            },
            /* 5 */
            {
                /* nRg */
                1150026,
                /* nBg */
                445634,
            },
            /* 6 */
            {
                /* nRg */
                1126265,
                /* nBg */
                446746,
            },
            /* 7 */
            {
                /* nRg */
                1102420,
                /* nBg */
                448434,
            },
            /* 8 */
            {
                /* nRg */
                1078502,
                /* nBg */
                450688,
            },
            /* 9 */
            {
                /* nRg */
                1054532,
                /* nBg */
                453530,
            },
            /* 10 */
            {
                /* nRg */
                1030530,
                /* nBg */
                456938,
            },
            /* 11 */
            {
                /* nRg */
                1006486,
                /* nBg */
                460944,
            },
            /* 12 */
            {
                /* nRg */
                982442,
                /* nBg */
                465526,
            },
            /* 13 */
            {
                /* nRg */
                958398,
                /* nBg */
                470695,
            },
            /* 14 */
            {
                /* nRg */
                934365,
                /* nBg */
                476462,
            },
            /* 15 */
            {
                /* nRg */
                910363,
                /* nBg */
                482817,
            },
            /* 16 */
            {
                /* nRg */
                886414,
                /* nBg */
                489769,
            },
            /* 17 */
            {
                /* nRg */
                865086,
                /* nBg */
                501890,
            },
            /* 18 */
            {
                /* nRg */
                844030,
                /* nBg */
                514494,
            },
            /* 19 */
            {
                /* nRg */
                823279,
                /* nBg */
                527560,
            },
            /* 20 */
            {
                /* nRg */
                802811,
                /* nBg */
                541097,
            },
            /* 21 */
            {
                /* nRg */
                782668,
                /* nBg */
                555095,
            },
            /* 22 */
            {
                /* nRg */
                762839,
                /* nBg */
                569545,
            },
            /* 23 */
            {
                /* nRg */
                743346,
                /* nBg */
                584434,
            },
            /* 24 */
            {
                /* nRg */
                724189,
                /* nBg */
                599765,
            },
            /* 25 */
            {
                /* nRg */
                699725,
                /* nBg */
                620411,
            },
            /* 26 */
            {
                /* nRg */
                675881,
                /* nBg */
                641760,
            },
            /* 27 */
            {
                /* nRg */
                652676,
                /* nBg */
                663812,
            },
            /* 28 */
            {
                /* nRg */
                630131,
                /* nBg */
                686534,
            },
            /* 29 */
            {
                /* nRg */
                608258,
                /* nBg */
                709917,
            },
            /* 30 */
            {
                /* nRg */
                587087,
                /* nBg */
                733930,
            },
            /* 31 */
            {
                /* nRg */
                566640,
                /* nBg */
                758550,
            },
            /* 32 */
            {
                /* nRg */
                546927,
                /* nBg */
                783769,
            },
            /* 33 */
            {
                /* nRg */
                509105,
                /* nBg */
                836879,
            },
            /* 34 */
            {
                /* nRg */
                474533,
                /* nBg */
                892160,
            },
            /* 35 */
            {
                /* nRg */
                443348,
                /* nBg */
                949412,
            },
            /* 36 */
            {
                /* nRg */
                415656,
                /* nBg */
                1008437,
            },
            /* 37 */
            {
                /* nRg */
                391549,
                /* nBg */
                1069013,
            },
            /* 38 */
            {
                /* nRg */
                371123,
                /* nBg */
                1130931,
            },
            /* 39 */
            {
                /* nRg */
                354450,
                /* nBg */
                1193961,
            },
            /* 40 */
            {
                /* nRg */
                341584,
                /* nBg */
                1257882,
            },
        },
        /* nIllumNum */
        4,
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
                    1026556,
                    /* nBg */
                    296747,
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
                    817889,
                    /* nBg */
                    365953,
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
                    594543,
                    /* nBg */
                    441450,
                },
            },
            /* 3 */
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
                    450888,
                    /* nBg */
                    710935,
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
                    532677,
                    /* nBg */
                    421528,
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
                374,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                731,
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
        2300,
        /* nCctMaxInner */
        7800,
        /* nCctMinOuter */
        1950,
        /* nCctMaxOuter */
        10000,
        /* nCctSplitHtoA */
        2450,
        /* nCctSplitAtoF */
        3300,
        /* nCctSplitFtoD5 */
        4400,
        /* nCctSplitD5toD6 */
        5350,
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
            {300, 300, 300, 200, 0, 0, 0, 0, /*0 - 7*/},
            {800, 800, 700, 400, 0, 0, 0, 0, /*0 - 7*/},
            {800, 800, 700, 400, 0, 0, 0, 0, /*0 - 7*/},
            {300, 100, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {600, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {800, 600, 200, 200, 0, 0, 0, 0, /*0 - 7*/},
            {800, 600, 200, 200, 0, 0, 0, 1000, /*0 - 7*/},
            {600, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {10, 100, 100, 0, 0, 0, 100, 100, /*0 - 7*/},
            {700, 700, 600, 500, 400, 200, 100, 700, /*0 - 7*/},
            {700, 700, 600, 500, 400, 200, 200, 900, /*0 - 7*/},
            {100, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 100, 300, 400, 450, 450, 250, 250, /*0 - 7*/},
            {500, 500, 500, 1000, 900, 900, 500, 900, /*0 - 7*/},
            {500, 500, 500, 1000, 900, 900, 900, 900, /*0 - 7*/},
            {400, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 300, 300, 500, 500, 400, 300, 300, /*0 - 7*/},
            {400, 500, 500, 1000, 1000, 700, 500, 450, /*0 - 7*/},
            {500, 500, 500, 1000, 1000, 700, 700, 700, /*0 - 7*/},
            {200, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 200, 200, 200, 200, 200, 200, 200, /*0 - 7*/},
            {500, 500, 300, 500, 500, 500, 400, 400, /*0 - 7*/},
            {500, 500, 300, 500, 500, 500, 500, 600, /*0 - 7*/},
            {100, 200, 300, 300, 100, 0, 0, 0, /*0 - 7*/},
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
            {1800, 2300, 2500, 2950, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2950, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6600, 7500, 12000, /*0 - 9*/},
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
        {0,0,0,0,0,0,0,0},
        /* nGreenCutWeight */
        {102,102,102,102,102,102,102,102},
        /* nGreenCutBreakAngle */
        {52429,52429,52429,52429,52429,52429,52429,52429},
        /* nGreenCutOffsetRg */
        {31457,31457,31457,31457,31457,31457,31457,31457},
        /* nGreenCutOffsetBg */
        {-20971,-20971,-20971,-20971,-20971,-20971,-20971,-20971},
        /* nGreenCutCctList */
        {0,0,0,0,0,0,0,0},
        /* nGreenCutCctDiscount */
        {1024,1024,1024,1024,1024,1024,1024,1024},
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

const static AX_ISP_IQ_CAF_PARAM_T caf_param_sdr_qs = {
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

const static AX_ISP_IQ_DPC_PARAM_T dpc_param_sdr_qs = {
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
            {63963694, 64517516, 64060695, 61345146, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {22949750, 22675938, 23168840, 29908428, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {789383, 779509, 780002, 791506, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {14170345, 14311040, 14345236, 14139823, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {1190972, 419556, 150974, 1284930, /*0 - 3*/},
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
        100,
        /* nDetFineStr */
        48,
        /* nDynamicDpcStr */
        144,
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

const static AX_ISP_IQ_BLC_PARAM_T blc_param_sdr_qs = {
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
            4148,
            /* nSblGrValue */
            4149,
            /* nSblGbValue */
            4149,
            /* nSblBValue */
            4148,
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
            2,
            /* nExposeTimeGrpNum */
            2,
            /* nGain[16] */
            {1024, 2048, /*0 - 1*/},
            /* nExposeTime[10] */
            {1000, 5000, /*0 - 1*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
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
            },
        },
        /* tLcgAutoTable */
        {
            /* nGainGrpNum */
            13,
            /* nExposeTimeGrpNum */
            2,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 12288, 16384, 20480, 24576, 49251, 98304, 196608, 393216, 517536, /*0 - 12*/},
            /* nExposeTime[10] */
            {10000, 30000, /*0 - 1*/},
            /* nAutoSblRValue[16][10] */
            {
                {4149, 4149, /*0 - 1*/},
                {4143, 4143, /*0 - 1*/},
                {4144, 4145, /*0 - 1*/},
                {4141, 4143, /*0 - 1*/},
                {4140, 4145, /*0 - 1*/},
                {4139, 4141, /*0 - 1*/},
                {4142, 4140, /*0 - 1*/},
                {4144, 4141, /*0 - 1*/},
                {4144, 4141, /*0 - 1*/},
                {4144, 4141, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4150, 4150, /*0 - 1*/},
                {4143, 4144, /*0 - 1*/},
                {4145, 4146, /*0 - 1*/},
                {4143, 4144, /*0 - 1*/},
                {4142, 4147, /*0 - 1*/},
                {4142, 4144, /*0 - 1*/},
                {4145, 4143, /*0 - 1*/},
                {4147, 4143, /*0 - 1*/},
                {4147, 4143, /*0 - 1*/},
                {4147, 4143, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4150, 4150, /*0 - 1*/},
                {4143, 4144, /*0 - 1*/},
                {4145, 4146, /*0 - 1*/},
                {4143, 4145, /*0 - 1*/},
                {4142, 4147, /*0 - 1*/},
                {4142, 4144, /*0 - 1*/},
                {4146, 4144, /*0 - 1*/},
                {4148, 4144, /*0 - 1*/},
                {4148, 4144, /*0 - 1*/},
                {4148, 4144, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4149, 4149, /*0 - 1*/},
                {4143, 4143, /*0 - 1*/},
                {4144, 4145, /*0 - 1*/},
                {4141, 4142, /*0 - 1*/},
                {4139, 4145, /*0 - 1*/},
                {4139, 4141, /*0 - 1*/},
                {4142, 4140, /*0 - 1*/},
                {4144, 4140, /*0 - 1*/},
                {4144, 4140, /*0 - 1*/},
                {4144, 4140, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
                {4096, 4096, /*0 - 1*/},
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
                /* 12 */
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

const static AX_ISP_IQ_HDR_PARAM_T hdr_param_sdr_qs = {
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

const static AX_ISP_IQ_AINR_PARAM_T ainr_param_sdr_qs = {
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
            "/opt/etc/models/aiisp/SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
            /* szModelName[256] */
            "SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
            /* szTemporalBaseNrName[256] */
            "3d_mass_sc500ai_1128_ispgain1-16x_lv1",
            /* szSpatialBaseNrName[256] */
            "2d_mass_sc500ai_1129_againp16-24x_lv1",
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
            /*tBias[4][4]*/
            {
                 /* nBiasIn[4] */
                {0, 0, 0, 0, /*0 - 3*/},
            },
            /* tNonSens */
            {
                /* nTemporalFilterStrLut[17][2] */
                {
                    {0, 4096, /*0 - 1*/},
                    {16, 4096, /*0 - 1*/},
                    {32, 4096, /*0 - 1*/},
                    {48, 4096, /*0 - 1*/},
                    {64,  4096, /*0 - 1*/},
                    {80,  4096, /*0 - 1*/},
                    {96,  4096, /*0 - 1*/},
                    {112, 4096, /*0 - 1*/},
                    {128, 4096, /*0 - 1*/},
                    {144, 4096, /*0 - 1*/},
                    {160, 4096, /*0 - 1*/},
                    {176, 4096, /*0 - 1*/},
                    {192, 4096, /*0 - 1*/},
                    {208, 4096, /*0 - 1*/},
                    {224, 4096, /*0 - 1*/},
                    {240, 4096, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
                /* nVstTemporalFilterStrLut[17][2] */
                {
                    {0, 0, /*0 - 1*/},
                    {16, 400, /*0 - 1*/},
                    {32, 800, /*0 - 1*/},
                    {48, 1200, /*0 - 1*/},
                    {64,  1600, /*0 - 1*/},
                    {80,  2000, /*0 - 1*/},
                    {96,  2400, /*0 - 1*/},
                    {112, 2800, /*0 - 1*/},
                    {128, 2880, /*0 - 1*/},
                    {144, 3040, /*0 - 1*/},
                    {160, 3200, /*0 - 1*/},
                    {176, 3360, /*0 - 1*/},
                    {192, 3520, /*0 - 1*/},
                    {208, 3680, /*0 - 1*/},
                    {224, 3833, /*0 - 1*/},
                    {240, 3984, /*0 - 1*/},
                    {255, 4096, /*0 - 1*/},
                },
            },
            /* tSens */
            {
                /* nSpatialNrStrLut[17][2] */
                {
                    {0, 0, /*0 - 1*/},
                    {16, 351, /*0 - 1*/},
                    {32, 897, /*0 - 1*/},
                    {48, 1436, /*0 - 1*/},
                    {64,  2198, /*0 - 1*/},
                    {80,  2500, /*0 - 1*/},
                    {96,  2500, /*0 - 1*/},
                    {112, 2500, /*0 - 1*/},
                    {128, 2500, /*0 - 1*/},
                    {144, 2500, /*0 - 1*/},
                    {160, 2500, /*0 - 1*/},
                    {176, 2500, /*0 - 1*/},
                    {192, 2500, /*0 - 1*/},
                    {208, 2500, /*0 - 1*/},
                    {224, 2500, /*0 - 1*/},
                    {240, 2500, /*0 - 1*/},
                    {255, 2500, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_mass_sc500ai_1128_ispgain1-16x_lv1",
                    /* szSpatialBaseNrName[256] */
                    "2d_mass_sc500ai_1129_againp16-24x_lv1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    1600,
                    /* nIsoThresholdMax */
                    2400,
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
                        {6400, 8000, 9600, 11200, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 9600, 11200, 12800, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {16494, 18435, 20569, 22704, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {18435, 20569, 22704, 24644, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                           {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
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
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {16494, 18435, 20569, 22704, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {18435, 20569, 22704, 24644, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 351, /*0 - 1*/},
                                {32, 897, /*0 - 1*/},
                                {48, 1436, /*0 - 1*/},
                                {64,  2198, /*0 - 1*/},
                                {80,  2500, /*0 - 1*/},
                                {96,  2500, /*0 - 1*/},
                                {112, 2500, /*0 - 1*/},
                                {128, 2500, /*0 - 1*/},
                                {144, 2500, /*0 - 1*/},
                                {160, 2500, /*0 - 1*/},
                                {176, 2500, /*0 - 1*/},
                                {192, 2500, /*0 - 1*/},
                                {208, 2500, /*0 - 1*/},
                                {224, 2500, /*0 - 1*/},
                                {240, 2500, /*0 - 1*/},
                                {255, 2500, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 351, /*0 - 1*/},
                                {32, 897, /*0 - 1*/},
                                {48, 1436, /*0 - 1*/},
                                {64,  2198, /*0 - 1*/},
                                {80,  2500, /*0 - 1*/},
                                {96,  2500, /*0 - 1*/},
                                {112, 2500, /*0 - 1*/},
                                {128, 2500, /*0 - 1*/},
                                {144, 2500, /*0 - 1*/},
                                {160, 2500, /*0 - 1*/},
                                {176, 2500, /*0 - 1*/},
                                {192, 2500, /*0 - 1*/},
                                {208, 2500, /*0 - 1*/},
                                {224, 2500, /*0 - 1*/},
                                {240, 2500, /*0 - 1*/},
                                {255, 2500, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 351, /*0 - 1*/},
                                {32, 897, /*0 - 1*/},
                                {48, 1436, /*0 - 1*/},
                                {64,  2198, /*0 - 1*/},
                                {80,  2500, /*0 - 1*/},
                                {96,  2500, /*0 - 1*/},
                                {112, 2500, /*0 - 1*/},
                                {128, 2500, /*0 - 1*/},
                                {144, 2500, /*0 - 1*/},
                                {160, 2500, /*0 - 1*/},
                                {176, 2500, /*0 - 1*/},
                                {192, 2500, /*0 - 1*/},
                                {208, 2500, /*0 - 1*/},
                                {224, 2500, /*0 - 1*/},
                                {240, 2500, /*0 - 1*/},
                                {255, 2500, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 351, /*0 - 1*/},
                                {32, 897, /*0 - 1*/},
                                {48, 1436, /*0 - 1*/},
                                {64,  2198, /*0 - 1*/},
                                {80,  2500, /*0 - 1*/},
                                {96,  2500, /*0 - 1*/},
                                {112, 2500, /*0 - 1*/},
                                {128, 2500, /*0 - 1*/},
                                {144, 2500, /*0 - 1*/},
                                {160, 2500, /*0 - 1*/},
                                {176, 2500, /*0 - 1*/},
                                {192, 2500, /*0 - 1*/},
                                {208, 2500, /*0 - 1*/},
                                {224, 2500, /*0 - 1*/},
                                {240, 2500, /*0 - 1*/},
                                {255, 2500, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_mass_sc500ai_1128_ispgain1-16x_lv1",
                    /* szSpatialBaseNrName[256] */
                    "2d_mass_sc500ai_1129_ispgainp1-12x_lv1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    2400,
                    /* nIsoThresholdMax */
                    28800,
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
                        {6400, 8000, 9600, 11200, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 9600, 11200, 12800, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {24644, 49289, 98578, 147867, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {49289, 98578, 147867, 197156, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                           {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
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
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {24644, 49289, 98578, 147867, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {49289, 98578, 147867, 197156, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 791, /*0 - 1*/},
                                {32, 1465, /*0 - 1*/},
                                {48, 1800, /*0 - 1*/},
                                {64,  1800, /*0 - 1*/},
                                {80,  1800, /*0 - 1*/},
                                {96,  1800, /*0 - 1*/},
                                {112, 1800, /*0 - 1*/},
                                {128, 1800, /*0 - 1*/},
                                {144, 1800, /*0 - 1*/},
                                {160, 1800, /*0 - 1*/},
                                {176, 1800, /*0 - 1*/},
                                {192, 1800, /*0 - 1*/},
                                {208, 1800, /*0 - 1*/},
                                {224, 1800, /*0 - 1*/},
                                {240, 1800, /*0 - 1*/},
                                {255, 1800, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 615, /*0 - 1*/},
                                {16, 1875, /*0 - 1*/},
                                {32, 2930, /*0 - 1*/},
                                {48, 2987, /*0 - 1*/},
                                {64,  2903, /*0 - 1*/},
                                {80,  3015, /*0 - 1*/},
                                {96,  3015, /*0 - 1*/},
                                {112, 3015, /*0 - 1*/},
                                {128, 3015, /*0 - 1*/},
                                {144, 3015, /*0 - 1*/},
                                {160, 3015, /*0 - 1*/},
                                {176, 3015, /*0 - 1*/},
                                {192, 3015, /*0 - 1*/},
                                {208, 3015, /*0 - 1*/},
                                {224, 3015, /*0 - 1*/},
                                {240, 3015, /*0 - 1*/},
                                {255, 3015, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2200, /*0 - 1*/},
                                {16, 2930, /*0 - 1*/},
                                {32, 3487, /*0 - 1*/},
                                {48, 3956, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2200, /*0 - 1*/},
                                {16, 2930, /*0 - 1*/},
                                {32, 3487, /*0 - 1*/},
                                {48, 3956, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
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
            /* 2 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_mass_sc500ai_1128_ispgain16-32x_lv0",
                    /* szSpatialBaseNrName[256] */
                    "2d_mass_sc500ai_1129_ispgainp1-12x_lv1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    28800,
                    /* nIsoThresholdMax */
                    38400,
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
                        {6400, 8000, 9600, 11200, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 9600, 11200, 12800, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {197156, 320379, 345024, 369669, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {320379, 345024, 369669, 394313, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
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
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {197156, 320379, 345024, 369669, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {320379, 345024, 369669, 394313, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2491, /*0 - 1*/},
                                {16, 3370, /*0 - 1*/},
                                {32, 3780, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2491, /*0 - 1*/},
                                {16, 3370, /*0 - 1*/},
                                {32, 3780, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2491, /*0 - 1*/},
                                {16, 3370, /*0 - 1*/},
                                {32, 3780, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2491, /*0 - 1*/},
                                {16, 3370, /*0 - 1*/},
                                {32, 3780, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
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
            /* 3 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_mass_sc500ai_1128_ispgain16-32x_lv0",
                    /* szSpatialBaseNrName[256] */
                    "2d_mass_sc500ai_1129_ispgainp24-40x_lv1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    38400,
                    /* nIsoThresholdMax */
                    50400,
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
                        {6400, 8000, 9600, 11200, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 9600, 11200, 12800, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {394313, 443602, 468247, 492892, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {443602, 468247, 492892, 517536, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
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
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {394313, 443602, 468247, 492892, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {443602, 468247, 492892, 517536, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC500AI_SDR_2880x1620_10b_LCG_ISP1_A24-24X_I1-48X_0000_MULTI4_00000695332_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_mass_sc500ai_1128_ispgain16-32x_lv0",
                    /* szSpatialBaseNrName[256] */
                    "2d_mass_sc500ai_1129_ispgainp40-42x_lv1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    50400,
                    /* nIsoThresholdMax */
                    100800,
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
                        {6400, 8000, 9600, 11200, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {8000, 9600, 11200, 12800, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {0, 0, 0, 0, /*0 - 3*/},
                            /*  nBiasIn 3 */
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {517536, 640759, 788627, 936495, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {640759, 788627, 936495, 1035073, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 4096, /*0 - 1*/},
                                {16, 4096, /*0 - 1*/},
                                {32, 4096, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
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
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 400, /*0 - 1*/},
                                {32, 800, /*0 - 1*/},
                                {48, 1200, /*0 - 1*/},
                                {64,  1600, /*0 - 1*/},
                                {80,  2000, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2800, /*0 - 1*/},
                                {128, 2880, /*0 - 1*/},
                                {144, 3040, /*0 - 1*/},
                                {160, 3200, /*0 - 1*/},
                                {176, 3360, /*0 - 1*/},
                                {192, 3520, /*0 - 1*/},
                                {208, 3680, /*0 - 1*/},
                                {224, 3833, /*0 - 1*/},
                                {240, 3984, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                        },
                    },
                    /* tSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {517536, 640759, 788627, 936495, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {640759, 788627, 936495, 1035073, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2344, /*0 - 1*/},
                                {16, 3136, /*0 - 1*/},
                                {32, 3751, /*0 - 1*/},
                                {48, 4096, /*0 - 1*/},
                                {64,  4096, /*0 - 1*/},
                                {80,  4096, /*0 - 1*/},
                                {96,  4096, /*0 - 1*/},
                                {112, 4096, /*0 - 1*/},
                                {128, 4096, /*0 - 1*/},
                                {144, 4096, /*0 - 1*/},
                                {160, 4096, /*0 - 1*/},
                                {176, 4096, /*0 - 1*/},
                                {192, 4096, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
        },
    },
};

const static AX_ISP_IQ_RAW2DNR_PARAM_T raw2dnr_param_sdr_qs = {
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
        255,
        /* tHrParam */
        {
            /* nHighFreqNrFactor[2][17] */
            {
                {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
            },
            /* nLowFreqNrFactor[2][17] */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
            },
            /* nHfNrStrength[2] */
            {20, 128, /*0 - 1*/},
            /* nMfNrStrength[2] */
            {30, 255, /*0 - 1*/},
        },
    },
    /* tAuto */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
        /* nEdgePreserveRatio[12] */
        {128, 128, 128, 132, 148, 196, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
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
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 1 */
                        {
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 2 */
                        {
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 3 */
                        {
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 4 */
                        {
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 5 */
                        {
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                            {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 6 */
                        {
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 7 */
                        {
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 8 */
                        {
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 9 */
                        {
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                            {1024, 1024, 896, 896, 768, 640, 512, 512, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 10 */
                        {
                            {2048, 2048, 1792, 1792, 1536, 1280, 1024, 1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {2048, 2048, 1792, 1792, 1536, 1280, 1024, 1024, 512, 512, 512, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 11 */
                        {
                            {2048, 2048, 1792, 1792, 1536, 1280, 1024, 1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {2048, 2048, 1792, 1792, 1536, 1280, 1024, 1024, 512, 512, 512, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                        },
                    },
                    /* nLowFreqNrFactor[12][2][17] */
                    {
                        /* nLowFreqNrFactor 0 */
                        {
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 1 */
                        {
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 2 */
                        {
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 3 */
                        {
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 4 */
                        {
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 5 */
                        {
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                            {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 6 */
                        {
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 7 */
                        {
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 8 */
                        {
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 9 */
                        {
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                            {64, 64, 64, 48, 48, 40, 40, 32, 32, 24, 24, 24, 16, 8, 8, 8, 4, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 10 */
                        {
                            {128, 128, 128, 96, 96, 80, 80, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 16*/},
                            {128, 128, 128, 96, 96, 80, 80, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 11 */
                        {
                            {128, 128, 128, 96, 96, 80, 80, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 16*/},
                            {128, 128, 128, 96, 96, 80, 80, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 16*/},
                        },
                    },
                    /* nHfNrStrength[12][2] */
                    {
                        {20, 128, /*0 - 1*/},
                        {20, 128, /*0 - 1*/},
                        {20, 128, /*0 - 1*/},
                        {20, 128, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                        {0, 0, /*0 - 1*/},
                    },
                    /* nMfNrStrength[12][2] */
                    {
                        {30, 255, /*0 - 1*/},
                        {30, 255, /*0 - 1*/},
                        {30, 255, /*0 - 1*/},
                        {60, 255, /*0 - 1*/},
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
            },
        },
    },
};

const static AX_ISP_IQ_LSC_PARAM_T lsc_param_sdr_qs = {
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

const static AX_ISP_IQ_RLTM_PARAM_T rltm_param_sdr_qs = {
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
        512,
        /* nReset */
        0,
        /* nStopUpdating */
        0,
    },
    /* tLumaWt */
    {
        /* nLumaWeight[5] */
        {0, 0, 0, 0, 128, /*0 - 4*/},
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
        65535,
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
            0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
            2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
            3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
            4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
            6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
            7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
            8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
            8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
            9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
            10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
            11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
            12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
            13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
            14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
            15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
            15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
            16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
            17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
            18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
            19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
            20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
            21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
            22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
            22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
            23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
            24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
            25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
            26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
            27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
            28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
            29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
            30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
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
            2560,
            /* nDetailGainLimitNeg */
            2560,
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
            128,
            /* nRltmStrength */
            42,
            /* nContrastStrength */
            55,
            /* nPostGamma */
            32,
            /* nHighlightSup */
            16,
            /* nDetailCoringPos */
            0,
            /* nDetailCoringNeg */
            0,
            /* nDetailGainPos */
            7,
            /* nDetailGainNeg */
            7,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
        /* nKMax[12] */
        {65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, /*0 - 11*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nLog10Offset[12] */
        {96, 96, 96, 96, 96, 96, 96, 76, 64, 64, 64, 64, /*0 - 11*/},
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
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 194, 316, 421, 517, 605, 689, 768, 844, 918, 989, 1058, 1125, 1191, 1255, 1318, 1379, 1440, 1499, 1558, 1615, 1672, 1728, 1784, 1838, 1892, 1945, 1998, 2050, 2102, 2153, 2204,  /* 0 - 31*/
                2254, 2303, 2353, 2401, 2450, 2498, 2545, 2593, 2640, 2686, 2732, 2778, 2824, 2869, 2914, 2959, 3003, 3048, 3092, 3135, 3179, 3222, 3265, 3307, 3350, 3392, 3434, 3476, 3518, 3559, 3600, 3641,  /* 32 - 63*/
                3682, 3723, 3763, 3804, 3844, 3884, 3924, 3963, 4003, 4042, 4081, 4120, 4159, 4198, 4236, 4275, 4313, 4351, 4389, 4427, 4464, 4502, 4539, 4577, 4614, 4651, 4688, 4725, 4762, 4798, 4835, 4871,  /* 64 - 95*/
                4907, 4943, 4980, 5015, 5051, 5087, 5123, 5158, 5194, 5229, 5264, 5299, 5334, 5369, 5404, 5439, 5473, 5508, 5543, 5577, 5611, 5645, 5680, 5714, 5748, 5782, 5815, 5849, 5883, 5916, 5950, 5983,  /* 96 - 127*/
                6016, 6050, 6083, 6116, 6149, 6182, 6215, 6248, 6280, 6313, 6346, 6378, 6411, 6443, 6475, 6508, 6540, 6572, 6604, 6636, 6668, 6700, 6732, 6764, 6795, 6827, 6858, 6890, 6921, 6953, 6984, 7015,  /* 128 - 159*/
                7047, 7078, 7109, 7140, 7171, 7202, 7233, 7264, 7294, 7325, 7356, 7387, 7417, 7448, 7478, 7508, 7539, 7569, 7599, 7630, 7660, 7690, 7720, 7750, 7780, 7810, 7840, 7870, 7899, 7929, 7959, 7989,  /* 160 - 191*/
                8018, 8048, 8077, 8107, 8136, 8165, 8195, 8224, 8253, 8283, 8312, 8341, 8370, 8399, 8428, 8457, 8486, 8515, 8544, 8572, 8601, 8630, 8659, 8687, 8716, 8744, 8773, 8801, 8830, 8858, 8887, 8915,  /* 192 - 223*/
                8943, 8971, 9000, 9028, 9056, 9084, 9112, 9140, 9168, 9196, 9224, 9252, 9280, 9308, 9336, 9363, 9391, 9419, 9446, 9474, 9502, 9529, 9557, 9584, 9612, 9639, 9667, 9694, 9721, 9749, 9776, 9803,  /* 224 - 255*/
                9830, 9858, 9885, 9912, 9939, 9966, 9994, 10021, 10048, 10075, 10102, 10130, 10157, 10184, 10211, 10238, 10266, 10293, 10320, 10347, 10374, 10402, 10429, 10456, 10483, 10510, 10538, 10565, 10592, 10619, 10646, 10674,  /* 256 - 287*/
                10701, 10728, 10755, 10782, 10810, 10837, 10864, 10891, 10918, 10946, 10973, 11000, 11027, 11054, 11082, 11109, 11136, 11163, 11190, 11218, 11245, 11272, 11299, 11326, 11354, 11381, 11408, 11435, 11462, 11490, 11517, 11544,  /* 288 - 319*/
                11571, 11598, 11626, 11653, 11680, 11707, 11734, 11762, 11789, 11816, 11843, 11870, 11898, 11925, 11952, 11979, 12006, 12034, 12061, 12088, 12115, 12142, 12170, 12197, 12224, 12251, 12278, 12306, 12333, 12360, 12387, 12414,  /* 320 - 351*/
                12442, 12469, 12496, 12523, 12550, 12578, 12605, 12632, 12659, 12686, 12714, 12741, 12768, 12795, 12822, 12850, 12877, 12904, 12931, 12958, 12986, 13013, 13040, 13067, 13094, 13122, 13149, 13176, 13203, 13230, 13258, 13285,  /* 352 - 383*/
                13312, 13339, 13366, 13394, 13421, 13448, 13475, 13502, 13530, 13557, 13584, 13611, 13638, 13666, 13693, 13720, 13747, 13774, 13802, 13829, 13856, 13883, 13910, 13938, 13965, 13992, 14019, 14046, 14074, 14101, 14128, 14155,  /* 384 - 415*/
                14182, 14210, 14237, 14264, 14291, 14318, 14346, 14373, 14400, 14427, 14454, 14482, 14509, 14536, 14563, 14590, 14618, 14645, 14672, 14699, 14726, 14754, 14781, 14808, 14835, 14862, 14890, 14917, 14944, 14971, 14998, 15026,  /* 416 - 447*/
                15053, 15080, 15107, 15134, 15162, 15189, 15216, 15243, 15270, 15298, 15325, 15352, 15379, 15406, 15434, 15461, 15488, 15515, 15542, 15570, 15597, 15624, 15651, 15678, 15706, 15733, 15760, 15787, 15814, 15842, 15869, 15896,  /* 448 - 479*/
                15923, 15950, 15978, 16005, 16032, 16059, 16086, 16114, 16141, 16168, 16195, 16222, 16250, 16277, 16304, 16331, 16358, 16386, 16413, 16440, 16467, 16494, 16522, 16549, 16576, 16603, 16630, 16658, 16685, 16712, 16739, 16766,  /* 480 - 511*/
                16794, 16821, 16848, 16875, 16902, 16930, 16957, 16984, 17011, 17038, 17066, 17093, 17120, 17147, 17174, 17202, 17229, 17256, 17283, 17310, 17338, 17365, 17392, 17419, 17446, 17474, 17501, 17528, 17555, 17582, 17610, 17637,  /* 512 - 543*/
                17664, 17691, 17718, 17746, 17773, 17800, 17827, 17854, 17882, 17909, 17936, 17963, 17990, 18018, 18045, 18072, 18099, 18126, 18154, 18181, 18208, 18235, 18262, 18290, 18317, 18344, 18371, 18398, 18426, 18453, 18480, 18507,  /* 544 - 575*/
                18534, 18562, 18589, 18616, 18643, 18670, 18698, 18725, 18752, 18779, 18806, 18834, 18861, 18888, 18915, 18942, 18970, 18997, 19024, 19051, 19078, 19106, 19133, 19160, 19187, 19214, 19242, 19269, 19296, 19323, 19350, 19378,  /* 576 - 607*/
                19405, 19432, 19459, 19486, 19514, 19541, 19568, 19595, 19622, 19650, 19677, 19704, 19731, 19758, 19786, 19813, 19840, 19867, 19894, 19922, 19949, 19976, 20003, 20030, 20058, 20085, 20112, 20139, 20166, 20194, 20221, 20248,  /* 608 - 639*/
                20275, 20302, 20330, 20357, 20384, 20411, 20438, 20466, 20493, 20520, 20547, 20574, 20602, 20629, 20656, 20683, 20710, 20738, 20765, 20792, 20819, 20846, 20874, 20901, 20928, 20955, 20982, 21010, 21037, 21064, 21091, 21118,  /* 640 - 671*/
                21146, 21173, 21200, 21227, 21254, 21282, 21309, 21336, 21363, 21390, 21418, 21445, 21472, 21499, 21526, 21554, 21581, 21608, 21635, 21662, 21690, 21717, 21744, 21771, 21798, 21826, 21853, 21880, 21907, 21934, 21962, 21989,  /* 672 - 703*/
                22016, 22043, 22070, 22098, 22125, 22152, 22179, 22206, 22234, 22261, 22288, 22315, 22342, 22370, 22397, 22424, 22451, 22478, 22506, 22533, 22560, 22587, 22614, 22642, 22669, 22696, 22723, 22750, 22778, 22805, 22832, 22859,  /* 704 - 735*/
                22886, 22914, 22941, 22968, 22995, 23022, 23050, 23077, 23104, 23131, 23158, 23186, 23213, 23240, 23267, 23294, 23322, 23349, 23376, 23403, 23430, 23458, 23485, 23512, 23539, 23566, 23594, 23621, 23648, 23675, 23702, 23730,  /* 736 - 767*/
                23757, 23784, 23811, 23839, 23866, 23893, 23920, 23948, 23975, 24003, 24030, 24057, 24085, 24112, 24140, 24168, 24195, 24223, 24250, 24278, 24306, 24334, 24361, 24389, 24417, 24445, 24473, 24500, 24528, 24556, 24584, 24612,  /* 768 - 799*/
                24640, 24668, 24696, 24724, 24753, 24781, 24809, 24837, 24865, 24894, 24922, 24950, 24979, 25007, 25036, 25064, 25093, 25121, 25150, 25178, 25207, 25236, 25264, 25293, 25322, 25351, 25379, 25408, 25437, 25466, 25495, 25524,  /* 800 - 831*/
                25553, 25582, 25611, 25640, 25669, 25699, 25728, 25757, 25786, 25816, 25845, 25875, 25904, 25933, 25963, 25993, 26022, 26052, 26081, 26111, 26141, 26171, 26201, 26230, 26260, 26290, 26320, 26350, 26380, 26410, 26441, 26471,  /* 832 - 863*/
                26501, 26531, 26562, 26592, 26623, 26653, 26683, 26714, 26745, 26775, 26806, 26837, 26867, 26898, 26929, 26960, 26991, 27022, 27053, 27084, 27115, 27147, 27178, 27209, 27241, 27272, 27304, 27335, 27367, 27398, 27430, 27462,  /* 864 - 895*/
                27494, 27526, 27557, 27589, 27621, 27654, 27686, 27718, 27750, 27783, 27815, 27847, 27880, 27913, 27945, 27978, 28011, 28044, 28077, 28110, 28143, 28176, 28209, 28242, 28276, 28309, 28342, 28376, 28410, 28443, 28477, 28511,  /* 896 - 927*/
                28545, 28579, 28613, 28647, 28682, 28716, 28750, 28785, 28820, 28854, 28889, 28924, 28959, 28994, 29029, 29065, 29100, 29135, 29171, 29207, 29242, 29278, 29314, 29350, 29387, 29423, 29460, 29496, 29533, 29570, 29607, 29644,  /* 928 - 959*/
                29681, 29718, 29756, 29793, 29831, 29869, 29907, 29945, 29984, 30022, 30061, 30100, 30139, 30178, 30217, 30257, 30296, 30336, 30376, 30416, 30457, 30498, 30539, 30580, 30621, 30663, 30704, 30747, 30789, 30832, 30874, 30918,  /* 960 - 991*/
                30961, 31005, 31049, 31093, 31138, 31183, 31229, 31275, 31321, 31368, 31415, 31463, 31511, 31560, 31610, 31660, 31710, 31762, 31814, 31867, 31921, 31976, 32032, 32090, 32149, 32210, 32272, 32337, 32406, 32478, 32556, 32644,  /* 992 - 1023*/
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
                2560,
                /* nDetailGainLimitNeg */
                2560,
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
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                2560,
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
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                2560,
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
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                2560,
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
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                2560,
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
                9000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                0,
                /* nDetailExtraStrNeg */
                0,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                2560,
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
                16,
                /* nDetailGainNegLow */
                16,
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
                0,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                16,
                /* nDetailGainNegLow */
                16,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
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
                16,
                /* nDetailGainNegLow */
                16,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
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
                16,
                /* nDetailGainNegLow */
                16,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
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
                16,
                /* nDetailGainNegLow */
                16,
                /* nDetailLimitPosLow */
                65535,
                /* nDetailLimitNegLow */
                65535,
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
                16,
                /* nDetailGainNegLow */
                16,
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
            1,
            /* nHrRefVal[4] */
            {1024, /*0 - 0*/},
            /* tHrParam */
            {
                /* 0 */
                {
                    /* nLocalFactor[12] */
                    {128, 128, 128, 110, 96, 96, 96, 75, 64, 64, 64, 64, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {42, 42, 42, 45, 45, 45, 45, 45, 40, 40, 40, 40, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {55, 55, 50, 48, 46, 46, 42, 32, 25, 20, 20, 20, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {16, 16, 20, 20, 20, 20, 20, 20, 12, 12, 12, 12, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {8, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {8, 0, 0, 0, 0, 0, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEMOSAIC_PARAM_T demosaic_param_sdr_qs = {
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
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 2097152, 2097152, 2097152, 2097152, /*0 - 15*/},
        /* nEdgeDirectEstStrength[16] */
        {64, 64, 64, 64, 64, 64, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_GIC_PARAM_T gic_param_sdr_qs = {
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
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 2097152, 2097152, 2097152, 2097152, /*0 - 15*/},
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

const static AX_ISP_IQ_FCC_PARAM_T fcc_param_sdr_qs = {
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
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 2097152, 2097152, 2097152, 2097152, /*0 - 15*/},
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

const static AX_ISP_IQ_DEPURPLE_PARAM_T depurple_param_sdr_qs = {
    /* nEnable */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    0,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        0,
        /* nDetEdgeSlopeY */
        2,
        /* nDetEdgeOffsetY */
        -32,
        /* nDetEdgeEnableC */
        1,
        /* nDetEdgeSlopeC */
        2,
        /* nDetEdgeOffsetC */
        -16,
        /* nDetSeledgeThrY */
        14080,
        /* nDetSeledgeSlopeY */
        1,
        /* nDetSeledgeWeight[7] */
        {64, 64, 48, 40, 32, 24, 16, /*0 - 6*/},
        /* nDetMaskStrength */
        64,
        /* nDetMaskStrengthPre */
        64,
        /* nDetMaskWeightPre[11] */
        {64, 64, 64, 48, 48, 48, 32, 32, 32, 32, 16, /*0 - 10*/},
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
        {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {128, 128, 128, 128, 128, 128, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[16] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1026432, 2052684, /*0 - 11*/},
        /* nCompStrength[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nCompTargetLuma[16][8] */
        {
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 128, 128, 128, 128, 128, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
        },
    },
};

const static AX_ISP_IQ_CC_PARAM_T cc_param_sdr_qs = {
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
        0,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-166, -32, -72, -47, -4, -158, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {0, 0, 0, 0, 0, -8, -8, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
        /* nXcmHue[16] */
        {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
    },
    /* tAutoParam */
    {
        /* nLightSourceRatio */
        0,
        /* tColorTempAuto */
        {
            /* nCtNum */
            5,
            /* nRefValCt[12] */
            {2300, 2854, 3800, 4150, 6500, /*0 - 4*/},
            /* nLuxGainNum */
            5,
            /* nRefValLuxGain[12][5] */
            {
                {1024, 4096, 32768, 131072, 262144, /*0 - 4*/},
                {1024, 4096, 32768, 131072, 262144, /*0 - 4*/},
                {1024, 4096, 32768, 131072, 262144, /*0 - 4*/},
                {1024, 4096, 32768, 131072, 262144, /*0 - 4*/},
                {1024, 4096, 32768, 131072, 262144, /*0 - 4*/},
            },
            /* nCcmCtrlLevel[12][5] */
            {
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
                {0, 0, 0, 0, 0, /*0 - 4*/},
                {0, 0, 0, 0, 0, /*0 - 4*/},
            },
            /* nCcmHue[12][5] */
            {
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
                    {15, -89, -115, 28, -42, -354, /*0 - 5*/},
                    {15, -89, -115, 28, -42, -354, /*0 - 5*/},
                    {15, -89, -115, 28, -42, -354, /*0 - 5*/},
                    {15, -89, -115, 28, -42, -354, /*0 - 5*/},
                    {15, -89, -115, 28, -42, -354, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {-26, -69, -87, -11, -4, -274, /*0 - 5*/},
                    {-26, -69, -87, -11, -4, -274, /*0 - 5*/},
                    {-26, -69, -87, -11, -4, -274, /*0 - 5*/},
                    {-26, -69, -87, -11, -4, -274, /*0 - 5*/},
                    {-26, -69, -87, -11, -4, -274, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-135, -26, -69, -10, -1, -182, /*0 - 5*/},
                    {-135, -26, -69, -10, -1, -182, /*0 - 5*/},
                    {-135, -26, -69, -10, -1, -182, /*0 - 5*/},
                    {-135, -26, -69, -10, -1, -182, /*0 - 5*/},
                    {-135, -26, -69, -10, -1, -182, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-202, -15, -87, 0, 0, -179, /*0 - 5*/},
                    {-202, -15, -87, 0, 0, -179, /*0 - 5*/},
                    {-202, -15, -87, 0, 0, -179, /*0 - 5*/},
                    {-202, -15, -87, 0, 0, -179, /*0 - 5*/},
                    {-202, -15, -87, 0, 0, -179, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-146, -41, -64, -73, -6, -147, /*0 - 5*/},
                    {-146, -41, -64, -73, -6, -147, /*0 - 5*/},
                    {-146, -41, -64, -73, -6, -147, /*0 - 5*/},
                    {-146, -41, -64, -73, -6, -147, /*0 - 5*/},
                    {-146, -41, -64, -73, -6, -147, /*0 - 5*/},
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
            },
            /* nXcmSat[12][5][16] */
            {
                /* nXcmSat 0 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, 0, /*0 - 15*/},
                    {-16, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, -16, /*0 - 15*/},
                    {-16, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, -16, /*0 - 15*/},
                    {-16, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, -16, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, 0, /*0 - 15*/},
                    {-16, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, -16, /*0 - 15*/},
                    {-16, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, -16, /*0 - 15*/},
                    {-16, 0, 0, 0, 0, 0, 0, 0, 0, 26, 26, 26, 0, 0, 0, -16, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, -10, -10, -10, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, -10, -10, -10, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {0, 0, 0, 0, 0, -12, -12, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -12, -12, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -12, -12, 0, 0, 16, 16, 16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 0, 0, 0, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 0, 0, 0, 0, 640, 640, 640, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, 640, 640, 0, 640, 640, 640, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 0, 0, 0, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 0, 0, 0, 0, 640, 640, 640, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 640, -640, -640, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 0, 0, 0, 0, 640, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 0, 640, 640, 0, 0, 0, 0, 0, 0, 640, 640, 640, /*0 - 15*/},
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

const static AX_ISP_IQ_HS2DLUT_PARAM_T hs2dlut_param_sdr_qs = {
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

const static AX_ISP_IQ_GAMMA_PARAM_T gamma_param_sdr_qs = {
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
                0, 61, 122, 182, 243, 303, 362, 422, 482, 541, 600, 658, 717, 775, 834, 892, 950, 1007, 1065, 1122, 1180, 1237, 1294, 1351, 1408, 1464, 1521, 1578, 1634, 1691, 1747, 1803,  /* 0 - 31*/
                1860, 1916, 1972, 2028, 2084, 2139, 2194, 2248, 2302, 2355, 2407, 2458, 2509, 2558, 2606, 2653, 2698, 2743, 2786, 2827, 2867, 2906, 2944, 2981, 3017, 3051, 3085, 3117, 3149, 3180, 3210, 3240,  /* 32 - 63*/
                3268, 3296, 3323, 3350, 3376, 3401, 3425, 3449, 3472, 3494, 3515, 3535, 3555, 3574, 3592, 3609, 3625, 3640, 3655, 3668, 3681, 3694, 3705, 3717, 3727, 3737, 3747, 3757, 3766, 3775, 3784, 3793,  /* 64 - 95*/
                3802, 3810, 3819, 3828, 3837, 3845, 3854, 3863, 3872, 3881, 3890, 3899, 3908, 3917, 3926, 3935, 3944, 3953, 3963, 3972, 3981, 3990, 4000, 4009, 4018, 4028, 4037, 4047, 4056, 4066, 4075, 4085,  /* 96 - 127*/
                4095, /*128 - 128*/
            },
        },
    },
    /* tAutoParam */
    {
        /* 0:AX_ISP_GAM_LUT_LINEAR, 1:AX_ISP_GAM_EXPONENTIAL */
        AX_ISP_GAM_LUT_LINEAR,
        /* nRefValStart[3] */
        {0, 300, 2000, /*0 - 2*/},
        /* nRefValEnd[3] */
        {300, 2000, 10000, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 61, 122, 182, 243, 303, 362, 422, 482, 541, 600, 658, 717, 775, 834, 892, 950, 1007, 1065, 1122, 1180, 1237, 1294, 1351, 1408, 1464, 1521, 1578, 1634, 1691, 1747, 1803,  /* 0 - 31*/
                    1860, 1916, 1972, 2028, 2084, 2139, 2194, 2248, 2302, 2355, 2407, 2458, 2509, 2558, 2606, 2653, 2698, 2743, 2786, 2827, 2867, 2906, 2944, 2981, 3017, 3051, 3085, 3117, 3149, 3180, 3210, 3240,  /* 32 - 63*/
                    3268, 3296, 3323, 3350, 3376, 3401, 3425, 3449, 3472, 3494, 3515, 3535, 3555, 3574, 3592, 3609, 3625, 3640, 3655, 3668, 3681, 3694, 3705, 3717, 3727, 3737, 3747, 3757, 3766, 3775, 3784, 3793,  /* 64 - 95*/
                    3802, 3810, 3819, 3828, 3837, 3845, 3854, 3863, 3872, 3881, 3890, 3899, 3908, 3917, 3926, 3935, 3944, 3953, 3963, 3972, 3981, 3990, 4000, 4009, 4018, 4028, 4037, 4047, 4056, 4066, 4075, 4085,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 61, 122, 182, 243, 303, 362, 422, 482, 541, 600, 658, 717, 775, 834, 892, 950, 1007, 1065, 1122, 1180, 1237, 1294, 1351, 1408, 1464, 1521, 1578, 1634, 1691, 1747, 1803,  /* 0 - 31*/
                    1860, 1916, 1972, 2028, 2084, 2139, 2194, 2248, 2302, 2355, 2407, 2458, 2509, 2558, 2606, 2653, 2698, 2743, 2786, 2827, 2867, 2906, 2944, 2981, 3017, 3051, 3085, 3117, 3149, 3180, 3210, 3240,  /* 32 - 63*/
                    3268, 3296, 3323, 3350, 3376, 3401, 3425, 3449, 3472, 3494, 3515, 3535, 3555, 3574, 3592, 3609, 3625, 3640, 3655, 3668, 3681, 3694, 3705, 3717, 3727, 3737, 3747, 3757, 3766, 3775, 3784, 3793,  /* 64 - 95*/
                    3802, 3810, 3819, 3828, 3837, 3845, 3854, 3863, 3872, 3881, 3890, 3899, 3908, 3917, 3926, 3935, 3944, 3953, 3963, 3972, 3981, 3990, 4000, 4009, 4018, 4028, 4037, 4047, 4056, 4066, 4075, 4085,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 61, 122, 182, 243, 303, 362, 422, 482, 541, 600, 658, 717, 775, 834, 892, 950, 1007, 1065, 1122, 1180, 1237, 1294, 1351, 1408, 1464, 1521, 1578, 1634, 1691, 1747, 1803,  /* 0 - 31*/
                    1860, 1916, 1972, 2028, 2084, 2139, 2194, 2248, 2302, 2355, 2407, 2458, 2509, 2558, 2606, 2653, 2698, 2743, 2786, 2827, 2867, 2906, 2944, 2981, 3017, 3051, 3085, 3117, 3149, 3180, 3210, 3240,  /* 32 - 63*/
                    3268, 3296, 3323, 3350, 3376, 3401, 3425, 3449, 3472, 3494, 3515, 3535, 3555, 3574, 3592, 3609, 3625, 3640, 3655, 3668, 3681, 3694, 3705, 3717, 3727, 3737, 3747, 3757, 3766, 3775, 3784, 3793,  /* 64 - 95*/
                    3802, 3810, 3819, 3828, 3837, 3845, 3854, 3863, 3872, 3881, 3890, 3899, 3908, 3917, 3926, 3935, 3944, 3953, 3963, 3972, 3981, 3990, 4000, 4009, 4018, 4028, 4037, 4047, 4056, 4066, 4075, 4085,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
        },
    },
};

const static AX_ISP_IQ_DEHAZE_PARAM_T dehaze_param_sdr_qs = {
    /* nDehazeEn */
    0,
    /* nAutoMode */
    0,
    /* nRefMode */
    1,
    /* tGlbParam */
    {
        /* nCalcMode */
        0,
        /* nAirReflect */
        52224,
        /* nSpatialSmoothness */
        2,
        /* nStrengthLimit */
        26,
        /* nMeshSize */
        32,
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
        40,
        /* nGrayDcRatio */
        64,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1026432, 2052684, /*0 - 11*/},
        /* nEffectStrength[12] */
        {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, /*0 - 11*/},
        /* nGrayDcRatio[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
    },
};

const static AX_ISP_IQ_CSC_PARAM_T csc_param_sdr_qs = {
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

const static AX_ISP_IQ_CA_PARAM_T ca_param_sdr_qs = {
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

const static AX_ISP_IQ_YNR_PARAM_T ynr_param_sdr_qs = {
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
        {2047, 2047, 2047, 2047, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
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
            {2047, 2047, 2047, 2047, /*0 - 3*/},
            {512, 512, 512, 512, /*0 - 3*/},
            {256, 256, 256, 256, /*0 - 3*/},
            {128, 128, 128, 128, /*0 - 3*/},
            {64, 64, 64, 64, /*0 - 3*/},
            {32, 32, 32, 32, /*0 - 3*/},
            {16, 16, 16, 16, /*0 - 3*/},
            {10, 10, 10, 10, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_CNR_PARAM_T cnr_param_sdr_qs = {
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
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
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
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
        },
    },
};

const static AX_ISP_IQ_YUV3DNR_PARAM_T yuv3dnr_param_sdr_qs = {
    /* nYuv3dnrEnable */
    1,
    /* nAutoMode */
    1,
    /* nRefMode */
    1,
    /* nConvergeSpeed */
    176,
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
            {28, 28, 24, 24, 20, 20, 20, 16, 16, 16, 16, 9, 8, 8, 8, 8, 8, /*0 - 16*/},
            {54, 54, 54, 54, 51, 51, 51, 51, 51, 51, 51, 54, 54, 54, 54, 54, 51, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {178, 10, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {32, 10, /*0 - 1*/},
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
            {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
        },
        /* nTfRatioLut[16] */
        {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
        /* nTfRatLimitLuma[2][2] */
        {
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {255, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nSf0EdgeStre */
        128,
        /* nSf0DirStre */
        128,
        /* nSf0DetailStre */
        128,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {0, 0, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {10, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {256, 0, 0, /*0 - 2*/},
            {0, 0, 256, /*0 - 2*/},
        },
        /* nSf0ChromaAttenStre[2] */
        {2, 2, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {200, 230, /*0 - 1*/},
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
        {0, 64, /*0 - 1*/},
        /* nSf1LumaKernelSize */
        0,
        /* nSf1LumaNoiseLut[2][9] */
        {
            {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {16, 0, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1ChromaCoring */
        200,
        /* nSf1ChromaBlendRatio */
        0,
        /* nSf2LumaGauStre[2] */
        {48, 60, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        1,
        /* nSf2NoiseLut[2][9] */
        {
            {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
            {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {256, 0, 0, /*0 - 2*/},
            {256, 0, 0, /*0 - 2*/},
        },
        /* nExtMaskStrenLuma */
        128,
        /* nExtMaskStrenChrom */
        128,
        /* nExtMaskStrenStatus */
        128,
        /* nExtMaskRatioLuma[2] */
        {0, 0, /*0 - 1*/},
        /* nExtMaskRatioChrom[2] */
        {0, 0, /*0 - 1*/},
        /* nExtMaskRatioStatus[2] */
        {0, 0, /*0 - 1*/},
        /* nY3dnrPos */
        0,
        /* nStaRefineErode */
        0,
        /* nSfGuideMapLuma[2] */
        {128, 256, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {256, 256, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {28, 28, 24, 24, 20, 20, 20, 16, 16, 16, 16, 8, 8, 8, 8, 8, 8, /*0 - 16*/},
                {48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {28, 28, 24, 24, 20, 20, 20, 16, 16, 16, 16, 12, 10, 10, 10, 10, 10, /*0 - 16*/},
                {96, 96, 96, 96, 72, 72, 72, 72, 72, 72, 72, 96, 96, 96, 96, 96, 72, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {30, 30, 30, 30, 28, 28, 28, 28, 24, 24, 24, 24, 20, 20, 20, 20, 16, /*0 - 16*/},
                {96, 96, 96, 96, 72, 72, 72, 72, 72, 72, 72, 96, 96, 96, 96, 96, 72, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {32, 32, 32, 32, 30, 30, 30, 30, 24, 24, 24, 24, 20, 20, 20, 20, 16, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {64, 64, 64, 64, 48, 48, 48, 48, 32, 32, 32, 32, 22, 22, 22, 22, 22, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {64, 64, 64, 64, 48, 48, 48, 48, 32, 32, 32, 32, 22, 22, 22, 22, 22, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
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
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 10 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 11 */
            {
                {60, 60, 60, 60, 60, 60, 60, 60, 60, 54, 54, 54, 54, 54, 54, 54, 54, /*0 - 16*/},
                {96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
        },
        /* nMotDetStrenLuma[12][2] */
        {
            {180, 10, /*0 - 1*/},
            {160, 10, /*0 - 1*/},
            {140, 10, /*0 - 1*/},
            {120, 10, /*0 - 1*/},
            {100, 10, /*0 - 1*/},
            {80, 10, /*0 - 1*/},
            {64, 10, /*0 - 1*/},
            {64, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {32, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
            {32, 10, /*0 - 1*/},
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
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 1 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 2 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 3 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 4 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 5 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 6 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 7 */
            {
                {8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 8 */
            {
                {8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 9 */
            {
                {8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 10 */
            {
                {8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 11 */
            {
                {8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
        },
        /* nTfRatioLut[12][16] */
        {
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {128, 128, 122, 114, 102, 85, 64, 51, 43, 37, 32, 28, 26, 23, 21, 9, /*0 - 15*/},
            {196, 196, 196, 128, 128, 128, 64, 64, 64, 24, 24, 24, 16, 16, 16, 16, /*0 - 15*/},
            {196, 196, 196, 128, 128, 128, 64, 64, 64, 24, 24, 24, 16, 16, 16, 16, /*0 - 15*/},
            {196, 196, 196, 128, 128, 128, 64, 64, 64, 24, 24, 24, 16, 16, 16, 16, /*0 - 15*/},
            {196, 196, 196, 128, 128, 128, 64, 64, 64, 24, 24, 24, 16, 16, 16, 16, /*0 - 15*/},
            {196, 196, 196, 128, 128, 128, 64, 64, 64, 24, 24, 24, 16, 16, 16, 16, /*0 - 15*/},
        },
        /* nTfRatLimitLuma[12][2][2] */
        {
            /* nTfRatLimitLuma 0 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 1 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 2 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 3 */
            {
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 4 */
            {
                {225, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 5 */
            {
                {225, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 6 */
            {
                {225, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 7 */
            {
                {225, 255, /*0 - 1*/},
                {36, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 8 */
            {
                {225, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 9 */
            {
                {225, 255, /*0 - 1*/},
                {148, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 10 */
            {
                {225, 255, /*0 - 1*/},
                {148, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 11 */
            {
                {255, 255, /*0 - 1*/},
                {168, 255, /*0 - 1*/},
            },
        },
        /* nTfRatLimitChroma[12][2][2] */
        {
            /* nTfRatLimitChroma 0 */
            {
                {255, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 1 */
            {
                {255, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 2 */
            {
                {255, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 3 */
            {
                {240, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 4 */
            {
                {240, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 5 */
            {
                {240, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 6 */
            {
                {240, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 7 */
            {
                {32, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 8 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 9 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 10 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 11 */
            {
                {168, 255, /*0 - 1*/},
                {168, 255, /*0 - 1*/},
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
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {24, 24, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {24, 24, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {24, 24, 24, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 9 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 10 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 11 */
            {
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {32, 32, 32, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
                {16, 16, 16, 16, 6, 6, 6, 3, 3, /*0 - 8*/},
            },
        },
        /* nSf0LumaKernelSize[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {1, 1, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
        },
        /* nSf0LumaGauStre[12][2] */
        {
            {10, 128, /*0 - 1*/},
            {10, 128, /*0 - 1*/},
            {10, 128, /*0 - 1*/},
            {10, 128, /*0 - 1*/},
            {10, 128, /*0 - 1*/},
            {32, 128, /*0 - 1*/},
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
                {256, 0, 0, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 1 */
            {
                {256, 0, 0, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 2 */
            {
                {228, 28, 0, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 3 */
            {
                {228, 28, 0, /*0 - 2*/},
                {56, 0, 200, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 4 */
            {
                {220, 36, 0, /*0 - 2*/},
                {56, 0, 200, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {200, 56, 0, /*0 - 2*/},
                {56, 50, 150, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {128, 0, 128, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {64, 64, 128, /*0 - 2*/},
                {96, 0, 160, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 9 */
            {
                {64, 64, 128, /*0 - 2*/},
                {32, 0, 224, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 10 */
            {
                {64, 64, 128, /*0 - 2*/},
                {32, 0, 224, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 11 */
            {
                {64, 64, 128, /*0 - 2*/},
                {32, 0, 224, /*0 - 2*/},
            },
        },
        /* nSf0ChromaAttenStre[12][2] */
        {
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {2, 2, /*0 - 1*/},
            {3, 3, /*0 - 1*/},
            {8, 8, /*0 - 1*/},
            {8, 8, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {200, 230, /*0 - 1*/},
            {200, 230, /*0 - 1*/},
            {200, 230, /*0 - 1*/},
            {200, 230, /*0 - 1*/},
            {200, 230, /*0 - 1*/},
            {200, 230, /*0 - 1*/},
            {200, 230, /*0 - 1*/},
            {180, 200, /*0 - 1*/},
            {160, 180, /*0 - 1*/},
            {152, 182, /*0 - 1*/},
            {150, 180, /*0 - 1*/},
            {150, 180, /*0 - 1*/},
        },
        /* nSf0ChromaProtLut[12][2][9] */
        {
            /* nSf0ChromaProtLut 0 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 1 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 2 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {36, 36, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {42, 42, 42, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 9 */
            {
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
                {86, 72, 64, 64, 64, 48, 48, 32, 32, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 10 */
            {
                {128, 128, 128, 128, 128, 96, 86, 64, 64, /*0 - 8*/},
                {128, 128, 128, 128, 128, 96, 86, 64, 64, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 11 */
            {
                {128, 128, 128, 128, 128, 96, 86, 64, 64, /*0 - 8*/},
                {128, 128, 128, 128, 128, 96, 86, 64, 64, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf1LumaGauStre[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
        },
        /* nSf1LumaGauRatio[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {24, 64, /*0 - 1*/},
            {30, 64, /*0 - 1*/},
            {36, 96, /*0 - 1*/},
            {48, 96, /*0 - 1*/},
            {48, 96, /*0 - 1*/},
            {48, 96, /*0 - 1*/},
            {48, 128, /*0 - 1*/},
            {48, 128, /*0 - 1*/},
            {48, 128, /*0 - 1*/},
            {48, 128, /*0 - 1*/},
        },
        /* nSf1LumaKernelSize[12] */
        {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, /*0 - 11*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 3 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 4 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 5 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 6 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {123, 111, 93, 81, 75, 63, 45, 33, 3, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 9 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 10 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 11 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
        },
        /* nSf1LumaIdrThre[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
            {128, 1023, /*0 - 1*/},
        },
        /* nSf1LumaIdrGain[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
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
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nSf1LumaCoring[12][2] */
        {
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 12, /*0 - 1*/},
            {32, 24, /*0 - 1*/},
            {36, 24, /*0 - 1*/},
            {36, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 96, /*0 - 1*/},
            {0, 96, /*0 - 1*/},
            {0, 96, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {64, 164, /*0 - 1*/},
            {64, 164, /*0 - 1*/},
            {64, 164, /*0 - 1*/},
            {64, 164, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {200, 200, 200, 200, 200, 250, 1023, 1023, 1023, 1023, 1023, 1023, /*0 - 11*/},
        /* nSf1ChromaBlendRatio[12] */
        {0, 0, 0, 0, 0, 0, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {64, 60, /*0 - 1*/},
            {96, 60, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nSf2LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 11*/},
        /* nSf2KernelSize[12] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 11*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 8*/},
                {12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {12, 12, 12, 12, 10, 10, 8, 8, 8, /*0 - 8*/},
                {14, 14, 14, 12, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 9 */
            {
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 10 */
            {
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
            /* nSf2NoiseLut 11 */
            {
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
                {96, 96, 64, 53, 12, 12, 12, 12, 12, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
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
                {200, 56, 0, /*0 - 2*/},
                {200, 56, 0, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {0, 0, 256, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 9 */
            {
                {0, 64, 192, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 10 */
            {
                {0, 64, 192, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 11 */
            {
                {0, 64, 192, /*0 - 2*/},
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
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
        },
        /* nExtMaskRatioChrom[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
        },
        /* nExtMaskRatioStatus[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
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
    },
};

const static AX_ISP_IQ_SHARPEN_PARAM_T sharpen_param_sdr_qs = {
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
        {0, 0, 0, 0, 0, 46, 95, 148, 200, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 16*/},
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
        {127, 96, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {6, 4, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {127, 96, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {4, 4, /*0 - 1*/},
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
        {0, 1, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {464, -252, -248, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorRange[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {128, 248, 220, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSmooth[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {7, 2, 2, /*0 - 2*/},
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
        {0, 128, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
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
        0,
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
        {0, 1, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, 0, 0, -6, -22, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {-32, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {-32, -8, 19, 51, 78, 95, 106, 110, 114, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-23, -7, 19, 64, 106, 119, 121, 121, 121, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 15, 29, /*0 - 4*/},
            {0, 0, 0, 0, 51, /*0 - 4*/},
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
        0,
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
        {0, 1, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {-36, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {-26, 8, 19, 26, 34, 40, 48, 54, 64, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-10, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 8, 29, /*0 - 4*/},
            {0, 0, 0, 0, 72, /*0 - 4*/},
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
        0,
        /* nDirFreqMotionLutLevel */
        0,
        /* nDirFreqLumaMskEn */
        0,
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
        {0, 0, 0, -13, -31, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {-67, -23, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {0, 32, 64, 96, 96, 96, 96, 96, 96, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-8, 0, 22, 53, 79, 88, 88, 88, 88, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 6, 12, /*0 - 4*/},
            {0, 0, 0, 0, 56, /*0 - 4*/},
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
        {0, 1, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {0, 10, 20, 20, 0, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {0, 10, 20, 33, 50, 50, 22, 0, 0, /*0 - 8*/},
        /* nC7x7TextureLutMotion[9] */
        {-64, -32, -16, -8, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nC7x7ClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 15, 35, /*0 - 4*/},
            {0, 0, 0, 12, 24, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {29, 38, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {1, 1, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nC3x3LogGain[2] */
        {0, -6, /*0 - 1*/},
        /* nC3x3GainLimit[2] */
        {0, 64, /*0 - 1*/},
        /* nC3x3CorBaseGain */
        6,
        /* nC3x3CorSlope */
        7,
        /* nC3x3CorOffset */
        38,
        /* nC3x3Limit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nC5x5LogGain[2] */
        {-12, -16, /*0 - 1*/},
        /* nC5x5GainLimit[2] */
        {0, 64, /*0 - 1*/},
        /* nC5x5CorBaseGain */
        3,
        /* nC5x5CorSlope */
        8,
        /* nC5x5CorOffset */
        35,
        /* nC5x5Limit[2] */
        {512, 512, /*0 - 1*/},
        /* nD5x5LogGain[2] */
        {12, 8, /*0 - 1*/},
        /* nD5x5GainLimit[2] */
        {0, 64, /*0 - 1*/},
        /* nD5x5CorBaseGain */
        12,
        /* nD5x5CorSlope */
        6,
        /* nD5x5CorOffset */
        37,
        /* nD5x5Limit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nC7x7LogGain[2] */
        {-12, -16, /*0 - 1*/},
        /* nC7x7GainLimit[2] */
        {0, 46, /*0 - 1*/},
        /* nC7x7CorBaseGain */
        3,
        /* nC7x7CorSlope */
        7,
        /* nC7x7CorOffset */
        40,
        /* nC7x7Limit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {8, 25, 32, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {12, 24, 32, /*0 - 2*/},
        /* nShpHpfScale[3] */
        {128, 128, 128, /*0 - 2*/},
        /* nShpGain[2] */
        {25, 17, /*0 - 1*/},
        /* nShpLimit[2] */
        {-4096, 4095, /*0 - 1*/},
        /* nGrainLogGain */
        0,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nHighFreqLogGain[12][2] */
        {
            {0, -6, /*0 - 1*/},
            {0, -6, /*0 - 1*/},
            {0, -6, /*0 - 1*/},
            {32, 26, /*0 - 1*/},
            {48, 36, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {64, 32, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 12, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 12, /*0 - 1*/},
        },
        /* nC3x3CorBaseGain[12] */
        {6, 6, 6, 6, 0, 0, 0, 15, 15, 15, 15, /*0 - 10*/},
        /* nC3x3CorSlope[12] */
        {7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nC3x3CorOffset[12] */
        {38, 38, 38, 38, 0, 0, 0, 0, 15, 15, 15, /*0 - 10*/},
        /* nC3x3Limit[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 256, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
        },
        /* nMedFreqLogGain[12][2] */
        {
            {-12, -16, /*0 - 1*/},
            {-12, -16, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {10, 5, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {16, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 46, /*0 - 1*/},
            {0, 12, /*0 - 1*/},
            {0, 46, /*0 - 1*/},
        },
        /* nC5x5CorBaseGain[12] */
        {3, 3, 3, 3, 0, 0, 0, 15, 15, 15, 15, /*0 - 10*/},
        /* nC5x5CorSlope[12] */
        {8, 8, 8, 8, 5, 5, 5, 5, 5, 5, 5, /*0 - 10*/},
        /* nC5x5CorOffset[12] */
        {35, 35, 35, 35, 16, 16, 16, 15, 15, 15, 15, /*0 - 10*/},
        /* nC5x5Limit[12][2] */
        {
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
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
            {12, 8, /*0 - 1*/},
            {12, 8, /*0 - 1*/},
            {12, 8, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {48, 64, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {12, 12, 12, 12, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nDirFreqCorSlope[12] */
        {6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, /*0 - 10*/},
        /* nDirFreqCorOffset[12] */
        {37, 37, 37, 37, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
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
        },
        /* nLowFreqLogGain[12][2] */
        {
            {-12, -16, /*0 - 1*/},
            {-12, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, -16, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nLowFreqGainLimit[12][2] */
        {
            {0, 46, /*0 - 1*/},
            {0, 46, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 36, /*0 - 1*/},
            {0, 12, /*0 - 1*/},
            {0, 12, /*0 - 1*/},
        },
        /* nC7x7CorBaseGain[12] */
        {3, 3, 3, 3, 0, 0, 0, 0, 0, 15, 15, /*0 - 10*/},
        /* nC7x7CorSlope[12] */
        {7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, /*0 - 10*/},
        /* nLowFreqCorOffset[12] */
        {40, 40, 40, 40, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
        /* nLowFreqLimit[12][2] */
        {
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
        },
        /* nShpHpfBsigma[12][3] */
        {
            {8, 25, 32, /*0 - 2*/},
            {8, 25, 32, /*0 - 2*/},
            {16, 25, 36, /*0 - 2*/},
            {16, 25, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {16, 32, 36, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {12, 24, 32, /*0 - 2*/},
            {12, 24, 32, /*0 - 2*/},
            {28, 56, 66, /*0 - 2*/},
            {28, 56, 66, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 50, 50, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {32, 54, 74, /*0 - 2*/},
            {16, 36, 54, /*0 - 2*/},
            {16, 36, 54, /*0 - 2*/},
            {16, 36, 54, /*0 - 2*/},
            {16, 36, 54, /*0 - 2*/},
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
            {24, 16, /*0 - 1*/},
            {32, 24, /*0 - 1*/},
            {32, 28, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
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
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
            {-2048, 2048, /*0 - 1*/},
        },
        /* nGrainLogGain[12] */
        {0, 0, 0, 0, 32, 32, 32, 0, 0, 0, 0, /*0 - 10*/},
    },
};

const static AX_ISP_IQ_CCMP_PARAM_T ccmp_param_sdr_qs = {
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
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
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
            {384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, /*0 - 28*/},
            {384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, 384, /*0 - 28*/},
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
            {468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, 468, /*0 - 22*/},
            {428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, 428, /*0 - 22*/},
            {364, 367, 369, 373, 378, 383, 389, 394, 401, 426, 449, 464, 476, 476, 476, 476, 476, 476, 476, 476, 476, 476, 476, /*0 - 22*/},
            {364, 367, 369, 373, 378, 383, 389, 394, 401, 426, 449, 464, 476, 476, 476, 476, 476, 476, 476, 476, 476, 476, 476, /*0 - 22*/},
            {364, 367, 369, 373, 378, 383, 389, 394, 401, 426, 449, 464, 476, 476, 476, 476, 476, 476, 476, 476, 476, 476, 476, /*0 - 22*/},
        },
    },
};

const static AX_ISP_IQ_SCM_PARAM_T scm_param_sdr_qs = {
    /* nScmEn */
    0,
    /* nAutoMode */
    0,
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

const static AX_ISP_IQ_YCPROC_PARAM_T ycproc_param_sdr_qs = {
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

const static AX_ISP_IQ_YCRT_PARAM_T ycrt_param_sdr_qs = {
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

const static AX_ISP_IQ_CLP_PARAM_T clp_param_sdr_qs = {
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

const static AX_ISP_IQ_LDC_PARAM_T ldc_param_sdr_qs = {
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

const static AX_ISP_IQ_DIS_PARAM_T dis_param_sdr_qs = {
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
        0xFFFFFF,
    },
};

const static AX_ISP_IQ_ME_PARAM_T me_param_sdr_qs = {
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

const static AX_ISP_IQ_NUC_PARAM_T nuc_param_sdr_qs = {
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
