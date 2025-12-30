#ifndef __OV04A10_HDR_2X_DCG_H__
#define __OV04A10_HDR_2X_DCG_H__

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
    1,
    /* tManualParam */
    {
        /* eAiWorkMode 0: AX_AI_DISABLE 1: AX_AI_ENABLE */
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
        45311,
        /* nFaceTarget */
        35840,
        /* nVehicleTarget */
        35840,
        /* nTolerance */
        6291456,
        /* nAgainLcg2HcgTh */
        6451,
        /* nAgainHcg2LcgTh */
        1228,
        /* nAgainLcg2HcgRatio */
        4301,
        /* nAgainHcg2LcgRatio */
        4301,
        /* nLuxk */
        101157,
        /* nCompensationMode */
        1,
        /* nMaxIspGain */
        8192,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        15872,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        69632,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        513024,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        39849,
        /* nMinShutter */
        650,
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
                {800, 10, /*0 - 1*/},
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
                    6,
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
                            4000,
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
                            10000,
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
                            20000,
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
                            30000,
                            /* nGain */
                            1024,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 5 */
                        {
                            /* nIntergrationTime */
                            37000,
                            /* nGain */
                            182272,
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
                            37000,
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
                            37000,
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
                            37000,
                            /* nGain */
                            182272,
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
            9,
            /* nRefList[10] */
            {205, 1024, 5120, 10240, 51200, 102400, 204800, 1024000, 2048000, /*0 - 8*/},
            /* nSetPointList[10] */
            {20480, 28672, 35840, 51200, 73728, 77824, 81920, 87040, 87040, /*0 - 8*/},
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
            1,
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
        56,
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
            {400, 400, 400, 500, 400, 200, 100, 100, /*0 - 7*/},
            {400, 400, 400, 500, 400, 200, 200, 200, /*0 - 7*/},
            {100, 10, 10, 10, 10, 10, 10, 10, /*0 - 7*/},
            {400, 400, 400, 400, 450, 450, 250, 200, /*0 - 7*/},
            {500, 1000, 1000, 1000, 900, 900, 800, 800, /*0 - 7*/},
            {500, 1000, 1000, 1000, 900, 900, 900, 900, /*0 - 7*/},
            {10, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 200, 400, 500, 500, 400, 300, 300, /*0 - 7*/},
            {400, 800, 1000, 1000, 1000, 700, 500, 450, /*0 - 7*/},
            {400, 800, 1000, 1000, 1000, 700, 700, 700, /*0 - 7*/},
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
        {64, 80, 96, 128, 156, 184, 200, 200, 200, 200, /*0 - 9*/},
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
                {4122, 4122, 4122, /*0 - 2*/},
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
                {4122, 4122, 4122, /*0 - 2*/},
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
                {4122, 4122, 4122, /*0 - 2*/},
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
                {4122, 4122, 4122, /*0 - 2*/},
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
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768,  /* 0 - 31*/
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
                32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 32768, 1,  /* 224 - 255*/
                0, /*256 - 256*/
            },
        },
        /* nExpWeightGain[2] */
        {0, 256, /*0 - 1*/},
    },
    /* tDgstParam */
    {
        /* nDeghostEnable */
        1,
        /* nDgstStrenThre[2] */
        {0, 1024, /*0 - 1*/},
        /* nDgstStrenLimit[2] */
        {0, 256, /*0 - 1*/},
        /* nDgstBaseFid */
        1,
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
        2227,
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
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, 262144,  262144, 262144, 262144, 262144, 262144, /*0 - 15*/},
        /* nNoiseLutScale[16] */
        {6600, 6000, 5800, 4096, 3072, 2700, 2400, 2100, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, /*0 - 15*/},
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
        /* AX_ISP_AINR_META_PARAM_T */
        {
            /* szModelPath */
            "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A2-16X_I1-4X_0000_MULTI2_00000695716_240308_AX620E.axmodel",
            /* szModelName */
            "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A2-16X_I1-4X_0000_MULTI2_00000695716_240308_AX620E.axmodel",
            /* szTemporalBaseNrName */
            "3d_1108_again2-16x_isp1-4x_lv0",
            /* szSpatialBaseNrName */
            "2d_1108_again8-16x_isp1-4x_lv0",
            /* nHcgMode */
            0,
            /* nIsoThresholdMin */
            0,
            /* nIsoThresholdMax */
            1000000,
            /* nHdrRatioMin */
            1024,
            /* nHdrRatioMax */
            1024,
            /* nBiasIn2D */
            {4096, 4096, 4096, 4096,},
            /* nBiasIn3D */
            {4096, 4096, 4096, 4096,},
        },
        /* AX_ISP_AINR_MANUAL_PARAM_T */
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
        },
    },
    /* tAutoParam */
    {
        /* nAutoModelNum */
        2,
        /* tAutoModelTable[16] */
        {
            /* 0 */
            {
                /* tMeta */
                {
                    /* szModelPath */
                    "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A2-16X_I1-4X_0000_MULTI2_00000695716_240308_AX620E.axmodel",
                    /* szModelName */
                    "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A2-16X_I1-4X_0000_MULTI2_00000695716_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName */
                    "3d_1108_again2-16x_isp1-4x_lv0",
                    /* szSpatialBaseNrName */
                    "2d_1108_again2-8x_lv0",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    400,
                    /* nIsoThresholdMax */
                    800,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D */
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
                        /* nRefValStart */
                        {8192, 16384, 22528, 28672, /*0 - 3*/},
                        /* nRefValEnd */
                        {14336, 20480, 26624, 32768, /*0 - 3*/},
                        /* nTemporalFilterStrLut */
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
                                {0, 0, /*0 - 1*/},
                                {16, 2048, /*0 - 1*/},
                                {32, 2048, /*0 - 1*/},
                                {48, 3072, /*0 - 1*/},
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
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
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
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
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
                            /* nVstTemporalFilterStrLut 2 */
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
                            /* nVstTemporalFilterStrLut 3 */
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
                        4,
                        /* nRefValStart */
                        {8192, 16384, 22528, 28672, /*0 - 3*/},
                        /* nRefValEnd */
                        {14336, 20480, 26624, 32768, /*0 - 3*/},
                        /* nSpatialNrStrLut */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 0, /*0 - 1*/},
                                {32, 0, /*0 - 1*/},
                                {48, 0, /*0 - 1*/},
                                {64,  0, /*0 - 1*/},
                                {80,  0, /*0 - 1*/},
                                {96,  0, /*0 - 1*/},
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
                                {64,  512, /*0 - 1*/},
                                {80,  512, /*0 - 1*/},
                                {96,  512, /*0 - 1*/},
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
                                {64,  512, /*0 - 1*/},
                                {80,  512, /*0 - 1*/},
                                {96,  512, /*0 - 1*/},
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
                                {64,  3072, /*0 - 1*/},
                                {80,  3072, /*0 - 1*/},
                                {96,  3072, /*0 - 1*/},
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
            /* 1 */
            {
                /* tMeta */
                {
                    /* szModelPath */
                    "/opt/etc/models/aiisp/OS04A10_HDR_2688x1520_10b_HCG_ISP1_A2-16X_I1-4X_0000_MULTI2_00000695716_240308_AX620E.axmodel",
                    /* szModelName */
                    "OS04A10_HDR_2688x1520_10b_HCG_ISP1_A2-16X_I1-4X_0000_MULTI2_00000695716_240308_AX620E.axmodel",
                    /* szTemporalBaseNrName */
                    "3d_1108_again2-16x_isp1-4x_lv0",
                    /* szSpatialBaseNrName */
                    "2d_1108_again8-16x_isp1-4x_lv0",
                    /* nHcgMode */
                    1,
                    /* nIsoThresholdMin */
                    800,
                    /* nIsoThresholdMax */
                    25600,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D */
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
                        /* nRefValStart */
                        {32768, 65536, 98304, 163840, /*0 - 3*/},
                        /* nRefValEnd */
                        {36864, 72380, 122880, 184320, /*0 - 3*/},
                        /* nTemporalFilterStrLut */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0,   0, /*0 - 1*/},
                                {16,  256, /*0 - 1*/},
                                {32,  512, /*0 - 1*/},
                                {48,  768, /*0 - 1*/},
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
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0,   0, /*0 - 1*/},
                                {16,  256, /*0 - 1*/},
                                {32,  512, /*0 - 1*/},
                                {48,  768, /*0 - 1*/},
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
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0,   0, /*0 - 1*/},
                                {16,  256, /*0 - 1*/},
                                {32,  512, /*0 - 1*/},
                                {48,  768, /*0 - 1*/},
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
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0,   0, /*0 - 1*/},
                                {16,  256, /*0 - 1*/},
                                {32,  512, /*0 - 1*/},
                                {48,  768, /*0 - 1*/},
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
                        /* nVstTemporalFilterStrLut[4][17][2] */
                        {
                            /* nVstTemporalFilterStrLut 0 */
                            {
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
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
                                {0, 1136, /*0 - 1*/},
                                {16, 1136, /*0 - 1*/},
                                {32, 1136, /*0 - 1*/},
                                {48, 1236, /*0 - 1*/},
                                {64,  1236, /*0 - 1*/},
                                {80,  1536, /*0 - 1*/},
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
                            /* nVstTemporalFilterStrLut 2 */
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
                            /* nVstTemporalFilterStrLut 3 */
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
                        4,
                        /* nRefValStart */
                        {32768, 65536, 98304, 163840, /*0 - 3*/},
                        /* nRefValEnd */
                        {36864, 72380, 122880, 184320, /*0 - 3*/},
                        /* nSpatialNrStrLut */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2400, /*0 - 1*/},
                                {16, 2400, /*0 - 1*/},
                                {32, 2400, /*0 - 1*/},
                                {48, 2400, /*0 - 1*/},
                                {64,  2400, /*0 - 1*/},
                                {80,  2400, /*0 - 1*/},
                                {96,  2400, /*0 - 1*/},
                                {112, 2400, /*0 - 1*/},
                                {128, 2400, /*0 - 1*/},
                                {144, 2400, /*0 - 1*/},
                                {160, 2400, /*0 - 1*/},
                                {176, 2400, /*0 - 1*/},
                                {192, 2560, /*0 - 1*/},
                                {208, 2560, /*0 - 1*/},
                                {224, 2560, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2560, /*0 - 1*/},
                                {16, 2560, /*0 - 1*/},
                                {32, 2560, /*0 - 1*/},
                                {48, 3072, /*0 - 1*/},
                                {64,  3072, /*0 - 1*/},
                                {80,  3072, /*0 - 1*/},
                                {96,  3072, /*0 - 1*/},
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
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 3072, /*0 - 1*/},
                                {16, 3072, /*0 - 1*/},
                                {32, 3072, /*0 - 1*/},
                                {48, 3072, /*0 - 1*/},
                                {64,  3072, /*0 - 1*/},
                                {80,  3072, /*0 - 1*/},
                                {96,  3072, /*0 - 1*/},
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
                            /* nSpatialNrStrLut 3 */
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
                {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
            },
            /* nLowFreqNrFactor[2][17] */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
                {255, 255, 255, 196, 128, 128, 128, 128, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
            },
            /* nHfNrStrength[2] */
            {64, 80, /*0 - 1*/},
            /* nMfNrStrength[2] */
            {64, 96, /*0 - 1*/},
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
            /* tHrParam */
            {
                /* 0 */
                {
                    /* nHighFreqNrFactor[12][2][17] */
                    {
                        /* nHighFreqNrFactor 0 */
                        {
                            {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
                            {512, 512, 512, 512, 256, 256, 256, 256, 128, 128, 128, 128, 128, 128, 96, 96, 96, /*0 - 16*/},
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
                            {255, 255, 255, 196, 128, 128, 128, 128, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
                            {255, 255, 255, 196, 128, 128, 128, 128, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 1 */
                        {
                            {255, 255, 255, 196, 128, 128, 128, 128, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
                            {255, 255, 255, 196, 128, 128, 128, 128, 96, 96, 96, 96, 96, 96, 96, 96, 96, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 2 */
                        {
                            {144, 144, 144, 144, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
                            {144, 144, 144, 144, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 3 */
                        {
                            {144, 144, 144, 144, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
                            {144, 144, 144, 144, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 4 */
                        {
                            {156, 156, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, /*0 - 16*/},
                            {156, 156, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 5 */
                        {
                            {255, 255, 200, 166, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, /*0 - 16*/},
                            {255, 255, 200, 166, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 6 */
                        {
                            {255, 255, 200, 166, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, /*0 - 16*/},
                            {255, 255, 200, 166, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, 144, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 7 */
                        {
                            {156, 156, 156, 156, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, /*0 - 16*/},
                            {156, 156, 156, 156, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 8 */
                        {
                            {156, 156, 156, 156, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, /*0 - 16*/},
                            {156, 156, 156, 156, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 9 */
                        {
                            {156, 156, 156, 156, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, /*0 - 16*/},
                            {156, 156, 156, 156, 128, 128, 128, 128, 127, 127, 127, 127, 127, 127, 127, 127, 127, /*0 - 16*/},
                        },
                    },
                    /* nHfNrStrength[12][2] */
                    {
                        {80, 80, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                        {120, 120, /*0 - 1*/},
                        {130, 130, /*0 - 1*/},
                        {255, 128, /*0 - 1*/},
                        {64, 140, /*0 - 1*/},
                        {128, 128, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                        {80, 80, /*0 - 1*/},
                    },
                    /* nMfNrStrength[12][2] */
                    {
                        {96, 96, /*0 - 1*/},
                        {96, 96, /*0 - 1*/},
                        {120, 120, /*0 - 1*/},
                        {130, 130, /*0 - 1*/},
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
    1,
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

const static AX_ISP_IQ_RLTM_PARAM_T rltm_param_hdr_2x = {
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
        5,
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
        72,
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
            0, 714, 1003, 1223, 1408, 1571, 1718, 1852, 1977, 2095, 2206, 2311, 2412, 2508, 2601, 2690, 2776, 2860, 2941, 3020, 3097, 3172, 3245, 3316, 3386, 3454, 3521, 3587, 3651, 3715, 3777, 3838,  /* 0 - 31*/
            3898, 3957, 4015, 4073, 4129, 4185, 4240, 4294, 4348, 4401, 4453, 4505, 4556, 4606, 4656, 4705, 4754, 4802, 4850, 4897, 4944, 4990, 5036, 5082, 5127, 5171, 5216, 5259, 5303, 5346, 5389, 5431,  /* 32 - 63*/
            5473, 5515, 5556, 5597, 5638, 5678, 5718, 5758, 5798, 5837, 5876, 5915, 5953, 5992, 6030, 6067, 6105, 6142, 6179, 6216, 6252, 6289, 6325, 6361, 6396, 6432, 6467, 6502, 6537, 6572, 6606, 6641,  /* 64 - 95*/
            6675, 6709, 6743, 6776, 6810, 6843, 6876, 6909, 6942, 6974, 7007, 7039, 7071, 7103, 7135, 7167, 7198, 7229, 7261, 7292, 7323, 7354, 7384, 7415, 7445, 7476, 7506, 7536, 7566, 7596, 7625, 7655,  /* 96 - 127*/
            7684, 7714, 7743, 7772, 7801, 7830, 7859, 7887, 7916, 7944, 7973, 8001, 8029, 8057, 8085, 8113, 8140, 8168, 8196, 8223, 8250, 8278, 8305, 8332, 8359, 8386, 8413, 8439, 8466, 8492, 8519, 8545,  /* 128 - 159*/
            8571, 8598, 8624, 8650, 8676, 8702, 8727, 8753, 8779, 8804, 8830, 8855, 8880, 8906, 8931, 8956, 8981, 9006, 9031, 9055, 9080, 9105, 9129, 9154, 9178, 9203, 9227, 9251, 9276, 9300, 9324, 9348,  /* 160 - 191*/
            9372, 9396, 9419, 9443, 9467, 9490, 9514, 9537, 9561, 9584, 9608, 9631, 9654, 9677, 9700, 9723, 9746, 9769, 9792, 9815, 9838, 9860, 9883, 9905, 9928, 9950, 9973, 9995, 10018, 10040, 10062, 10084,  /* 192 - 223*/
            10106, 10128, 10150, 10172, 10194, 10216, 10238, 10260, 10281, 10303, 10325, 10346, 10368, 10389, 10411, 10432, 10454, 10475, 10496, 10517, 10538, 10560, 10581, 10602, 10623, 10644, 10665, 10685, 10706, 10727, 10748, 10768,  /* 224 - 255*/
            10789, 10810, 10830, 10851, 10871, 10892, 10912, 10933, 10953, 10973, 10993, 11014, 11034, 11054, 11074, 11094, 11114, 11134, 11154, 11174, 11194, 11214, 11234, 11253, 11273, 11293, 11312, 11332, 11352, 11371, 11391, 11410,  /* 256 - 287*/
            11430, 11449, 11468, 11488, 11507, 11526, 11546, 11565, 11584, 11603, 11622, 11641, 11660, 11679, 11698, 11717, 11736, 11755, 11774, 11793, 11812, 11830, 11849, 11868, 11887, 11906, 11924, 11943, 11962, 11981, 12000, 12018,  /* 288 - 319*/
            12037, 12056, 12075, 12094, 12112, 12131, 12150, 12169, 12188, 12206, 12225, 12244, 12263, 12282, 12300, 12319, 12338, 12357, 12376, 12394, 12413, 12432, 12451, 12470, 12488, 12507, 12526, 12545, 12564, 12582, 12601, 12620,  /* 320 - 351*/
            12639, 12658, 12676, 12695, 12714, 12733, 12752, 12770, 12789, 12808, 12827, 12846, 12864, 12883, 12902, 12921, 12940, 12958, 12977, 12996, 13015, 13034, 13052, 13071, 13090, 13109, 13128, 13146, 13165, 13184, 13203, 13222,  /* 352 - 383*/
            13240, 13259, 13278, 13297, 13316, 13334, 13353, 13372, 13391, 13410, 13428, 13447, 13466, 13485, 13504, 13522, 13541, 13560, 13579, 13598, 13616, 13635, 13654, 13673, 13692, 13710, 13729, 13748, 13767, 13786, 13804, 13823,  /* 384 - 415*/
            13842, 13861, 13880, 13898, 13917, 13936, 13955, 13974, 13992, 14011, 14030, 14049, 14068, 14086, 14105, 14124, 14143, 14162, 14180, 14199, 14218, 14237, 14256, 14274, 14293, 14312, 14331, 14350, 14368, 14387, 14406, 14425,  /* 416 - 447*/
            14444, 14462, 14481, 14500, 14519, 14538, 14556, 14575, 14594, 14613, 14632, 14650, 14669, 14688, 14707, 14726, 14744, 14763, 14782, 14801, 14820, 14838, 14857, 14876, 14895, 14914, 14932, 14951, 14970, 14989, 15008, 15026,  /* 448 - 479*/
            15045, 15064, 15083, 15102, 15120, 15139, 15158, 15177, 15196, 15214, 15233, 15252, 15271, 15290, 15308, 15327, 15346, 15365, 15384, 15402, 15421, 15440, 15459, 15478, 15496, 15515, 15534, 15553, 15572, 15590, 15609, 15628,  /* 480 - 511*/
            15647, 15666, 15684, 15703, 15722, 15741, 15760, 15778, 15797, 15816, 15835, 15854, 15872, 15891, 15910, 15929, 15948, 15966, 15985, 16004, 16023, 16042, 16060, 16079, 16098, 16117, 16136, 16154, 16173, 16192, 16211, 16230,  /* 512 - 543*/
            16248, 16267, 16286, 16305, 16324, 16342, 16361, 16380, 16399, 16418, 16436, 16455, 16474, 16493, 16512, 16530, 16549, 16568, 16587, 16606, 16624, 16643, 16662, 16681, 16700, 16718, 16737, 16756, 16775, 16794, 16812, 16831,  /* 544 - 575*/
            16850, 16869, 16888, 16906, 16925, 16944, 16963, 16982, 17000, 17019, 17038, 17057, 17076, 17094, 17113, 17132, 17151, 17170, 17188, 17207, 17226, 17245, 17264, 17282, 17301, 17320, 17339, 17358, 17376, 17395, 17414, 17433,  /* 576 - 607*/
            17452, 17470, 17489, 17508, 17527, 17546, 17564, 17583, 17602, 17621, 17640, 17658, 17677, 17696, 17715, 17734, 17752, 17771, 17790, 17809, 17828, 17846, 17865, 17884, 17903, 17922, 17940, 17959, 17978, 17997, 18016, 18034,  /* 608 - 639*/
            18053, 18072, 18091, 18110, 18128, 18147, 18166, 18185, 18204, 18222, 18241, 18260, 18279, 18298, 18316, 18335, 18354, 18373, 18392, 18410, 18429, 18448, 18467, 18486, 18504, 18523, 18542, 18561, 18580, 18598, 18617, 18636,  /* 640 - 671*/
            18655, 18674, 18692, 18711, 18730, 18749, 18768, 18786, 18805, 18824, 18843, 18862, 18880, 18899, 18918, 18937, 18956, 18974, 18993, 19012, 19031, 19050, 19068, 19087, 19106, 19125, 19144, 19162, 19181, 19200, 19219, 19238,  /* 672 - 703*/
            19256, 19275, 19294, 19313, 19332, 19350, 19369, 19388, 19407, 19426, 19444, 19463, 19482, 19501, 19520, 19538, 19557, 19576, 19595, 19614, 19633, 19652, 19671, 19691, 19710, 19729, 19748, 19767, 19787, 19806, 19826, 19845,  /* 704 - 735*/
            19865, 19884, 19904, 19923, 19943, 19962, 19982, 20002, 20022, 20042, 20061, 20081, 20101, 20121, 20141, 20161, 20182, 20202, 20222, 20242, 20262, 20283, 20303, 20324, 20344, 20364, 20385, 20406, 20426, 20447, 20468, 20488,  /* 736 - 767*/
            20509, 20530, 20551, 20572, 20593, 20614, 20635, 20656, 20677, 20699, 20720, 20741, 20763, 20784, 20806, 20827, 20849, 20870, 20892, 20914, 20936, 20957, 20979, 21001, 21023, 21045, 21067, 21090, 21112, 21134, 21156, 21179,  /* 768 - 799*/
            21201, 21224, 21246, 21269, 21292, 21314, 21337, 21360, 21383, 21406, 21429, 21452, 21475, 21498, 21522, 21545, 21568, 21592, 21615, 21639, 21663, 21686, 21710, 21734, 21758, 21782, 21806, 21830, 21854, 21879, 21903, 21927,  /* 800 - 831*/
            21952, 21976, 22001, 22026, 22050, 22075, 22100, 22125, 22150, 22175, 22201, 22226, 22251, 22277, 22302, 22328, 22354, 22380, 22405, 22431, 22457, 22484, 22510, 22536, 22562, 22589, 22615, 22642, 22669, 22696, 22723, 22750,  /* 832 - 863*/
            22777, 22804, 22831, 22859, 22886, 22914, 22942, 22969, 22997, 23025, 23054, 23082, 23110, 23139, 23167, 23196, 23225, 23253, 23283, 23312, 23341, 23370, 23400, 23429, 23459, 23489, 23519, 23549, 23579, 23610, 23640, 23671,  /* 864 - 895*/
            23701, 23732, 23763, 23795, 23826, 23857, 23889, 23921, 23953, 23985, 24017, 24049, 24082, 24114, 24147, 24180, 24213, 24247, 24280, 24314, 24348, 24382, 24416, 24450, 24485, 24520, 24554, 24590, 24625, 24661, 24696, 24732,  /* 896 - 927*/
            24768, 24805, 24841, 24878, 24915, 24952, 24990, 25028, 25066, 25104, 25142, 25181, 25220, 25259, 25299, 25339, 25379, 25419, 25460, 25500, 25542, 25583, 25625, 25667, 25710, 25753, 25796, 25839, 25883, 25927, 25972, 26017,  /* 928 - 959*/
            26062, 26108, 26154, 26201, 26248, 26296, 26344, 26392, 26441, 26490, 26540, 26591, 26642, 26693, 26745, 26798, 26852, 26905, 26960, 27015, 27071, 27128, 27186, 27244, 27303, 27363, 27423, 27485, 27548, 27611, 27676, 27742,  /* 960 - 991*/
            27809, 27877, 27946, 28017, 28089, 28162, 28237, 28314, 28392, 28473, 28555, 28639, 28726, 28815, 28907, 29002, 29100, 29202, 29307, 29417, 29532, 29652, 29779, 29913, 30056, 30209, 30376, 30559, 30764, 31002, 31293, 31709,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
        },
        /* tHistWt[16] */
        {
            /* 0 */
            {
                /* nHistogramWeight[63] */
                {
                    6652, 8323, 9328, 9822, 9961, 9904, 9806, 9825, 10094, 10648, 11501, 12665, 14142, 15883, 17830, 19923, 22085, 24171, 26016, 27456, 28354, 28672, 28400, 27527, 26078, 24225, 22178, 20143, 18289, 16612, 15069, 13617,  /* 0 - 31*/
                    12236, 11009, 10042, 9443, 9283, 9500, 9996, 10673, 11449, 12311, 13259, 14296, 15418, 16610, 17852, 19123, 20406, 21703, 23018, 24354, 25704, 27006, 28188, 29177, 29871, 30062, 29509, 27975, 25221, 21009, 15101, /*32 - 62*/
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
            9000,
            /* nDetailSigmaVal */
            1000,
            /* nDetailExtraStrPos */
            0,
            /* nDetailExtraStrNeg */
            30,
            /* nDetailGainLimitPos */
            2560,
            /* nDetailGainLimitNeg */
            10240,
            /* nSlopeStrengthLut[33] */
            {
                8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                8192, /*32 - 32*/
            },
            /* nSlopeCoeff */
            0,
        },
        /* tLowFreqEnh */
        {
            /* nRltmDetailLowEn */
            1,
            /* nSigmaDisBlur */
            65535,
            /* nDetailGainPosLow */
            0,
            /* nDetailGainNegLow */
            96,
            /* nDetailLimitPosLow */
            0,
            /* nDetailLimitNegLow */
            10240,
            /* nSigmaDisPst */
            1,
            /* nSigmaValPst */
            65535,
        },
        /* tHrParam */
        {
            /* nLocalFactor */
            80,
            /* nRltmStrength */
            100,
            /* nContrastStrength */
            32,
            /* nPostGamma */
            32,
            /* nHighlightSup */
            25,
            /* nDetailCoringPos */
            0,
            /* nDetailCoringNeg */
            100,
            /* nDetailGainPos */
            20,
            /* nDetailGainNeg */
            40,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nKMax[12] */
        {65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, /*0 - 9*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 9*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 9*/},
        /* nLog10Offset[12] */
        {72, 72, 72, 72, 72, 72, 72, 72, 72, 72, /*0 - 9*/},
        /* nBaseGain[12] */
        {32, 1, 1, 1, 1, 1, 32, 64, 64, 64, /*0 - 9*/},
        /* nDitherMode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nDitherScale[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 9*/},
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
        },
        /* nSCurveList[12][1025] */
        {
            {
                0, 66, 121, 173, 222, 270, 317, 362, 407, 452, 495, 538, 581, 623, 665, 706, 747, 788, 828, 868, 908, 948, 987, 1026, 1065, 1104, 1143, 1181, 1219, 1257, 1295, 1333,  /* 0 - 31*/
                1370, 1408, 1445, 1482, 1519, 1556, 1593, 1629, 1666, 1702, 1739, 1775, 1811, 1847, 1883, 1918, 1954, 1990, 2025, 2060, 2096, 2131, 2166, 2201, 2236, 2271, 2306, 2341, 2375, 2410, 2444, 2479,  /* 32 - 63*/
                2513, 2548, 2582, 2616, 2650, 2684, 2718, 2752, 2786, 2820, 2854, 2887, 2921, 2955, 2988, 3022, 3055, 3089, 3122, 3155, 3188, 3222, 3255, 3288, 3321, 3354, 3387, 3420, 3453, 3485, 3518, 3551,  /* 64 - 95*/
                3584, 3616, 3649, 3681, 3714, 3746, 3779, 3811, 3844, 3876, 3908, 3941, 3973, 4005, 4037, 4069, 4101, 4133, 4165, 4197, 4229, 4261, 4293, 4325, 4356, 4388, 4420, 4452, 4483, 4515, 4546, 4578,  /* 96 - 127*/
                4609, 4641, 4672, 4704, 4735, 4767, 4798, 4829, 4861, 4892, 4923, 4954, 4985, 5017, 5048, 5079, 5110, 5141, 5172, 5203, 5234, 5265, 5296, 5327, 5357, 5388, 5419, 5450, 5481, 5511, 5542, 5573,  /* 128 - 159*/
                5604, 5635, 5665, 5696, 5727, 5758, 5789, 5819, 5850, 5881, 5912, 5943, 5973, 6004, 6035, 6066, 6097, 6127, 6158, 6189, 6220, 6251, 6281, 6312, 6343, 6374, 6405, 6435, 6466, 6497, 6528, 6559,  /* 160 - 191*/
                6589, 6620, 6651, 6682, 6713, 6743, 6774, 6805, 6836, 6867, 6897, 6928, 6959, 6990, 7021, 7051, 7082, 7113, 7144, 7175, 7205, 7236, 7267, 7298, 7329, 7359, 7390, 7421, 7452, 7483, 7513, 7544,  /* 192 - 223*/
                7575, 7606, 7637, 7667, 7698, 7729, 7760, 7791, 7821, 7852, 7883, 7914, 7945, 7975, 8006, 8037, 8068, 8099, 8129, 8160, 8191, 8222, 8253, 8283, 8314, 8345, 8376, 8407, 8437, 8468, 8499, 8530,  /* 224 - 255*/
                8561, 8591, 8622, 8653, 8684, 8715, 8745, 8776, 8807, 8838, 8869, 8899, 8930, 8961, 8992, 9023, 9053, 9084, 9115, 9146, 9177, 9207, 9238, 9269, 9300, 9331, 9361, 9392, 9423, 9454, 9485, 9515,  /* 256 - 287*/
                9546, 9577, 9608, 9639, 9669, 9700, 9731, 9762, 9793, 9823, 9854, 9885, 9916, 9947, 9977, 10008, 10039, 10070, 10101, 10131, 10162, 10193, 10224, 10255, 10285, 10316, 10347, 10378, 10409, 10439, 10470, 10501,  /* 288 - 319*/
                10532, 10563, 10593, 10624, 10655, 10686, 10717, 10747, 10778, 10809, 10840, 10871, 10901, 10932, 10963, 10994, 11025, 11055, 11086, 11117, 11148, 11179, 11209, 11240, 11271, 11302, 11333, 11363, 11394, 11425, 11456, 11487,  /* 320 - 351*/
                11517, 11548, 11579, 11610, 11641, 11671, 11702, 11733, 11764, 11795, 11825, 11856, 11887, 11918, 11949, 11979, 12010, 12041, 12072, 12103, 12133, 12164, 12195, 12226, 12257, 12287, 12318, 12349, 12380, 12411, 12441, 12472,  /* 352 - 383*/
                12503, 12534, 12565, 12595, 12626, 12657, 12688, 12719, 12749, 12780, 12811, 12842, 12873, 12903, 12934, 12965, 12996, 13027, 13057, 13088, 13119, 13150, 13181, 13211, 13242, 13273, 13304, 13335, 13365, 13396, 13427, 13458,  /* 384 - 415*/
                13489, 13519, 13550, 13581, 13612, 13643, 13673, 13704, 13735, 13766, 13797, 13827, 13858, 13889, 13920, 13951, 13981, 14012, 14043, 14074, 14105, 14135, 14166, 14197, 14228, 14259, 14289, 14320, 14351, 14382, 14413, 14443,  /* 416 - 447*/
                14474, 14505, 14536, 14567, 14597, 14628, 14659, 14690, 14721, 14751, 14782, 14813, 14844, 14875, 14905, 14936, 14967, 14998, 15029, 15059, 15090, 15121, 15152, 15183, 15213, 15244, 15275, 15306, 15337, 15367, 15398, 15429,  /* 448 - 479*/
                15460, 15491, 15521, 15552, 15583, 15614, 15645, 15675, 15706, 15737, 15768, 15799, 15829, 15860, 15891, 15922, 15953, 15983, 16014, 16045, 16076, 16107, 16137, 16168, 16199, 16230, 16261, 16291, 16322, 16353, 16384, 16415,  /* 480 - 511*/
                16445, 16476, 16507, 16538, 16569, 16599, 16630, 16661, 16692, 16723, 16753, 16784, 16815, 16846, 16877, 16907, 16938, 16969, 17000, 17031, 17061, 17092, 17123, 17154, 17185, 17215, 17246, 17277, 17308, 17339, 17369, 17400,  /* 512 - 543*/
                17431, 17462, 17493, 17523, 17554, 17585, 17616, 17647, 17677, 17708, 17739, 17770, 17801, 17831, 17862, 17893, 17924, 17955, 17985, 18016, 18047, 18078, 18109, 18139, 18170, 18201, 18232, 18263, 18294, 18324, 18355, 18386,  /* 544 - 575*/
                18417, 18448, 18479, 18509, 18540, 18571, 18602, 18633, 18664, 18694, 18725, 18756, 18787, 18818, 18849, 18880, 18911, 18941, 18972, 19003, 19034, 19065, 19096, 19127, 19158, 19188, 19219, 19250, 19281, 19312, 19343, 19374,  /* 576 - 607*/
                19405, 19436, 19467, 19498, 19529, 19559, 19590, 19621, 19652, 19683, 19714, 19745, 19776, 19807, 19838, 19869, 19900, 19931, 19962, 19993, 20024, 20055, 20086, 20117, 20148, 20179, 20210, 20241, 20272, 20303, 20334, 20365,  /* 608 - 639*/
                20396, 20427, 20458, 20489, 20520, 20551, 20582, 20613, 20644, 20675, 20706, 20737, 20768, 20799, 20830, 20861, 20892, 20923, 20954, 20985, 21017, 21048, 21079, 21110, 21141, 21172, 21203, 21234, 21265, 21296, 21327, 21359,  /* 640 - 671*/
                21390, 21421, 21452, 21483, 21514, 21545, 21576, 21608, 21639, 21670, 21701, 21732, 21763, 21794, 21826, 21857, 21888, 21919, 21950, 21981, 22013, 22044, 22075, 22106, 22137, 22169, 22200, 22231, 22262, 22293, 22325, 22356,  /* 672 - 703*/
                22387, 22418, 22449, 22481, 22512, 22543, 22574, 22606, 22637, 22668, 22699, 22731, 22762, 22793, 22825, 22856, 22887, 22918, 22950, 22981, 23012, 23044, 23075, 23106, 23137, 23169, 23200, 23231, 23263, 23294, 23325, 23357,  /* 704 - 735*/
                23388, 23419, 23451, 23482, 23514, 23545, 23576, 23608, 23639, 23670, 23702, 23733, 23765, 23796, 23827, 23859, 23890, 23922, 23953, 23984, 24016, 24047, 24079, 24110, 24142, 24173, 24205, 24236, 24268, 24299, 24330, 24362,  /* 736 - 767*/
                24393, 24425, 24456, 24488, 24519, 24551, 24582, 24614, 24645, 24677, 24709, 24740, 24772, 24803, 24835, 24866, 24898, 24929, 24961, 24993, 25024, 25056, 25087, 25119, 25150, 25182, 25214, 25245, 25277, 25309, 25340, 25372,  /* 768 - 799*/
                25403, 25435, 25467, 25498, 25530, 25562, 25593, 25625, 25657, 25688, 25720, 25752, 25784, 25815, 25847, 25879, 25910, 25942, 25974, 26006, 26037, 26069, 26101, 26133, 26165, 26196, 26228, 26260, 26292, 26323, 26355, 26387,  /* 800 - 831*/
                26419, 26451, 26483, 26514, 26546, 26578, 26610, 26642, 26674, 26706, 26738, 26769, 26801, 26833, 26865, 26897, 26929, 26961, 26993, 27025, 27057, 27089, 27121, 27153, 27185, 27217, 27249, 27281, 27313, 27345, 27377, 27409,  /* 832 - 863*/
                27441, 27473, 27505, 27537, 27569, 27601, 27633, 27665, 27697, 27730, 27762, 27794, 27826, 27858, 27890, 27922, 27955, 27987, 28019, 28051, 28083, 28116, 28148, 28180, 28212, 28244, 28277, 28309, 28341, 28374, 28406, 28438,  /* 864 - 895*/
                28470, 28503, 28535, 28567, 28600, 28632, 28665, 28697, 28729, 28762, 28794, 28827, 28859, 28891, 28924, 28956, 28989, 29021, 29054, 29086, 29119, 29151, 29184, 29216, 29249, 29282, 29314, 29347, 29379, 29412, 29445, 29477,  /* 896 - 927*/
                29510, 29543, 29575, 29608, 29641, 29673, 29706, 29739, 29772, 29804, 29837, 29870, 29903, 29936, 29969, 30001, 30034, 30067, 30100, 30133, 30166, 30199, 30232, 30265, 30298, 30331, 30364, 30397, 30430, 30463, 30496, 30529,  /* 928 - 959*/
                30563, 30596, 30629, 30662, 30695, 30729, 30762, 30795, 30829, 30862, 30895, 30929, 30962, 30996, 31029, 31063, 31096, 31130, 31163, 31197, 31230, 31264, 31298, 31331, 31365, 31399, 31433, 31467, 31500, 31534, 31568, 31602,  /* 960 - 991*/
                31636, 31670, 31704, 31739, 31773, 31807, 31841, 31876, 31910, 31944, 31979, 32013, 32048, 32083, 32118, 32152, 32187, 32222, 32257, 32292, 32328, 32363, 32399, 32434, 32470, 32506, 32542, 32578, 32615, 32652, 32690, 32728,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 391, 586, 742, 878, 1000, 1112, 1217, 1315, 1409, 1498, 1584, 1666, 1746, 1823, 1898, 1971, 2042, 2111, 2179, 2245, 2310, 2373, 2435, 2497, 2557, 2616, 2674, 2732, 2788, 2844, 2899,  /* 0 - 31*/
                2953, 3006, 3059, 3111, 3163, 3214, 3264, 3314, 3363, 3412, 3460, 3508, 3556, 3603, 3649, 3695, 3741, 3786, 3831, 3875, 3920, 3963, 4007, 4050, 4093, 4135, 4177, 4219, 4261, 4302, 4343, 4384,  /* 32 - 63*/
                4424, 4464, 4504, 4544, 4584, 4623, 4662, 4700, 4739, 4777, 4815, 4853, 4891, 4928, 4965, 5002, 5039, 5076, 5112, 5149, 5185, 5221, 5256, 5292, 5327, 5363, 5398, 5433, 5467, 5502, 5536, 5571,  /* 64 - 95*/
                5605, 5639, 5673, 5706, 5740, 5773, 5807, 5840, 5873, 5906, 5938, 5971, 6003, 6036, 6068, 6100, 6132, 6164, 6196, 6227, 6259, 6290, 6322, 6353, 6384, 6415, 6446, 6477, 6507, 6538, 6568, 6599,  /* 96 - 127*/
                6629, 6659, 6689, 6719, 6749, 6779, 6808, 6838, 6868, 6897, 6926, 6956, 6985, 7014, 7043, 7072, 7100, 7129, 7158, 7186, 7215, 7243, 7272, 7300, 7328, 7356, 7384, 7412, 7440, 7468, 7496, 7524,  /* 128 - 159*/
                7552, 7580, 7608, 7636, 7664, 7692, 7720, 7748, 7776, 7804, 7832, 7860, 7888, 7916, 7944, 7972, 8000, 8028, 8056, 8084, 8112, 8140, 8168, 8196, 8224, 8252, 8280, 8308, 8336, 8364, 8392, 8420,  /* 160 - 191*/
                8448, 8476, 8504, 8532, 8560, 8588, 8616, 8644, 8672, 8700, 8728, 8756, 8784, 8812, 8840, 8868, 8896, 8924, 8952, 8980, 9008, 9036, 9064, 9092, 9120, 9148, 9176, 9204, 9232, 9260, 9288, 9316,  /* 192 - 223*/
                9344, 9372, 9400, 9428, 9456, 9484, 9512, 9540, 9568, 9596, 9624, 9652, 9680, 9708, 9736, 9764, 9792, 9820, 9848, 9876, 9904, 9932, 9960, 9988, 10016, 10044, 10072, 10100, 10128, 10156, 10184, 10212,  /* 224 - 255*/
                10240, 10268, 10296, 10324, 10352, 10380, 10408, 10436, 10464, 10492, 10520, 10548, 10576, 10604, 10632, 10660, 10688, 10716, 10744, 10772, 10800, 10828, 10856, 10884, 10912, 10940, 10968, 10996, 11024, 11052, 11080, 11108,  /* 256 - 287*/
                11136, 11164, 11192, 11220, 11248, 11276, 11304, 11332, 11360, 11388, 11416, 11444, 11472, 11500, 11528, 11556, 11584, 11612, 11640, 11668, 11696, 11724, 11752, 11780, 11808, 11836, 11864, 11892, 11920, 11948, 11976, 12004,  /* 288 - 319*/
                12032, 12060, 12088, 12116, 12144, 12172, 12200, 12228, 12256, 12284, 12312, 12340, 12368, 12396, 12424, 12452, 12480, 12508, 12536, 12564, 12592, 12620, 12648, 12676, 12704, 12732, 12760, 12788, 12816, 12844, 12872, 12900,  /* 320 - 351*/
                12928, 12956, 12984, 13012, 13040, 13068, 13096, 13124, 13152, 13180, 13208, 13236, 13264, 13292, 13320, 13348, 13376, 13404, 13432, 13460, 13488, 13516, 13544, 13572, 13600, 13628, 13656, 13684, 13712, 13740, 13768, 13796,  /* 352 - 383*/
                13824, 13852, 13880, 13908, 13936, 13964, 13992, 14020, 14048, 14076, 14104, 14132, 14160, 14188, 14216, 14244, 14272, 14300, 14328, 14356, 14384, 14412, 14440, 14468, 14496, 14524, 14552, 14580, 14608, 14636, 14664, 14692,  /* 384 - 415*/
                14720, 14748, 14776, 14804, 14832, 14860, 14888, 14916, 14944, 14972, 15000, 15028, 15056, 15084, 15112, 15140, 15168, 15196, 15224, 15252, 15280, 15308, 15336, 15364, 15392, 15420, 15448, 15476, 15504, 15532, 15560, 15588,  /* 416 - 447*/
                15616, 15644, 15672, 15700, 15728, 15756, 15784, 15812, 15840, 15868, 15896, 15924, 15952, 15980, 16008, 16036, 16064, 16092, 16120, 16148, 16176, 16204, 16232, 16260, 16288, 16316, 16344, 16372, 16400, 16428, 16456, 16484,  /* 448 - 479*/
                16512, 16540, 16568, 16596, 16624, 16652, 16680, 16708, 16736, 16764, 16792, 16820, 16848, 16876, 16904, 16932, 16960, 16988, 17016, 17044, 17072, 17100, 17128, 17156, 17184, 17212, 17240, 17268, 17296, 17324, 17352, 17380,  /* 480 - 511*/
                17408, 17436, 17464, 17492, 17520, 17548, 17576, 17604, 17632, 17660, 17688, 17716, 17744, 17772, 17800, 17828, 17856, 17884, 17912, 17940, 17968, 17996, 18024, 18052, 18080, 18108, 18136, 18164, 18192, 18220, 18248, 18276,  /* 512 - 543*/
                18304, 18332, 18360, 18388, 18416, 18444, 18472, 18500, 18528, 18556, 18584, 18612, 18640, 18668, 18696, 18724, 18752, 18780, 18808, 18836, 18864, 18892, 18920, 18948, 18976, 19004, 19032, 19060, 19088, 19116, 19144, 19172,  /* 544 - 575*/
                19200, 19228, 19256, 19284, 19312, 19340, 19368, 19396, 19424, 19452, 19480, 19508, 19536, 19564, 19592, 19620, 19648, 19676, 19704, 19732, 19760, 19788, 19816, 19844, 19872, 19900, 19928, 19956, 19984, 20012, 20040, 20068,  /* 576 - 607*/
                20096, 20124, 20152, 20180, 20208, 20236, 20264, 20292, 20320, 20348, 20376, 20404, 20432, 20460, 20488, 20516, 20544, 20572, 20600, 20628, 20656, 20684, 20712, 20740, 20768, 20796, 20824, 20852, 20880, 20908, 20936, 20964,  /* 608 - 639*/
                20992, 21020, 21048, 21076, 21104, 21132, 21160, 21188, 21216, 21244, 21272, 21300, 21328, 21356, 21384, 21412, 21440, 21468, 21496, 21524, 21552, 21580, 21608, 21636, 21664, 21692, 21720, 21748, 21776, 21804, 21832, 21860,  /* 640 - 671*/
                21888, 21916, 21944, 21972, 22000, 22028, 22056, 22084, 22112, 22140, 22168, 22196, 22224, 22252, 22280, 22308, 22336, 22364, 22392, 22420, 22448, 22476, 22504, 22532, 22560, 22588, 22616, 22644, 22672, 22700, 22728, 22756,  /* 672 - 703*/
                22784, 22812, 22840, 22868, 22896, 22924, 22952, 22980, 23008, 23036, 23064, 23092, 23120, 23148, 23176, 23204, 23232, 23260, 23288, 23316, 23344, 23372, 23400, 23428, 23456, 23484, 23512, 23540, 23568, 23596, 23624, 23652,  /* 704 - 735*/
                23680, 23708, 23736, 23764, 23792, 23820, 23848, 23876, 23904, 23932, 23960, 23988, 24016, 24044, 24072, 24100, 24128, 24156, 24184, 24212, 24240, 24268, 24296, 24324, 24352, 24380, 24408, 24436, 24464, 24492, 24520, 24548,  /* 736 - 767*/
                24576, 24604, 24632, 24660, 24688, 24716, 24744, 24772, 24800, 24829, 24857, 24885, 24913, 24941, 24969, 24998, 25026, 25054, 25082, 25111, 25139, 25167, 25195, 25224, 25252, 25280, 25309, 25337, 25366, 25394, 25422, 25451,  /* 768 - 799*/
                25479, 25508, 25536, 25565, 25593, 25622, 25650, 25679, 25708, 25736, 25765, 25794, 25822, 25851, 25880, 25908, 25937, 25966, 25994, 26023, 26052, 26081, 26110, 26139, 26167, 26196, 26225, 26254, 26283, 26312, 26341, 26370,  /* 800 - 831*/
                26399, 26428, 26457, 26486, 26515, 26544, 26574, 26603, 26632, 26661, 26690, 26719, 26749, 26778, 26807, 26837, 26866, 26895, 26925, 26954, 26983, 27013, 27042, 27072, 27101, 27131, 27160, 27190, 27220, 27249, 27279, 27309,  /* 832 - 863*/
                27338, 27368, 27398, 27427, 27457, 27487, 27517, 27547, 27576, 27606, 27636, 27666, 27696, 27726, 27756, 27786, 27816, 27846, 27877, 27907, 27937, 27967, 27997, 28028, 28058, 28088, 28119, 28149, 28179, 28210, 28240, 28271,  /* 864 - 895*/
                28301, 28332, 28362, 28393, 28424, 28454, 28485, 28516, 28547, 28577, 28608, 28639, 28670, 28701, 28732, 28763, 28794, 28825, 28856, 28887, 28918, 28950, 28981, 29012, 29043, 29075, 29106, 29138, 29169, 29201, 29232, 29264,  /* 896 - 927*/
                29295, 29327, 29359, 29390, 29422, 29454, 29486, 29518, 29550, 29582, 29614, 29646, 29678, 29710, 29743, 29775, 29807, 29840, 29872, 29905, 29937, 29970, 30003, 30035, 30068, 30101, 30134, 30167, 30200, 30233, 30266, 30299,  /* 928 - 959*/
                30333, 30366, 30399, 30433, 30466, 30500, 30534, 30567, 30601, 30635, 30669, 30703, 30737, 30771, 30806, 30840, 30874, 30909, 30944, 30978, 31013, 31048, 31083, 31118, 31154, 31189, 31225, 31260, 31296, 31332, 31368, 31404,  /* 960 - 991*/
                31440, 31476, 31513, 31550, 31586, 31623, 31661, 31698, 31736, 31773, 31811, 31849, 31888, 31926, 31965, 32004, 32044, 32084, 32124, 32164, 32205, 32246, 32288, 32330, 32373, 32417, 32461, 32506, 32553, 32601, 32651, 32704,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 391, 586, 742, 878, 1000, 1112, 1217, 1315, 1409, 1498, 1584, 1666, 1746, 1823, 1898, 1971, 2042, 2111, 2179, 2245, 2310, 2373, 2435, 2497, 2557, 2616, 2674, 2732, 2788, 2844, 2899,  /* 0 - 31*/
                2953, 3006, 3059, 3111, 3163, 3214, 3264, 3314, 3363, 3412, 3460, 3508, 3556, 3603, 3649, 3695, 3741, 3786, 3831, 3875, 3920, 3963, 4007, 4050, 4093, 4135, 4177, 4219, 4261, 4302, 4343, 4384,  /* 32 - 63*/
                4424, 4464, 4504, 4544, 4584, 4623, 4662, 4700, 4739, 4777, 4815, 4853, 4891, 4928, 4965, 5002, 5039, 5076, 5112, 5149, 5185, 5221, 5256, 5292, 5327, 5363, 5398, 5433, 5467, 5502, 5536, 5571,  /* 64 - 95*/
                5605, 5639, 5673, 5706, 5740, 5773, 5807, 5840, 5873, 5906, 5938, 5971, 6003, 6036, 6068, 6100, 6132, 6164, 6196, 6227, 6259, 6290, 6322, 6353, 6384, 6415, 6446, 6477, 6507, 6538, 6568, 6599,  /* 96 - 127*/
                6629, 6659, 6689, 6719, 6749, 6779, 6808, 6838, 6868, 6897, 6926, 6956, 6985, 7014, 7043, 7072, 7100, 7129, 7158, 7186, 7215, 7243, 7272, 7300, 7328, 7356, 7384, 7412, 7440, 7468, 7496, 7524,  /* 128 - 159*/
                7552, 7580, 7608, 7636, 7664, 7692, 7720, 7748, 7776, 7804, 7832, 7860, 7888, 7916, 7944, 7972, 8000, 8028, 8056, 8084, 8112, 8140, 8168, 8196, 8224, 8252, 8280, 8308, 8336, 8364, 8392, 8420,  /* 160 - 191*/
                8448, 8476, 8504, 8532, 8560, 8588, 8616, 8644, 8672, 8700, 8728, 8756, 8784, 8812, 8840, 8868, 8896, 8924, 8952, 8980, 9008, 9036, 9064, 9092, 9120, 9148, 9176, 9204, 9232, 9260, 9288, 9316,  /* 192 - 223*/
                9344, 9372, 9400, 9428, 9456, 9484, 9512, 9540, 9568, 9596, 9624, 9652, 9680, 9708, 9736, 9764, 9792, 9820, 9848, 9876, 9904, 9932, 9960, 9988, 10016, 10044, 10072, 10100, 10128, 10156, 10184, 10212,  /* 224 - 255*/
                10240, 10268, 10296, 10324, 10352, 10380, 10408, 10436, 10464, 10492, 10520, 10548, 10576, 10604, 10632, 10660, 10688, 10716, 10744, 10772, 10800, 10828, 10856, 10884, 10912, 10940, 10968, 10996, 11024, 11052, 11080, 11108,  /* 256 - 287*/
                11136, 11164, 11192, 11220, 11248, 11276, 11304, 11332, 11360, 11388, 11416, 11444, 11472, 11500, 11528, 11556, 11584, 11612, 11640, 11668, 11696, 11724, 11752, 11780, 11808, 11836, 11864, 11892, 11920, 11948, 11976, 12004,  /* 288 - 319*/
                12032, 12060, 12088, 12116, 12144, 12172, 12200, 12228, 12256, 12284, 12312, 12340, 12368, 12396, 12424, 12452, 12480, 12508, 12536, 12564, 12592, 12620, 12648, 12676, 12704, 12732, 12760, 12788, 12816, 12844, 12872, 12900,  /* 320 - 351*/
                12928, 12956, 12984, 13012, 13040, 13068, 13096, 13124, 13152, 13180, 13208, 13236, 13264, 13292, 13320, 13348, 13376, 13404, 13432, 13460, 13488, 13516, 13544, 13572, 13600, 13628, 13656, 13684, 13712, 13740, 13768, 13796,  /* 352 - 383*/
                13824, 13852, 13880, 13908, 13936, 13964, 13992, 14020, 14048, 14076, 14104, 14132, 14160, 14188, 14216, 14244, 14272, 14300, 14328, 14356, 14384, 14412, 14440, 14468, 14496, 14524, 14552, 14580, 14608, 14636, 14664, 14692,  /* 384 - 415*/
                14720, 14748, 14776, 14804, 14832, 14860, 14888, 14916, 14944, 14972, 15000, 15028, 15056, 15084, 15112, 15140, 15168, 15196, 15224, 15252, 15280, 15308, 15336, 15364, 15392, 15420, 15448, 15476, 15504, 15532, 15560, 15588,  /* 416 - 447*/
                15616, 15644, 15672, 15700, 15728, 15756, 15784, 15812, 15840, 15868, 15896, 15924, 15952, 15980, 16008, 16036, 16064, 16092, 16120, 16148, 16176, 16204, 16232, 16260, 16288, 16316, 16344, 16372, 16400, 16428, 16456, 16484,  /* 448 - 479*/
                16512, 16540, 16568, 16596, 16624, 16652, 16680, 16708, 16736, 16764, 16792, 16820, 16848, 16876, 16904, 16932, 16960, 16988, 17016, 17044, 17072, 17100, 17128, 17156, 17184, 17212, 17240, 17268, 17296, 17324, 17352, 17380,  /* 480 - 511*/
                17408, 17436, 17464, 17492, 17520, 17548, 17576, 17604, 17632, 17660, 17688, 17716, 17744, 17772, 17800, 17828, 17856, 17884, 17912, 17940, 17968, 17996, 18024, 18052, 18080, 18108, 18136, 18164, 18192, 18220, 18248, 18276,  /* 512 - 543*/
                18304, 18332, 18360, 18388, 18416, 18444, 18472, 18500, 18528, 18556, 18584, 18612, 18640, 18668, 18696, 18724, 18752, 18780, 18808, 18836, 18864, 18892, 18920, 18948, 18976, 19004, 19032, 19060, 19088, 19116, 19144, 19172,  /* 544 - 575*/
                19200, 19228, 19256, 19284, 19312, 19340, 19368, 19396, 19424, 19452, 19480, 19508, 19536, 19564, 19592, 19620, 19648, 19676, 19704, 19732, 19760, 19788, 19816, 19844, 19872, 19900, 19928, 19956, 19984, 20012, 20040, 20068,  /* 576 - 607*/
                20096, 20124, 20152, 20180, 20208, 20236, 20264, 20292, 20320, 20348, 20376, 20404, 20432, 20460, 20488, 20516, 20544, 20572, 20600, 20628, 20656, 20684, 20712, 20740, 20768, 20796, 20824, 20852, 20880, 20908, 20936, 20964,  /* 608 - 639*/
                20992, 21020, 21048, 21076, 21104, 21132, 21160, 21188, 21216, 21244, 21272, 21300, 21328, 21356, 21384, 21412, 21440, 21468, 21496, 21524, 21552, 21580, 21608, 21636, 21664, 21692, 21720, 21748, 21776, 21804, 21832, 21860,  /* 640 - 671*/
                21888, 21916, 21944, 21972, 22000, 22028, 22056, 22084, 22112, 22140, 22168, 22196, 22224, 22252, 22280, 22308, 22336, 22364, 22392, 22420, 22448, 22476, 22504, 22532, 22560, 22588, 22616, 22644, 22672, 22700, 22728, 22756,  /* 672 - 703*/
                22784, 22812, 22840, 22868, 22896, 22924, 22952, 22980, 23008, 23036, 23064, 23092, 23120, 23148, 23176, 23204, 23232, 23260, 23288, 23316, 23344, 23372, 23400, 23428, 23456, 23484, 23512, 23540, 23568, 23596, 23624, 23652,  /* 704 - 735*/
                23680, 23708, 23736, 23764, 23792, 23820, 23848, 23876, 23904, 23932, 23960, 23988, 24016, 24044, 24072, 24100, 24128, 24156, 24184, 24212, 24240, 24268, 24296, 24324, 24352, 24380, 24408, 24436, 24464, 24492, 24520, 24548,  /* 736 - 767*/
                24576, 24604, 24632, 24660, 24688, 24716, 24744, 24772, 24800, 24829, 24857, 24885, 24913, 24941, 24969, 24998, 25026, 25054, 25082, 25111, 25139, 25167, 25195, 25224, 25252, 25280, 25309, 25337, 25366, 25394, 25422, 25451,  /* 768 - 799*/
                25479, 25508, 25536, 25565, 25593, 25622, 25650, 25679, 25708, 25736, 25765, 25794, 25822, 25851, 25880, 25908, 25937, 25966, 25994, 26023, 26052, 26081, 26110, 26139, 26167, 26196, 26225, 26254, 26283, 26312, 26341, 26370,  /* 800 - 831*/
                26399, 26428, 26457, 26486, 26515, 26544, 26574, 26603, 26632, 26661, 26690, 26719, 26749, 26778, 26807, 26837, 26866, 26895, 26925, 26954, 26983, 27013, 27042, 27072, 27101, 27131, 27160, 27190, 27220, 27249, 27279, 27309,  /* 832 - 863*/
                27338, 27368, 27398, 27427, 27457, 27487, 27517, 27547, 27576, 27606, 27636, 27666, 27696, 27726, 27756, 27786, 27816, 27846, 27877, 27907, 27937, 27967, 27997, 28028, 28058, 28088, 28119, 28149, 28179, 28210, 28240, 28271,  /* 864 - 895*/
                28301, 28332, 28362, 28393, 28424, 28454, 28485, 28516, 28547, 28577, 28608, 28639, 28670, 28701, 28732, 28763, 28794, 28825, 28856, 28887, 28918, 28950, 28981, 29012, 29043, 29075, 29106, 29138, 29169, 29201, 29232, 29264,  /* 896 - 927*/
                29295, 29327, 29359, 29390, 29422, 29454, 29486, 29518, 29550, 29582, 29614, 29646, 29678, 29710, 29743, 29775, 29807, 29840, 29872, 29905, 29937, 29970, 30003, 30035, 30068, 30101, 30134, 30167, 30200, 30233, 30266, 30299,  /* 928 - 959*/
                30333, 30366, 30399, 30433, 30466, 30500, 30534, 30567, 30601, 30635, 30669, 30703, 30737, 30771, 30806, 30840, 30874, 30909, 30944, 30978, 31013, 31048, 31083, 31118, 31154, 31189, 31225, 31260, 31296, 31332, 31368, 31404,  /* 960 - 991*/
                31440, 31476, 31513, 31550, 31586, 31623, 31661, 31698, 31736, 31773, 31811, 31849, 31888, 31926, 31965, 32004, 32044, 32084, 32124, 32164, 32205, 32246, 32288, 32330, 32373, 32417, 32461, 32506, 32553, 32601, 32651, 32704,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
            0, 573, 819, 1008, 1169, 1311, 1440, 1558, 1669, 1773, 1872, 1966, 2056, 2142, 2225, 2305, 2383, 2459, 2532, 2603, 2673, 2741, 2807, 2872, 2935, 2997, 3058, 3118, 3177, 3235, 3292, 3348,  /* 0 - 31*/
            3403, 3457, 3510, 3563, 3615, 3666, 3717, 3767, 3816, 3865, 3913, 3961, 4008, 4054, 4100, 4146, 4191, 4236, 4280, 4324, 4367, 4410, 4452, 4495, 4536, 4578, 4619, 4660, 4700, 4740, 4780, 4819,  /* 32 - 63*/
            4859, 4897, 4936, 4974, 5012, 5050, 5088, 5125, 5162, 5198, 5235, 5271, 5307, 5343, 5378, 5414, 5449, 5484, 5518, 5553, 5587, 5621, 5655, 5689, 5722, 5756, 5789, 5822, 5855, 5887, 5920, 5952,  /* 64 - 95*/
            5984, 6016, 6048, 6079, 6111, 6142, 6173, 6204, 6235, 6266, 6297, 6327, 6357, 6388, 6418, 6447, 6477, 6507, 6536, 6566, 6595, 6624, 6653, 6682, 6711, 6740, 6768, 6797, 6825, 6853, 6881, 6909,  /* 96 - 127*/
            6937, 6965, 6993, 7020, 7048, 7075, 7102, 7130, 7157, 7184, 7211, 7237, 7264, 7291, 7317, 7344, 7370, 7396, 7422, 7449, 7475, 7500, 7526, 7552, 7578, 7603, 7629, 7654, 7680, 7705, 7731, 7756,  /* 128 - 159*/
            7782, 7807, 7833, 7858, 7884, 7909, 7935, 7960, 7986, 8011, 8037, 8062, 8087, 8113, 8138, 8164, 8189, 8215, 8240, 8266, 8291, 8317, 8342, 8368, 8393, 8419, 8444, 8470, 8495, 8521, 8546, 8572,  /* 160 - 191*/
            8597, 8623, 8648, 8674, 8699, 8725, 8750, 8776, 8801, 8827, 8852, 8878, 8903, 8929, 8954, 8979, 9005, 9030, 9056, 9081, 9107, 9132, 9158, 9183, 9209, 9234, 9260, 9285, 9311, 9336, 9362, 9387,  /* 192 - 223*/
            9413, 9438, 9464, 9489, 9515, 9540, 9566, 9591, 9617, 9642, 9668, 9693, 9719, 9744, 9770, 9795, 9821, 9846, 9871, 9897, 9922, 9948, 9973, 9999, 10024, 10050, 10075, 10101, 10126, 10152, 10177, 10203,  /* 224 - 255*/
            10228, 10254, 10279, 10305, 10330, 10356, 10381, 10407, 10432, 10458, 10483, 10509, 10534, 10560, 10585, 10611, 10636, 10662, 10687, 10713, 10738, 10763, 10789, 10814, 10840, 10865, 10891, 10916, 10942, 10967, 10993, 11018,  /* 256 - 287*/
            11044, 11069, 11095, 11120, 11146, 11171, 11197, 11222, 11248, 11273, 11299, 11324, 11350, 11375, 11401, 11426, 11452, 11477, 11503, 11528, 11554, 11579, 11605, 11630, 11655, 11681, 11706, 11732, 11757, 11783, 11808, 11834,  /* 288 - 319*/
            11859, 11885, 11910, 11936, 11961, 11987, 12012, 12038, 12063, 12089, 12114, 12140, 12165, 12191, 12216, 12242, 12267, 12293, 12318, 12344, 12369, 12395, 12420, 12446, 12471, 12497, 12522, 12547, 12573, 12598, 12624, 12649,  /* 320 - 351*/
            12675, 12700, 12726, 12751, 12777, 12802, 12828, 12853, 12879, 12904, 12930, 12955, 12981, 13006, 13032, 13057, 13083, 13108, 13134, 13159, 13185, 13210, 13236, 13261, 13287, 13312, 13338, 13363, 13389, 13414, 13439, 13465,  /* 352 - 383*/
            13490, 13516, 13541, 13567, 13592, 13618, 13643, 13669, 13694, 13720, 13745, 13771, 13796, 13822, 13847, 13873, 13898, 13924, 13949, 13975, 14000, 14026, 14051, 14077, 14102, 14128, 14153, 14179, 14204, 14230, 14255, 14281,  /* 384 - 415*/
            14306, 14331, 14357, 14382, 14408, 14433, 14459, 14484, 14510, 14535, 14561, 14586, 14612, 14637, 14663, 14688, 14714, 14739, 14765, 14790, 14816, 14841, 14867, 14892, 14918, 14943, 14969, 14994, 15020, 15045, 15071, 15096,  /* 416 - 447*/
            15122, 15147, 15173, 15198, 15223, 15249, 15274, 15300, 15325, 15351, 15376, 15402, 15427, 15453, 15478, 15504, 15529, 15555, 15580, 15606, 15631, 15657, 15682, 15708, 15733, 15759, 15784, 15810, 15835, 15861, 15886, 15912,  /* 448 - 479*/
            15937, 15963, 15988, 16014, 16039, 16065, 16090, 16115, 16141, 16166, 16192, 16217, 16243, 16268, 16294, 16319, 16345, 16370, 16396, 16421, 16447, 16472, 16498, 16523, 16549, 16574, 16600, 16625, 16651, 16676, 16702, 16727,  /* 480 - 511*/
            16753, 16778, 16804, 16829, 16855, 16880, 16906, 16931, 16957, 16982, 17007, 17033, 17058, 17084, 17109, 17135, 17160, 17186, 17211, 17237, 17262, 17288, 17313, 17339, 17364, 17390, 17415, 17441, 17466, 17492, 17517, 17543,  /* 512 - 543*/
            17568, 17594, 17619, 17645, 17670, 17696, 17721, 17747, 17772, 17798, 17823, 17849, 17874, 17899, 17925, 17950, 17976, 18001, 18027, 18052, 18078, 18103, 18129, 18154, 18180, 18205, 18231, 18256, 18282, 18307, 18333, 18358,  /* 544 - 575*/
            18384, 18409, 18435, 18460, 18486, 18511, 18537, 18562, 18588, 18613, 18639, 18664, 18690, 18715, 18741, 18766, 18791, 18817, 18842, 18868, 18893, 18919, 18944, 18970, 18995, 19021, 19046, 19072, 19097, 19123, 19148, 19174,  /* 576 - 607*/
            19199, 19225, 19250, 19276, 19301, 19327, 19352, 19378, 19403, 19429, 19454, 19480, 19505, 19531, 19556, 19582, 19607, 19633, 19658, 19683, 19709, 19734, 19760, 19785, 19811, 19836, 19862, 19887, 19913, 19938, 19964, 19989,  /* 608 - 639*/
            20015, 20040, 20066, 20091, 20117, 20142, 20168, 20193, 20219, 20244, 20270, 20295, 20321, 20346, 20372, 20397, 20423, 20448, 20474, 20499, 20525, 20550, 20575, 20601, 20626, 20652, 20677, 20703, 20728, 20754, 20779, 20805,  /* 640 - 671*/
            20830, 20856, 20881, 20907, 20932, 20958, 20983, 21009, 21034, 21060, 21085, 21111, 21136, 21162, 21187, 21213, 21238, 21264, 21289, 21315, 21340, 21366, 21391, 21417, 21442, 21467, 21493, 21518, 21544, 21569, 21595, 21620,  /* 672 - 703*/
            21646, 21671, 21697, 21722, 21748, 21773, 21799, 21824, 21850, 21875, 21901, 21926, 21952, 21977, 22003, 22028, 22054, 22079, 22105, 22130, 22156, 22181, 22207, 22232, 22258, 22283, 22309, 22334, 22359, 22385, 22410, 22436,  /* 704 - 735*/
            22461, 22487, 22512, 22538, 22563, 22589, 22614, 22640, 22665, 22691, 22716, 22742, 22767, 22793, 22818, 22844, 22869, 22895, 22920, 22946, 22971, 22997, 23022, 23048, 23073, 23099, 23124, 23150, 23175, 23201, 23226, 23251,  /* 736 - 767*/
            23277, 23302, 23328, 23353, 23379, 23404, 23430, 23455, 23481, 23506, 23532, 23557, 23583, 23608, 23634, 23659, 23685, 23710, 23736, 23761, 23787, 23812, 23838, 23863, 23889, 23914, 23940, 23965, 23991, 24016, 24042, 24067,  /* 768 - 799*/
            24093, 24118, 24143, 24169, 24194, 24220, 24245, 24271, 24296, 24322, 24347, 24373, 24398, 24424, 24449, 24475, 24500, 24526, 24551, 24577, 24602, 24628, 24653, 24679, 24704, 24730, 24755, 24781, 24806, 24832, 24857, 24883,  /* 800 - 831*/
            24908, 24934, 24959, 24985, 25010, 25035, 25061, 25086, 25112, 25137, 25163, 25188, 25214, 25239, 25265, 25290, 25316, 25341, 25367, 25392, 25418, 25443, 25469, 25494, 25520, 25545, 25571, 25596, 25622, 25647, 25673, 25698,  /* 832 - 863*/
            25724, 25749, 25775, 25800, 25826, 25851, 25877, 25902, 25928, 25953, 25979, 26005, 26031, 26057, 26083, 26109, 26135, 26161, 26187, 26214, 26240, 26267, 26293, 26320, 26347, 26374, 26401, 26428, 26455, 26482, 26510, 26537,  /* 864 - 895*/
            26565, 26592, 26620, 26648, 26676, 26704, 26732, 26760, 26788, 26817, 26845, 26874, 26903, 26931, 26960, 26989, 27018, 27048, 27077, 27107, 27136, 27166, 27196, 27226, 27256, 27286, 27316, 27347, 27377, 27408, 27439, 27470,  /* 896 - 927*/
            27501, 27532, 27564, 27595, 27627, 27659, 27691, 27723, 27756, 27788, 27821, 27853, 27886, 27920, 27953, 27986, 28020, 28054, 28088, 28122, 28157, 28191, 28226, 28261, 28296, 28332, 28367, 28403, 28439, 28476, 28512, 28549,  /* 928 - 959*/
            28586, 28623, 28661, 28699, 28737, 28775, 28814, 28853, 28892, 28932, 28971, 29012, 29052, 29093, 29134, 29176, 29217, 29260, 29302, 29345, 29389, 29433, 29477, 29522, 29567, 29613, 29659, 29706, 29753, 29801, 29850, 29899,  /* 960 - 991*/
            29949, 29999, 30051, 30102, 30155, 30209, 30263, 30318, 30375, 30432, 30490, 30550, 30610, 30672, 30736, 30801, 30868, 30936, 31007, 31079, 31155, 31233, 31314, 31398, 31487, 31581, 31681, 31788, 31906, 32037, 32190, 32387,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
            },
            {
            0, 300, 461, 594, 710, 816, 914, 1006, 1094, 1177, 1257, 1333, 1408, 1480, 1549, 1617, 1684, 1748, 1812, 1874, 1935, 1994, 2053, 2110, 2167, 2223, 2278, 2332, 2385, 2438, 2490, 2541,  /* 0 - 31*/
            2592, 2642, 2692, 2741, 2789, 2837, 2885, 2932, 2978, 3024, 3070, 3115, 3160, 3205, 3249, 3293, 3336, 3379, 3422, 3464, 3507, 3548, 3590, 3631, 3672, 3713, 3753, 3793, 3833, 3873, 3912, 3951,  /* 32 - 63*/
            3990, 4029, 4067, 4106, 4144, 4182, 4219, 4257, 4294, 4331, 4368, 4404, 4441, 4477, 4513, 4549, 4585, 4620, 4656, 4691, 4726, 4761, 4796, 4831, 4865, 4899, 4934, 4968, 5002, 5035, 5069, 5103,  /* 64 - 95*/
            5136, 5169, 5202, 5235, 5268, 5301, 5333, 5366, 5398, 5430, 5463, 5495, 5527, 5558, 5590, 5622, 5653, 5684, 5716, 5747, 5778, 5809, 5840, 5870, 5901, 5932, 5962, 5993, 6023, 6053, 6083, 6113,  /* 96 - 127*/
            6143, 6173, 6203, 6232, 6262, 6291, 6321, 6350, 6379, 6408, 6438, 6467, 6495, 6524, 6553, 6582, 6610, 6639, 6667, 6696, 6724, 6752, 6780, 6809, 6837, 6865, 6892, 6920, 6948, 6976, 7004, 7032,  /* 128 - 159*/
            7060, 7088, 7116, 7143, 7171, 7199, 7227, 7255, 7283, 7311, 7339, 7366, 7394, 7422, 7450, 7478, 7506, 7534, 7562, 7590, 7617, 7645, 7673, 7701, 7729, 7757, 7785, 7813, 7841, 7868, 7896, 7924,  /* 160 - 191*/
            7952, 7980, 8008, 8036, 8064, 8092, 8119, 8147, 8175, 8203, 8231, 8259, 8287, 8315, 8342, 8370, 8398, 8426, 8454, 8482, 8510, 8538, 8566, 8593, 8621, 8649, 8677, 8705, 8733, 8761, 8789, 8817,  /* 192 - 223*/
            8844, 8872, 8900, 8928, 8956, 8984, 9012, 9040, 9068, 9095, 9123, 9151, 9179, 9207, 9235, 9263, 9291, 9318, 9346, 9374, 9402, 9430, 9458, 9486, 9514, 9542, 9569, 9597, 9625, 9653, 9681, 9709,  /* 224 - 255*/
            9737, 9765, 9793, 9820, 9848, 9876, 9904, 9932, 9960, 9988, 10016, 10044, 10071, 10099, 10127, 10155, 10183, 10211, 10239, 10267, 10294, 10322, 10350, 10378, 10406, 10434, 10462, 10490, 10518, 10545, 10573, 10601,  /* 256 - 287*/
            10629, 10657, 10685, 10713, 10741, 10769, 10796, 10824, 10852, 10880, 10908, 10936, 10964, 10992, 11020, 11047, 11075, 11103, 11131, 11159, 11187, 11215, 11243, 11270, 11298, 11326, 11354, 11382, 11410, 11438, 11466, 11494,  /* 288 - 319*/
            11521, 11549, 11577, 11605, 11633, 11661, 11689, 11717, 11745, 11772, 11800, 11828, 11856, 11884, 11912, 11940, 11968, 11996, 12023, 12051, 12079, 12107, 12135, 12163, 12191, 12219, 12246, 12274, 12302, 12330, 12358, 12386,  /* 320 - 351*/
            12414, 12442, 12470, 12497, 12525, 12553, 12581, 12609, 12637, 12665, 12693, 12721, 12748, 12776, 12804, 12832, 12860, 12888, 12916, 12944, 12972, 12999, 13027, 13055, 13083, 13111, 13139, 13167, 13195, 13222, 13250, 13278,  /* 352 - 383*/
            13306, 13334, 13362, 13390, 13418, 13446, 13473, 13501, 13529, 13557, 13585, 13613, 13641, 13669, 13697, 13724, 13752, 13780, 13808, 13836, 13864, 13892, 13920, 13948, 13975, 14003, 14031, 14059, 14087, 14115, 14143, 14171,  /* 384 - 415*/
            14198, 14226, 14254, 14282, 14310, 14338, 14366, 14394, 14422, 14449, 14477, 14505, 14533, 14561, 14589, 14617, 14645, 14673, 14700, 14728, 14756, 14784, 14812, 14840, 14868, 14896, 14924, 14951, 14979, 15007, 15035, 15063,  /* 416 - 447*/
            15091, 15119, 15147, 15174, 15202, 15230, 15258, 15286, 15314, 15342, 15370, 15398, 15425, 15453, 15481, 15509, 15537, 15565, 15593, 15621, 15649, 15676, 15704, 15732, 15760, 15788, 15816, 15844, 15872, 15900, 15927, 15955,  /* 448 - 479*/
            15983, 16011, 16039, 16067, 16095, 16123, 16150, 16178, 16206, 16234, 16262, 16290, 16318, 16346, 16374, 16401, 16429, 16457, 16485, 16513, 16541, 16569, 16597, 16625, 16652, 16680, 16708, 16736, 16764, 16792, 16820, 16848,  /* 480 - 511*/
            16876, 16903, 16931, 16959, 16987, 17015, 17043, 17071, 17099, 17126, 17154, 17182, 17210, 17238, 17266, 17294, 17322, 17350, 17377, 17405, 17433, 17461, 17489, 17517, 17545, 17573, 17601, 17628, 17656, 17684, 17712, 17740,  /* 512 - 543*/
            17768, 17796, 17824, 17852, 17879, 17907, 17935, 17963, 17991, 18019, 18047, 18075, 18102, 18130, 18158, 18186, 18214, 18242, 18270, 18298, 18326, 18353, 18381, 18409, 18437, 18465, 18493, 18521, 18549, 18577, 18604, 18632,  /* 544 - 575*/
            18660, 18688, 18716, 18744, 18772, 18800, 18828, 18855, 18883, 18911, 18939, 18967, 18995, 19023, 19051, 19078, 19106, 19134, 19162, 19190, 19218, 19246, 19274, 19302, 19329, 19357, 19385, 19413, 19441, 19469, 19497, 19525,  /* 576 - 607*/
            19553, 19580, 19608, 19636, 19664, 19692, 19720, 19748, 19776, 19804, 19831, 19859, 19887, 19915, 19943, 19971, 19999, 20027, 20054, 20082, 20110, 20138, 20166, 20194, 20222, 20250, 20278, 20305, 20333, 20361, 20389, 20417,  /* 608 - 639*/
            20445, 20473, 20501, 20529, 20556, 20584, 20612, 20640, 20668, 20696, 20724, 20752, 20780, 20807, 20835, 20863, 20891, 20919, 20947, 20975, 21003, 21030, 21058, 21086, 21114, 21142, 21170, 21198, 21226, 21254, 21281, 21309,  /* 640 - 671*/
            21337, 21365, 21393, 21421, 21449, 21477, 21505, 21532, 21560, 21588, 21616, 21644, 21672, 21700, 21728, 21756, 21783, 21811, 21839, 21867, 21895, 21923, 21951, 21979, 22006, 22034, 22062, 22090, 22118, 22146, 22174, 22202,  /* 672 - 703*/
            22230, 22257, 22285, 22313, 22341, 22369, 22397, 22425, 22453, 22481, 22508, 22536, 22564, 22592, 22620, 22648, 22676, 22704, 22732, 22759, 22787, 22815, 22843, 22871, 22899, 22927, 22955, 22982, 23010, 23038, 23066, 23094,  /* 704 - 735*/
            23122, 23150, 23178, 23206, 23233, 23261, 23289, 23317, 23345, 23373, 23401, 23429, 23457, 23484, 23512, 23540, 23568, 23596, 23624, 23652, 23680, 23708, 23735, 23763, 23791, 23819, 23847, 23875, 23903, 23931, 23958, 23986,  /* 736 - 767*/
            24014, 24042, 24070, 24098, 24126, 24154, 24182, 24209, 24237, 24265, 24293, 24321, 24349, 24377, 24405, 24433, 24460, 24488, 24516, 24544, 24572, 24600, 24628, 24656, 24684, 24711, 24739, 24767, 24795, 24823, 24851, 24879,  /* 768 - 799*/
            24907, 24934, 24962, 24990, 25018, 25046, 25074, 25102, 25130, 25158, 25185, 25213, 25241, 25269, 25297, 25325, 25353, 25381, 25409, 25436, 25464, 25492, 25520, 25548, 25576, 25604, 25632, 25660, 25687, 25715, 25743, 25771,  /* 800 - 831*/
            25799, 25827, 25855, 25883, 25910, 25938, 25966, 25994, 26022, 26050, 26078, 26106, 26134, 26161, 26189, 26217, 26245, 26273, 26301, 26329, 26357, 26385, 26412, 26440, 26468, 26496, 26524, 26552, 26580, 26608, 26636, 26663,  /* 832 - 863*/
            26691, 26719, 26747, 26775, 26803, 26831, 26859, 26887, 26914, 26942, 26970, 26999, 27027, 27055, 27083, 27111, 27140, 27168, 27197, 27225, 27254, 27282, 27311, 27340, 27369, 27398, 27426, 27455, 27484, 27514, 27543, 27572,  /* 864 - 895*/
            27601, 27631, 27660, 27689, 27719, 27749, 27778, 27808, 27838, 27868, 27898, 27928, 27958, 27988, 28018, 28048, 28079, 28109, 28140, 28170, 28201, 28232, 28263, 28293, 28324, 28355, 28387, 28418, 28449, 28481, 28512, 28544,  /* 896 - 927*/
            28575, 28607, 28639, 28671, 28703, 28735, 28767, 28800, 28832, 28865, 28897, 28930, 28963, 28996, 29029, 29062, 29095, 29129, 29162, 29196, 29230, 29263, 29297, 29332, 29366, 29400, 29435, 29469, 29504, 29539, 29574, 29609,  /* 928 - 959*/
            29645, 29680, 29716, 29752, 29788, 29824, 29860, 29897, 29933, 29970, 30007, 30044, 30082, 30119, 30157, 30195, 30234, 30272, 30311, 30350, 30389, 30428, 30468, 30508, 30548, 30588, 30629, 30670, 30711, 30753, 30795, 30837,  /* 960 - 991*/
            30880, 30923, 30966, 31010, 31054, 31099, 31144, 31190, 31236, 31283, 31330, 31378, 31426, 31475, 31525, 31575, 31627, 31679, 31732, 31787, 31842, 31899, 31957, 32017, 32078, 32142, 32209, 32278, 32352, 32430, 32517, 32619,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
            },
            {
            0, 300, 461, 594, 710, 816, 914, 1006, 1094, 1177, 1257, 1333, 1408, 1480, 1549, 1617, 1684, 1748, 1812, 1874, 1935, 1994, 2053, 2110, 2167, 2223, 2278, 2332, 2385, 2438, 2490, 2541,  /* 0 - 31*/
            2592, 2642, 2692, 2741, 2789, 2837, 2885, 2932, 2978, 3024, 3070, 3115, 3160, 3205, 3249, 3293, 3336, 3379, 3422, 3464, 3507, 3548, 3590, 3631, 3672, 3713, 3753, 3793, 3833, 3873, 3912, 3951,  /* 32 - 63*/
            3990, 4029, 4067, 4106, 4144, 4182, 4219, 4257, 4294, 4331, 4368, 4404, 4441, 4477, 4513, 4549, 4585, 4620, 4656, 4691, 4726, 4761, 4796, 4831, 4865, 4899, 4934, 4968, 5002, 5035, 5069, 5103,  /* 64 - 95*/
            5136, 5169, 5202, 5235, 5268, 5301, 5333, 5366, 5398, 5430, 5463, 5495, 5527, 5558, 5590, 5622, 5653, 5684, 5716, 5747, 5778, 5809, 5840, 5870, 5901, 5932, 5962, 5993, 6023, 6053, 6083, 6113,  /* 96 - 127*/
            6143, 6173, 6203, 6232, 6262, 6291, 6321, 6350, 6379, 6408, 6438, 6467, 6495, 6524, 6553, 6582, 6610, 6639, 6667, 6696, 6724, 6752, 6780, 6809, 6837, 6865, 6892, 6920, 6948, 6976, 7004, 7032,  /* 128 - 159*/
            7060, 7088, 7116, 7143, 7171, 7199, 7227, 7255, 7283, 7311, 7339, 7366, 7394, 7422, 7450, 7478, 7506, 7534, 7562, 7590, 7617, 7645, 7673, 7701, 7729, 7757, 7785, 7813, 7841, 7868, 7896, 7924,  /* 160 - 191*/
            7952, 7980, 8008, 8036, 8064, 8092, 8119, 8147, 8175, 8203, 8231, 8259, 8287, 8315, 8342, 8370, 8398, 8426, 8454, 8482, 8510, 8538, 8566, 8593, 8621, 8649, 8677, 8705, 8733, 8761, 8789, 8817,  /* 192 - 223*/
            8844, 8872, 8900, 8928, 8956, 8984, 9012, 9040, 9068, 9095, 9123, 9151, 9179, 9207, 9235, 9263, 9291, 9318, 9346, 9374, 9402, 9430, 9458, 9486, 9514, 9542, 9569, 9597, 9625, 9653, 9681, 9709,  /* 224 - 255*/
            9737, 9765, 9793, 9820, 9848, 9876, 9904, 9932, 9960, 9988, 10016, 10044, 10071, 10099, 10127, 10155, 10183, 10211, 10239, 10267, 10294, 10322, 10350, 10378, 10406, 10434, 10462, 10490, 10518, 10545, 10573, 10601,  /* 256 - 287*/
            10629, 10657, 10685, 10713, 10741, 10769, 10796, 10824, 10852, 10880, 10908, 10936, 10964, 10992, 11020, 11047, 11075, 11103, 11131, 11159, 11187, 11215, 11243, 11270, 11298, 11326, 11354, 11382, 11410, 11438, 11466, 11494,  /* 288 - 319*/
            11521, 11549, 11577, 11605, 11633, 11661, 11689, 11717, 11745, 11772, 11800, 11828, 11856, 11884, 11912, 11940, 11968, 11996, 12023, 12051, 12079, 12107, 12135, 12163, 12191, 12219, 12246, 12274, 12302, 12330, 12358, 12386,  /* 320 - 351*/
            12414, 12442, 12470, 12497, 12525, 12553, 12581, 12609, 12637, 12665, 12693, 12721, 12748, 12776, 12804, 12832, 12860, 12888, 12916, 12944, 12972, 12999, 13027, 13055, 13083, 13111, 13139, 13167, 13195, 13222, 13250, 13278,  /* 352 - 383*/
            13306, 13334, 13362, 13390, 13418, 13446, 13473, 13501, 13529, 13557, 13585, 13613, 13641, 13669, 13697, 13724, 13752, 13780, 13808, 13836, 13864, 13892, 13920, 13948, 13975, 14003, 14031, 14059, 14087, 14115, 14143, 14171,  /* 384 - 415*/
            14198, 14226, 14254, 14282, 14310, 14338, 14366, 14394, 14422, 14449, 14477, 14505, 14533, 14561, 14589, 14617, 14645, 14673, 14700, 14728, 14756, 14784, 14812, 14840, 14868, 14896, 14924, 14951, 14979, 15007, 15035, 15063,  /* 416 - 447*/
            15091, 15119, 15147, 15174, 15202, 15230, 15258, 15286, 15314, 15342, 15370, 15398, 15425, 15453, 15481, 15509, 15537, 15565, 15593, 15621, 15649, 15676, 15704, 15732, 15760, 15788, 15816, 15844, 15872, 15900, 15927, 15955,  /* 448 - 479*/
            15983, 16011, 16039, 16067, 16095, 16123, 16150, 16178, 16206, 16234, 16262, 16290, 16318, 16346, 16374, 16401, 16429, 16457, 16485, 16513, 16541, 16569, 16597, 16625, 16652, 16680, 16708, 16736, 16764, 16792, 16820, 16848,  /* 480 - 511*/
            16876, 16903, 16931, 16959, 16987, 17015, 17043, 17071, 17099, 17126, 17154, 17182, 17210, 17238, 17266, 17294, 17322, 17350, 17377, 17405, 17433, 17461, 17489, 17517, 17545, 17573, 17601, 17628, 17656, 17684, 17712, 17740,  /* 512 - 543*/
            17768, 17796, 17824, 17852, 17879, 17907, 17935, 17963, 17991, 18019, 18047, 18075, 18102, 18130, 18158, 18186, 18214, 18242, 18270, 18298, 18326, 18353, 18381, 18409, 18437, 18465, 18493, 18521, 18549, 18577, 18604, 18632,  /* 544 - 575*/
            18660, 18688, 18716, 18744, 18772, 18800, 18828, 18855, 18883, 18911, 18939, 18967, 18995, 19023, 19051, 19078, 19106, 19134, 19162, 19190, 19218, 19246, 19274, 19302, 19329, 19357, 19385, 19413, 19441, 19469, 19497, 19525,  /* 576 - 607*/
            19553, 19580, 19608, 19636, 19664, 19692, 19720, 19748, 19776, 19804, 19831, 19859, 19887, 19915, 19943, 19971, 19999, 20027, 20054, 20082, 20110, 20138, 20166, 20194, 20222, 20250, 20278, 20305, 20333, 20361, 20389, 20417,  /* 608 - 639*/
            20445, 20473, 20501, 20529, 20556, 20584, 20612, 20640, 20668, 20696, 20724, 20752, 20780, 20807, 20835, 20863, 20891, 20919, 20947, 20975, 21003, 21030, 21058, 21086, 21114, 21142, 21170, 21198, 21226, 21254, 21281, 21309,  /* 640 - 671*/
            21337, 21365, 21393, 21421, 21449, 21477, 21505, 21532, 21560, 21588, 21616, 21644, 21672, 21700, 21728, 21756, 21783, 21811, 21839, 21867, 21895, 21923, 21951, 21979, 22006, 22034, 22062, 22090, 22118, 22146, 22174, 22202,  /* 672 - 703*/
            22230, 22257, 22285, 22313, 22341, 22369, 22397, 22425, 22453, 22481, 22508, 22536, 22564, 22592, 22620, 22648, 22676, 22704, 22732, 22759, 22787, 22815, 22843, 22871, 22899, 22927, 22955, 22982, 23010, 23038, 23066, 23094,  /* 704 - 735*/
            23122, 23150, 23178, 23206, 23233, 23261, 23289, 23317, 23345, 23373, 23401, 23429, 23457, 23484, 23512, 23540, 23568, 23596, 23624, 23652, 23680, 23708, 23735, 23763, 23791, 23819, 23847, 23875, 23903, 23931, 23958, 23986,  /* 736 - 767*/
            24014, 24042, 24070, 24098, 24126, 24154, 24182, 24209, 24237, 24265, 24293, 24321, 24349, 24377, 24405, 24433, 24460, 24488, 24516, 24544, 24572, 24600, 24628, 24656, 24684, 24711, 24739, 24767, 24795, 24823, 24851, 24879,  /* 768 - 799*/
            24907, 24934, 24962, 24990, 25018, 25046, 25074, 25102, 25130, 25158, 25185, 25213, 25241, 25269, 25297, 25325, 25353, 25381, 25409, 25436, 25464, 25492, 25520, 25548, 25576, 25604, 25632, 25660, 25687, 25715, 25743, 25771,  /* 800 - 831*/
            25799, 25827, 25855, 25883, 25910, 25938, 25966, 25994, 26022, 26050, 26078, 26106, 26134, 26161, 26189, 26217, 26245, 26273, 26301, 26329, 26357, 26385, 26412, 26440, 26468, 26496, 26524, 26552, 26580, 26608, 26636, 26663,  /* 832 - 863*/
            26691, 26719, 26747, 26775, 26803, 26831, 26859, 26887, 26914, 26942, 26970, 26999, 27027, 27055, 27083, 27111, 27140, 27168, 27197, 27225, 27254, 27282, 27311, 27340, 27369, 27398, 27426, 27455, 27484, 27514, 27543, 27572,  /* 864 - 895*/
            27601, 27631, 27660, 27689, 27719, 27749, 27778, 27808, 27838, 27868, 27898, 27928, 27958, 27988, 28018, 28048, 28079, 28109, 28140, 28170, 28201, 28232, 28263, 28293, 28324, 28355, 28387, 28418, 28449, 28481, 28512, 28544,  /* 896 - 927*/
            28575, 28607, 28639, 28671, 28703, 28735, 28767, 28800, 28832, 28865, 28897, 28930, 28963, 28996, 29029, 29062, 29095, 29129, 29162, 29196, 29230, 29263, 29297, 29332, 29366, 29400, 29435, 29469, 29504, 29539, 29574, 29609,  /* 928 - 959*/
            29645, 29680, 29716, 29752, 29788, 29824, 29860, 29897, 29933, 29970, 30007, 30044, 30082, 30119, 30157, 30195, 30234, 30272, 30311, 30350, 30389, 30428, 30468, 30508, 30548, 30588, 30629, 30670, 30711, 30753, 30795, 30837,  /* 960 - 991*/
            30880, 30923, 30966, 31010, 31054, 31099, 31144, 31190, 31236, 31283, 31330, 31378, 31426, 31475, 31525, 31575, 31627, 31679, 31732, 31787, 31842, 31899, 31957, 32017, 32078, 32142, 32209, 32278, 32352, 32430, 32517, 32619,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
            },
            {
            0, 300, 461, 594, 710, 816, 914, 1006, 1094, 1177, 1257, 1333, 1408, 1480, 1549, 1617, 1684, 1748, 1812, 1874, 1935, 1994, 2053, 2110, 2167, 2223, 2278, 2332, 2385, 2438, 2490, 2541,  /* 0 - 31*/
            2592, 2642, 2692, 2741, 2789, 2837, 2885, 2932, 2978, 3024, 3070, 3115, 3160, 3205, 3249, 3293, 3336, 3379, 3422, 3464, 3507, 3548, 3590, 3631, 3672, 3713, 3753, 3793, 3833, 3873, 3912, 3951,  /* 32 - 63*/
            3990, 4029, 4067, 4106, 4144, 4182, 4219, 4257, 4294, 4331, 4368, 4404, 4441, 4477, 4513, 4549, 4585, 4620, 4656, 4691, 4726, 4761, 4796, 4831, 4865, 4899, 4934, 4968, 5002, 5035, 5069, 5103,  /* 64 - 95*/
            5136, 5169, 5202, 5235, 5268, 5301, 5333, 5366, 5398, 5430, 5463, 5495, 5527, 5558, 5590, 5622, 5653, 5684, 5716, 5747, 5778, 5809, 5840, 5870, 5901, 5932, 5962, 5993, 6023, 6053, 6083, 6113,  /* 96 - 127*/
            6143, 6173, 6203, 6232, 6262, 6291, 6321, 6350, 6379, 6408, 6438, 6467, 6495, 6524, 6553, 6582, 6610, 6639, 6667, 6696, 6724, 6752, 6780, 6809, 6837, 6865, 6892, 6920, 6948, 6976, 7004, 7032,  /* 128 - 159*/
            7060, 7088, 7116, 7143, 7171, 7199, 7227, 7255, 7283, 7311, 7339, 7366, 7394, 7422, 7450, 7478, 7506, 7534, 7562, 7590, 7617, 7645, 7673, 7701, 7729, 7757, 7785, 7813, 7841, 7868, 7896, 7924,  /* 160 - 191*/
            7952, 7980, 8008, 8036, 8064, 8092, 8119, 8147, 8175, 8203, 8231, 8259, 8287, 8315, 8342, 8370, 8398, 8426, 8454, 8482, 8510, 8538, 8566, 8593, 8621, 8649, 8677, 8705, 8733, 8761, 8789, 8817,  /* 192 - 223*/
            8844, 8872, 8900, 8928, 8956, 8984, 9012, 9040, 9068, 9095, 9123, 9151, 9179, 9207, 9235, 9263, 9291, 9318, 9346, 9374, 9402, 9430, 9458, 9486, 9514, 9542, 9569, 9597, 9625, 9653, 9681, 9709,  /* 224 - 255*/
            9737, 9765, 9793, 9820, 9848, 9876, 9904, 9932, 9960, 9988, 10016, 10044, 10071, 10099, 10127, 10155, 10183, 10211, 10239, 10267, 10294, 10322, 10350, 10378, 10406, 10434, 10462, 10490, 10518, 10545, 10573, 10601,  /* 256 - 287*/
            10629, 10657, 10685, 10713, 10741, 10769, 10796, 10824, 10852, 10880, 10908, 10936, 10964, 10992, 11020, 11047, 11075, 11103, 11131, 11159, 11187, 11215, 11243, 11270, 11298, 11326, 11354, 11382, 11410, 11438, 11466, 11494,  /* 288 - 319*/
            11521, 11549, 11577, 11605, 11633, 11661, 11689, 11717, 11745, 11772, 11800, 11828, 11856, 11884, 11912, 11940, 11968, 11996, 12023, 12051, 12079, 12107, 12135, 12163, 12191, 12219, 12246, 12274, 12302, 12330, 12358, 12386,  /* 320 - 351*/
            12414, 12442, 12470, 12497, 12525, 12553, 12581, 12609, 12637, 12665, 12693, 12721, 12748, 12776, 12804, 12832, 12860, 12888, 12916, 12944, 12972, 12999, 13027, 13055, 13083, 13111, 13139, 13167, 13195, 13222, 13250, 13278,  /* 352 - 383*/
            13306, 13334, 13362, 13390, 13418, 13446, 13473, 13501, 13529, 13557, 13585, 13613, 13641, 13669, 13697, 13724, 13752, 13780, 13808, 13836, 13864, 13892, 13920, 13948, 13975, 14003, 14031, 14059, 14087, 14115, 14143, 14171,  /* 384 - 415*/
            14198, 14226, 14254, 14282, 14310, 14338, 14366, 14394, 14422, 14449, 14477, 14505, 14533, 14561, 14589, 14617, 14645, 14673, 14700, 14728, 14756, 14784, 14812, 14840, 14868, 14896, 14924, 14951, 14979, 15007, 15035, 15063,  /* 416 - 447*/
            15091, 15119, 15147, 15174, 15202, 15230, 15258, 15286, 15314, 15342, 15370, 15398, 15425, 15453, 15481, 15509, 15537, 15565, 15593, 15621, 15649, 15676, 15704, 15732, 15760, 15788, 15816, 15844, 15872, 15900, 15927, 15955,  /* 448 - 479*/
            15983, 16011, 16039, 16067, 16095, 16123, 16150, 16178, 16206, 16234, 16262, 16290, 16318, 16346, 16374, 16401, 16429, 16457, 16485, 16513, 16541, 16569, 16597, 16625, 16652, 16680, 16708, 16736, 16764, 16792, 16820, 16848,  /* 480 - 511*/
            16876, 16903, 16931, 16959, 16987, 17015, 17043, 17071, 17099, 17126, 17154, 17182, 17210, 17238, 17266, 17294, 17322, 17350, 17377, 17405, 17433, 17461, 17489, 17517, 17545, 17573, 17601, 17628, 17656, 17684, 17712, 17740,  /* 512 - 543*/
            17768, 17796, 17824, 17852, 17879, 17907, 17935, 17963, 17991, 18019, 18047, 18075, 18102, 18130, 18158, 18186, 18214, 18242, 18270, 18298, 18326, 18353, 18381, 18409, 18437, 18465, 18493, 18521, 18549, 18577, 18604, 18632,  /* 544 - 575*/
            18660, 18688, 18716, 18744, 18772, 18800, 18828, 18855, 18883, 18911, 18939, 18967, 18995, 19023, 19051, 19078, 19106, 19134, 19162, 19190, 19218, 19246, 19274, 19302, 19329, 19357, 19385, 19413, 19441, 19469, 19497, 19525,  /* 576 - 607*/
            19553, 19580, 19608, 19636, 19664, 19692, 19720, 19748, 19776, 19804, 19831, 19859, 19887, 19915, 19943, 19971, 19999, 20027, 20054, 20082, 20110, 20138, 20166, 20194, 20222, 20250, 20278, 20305, 20333, 20361, 20389, 20417,  /* 608 - 639*/
            20445, 20473, 20501, 20529, 20556, 20584, 20612, 20640, 20668, 20696, 20724, 20752, 20780, 20807, 20835, 20863, 20891, 20919, 20947, 20975, 21003, 21030, 21058, 21086, 21114, 21142, 21170, 21198, 21226, 21254, 21281, 21309,  /* 640 - 671*/
            21337, 21365, 21393, 21421, 21449, 21477, 21505, 21532, 21560, 21588, 21616, 21644, 21672, 21700, 21728, 21756, 21783, 21811, 21839, 21867, 21895, 21923, 21951, 21979, 22006, 22034, 22062, 22090, 22118, 22146, 22174, 22202,  /* 672 - 703*/
            22230, 22257, 22285, 22313, 22341, 22369, 22397, 22425, 22453, 22481, 22508, 22536, 22564, 22592, 22620, 22648, 22676, 22704, 22732, 22759, 22787, 22815, 22843, 22871, 22899, 22927, 22955, 22982, 23010, 23038, 23066, 23094,  /* 704 - 735*/
            23122, 23150, 23178, 23206, 23233, 23261, 23289, 23317, 23345, 23373, 23401, 23429, 23457, 23484, 23512, 23540, 23568, 23596, 23624, 23652, 23680, 23708, 23735, 23763, 23791, 23819, 23847, 23875, 23903, 23931, 23958, 23986,  /* 736 - 767*/
            24014, 24042, 24070, 24098, 24126, 24154, 24182, 24209, 24237, 24265, 24293, 24321, 24349, 24377, 24405, 24433, 24460, 24488, 24516, 24544, 24572, 24600, 24628, 24656, 24684, 24711, 24739, 24767, 24795, 24823, 24851, 24879,  /* 768 - 799*/
            24907, 24934, 24962, 24990, 25018, 25046, 25074, 25102, 25130, 25158, 25185, 25213, 25241, 25269, 25297, 25325, 25353, 25381, 25409, 25436, 25464, 25492, 25520, 25548, 25576, 25604, 25632, 25660, 25687, 25715, 25743, 25771,  /* 800 - 831*/
            25799, 25827, 25855, 25883, 25910, 25938, 25966, 25994, 26022, 26050, 26078, 26106, 26134, 26161, 26189, 26217, 26245, 26273, 26301, 26329, 26357, 26385, 26412, 26440, 26468, 26496, 26524, 26552, 26580, 26608, 26636, 26663,  /* 832 - 863*/
            26691, 26719, 26747, 26775, 26803, 26831, 26859, 26887, 26914, 26942, 26970, 26999, 27027, 27055, 27083, 27111, 27140, 27168, 27197, 27225, 27254, 27282, 27311, 27340, 27369, 27398, 27426, 27455, 27484, 27514, 27543, 27572,  /* 864 - 895*/
            27601, 27631, 27660, 27689, 27719, 27749, 27778, 27808, 27838, 27868, 27898, 27928, 27958, 27988, 28018, 28048, 28079, 28109, 28140, 28170, 28201, 28232, 28263, 28293, 28324, 28355, 28387, 28418, 28449, 28481, 28512, 28544,  /* 896 - 927*/
            28575, 28607, 28639, 28671, 28703, 28735, 28767, 28800, 28832, 28865, 28897, 28930, 28963, 28996, 29029, 29062, 29095, 29129, 29162, 29196, 29230, 29263, 29297, 29332, 29366, 29400, 29435, 29469, 29504, 29539, 29574, 29609,  /* 928 - 959*/
            29645, 29680, 29716, 29752, 29788, 29824, 29860, 29897, 29933, 29970, 30007, 30044, 30082, 30119, 30157, 30195, 30234, 30272, 30311, 30350, 30389, 30428, 30468, 30508, 30548, 30588, 30629, 30670, 30711, 30753, 30795, 30837,  /* 960 - 991*/
            30880, 30923, 30966, 31010, 31054, 31099, 31144, 31190, 31236, 31283, 31330, 31378, 31426, 31475, 31525, 31575, 31627, 31679, 31732, 31787, 31842, 31899, 31957, 32017, 32078, 32142, 32209, 32278, 32352, 32430, 32517, 32619,  /* 992 - 1023*/
            32768, /*1024 - 1024*/
            },
            {
                0, 139, 235, 320, 398, 472, 542, 609, 674, 738, 799, 859, 918, 976, 1032, 1088, 1143, 1197, 1250, 1302, 1354, 1405, 1456, 1506, 1556, 1605, 1653, 1701, 1749, 1796, 1843, 1890,  /* 0 - 31*/
                1936, 1982, 2028, 2073, 2118, 2162, 2207, 2251, 2295, 2338, 2381, 2424, 2467, 2510, 2552, 2594, 2636, 2678, 2719, 2760, 2801, 2842, 2883, 2924, 2964, 3004, 3044, 3084, 3124, 3163, 3203, 3242,  /* 32 - 63*/
                3281, 3320, 3359, 3397, 3436, 3474, 3512, 3551, 3589, 3626, 3664, 3702, 3739, 3777, 3814, 3851, 3888, 3925, 3962, 3999, 4035, 4072, 4108, 4144, 4181, 4217, 4253, 4289, 4324, 4360, 4396, 4431,  /* 64 - 95*/
                4467, 4502, 4537, 4572, 4608, 4643, 4678, 4712, 4747, 4782, 4816, 4851, 4885, 4920, 4954, 4988, 5022, 5057, 5091, 5125, 5158, 5192, 5226, 5260, 5293, 5327, 5360, 5394, 5427, 5460, 5493, 5527,  /* 96 - 127*/
                5560, 5593, 5626, 5658, 5691, 5724, 5757, 5789, 5822, 5855, 5887, 5920, 5952, 5984, 6016, 6049, 6081, 6113, 6145, 6177, 6209, 6241, 6273, 6304, 6336, 6368, 6400, 6431, 6463, 6494, 6526, 6557,  /* 128 - 159*/
                6588, 6620, 6651, 6682, 6713, 6744, 6776, 6807, 6838, 6869, 6899, 6930, 6961, 6992, 7023, 7053, 7084, 7115, 7145, 7176, 7206, 7237, 7267, 7297, 7328, 7358, 7388, 7418, 7448, 7479, 7509, 7539,  /* 160 - 191*/
                7569, 7599, 7629, 7659, 7688, 7718, 7748, 7778, 7808, 7837, 7867, 7897, 7926, 7956, 7985, 8015, 8044, 8073, 8103, 8132, 8161, 8191, 8220, 8249, 8278, 8308, 8337, 8366, 8395, 8424, 8453, 8482,  /* 192 - 223*/
                8511, 8540, 8568, 8597, 8626, 8655, 8684, 8712, 8741, 8770, 8798, 8827, 8855, 8884, 8912, 8941, 8969, 8998, 9026, 9055, 9083, 9111, 9139, 9168, 9196, 9224, 9252, 9280, 9309, 9337, 9365, 9393,  /* 224 - 255*/
                9421, 9449, 9477, 9505, 9533, 9561, 9589, 9617, 9645, 9673, 9701, 9729, 9757, 9785, 9813, 9841, 9869, 9897, 9925, 9953, 9981, 10009, 10037, 10065, 10093, 10121, 10149, 10177, 10205, 10233, 10261, 10289,  /* 256 - 287*/
                10317, 10345, 10373, 10401, 10429, 10457, 10485, 10513, 10541, 10569, 10597, 10625, 10653, 10681, 10709, 10737, 10765, 10793, 10821, 10849, 10877, 10905, 10933, 10961, 10989, 11017, 11045, 11073, 11101, 11129, 11157, 11185,  /* 288 - 319*/
                11213, 11241, 11269, 11297, 11325, 11353, 11381, 11409, 11437, 11465, 11493, 11521, 11549, 11577, 11605, 11633, 11661, 11689, 11717, 11745, 11773, 11801, 11829, 11857, 11885, 11913, 11941, 11969, 11997, 12025, 12053, 12081,  /* 320 - 351*/
                12109, 12137, 12165, 12193, 12221, 12249, 12277, 12305, 12333, 12361, 12389, 12417, 12445, 12473, 12501, 12529, 12557, 12585, 12613, 12641, 12669, 12697, 12725, 12753, 12781, 12809, 12837, 12865, 12893, 12921, 12949, 12977,  /* 352 - 383*/
                13005, 13033, 13061, 13089, 13117, 13145, 13173, 13201, 13229, 13257, 13285, 13313, 13341, 13369, 13397, 13425, 13453, 13481, 13509, 13537, 13565, 13593, 13621, 13649, 13677, 13705, 13733, 13761, 13789, 13817, 13845, 13873,  /* 384 - 415*/
                13901, 13929, 13957, 13985, 14013, 14041, 14069, 14097, 14125, 14153, 14181, 14209, 14237, 14265, 14293, 14321, 14349, 14377, 14405, 14433, 14461, 14489, 14517, 14545, 14573, 14601, 14629, 14657, 14685, 14713, 14741, 14769,  /* 416 - 447*/
                14797, 14825, 14853, 14881, 14909, 14937, 14965, 14993, 15021, 15049, 15077, 15105, 15133, 15161, 15189, 15217, 15245, 15273, 15301, 15329, 15357, 15385, 15413, 15441, 15469, 15497, 15525, 15553, 15581, 15609, 15637, 15665,  /* 448 - 479*/
                15693, 15721, 15749, 15777, 15805, 15833, 15861, 15889, 15917, 15945, 15973, 16001, 16029, 16057, 16085, 16113, 16141, 16169, 16197, 16225, 16253, 16281, 16309, 16337, 16365, 16393, 16421, 16449, 16477, 16505, 16533, 16561,  /* 480 - 511*/
                16589, 16617, 16645, 16673, 16701, 16729, 16757, 16785, 16813, 16841, 16869, 16897, 16925, 16953, 16981, 17009, 17037, 17065, 17093, 17121, 17149, 17177, 17205, 17233, 17261, 17289, 17317, 17345, 17373, 17401, 17429, 17457,  /* 512 - 543*/
                17485, 17513, 17541, 17569, 17597, 17625, 17653, 17681, 17709, 17737, 17765, 17793, 17821, 17849, 17877, 17905, 17933, 17961, 17989, 18017, 18045, 18073, 18101, 18129, 18157, 18185, 18213, 18241, 18269, 18297, 18325, 18353,  /* 544 - 575*/
                18381, 18409, 18437, 18465, 18493, 18521, 18549, 18577, 18605, 18633, 18661, 18689, 18717, 18745, 18773, 18801, 18829, 18857, 18885, 18913, 18941, 18969, 18997, 19025, 19053, 19081, 19109, 19137, 19165, 19193, 19221, 19249,  /* 576 - 607*/
                19277, 19305, 19333, 19361, 19389, 19417, 19445, 19473, 19501, 19529, 19557, 19585, 19613, 19641, 19669, 19697, 19725, 19753, 19781, 19809, 19837, 19865, 19893, 19921, 19949, 19977, 20005, 20033, 20061, 20089, 20117, 20145,  /* 608 - 639*/
                20173, 20201, 20229, 20257, 20285, 20313, 20341, 20369, 20397, 20425, 20453, 20481, 20509, 20537, 20565, 20593, 20621, 20649, 20677, 20705, 20733, 20761, 20789, 20817, 20845, 20873, 20901, 20929, 20957, 20985, 21013, 21041,  /* 640 - 671*/
                21069, 21097, 21125, 21153, 21181, 21209, 21237, 21265, 21293, 21321, 21349, 21377, 21405, 21433, 21461, 21489, 21517, 21545, 21573, 21601, 21629, 21657, 21685, 21713, 21741, 21769, 21797, 21825, 21853, 21881, 21909, 21937,  /* 672 - 703*/
                21965, 21993, 22021, 22049, 22077, 22105, 22133, 22161, 22189, 22217, 22245, 22273, 22301, 22329, 22357, 22385, 22413, 22441, 22469, 22497, 22525, 22553, 22581, 22609, 22637, 22665, 22693, 22721, 22749, 22777, 22805, 22833,  /* 704 - 735*/
                22861, 22889, 22917, 22945, 22973, 23001, 23029, 23057, 23085, 23113, 23141, 23169, 23197, 23225, 23253, 23281, 23309, 23337, 23365, 23393, 23421, 23449, 23477, 23505, 23533, 23561, 23589, 23617, 23645, 23673, 23701, 23729,  /* 736 - 767*/
                23757, 23785, 23813, 23841, 23869, 23897, 23925, 23953, 23982, 24010, 24038, 24066, 24094, 24123, 24151, 24179, 24208, 24236, 24265, 24293, 24321, 24350, 24378, 24407, 24435, 24464, 24493, 24521, 24550, 24579, 24607, 24636,  /* 768 - 799*/
                24665, 24694, 24722, 24751, 24780, 24809, 24838, 24867, 24896, 24925, 24954, 24983, 25012, 25041, 25070, 25100, 25129, 25158, 25187, 25217, 25246, 25275, 25305, 25334, 25363, 25393, 25422, 25452, 25481, 25511, 25541, 25570,  /* 800 - 831*/
                25600, 25630, 25659, 25689, 25719, 25749, 25779, 25809, 25839, 25869, 25899, 25929, 25959, 25989, 26019, 26049, 26079, 26110, 26140, 26170, 26201, 26231, 26261, 26292, 26322, 26353, 26383, 26414, 26445, 26475, 26506, 26537,  /* 832 - 863*/
                26568, 26599, 26629, 26660, 26691, 26722, 26753, 26784, 26816, 26847, 26878, 26909, 26941, 26972, 27003, 27035, 27066, 27098, 27129, 27161, 27192, 27224, 27256, 27288, 27320, 27351, 27383, 27415, 27447, 27480, 27512, 27544,  /* 864 - 895*/
                27576, 27608, 27641, 27673, 27706, 27738, 27771, 27803, 27836, 27869, 27901, 27934, 27967, 28000, 28033, 28066, 28099, 28132, 28166, 28199, 28232, 28266, 28299, 28333, 28367, 28400, 28434, 28468, 28502, 28536, 28570, 28604,  /* 896 - 927*/
                28638, 28672, 28707, 28741, 28776, 28810, 28845, 28879, 28914, 28949, 28984, 29019, 29054, 29089, 29125, 29160, 29196, 29231, 29267, 29303, 29338, 29374, 29410, 29447, 29483, 29519, 29556, 29592, 29629, 29666, 29702, 29740,  /* 928 - 959*/
                29777, 29814, 29851, 29889, 29926, 29964, 30002, 30040, 30078, 30116, 30155, 30193, 30232, 30271, 30310, 30349, 30388, 30428, 30468, 30508, 30548, 30588, 30628, 30669, 30710, 30751, 30792, 30833, 30875, 30917, 30959, 31002,  /* 960 - 991*/
                31044, 31087, 31131, 31174, 31218, 31262, 31307, 31352, 31397, 31443, 31489, 31535, 31582, 31630, 31677, 31726, 31775, 31825, 31875, 31926, 31978, 32031, 32085, 32140, 32196, 32254, 32313, 32374, 32438, 32506, 32578, 32659,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 139, 235, 320, 398, 472, 542, 609, 674, 738, 799, 859, 918, 976, 1032, 1088, 1143, 1197, 1250, 1302, 1354, 1405, 1456, 1506, 1556, 1605, 1653, 1701, 1749, 1796, 1843, 1890,  /* 0 - 31*/
                1936, 1982, 2028, 2073, 2118, 2162, 2207, 2251, 2295, 2338, 2381, 2424, 2467, 2510, 2552, 2594, 2636, 2678, 2719, 2760, 2801, 2842, 2883, 2924, 2964, 3004, 3044, 3084, 3124, 3163, 3203, 3242,  /* 32 - 63*/
                3281, 3320, 3359, 3397, 3436, 3474, 3512, 3551, 3589, 3626, 3664, 3702, 3739, 3777, 3814, 3851, 3888, 3925, 3962, 3999, 4035, 4072, 4108, 4144, 4181, 4217, 4253, 4289, 4324, 4360, 4396, 4431,  /* 64 - 95*/
                4467, 4502, 4537, 4572, 4608, 4643, 4678, 4712, 4747, 4782, 4816, 4851, 4885, 4920, 4954, 4988, 5022, 5057, 5091, 5125, 5158, 5192, 5226, 5260, 5293, 5327, 5360, 5394, 5427, 5460, 5493, 5527,  /* 96 - 127*/
                5560, 5593, 5626, 5658, 5691, 5724, 5757, 5789, 5822, 5855, 5887, 5920, 5952, 5984, 6016, 6049, 6081, 6113, 6145, 6177, 6209, 6241, 6273, 6304, 6336, 6368, 6400, 6431, 6463, 6494, 6526, 6557,  /* 128 - 159*/
                6588, 6620, 6651, 6682, 6713, 6744, 6776, 6807, 6838, 6869, 6899, 6930, 6961, 6992, 7023, 7053, 7084, 7115, 7145, 7176, 7206, 7237, 7267, 7297, 7328, 7358, 7388, 7418, 7448, 7479, 7509, 7539,  /* 160 - 191*/
                7569, 7599, 7629, 7659, 7688, 7718, 7748, 7778, 7808, 7837, 7867, 7897, 7926, 7956, 7985, 8015, 8044, 8073, 8103, 8132, 8161, 8191, 8220, 8249, 8278, 8308, 8337, 8366, 8395, 8424, 8453, 8482,  /* 192 - 223*/
                8511, 8540, 8568, 8597, 8626, 8655, 8684, 8712, 8741, 8770, 8798, 8827, 8855, 8884, 8912, 8941, 8969, 8998, 9026, 9055, 9083, 9111, 9139, 9168, 9196, 9224, 9252, 9280, 9309, 9337, 9365, 9393,  /* 224 - 255*/
                9421, 9449, 9477, 9505, 9533, 9561, 9589, 9617, 9645, 9673, 9701, 9729, 9757, 9785, 9813, 9841, 9869, 9897, 9925, 9953, 9981, 10009, 10037, 10065, 10093, 10121, 10149, 10177, 10205, 10233, 10261, 10289,  /* 256 - 287*/
                10317, 10345, 10373, 10401, 10429, 10457, 10485, 10513, 10541, 10569, 10597, 10625, 10653, 10681, 10709, 10737, 10765, 10793, 10821, 10849, 10877, 10905, 10933, 10961, 10989, 11017, 11045, 11073, 11101, 11129, 11157, 11185,  /* 288 - 319*/
                11213, 11241, 11269, 11297, 11325, 11353, 11381, 11409, 11437, 11465, 11493, 11521, 11549, 11577, 11605, 11633, 11661, 11689, 11717, 11745, 11773, 11801, 11829, 11857, 11885, 11913, 11941, 11969, 11997, 12025, 12053, 12081,  /* 320 - 351*/
                12109, 12137, 12165, 12193, 12221, 12249, 12277, 12305, 12333, 12361, 12389, 12417, 12445, 12473, 12501, 12529, 12557, 12585, 12613, 12641, 12669, 12697, 12725, 12753, 12781, 12809, 12837, 12865, 12893, 12921, 12949, 12977,  /* 352 - 383*/
                13005, 13033, 13061, 13089, 13117, 13145, 13173, 13201, 13229, 13257, 13285, 13313, 13341, 13369, 13397, 13425, 13453, 13481, 13509, 13537, 13565, 13593, 13621, 13649, 13677, 13705, 13733, 13761, 13789, 13817, 13845, 13873,  /* 384 - 415*/
                13901, 13929, 13957, 13985, 14013, 14041, 14069, 14097, 14125, 14153, 14181, 14209, 14237, 14265, 14293, 14321, 14349, 14377, 14405, 14433, 14461, 14489, 14517, 14545, 14573, 14601, 14629, 14657, 14685, 14713, 14741, 14769,  /* 416 - 447*/
                14797, 14825, 14853, 14881, 14909, 14937, 14965, 14993, 15021, 15049, 15077, 15105, 15133, 15161, 15189, 15217, 15245, 15273, 15301, 15329, 15357, 15385, 15413, 15441, 15469, 15497, 15525, 15553, 15581, 15609, 15637, 15665,  /* 448 - 479*/
                15693, 15721, 15749, 15777, 15805, 15833, 15861, 15889, 15917, 15945, 15973, 16001, 16029, 16057, 16085, 16113, 16141, 16169, 16197, 16225, 16253, 16281, 16309, 16337, 16365, 16393, 16421, 16449, 16477, 16505, 16533, 16561,  /* 480 - 511*/
                16589, 16617, 16645, 16673, 16701, 16729, 16757, 16785, 16813, 16841, 16869, 16897, 16925, 16953, 16981, 17009, 17037, 17065, 17093, 17121, 17149, 17177, 17205, 17233, 17261, 17289, 17317, 17345, 17373, 17401, 17429, 17457,  /* 512 - 543*/
                17485, 17513, 17541, 17569, 17597, 17625, 17653, 17681, 17709, 17737, 17765, 17793, 17821, 17849, 17877, 17905, 17933, 17961, 17989, 18017, 18045, 18073, 18101, 18129, 18157, 18185, 18213, 18241, 18269, 18297, 18325, 18353,  /* 544 - 575*/
                18381, 18409, 18437, 18465, 18493, 18521, 18549, 18577, 18605, 18633, 18661, 18689, 18717, 18745, 18773, 18801, 18829, 18857, 18885, 18913, 18941, 18969, 18997, 19025, 19053, 19081, 19109, 19137, 19165, 19193, 19221, 19249,  /* 576 - 607*/
                19277, 19305, 19333, 19361, 19389, 19417, 19445, 19473, 19501, 19529, 19557, 19585, 19613, 19641, 19669, 19697, 19725, 19753, 19781, 19809, 19837, 19865, 19893, 19921, 19949, 19977, 20005, 20033, 20061, 20089, 20117, 20145,  /* 608 - 639*/
                20173, 20201, 20229, 20257, 20285, 20313, 20341, 20369, 20397, 20425, 20453, 20481, 20509, 20537, 20565, 20593, 20621, 20649, 20677, 20705, 20733, 20761, 20789, 20817, 20845, 20873, 20901, 20929, 20957, 20985, 21013, 21041,  /* 640 - 671*/
                21069, 21097, 21125, 21153, 21181, 21209, 21237, 21265, 21293, 21321, 21349, 21377, 21405, 21433, 21461, 21489, 21517, 21545, 21573, 21601, 21629, 21657, 21685, 21713, 21741, 21769, 21797, 21825, 21853, 21881, 21909, 21937,  /* 672 - 703*/
                21965, 21993, 22021, 22049, 22077, 22105, 22133, 22161, 22189, 22217, 22245, 22273, 22301, 22329, 22357, 22385, 22413, 22441, 22469, 22497, 22525, 22553, 22581, 22609, 22637, 22665, 22693, 22721, 22749, 22777, 22805, 22833,  /* 704 - 735*/
                22861, 22889, 22917, 22945, 22973, 23001, 23029, 23057, 23085, 23113, 23141, 23169, 23197, 23225, 23253, 23281, 23309, 23337, 23365, 23393, 23421, 23449, 23477, 23505, 23533, 23561, 23589, 23617, 23645, 23673, 23701, 23729,  /* 736 - 767*/
                23757, 23785, 23813, 23841, 23869, 23897, 23925, 23953, 23982, 24010, 24038, 24066, 24094, 24123, 24151, 24179, 24208, 24236, 24265, 24293, 24321, 24350, 24378, 24407, 24435, 24464, 24493, 24521, 24550, 24579, 24607, 24636,  /* 768 - 799*/
                24665, 24694, 24722, 24751, 24780, 24809, 24838, 24867, 24896, 24925, 24954, 24983, 25012, 25041, 25070, 25100, 25129, 25158, 25187, 25217, 25246, 25275, 25305, 25334, 25363, 25393, 25422, 25452, 25481, 25511, 25541, 25570,  /* 800 - 831*/
                25600, 25630, 25659, 25689, 25719, 25749, 25779, 25809, 25839, 25869, 25899, 25929, 25959, 25989, 26019, 26049, 26079, 26110, 26140, 26170, 26201, 26231, 26261, 26292, 26322, 26353, 26383, 26414, 26445, 26475, 26506, 26537,  /* 832 - 863*/
                26568, 26599, 26629, 26660, 26691, 26722, 26753, 26784, 26816, 26847, 26878, 26909, 26941, 26972, 27003, 27035, 27066, 27098, 27129, 27161, 27192, 27224, 27256, 27288, 27320, 27351, 27383, 27415, 27447, 27480, 27512, 27544,  /* 864 - 895*/
                27576, 27608, 27641, 27673, 27706, 27738, 27771, 27803, 27836, 27869, 27901, 27934, 27967, 28000, 28033, 28066, 28099, 28132, 28166, 28199, 28232, 28266, 28299, 28333, 28367, 28400, 28434, 28468, 28502, 28536, 28570, 28604,  /* 896 - 927*/
                28638, 28672, 28707, 28741, 28776, 28810, 28845, 28879, 28914, 28949, 28984, 29019, 29054, 29089, 29125, 29160, 29196, 29231, 29267, 29303, 29338, 29374, 29410, 29447, 29483, 29519, 29556, 29592, 29629, 29666, 29702, 29740,  /* 928 - 959*/
                29777, 29814, 29851, 29889, 29926, 29964, 30002, 30040, 30078, 30116, 30155, 30193, 30232, 30271, 30310, 30349, 30388, 30428, 30468, 30508, 30548, 30588, 30628, 30669, 30710, 30751, 30792, 30833, 30875, 30917, 30959, 31002,  /* 960 - 991*/
                31044, 31087, 31131, 31174, 31218, 31262, 31307, 31352, 31397, 31443, 31489, 31535, 31582, 31630, 31677, 31726, 31775, 31825, 31875, 31926, 31978, 32031, 32085, 32140, 32196, 32254, 32313, 32374, 32438, 32506, 32578, 32659,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 139, 235, 320, 398, 472, 542, 609, 674, 738, 799, 859, 918, 976, 1032, 1088, 1143, 1197, 1250, 1302, 1354, 1405, 1456, 1506, 1556, 1605, 1653, 1701, 1749, 1796, 1843, 1890,  /* 0 - 31*/
                1936, 1982, 2028, 2073, 2118, 2162, 2207, 2251, 2295, 2338, 2381, 2424, 2467, 2510, 2552, 2594, 2636, 2678, 2719, 2760, 2801, 2842, 2883, 2924, 2964, 3004, 3044, 3084, 3124, 3163, 3203, 3242,  /* 32 - 63*/
                3281, 3320, 3359, 3397, 3436, 3474, 3512, 3551, 3589, 3626, 3664, 3702, 3739, 3777, 3814, 3851, 3888, 3925, 3962, 3999, 4035, 4072, 4108, 4144, 4181, 4217, 4253, 4289, 4324, 4360, 4396, 4431,  /* 64 - 95*/
                4467, 4502, 4537, 4572, 4608, 4643, 4678, 4712, 4747, 4782, 4816, 4851, 4885, 4920, 4954, 4988, 5022, 5057, 5091, 5125, 5158, 5192, 5226, 5260, 5293, 5327, 5360, 5394, 5427, 5460, 5493, 5527,  /* 96 - 127*/
                5560, 5593, 5626, 5658, 5691, 5724, 5757, 5789, 5822, 5855, 5887, 5920, 5952, 5984, 6016, 6049, 6081, 6113, 6145, 6177, 6209, 6241, 6273, 6304, 6336, 6368, 6400, 6431, 6463, 6494, 6526, 6557,  /* 128 - 159*/
                6588, 6620, 6651, 6682, 6713, 6744, 6776, 6807, 6838, 6869, 6899, 6930, 6961, 6992, 7023, 7053, 7084, 7115, 7145, 7176, 7206, 7237, 7267, 7297, 7328, 7358, 7388, 7418, 7448, 7479, 7509, 7539,  /* 160 - 191*/
                7569, 7599, 7629, 7659, 7688, 7718, 7748, 7778, 7808, 7837, 7867, 7897, 7926, 7956, 7985, 8015, 8044, 8073, 8103, 8132, 8161, 8191, 8220, 8249, 8278, 8308, 8337, 8366, 8395, 8424, 8453, 8482,  /* 192 - 223*/
                8511, 8540, 8568, 8597, 8626, 8655, 8684, 8712, 8741, 8770, 8798, 8827, 8855, 8884, 8912, 8941, 8969, 8998, 9026, 9055, 9083, 9111, 9139, 9168, 9196, 9224, 9252, 9280, 9309, 9337, 9365, 9393,  /* 224 - 255*/
                9421, 9449, 9477, 9505, 9533, 9561, 9589, 9617, 9645, 9673, 9701, 9729, 9757, 9785, 9813, 9841, 9869, 9897, 9925, 9953, 9981, 10009, 10037, 10065, 10093, 10121, 10149, 10177, 10205, 10233, 10261, 10289,  /* 256 - 287*/
                10317, 10345, 10373, 10401, 10429, 10457, 10485, 10513, 10541, 10569, 10597, 10625, 10653, 10681, 10709, 10737, 10765, 10793, 10821, 10849, 10877, 10905, 10933, 10961, 10989, 11017, 11045, 11073, 11101, 11129, 11157, 11185,  /* 288 - 319*/
                11213, 11241, 11269, 11297, 11325, 11353, 11381, 11409, 11437, 11465, 11493, 11521, 11549, 11577, 11605, 11633, 11661, 11689, 11717, 11745, 11773, 11801, 11829, 11857, 11885, 11913, 11941, 11969, 11997, 12025, 12053, 12081,  /* 320 - 351*/
                12109, 12137, 12165, 12193, 12221, 12249, 12277, 12305, 12333, 12361, 12389, 12417, 12445, 12473, 12501, 12529, 12557, 12585, 12613, 12641, 12669, 12697, 12725, 12753, 12781, 12809, 12837, 12865, 12893, 12921, 12949, 12977,  /* 352 - 383*/
                13005, 13033, 13061, 13089, 13117, 13145, 13173, 13201, 13229, 13257, 13285, 13313, 13341, 13369, 13397, 13425, 13453, 13481, 13509, 13537, 13565, 13593, 13621, 13649, 13677, 13705, 13733, 13761, 13789, 13817, 13845, 13873,  /* 384 - 415*/
                13901, 13929, 13957, 13985, 14013, 14041, 14069, 14097, 14125, 14153, 14181, 14209, 14237, 14265, 14293, 14321, 14349, 14377, 14405, 14433, 14461, 14489, 14517, 14545, 14573, 14601, 14629, 14657, 14685, 14713, 14741, 14769,  /* 416 - 447*/
                14797, 14825, 14853, 14881, 14909, 14937, 14965, 14993, 15021, 15049, 15077, 15105, 15133, 15161, 15189, 15217, 15245, 15273, 15301, 15329, 15357, 15385, 15413, 15441, 15469, 15497, 15525, 15553, 15581, 15609, 15637, 15665,  /* 448 - 479*/
                15693, 15721, 15749, 15777, 15805, 15833, 15861, 15889, 15917, 15945, 15973, 16001, 16029, 16057, 16085, 16113, 16141, 16169, 16197, 16225, 16253, 16281, 16309, 16337, 16365, 16393, 16421, 16449, 16477, 16505, 16533, 16561,  /* 480 - 511*/
                16589, 16617, 16645, 16673, 16701, 16729, 16757, 16785, 16813, 16841, 16869, 16897, 16925, 16953, 16981, 17009, 17037, 17065, 17093, 17121, 17149, 17177, 17205, 17233, 17261, 17289, 17317, 17345, 17373, 17401, 17429, 17457,  /* 512 - 543*/
                17485, 17513, 17541, 17569, 17597, 17625, 17653, 17681, 17709, 17737, 17765, 17793, 17821, 17849, 17877, 17905, 17933, 17961, 17989, 18017, 18045, 18073, 18101, 18129, 18157, 18185, 18213, 18241, 18269, 18297, 18325, 18353,  /* 544 - 575*/
                18381, 18409, 18437, 18465, 18493, 18521, 18549, 18577, 18605, 18633, 18661, 18689, 18717, 18745, 18773, 18801, 18829, 18857, 18885, 18913, 18941, 18969, 18997, 19025, 19053, 19081, 19109, 19137, 19165, 19193, 19221, 19249,  /* 576 - 607*/
                19277, 19305, 19333, 19361, 19389, 19417, 19445, 19473, 19501, 19529, 19557, 19585, 19613, 19641, 19669, 19697, 19725, 19753, 19781, 19809, 19837, 19865, 19893, 19921, 19949, 19977, 20005, 20033, 20061, 20089, 20117, 20145,  /* 608 - 639*/
                20173, 20201, 20229, 20257, 20285, 20313, 20341, 20369, 20397, 20425, 20453, 20481, 20509, 20537, 20565, 20593, 20621, 20649, 20677, 20705, 20733, 20761, 20789, 20817, 20845, 20873, 20901, 20929, 20957, 20985, 21013, 21041,  /* 640 - 671*/
                21069, 21097, 21125, 21153, 21181, 21209, 21237, 21265, 21293, 21321, 21349, 21377, 21405, 21433, 21461, 21489, 21517, 21545, 21573, 21601, 21629, 21657, 21685, 21713, 21741, 21769, 21797, 21825, 21853, 21881, 21909, 21937,  /* 672 - 703*/
                21965, 21993, 22021, 22049, 22077, 22105, 22133, 22161, 22189, 22217, 22245, 22273, 22301, 22329, 22357, 22385, 22413, 22441, 22469, 22497, 22525, 22553, 22581, 22609, 22637, 22665, 22693, 22721, 22749, 22777, 22805, 22833,  /* 704 - 735*/
                22861, 22889, 22917, 22945, 22973, 23001, 23029, 23057, 23085, 23113, 23141, 23169, 23197, 23225, 23253, 23281, 23309, 23337, 23365, 23393, 23421, 23449, 23477, 23505, 23533, 23561, 23589, 23617, 23645, 23673, 23701, 23729,  /* 736 - 767*/
                23757, 23785, 23813, 23841, 23869, 23897, 23925, 23953, 23982, 24010, 24038, 24066, 24094, 24123, 24151, 24179, 24208, 24236, 24265, 24293, 24321, 24350, 24378, 24407, 24435, 24464, 24493, 24521, 24550, 24579, 24607, 24636,  /* 768 - 799*/
                24665, 24694, 24722, 24751, 24780, 24809, 24838, 24867, 24896, 24925, 24954, 24983, 25012, 25041, 25070, 25100, 25129, 25158, 25187, 25217, 25246, 25275, 25305, 25334, 25363, 25393, 25422, 25452, 25481, 25511, 25541, 25570,  /* 800 - 831*/
                25600, 25630, 25659, 25689, 25719, 25749, 25779, 25809, 25839, 25869, 25899, 25929, 25959, 25989, 26019, 26049, 26079, 26110, 26140, 26170, 26201, 26231, 26261, 26292, 26322, 26353, 26383, 26414, 26445, 26475, 26506, 26537,  /* 832 - 863*/
                26568, 26599, 26629, 26660, 26691, 26722, 26753, 26784, 26816, 26847, 26878, 26909, 26941, 26972, 27003, 27035, 27066, 27098, 27129, 27161, 27192, 27224, 27256, 27288, 27320, 27351, 27383, 27415, 27447, 27480, 27512, 27544,  /* 864 - 895*/
                27576, 27608, 27641, 27673, 27706, 27738, 27771, 27803, 27836, 27869, 27901, 27934, 27967, 28000, 28033, 28066, 28099, 28132, 28166, 28199, 28232, 28266, 28299, 28333, 28367, 28400, 28434, 28468, 28502, 28536, 28570, 28604,  /* 896 - 927*/
                28638, 28672, 28707, 28741, 28776, 28810, 28845, 28879, 28914, 28949, 28984, 29019, 29054, 29089, 29125, 29160, 29196, 29231, 29267, 29303, 29338, 29374, 29410, 29447, 29483, 29519, 29556, 29592, 29629, 29666, 29702, 29740,  /* 928 - 959*/
                29777, 29814, 29851, 29889, 29926, 29964, 30002, 30040, 30078, 30116, 30155, 30193, 30232, 30271, 30310, 30349, 30388, 30428, 30468, 30508, 30548, 30588, 30628, 30669, 30710, 30751, 30792, 30833, 30875, 30917, 30959, 31002,  /* 960 - 991*/
                31044, 31087, 31131, 31174, 31218, 31262, 31307, 31352, 31397, 31443, 31489, 31535, 31582, 31630, 31677, 31726, 31775, 31825, 31875, 31926, 31978, 32031, 32085, 32140, 32196, 32254, 32313, 32374, 32438, 32506, 32578, 32659,  /* 992 - 1023*/
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
                        20000, 19283, 18593, 17929, 17292, 16680, 16094, 15534, 15001, 14493, 14012, 13557, 13128, 12726, 12349, 12000, 11676, 11379, 11108, 10863, 10645, 10454, 10289, 10150, 10038, 9953, 9894, 9862, 9856, 9877, 9925, 10000,  /* 0 - 31*/
                        10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, /*32 - 62*/
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
            /* 1 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10370, 10740, 11110, 11480, 13545, 15610, 17676, 19741, 21807, 19728, 17649, 15570, 13491, 12792, 12094, 11396, 10698, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 11181, 12362, 13543, 14724, 15905, 16609, 17313, 18017, 18722, 19727, 20733, 21739, 22745, /*32 - 62*/
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
            /* 2 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10370, 10740, 11110, 11480, 13545, 15610, 17676, 19741, 21807, 19728, 17649, 15570, 13491, 12792, 12094, 11396, 10698, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 11181, 12362, 13543, 14724, 15905, 16609, 17313, 18017, 18722, 19727, 20733, 21739, 22745, /*32 - 62*/
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
            /* 3 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10370, 10740, 11110, 11480, 13545, 15610, 17676, 19741, 21807, 19728, 17649, 15570, 13491, 12792, 12094, 11396, 10698, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 11181, 12362, 13543, 14724, 15905, 16609, 17313, 18017, 18722, 19727, 20733, 21739, 22745, /*32 - 62*/
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
            /* 4 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10370, 10740, 11110, 11480, 13545, 15610, 17676, 19741, 21807, 19728, 17649, 15570, 13491, 12792, 12094, 11396, 10698, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 11181, 12362, 13543, 14724, 15905, 16609, 17313, 18017, 18722, 19727, 20733, 21739, 22745, /*32 - 62*/
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
            /* 5 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10370, 10740, 11110, 11480, 13545, 15610, 17676, 19741, 21807, 19728, 17649, 15570, 13491, 12792, 12094, 11396, 10698, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 11181, 12362, 13543, 14724, 15905, 16609, 17313, 18017, 18722, 19727, 20733, 21739, 22745, /*32 - 62*/
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
            /* 6 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10370, 10740, 11110, 11480, 13545, 15610, 17676, 19741, 21807, 19728, 17649, 15570, 13491, 12792, 12094, 11396, 10698, 10000, 10000, 10000, 10000, 10000,  /* 0 - 31*/
                    10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 11181, 12362, 13543, 14724, 15905, 16609, 17313, 18017, 18722, 19727, 20733, 21739, 22745, /*32 - 62*/
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
            /* 7 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 9961, 9942, 9938, 9941, 9946, 9947, 9938, 9916, 9898, 9907, 9963, 10110, 10482, 11238, 12534, 14456, 16816, 19350, 21800, 23935, 25657, 26900, 27596, 27698, 27242, 26280, 24868, 23080, 21078, 19046, 17166,  /* 0 - 31*/
                        15578, 14257, 13136, 12147, 11241, 10452, 9833, 9437, 9288, 9310, 9395, 9438, 9375, 9317, 9412, 9813, 10622, 11755, 13081, 14466, 15792, 16983, 17979, 18716, 19158, 19372, 19451, 19487, 19572, 19799, 20262, /*32 - 62*/
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
            /* 8 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 9961, 9942, 9938, 9941, 9946, 9947, 9938, 9916, 9898, 9907, 9963, 10110, 10482, 11238, 12534, 14456, 16816, 19350, 21800, 23935, 25657, 26900, 27596, 27698, 27242, 26280, 24868, 23080, 21078, 19046, 17166,  /* 0 - 31*/
                        15578, 14257, 13136, 12147, 11241, 10452, 9833, 9437, 9288, 9310, 9395, 9438, 9375, 9317, 9412, 9813, 10622, 11755, 13081, 14466, 15792, 16983, 17979, 18716, 19158, 19372, 19451, 19487, 19572, 19799, 20262, /*32 - 62*/
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
            /* 9 */
            {
                /* 0 */
                {
                    /* nHistogramWeight[63] */
                    {
                        10000, 9961, 9942, 9938, 9941, 9946, 9947, 9938, 9916, 9898, 9907, 9963, 10110, 10482, 11238, 12534, 14456, 16816, 19350, 21800, 23935, 25657, 26900, 27596, 27698, 27242, 26280, 24868, 23080, 21078, 19046, 17166,  /* 0 - 31*/
                        15578, 14257, 13136, 12147, 11241, 10452, 9833, 9437, 9288, 9310, 9395, 9438, 9375, 9317, 9412, 9813, 10622, 11755, 13081, 14466, 15792, 16983, 17979, 18716, 19158, 19372, 19451, 19487, 19572, 19799, 20262, /*32 - 62*/
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
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
                30,
                /* nDetailGainLimitPos */
                2560,
                /* nDetailGainLimitNeg */
                10240,
                /* nSlopeStrengthLut[33] */
                {
                    8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                0,
            },
        },
        /* tLowFreqEnh[12] */
        {
            /* 0 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                65535,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                96,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 1 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                65535,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                96,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 2 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                65535,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                96,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 3 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                65535,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                72,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 4 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                65535,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                48,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 5 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                65535,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                0,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 6 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                0,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 7 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                0,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 8 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                0,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
            },
            /* 9 */
            {
                /* nRltmDetailLowEn */
                1,
                /* nSigmaDisBlur */
                9000,
                /* nDetailGainPosLow */
                0,
                /* nDetailGainNegLow */
                0,
                /* nDetailLimitPosLow */
                0,
                /* nDetailLimitNegLow */
                10240,
                /* nSigmaDisPst */
                1,
                /* nSigmaValPst */
                65535,
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
                    {104, 104, 104, 104, 110, 80, 80, 80, 80, 80, /*0 - 9*/},
                    /* nRltmStrength[12] */
                    {80, 80, 80, 80, 72, 66, 48, 48, 40, 40, /*0 - 9*/},
                    /* nContrastStrength[12] */
                    {42, 44, 48, 48, 44, 40, 32, 32, 32, 32, /*0 - 9*/},
                    /* nPostGamma[12] */
                    {32, 32, 32, 32, 32, 32, 36, 36, 36, 36, /*0 - 9*/},
                    /* nHighlightSup[12] */
                    {1, 20, 25, 20, 20, 20, 20, 20, 20, 20, /*0 - 9*/},
                    /* nDetailCoringPos[12] */
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
                    /* nDetailCoringNeg[12] */
                    {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, /*0 - 9*/},
                    /* nDetailGainPos[12] */
                    {20, 20, 20, 20, 10, 10, 0, 0, 0, 0, /*0 - 9*/},
                    /* nDetailGainNeg[12] */
                    {40, 40, 40, 40, 20, 20, 10, 0, 0, 0, /*0 - 9*/},
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
    0,
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
    1,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        1,
        /* nDetEdgeSlopeY */
        27,
        /* nDetEdgeOffsetY */
        -11,
        /* nDetEdgeEnableC */
        1,
        /* nDetEdgeSlopeC */
        19,
        /* nDetEdgeOffsetC */
        -31,
        /* nDetSeledgeThrY */
        0,
        /* nDetSeledgeSlopeY */
        64,
        /* nDetSeledgeWeight[7] */
        {64, 64, 48, 40, 32, 24, 16, /*0 - 6*/},
        /* nDetMaskStrength */
        50,
        /* nDetMaskStrengthPre */
        19,
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
        {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {128, 102, 102, 102, 102, 90, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[16] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nCompStrength[16] */
        {128, 128, 128, 128, 128, 128, 96, 96, 80, 80, /*0 - 9*/},
        /* nCompTargetLuma[16][8] */
        {
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
            {128, 128, 128, 96, 96, 128, 128, 128, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
            {128, 128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 64, 64, 90, 128, 128, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
            {128, 102, 102, 102, 102, 90, /*0 - 5*/},
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
        -5,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-204, 25, -74, -51, 20, -201, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {0, 0, 0, 0, -22, -22, -16, -12, -12, -4, -4, -4, 0, 0, 0, 0, /*0 - 15*/},
        /* nXcmHue[16] */
        {169, 0, 0, 0, 169, 345, 522, 459, 84, -236, -471, -471, 42, 320, 404, 404, /*0 - 15*/},
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
                {-12, -12, -25, -31, -31, /*0 - 4*/},
                {10, 0, -25, -31, -31, /*0 - 4*/},
                {10, -16, -25, -25, -25, /*0 - 4*/},
                {-5, -16, -25, -25, -25, /*0 - 4*/},
                {-5, -12, -16, -25, -30, /*0 - 4*/},
                {0, -12, -16, -25, -30, /*0 - 4*/},
                {0, -12, -16, -25, -30, /*0 - 4*/},
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
                    {0, 0, 0, 0, -32, -32, -12, -12, -12, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -12, -12, -12, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {0, 0, 0, 0, -32, -32, -12, -12, -12, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -32, -32, -12, -12, -12, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {0, 0, 0, 0, -18, -18, -18, -12, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -18, -18, -18, -12, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -18, -18, -18, -12, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -18, -18, -18, -12, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, -18, -18, -18, -12, -12, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {0, 0, 0, 0, -32, -32, -32, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -32, -32, -32, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -32, -32, -32, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -32, -32, -32, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -32, -32, -32, -16, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, -16, -16, -16, 0, 0, 0, -8, /*0 - 15*/},
                    {0, 0, 0, 0, -20, -12, -12, 0, 0, 0, 0, 0, 0, 0, 0, -8, /*0 - 15*/},
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
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 0, 0, 160, 640, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                    {640, 0, 0, 0, 640, 640, 640, 400, 320, 0, 0, 0, 160, 320, 640, 640, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {0, 0, 0, 0, 0, 240, 480, 480, 0, -320, -640, -640, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 240, 480, 480, 0, -320, -640, -640, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 240, 480, 480, 0, -320, -640, -640, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 240, 480, 480, 0, -320, -640, -640, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 240, 480, 480, 0, -320, -640, -640, 0, 320, 320, 320, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 320, 320, /*0 - 15*/},
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
    1,
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
    1,
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
                0, 52, 106, 162, 218, 275, 333, 391, 451, 511, 572, 634, 696, 759, 822, 886, 950, 1014, 1078, 1143, 1208, 1273, 1338, 1403, 1469, 1534, 1598, 1663, 1727, 1792, 1855, 1919,  /* 0 - 31*/
                1982, 2044, 2106, 2167, 2227, 2287, 2345, 2403, 2460, 2515, 2569, 2622, 2674, 2724, 2773, 2820, 2865, 2909, 2951, 2992, 3031, 3068, 3104, 3139, 3172, 3205, 3236, 3266, 3295, 3323, 3351, 3377,  /* 32 - 63*/
                3404, 3429, 3454, 3478, 3501, 3524, 3546, 3568, 3588, 3608, 3627, 3646, 3664, 3681, 3697, 3712, 3727, 3740, 3753, 3765, 3777, 3788, 3798, 3807, 3817, 3825, 3834, 3842, 3850, 3857, 3864, 3871,  /* 64 - 95*/
                3879, 3885, 3892, 3899, 3906, 3913, 3920, 3927, 3933, 3940, 3947, 3953, 3960, 3967, 3973, 3980, 3987, 3993, 4000, 4006, 4013, 4020, 4026, 4033, 4040, 4046, 4053, 4060, 4067, 4074, 4081, 4088,  /* 96 - 127*/
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
        {1024, 10240, 102400, /*0 - 2*/},
        /* nRefValEnd[3] */
        {2048, 15360, 204800, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 52, 106, 162, 218, 275, 333, 391, 451, 511, 572, 634, 696, 759, 822, 886, 950, 1014, 1078, 1143, 1208, 1273, 1338, 1403, 1469, 1534, 1598, 1663, 1727, 1792, 1855, 1919,  /* 0 - 31*/
                    1982, 2044, 2106, 2167, 2227, 2287, 2345, 2403, 2460, 2515, 2569, 2622, 2674, 2724, 2773, 2820, 2865, 2909, 2951, 2992, 3031, 3068, 3104, 3139, 3172, 3205, 3236, 3266, 3295, 3323, 3351, 3377,  /* 32 - 63*/
                    3404, 3429, 3454, 3478, 3501, 3524, 3546, 3568, 3588, 3608, 3627, 3646, 3664, 3681, 3697, 3712, 3727, 3740, 3753, 3765, 3777, 3788, 3798, 3807, 3817, 3825, 3834, 3842, 3850, 3857, 3864, 3871,  /* 64 - 95*/
                    3879, 3885, 3892, 3899, 3906, 3913, 3920, 3927, 3933, 3940, 3947, 3953, 3960, 3967, 3973, 3980, 3987, 3993, 4000, 4006, 4013, 4020, 4026, 4033, 4040, 4046, 4053, 4060, 4067, 4074, 4081, 4088,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 52, 106, 162, 218, 275, 333, 391, 451, 511, 572, 634, 696, 759, 822, 886, 950, 1014, 1078, 1143, 1208, 1273, 1338, 1403, 1469, 1534, 1598, 1663, 1727, 1792, 1855, 1919,  /* 0 - 31*/
                    1982, 2044, 2106, 2167, 2227, 2287, 2345, 2403, 2460, 2515, 2569, 2622, 2674, 2724, 2773, 2820, 2865, 2909, 2951, 2992, 3031, 3068, 3104, 3139, 3172, 3205, 3236, 3266, 3295, 3323, 3351, 3377,  /* 32 - 63*/
                    3404, 3429, 3454, 3478, 3501, 3524, 3546, 3568, 3588, 3608, 3627, 3646, 3664, 3681, 3697, 3712, 3727, 3740, 3753, 3765, 3777, 3788, 3798, 3807, 3817, 3825, 3834, 3842, 3850, 3857, 3864, 3871,  /* 64 - 95*/
                    3879, 3885, 3892, 3899, 3906, 3913, 3920, 3927, 3933, 3940, 3947, 3953, 3960, 3967, 3973, 3980, 3987, 3993, 4000, 4006, 4013, 4020, 4026, 4033, 4040, 4046, 4053, 4060, 4067, 4074, 4081, 4088,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 52, 106, 162, 218, 275, 333, 391, 451, 511, 572, 634, 696, 759, 822, 886, 950, 1014, 1078, 1143, 1208, 1273, 1338, 1403, 1469, 1534, 1598, 1663, 1727, 1792, 1855, 1919,  /* 0 - 31*/
                    1982, 2044, 2106, 2167, 2227, 2287, 2345, 2403, 2460, 2515, 2569, 2622, 2674, 2724, 2773, 2820, 2865, 2909, 2951, 2992, 3031, 3068, 3104, 3139, 3172, 3205, 3236, 3266, 3295, 3323, 3351, 3377,  /* 32 - 63*/
                    3404, 3429, 3454, 3478, 3501, 3524, 3546, 3568, 3588, 3608, 3627, 3646, 3664, 3681, 3697, 3712, 3727, 3740, 3753, 3765, 3777, 3788, 3798, 3807, 3817, 3825, 3834, 3842, 3850, 3857, 3864, 3871,  /* 64 - 95*/
                    3879, 3885, 3892, 3899, 3906, 3913, 3920, 3927, 3933, 3940, 3947, 3953, 3960, 3967, 3973, 3980, 3987, 3993, 4000, 4006, 4013, 4020, 4026, 4033, 4040, 4046, 4053, 4060, 4067, 4074, 4081, 4088,  /* 96 - 127*/
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
    1,
    /* tGlbParam */
    {
        /* nCalcMode */
        1,
        /* nAirReflect */
        45000,
        /* nSpatialSmoothness */
        2,
        /* nStrengthLimit */
        32,
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
        47,
        /* nGrayDcRatio */
        64,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nEffectStrength[12] */
        {47, 47, 47, 47, 40, 40, 25, 0, 0, 0, /*0 - 9*/},
        /* nGrayDcRatio[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 9*/},
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
    1,
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
    32,
    /* tExtMaskParam */
    {
        /* nExtMaskEnable */
        1,
        /* nExtMaskMode */
        1,
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
            {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {160, 10, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {96, 10, /*0 - 1*/},
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
        {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
        /* nTfRatLimitLuma[2][2] */
        {
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nSf0EdgeStre */
        40,
        /* nSf0DirStre */
        64,
        /* nSf0DetailStre */
        64,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
            {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
            {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
            {3, 3, 3, 3, 3, 3, 3, 3, 3, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {1, 1, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {128, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {256, 0, 0, /*0 - 2*/},
            {256, 0, 0, /*0 - 2*/},
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
            {32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 8*/},
            {8, 8, 8, 8, 8, 8, 6, 6, 6, /*0 - 8*/},
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
            {256, 0, 0, /*0 - 2*/},
            {256, 0, 0, /*0 - 2*/},
        },
        /* nExtMaskStrenLuma */
        128,
        /* nExtMaskStrenChrom */
        128,
        /* nExtMaskStrenStatus */
        0,
        /* nExtMaskRatioLuma[2] */
        {96, 0, /*0 - 1*/},
        /* nExtMaskRatioChrom[2] */
        {96, 0, /*0 - 1*/},
        /* nExtMaskRatioStatus[2] */
        {0, 0, /*0 - 1*/},
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
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 8 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
            /* nStasUpdateLut 9 */
            {
                {4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
                {1, 2, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 8, 8, 8, 8, /*0 - 15*/},
            },
        },
        /* nTfRatioLut[12][16] */
        {
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
            {128, 116, 104, 94, 84, 69, 64, 51, 43, 37, 32, 28, 26, 23, 21, 18, /*0 - 15*/},
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
                {0, 255, /*0 - 1*/},
                {0, 255, /*0 - 1*/},
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
        {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, /*0 - 9*/},
        /* nSf0DirStre[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 9*/},
        /* nSf0DetailStre[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 9*/},
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
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 1 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 2 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 3 */
            {
                {256, 0, 0, /*0 - 2*/},
                {256, 0, 0, /*0 - 2*/},
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
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nExtMaskStrenChrom[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 9*/},
        /* nExtMaskStrenStatus[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nExtMaskRatioLuma[12][2] */
        {
            {96, 0, /*0 - 1*/},
            {96, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nExtMaskRatioChrom[12][2] */
        {
            {96, 0, /*0 - 1*/},
            {96, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {64, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nExtMaskRatioStatus[12][2] */
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
    1,
    /* tMaskControl */
    {
        /* nMotionMaskEn */
        1,
        /* nShpClnpNpuMaskEn */
        0,
        /* nShpLumaMaskLut[17] */
        {0, 0, 0, 0, 0, 75, 170, 252, 252, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 16*/},
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
        {4, 4, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {32, 32, /*0 - 1*/},
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
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
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
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSpread[8][3] */
        {
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
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
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskLimit[8] */
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
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
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {-20, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-32, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {127, 127, /*0 - 1*/},
        /* nHighFreqOsGain[2] */
        {8, 8, /*0 - 1*/},
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
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {-20, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-32, -32, -32, -32, -32, -32, -32, -32, -32, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {64, 64, /*0 - 1*/},
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
        {0, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nDirFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {-20, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-32, -32, -32, -32, -32, -32, -32, -32, -32, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {64, 64, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {0, 76, 163, 255, 255, 255, 255, 255, 255, /*0 - 8*/},
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
        {64, 64, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {32, 16, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        0,
        /* nHighFreqCorSlope */
        0,
        /* nHighFreqCorOffset */
        0,
        /* nHighFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {4, 0, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        0,
        /* nMedFreqCorSlope */
        0,
        /* nMedFreqCorOffset */
        4,
        /* nMedFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {16, 8, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        0,
        /* nDirFreqCorSlope */
        0,
        /* nDirFreqCorOffset */
        4,
        /* nDirFreqLimit[2] */
        {1023, 1023, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {8, 0, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        0,
        /* nLowFreqCorSlope */
        0,
        /* nLowFreqCorOffset */
        4,
        /* nLowFreqLimit[2] */
        {512, 512, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {8, 8, 24, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {24, 48, 48, /*0 - 2*/},
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
        10,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 182272, 262144, /*0 - 9*/},
        /* nHighFreqLogGain[12][2] */
        {
            {32, 16, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {12, 6, /*0 - 1*/},
            {12, 6, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
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
        },
        /* nHighFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nHighFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nHighFreqCorOffset[12] */
        {0, 8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 9*/},
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
        },
        /* nMedFreqLogGain[12][2] */
        {
            {4, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {8, 4, /*0 - 1*/},
            {8, 4, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
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
        },
        /* nMedFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nMedFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nMedFreqCorOffset[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 9*/},
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
        },
        /* nDirFreqLogGain[12][2] */
        {
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {16, 8, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
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
        },
        /* nDirFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nDirFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nDirFreqCorOffset[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 9*/},
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
        },
        /* nLowFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nLowFreqCorSlope[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
        /* nLowFreqCorOffset[12] */
        {4, 6, 6, 6, 6, 8, 8, 8, 8, 8, /*0 - 9*/},
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
        },
        /* nShpHpfBsigma[12][3] */
        {
            {8, 8, 24, /*0 - 2*/},
            {8, 8, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 16, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
            {8, 24, 36, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {24, 48, 48, /*0 - 2*/},
            {24, 48, 48, /*0 - 2*/},
            {24, 48, 64, /*0 - 2*/},
            {24, 48, 64, /*0 - 2*/},
            {24, 48, 64, /*0 - 2*/},
            {24, 48, 64, /*0 - 2*/},
            {24, 36, 64, /*0 - 2*/},
            {24, 36, 64, /*0 - 2*/},
            {24, 36, 64, /*0 - 2*/},
            {24, 36, 64, /*0 - 2*/},
            {24, 36, 64, /*0 - 2*/},
            {24, 36, 64, /*0 - 2*/},
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
        },
        /* nGrainLogGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
    },
};

const static AX_ISP_IQ_CCMP_PARAM_T ccmp_param_hdr_2x = {
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
