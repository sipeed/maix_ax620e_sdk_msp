#ifndef __SC450AI_SDR_H__
#define __SC450AI_SDR_H__

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
    "Oct 25 2023 22:41:15",
    /* szIspVersion[64] */
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
        0,
        /* nRefValStart[4] */
        {1024, 8191, /*0 - 1*/},
        /* nRefValEnd[4] */
        {8191, 102400, /*0 - 1*/},
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
        28953,
        /* nAGain */
        61975,
        /* nDgain */
        1024,
        /* nHcgLcg */
        2,
        /* nSnsTotalAGain */
        61975,
        /* nSysTotalGain */
        1752335,
        /* nShutter */
        200000,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        0,
        /* nHdrRealRatioLtoS */
        1024,
        /* nHdrRealRatioStoVS */
        1024,
        /* nSetPoint */
        15360,
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
        700064,
        /* nRealMaxShutter */
        200000,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        15360,
        /* nFaceTarget */
        35840,
        /* nVehicleTarget */
        35840,
        /* nTolerance */
        5242880,
        /* nAgainLcg2HcgTh */
        15872,
        /* nAgainHcg2LcgTh */
        1228,
        /* nAgainLcg2HcgRatio */
        1024,
        /* nAgainHcg2LcgRatio */
        1024,
        /* nLuxk */
        108910,
        /* nCompensationMode */
        1,
        /* nMaxIspGain */
        32768,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        1024,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        61976,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        2097152,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        200000,
        /* nMinShutter */
        30,
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
            0,
        },
        /* tAutoFlickerDetectParam */
        {
            /* nFlickerValidNum */
            5,
            /* tFlickerParamCurve */
            {
                /* nSize */
                7,
                /* nRefList[12] */
                {133120, 256000, 409600, 819200, 1536000, 2048000, 5120000, /*0 - 6*/},
                /* nFlickerValidThList[12] */
                {205, 512, 819, 1536, 2048, 3072, 65535, /*0 - 6*/},
                /* nFlickerTrigTimeList[12] */
                {200, 200, 200, 200, 200, 200, 200, /*0 - 6*/},
            },
            /* nSkipTh */
            2,
            /* nUpSlopeTh */
            51,
            /* nDownSlopeTh */
            -51,
        },
        /* nSetPointMode */
        1,
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
                    7,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            30,
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
                            65535,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            83000,
                            /* nGain */
                            98304,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            100000,
                            /* nGain */
                            131072,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 4 */
                        {
                            /* nIntergrationTime */
                            125000,
                            /* nGain */
                            409600,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 5 */
                        {
                            /* nIntergrationTime */
                            200000,
                            /* nGain */
                            1048576,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 6 */
                        {
                            /* nIntergrationTime */
                            333333,
                            /* nGain */
                            2097152,
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
                            30,
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
                            30,
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
                            166000,
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
                            166000,
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
                            166000,
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
            {1024, 10240, 20480, 51200, 102400, /*0 - 4*/},
            /* nSetPointList[10] */
            {30720, 28672, 24576, 20480, 15360, /*0 - 4*/},
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
            506,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            498,
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
            1361720,
            /* nBg */
            1482959,
        },
        /* nCenterPntRadius */
        1247962,
        /* nLowCut */
        0,
        /* nHighCut */
        56,
        /* nCctMax */
        13000,
        /* nCctMin */
        900,
        /* nPartCtrlPntNum */
        8,
        /* nCtrlPntNum */
        57,
        /* nCtrlSegKbNum */
        56,
        /* nCctList[512] */
        {
            900, 1075, 1250, 1425, 1600, 1775, 1950, 2125, 2300, 2362, 2425, 2487, 2550, 2612, 2675, 2737, 2800, 2925, 3050, 3175, 3300, 3425, 3550, 3675, 3800, 3950, 4100, 4250, 4400, 4550, 4700, 4850,  /* 0 - 31*/
            5000, 5187, 5375, 5562, 5750, 5937, 6125, 6312, 6500, 6625, 6750, 6875, 7000, 7125, 7250, 7375, 7500, 8187, 8875, 9562, 10250, 10937, 11625, 12312, 13000, /*32 - 56*/
        },
        /* tChordKB */
        {
            /* nK */
            -449,
            /* nB */
            1162,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1898562,
                /* nBg */
                356369,
            },
            /* 1 */
            {
                /* nRg */
                1791261,
                /* nBg */
                403482,
            },
            /* 2 */
            {
                /* nRg */
                1697435,
                /* nBg */
                444680,
            },
            /* 3 */
            {
                /* nRg */
                1614010,
                /* nBg */
                481307,
            },
            /* 4 */
            {
                /* nRg */
                1538733,
                /* nBg */
                514358,
            },
            /* 5 */
            {
                /* nRg */
                1469904,
                /* nBg */
                544588,
            },
            /* 6 */
            {
                /* nRg */
                1406182,
                /* nBg */
                572564,
            },
            /* 7 */
            {
                /* nRg */
                1346518,
                /* nBg */
                598758,
            },
            /* 8 */
            {
                /* nRg */
                1290074,
                /* nBg */
                623536,
            },
            /* 9 */
            {
                /* nRg */
                1270560,
                /* nBg */
                632113,
            },
            /* 10 */
            {
                /* nRg */
                1251329,
                /* nBg */
                640554,
            },
            /* 11 */
            {
                /* nRg */
                1232360,
                /* nBg */
                648880,
            },
            /* 12 */
            {
                /* nRg */
                1213632,
                /* nBg */
                657101,
            },
            /* 13 */
            {
                /* nRg */
                1195114,
                /* nBg */
                665238,
            },
            /* 14 */
            {
                /* nRg */
                1176785,
                /* nBg */
                673280,
            },
            /* 15 */
            {
                /* nRg */
                1158614,
                /* nBg */
                681260,
            },
            /* 16 */
            {
                /* nRg */
                1140589,
                /* nBg */
                689177,
            },
            /* 17 */
            {
                /* nRg */
                1113263,
                /* nBg */
                701172,
            },
            /* 18 */
            {
                /* nRg */
                1086136,
                /* nBg */
                713084,
            },
            /* 19 */
            {
                /* nRg */
                1059156,
                /* nBg */
                724933,
            },
            /* 20 */
            {
                /* nRg */
                1032239,
                /* nBg */
                736750,
            },
            /* 21 */
            {
                /* nRg */
                1005322,
                /* nBg */
                748568,
            },
            /* 22 */
            {
                /* nRg */
                978321,
                /* nBg */
                760417,
            },
            /* 23 */
            {
                /* nRg */
                951184,
                /* nBg */
                772339,
            },
            /* 24 */
            {
                /* nRg */
                923827,
                /* nBg */
                784345,
            },
            /* 25 */
            {
                /* nRg */
                916403,
                /* nBg */
                787606,
            },
            /* 26 */
            {
                /* nRg */
                908969,
                /* nBg */
                790878,
            },
            /* 27 */
            {
                /* nRg */
                901492,
                /* nBg */
                794150,
            },
            /* 28 */
            {
                /* nRg */
                894005,
                /* nBg */
                797442,
            },
            /* 29 */
            {
                /* nRg */
                886487,
                /* nBg */
                800745,
            },
            /* 30 */
            {
                /* nRg */
                878937,
                /* nBg */
                804059,
            },
            /* 31 */
            {
                /* nRg */
                871356,
                /* nBg */
                807383,
            },
            /* 32 */
            {
                /* nRg */
                863744,
                /* nBg */
                810728,
            },
            /* 33 */
            {
                /* nRg */
                855848,
                /* nBg */
                814198,
            },
            /* 34 */
            {
                /* nRg */
                847920,
                /* nBg */
                817680,
            },
            /* 35 */
            {
                /* nRg */
                839941,
                /* nBg */
                821182,
            },
            /* 36 */
            {
                /* nRg */
                831930,
                /* nBg */
                824695,
            },
            /* 37 */
            {
                /* nRg */
                823877,
                /* nBg */
                828239,
            },
            /* 38 */
            {
                /* nRg */
                815771,
                /* nBg */
                831793,
            },
            /* 39 */
            {
                /* nRg */
                807624,
                /* nBg */
                835369,
            },
            /* 40 */
            {
                /* nRg */
                799413,
                /* nBg */
                838976,
            },
            /* 41 */
            {
                /* nRg */
                790637,
                /* nBg */
                842824,
            },
            /* 42 */
            {
                /* nRg */
                781808,
                /* nBg */
                846704,
            },
            /* 43 */
            {
                /* nRg */
                772905,
                /* nBg */
                850615,
            },
            /* 44 */
            {
                /* nRg */
                763940,
                /* nBg */
                854558,
            },
            /* 45 */
            {
                /* nRg */
                754901,
                /* nBg */
                858522,
            },
            /* 46 */
            {
                /* nRg */
                745789,
                /* nBg */
                862517,
            },
            /* 47 */
            {
                /* nRg */
                736604,
                /* nBg */
                866554,
            },
            /* 48 */
            {
                /* nRg */
                727345,
                /* nBg */
                870622,
            },
            /* 49 */
            {
                /* nRg */
                674853,
                /* nBg */
                893670,
            },
            /* 50 */
            {
                /* nRg */
                619320,
                /* nBg */
                918049,
            },
            /* 51 */
            {
                /* nRg */
                560044,
                /* nBg */
                944075,
            },
            /* 52 */
            {
                /* nRg */
                496186,
                /* nBg */
                972114,
            },
            /* 53 */
            {
                /* nRg */
                426687,
                /* nBg */
                1002627,
            },
            /* 54 */
            {
                /* nRg */
                350224,
                /* nBg */
                1036203,
            },
            /* 55 */
            {
                /* nRg */
                265090,
                /* nBg */
                1073585,
            },
            /* 56 */
            {
                /* nRg */
                168999,
                /* nBg */
                1115769,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1862481,
                /* nBg */
                432097,
            },
            /* 1 */
            {
                /* nRg */
                1794040,
                /* nBg */
                396498,
            },
            /* 2 */
            {
                /* nRg */
                1723083,
                /* nBg */
                365366,
            },
            /* 3 */
            {
                /* nRg */
                1649882,
                /* nBg */
                338889,
            },
            /* 4 */
            {
                /* nRg */
                1574762,
                /* nBg */
                317215,
            },
            /* 5 */
            {
                /* nRg */
                1498038,
                /* nBg */
                300501,
            },
            /* 6 */
            {
                /* nRg */
                1420034,
                /* nBg */
                288851,
            },
            /* 7 */
            {
                /* nRg */
                1341087,
                /* nBg */
                282361,
            },
            /* 8 */
            {
                /* nRg */
                1261531,
                /* nBg */
                281113,
            },
            /* 9 */
            {
                /* nRg */
                1232685,
                /* nBg */
                278586,
            },
            /* 10 */
            {
                /* nRg */
                1203660,
                /* nBg */
                276761,
            },
            /* 11 */
            {
                /* nRg */
                1174479,
                /* nBg */
                275650,
            },
            /* 12 */
            {
                /* nRg */
                1145160,
                /* nBg */
                275230,
            },
            /* 13 */
            {
                /* nRg */
                1115716,
                /* nBg */
                275534,
            },
            /* 14 */
            {
                /* nRg */
                1086167,
                /* nBg */
                276551,
            },
            /* 15 */
            {
                /* nRg */
                1056524,
                /* nBg */
                278303,
            },
            /* 16 */
            {
                /* nRg */
                1026818,
                /* nBg */
                280777,
            },
            /* 17 */
            {
                /* nRg */
                983732,
                /* nBg */
                293612,
            },
            /* 18 */
            {
                /* nRg */
                941139,
                /* nBg */
                307998,
            },
            /* 19 */
            {
                /* nRg */
                899091,
                /* nBg */
                323916,
            },
            /* 20 */
            {
                /* nRg */
                857651,
                /* nBg */
                341332,
            },
            /* 21 */
            {
                /* nRg */
                816851,
                /* nBg */
                360228,
            },
            /* 22 */
            {
                /* nRg */
                776775,
                /* nBg */
                380581,
            },
            /* 23 */
            {
                /* nRg */
                737443,
                /* nBg */
                402360,
            },
            /* 24 */
            {
                /* nRg */
                698928,
                /* nBg */
                425554,
            },
            /* 25 */
            {
                /* nRg */
                688694,
                /* nBg */
                432034,
            },
            /* 26 */
            {
                /* nRg */
                678523,
                /* nBg */
                438619,
            },
            /* 27 */
            {
                /* nRg */
                668415,
                /* nBg */
                445299,
            },
            /* 28 */
            {
                /* nRg */
                658369,
                /* nBg */
                452083,
            },
            /* 29 */
            {
                /* nRg */
                648397,
                /* nBg */
                458962,
            },
            /* 30 */
            {
                /* nRg */
                638488,
                /* nBg */
                465935,
            },
            /* 31 */
            {
                /* nRg */
                628642,
                /* nBg */
                473002,
            },
            /* 32 */
            {
                /* nRg */
                618870,
                /* nBg */
                480164,
            },
            /* 33 */
            {
                /* nRg */
                608856,
                /* nBg */
                487672,
            },
            /* 34 */
            {
                /* nRg */
                598915,
                /* nBg */
                495263,
            },
            /* 35 */
            {
                /* nRg */
                589048,
                /* nBg */
                502960,
            },
            /* 36 */
            {
                /* nRg */
                579265,
                /* nBg */
                510761,
            },
            /* 37 */
            {
                /* nRg */
                569555,
                /* nBg */
                518657,
            },
            /* 38 */
            {
                /* nRg */
                559929,
                /* nBg */
                526647,
            },
            /* 39 */
            {
                /* nRg */
                550377,
                /* nBg */
                534732,
            },
            /* 40 */
            {
                /* nRg */
                540908,
                /* nBg */
                542911,
            },
            /* 41 */
            {
                /* nRg */
                530936,
                /* nBg */
                551719,
            },
            /* 42 */
            {
                /* nRg */
                521058,
                /* nBg */
                560632,
            },
            /* 43 */
            {
                /* nRg */
                511275,
                /* nBg */
                569639,
            },
            /* 44 */
            {
                /* nRg */
                501586,
                /* nBg */
                578762,
            },
            /* 45 */
            {
                /* nRg */
                491992,
                /* nBg */
                587979,
            },
            /* 46 */
            {
                /* nRg */
                482502,
                /* nBg */
                597300,
            },
            /* 47 */
            {
                /* nRg */
                473107,
                /* nBg */
                606727,
            },
            /* 48 */
            {
                /* nRg */
                463817,
                /* nBg */
                616248,
            },
            /* 49 */
            {
                /* nRg */
                414575,
                /* nBg */
                670355,
            },
            /* 50 */
            {
                /* nRg */
                368585,
                /* nBg */
                727261,
            },
            /* 51 */
            {
                /* nRg */
                326002,
                /* nBg */
                786757,
            },
            /* 52 */
            {
                /* nRg */
                286985,
                /* nBg */
                848644,
            },
            /* 53 */
            {
                /* nRg */
                251658,
                /* nBg */
                912712,
            },
            /* 54 */
            {
                /* nRg */
                220149,
                /* nBg */
                978751,
            },
            /* 55 */
            {
                /* nRg */
                192571,
                /* nBg */
                1046510,
            },
            /* 56 */
            {
                /* nRg */
                168999,
                /* nBg */
                1115769,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                -2148,
                /* nB */
                4239,
            },
            /* 1 */
            {
                /* nK */
                -2572,
                /* nB */
                4790,
            },
            /* 2 */
            {
                /* nK */
                -3166,
                /* nB */
                5561,
            },
            /* 3 */
            {
                /* nK */
                -4064,
                /* nB */
                6728,
            },
            /* 4 */
            {
                /* nK */
                -5602,
                /* nB */
                8725,
            },
            /* 5 */
            {
                /* nK */
                -8881,
                /* nB */
                12983,
            },
            /* 6 */
            {
                /* nK */
                -20968,
                /* nB */
                28679,
            },
            /* 7 */
            {
                /* nK */
                59577,
                /* nB */
                -75920,
            },
            /* 8 */
            {
                /* nK */
                12284,
                /* nB */
                -14503,
            },
            /* 9 */
            {
                /* nK */
                9558,
                /* nB */
                -10963,
            },
            /* 10 */
            {
                /* nK */
                7814,
                /* nB */
                -8699,
            },
            /* 11 */
            {
                /* nK */
                6603,
                /* nB */
                -7125,
            },
            /* 12 */
            {
                /* nK */
                5711,
                /* nB */
                -5967,
            },
            /* 13 */
            {
                /* nK */
                5026,
                /* nB */
                -5078,
            },
            /* 14 */
            {
                /* nK */
                4483,
                /* nB */
                -4373,
            },
            /* 15 */
            {
                /* nK */
                4042,
                /* nB */
                -3800,
            },
            /* 16 */
            {
                /* nK */
                3676,
                /* nB */
                -3324,
            },
            /* 17 */
            {
                /* nK */
                3222,
                /* nB */
                -2735,
            },
            /* 18 */
            {
                /* nK */
                2861,
                /* nB */
                -2266,
            },
            /* 19 */
            {
                /* nK */
                2565,
                /* nB */
                -1882,
            },
            /* 20 */
            {
                /* nK */
                2319,
                /* nB */
                -1563,
            },
            /* 21 */
            {
                /* nK */
                2110,
                /* nB */
                -1291,
            },
            /* 22 */
            {
                /* nK */
                1930,
                /* nB */
                -1057,
            },
            /* 23 */
            {
                /* nK */
                1773,
                /* nB */
                -853,
            },
            /* 24 */
            {
                /* nK */
                1634,
                /* nB */
                -672,
            },
            /* 25 */
            {
                /* nK */
                1599,
                /* nB */
                -627,
            },
            /* 26 */
            {
                /* nK */
                1565,
                /* nB */
                -584,
            },
            /* 27 */
            {
                /* nK */
                1533,
                /* nB */
                -541,
            },
            /* 28 */
            {
                /* nK */
                1501,
                /* nB */
                -500,
            },
            /* 29 */
            {
                /* nK */
                1470,
                /* nB */
                -460,
            },
            /* 30 */
            {
                /* nK */
                1440,
                /* nB */
                -421,
            },
            /* 31 */
            {
                /* nK */
                1411,
                /* nB */
                -383,
            },
            /* 32 */
            {
                /* nK */
                1382,
                /* nB */
                -346,
            },
            /* 33 */
            {
                /* nK */
                1354,
                /* nB */
                -309,
            },
            /* 34 */
            {
                /* nK */
                1326,
                /* nB */
                -273,
            },
            /* 35 */
            {
                /* nK */
                1299,
                /* nB */
                -237,
            },
            /* 36 */
            {
                /* nK */
                1272,
                /* nB */
                -203,
            },
            /* 37 */
            {
                /* nK */
                1247,
                /* nB */
                -170,
            },
            /* 38 */
            {
                /* nK */
                1221,
                /* nB */
                -137,
            },
            /* 39 */
            {
                /* nK */
                1197,
                /* nB */
                -105,
            },
            /* 40 */
            {
                /* nK */
                1173,
                /* nB */
                -74,
            },
            /* 41 */
            {
                /* nK */
                1148,
                /* nB */
                -41,
            },
            /* 42 */
            {
                /* nK */
                1123,
                /* nB */
                -10,
            },
            /* 43 */
            {
                /* nK */
                1100,
                /* nB */
                20,
            },
            /* 44 */
            {
                /* nK */
                1076,
                /* nB */
                50,
            },
            /* 45 */
            {
                /* nK */
                1054,
                /* nB */
                80,
            },
            /* 46 */
            {
                /* nK */
                1031,
                /* nB */
                109,
            },
            /* 47 */
            {
                /* nK */
                1010,
                /* nB */
                137,
            },
            /* 48 */
            {
                /* nK */
                988,
                /* nB */
                165,
            },
            /* 49 */
            {
                /* nK */
                879,
                /* nB */
                307,
            },
            /* 50 */
            {
                /* nK */
                779,
                /* nB */
                436,
            },
            /* 51 */
            {
                /* nK */
                688,
                /* nB */
                554,
            },
            /* 52 */
            {
                /* nK */
                604,
                /* nB */
                663,
            },
            /* 53 */
            {
                /* nK */
                526,
                /* nB */
                765,
            },
            /* 54 */
            {
                /* nK */
                452,
                /* nB */
                861,
            },
            /* 55 */
            {
                /* nK */
                382,
                /* nB */
                952,
            },
            /* 56 */
            {
                /* nK */
                315,
                /* nB */
                1039,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1903082,
                /* nBg */
                346900,
            },
            /* 1 */
            {
                /* nRg */
                1828937,
                /* nBg */
                308806,
            },
            /* 2 */
            {
                /* nRg */
                1752108,
                /* nBg */
                275566,
            },
            /* 3 */
            {
                /* nRg */
                1672930,
                /* nBg */
                247370,
            },
            /* 4 */
            {
                /* nRg */
                1591728,
                /* nBg */
                224385,
            },
            /* 5 */
            {
                /* nRg */
                1508848,
                /* nBg */
                206748,
            },
            /* 6 */
            {
                /* nRg */
                1424637,
                /* nBg */
                194584,
            },
            /* 7 */
            {
                /* nRg */
                1339461,
                /* nBg */
                187999,
            },
            /* 8 */
            {
                /* nRg */
                1253688,
                /* nBg */
                187066,
            },
            /* 9 */
            {
                /* nRg */
                1222629,
                /* nBg */
                184759,
            },
            /* 10 */
            {
                /* nRg */
                1191392,
                /* nBg */
                183197,
            },
            /* 11 */
            {
                /* nRg */
                1160019,
                /* nBg */
                182389,
            },
            /* 12 */
            {
                /* nRg */
                1128498,
                /* nBg */
                182337,
            },
            /* 13 */
            {
                /* nRg */
                1096873,
                /* nBg */
                183060,
            },
            /* 14 */
            {
                /* nRg */
                1065144,
                /* nBg */
                184549,
            },
            /* 15 */
            {
                /* nRg */
                1033351,
                /* nBg */
                186814,
            },
            /* 16 */
            {
                /* nRg */
                1001495,
                /* nBg */
                189866,
            },
            /* 17 */
            {
                /* nRg */
                955148,
                /* nBg */
                203675,
            },
            /* 18 */
            {
                /* nRg */
                909336,
                /* nBg */
                219152,
            },
            /* 19 */
            {
                /* nRg */
                864111,
                /* nBg */
                236265,
            },
            /* 20 */
            {
                /* nRg */
                819525,
                /* nBg */
                254993,
            },
            /* 21 */
            {
                /* nRg */
                775653,
                /* nBg */
                275325,
            },
            /* 22 */
            {
                /* nRg */
                732535,
                /* nBg */
                297219,
            },
            /* 23 */
            {
                /* nRg */
                690236,
                /* nBg */
                320644,
            },
            /* 24 */
            {
                /* nRg */
                648806,
                /* nBg */
                345590,
            },
            /* 25 */
            {
                /* nRg */
                637796,
                /* nBg */
                352563,
            },
            /* 26 */
            {
                /* nRg */
                626860,
                /* nBg */
                359641,
            },
            /* 27 */
            {
                /* nRg */
                615986,
                /* nBg */
                366834,
            },
            /* 28 */
            {
                /* nRg */
                605186,
                /* nBg */
                374121,
            },
            /* 29 */
            {
                /* nRg */
                594448,
                /* nBg */
                381524,
            },
            /* 30 */
            {
                /* nRg */
                583795,
                /* nBg */
                389022,
            },
            /* 31 */
            {
                /* nRg */
                573204,
                /* nBg */
                396634,
            },
            /* 32 */
            {
                /* nRg */
                562697,
                /* nBg */
                404341,
            },
            /* 33 */
            {
                /* nRg */
                551928,
                /* nBg */
                412405,
            },
            /* 34 */
            {
                /* nRg */
                541233,
                /* nBg */
                420573,
            },
            /* 35 */
            {
                /* nRg */
                530621,
                /* nBg */
                428857,
            },
            /* 36 */
            {
                /* nRg */
                520094,
                /* nBg */
                437246,
            },
            /* 37 */
            {
                /* nRg */
                509650,
                /* nBg */
                445729,
            },
            /* 38 */
            {
                /* nRg */
                499290,
                /* nBg */
                454327,
            },
            /* 39 */
            {
                /* nRg */
                489024,
                /* nBg */
                463030,
            },
            /* 40 */
            {
                /* nRg */
                478843,
                /* nBg */
                471828,
            },
            /* 41 */
            {
                /* nRg */
                468116,
                /* nBg */
                481296,
            },
            /* 42 */
            {
                /* nRg */
                457483,
                /* nBg */
                490880,
            },
            /* 43 */
            {
                /* nRg */
                446956,
                /* nBg */
                500580,
            },
            /* 44 */
            {
                /* nRg */
                436543,
                /* nBg */
                510384,
            },
            /* 45 */
            {
                /* nRg */
                426225,
                /* nBg */
                520303,
            },
            /* 46 */
            {
                /* nRg */
                416012,
                /* nBg */
                530328,
            },
            /* 47 */
            {
                /* nRg */
                405914,
                /* nBg */
                540468,
            },
            /* 48 */
            {
                /* nRg */
                395921,
                /* nBg */
                550712,
            },
            /* 49 */
            {
                /* nRg */
                342947,
                /* nBg */
                608908,
            },
            /* 50 */
            {
                /* nRg */
                293475,
                /* nBg */
                670113,
            },
            /* 51 */
            {
                /* nRg */
                247684,
                /* nBg */
                734108,
            },
            /* 52 */
            {
                /* nRg */
                205710,
                /* nBg */
                800682,
            },
            /* 53 */
            {
                /* nRg */
                167720,
                /* nBg */
                869595,
            },
            /* 54 */
            {
                /* nRg */
                133830,
                /* nBg */
                940615,
            },
            /* 55 */
            {
                /* nRg */
                104155,
                /* nBg */
                1013501,
            },
            /* 56 */
            {
                /* nRg */
                78800,
                /* nBg */
                1088002,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1826399,
                /* nBg */
                507825,
            },
            /* 1 */
            {
                /* nRg */
                1763023,
                /* nBg */
                474439,
            },
            /* 2 */
            {
                /* nRg */
                1697267,
                /* nBg */
                445183,
            },
            /* 3 */
            {
                /* nRg */
                1629393,
                /* nBg */
                420227,
            },
            /* 4 */
            {
                /* nRg */
                1559683,
                /* nBg */
                399738,
            },
            /* 5 */
            {
                /* nRg */
                1488433,
                /* nBg */
                383831,
            },
            /* 6 */
            {
                /* nRg */
                1415945,
                /* nBg */
                372632,
            },
            /* 7 */
            {
                /* nRg */
                1342523,
                /* nBg */
                366236,
            },
            /* 8 */
            {
                /* nRg */
                1268504,
                /* nBg */
                364705,
            },
            /* 9 */
            {
                /* nRg */
                1241619,
                /* nBg */
                362000,
            },
            /* 10 */
            {
                /* nRg */
                1214555,
                /* nBg */
                359945,
            },
            /* 11 */
            {
                /* nRg */
                1187334,
                /* nBg */
                358540,
            },
            /* 12 */
            {
                /* nRg */
                1159966,
                /* nBg */
                357806,
            },
            /* 13 */
            {
                /* nRg */
                1132462,
                /* nBg */
                357732,
            },
            /* 14 */
            {
                /* nRg */
                1104843,
                /* nBg */
                358330,
            },
            /* 15 */
            {
                /* nRg */
                1077129,
                /* nBg */
                359620,
            },
            /* 16 */
            {
                /* nRg */
                1049331,
                /* nBg */
                361580,
            },
            /* 17 */
            {
                /* nRg */
                1009139,
                /* nBg */
                373566,
            },
            /* 18 */
            {
                /* nRg */
                969409,
                /* nBg */
                386977,
            },
            /* 19 */
            {
                /* nRg */
                930192,
                /* nBg */
                401825,
            },
            /* 20 */
            {
                /* nRg */
                891531,
                /* nBg */
                418067,
            },
            /* 21 */
            {
                /* nRg */
                853478,
                /* nBg */
                435694,
            },
            /* 22 */
            {
                /* nRg */
                816086,
                /* nBg */
                454684,
            },
            /* 23 */
            {
                /* nRg */
                779407,
                /* nBg */
                474994,
            },
            /* 24 */
            {
                /* nRg */
                743482,
                /* nBg */
                496627,
            },
            /* 25 */
            {
                /* nRg */
                733930,
                /* nBg */
                502677,
            },
            /* 26 */
            {
                /* nRg */
                724440,
                /* nBg */
                508822,
            },
            /* 27 */
            {
                /* nRg */
                715013,
                /* nBg */
                515050,
            },
            /* 28 */
            {
                /* nRg */
                705650,
                /* nBg */
                521373,
            },
            /* 29 */
            {
                /* nRg */
                696338,
                /* nBg */
                527790,
            },
            /* 30 */
            {
                /* nRg */
                687100,
                /* nBg */
                534291,
            },
            /* 31 */
            {
                /* nRg */
                677925,
                /* nBg */
                540887,
            },
            /* 32 */
            {
                /* nRg */
                668803,
                /* nBg */
                547577,
            },
            /* 33 */
            {
                /* nRg */
                659460,
                /* nBg */
                554571,
            },
            /* 34 */
            {
                /* nRg */
                650191,
                /* nBg */
                561659,
            },
            /* 35 */
            {
                /* nRg */
                640984,
                /* nBg */
                568842,
            },
            /* 36 */
            {
                /* nRg */
                631861,
                /* nBg */
                576109,
            },
            /* 37 */
            {
                /* nRg */
                622802,
                /* nBg */
                583470,
            },
            /* 38 */
            {
                /* nRg */
                613826,
                /* nBg */
                590925,
            },
            /* 39 */
            {
                /* nRg */
                604913,
                /* nBg */
                598475,
            },
            /* 40 */
            {
                /* nRg */
                596084,
                /* nBg */
                606108,
            },
            /* 41 */
            {
                /* nRg */
                586783,
                /* nBg */
                614319,
            },
            /* 42 */
            {
                /* nRg */
                577566,
                /* nBg */
                622623,
            },
            /* 43 */
            {
                /* nRg */
                568433,
                /* nBg */
                631033,
            },
            /* 44 */
            {
                /* nRg */
                559405,
                /* nBg */
                639537,
            },
            /* 45 */
            {
                /* nRg */
                550450,
                /* nBg */
                648146,
            },
            /* 46 */
            {
                /* nRg */
                541600,
                /* nBg */
                656838,
            },
            /* 47 */
            {
                /* nRg */
                532844,
                /* nBg */
                665626,
            },
            /* 48 */
            {
                /* nRg */
                524173,
                /* nBg */
                674507,
            },
            /* 49 */
            {
                /* nRg */
                478235,
                /* nBg */
                724975,
            },
            /* 50 */
            {
                /* nRg */
                435337,
                /* nBg */
                778054,
            },
            /* 51 */
            {
                /* nRg */
                395617,
                /* nBg */
                833555,
            },
            /* 52 */
            {
                /* nRg */
                359232,
                /* nBg */
                891279,
            },
            /* 53 */
            {
                /* nRg */
                326275,
                /* nBg */
                951048,
            },
            /* 54 */
            {
                /* nRg */
                296883,
                /* nBg */
                1012641,
            },
            /* 55 */
            {
                /* nRg */
                271151,
                /* nBg */
                1075849,
            },
            /* 56 */
            {
                /* nRg */
                249173,
                /* nBg */
                1140452,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1930145,
                /* nBg */
                290110,
            },
            /* 1 */
            {
                /* nRg */
                1852194,
                /* nBg */
                250358,
            },
            /* 2 */
            {
                /* nRg */
                1771464,
                /* nBg */
                215703,
            },
            /* 3 */
            {
                /* nRg */
                1688302,
                /* nBg */
                186363,
            },
            /* 4 */
            {
                /* nRg */
                1603042,
                /* nBg */
                162498,
            },
            /* 5 */
            {
                /* nRg */
                1516052,
                /* nBg */
                144253,
            },
            /* 6 */
            {
                /* nRg */
                1427710,
                /* nBg */
                131754,
            },
            /* 7 */
            {
                /* nRg */
                1338381,
                /* nBg */
                125095,
            },
            /* 8 */
            {
                /* nRg */
                1248466,
                /* nBg */
                124361,
            },
            /* 9 */
            {
                /* nRg */
                1215929,
                /* nBg */
                122201,
            },
            /* 10 */
            {
                /* nRg */
                1183224,
                /* nBg */
                120817,
            },
            /* 11 */
            {
                /* nRg */
                1150372,
                /* nBg */
                120219,
            },
            /* 12 */
            {
                /* nRg */
                1117394,
                /* nBg */
                120418,
            },
            /* 13 */
            {
                /* nRg */
                1084311,
                /* nBg */
                121415,
            },
            /* 14 */
            {
                /* nRg */
                1051135,
                /* nBg */
                123218,
            },
            /* 15 */
            {
                /* nRg */
                1017895,
                /* nBg */
                125829,
            },
            /* 16 */
            {
                /* nRg */
                984613,
                /* nBg */
                129258,
            },
            /* 17 */
            {
                /* nRg */
                936095,
                /* nBg */
                143718,
            },
            /* 18 */
            {
                /* nRg */
                888133,
                /* nBg */
                159918,
            },
            /* 19 */
            {
                /* nRg */
                840790,
                /* nBg */
                177838,
            },
            /* 20 */
            {
                /* nRg */
                794118,
                /* nBg */
                197447,
            },
            /* 21 */
            {
                /* nRg */
                748180,
                /* nBg */
                218722,
            },
            /* 22 */
            {
                /* nRg */
                703049,
                /* nBg */
                241644,
            },
            /* 23 */
            {
                /* nRg */
                658768,
                /* nBg */
                266171,
            },
            /* 24 */
            {
                /* nRg */
                615388,
                /* nBg */
                292280,
            },
            /* 25 */
            {
                /* nRg */
                603864,
                /* nBg */
                299578,
            },
            /* 26 */
            {
                /* nRg */
                592414,
                /* nBg */
                306992,
            },
            /* 27 */
            {
                /* nRg */
                581026,
                /* nBg */
                314520,
            },
            /* 28 */
            {
                /* nRg */
                569723,
                /* nBg */
                322154,
            },
            /* 29 */
            {
                /* nRg */
                558493,
                /* nBg */
                329903,
            },
            /* 30 */
            {
                /* nRg */
                547336,
                /* nBg */
                337757,
            },
            /* 31 */
            {
                /* nRg */
                536252,
                /* nBg */
                345716,
            },
            /* 32 */
            {
                /* nRg */
                525253,
                /* nBg */
                353779,
            },
            /* 33 */
            {
                /* nRg */
                513970,
                /* nBg */
                362231,
            },
            /* 34 */
            {
                /* nRg */
                502771,
                /* nBg */
                370787,
            },
            /* 35 */
            {
                /* nRg */
                491667,
                /* nBg */
                379448,
            },
            /* 36 */
            {
                /* nRg */
                480646,
                /* nBg */
                388225,
            },
            /* 37 */
            {
                /* nRg */
                469710,
                /* nBg */
                397117,
            },
            /* 38 */
            {
                /* nRg */
                458867,
                /* nBg */
                406113,
            },
            /* 39 */
            {
                /* nRg */
                448119,
                /* nBg */
                415226,
            },
            /* 40 */
            {
                /* nRg */
                437466,
                /* nBg */
                424432,
            },
            /* 41 */
            {
                /* nRg */
                426225,
                /* nBg */
                434352,
            },
            /* 42 */
            {
                /* nRg */
                415100,
                /* nBg */
                444387,
            },
            /* 43 */
            {
                /* nRg */
                404090,
                /* nBg */
                454537,
            },
            /* 44 */
            {
                /* nRg */
                393174,
                /* nBg */
                464802,
            },
            /* 45 */
            {
                /* nRg */
                382374,
                /* nBg */
                475183,
            },
            /* 46 */
            {
                /* nRg */
                371689,
                /* nBg */
                485679,
            },
            /* 47 */
            {
                /* nRg */
                361109,
                /* nBg */
                496291,
            },
            /* 48 */
            {
                /* nRg */
                350654,
                /* nBg */
                507018,
            },
            /* 49 */
            {
                /* nRg */
                295195,
                /* nBg */
                567940,
            },
            /* 50 */
            {
                /* nRg */
                243406,
                /* nBg */
                632019,
            },
            /* 51 */
            {
                /* nRg */
                195465,
                /* nBg */
                699012,
            },
            /* 52 */
            {
                /* nRg */
                151530,
                /* nBg */
                768701,
            },
            /* 53 */
            {
                /* nRg */
                111757,
                /* nBg */
                840843,
            },
            /* 54 */
            {
                /* nRg */
                76273,
                /* nBg */
                915197,
            },
            /* 55 */
            {
                /* nRg */
                45215,
                /* nBg */
                991502,
            },
            /* 56 */
            {
                /* nRg */
                18675,
                /* nBg */
                1069495,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1799335,
                /* nBg */
                564616,
            },
            /* 1 */
            {
                /* nRg */
                1739766,
                /* nBg */
                532897,
            },
            /* 2 */
            {
                /* nRg */
                1677910,
                /* nBg */
                505047,
            },
            /* 3 */
            {
                /* nRg */
                1614031,
                /* nBg */
                481244,
            },
            /* 4 */
            {
                /* nRg */
                1548369,
                /* nBg */
                461625,
            },
            /* 5 */
            {
                /* nRg */
                1481229,
                /* nBg */
                446337,
            },
            /* 6 */
            {
                /* nRg */
                1412872,
                /* nBg */
                435474,
            },
            /* 7 */
            {
                /* nRg */
                1343603,
                /* nBg */
                429140,
            },
            /* 8 */
            {
                /* nRg */
                1273726,
                /* nBg */
                427400,
            },
            /* 9 */
            {
                /* nRg */
                1248319,
                /* nBg */
                424558,
            },
            /* 10 */
            {
                /* nRg */
                1222734,
                /* nBg */
                422324,
            },
            /* 11 */
            {
                /* nRg */
                1196981,
                /* nBg */
                420710,
            },
            /* 12 */
            {
                /* nRg */
                1171071,
                /* nBg */
                419724,
            },
            /* 13 */
            {
                /* nRg */
                1145024,
                /* nBg */
                419378,
            },
            /* 14 */
            {
                /* nRg */
                1118852,
                /* nBg */
                419672,
            },
            /* 15 */
            {
                /* nRg */
                1092574,
                /* nBg */
                420605,
            },
            /* 16 */
            {
                /* nRg */
                1066213,
                /* nBg */
                422188,
            },
            /* 17 */
            {
                /* nRg */
                1028202,
                /* nBg */
                433523,
            },
            /* 18 */
            {
                /* nRg */
                990611,
                /* nBg */
                446211,
            },
            /* 19 */
            {
                /* nRg */
                953512,
                /* nBg */
                460251,
            },
            /* 20 */
            {
                /* nRg */
                916938,
                /* nBg */
                475624,
            },
            /* 21 */
            {
                /* nRg */
                880951,
                /* nBg */
                492296,
            },
            /* 22 */
            {
                /* nRg */
                845582,
                /* nBg */
                510258,
            },
            /* 23 */
            {
                /* nRg */
                810874,
                /* nBg */
                529478,
            },
            /* 24 */
            {
                /* nRg */
                776890,
                /* nBg */
                549936,
            },
            /* 25 */
            {
                /* nRg */
                767862,
                /* nBg */
                555661,
            },
            /* 26 */
            {
                /* nRg */
                758886,
                /* nBg */
                561471,
            },
            /* 27 */
            {
                /* nRg */
                749963,
                /* nBg */
                567364,
            },
            /* 28 */
            {
                /* nRg */
                741102,
                /* nBg */
                573351,
            },
            /* 29 */
            {
                /* nRg */
                732305,
                /* nBg */
                579412,
            },
            /* 30 */
            {
                /* nRg */
                723559,
                /* nBg */
                585567,
            },
            /* 31 */
            {
                /* nRg */
                714877,
                /* nBg */
                591806,
            },
            /* 32 */
            {
                /* nRg */
                706258,
                /* nBg */
                598129,
            },
            /* 33 */
            {
                /* nRg */
                697418,
                /* nBg */
                604745,
            },
            /* 34 */
            {
                /* nRg */
                688642,
                /* nBg */
                611446,
            },
            /* 35 */
            {
                /* nRg */
                679939,
                /* nBg */
                618240,
            },
            /* 36 */
            {
                /* nRg */
                671309,
                /* nBg */
                625119,
            },
            /* 37 */
            {
                /* nRg */
                662742,
                /* nBg */
                632092,
            },
            /* 38 */
            {
                /* nRg */
                654238,
                /* nBg */
                639139,
            },
            /* 39 */
            {
                /* nRg */
                645818,
                /* nBg */
                646279,
            },
            /* 40 */
            {
                /* nRg */
                637461,
                /* nBg */
                653494,
            },
            /* 41 */
            {
                /* nRg */
                628663,
                /* nBg */
                661263,
            },
            /* 42 */
            {
                /* nRg */
                619950,
                /* nBg */
                669128,
            },
            /* 43 */
            {
                /* nRg */
                611309,
                /* nBg */
                677076,
            },
            /* 44 */
            {
                /* nRg */
                602763,
                /* nBg */
                685129,
            },
            /* 45 */
            {
                /* nRg */
                594301,
                /* nBg */
                693256,
            },
            /* 46 */
            {
                /* nRg */
                585923,
                /* nBg */
                701487,
            },
            /* 47 */
            {
                /* nRg */
                577640,
                /* nBg */
                709802,
            },
            /* 48 */
            {
                /* nRg */
                569440,
                /* nBg */
                718201,
            },
            /* 49 */
            {
                /* nRg */
                525987,
                /* nBg */
                765943,
            },
            /* 50 */
            {
                /* nRg */
                485407,
                /* nBg */
                816149,
            },
            /* 51 */
            {
                /* nRg */
                447836,
                /* nBg */
                868651,
            },
            /* 52 */
            {
                /* nRg */
                413412,
                /* nBg */
                923261,
            },
            /* 53 */
            {
                /* nRg */
                382237,
                /* nBg */
                979800,
            },
            /* 54 */
            {
                /* nRg */
                354440,
                /* nBg */
                1038059,
            },
            /* 55 */
            {
                /* nRg */
                330092,
                /* nBg */
                1097849,
            },
            /* 56 */
            {
                /* nRg */
                309298,
                /* nBg */
                1158970,
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
                    1259340,
                    /* nBg */
                    254804,
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
                    1033896,
                    /* nBg */
                    306184,
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
                    643826,
                    /* nBg */
                    337641,
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
                    619708,
                    /* nBg */
                    481296,
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
                    570425,
                    /* nBg */
                    576717,
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
                    475005,
                    /* nBg */
                    627048,
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
                    567280,
                    /* nBg */
                    347079,
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
                416,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                795,
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
        2000,
        /* nCctMaxInner */
        8000,
        /* nCctMinOuter */
        1800,
        /* nCctMaxOuter */
        10000,
        /* nCctSplitHtoA */
        2500,
        /* nCctSplitAtoF */
        3300,
        /* nCctSplitFtoD5 */
        4600,
        /* nCctSplitD5toD6 */
        5600,
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
            {350, 100, 50, 50, 50, 50, 50, 50, /*0 - 7*/},
            {700, 400, 100, 100, 100, 100, 100, 100, /*0 - 7*/},
            {700, 400, 100, 100, 100, 100, 100, 100, /*0 - 7*/},
            {500, 100, 50, 50, 50, 50, 50, 50, /*0 - 7*/},
            {600, 150, 50, 50, 50, 50, 50, 50, /*0 - 7*/},
            {800, 600, 400, 200, 100, 100, 100, 100, /*0 - 7*/},
            {800, 600, 400, 200, 100, 100, 100, 100, /*0 - 7*/},
            {600, 150, 50, 50, 50, 50, 50, 50, /*0 - 7*/},
            {100, 300, 300, 10, 10, 10, 100, 100, /*0 - 7*/},
            {700, 700, 700, 500, 400, 300, 300, 300, /*0 - 7*/},
            {700, 700, 700, 500, 400, 300, 300, 300, /*0 - 7*/},
            {300, 300, 300, 100, 100, 100, 100, 100, /*0 - 7*/},
            {100, 1000, 500, 500, 450, 300, 300, 300, /*0 - 7*/},
            {1000, 1000, 1000, 1000, 700, 400, 400, 400, /*0 - 7*/},
            {1000, 1000, 1000, 1000, 900, 900, 900, 900, /*0 - 7*/},
            {400, 200, 200, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 300, 400, 500, 500, 300, 300, 300, /*0 - 7*/},
            {1000, 1000, 1000, 1000, 600, 300, 300, 300, /*0 - 7*/},
            {1000, 1000, 1000, 1000, 1000, 700, 700, 700, /*0 - 7*/},
            {200, 50, 50, 0, 0, 0, 0, 0, /*0 - 7*/},
            {200, 200, 200, 200, 200, 200, 200, 200, /*0 - 7*/},
            {400, 500, 500, 500, 500, 500, 500, 600, /*0 - 7*/},
            {400, 500, 500, 500, 500, 500, 500, 600, /*0 - 7*/},
            {200, 300, 300, 300, 100, 0, 0, 0, /*0 - 7*/},
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
            {205, 1024, 1024, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {205, 1024, 1024, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {102, 200, 819, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 819, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 819, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 819, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 819, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
            {0, 200, 819, 1024, 1024, 1024, 1024, 820, /*0 - 7*/},
        },
        /* bMixLightEn */
        1,
        /* nMixLightProba_0_CctStd[8] */
        {450, 450, 400, 450, 600, 9998, 9998, 9998, /*0 - 7*/},
        /* nMixLightProba_100_CctStd[8] */
        {750, 750, 600, 800, 1000, 9999, 9999, 9999, /*0 - 7*/},
        /* nMixLightProba_100_SatDiscnt[8] */
        {100, 100, 100, 100, 100, 100, 100, 100, /*0 - 7*/},
        /* nMixLightKneeNum */
        8,
        /* nMixLightKneeCctList[32] */
        {2300, 2800, 3500, 4600, 5500, 6500, 7500, 8500, /*0 - 7*/},
        /* nMixLightKneeWtList[8][32] */
        {
            {819, 819, 819, 307, 1024, 1024, 1024, 512, /*0 - 7*/},
            {819, 819, 819, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {512, 512, 819, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {512, 512, 819, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {512, 512, 819, 1024, 1024, 1024, 1024, 512, /*0 - 7*/},
            {512, 512, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {512, 512, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
            {512, 512, 1024, 1024, 1024, 1024, 1024, 1024, /*0 - 7*/},
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
                0,
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
        /* nSpatialStartLux[8] */
        {4096000, 11264000, /*0 - 1*/},
        /* nSpatialEndLux[8] */
        {10240000, 1024000000, /*0 - 1*/},
        /* nSpatialRg[8] */
        {488636, 622854, /*0 - 1*/},
        /* nSpatialBg[8] */
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
        {1500, 2000, 2200, 2400, 3800, 5000, 6500, 7500, 10000, 12000, /*0 - 9*/},
        /* nPreferDstCct[8][32] */
        {
            {1500, 2000, 2200, 2400, 3800, 5200, 6500, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2350, 3800, 5000, 6500, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2350, 3780, 4900, 6500, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6600, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6600, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 7500, 10000, 12000, /*0 - 9*/},
            {1500, 2000, 2200, 2400, 3800, 5000, 6500, 7500, 10000, 12000, /*0 - 9*/},
        },
        /* nPreferGrShift[8][32] */
        {
            {0, 0, 0, -20971, 0, -31456, -52428, -52428, 0, 0, /*0 - 9*/},
            {0, 0, 0, -10485, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, -20971, -20971, -10485, -20971, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, -52428, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, -20971, -20971, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, -20971, -20971, 0, 0, /*0 - 9*/},
            {0, 0, 0, 0, 0, 0, -20971, -20971, 0, 0, /*0 - 9*/},
        },
        /* nGreenCutEn */
        1,
        /* nGreenCutLuxListNum */
        7,
        /* nGreenCutCctListNum */
        6,
        /* nGreenCutLuxList[8] */
        {205, 819, 7168, 10240, 409600, 716800, 819200, /*0 - 6*/},
        /* nGreenCutWeight[8] */
        {614, 82, 819, 102, 819, 307, 1024, /*0 - 6*/},
        /* nGreenCutBreakAngle[8] */
        {10486, 10486, 10486, 10486, 10486, 10486, 10486, /*0 - 6*/},
        /* nGreenCutOffsetRg[8] */
        {10486, 10486, -83885, 10486, 10486, 10486, 10486, /*0 - 6*/},
        /* nGreenCutOffsetBg[8] */
        {31457, -31456, -83885, -31456, -31456, 31457, 31457, /*0 - 6*/},
        /* nGreenCutCctList[8] */
        {5000, 5500, 6500, 7500, 8500, 10000, /*0 - 5*/},
        /* nGreenCutCctDiscount[8] */
        {1024, 922, 614, 10, 10, 922, /*0 - 5*/},
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
            {30579744, 29427335, 29689627, 30827258, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {-7572603, -8292714, -15194268, -23543396, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {240800, 216905, 216426, 242113, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {6186286, 6374982, 6410447, 6153308, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {10445226, 11553627, 11383381, 10668026, /*0 - 3*/},
        },
        /* tLcgTable */
        {
            /* nShotNoiseCoeffsA[4] */
            {30579744, 29427335, 29689627, 30827258, /*0 - 3*/},
            /* nShotNoiseCoeffsB[4] */
            {-7572603, -8292714, -15194268, -23543396, /*0 - 3*/},
            /* nReadNoiseCoeffsA[4] */
            {240800, 216905, 216426, 242113, /*0 - 3*/},
            /* nReadNoiseCoeffsB[4] */
            {6186286, 6374982, 6410447, 6153308, /*0 - 3*/},
            /* nReadNoiseCoeffsC[4] */
            {10445226, 11553627, 11383381, 10668026, /*0 - 3*/},
        },
    },
    /* tManualParam */
    {
        /* nNoiseRatio */
        512,
        /* nDpType */
        1,
        /* nNonChwiseEn */
        0,
        /* nChwiseStr */
        20,
        /* nDetCoarseStr */
        90,
        /* nDetFineStr */
        25,
        /* nDynamicDpcStr */
        3290,
        /* nEdgeStr */
        102,
        /* nHotColdTypeStr */
        7,
        /* nSupWinkStr */
        16,
        /* nDynamicDpClrLimOffset */
        {
            /* nUpperLimit */
            65535,
            /* nLowerLimit */
            65535,
        },
        /* nStaticDpClrLimOffset */
        {
            /* nUpperLimit */
            65535,
            /* nLowerLimit */
            65535,
        },
        /* nNormalPixDpClrLimOffset */
        {
            /* nUpperLimit */
            65535,
            /* nLowerLimit */
            65535,
        },
        /* nDynamicDpClrLimStr */
        91,
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
        9,
        /* nRefVal[16] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nNoiseRatio[16] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 8*/},
        /* nDpType[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 8*/},
        /* nNonChwiseEn[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nChwiseStr[16] */
        {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
        /* nDetCoarseStr[16] */
        {90, 210, 210, 210, 210, 210, 210, 210, 210, /*0 - 8*/},
        /* nDetFineStr[16] */
        {25, 25, 25, 25, 25, 25, 25, 25, 25, /*0 - 8*/},
        /* nDynamicDpcStr[16] */
        {3290, 3290, 3290, 3290, 3290, 3290, 3290, 3290, 3290, /*0 - 8*/},
        /* nEdgeStr[16] */
        {102, 102, 102, 102, 102, 102, 102, 102, 102, /*0 - 8*/},
        /* nHotColdTypeStr[16] */
        {7, 7, 7, 7, 7, 7, 7, 7, 7, /*0 - 8*/},
        /* nSupWinkStr[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
        /* nDynamicDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 1 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 2 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 3 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 4 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 5 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 6 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 7 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 8 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
        },
        /* nStaticDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 1 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 2 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 3 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 4 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 5 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 6 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 7 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 8 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
        },
        /* nNormalPixDpClrLimOffset[16] */
        {
            /* 0 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 1 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 2 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 3 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 4 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 5 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 6 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 7 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
            /* 8 */
            {
                /* nUpperLimit */
                65535,
                /* nLowerLimit */
                65535,
            },
        },
        /* nDynamicDpClrLimStr[16] */
        {91, 91, 91, 91, 91, 91, 91, 91, 91, /*0 - 8*/},
        /* nStaticDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nNormalPixDpClrLimStr[16] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nPreDetLevelSlope[16] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 8*/},
        /* nPreDetLevelOffset[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nPreDetLevelMax[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
    },
};

const static AX_ISP_IQ_BLC_PARAM_T blc_param_sdr = {
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
            0,
            /* nExposeTimeGrpNum */
            0,
            /* nGain[16] */
            {1024, /*0 - 0*/},
            /* nExposeTime[10] */
            {0, /*0 - 0*/},
            /* nAutoSblRValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {0, /*0 - 0*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {0, /*0 - 0*/},
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
            },
        },
        /* tLcgAutoTable */
        {
            /* nGainGrpNum */
            16,
            /* nExposeTimeGrpNum */
            1,
            /* nGain[16] */
            {1024, 12288, 16384, 28672, 32768, 36864, 40960, 45056, 49152, 53248, 57344, 61440, 262144, 524288, 1048576, 2097152, /*0 - 15*/},
            /* nExposeTime[10] */
            {33000, /*0 - 0*/},
            /* nAutoSblRValue[16][10] */
            {
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4137, /*0 - 0*/},
                {4145, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4136, /*0 - 0*/},
                {4141, /*0 - 0*/},
                {4142, /*0 - 0*/},
                {4139, /*0 - 0*/},
                {4135, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4137, /*0 - 0*/},
                {4145, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4136, /*0 - 0*/},
                {4141, /*0 - 0*/},
                {4142, /*0 - 0*/},
                {4139, /*0 - 0*/},
                {4135, /*0 - 0*/},
                {4035, /*0 - 0*/},
                {4032, /*0 - 0*/},
                {4032, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4137, /*0 - 0*/},
                {4145, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4136, /*0 - 0*/},
                {4141, /*0 - 0*/},
                {4142, /*0 - 0*/},
                {4139, /*0 - 0*/},
                {4135, /*0 - 0*/},
                {4035, /*0 - 0*/},
                {4032, /*0 - 0*/},
                {4032, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4137, /*0 - 0*/},
                {4145, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4128, /*0 - 0*/},
                {4136, /*0 - 0*/},
                {4141, /*0 - 0*/},
                {4142, /*0 - 0*/},
                {4139, /*0 - 0*/},
                {4135, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
                {4096, /*0 - 0*/},
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
                /* 12 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 6, 6, 0, /*0 - 3*/},
                    },
                },
                /* 13 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 8, 8, 0, /*0 - 3*/},
                    },
                },
                /* 14 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 8, 8, 0, /*0 - 3*/},
                    },
                },
                /* 15 */
                {
                    /* 0 */
                    {
                        /* nBiasOut[4] */
                        {0, 8, 8, 0, /*0 - 3*/},
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
            "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
            /* szModelName[256] */
            "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
			/* szTemporalBaseNrName[256] */
			"20240717_3d_S2-I900V_iso51200_102400",
			/* szSpatialBaseNrName[256] */
			"20240717_2d_S2-I900V_iso51200_102400",
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
            {3584, 3584, 3584, 3584, /*0 - 3*/},
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
                    {16, 384, /*0 - 1*/},
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
                    {240, 3072, /*0 - 1*/},
                    {255, 3072, /*0 - 1*/},
                },
            },
        },
    },
    /* tAutoParam */
    {
        /* nAutoModelNum */
        8,
        /* tAutoModelTable[12] */
        {
            /* 0 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_1-8x",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_1-4x_lv3",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    100,
                    /* nIsoThresholdMax */
                    800,
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
                        2,
                        /* nRefValStart[4] */
                        {1024, 4608, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {4608, 8192, /*0 - 1*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {1024, 2816, 4608, 6400, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {2816, 4608, 6400, 8192, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 384, /*0 - 1*/},
                                {64, 550, /*0 - 1*/},
                                {80, 758, /*0 - 1*/},
                                {96, 1002, /*0 - 1*/},
                                {112, 1281, /*0 - 1*/},
                                {128, 1698, /*0 - 1*/},
                                {144, 2081, /*0 - 1*/},
                                {160, 2464, /*0 - 1*/},
                                {176, 2847, /*0 - 1*/},
                                {192, 3370, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 384, /*0 - 1*/},
                                {64, 550, /*0 - 1*/},
                                {80, 758, /*0 - 1*/},
                                {96, 1002, /*0 - 1*/},
                                {112, 1281, /*0 - 1*/},
                                {128, 1698, /*0 - 1*/},
                                {144, 2081, /*0 - 1*/},
                                {160, 2464, /*0 - 1*/},
                                {176, 2847, /*0 - 1*/},
                                {192, 3370, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 2 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 384, /*0 - 1*/},
                                {64, 550, /*0 - 1*/},
                                {80, 758, /*0 - 1*/},
                                {96, 1002, /*0 - 1*/},
                                {112, 1281, /*0 - 1*/},
                                {128, 1698, /*0 - 1*/},
                                {144, 2081, /*0 - 1*/},
                                {160, 2464, /*0 - 1*/},
                                {176, 2847, /*0 - 1*/},
                                {192, 3370, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nTemporalFilterStrLut 3 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 384, /*0 - 1*/},
                                {64, 550, /*0 - 1*/},
                                {80, 758, /*0 - 1*/},
                                {96, 1002, /*0 - 1*/},
                                {112, 1281, /*0 - 1*/},
                                {128, 1698, /*0 - 1*/},
                                {144, 2081, /*0 - 1*/},
                                {160, 2464, /*0 - 1*/},
                                {176, 2847, /*0 - 1*/},
                                {192, 3370, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 384, /*0 - 1*/},
                                {64, 550, /*0 - 1*/},
                                {80, 758, /*0 - 1*/},
                                {96, 1002, /*0 - 1*/},
                                {112, 1281, /*0 - 1*/},
                                {128, 1698, /*0 - 1*/},
                                {144, 2081, /*0 - 1*/},
                                {160, 2464, /*0 - 1*/},
                                {176, 2847, /*0 - 1*/},
                                {192, 3370, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nVstTemporalFilterStrLut 1 */
                            {
                                {0, 0, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 384, /*0 - 1*/},
                                {64, 550, /*0 - 1*/},
                                {80, 758, /*0 - 1*/},
                                {96, 1002, /*0 - 1*/},
                                {112, 1281, /*0 - 1*/},
                                {128, 1698, /*0 - 1*/},
                                {144, 2081, /*0 - 1*/},
                                {160, 2464, /*0 - 1*/},
                                {176, 2847, /*0 - 1*/},
                                {192, 3370, /*0 - 1*/},
                                {208, 4096, /*0 - 1*/},
                                {224, 4096, /*0 - 1*/},
                                {240, 4096, /*0 - 1*/},
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
                        {1024, 2816, 4608, 6400, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {2816, 4608, 6400, 8192, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 3584, /*0 - 1*/},
                                {16, 3584, /*0 - 1*/},
                                {32, 3584, /*0 - 1*/},
                                {48, 3584, /*0 - 1*/},
                                {64, 3584, /*0 - 1*/},
                                {80, 3584, /*0 - 1*/},
                                {96, 3584, /*0 - 1*/},
                                {112, 3584, /*0 - 1*/},
                                {128, 3584, /*0 - 1*/},
                                {144, 3584, /*0 - 1*/},
                                {160, 3584, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3584, /*0 - 1*/},
                                {16, 3584, /*0 - 1*/},
                                {32, 3584, /*0 - 1*/},
                                {48, 3584, /*0 - 1*/},
                                {64, 3584, /*0 - 1*/},
                                {80, 3584, /*0 - 1*/},
                                {96, 3584, /*0 - 1*/},
                                {112, 3584, /*0 - 1*/},
                                {128, 3584, /*0 - 1*/},
                                {144, 3584, /*0 - 1*/},
                                {160, 3584, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 2048, /*0 - 1*/},
                                {255, 2048, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 3584, /*0 - 1*/},
                                {16, 3584, /*0 - 1*/},
                                {32, 3584, /*0 - 1*/},
                                {48, 3584, /*0 - 1*/},
                                {64, 3584, /*0 - 1*/},
                                {80, 3584, /*0 - 1*/},
                                {96, 3584, /*0 - 1*/},
                                {112, 3584, /*0 - 1*/},
                                {128, 3584, /*0 - 1*/},
                                {144, 3584, /*0 - 1*/},
                                {160, 3584, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 2048, /*0 - 1*/},
                                {255, 2048, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 3584, /*0 - 1*/},
                                {16, 3584, /*0 - 1*/},
                                {32, 3584, /*0 - 1*/},
                                {48, 3584, /*0 - 1*/},
                                {64, 3584, /*0 - 1*/},
                                {80, 3584, /*0 - 1*/},
                                {96, 3584, /*0 - 1*/},
                                {112, 3584, /*0 - 1*/},
                                {128, 3584, /*0 - 1*/},
                                {144, 3584, /*0 - 1*/},
                                {160, 3584, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 2048, /*0 - 1*/},
                                {255, 2048, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_8-16x",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_8-16x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    800,
                    /* nIsoThresholdMax */
                    1600,
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
                        2,
                        /* nRefValStart[4] */
                        {8192, 65536, /*0 - 1*/},
                        /* nRefValEnd[4] */
                        {65536, 16384, /*0 - 1*/},
                        /* nBiasIn[4][4] */
                        {
                            {0, 0, 0, 0, /*0 - 3*/},
                            {0, 0, 0, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {8192, 10240, 12288, 14336, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {10240, 12288, 14336, 16384, /*0 - 3*/},
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
                        {8192, 10240, 12288, 14336, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {10240, 12288, 14336, 16384, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1536, /*0 - 1*/},
                                {16, 1536, /*0 - 1*/},
                                {32, 1536, /*0 - 1*/},
                                {48, 1536, /*0 - 1*/},
                                {64, 1536, /*0 - 1*/},
                                {80, 1536, /*0 - 1*/},
                                {96, 1536, /*0 - 1*/},
                                {112, 1536, /*0 - 1*/},
                                {128, 1536, /*0 - 1*/},
                                {144, 1536, /*0 - 1*/},
                                {160, 1536, /*0 - 1*/},
                                {176, 1536, /*0 - 1*/},
                                {192, 2048, /*0 - 1*/},
                                {208, 2048, /*0 - 1*/},
                                {224, 2048, /*0 - 1*/},
                                {240, 2048, /*0 - 1*/},
                                {255, 2048, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1536, /*0 - 1*/},
                                {16, 1536, /*0 - 1*/},
                                {32, 1536, /*0 - 1*/},
                                {48, 1536, /*0 - 1*/},
                                {64, 1536, /*0 - 1*/},
                                {80, 1536, /*0 - 1*/},
                                {96, 1536, /*0 - 1*/},
                                {112, 1536, /*0 - 1*/},
                                {128, 1536, /*0 - 1*/},
                                {144, 1536, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2584, /*0 - 1*/},
                                {192, 2584, /*0 - 1*/},
                                {208, 2584, /*0 - 1*/},
                                {224, 3072, /*0 - 1*/},
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 1536, /*0 - 1*/},
                                {16, 1536, /*0 - 1*/},
                                {32, 1536, /*0 - 1*/},
                                {48, 1536, /*0 - 1*/},
                                {64, 1536, /*0 - 1*/},
                                {80, 1536, /*0 - 1*/},
                                {96, 1536, /*0 - 1*/},
                                {112, 1536, /*0 - 1*/},
                                {128, 1536, /*0 - 1*/},
                                {144, 1536, /*0 - 1*/},
                                {160, 1536, /*0 - 1*/},
                                {176, 2584, /*0 - 1*/},
                                {192, 2584, /*0 - 1*/},
                                {208, 2584, /*0 - 1*/},
                                {224, 3072, /*0 - 1*/},
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 1536, /*0 - 1*/},
                                {16, 1536, /*0 - 1*/},
                                {32, 1536, /*0 - 1*/},
                                {48, 1536, /*0 - 1*/},
                                {64, 1536, /*0 - 1*/},
                                {80, 1536, /*0 - 1*/},
                                {96, 1536, /*0 - 1*/},
                                {112, 1536, /*0 - 1*/},
                                {128, 1536, /*0 - 1*/},
                                {144, 1536, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2584, /*0 - 1*/},
                                {192, 2584, /*0 - 1*/},
                                {208, 2584, /*0 - 1*/},
                                {224, 3072, /*0 - 1*/},
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_16-32x",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_16-32x",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    1600,
                    /* nIsoThresholdMax */
                    3200,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {3584, 3584, 3584, 3584, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {16384, 20480, 24576, 28672, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {20480, 24576, 28672, 32768, /*0 - 3*/},
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
                        {16384, 20480, 24576, 28672, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {20480, 24576, 28672, 32768, /*0 - 3*/},
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
                        {16384, 20480, 24576, 28672, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {20480, 24576, 28672, 32768, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1536, /*0 - 1*/},
                                {16, 1536, /*0 - 1*/},
                                {32, 1536, /*0 - 1*/},
                                {48, 1536, /*0 - 1*/},
                                {64, 1536, /*0 - 1*/},
                                {80, 1536, /*0 - 1*/},
                                {96, 1536, /*0 - 1*/},
                                {112, 1536, /*0 - 1*/},
                                {128, 1536, /*0 - 1*/},
                                {144, 1536, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1536, /*0 - 1*/},
                                {16, 1536, /*0 - 1*/},
                                {32, 1536, /*0 - 1*/},
                                {48, 1536, /*0 - 1*/},
                                {64, 1536, /*0 - 1*/},
                                {80, 1536, /*0 - 1*/},
                                {96, 1536, /*0 - 1*/},
                                {112, 1536, /*0 - 1*/},
                                {128, 1536, /*0 - 1*/},
                                {144, 1536, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2048, /*0 - 1*/},
                                {16, 2048, /*0 - 1*/},
                                {32, 2048, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 2048, /*0 - 1*/},
                                {80, 2048, /*0 - 1*/},
                                {96, 2048, /*0 - 1*/},
                                {112, 2048, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2048, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2048, /*0 - 1*/},
                                {16, 2048, /*0 - 1*/},
                                {32, 2048, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 2048, /*0 - 1*/},
                                {80, 2048, /*0 - 1*/},
                                {96, 2048, /*0 - 1*/},
                                {112, 2048, /*0 - 1*/},
                                {128, 2048, /*0 - 1*/},
                                {144, 2048, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_32-64x",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_32-64x_0717B",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    3200,
                    /* nIsoThresholdMax */
                    6400,
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
                        {32768, 40960, 49152, 57344, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {40960, 49152, 57344, 65536, /*0 - 3*/},
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
                        {32768, 40960, 49152, 57344, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {40960, 49152, 57344, 65536, /*0 - 3*/},
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
                        {32768, 40960, 49152, 57344, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {40960, 49152, 57344, 65536, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 1664, /*0 - 1*/},
                                {16, 1664, /*0 - 1*/},
                                {32, 1664, /*0 - 1*/},
                                {48, 1664, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1664, /*0 - 1*/},
                                {96, 1664, /*0 - 1*/},
                                {112, 1664, /*0 - 1*/},
                                {128, 1664, /*0 - 1*/},
                                {144, 1664, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 1664, /*0 - 1*/},
                                {16, 1664, /*0 - 1*/},
                                {32, 1664, /*0 - 1*/},
                                {48, 1664, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1664, /*0 - 1*/},
                                {96, 1664, /*0 - 1*/},
                                {112, 1664, /*0 - 1*/},
                                {128, 1664, /*0 - 1*/},
                                {144, 1664, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 1664, /*0 - 1*/},
                                {16, 1664, /*0 - 1*/},
                                {32, 1664, /*0 - 1*/},
                                {48, 1664, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1664, /*0 - 1*/},
                                {96, 1664, /*0 - 1*/},
                                {112, 1664, /*0 - 1*/},
                                {128, 1664, /*0 - 1*/},
                                {144, 1664, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 1664, /*0 - 1*/},
                                {16, 1664, /*0 - 1*/},
                                {32, 1664, /*0 - 1*/},
                                {48, 1664, /*0 - 1*/},
                                {64, 1664, /*0 - 1*/},
                                {80, 1664, /*0 - 1*/},
                                {96, 1664, /*0 - 1*/},
                                {112, 1664, /*0 - 1*/},
                                {128, 1664, /*0 - 1*/},
                                {144, 1664, /*0 - 1*/},
                                {160, 2048, /*0 - 1*/},
                                {176, 2586, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3840, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 3840, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-64X__0300_MULTI11_00000906902_240905_AX620E.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "3d_sr_again_64x_ispgain_1-4x",
                    /* szSpatialBaseNrName[256] */
                    "2d_sr_again_32-64x_0717B",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    6400,
                    /* nIsoThresholdMax */
                    12900,
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
                        {65536, 81920, 98304, 114688, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {81920, 98304, 114688, 132096, /*0 - 3*/},
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
                        {65536, 81920, 98304, 114688, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {81920, 98304, 114688, 132096, /*0 - 3*/},
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
                        {65536, 81920, 98304, 114688, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {81920, 98304, 114688, 132096, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2560, /*0 - 1*/},
                                {16, 2560, /*0 - 1*/},
                                {32, 2560, /*0 - 1*/},
                                {48, 2560, /*0 - 1*/},
                                {64, 2560, /*0 - 1*/},
                                {80, 2560, /*0 - 1*/},
                                {96, 2560, /*0 - 1*/},
                                {112, 2560, /*0 - 1*/},
                                {128, 2560, /*0 - 1*/},
                                {144, 2560, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2560, /*0 - 1*/},
                                {16, 2560, /*0 - 1*/},
                                {32, 2560, /*0 - 1*/},
                                {48, 2560, /*0 - 1*/},
                                {64, 2560, /*0 - 1*/},
                                {80, 2560, /*0 - 1*/},
                                {96, 2560, /*0 - 1*/},
                                {112, 2560, /*0 - 1*/},
                                {128, 2560, /*0 - 1*/},
                                {144, 2560, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2560, /*0 - 1*/},
                                {16, 2560, /*0 - 1*/},
                                {32, 2560, /*0 - 1*/},
                                {48, 2560, /*0 - 1*/},
                                {64, 2560, /*0 - 1*/},
                                {80, 2560, /*0 - 1*/},
                                {96, 2560, /*0 - 1*/},
                                {112, 2560, /*0 - 1*/},
                                {128, 2560, /*0 - 1*/},
                                {144, 2560, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2560, /*0 - 1*/},
                                {16, 2560, /*0 - 1*/},
                                {32, 2560, /*0 - 1*/},
                                {48, 2560, /*0 - 1*/},
                                {64, 2560, /*0 - 1*/},
                                {80, 2560, /*0 - 1*/},
                                {96, 2560, /*0 - 1*/},
                                {112, 2560, /*0 - 1*/},
                                {128, 2560, /*0 - 1*/},
                                {144, 2560, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 3584, /*0 - 1*/},
                                {192, 3584, /*0 - 1*/},
                                {208, 3584, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3584, /*0 - 1*/},
                                {255, 3584, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 5 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "20240727_3d_S2-I900V_iso6400_51200_lv1",
                    /* szSpatialBaseNrName[256] */
                    "20240727_2d_S2-I900V_iso6400_51200_lv1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    12900,
                    /* nIsoThresholdMax */
                    25600,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {3584, 3584, 3584, 3584, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {132096, 163840, 196608, 229376, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {163840, 196608, 229376, 262144, /*0 - 3*/},
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
                        {132096, 163840, 196608, 229376, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {163840, 196608, 229376, 262144, /*0 - 3*/},
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
                                {16, 128, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
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
                                {16, 64, /*0 - 1*/},
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
                                {16, 64, /*0 - 1*/},
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
                        {132096, 163840, 196608, 229376, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {163840, 196608, 229376, 262144, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2816, /*0 - 1*/},
                                {16, 2816, /*0 - 1*/},
                                {32, 2816, /*0 - 1*/},
                                {48, 2816, /*0 - 1*/},
                                {64, 2816, /*0 - 1*/},
                                {80, 2816, /*0 - 1*/},
                                {96, 2816, /*0 - 1*/},
                                {112, 2816, /*0 - 1*/},
                                {128, 2816, /*0 - 1*/},
                                {144, 2816, /*0 - 1*/},
                                {160, 2816, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 2816, /*0 - 1*/},
                                {208, 2816, /*0 - 1*/},
                                {224, 2816, /*0 - 1*/},
                                {240, 2816, /*0 - 1*/},
                                {255, 2816, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 2816, /*0 - 1*/},
                                {16, 2816, /*0 - 1*/},
                                {32, 2816, /*0 - 1*/},
                                {48, 2816, /*0 - 1*/},
                                {64, 2816, /*0 - 1*/},
                                {80, 2816, /*0 - 1*/},
                                {96, 2816, /*0 - 1*/},
                                {112, 2816, /*0 - 1*/},
                                {128, 2816, /*0 - 1*/},
                                {144, 2816, /*0 - 1*/},
                                {160, 2816, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 2816, /*0 - 1*/},
                                {208, 2816, /*0 - 1*/},
                                {224, 2816, /*0 - 1*/},
                                {240, 2816, /*0 - 1*/},
                                {255, 2816, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 2816, /*0 - 1*/},
                                {16, 2816, /*0 - 1*/},
                                {32, 2816, /*0 - 1*/},
                                {48, 2816, /*0 - 1*/},
                                {64, 2816, /*0 - 1*/},
                                {80, 2816, /*0 - 1*/},
                                {96, 2816, /*0 - 1*/},
                                {112, 2816, /*0 - 1*/},
                                {128, 2816, /*0 - 1*/},
                                {144, 2816, /*0 - 1*/},
                                {160, 2816, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 2816, /*0 - 1*/},
                                {208, 2816, /*0 - 1*/},
                                {224, 2816, /*0 - 1*/},
                                {240, 2816, /*0 - 1*/},
                                {255, 2816, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 2816, /*0 - 1*/},
                                {16, 2816, /*0 - 1*/},
                                {32, 2816, /*0 - 1*/},
                                {48, 2816, /*0 - 1*/},
                                {64, 2816, /*0 - 1*/},
                                {80, 2816, /*0 - 1*/},
                                {96, 2816, /*0 - 1*/},
                                {112, 2816, /*0 - 1*/},
                                {128, 2816, /*0 - 1*/},
                                {144, 2816, /*0 - 1*/},
                                {160, 2816, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 2816, /*0 - 1*/},
                                {208, 2816, /*0 - 1*/},
                                {224, 2816, /*0 - 1*/},
                                {240, 2816, /*0 - 1*/},
                                {255, 2816, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 6 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "20240717_3d_S2-I900V_iso51200_102400",
                    /* szSpatialBaseNrName[256] */
                    "20240717_2d_S2-I900V_iso51200_102400",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    25600,
                    /* nIsoThresholdMax */
                    80000,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {3584, 3584, 3584, 3584, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {262144, 401408, 540672, 679936, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {401408, 540672, 679936, 819200, /*0 - 3*/},
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
                        {262144, 401408, 540672, 679936, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {401408, 540672, 679936, 819200, /*0 - 3*/},
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
                                {16, 96, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
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
                                {16, 128, /*0 - 1*/},
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
                                {16, 160, /*0 - 1*/},
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
                        {262144, 401408, 540672, 679936, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {401408, 540672, 679936, 819200, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
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
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
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
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
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
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                        },
                    },
                },
            },
            /* 7 */
            {
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
                    /* szModelName[256] */
                    "SC450AI_SDR_2688x1520_10b_LCG_ISP1_A1-16X__0300_MULTI2_00000866717_240729_AX620E_VB.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "20240717_3d_S2-I900V_iso51200_102400",
                    /* szSpatialBaseNrName[256] */
                    "20240717_2d_S2-I900V_iso51200_102400",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    80000,
                    /* nIsoThresholdMax */
                    204800,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4096, 4096, 4096, 4096, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {3584, 3584, 3584, 3584, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {819200, 1138688, 1458176, 1777664, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {1138688, 1458176, 1777664, 2097152, /*0 - 3*/},
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
                        {819200, 1138688, 1458176, 1777664, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {1138688, 1458176, 1777664, 2097152, /*0 - 3*/},
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
                                {16, 384, /*0 - 1*/},
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
                                {16, 384, /*0 - 1*/},
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
                        {819200, 1138688, 1458176, 1777664, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {1138688, 1458176, 1777664, 2097152, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
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
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
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
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
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
                                {240, 3072, /*0 - 1*/},
                                {255, 3072, /*0 - 1*/},
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
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
            },
            /* nLowFreqNrFactor[2][17] */
            {
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
            },
            /* nHfNrStrength[2] */
            {20, 224, /*0 - 1*/},
            /* nMfNrStrength[2] */
            {40, 64, /*0 - 1*/},
        },
    },
    /* tAuto */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, /*0 - 11*/},
        /* nEdgePreserveRatio[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nNoiseProfileFactor[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
        /* nInterChannelStrength[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 11*/},
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
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 1 */
                        {
                            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 2 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 3 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 4 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 5 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 6 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 7 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 8 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 9 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 10 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                        /* nHighFreqNrFactor 11 */
                        {
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                            {1024, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 16*/},
                        },
                    },
                    /* nLowFreqNrFactor[12][2][17] */
                    {
                        /* nLowFreqNrFactor 0 */
                        {
                            {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {96, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 1 */
                        {
                            {64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                            {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
						},	
                        /* nLowFreqNrFactor 2 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 3 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 4 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 5 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 6 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 7 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 8 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 9 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 10 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                        /* nLowFreqNrFactor 11 */
                        {
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                            {32, 32, 30, 20, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 16*/},
                        },
                    },
                    /* nHfNrStrength[12][2] */
                    {
                        {12, 220, /*0 - 1*/},
                        {12, 220, /*0 - 1*/},
                        {12, 220, /*0 - 1*/},
                        {12, 220, /*0 - 1*/},
                        {20, 255, /*0 - 1*/},
                        {20, 255, /*0 - 1*/},
                        {20, 255, /*0 - 1*/},
                        {20, 255, /*0 - 1*/},
                        {20, 224, /*0 - 1*/},
                        {20, 224, /*0 - 1*/},
                        {20, 224, /*0 - 1*/},
                        {20, 224, /*0 - 1*/},
                    },
                    /* nMfNrStrength[12][2] */
                    {
                        {12, 12, /*0 - 1*/},
                        {12, 12, /*0 - 1*/},
                        {12, 18, /*0 - 1*/},
                        {12, 24, /*0 - 1*/},
                        {12, 42, /*0 - 1*/},
                        {12, 54, /*0 - 1*/},
                        {12, 64, /*0 - 1*/},
                        {12, 64, /*0 - 1*/},
                        {40, 64, /*0 - 1*/},
                        {40, 64, /*0 - 1*/},
                        {40, 64, /*0 - 1*/},
                        {40, 64, /*0 - 1*/},
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
            0, 184, 300, 399, 488, 571, 650, 724, 795, 864, 930, 995, 1058, 1119, 1179, 1238, 1295, 1351, 1407, 1461, 1515, 1568, 1620, 1672, 1722, 1773, 1822, 1871, 1920, 1968, 2015, 2062,  /* 0 - 31*/
            2109, 2155, 2200, 2246, 2291, 2335, 2379, 2423, 2467, 2510, 2553, 2596, 2638, 2680, 2722, 2763, 2804, 2845, 2886, 2926, 2967, 3007, 3046, 3086, 3125, 3165, 3204, 3242, 3281, 3319, 3357, 3395,  /* 32 - 63*/
            3433, 3471, 3508, 3546, 3583, 3620, 3656, 3693, 3730, 3766, 3802, 3838, 3874, 3910, 3946, 3981, 4016, 4052, 4087, 4122, 4157, 4191, 4226, 4260, 4295, 4329, 4363, 4397, 4431, 4465, 4499, 4532,  /* 64 - 95*/
            4566, 4599, 4633, 4666, 4699, 4732, 4765, 4797, 4830, 4863, 4895, 4928, 4960, 4992, 5025, 5057, 5089, 5120, 5152, 5184, 5216, 5247, 5279, 5310, 5342, 5373, 5404, 5435, 5466, 5497, 5528, 5559,  /* 96 - 127*/
            5590, 5620, 5651, 5681, 5712, 5742, 5773, 5803, 5833, 5863, 5893, 5923, 5953, 5983, 6013, 6043, 6072, 6102, 6131, 6161, 6190, 6220, 6249, 6278, 6308, 6337, 6366, 6395, 6424, 6453, 6483, 6512,  /* 128 - 159*/
            6541, 6570, 6599, 6628, 6658, 6687, 6716, 6745, 6774, 6804, 6833, 6862, 6891, 6920, 6949, 6979, 7008, 7037, 7066, 7095, 7125, 7154, 7183, 7212, 7241, 7270, 7300, 7329, 7358, 7387, 7416, 7446,  /* 160 - 191*/
            7475, 7504, 7533, 7562, 7591, 7621, 7650, 7679, 7708, 7737, 7766, 7796, 7825, 7854, 7883, 7912, 7942, 7971, 8000, 8029, 8058, 8087, 8117, 8146, 8175, 8204, 8233, 8263, 8292, 8321, 8350, 8379,  /* 192 - 223*/
            8408, 8438, 8467, 8496, 8525, 8554, 8584, 8613, 8642, 8671, 8700, 8729, 8759, 8788, 8817, 8846, 8875, 8904, 8934, 8963, 8992, 9021, 9050, 9080, 9109, 9138, 9167, 9196, 9225, 9255, 9284, 9313,  /* 224 - 255*/
            9342, 9371, 9401, 9430, 9459, 9488, 9517, 9546, 9576, 9605, 9634, 9663, 9692, 9722, 9751, 9780, 9809, 9838, 9867, 9897, 9926, 9955, 9984, 10013, 10043, 10072, 10101, 10130, 10159, 10188, 10218, 10247,  /* 256 - 287*/
            10276, 10305, 10334, 10363, 10393, 10422, 10451, 10480, 10509, 10539, 10568, 10597, 10626, 10655, 10684, 10714, 10743, 10772, 10801, 10830, 10860, 10889, 10918, 10947, 10976, 11005, 11035, 11064, 11093, 11122, 11151, 11181,  /* 288 - 319*/
            11210, 11239, 11268, 11297, 11326, 11356, 11385, 11414, 11443, 11472, 11501, 11531, 11560, 11589, 11618, 11647, 11677, 11706, 11735, 11764, 11793, 11822, 11852, 11881, 11910, 11939, 11968, 11998, 12027, 12056, 12085, 12114,  /* 320 - 351*/
            12143, 12173, 12202, 12231, 12260, 12289, 12319, 12348, 12377, 12406, 12435, 12464, 12494, 12523, 12552, 12581, 12610, 12639, 12669, 12698, 12727, 12756, 12785, 12815, 12844, 12873, 12902, 12931, 12960, 12990, 13019, 13048,  /* 352 - 383*/
            13077, 13106, 13136, 13165, 13194, 13223, 13252, 13281, 13311, 13340, 13369, 13398, 13427, 13457, 13486, 13515, 13544, 13573, 13602, 13632, 13661, 13690, 13719, 13748, 13778, 13807, 13836, 13865, 13894, 13923, 13953, 13982,  /* 384 - 415*/
            14011, 14040, 14069, 14098, 14128, 14157, 14186, 14215, 14244, 14274, 14303, 14332, 14361, 14390, 14419, 14449, 14478, 14507, 14536, 14565, 14595, 14624, 14653, 14682, 14711, 14740, 14770, 14799, 14828, 14857, 14886, 14916,  /* 416 - 447*/
            14945, 14974, 15003, 15032, 15061, 15091, 15120, 15149, 15178, 15207, 15236, 15266, 15295, 15324, 15353, 15382, 15412, 15441, 15470, 15499, 15528, 15557, 15587, 15616, 15645, 15674, 15703, 15733, 15762, 15791, 15820, 15849,  /* 448 - 479*/
            15878, 15908, 15937, 15966, 15995, 16024, 16054, 16083, 16112, 16141, 16170, 16199, 16229, 16258, 16287, 16316, 16345, 16374, 16404, 16433, 16462, 16491, 16520, 16550, 16579, 16608, 16637, 16666, 16695, 16725, 16754, 16783,  /* 480 - 511*/
            16812, 16841, 16871, 16900, 16929, 16958, 16987, 17016, 17046, 17075, 17104, 17133, 17162, 17192, 17221, 17250, 17279, 17308, 17337, 17367, 17396, 17425, 17454, 17483, 17513, 17542, 17571, 17600, 17629, 17658, 17688, 17717,  /* 512 - 543*/
            17746, 17775, 17804, 17833, 17863, 17892, 17921, 17950, 17979, 18009, 18038, 18067, 18096, 18125, 18154, 18184, 18213, 18242, 18271, 18300, 18330, 18359, 18388, 18417, 18446, 18475, 18505, 18534, 18563, 18592, 18621, 18651,  /* 544 - 575*/
            18680, 18709, 18738, 18767, 18796, 18826, 18855, 18884, 18913, 18942, 18971, 19001, 19030, 19059, 19088, 19117, 19147, 19176, 19205, 19234, 19263, 19292, 19322, 19351, 19380, 19409, 19438, 19468, 19497, 19526, 19555, 19584,  /* 576 - 607*/
            19613, 19643, 19672, 19701, 19730, 19759, 19789, 19818, 19847, 19876, 19905, 19934, 19964, 19993, 20022, 20051, 20080, 20109, 20139, 20168, 20197, 20226, 20255, 20285, 20314, 20343, 20372, 20401, 20430, 20460, 20489, 20518,  /* 608 - 639*/
            20547, 20576, 20606, 20635, 20664, 20693, 20722, 20751, 20781, 20810, 20839, 20868, 20897, 20927, 20956, 20985, 21014, 21043, 21072, 21102, 21131, 21160, 21189, 21218, 21248, 21277, 21306, 21335, 21364, 21393, 21423, 21452,  /* 640 - 671*/
            21481, 21510, 21540, 21569, 21598, 21627, 21657, 21686, 21715, 21745, 21774, 21803, 21833, 21862, 21891, 21921, 21950, 21979, 22009, 22038, 22067, 22097, 22126, 22156, 22185, 22214, 22244, 22273, 22303, 22332, 22362, 22391,  /* 672 - 703*/
            22421, 22450, 22480, 22509, 22539, 22568, 22598, 22627, 22657, 22686, 22716, 22745, 22775, 22805, 22834, 22864, 22893, 22923, 22953, 22982, 23012, 23042, 23071, 23101, 23131, 23160, 23190, 23220, 23249, 23279, 23309, 23339,  /* 704 - 735*/
            23368, 23398, 23428, 23458, 23488, 23517, 23547, 23577, 23607, 23637, 23667, 23696, 23726, 23756, 23786, 23816, 23846, 23876, 23906, 23936, 23966, 23995, 24025, 24055, 24085, 24115, 24145, 24175, 24205, 24235, 24265, 24296,  /* 736 - 767*/
            24326, 24356, 24386, 24416, 24446, 24476, 24506, 24536, 24567, 24597, 24627, 24657, 24687, 24717, 24748, 24778, 24808, 24838, 24869, 24899, 24929, 24959, 24990, 25020, 25050, 25081, 25111, 25141, 25172, 25202, 25233, 25263,  /* 768 - 799*/
            25293, 25324, 25354, 25385, 25415, 25446, 25476, 25507, 25537, 25568, 25598, 25629, 25659, 25690, 25721, 25751, 25782, 25812, 25843, 25874, 25904, 25935, 25966, 25996, 26027, 26058, 26089, 26119, 26150, 26181, 26212, 26243,  /* 800 - 831*/
            26274, 26304, 26335, 26366, 26397, 26428, 26459, 26490, 26521, 26552, 26583, 26614, 26645, 26676, 26707, 26738, 26769, 26800, 26831, 26862, 26893, 26924, 26956, 26987, 27018, 27049, 27080, 27112, 27143, 27174, 27206, 27237,  /* 832 - 863*/
            27268, 27300, 27331, 27362, 27394, 27425, 27457, 27488, 27519, 27551, 27582, 27614, 27646, 27677, 27709, 27740, 27772, 27804, 27835, 27867, 27899, 27930, 27962, 27994, 28026, 28057, 28089, 28121, 28153, 28185, 28217, 28249,  /* 864 - 895*/
            28281, 28313, 28345, 28377, 28409, 28441, 28473, 28505, 28537, 28569, 28601, 28634, 28666, 28698, 28730, 28763, 28795, 28827, 28860, 28892, 28925, 28957, 28990, 29022, 29055, 29087, 29120, 29152, 29185, 29218, 29250, 29283,  /* 896 - 927*/
            29316, 29349, 29382, 29414, 29447, 29480, 29513, 29546, 29579, 29612, 29645, 29678, 29712, 29745, 29778, 29811, 29845, 29878, 29911, 29945, 29978, 30012, 30045, 30079, 30112, 30146, 30180, 30213, 30247, 30281, 30315, 30349,  /* 928 - 959*/
            30383, 30417, 30451, 30485, 30519, 30553, 30587, 30622, 30656, 30691, 30725, 30760, 30794, 30829, 30863, 30898, 30933, 30968, 31003, 31038, 31073, 31108, 31143, 31179, 31214, 31249, 31285, 31321, 31356, 31392, 31428, 31464,  /* 960 - 991*/
            31500, 31536, 31572, 31609, 31645, 31682, 31719, 31755, 31792, 31830, 31867, 31904, 31942, 31980, 32017, 32056, 32094, 32132, 32171, 32210, 32249, 32289, 32329, 32369, 32409, 32450, 32492, 32534, 32577, 32621, 32666, 32714,  /* 992 - 1023*/
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
            10000,
            /* nDetailSigmaVal */
            1500,
            /* nDetailExtraStrPos */
            147,
            /* nDetailExtraStrNeg */
            151,
            /* nDetailGainLimitPos */
            7287,
            /* nDetailGainLimitNeg */
            34130,
            /* nSlopeStrengthLut[33] */
            {
                24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                8192, /*32 - 32*/
            },
            /* nSlopeCoeff */
            5327,
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
            44,
            /* nContrastStrength */
            42,
            /* nPostGamma */
            32,
            /* nHighlightSup */
            8,
            /* nDetailCoringPos */
            200,
            /* nDetailCoringNeg */
            200,
            /* nDetailGainPos */
            2,
            /* nDetailGainNeg */
            2,
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
        {42, 42, 42, 42, 42, 42, 42, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nLog10Offset[12] */
        {96, 96, 96, 96, 96, 96, 96, 96, 86, 86, 86, 86, /*0 - 11*/},
        /* nBaseGain[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
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
                0, 115, 198, 272, 341, 406, 468, 528, 586, 643, 698, 752, 805, 857, 908, 958, 1008, 1057, 1105, 1153, 1200, 1247, 1293, 1338, 1384, 1429, 1473, 1517, 1561, 1604, 1647, 1690,  /* 0 - 31*/
                1732, 1775, 1816, 1858, 1899, 1940, 1981, 2022, 2062, 2103, 2142, 2182, 2222, 2261, 2300, 2339, 2378, 2417, 2455, 2493, 2531, 2569, 2607, 2645, 2682, 2720, 2757, 2794, 2831, 2868, 2904, 2941,  /* 32 - 63*/
                2977, 3014, 3050, 3086, 3122, 3157, 3193, 3229, 3264, 3300, 3335, 3370, 3405, 3440, 3475, 3510, 3544, 3579, 3613, 3648, 3682, 3716, 3750, 3784, 3818, 3852, 3886, 3919, 3953, 3987, 4020, 4053,  /* 64 - 95*/
                4087, 4120, 4153, 4186, 4219, 4252, 4285, 4318, 4350, 4383, 4416, 4448, 4481, 4513, 4545, 4577, 4610, 4642, 4674, 4706, 4738, 4770, 4801, 4833, 4865, 4897, 4928, 4960, 4991, 5023, 5054, 5085,  /* 96 - 127*/
                5116, 5148, 5179, 5210, 5241, 5272, 5303, 5334, 5365, 5395, 5426, 5457, 5487, 5518, 5549, 5579, 5610, 5640, 5670, 5701, 5731, 5761, 5791, 5821, 5852, 5882, 5912, 5942, 5972, 6002, 6032, 6062,  /* 128 - 159*/
                6092, 6122, 6152, 6182, 6212, 6242, 6272, 6303, 6333, 6363, 6393, 6423, 6453, 6483, 6513, 6543, 6573, 6603, 6633, 6663, 6693, 6724, 6754, 6784, 6814, 6844, 6874, 6904, 6934, 6964, 6994, 7024,  /* 160 - 191*/
                7054, 7084, 7114, 7145, 7175, 7205, 7235, 7265, 7295, 7325, 7355, 7385, 7415, 7445, 7475, 7505, 7535, 7566, 7596, 7626, 7656, 7686, 7716, 7746, 7776, 7806, 7836, 7866, 7896, 7926, 7956, 7986,  /* 192 - 223*/
                8017, 8047, 8077, 8107, 8137, 8167, 8197, 8227, 8257, 8287, 8317, 8347, 8377, 8407, 8438, 8468, 8498, 8528, 8558, 8588, 8618, 8648, 8678, 8708, 8738, 8768, 8798, 8828, 8859, 8889, 8919, 8949,  /* 224 - 255*/
                8979, 9009, 9039, 9069, 9099, 9129, 9159, 9189, 9219, 9249, 9280, 9310, 9340, 9370, 9400, 9430, 9460, 9490, 9520, 9550, 9580, 9610, 9640, 9670, 9701, 9731, 9761, 9791, 9821, 9851, 9881, 9911,  /* 256 - 287*/
                9941, 9971, 10001, 10031, 10061, 10091, 10121, 10152, 10182, 10212, 10242, 10272, 10302, 10332, 10362, 10392, 10422, 10452, 10482, 10512, 10542, 10573, 10603, 10633, 10663, 10693, 10723, 10753, 10783, 10813, 10843, 10873,  /* 288 - 319*/
                10903, 10933, 10963, 10994, 11024, 11054, 11084, 11114, 11144, 11174, 11204, 11234, 11264, 11294, 11324, 11354, 11384, 11415, 11445, 11475, 11505, 11535, 11565, 11595, 11625, 11655, 11685, 11715, 11745, 11775, 11805, 11835,  /* 320 - 351*/
                11866, 11896, 11926, 11956, 11986, 12016, 12046, 12076, 12106, 12136, 12166, 12196, 12226, 12256, 12287, 12317, 12347, 12377, 12407, 12437, 12467, 12497, 12527, 12557, 12587, 12617, 12647, 12677, 12708, 12738, 12768, 12798,  /* 352 - 383*/
                12828, 12858, 12888, 12918, 12948, 12978, 13008, 13038, 13068, 13098, 13129, 13159, 13189, 13219, 13249, 13279, 13309, 13339, 13369, 13399, 13429, 13459, 13489, 13519, 13550, 13580, 13610, 13640, 13670, 13700, 13730, 13760,  /* 384 - 415*/
                13790, 13820, 13850, 13880, 13910, 13940, 13970, 14001, 14031, 14061, 14091, 14121, 14151, 14181, 14211, 14241, 14271, 14301, 14331, 14361, 14391, 14422, 14452, 14482, 14512, 14542, 14572, 14602, 14632, 14662, 14692, 14722,  /* 416 - 447*/
                14752, 14782, 14812, 14843, 14873, 14903, 14933, 14963, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15203, 15233, 15264, 15294, 15324, 15354, 15384, 15414, 15444, 15474, 15504, 15534, 15564, 15594, 15624, 15654, 15684,  /* 448 - 479*/
                15715, 15745, 15775, 15805, 15835, 15865, 15895, 15925, 15955, 15985, 16015, 16045, 16075, 16105, 16136, 16166, 16196, 16226, 16256, 16286, 16316, 16346, 16376, 16406, 16436, 16466, 16496, 16526, 16557, 16587, 16617, 16647,  /* 480 - 511*/
                16677, 16707, 16737, 16767, 16797, 16827, 16857, 16887, 16917, 16947, 16978, 17008, 17038, 17068, 17098, 17128, 17158, 17188, 17218, 17248, 17278, 17308, 17338, 17368, 17399, 17429, 17459, 17489, 17519, 17549, 17579, 17609,  /* 512 - 543*/
                17639, 17669, 17699, 17729, 17759, 17789, 17819, 17850, 17880, 17910, 17940, 17970, 18000, 18030, 18060, 18090, 18120, 18150, 18180, 18210, 18240, 18271, 18301, 18331, 18361, 18391, 18421, 18451, 18481, 18511, 18541, 18571,  /* 544 - 575*/
                18601, 18631, 18661, 18692, 18722, 18752, 18782, 18812, 18842, 18872, 18902, 18932, 18962, 18992, 19022, 19052, 19082, 19113, 19143, 19173, 19203, 19233, 19263, 19293, 19323, 19353, 19383, 19413, 19443, 19473, 19503, 19533,  /* 576 - 607*/
                19564, 19594, 19624, 19654, 19684, 19714, 19744, 19774, 19804, 19834, 19864, 19894, 19924, 19954, 19985, 20015, 20045, 20075, 20105, 20135, 20165, 20195, 20225, 20255, 20285, 20315, 20345, 20375, 20406, 20436, 20466, 20496,  /* 608 - 639*/
                20526, 20556, 20586, 20616, 20646, 20676, 20706, 20736, 20766, 20796, 20827, 20857, 20887, 20917, 20947, 20977, 21007, 21037, 21067, 21097, 21127, 21157, 21187, 21217, 21248, 21278, 21308, 21338, 21368, 21398, 21428, 21458,  /* 640 - 671*/
                21488, 21518, 21548, 21579, 21609, 21639, 21669, 21699, 21729, 21759, 21790, 21820, 21850, 21880, 21910, 21940, 21971, 22001, 22031, 22061, 22092, 22122, 22152, 22182, 22212, 22243, 22273, 22303, 22333, 22364, 22394, 22424,  /* 672 - 703*/
                22455, 22485, 22515, 22545, 22576, 22606, 22636, 22667, 22697, 22727, 22758, 22788, 22818, 22849, 22879, 22909, 22940, 22970, 23001, 23031, 23061, 23092, 23122, 23153, 23183, 23213, 23244, 23274, 23305, 23335, 23366, 23396,  /* 704 - 735*/
                23427, 23457, 23488, 23518, 23549, 23579, 23610, 23640, 23671, 23701, 23732, 23762, 23793, 23823, 23854, 23885, 23915, 23946, 23976, 24007, 24038, 24068, 24099, 24129, 24160, 24191, 24221, 24252, 24283, 24313, 24344, 24375,  /* 736 - 767*/
                24405, 24436, 24467, 24497, 24528, 24559, 24590, 24620, 24651, 24682, 24713, 24743, 24774, 24805, 24836, 24867, 24897, 24928, 24959, 24990, 25021, 25052, 25082, 25113, 25144, 25175, 25206, 25237, 25268, 25299, 25330, 25361,  /* 768 - 799*/
                25391, 25422, 25453, 25484, 25515, 25546, 25577, 25608, 25639, 25670, 25701, 25732, 25763, 25794, 25825, 25857, 25888, 25919, 25950, 25981, 26012, 26043, 26074, 26105, 26137, 26168, 26199, 26230, 26261, 26292, 26324, 26355,  /* 800 - 831*/
                26386, 26417, 26449, 26480, 26511, 26542, 26574, 26605, 26636, 26668, 26699, 26730, 26762, 26793, 26824, 26856, 26887, 26919, 26950, 26981, 27013, 27044, 27076, 27107, 27139, 27170, 27202, 27233, 27265, 27296, 27328, 27359,  /* 832 - 863*/
                27391, 27422, 27454, 27486, 27517, 27549, 27581, 27612, 27644, 27676, 27707, 27739, 27771, 27802, 27834, 27866, 27898, 27930, 27961, 27993, 28025, 28057, 28089, 28121, 28152, 28184, 28216, 28248, 28280, 28312, 28344, 28376,  /* 864 - 895*/
                28408, 28440, 28472, 28504, 28536, 28568, 28600, 28632, 28664, 28697, 28729, 28761, 28793, 28825, 28858, 28890, 28922, 28954, 28987, 29019, 29051, 29084, 29116, 29148, 29181, 29213, 29246, 29278, 29311, 29343, 29376, 29408,  /* 896 - 927*/
                29441, 29473, 29506, 29538, 29571, 29604, 29636, 29669, 29702, 29735, 29767, 29800, 29833, 29866, 29899, 29932, 29964, 29997, 30030, 30063, 30096, 30129, 30162, 30196, 30229, 30262, 30295, 30328, 30361, 30395, 30428, 30461,  /* 928 - 959*/
                30495, 30528, 30561, 30595, 30628, 30662, 30695, 30729, 30763, 30796, 30830, 30864, 30898, 30931, 30965, 30999, 31033, 31067, 31101, 31135, 31169, 31203, 31238, 31272, 31306, 31341, 31375, 31409, 31444, 31478, 31513, 31548,  /* 960 - 991*/
                31583, 31617, 31652, 31687, 31722, 31757, 31793, 31828, 31863, 31899, 31934, 31970, 32006, 32041, 32077, 32114, 32150, 32186, 32223, 32259, 32296, 32333, 32370, 32408, 32445, 32483, 32522, 32560, 32600, 32639, 32680, 32722,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 115, 198, 272, 341, 406, 468, 528, 586, 643, 698, 752, 805, 857, 908, 958, 1008, 1057, 1105, 1153, 1200, 1247, 1293, 1338, 1384, 1429, 1473, 1517, 1561, 1604, 1647, 1690,  /* 0 - 31*/
                1732, 1775, 1816, 1858, 1899, 1940, 1981, 2022, 2062, 2103, 2142, 2182, 2222, 2261, 2300, 2339, 2378, 2417, 2455, 2493, 2531, 2569, 2607, 2645, 2682, 2720, 2757, 2794, 2831, 2868, 2904, 2941,  /* 32 - 63*/
                2977, 3014, 3050, 3086, 3122, 3157, 3193, 3229, 3264, 3300, 3335, 3370, 3405, 3440, 3475, 3510, 3544, 3579, 3613, 3648, 3682, 3716, 3750, 3784, 3818, 3852, 3886, 3919, 3953, 3987, 4020, 4053,  /* 64 - 95*/
                4087, 4120, 4153, 4186, 4219, 4252, 4285, 4318, 4350, 4383, 4416, 4448, 4481, 4513, 4545, 4577, 4610, 4642, 4674, 4706, 4738, 4770, 4801, 4833, 4865, 4897, 4928, 4960, 4991, 5023, 5054, 5085,  /* 96 - 127*/
                5116, 5148, 5179, 5210, 5241, 5272, 5303, 5334, 5365, 5395, 5426, 5457, 5487, 5518, 5549, 5579, 5610, 5640, 5670, 5701, 5731, 5761, 5791, 5821, 5852, 5882, 5912, 5942, 5972, 6002, 6032, 6062,  /* 128 - 159*/
                6092, 6122, 6152, 6182, 6212, 6242, 6272, 6303, 6333, 6363, 6393, 6423, 6453, 6483, 6513, 6543, 6573, 6603, 6633, 6663, 6693, 6724, 6754, 6784, 6814, 6844, 6874, 6904, 6934, 6964, 6994, 7024,  /* 160 - 191*/
                7054, 7084, 7114, 7145, 7175, 7205, 7235, 7265, 7295, 7325, 7355, 7385, 7415, 7445, 7475, 7505, 7535, 7566, 7596, 7626, 7656, 7686, 7716, 7746, 7776, 7806, 7836, 7866, 7896, 7926, 7956, 7986,  /* 192 - 223*/
                8017, 8047, 8077, 8107, 8137, 8167, 8197, 8227, 8257, 8287, 8317, 8347, 8377, 8407, 8438, 8468, 8498, 8528, 8558, 8588, 8618, 8648, 8678, 8708, 8738, 8768, 8798, 8828, 8859, 8889, 8919, 8949,  /* 224 - 255*/
                8979, 9009, 9039, 9069, 9099, 9129, 9159, 9189, 9219, 9249, 9280, 9310, 9340, 9370, 9400, 9430, 9460, 9490, 9520, 9550, 9580, 9610, 9640, 9670, 9701, 9731, 9761, 9791, 9821, 9851, 9881, 9911,  /* 256 - 287*/
                9941, 9971, 10001, 10031, 10061, 10091, 10121, 10152, 10182, 10212, 10242, 10272, 10302, 10332, 10362, 10392, 10422, 10452, 10482, 10512, 10542, 10573, 10603, 10633, 10663, 10693, 10723, 10753, 10783, 10813, 10843, 10873,  /* 288 - 319*/
                10903, 10933, 10963, 10994, 11024, 11054, 11084, 11114, 11144, 11174, 11204, 11234, 11264, 11294, 11324, 11354, 11384, 11415, 11445, 11475, 11505, 11535, 11565, 11595, 11625, 11655, 11685, 11715, 11745, 11775, 11805, 11835,  /* 320 - 351*/
                11866, 11896, 11926, 11956, 11986, 12016, 12046, 12076, 12106, 12136, 12166, 12196, 12226, 12256, 12287, 12317, 12347, 12377, 12407, 12437, 12467, 12497, 12527, 12557, 12587, 12617, 12647, 12677, 12708, 12738, 12768, 12798,  /* 352 - 383*/
                12828, 12858, 12888, 12918, 12948, 12978, 13008, 13038, 13068, 13098, 13129, 13159, 13189, 13219, 13249, 13279, 13309, 13339, 13369, 13399, 13429, 13459, 13489, 13519, 13550, 13580, 13610, 13640, 13670, 13700, 13730, 13760,  /* 384 - 415*/
                13790, 13820, 13850, 13880, 13910, 13940, 13970, 14001, 14031, 14061, 14091, 14121, 14151, 14181, 14211, 14241, 14271, 14301, 14331, 14361, 14391, 14422, 14452, 14482, 14512, 14542, 14572, 14602, 14632, 14662, 14692, 14722,  /* 416 - 447*/
                14752, 14782, 14812, 14843, 14873, 14903, 14933, 14963, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15203, 15233, 15264, 15294, 15324, 15354, 15384, 15414, 15444, 15474, 15504, 15534, 15564, 15594, 15624, 15654, 15684,  /* 448 - 479*/
                15715, 15745, 15775, 15805, 15835, 15865, 15895, 15925, 15955, 15985, 16015, 16045, 16075, 16105, 16136, 16166, 16196, 16226, 16256, 16286, 16316, 16346, 16376, 16406, 16436, 16466, 16496, 16526, 16557, 16587, 16617, 16647,  /* 480 - 511*/
                16677, 16707, 16737, 16767, 16797, 16827, 16857, 16887, 16917, 16947, 16978, 17008, 17038, 17068, 17098, 17128, 17158, 17188, 17218, 17248, 17278, 17308, 17338, 17368, 17399, 17429, 17459, 17489, 17519, 17549, 17579, 17609,  /* 512 - 543*/
                17639, 17669, 17699, 17729, 17759, 17789, 17819, 17850, 17880, 17910, 17940, 17970, 18000, 18030, 18060, 18090, 18120, 18150, 18180, 18210, 18240, 18271, 18301, 18331, 18361, 18391, 18421, 18451, 18481, 18511, 18541, 18571,  /* 544 - 575*/
                18601, 18631, 18661, 18692, 18722, 18752, 18782, 18812, 18842, 18872, 18902, 18932, 18962, 18992, 19022, 19052, 19082, 19113, 19143, 19173, 19203, 19233, 19263, 19293, 19323, 19353, 19383, 19413, 19443, 19473, 19503, 19533,  /* 576 - 607*/
                19564, 19594, 19624, 19654, 19684, 19714, 19744, 19774, 19804, 19834, 19864, 19894, 19924, 19954, 19985, 20015, 20045, 20075, 20105, 20135, 20165, 20195, 20225, 20255, 20285, 20315, 20345, 20375, 20406, 20436, 20466, 20496,  /* 608 - 639*/
                20526, 20556, 20586, 20616, 20646, 20676, 20706, 20736, 20766, 20796, 20827, 20857, 20887, 20917, 20947, 20977, 21007, 21037, 21067, 21097, 21127, 21157, 21187, 21217, 21248, 21278, 21308, 21338, 21368, 21398, 21428, 21458,  /* 640 - 671*/
                21488, 21518, 21548, 21579, 21609, 21639, 21669, 21699, 21729, 21759, 21790, 21820, 21850, 21880, 21910, 21940, 21971, 22001, 22031, 22061, 22092, 22122, 22152, 22182, 22212, 22243, 22273, 22303, 22333, 22364, 22394, 22424,  /* 672 - 703*/
                22455, 22485, 22515, 22545, 22576, 22606, 22636, 22667, 22697, 22727, 22758, 22788, 22818, 22849, 22879, 22909, 22940, 22970, 23001, 23031, 23061, 23092, 23122, 23153, 23183, 23213, 23244, 23274, 23305, 23335, 23366, 23396,  /* 704 - 735*/
                23427, 23457, 23488, 23518, 23549, 23579, 23610, 23640, 23671, 23701, 23732, 23762, 23793, 23823, 23854, 23885, 23915, 23946, 23976, 24007, 24038, 24068, 24099, 24129, 24160, 24191, 24221, 24252, 24283, 24313, 24344, 24375,  /* 736 - 767*/
                24405, 24436, 24467, 24497, 24528, 24559, 24590, 24620, 24651, 24682, 24713, 24743, 24774, 24805, 24836, 24867, 24897, 24928, 24959, 24990, 25021, 25052, 25082, 25113, 25144, 25175, 25206, 25237, 25268, 25299, 25330, 25361,  /* 768 - 799*/
                25391, 25422, 25453, 25484, 25515, 25546, 25577, 25608, 25639, 25670, 25701, 25732, 25763, 25794, 25825, 25857, 25888, 25919, 25950, 25981, 26012, 26043, 26074, 26105, 26137, 26168, 26199, 26230, 26261, 26292, 26324, 26355,  /* 800 - 831*/
                26386, 26417, 26449, 26480, 26511, 26542, 26574, 26605, 26636, 26668, 26699, 26730, 26762, 26793, 26824, 26856, 26887, 26919, 26950, 26981, 27013, 27044, 27076, 27107, 27139, 27170, 27202, 27233, 27265, 27296, 27328, 27359,  /* 832 - 863*/
                27391, 27422, 27454, 27486, 27517, 27549, 27581, 27612, 27644, 27676, 27707, 27739, 27771, 27802, 27834, 27866, 27898, 27930, 27961, 27993, 28025, 28057, 28089, 28121, 28152, 28184, 28216, 28248, 28280, 28312, 28344, 28376,  /* 864 - 895*/
                28408, 28440, 28472, 28504, 28536, 28568, 28600, 28632, 28664, 28697, 28729, 28761, 28793, 28825, 28858, 28890, 28922, 28954, 28987, 29019, 29051, 29084, 29116, 29148, 29181, 29213, 29246, 29278, 29311, 29343, 29376, 29408,  /* 896 - 927*/
                29441, 29473, 29506, 29538, 29571, 29604, 29636, 29669, 29702, 29735, 29767, 29800, 29833, 29866, 29899, 29932, 29964, 29997, 30030, 30063, 30096, 30129, 30162, 30196, 30229, 30262, 30295, 30328, 30361, 30395, 30428, 30461,  /* 928 - 959*/
                30495, 30528, 30561, 30595, 30628, 30662, 30695, 30729, 30763, 30796, 30830, 30864, 30898, 30931, 30965, 30999, 31033, 31067, 31101, 31135, 31169, 31203, 31238, 31272, 31306, 31341, 31375, 31409, 31444, 31478, 31513, 31548,  /* 960 - 991*/
                31583, 31617, 31652, 31687, 31722, 31757, 31793, 31828, 31863, 31899, 31934, 31970, 32006, 32041, 32077, 32114, 32150, 32186, 32223, 32259, 32296, 32333, 32370, 32408, 32445, 32483, 32522, 32560, 32600, 32639, 32680, 32722,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 115, 198, 272, 341, 406, 468, 528, 586, 643, 698, 752, 805, 857, 908, 958, 1008, 1057, 1105, 1153, 1200, 1247, 1293, 1338, 1384, 1429, 1473, 1517, 1561, 1604, 1647, 1690,  /* 0 - 31*/
                1732, 1775, 1816, 1858, 1899, 1940, 1981, 2022, 2062, 2103, 2142, 2182, 2222, 2261, 2300, 2339, 2378, 2417, 2455, 2493, 2531, 2569, 2607, 2645, 2682, 2720, 2757, 2794, 2831, 2868, 2904, 2941,  /* 32 - 63*/
                2977, 3014, 3050, 3086, 3122, 3157, 3193, 3229, 3264, 3300, 3335, 3370, 3405, 3440, 3475, 3510, 3544, 3579, 3613, 3648, 3682, 3716, 3750, 3784, 3818, 3852, 3886, 3919, 3953, 3987, 4020, 4053,  /* 64 - 95*/
                4087, 4120, 4153, 4186, 4219, 4252, 4285, 4318, 4350, 4383, 4416, 4448, 4481, 4513, 4545, 4577, 4610, 4642, 4674, 4706, 4738, 4770, 4801, 4833, 4865, 4897, 4928, 4960, 4991, 5023, 5054, 5085,  /* 96 - 127*/
                5116, 5148, 5179, 5210, 5241, 5272, 5303, 5334, 5365, 5395, 5426, 5457, 5487, 5518, 5549, 5579, 5610, 5640, 5670, 5701, 5731, 5761, 5791, 5821, 5852, 5882, 5912, 5942, 5972, 6002, 6032, 6062,  /* 128 - 159*/
                6092, 6122, 6152, 6182, 6212, 6242, 6272, 6303, 6333, 6363, 6393, 6423, 6453, 6483, 6513, 6543, 6573, 6603, 6633, 6663, 6693, 6724, 6754, 6784, 6814, 6844, 6874, 6904, 6934, 6964, 6994, 7024,  /* 160 - 191*/
                7054, 7084, 7114, 7145, 7175, 7205, 7235, 7265, 7295, 7325, 7355, 7385, 7415, 7445, 7475, 7505, 7535, 7566, 7596, 7626, 7656, 7686, 7716, 7746, 7776, 7806, 7836, 7866, 7896, 7926, 7956, 7986,  /* 192 - 223*/
                8017, 8047, 8077, 8107, 8137, 8167, 8197, 8227, 8257, 8287, 8317, 8347, 8377, 8407, 8438, 8468, 8498, 8528, 8558, 8588, 8618, 8648, 8678, 8708, 8738, 8768, 8798, 8828, 8859, 8889, 8919, 8949,  /* 224 - 255*/
                8979, 9009, 9039, 9069, 9099, 9129, 9159, 9189, 9219, 9249, 9280, 9310, 9340, 9370, 9400, 9430, 9460, 9490, 9520, 9550, 9580, 9610, 9640, 9670, 9701, 9731, 9761, 9791, 9821, 9851, 9881, 9911,  /* 256 - 287*/
                9941, 9971, 10001, 10031, 10061, 10091, 10121, 10152, 10182, 10212, 10242, 10272, 10302, 10332, 10362, 10392, 10422, 10452, 10482, 10512, 10542, 10573, 10603, 10633, 10663, 10693, 10723, 10753, 10783, 10813, 10843, 10873,  /* 288 - 319*/
                10903, 10933, 10963, 10994, 11024, 11054, 11084, 11114, 11144, 11174, 11204, 11234, 11264, 11294, 11324, 11354, 11384, 11415, 11445, 11475, 11505, 11535, 11565, 11595, 11625, 11655, 11685, 11715, 11745, 11775, 11805, 11835,  /* 320 - 351*/
                11866, 11896, 11926, 11956, 11986, 12016, 12046, 12076, 12106, 12136, 12166, 12196, 12226, 12256, 12287, 12317, 12347, 12377, 12407, 12437, 12467, 12497, 12527, 12557, 12587, 12617, 12647, 12677, 12708, 12738, 12768, 12798,  /* 352 - 383*/
                12828, 12858, 12888, 12918, 12948, 12978, 13008, 13038, 13068, 13098, 13129, 13159, 13189, 13219, 13249, 13279, 13309, 13339, 13369, 13399, 13429, 13459, 13489, 13519, 13550, 13580, 13610, 13640, 13670, 13700, 13730, 13760,  /* 384 - 415*/
                13790, 13820, 13850, 13880, 13910, 13940, 13970, 14001, 14031, 14061, 14091, 14121, 14151, 14181, 14211, 14241, 14271, 14301, 14331, 14361, 14391, 14422, 14452, 14482, 14512, 14542, 14572, 14602, 14632, 14662, 14692, 14722,  /* 416 - 447*/
                14752, 14782, 14812, 14843, 14873, 14903, 14933, 14963, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15203, 15233, 15264, 15294, 15324, 15354, 15384, 15414, 15444, 15474, 15504, 15534, 15564, 15594, 15624, 15654, 15684,  /* 448 - 479*/
                15715, 15745, 15775, 15805, 15835, 15865, 15895, 15925, 15955, 15985, 16015, 16045, 16075, 16105, 16136, 16166, 16196, 16226, 16256, 16286, 16316, 16346, 16376, 16406, 16436, 16466, 16496, 16526, 16557, 16587, 16617, 16647,  /* 480 - 511*/
                16677, 16707, 16737, 16767, 16797, 16827, 16857, 16887, 16917, 16947, 16978, 17008, 17038, 17068, 17098, 17128, 17158, 17188, 17218, 17248, 17278, 17308, 17338, 17368, 17399, 17429, 17459, 17489, 17519, 17549, 17579, 17609,  /* 512 - 543*/
                17639, 17669, 17699, 17729, 17759, 17789, 17819, 17850, 17880, 17910, 17940, 17970, 18000, 18030, 18060, 18090, 18120, 18150, 18180, 18210, 18240, 18271, 18301, 18331, 18361, 18391, 18421, 18451, 18481, 18511, 18541, 18571,  /* 544 - 575*/
                18601, 18631, 18661, 18692, 18722, 18752, 18782, 18812, 18842, 18872, 18902, 18932, 18962, 18992, 19022, 19052, 19082, 19113, 19143, 19173, 19203, 19233, 19263, 19293, 19323, 19353, 19383, 19413, 19443, 19473, 19503, 19533,  /* 576 - 607*/
                19564, 19594, 19624, 19654, 19684, 19714, 19744, 19774, 19804, 19834, 19864, 19894, 19924, 19954, 19985, 20015, 20045, 20075, 20105, 20135, 20165, 20195, 20225, 20255, 20285, 20315, 20345, 20375, 20406, 20436, 20466, 20496,  /* 608 - 639*/
                20526, 20556, 20586, 20616, 20646, 20676, 20706, 20736, 20766, 20796, 20827, 20857, 20887, 20917, 20947, 20977, 21007, 21037, 21067, 21097, 21127, 21157, 21187, 21217, 21248, 21278, 21308, 21338, 21368, 21398, 21428, 21458,  /* 640 - 671*/
                21488, 21518, 21548, 21579, 21609, 21639, 21669, 21699, 21729, 21759, 21790, 21820, 21850, 21880, 21910, 21940, 21971, 22001, 22031, 22061, 22092, 22122, 22152, 22182, 22212, 22243, 22273, 22303, 22333, 22364, 22394, 22424,  /* 672 - 703*/
                22455, 22485, 22515, 22545, 22576, 22606, 22636, 22667, 22697, 22727, 22758, 22788, 22818, 22849, 22879, 22909, 22940, 22970, 23001, 23031, 23061, 23092, 23122, 23153, 23183, 23213, 23244, 23274, 23305, 23335, 23366, 23396,  /* 704 - 735*/
                23427, 23457, 23488, 23518, 23549, 23579, 23610, 23640, 23671, 23701, 23732, 23762, 23793, 23823, 23854, 23885, 23915, 23946, 23976, 24007, 24038, 24068, 24099, 24129, 24160, 24191, 24221, 24252, 24283, 24313, 24344, 24375,  /* 736 - 767*/
                24405, 24436, 24467, 24497, 24528, 24559, 24590, 24620, 24651, 24682, 24713, 24743, 24774, 24805, 24836, 24867, 24897, 24928, 24959, 24990, 25021, 25052, 25082, 25113, 25144, 25175, 25206, 25237, 25268, 25299, 25330, 25361,  /* 768 - 799*/
                25391, 25422, 25453, 25484, 25515, 25546, 25577, 25608, 25639, 25670, 25701, 25732, 25763, 25794, 25825, 25857, 25888, 25919, 25950, 25981, 26012, 26043, 26074, 26105, 26137, 26168, 26199, 26230, 26261, 26292, 26324, 26355,  /* 800 - 831*/
                26386, 26417, 26449, 26480, 26511, 26542, 26574, 26605, 26636, 26668, 26699, 26730, 26762, 26793, 26824, 26856, 26887, 26919, 26950, 26981, 27013, 27044, 27076, 27107, 27139, 27170, 27202, 27233, 27265, 27296, 27328, 27359,  /* 832 - 863*/
                27391, 27422, 27454, 27486, 27517, 27549, 27581, 27612, 27644, 27676, 27707, 27739, 27771, 27802, 27834, 27866, 27898, 27930, 27961, 27993, 28025, 28057, 28089, 28121, 28152, 28184, 28216, 28248, 28280, 28312, 28344, 28376,  /* 864 - 895*/
                28408, 28440, 28472, 28504, 28536, 28568, 28600, 28632, 28664, 28697, 28729, 28761, 28793, 28825, 28858, 28890, 28922, 28954, 28987, 29019, 29051, 29084, 29116, 29148, 29181, 29213, 29246, 29278, 29311, 29343, 29376, 29408,  /* 896 - 927*/
                29441, 29473, 29506, 29538, 29571, 29604, 29636, 29669, 29702, 29735, 29767, 29800, 29833, 29866, 29899, 29932, 29964, 29997, 30030, 30063, 30096, 30129, 30162, 30196, 30229, 30262, 30295, 30328, 30361, 30395, 30428, 30461,  /* 928 - 959*/
                30495, 30528, 30561, 30595, 30628, 30662, 30695, 30729, 30763, 30796, 30830, 30864, 30898, 30931, 30965, 30999, 31033, 31067, 31101, 31135, 31169, 31203, 31238, 31272, 31306, 31341, 31375, 31409, 31444, 31478, 31513, 31548,  /* 960 - 991*/
                31583, 31617, 31652, 31687, 31722, 31757, 31793, 31828, 31863, 31899, 31934, 31970, 32006, 32041, 32077, 32114, 32150, 32186, 32223, 32259, 32296, 32333, 32370, 32408, 32445, 32483, 32522, 32560, 32600, 32639, 32680, 32722,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 64, 118, 169, 217, 265, 311, 356, 401, 444, 488, 530, 573, 614, 656, 697, 738, 778, 818, 858, 898, 937, 977, 1016, 1054, 1093, 1131, 1170, 1208, 1246, 1283, 1321,  /* 0 - 31*/
                1359, 1396, 1433, 1470, 1507, 1544, 1580, 1617, 1654, 1690, 1726, 1762, 1798, 1834, 1870, 1906, 1942, 1977, 2013, 2048, 2083, 2119, 2154, 2189, 2224, 2259, 2294, 2328, 2363, 2398, 2432, 2467,  /* 32 - 63*/
                2501, 2536, 2570, 2604, 2638, 2673, 2707, 2741, 2775, 2809, 2842, 2876, 2910, 2944, 2977, 3011, 3044, 3078, 3111, 3145, 3178, 3211, 3245, 3278, 3311, 3344, 3377, 3410, 3443, 3476, 3509, 3542,  /* 64 - 95*/
                3575, 3607, 3640, 3673, 3705, 3738, 3771, 3803, 3836, 3868, 3901, 3933, 3965, 3998, 4030, 4062, 4094, 4126, 4159, 4191, 4223, 4255, 4287, 4319, 4351, 4383, 4415, 4446, 4478, 4510, 4542, 4573,  /* 96 - 127*/
                4605, 4637, 4668, 4700, 4732, 4763, 4795, 4826, 4858, 4889, 4921, 4952, 4983, 5015, 5046, 5077, 5108, 5140, 5171, 5202, 5233, 5264, 5295, 5326, 5358, 5389, 5420, 5451, 5482, 5513, 5544, 5575,  /* 128 - 159*/
                5606, 5637, 5668, 5699, 5730, 5761, 5792, 5823, 5854, 5885, 5916, 5947, 5978, 6009, 6040, 6071, 6102, 6133, 6164, 6195, 6226, 6258, 6289, 6320, 6351, 6382, 6413, 6444, 6475, 6506, 6537, 6568,  /* 160 - 191*/
                6599, 6630, 6661, 6692, 6723, 6754, 6785, 6816, 6847, 6878, 6909, 6940, 6971, 7002, 7033, 7064, 7095, 7127, 7158, 7189, 7220, 7251, 7282, 7313, 7344, 7375, 7406, 7437, 7468, 7499, 7530, 7561,  /* 192 - 223*/
                7592, 7623, 7654, 7685, 7716, 7747, 7778, 7809, 7840, 7871, 7902, 7933, 7964, 7995, 8027, 8058, 8089, 8120, 8151, 8182, 8213, 8244, 8275, 8306, 8337, 8368, 8399, 8430, 8461, 8492, 8523, 8554,  /* 224 - 255*/
                8585, 8616, 8647, 8678, 8709, 8740, 8771, 8802, 8833, 8864, 8896, 8927, 8958, 8989, 9020, 9051, 9082, 9113, 9144, 9175, 9206, 9237, 9268, 9299, 9330, 9361, 9392, 9423, 9454, 9485, 9516, 9547,  /* 256 - 287*/
                9578, 9609, 9640, 9671, 9702, 9733, 9764, 9796, 9827, 9858, 9889, 9920, 9951, 9982, 10013, 10044, 10075, 10106, 10137, 10168, 10199, 10230, 10261, 10292, 10323, 10354, 10385, 10416, 10447, 10478, 10509, 10540,  /* 288 - 319*/
                10571, 10602, 10633, 10665, 10696, 10727, 10758, 10789, 10820, 10851, 10882, 10913, 10944, 10975, 11006, 11037, 11068, 11099, 11130, 11161, 11192, 11223, 11254, 11285, 11316, 11347, 11378, 11409, 11440, 11471, 11502, 11533,  /* 320 - 351*/
                11565, 11596, 11627, 11658, 11689, 11720, 11751, 11782, 11813, 11844, 11875, 11906, 11937, 11968, 11999, 12030, 12061, 12092, 12123, 12154, 12185, 12216, 12247, 12278, 12309, 12340, 12371, 12402, 12434, 12465, 12496, 12527,  /* 352 - 383*/
                12558, 12589, 12620, 12651, 12682, 12713, 12744, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12992, 13023, 13054, 13085, 13116, 13147, 13178, 13209, 13240, 13271, 13303, 13334, 13365, 13396, 13427, 13458, 13489, 13520,  /* 384 - 415*/
                13551, 13582, 13613, 13644, 13675, 13706, 13737, 13768, 13799, 13830, 13861, 13892, 13923, 13954, 13985, 14016, 14047, 14078, 14109, 14140, 14171, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513,  /* 416 - 447*/
                14544, 14575, 14606, 14637, 14668, 14699, 14730, 14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15072, 15103, 15134, 15165, 15196, 15227, 15258, 15289, 15320, 15351, 15382, 15413, 15444, 15475, 15506,  /* 448 - 479*/
                15537, 15568, 15599, 15630, 15661, 15692, 15723, 15754, 15785, 15816, 15847, 15878, 15909, 15940, 15972, 16003, 16034, 16065, 16096, 16127, 16158, 16189, 16220, 16251, 16282, 16313, 16344, 16375, 16406, 16437, 16468, 16499,  /* 480 - 511*/
                16530, 16561, 16592, 16623, 16654, 16685, 16716, 16747, 16778, 16809, 16841, 16872, 16903, 16934, 16965, 16996, 17027, 17058, 17089, 17120, 17151, 17182, 17213, 17244, 17275, 17306, 17337, 17368, 17399, 17430, 17461, 17492,  /* 512 - 543*/
                17523, 17554, 17585, 17616, 17647, 17678, 17709, 17741, 17772, 17803, 17834, 17865, 17896, 17927, 17958, 17989, 18020, 18051, 18082, 18113, 18144, 18175, 18206, 18237, 18268, 18299, 18330, 18361, 18392, 18423, 18454, 18485,  /* 544 - 575*/
                18516, 18547, 18578, 18610, 18641, 18672, 18703, 18734, 18765, 18796, 18827, 18858, 18889, 18920, 18951, 18982, 19013, 19044, 19075, 19106, 19137, 19168, 19199, 19230, 19261, 19292, 19323, 19354, 19385, 19416, 19447, 19478,  /* 576 - 607*/
                19510, 19541, 19572, 19603, 19634, 19665, 19696, 19727, 19758, 19789, 19820, 19851, 19882, 19913, 19944, 19975, 20006, 20037, 20068, 20099, 20130, 20161, 20192, 20223, 20254, 20285, 20316, 20347, 20379, 20410, 20441, 20472,  /* 608 - 639*/
                20503, 20534, 20565, 20596, 20627, 20658, 20689, 20720, 20751, 20782, 20813, 20844, 20875, 20906, 20937, 20968, 20999, 21030, 21061, 21092, 21123, 21154, 21185, 21216, 21248, 21279, 21310, 21341, 21372, 21403, 21434, 21465,  /* 640 - 671*/
                21496, 21527, 21558, 21589, 21620, 21651, 21682, 21713, 21744, 21775, 21807, 21838, 21869, 21900, 21931, 21962, 21993, 22024, 22055, 22086, 22118, 22149, 22180, 22211, 22242, 22273, 22304, 22335, 22367, 22398, 22429, 22460,  /* 672 - 703*/
                22491, 22522, 22553, 22585, 22616, 22647, 22678, 22709, 22740, 22772, 22803, 22834, 22865, 22896, 22927, 22959, 22990, 23021, 23052, 23083, 23115, 23146, 23177, 23208, 23239, 23271, 23302, 23333, 23364, 23396, 23427, 23458,  /* 704 - 735*/
                23489, 23521, 23552, 23583, 23614, 23646, 23677, 23708, 23739, 23771, 23802, 23833, 23864, 23896, 23927, 23958, 23990, 24021, 24052, 24084, 24115, 24146, 24177, 24209, 24240, 24271, 24303, 24334, 24365, 24397, 24428, 24460,  /* 736 - 767*/
                24491, 24522, 24554, 24585, 24616, 24648, 24679, 24710, 24742, 24773, 24805, 24836, 24867, 24899, 24930, 24962, 24993, 25024, 25056, 25087, 25119, 25150, 25182, 25213, 25244, 25276, 25307, 25339, 25370, 25402, 25433, 25465,  /* 768 - 799*/
                25496, 25528, 25559, 25591, 25622, 25654, 25685, 25717, 25748, 25780, 25811, 25843, 25874, 25906, 25937, 25969, 26000, 26032, 26064, 26095, 26127, 26158, 26190, 26221, 26253, 26285, 26316, 26348, 26379, 26411, 26443, 26474,  /* 800 - 831*/
                26506, 26538, 26569, 26601, 26632, 26664, 26696, 26727, 26759, 26791, 26822, 26854, 26886, 26918, 26949, 26981, 27013, 27044, 27076, 27108, 27140, 27171, 27203, 27235, 27267, 27298, 27330, 27362, 27394, 27425, 27457, 27489,  /* 832 - 863*/
                27521, 27553, 27584, 27616, 27648, 27680, 27712, 27744, 27775, 27807, 27839, 27871, 27903, 27935, 27967, 27999, 28030, 28062, 28094, 28126, 28158, 28190, 28222, 28254, 28286, 28318, 28350, 28382, 28414, 28446, 28478, 28510,  /* 864 - 895*/
                28542, 28574, 28606, 28638, 28670, 28702, 28734, 28766, 28798, 28830, 28862, 28894, 28927, 28959, 28991, 29023, 29055, 29087, 29119, 29152, 29184, 29216, 29248, 29280, 29313, 29345, 29377, 29409, 29441, 29474, 29506, 29538,  /* 896 - 927*/
                29571, 29603, 29635, 29668, 29700, 29732, 29765, 29797, 29829, 29862, 29894, 29927, 29959, 29991, 30024, 30056, 30089, 30121, 30154, 30186, 30219, 30251, 30284, 30316, 30349, 30382, 30414, 30447, 30479, 30512, 30545, 30577,  /* 928 - 959*/
                30610, 30643, 30675, 30708, 30741, 30774, 30806, 30839, 30872, 30905, 30938, 30971, 31004, 31036, 31069, 31102, 31135, 31168, 31201, 31234, 31267, 31300, 31334, 31367, 31400, 31433, 31466, 31499, 31533, 31566, 31599, 31633,  /* 960 - 991*/
                31666, 31699, 31733, 31766, 31800, 31833, 31867, 31901, 31934, 31968, 32002, 32035, 32069, 32103, 32137, 32171, 32205, 32239, 32273, 32308, 32342, 32376, 32411, 32446, 32480, 32515, 32550, 32585, 32621, 32657, 32693, 32729,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 64, 118, 169, 217, 265, 311, 356, 401, 444, 488, 530, 573, 614, 656, 697, 738, 778, 818, 858, 898, 937, 977, 1016, 1054, 1093, 1131, 1170, 1208, 1246, 1283, 1321,  /* 0 - 31*/
                1359, 1396, 1433, 1470, 1507, 1544, 1580, 1617, 1654, 1690, 1726, 1762, 1798, 1834, 1870, 1906, 1942, 1977, 2013, 2048, 2083, 2119, 2154, 2189, 2224, 2259, 2294, 2328, 2363, 2398, 2432, 2467,  /* 32 - 63*/
                2501, 2536, 2570, 2604, 2638, 2673, 2707, 2741, 2775, 2809, 2842, 2876, 2910, 2944, 2977, 3011, 3044, 3078, 3111, 3145, 3178, 3211, 3245, 3278, 3311, 3344, 3377, 3410, 3443, 3476, 3509, 3542,  /* 64 - 95*/
                3575, 3607, 3640, 3673, 3705, 3738, 3771, 3803, 3836, 3868, 3901, 3933, 3965, 3998, 4030, 4062, 4094, 4126, 4159, 4191, 4223, 4255, 4287, 4319, 4351, 4383, 4415, 4446, 4478, 4510, 4542, 4573,  /* 96 - 127*/
                4605, 4637, 4668, 4700, 4732, 4763, 4795, 4826, 4858, 4889, 4921, 4952, 4983, 5015, 5046, 5077, 5108, 5140, 5171, 5202, 5233, 5264, 5295, 5326, 5358, 5389, 5420, 5451, 5482, 5513, 5544, 5575,  /* 128 - 159*/
                5606, 5637, 5668, 5699, 5730, 5761, 5792, 5823, 5854, 5885, 5916, 5947, 5978, 6009, 6040, 6071, 6102, 6133, 6164, 6195, 6226, 6258, 6289, 6320, 6351, 6382, 6413, 6444, 6475, 6506, 6537, 6568,  /* 160 - 191*/
                6599, 6630, 6661, 6692, 6723, 6754, 6785, 6816, 6847, 6878, 6909, 6940, 6971, 7002, 7033, 7064, 7095, 7127, 7158, 7189, 7220, 7251, 7282, 7313, 7344, 7375, 7406, 7437, 7468, 7499, 7530, 7561,  /* 192 - 223*/
                7592, 7623, 7654, 7685, 7716, 7747, 7778, 7809, 7840, 7871, 7902, 7933, 7964, 7995, 8027, 8058, 8089, 8120, 8151, 8182, 8213, 8244, 8275, 8306, 8337, 8368, 8399, 8430, 8461, 8492, 8523, 8554,  /* 224 - 255*/
                8585, 8616, 8647, 8678, 8709, 8740, 8771, 8802, 8833, 8864, 8896, 8927, 8958, 8989, 9020, 9051, 9082, 9113, 9144, 9175, 9206, 9237, 9268, 9299, 9330, 9361, 9392, 9423, 9454, 9485, 9516, 9547,  /* 256 - 287*/
                9578, 9609, 9640, 9671, 9702, 9733, 9764, 9796, 9827, 9858, 9889, 9920, 9951, 9982, 10013, 10044, 10075, 10106, 10137, 10168, 10199, 10230, 10261, 10292, 10323, 10354, 10385, 10416, 10447, 10478, 10509, 10540,  /* 288 - 319*/
                10571, 10602, 10633, 10665, 10696, 10727, 10758, 10789, 10820, 10851, 10882, 10913, 10944, 10975, 11006, 11037, 11068, 11099, 11130, 11161, 11192, 11223, 11254, 11285, 11316, 11347, 11378, 11409, 11440, 11471, 11502, 11533,  /* 320 - 351*/
                11565, 11596, 11627, 11658, 11689, 11720, 11751, 11782, 11813, 11844, 11875, 11906, 11937, 11968, 11999, 12030, 12061, 12092, 12123, 12154, 12185, 12216, 12247, 12278, 12309, 12340, 12371, 12402, 12434, 12465, 12496, 12527,  /* 352 - 383*/
                12558, 12589, 12620, 12651, 12682, 12713, 12744, 12775, 12806, 12837, 12868, 12899, 12930, 12961, 12992, 13023, 13054, 13085, 13116, 13147, 13178, 13209, 13240, 13271, 13303, 13334, 13365, 13396, 13427, 13458, 13489, 13520,  /* 384 - 415*/
                13551, 13582, 13613, 13644, 13675, 13706, 13737, 13768, 13799, 13830, 13861, 13892, 13923, 13954, 13985, 14016, 14047, 14078, 14109, 14140, 14171, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513,  /* 416 - 447*/
                14544, 14575, 14606, 14637, 14668, 14699, 14730, 14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15072, 15103, 15134, 15165, 15196, 15227, 15258, 15289, 15320, 15351, 15382, 15413, 15444, 15475, 15506,  /* 448 - 479*/
                15537, 15568, 15599, 15630, 15661, 15692, 15723, 15754, 15785, 15816, 15847, 15878, 15909, 15940, 15972, 16003, 16034, 16065, 16096, 16127, 16158, 16189, 16220, 16251, 16282, 16313, 16344, 16375, 16406, 16437, 16468, 16499,  /* 480 - 511*/
                16530, 16561, 16592, 16623, 16654, 16685, 16716, 16747, 16778, 16809, 16841, 16872, 16903, 16934, 16965, 16996, 17027, 17058, 17089, 17120, 17151, 17182, 17213, 17244, 17275, 17306, 17337, 17368, 17399, 17430, 17461, 17492,  /* 512 - 543*/
                17523, 17554, 17585, 17616, 17647, 17678, 17709, 17741, 17772, 17803, 17834, 17865, 17896, 17927, 17958, 17989, 18020, 18051, 18082, 18113, 18144, 18175, 18206, 18237, 18268, 18299, 18330, 18361, 18392, 18423, 18454, 18485,  /* 544 - 575*/
                18516, 18547, 18578, 18610, 18641, 18672, 18703, 18734, 18765, 18796, 18827, 18858, 18889, 18920, 18951, 18982, 19013, 19044, 19075, 19106, 19137, 19168, 19199, 19230, 19261, 19292, 19323, 19354, 19385, 19416, 19447, 19478,  /* 576 - 607*/
                19510, 19541, 19572, 19603, 19634, 19665, 19696, 19727, 19758, 19789, 19820, 19851, 19882, 19913, 19944, 19975, 20006, 20037, 20068, 20099, 20130, 20161, 20192, 20223, 20254, 20285, 20316, 20347, 20379, 20410, 20441, 20472,  /* 608 - 639*/
                20503, 20534, 20565, 20596, 20627, 20658, 20689, 20720, 20751, 20782, 20813, 20844, 20875, 20906, 20937, 20968, 20999, 21030, 21061, 21092, 21123, 21154, 21185, 21216, 21248, 21279, 21310, 21341, 21372, 21403, 21434, 21465,  /* 640 - 671*/
                21496, 21527, 21558, 21589, 21620, 21651, 21682, 21713, 21744, 21775, 21807, 21838, 21869, 21900, 21931, 21962, 21993, 22024, 22055, 22086, 22118, 22149, 22180, 22211, 22242, 22273, 22304, 22335, 22367, 22398, 22429, 22460,  /* 672 - 703*/
                22491, 22522, 22553, 22585, 22616, 22647, 22678, 22709, 22740, 22772, 22803, 22834, 22865, 22896, 22927, 22959, 22990, 23021, 23052, 23083, 23115, 23146, 23177, 23208, 23239, 23271, 23302, 23333, 23364, 23396, 23427, 23458,  /* 704 - 735*/
                23489, 23521, 23552, 23583, 23614, 23646, 23677, 23708, 23739, 23771, 23802, 23833, 23864, 23896, 23927, 23958, 23990, 24021, 24052, 24084, 24115, 24146, 24177, 24209, 24240, 24271, 24303, 24334, 24365, 24397, 24428, 24460,  /* 736 - 767*/
                24491, 24522, 24554, 24585, 24616, 24648, 24679, 24710, 24742, 24773, 24805, 24836, 24867, 24899, 24930, 24962, 24993, 25024, 25056, 25087, 25119, 25150, 25182, 25213, 25244, 25276, 25307, 25339, 25370, 25402, 25433, 25465,  /* 768 - 799*/
                25496, 25528, 25559, 25591, 25622, 25654, 25685, 25717, 25748, 25780, 25811, 25843, 25874, 25906, 25937, 25969, 26000, 26032, 26064, 26095, 26127, 26158, 26190, 26221, 26253, 26285, 26316, 26348, 26379, 26411, 26443, 26474,  /* 800 - 831*/
                26506, 26538, 26569, 26601, 26632, 26664, 26696, 26727, 26759, 26791, 26822, 26854, 26886, 26918, 26949, 26981, 27013, 27044, 27076, 27108, 27140, 27171, 27203, 27235, 27267, 27298, 27330, 27362, 27394, 27425, 27457, 27489,  /* 832 - 863*/
                27521, 27553, 27584, 27616, 27648, 27680, 27712, 27744, 27775, 27807, 27839, 27871, 27903, 27935, 27967, 27999, 28030, 28062, 28094, 28126, 28158, 28190, 28222, 28254, 28286, 28318, 28350, 28382, 28414, 28446, 28478, 28510,  /* 864 - 895*/
                28542, 28574, 28606, 28638, 28670, 28702, 28734, 28766, 28798, 28830, 28862, 28894, 28927, 28959, 28991, 29023, 29055, 29087, 29119, 29152, 29184, 29216, 29248, 29280, 29313, 29345, 29377, 29409, 29441, 29474, 29506, 29538,  /* 896 - 927*/
                29571, 29603, 29635, 29668, 29700, 29732, 29765, 29797, 29829, 29862, 29894, 29927, 29959, 29991, 30024, 30056, 30089, 30121, 30154, 30186, 30219, 30251, 30284, 30316, 30349, 30382, 30414, 30447, 30479, 30512, 30545, 30577,  /* 928 - 959*/
                30610, 30643, 30675, 30708, 30741, 30774, 30806, 30839, 30872, 30905, 30938, 30971, 31004, 31036, 31069, 31102, 31135, 31168, 31201, 31234, 31267, 31300, 31334, 31367, 31400, 31433, 31466, 31499, 31533, 31566, 31599, 31633,  /* 960 - 991*/
                31666, 31699, 31733, 31766, 31800, 31833, 31867, 31901, 31934, 31968, 32002, 32035, 32069, 32103, 32137, 32171, 32205, 32239, 32273, 32308, 32342, 32376, 32411, 32446, 32480, 32515, 32550, 32585, 32621, 32657, 32693, 32729,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 109, 190, 264, 332, 397, 460, 521, 580, 638, 694, 749, 804, 857, 910, 962, 1013, 1063, 1114, 1163, 1212, 1261, 1309, 1356, 1403, 1450, 1497, 1543, 1589, 1634, 1679, 1724,  /* 0 - 31*/
                1769, 1813, 1857, 1901, 1945, 1988, 2031, 2074, 2117, 2159, 2201, 2243, 2285, 2327, 2368, 2410, 2451, 2492, 2533, 2573, 2614, 2654, 2694, 2735, 2774, 2814, 2854, 2893, 2933, 2972, 3011, 3050,  /* 32 - 63*/
                3089, 3128, 3166, 3205, 3243, 3282, 3320, 3358, 3396, 3434, 3472, 3509, 3547, 3584, 3622, 3659, 3696, 3733, 3770, 3807, 3844, 3881, 3918, 3954, 3991, 4027, 4064, 4100, 4136, 4172, 4208, 4244,  /* 64 - 95*/
                4280, 4316, 4352, 4387, 4423, 4459, 4494, 4529, 4565, 4600, 4635, 4670, 4705, 4741, 4775, 4810, 4845, 4880, 4915, 4949, 4984, 5018, 5053, 5087, 5122, 5156, 5190, 5224, 5259, 5293, 5327, 5361,  /* 96 - 127*/
                5395, 5428, 5462, 5496, 5530, 5563, 5597, 5631, 5664, 5698, 5731, 5764, 5798, 5831, 5864, 5897, 5931, 5964, 5997, 6030, 6063, 6096, 6129, 6161, 6194, 6227, 6260, 6292, 6325, 6358, 6390, 6423,  /* 128 - 159*/
                6455, 6488, 6520, 6552, 6585, 6617, 6649, 6681, 6713, 6746, 6778, 6810, 6842, 6874, 6906, 6938, 6969, 7001, 7033, 7065, 7097, 7128, 7160, 7192, 7223, 7255, 7286, 7318, 7349, 7381, 7412, 7443,  /* 160 - 191*/
                7475, 7506, 7537, 7568, 7600, 7631, 7662, 7693, 7724, 7755, 7786, 7817, 7848, 7879, 7910, 7941, 7972, 8003, 8033, 8064, 8095, 8126, 8156, 8187, 8217, 8248, 8279, 8309, 8340, 8370, 8401, 8431,  /* 192 - 223*/
                8461, 8492, 8522, 8552, 8583, 8613, 8643, 8673, 8704, 8734, 8764, 8794, 8824, 8854, 8884, 8914, 8944, 8974, 9004, 9034, 9064, 9094, 9124, 9153, 9183, 9213, 9243, 9273, 9302, 9332, 9362, 9391,  /* 224 - 255*/
                9421, 9450, 9480, 9510, 9539, 9569, 9598, 9628, 9658, 9687, 9717, 9746, 9776, 9806, 9835, 9865, 9894, 9924, 9954, 9983, 10013, 10042, 10072, 10102, 10131, 10161, 10190, 10220, 10250, 10279, 10309, 10338,  /* 256 - 287*/
                10368, 10398, 10427, 10457, 10486, 10516, 10546, 10575, 10605, 10634, 10664, 10694, 10723, 10753, 10782, 10812, 10842, 10871, 10901, 10930, 10960, 10990, 11019, 11049, 11078, 11108, 11138, 11167, 11197, 11226, 11256, 11286,  /* 288 - 319*/
                11315, 11345, 11374, 11404, 11434, 11463, 11493, 11522, 11552, 11582, 11611, 11641, 11670, 11700, 11730, 11759, 11789, 11818, 11848, 11878, 11907, 11937, 11966, 11996, 12026, 12055, 12085, 12114, 12144, 12174, 12203, 12233,  /* 320 - 351*/
                12262, 12292, 12322, 12351, 12381, 12410, 12440, 12470, 12499, 12529, 12558, 12588, 12618, 12647, 12677, 12706, 12736, 12766, 12795, 12825, 12854, 12884, 12914, 12943, 12973, 13002, 13032, 13062, 13091, 13121, 13150, 13180,  /* 352 - 383*/
                13210, 13239, 13269, 13298, 13328, 13358, 13387, 13417, 13446, 13476, 13506, 13535, 13565, 13594, 13624, 13654, 13683, 13713, 13742, 13772, 13802, 13831, 13861, 13890, 13920, 13950, 13979, 14009, 14038, 14068, 14098, 14127,  /* 384 - 415*/
                14157, 14186, 14216, 14246, 14275, 14305, 14334, 14364, 14394, 14423, 14453, 14482, 14512, 14542, 14571, 14601, 14630, 14660, 14690, 14719, 14749, 14778, 14808, 14838, 14867, 14897, 14926, 14956, 14986, 15015, 15045, 15074,  /* 416 - 447*/
                15104, 15134, 15163, 15193, 15222, 15252, 15282, 15311, 15341, 15370, 15400, 15430, 15459, 15489, 15518, 15548, 15578, 15607, 15637, 15666, 15696, 15726, 15755, 15785, 15814, 15844, 15874, 15903, 15933, 15962, 15992, 16022,  /* 448 - 479*/
                16051, 16081, 16110, 16140, 16170, 16199, 16229, 16258, 16288, 16318, 16347, 16377, 16406, 16436, 16466, 16495, 16525, 16554, 16584, 16614, 16643, 16673, 16702, 16732, 16762, 16791, 16821, 16850, 16880, 16910, 16939, 16969,  /* 480 - 511*/
                16998, 17028, 17058, 17087, 17117, 17146, 17176, 17206, 17235, 17265, 17294, 17324, 17354, 17383, 17413, 17442, 17472, 17502, 17531, 17561, 17590, 17620, 17650, 17679, 17709, 17738, 17768, 17798, 17827, 17857, 17886, 17916,  /* 512 - 543*/
                17946, 17975, 18005, 18034, 18064, 18094, 18123, 18153, 18182, 18212, 18242, 18271, 18301, 18330, 18360, 18390, 18419, 18449, 18478, 18508, 18538, 18567, 18597, 18626, 18656, 18686, 18715, 18745, 18774, 18804, 18834, 18863,  /* 544 - 575*/
                18893, 18922, 18952, 18982, 19011, 19041, 19070, 19100, 19130, 19159, 19189, 19218, 19248, 19278, 19307, 19337, 19366, 19396, 19426, 19455, 19485, 19514, 19544, 19574, 19603, 19633, 19662, 19692, 19722, 19751, 19781, 19810,  /* 576 - 607*/
                19840, 19870, 19899, 19929, 19958, 19988, 20018, 20047, 20077, 20106, 20136, 20166, 20195, 20225, 20254, 20284, 20314, 20343, 20373, 20402, 20432, 20462, 20491, 20521, 20550, 20580, 20610, 20639, 20669, 20698, 20728, 20758,  /* 608 - 639*/
                20787, 20817, 20846, 20876, 20906, 20935, 20965, 20994, 21024, 21054, 21083, 21113, 21142, 21172, 21202, 21231, 21261, 21290, 21320, 21350, 21379, 21409, 21438, 21468, 21498, 21527, 21557, 21586, 21616, 21646, 21675, 21705,  /* 640 - 671*/
                21734, 21764, 21794, 21823, 21853, 21882, 21912, 21942, 21971, 22001, 22030, 22060, 22090, 22119, 22149, 22178, 22208, 22238, 22267, 22297, 22326, 22356, 22386, 22415, 22445, 22474, 22504, 22534, 22563, 22593, 22622, 22652,  /* 672 - 703*/
                22682, 22711, 22741, 22770, 22800, 22830, 22859, 22889, 22918, 22948, 22978, 23007, 23037, 23066, 23096, 23126, 23155, 23185, 23214, 23244, 23274, 23303, 23333, 23362, 23392, 23422, 23451, 23481, 23510, 23540, 23570, 23599,  /* 704 - 735*/
                23629, 23658, 23688, 23718, 23747, 23777, 23806, 23836, 23866, 23895, 23925, 23954, 23984, 24014, 24043, 24073, 24102, 24132, 24162, 24191, 24221, 24250, 24280, 24310, 24339, 24369, 24398, 24428, 24458, 24487, 24517, 24546,  /* 736 - 767*/
                24576, 24606, 24635, 24665, 24694, 24724, 24754, 24783, 24813, 24843, 24872, 24902, 24932, 24962, 24991, 25021, 25051, 25080, 25110, 25140, 25170, 25200, 25229, 25259, 25289, 25319, 25349, 25378, 25408, 25438, 25468, 25498,  /* 768 - 799*/
                25528, 25558, 25588, 25618, 25648, 25677, 25707, 25737, 25767, 25797, 25827, 25857, 25887, 25917, 25947, 25977, 26008, 26038, 26068, 26098, 26128, 26158, 26188, 26218, 26248, 26279, 26309, 26339, 26369, 26399, 26430, 26460,  /* 800 - 831*/
                26490, 26520, 26551, 26581, 26611, 26641, 26672, 26702, 26732, 26763, 26793, 26823, 26854, 26884, 26915, 26945, 26975, 27006, 27036, 27067, 27097, 27128, 27158, 27189, 27219, 27250, 27281, 27311, 27342, 27372, 27403, 27434,  /* 832 - 863*/
                27464, 27495, 27526, 27556, 27587, 27618, 27649, 27679, 27710, 27741, 27772, 27802, 27833, 27864, 27895, 27926, 27957, 27988, 28019, 28050, 28081, 28112, 28143, 28174, 28205, 28236, 28267, 28298, 28329, 28360, 28391, 28422,  /* 864 - 895*/
                28453, 28485, 28516, 28547, 28578, 28610, 28641, 28672, 28703, 28735, 28766, 28798, 28829, 28860, 28892, 28923, 28955, 28986, 29018, 29049, 29081, 29112, 29144, 29176, 29207, 29239, 29271, 29303, 29334, 29366, 29398, 29430,  /* 896 - 927*/
                29461, 29493, 29525, 29557, 29589, 29621, 29653, 29685, 29717, 29749, 29781, 29814, 29846, 29878, 29910, 29942, 29975, 30007, 30039, 30072, 30104, 30137, 30169, 30201, 30234, 30267, 30299, 30332, 30365, 30397, 30430, 30463,  /* 928 - 959*/
                30496, 30528, 30561, 30594, 30627, 30660, 30693, 30726, 30760, 30793, 30826, 30859, 30893, 30926, 30960, 30993, 31027, 31060, 31094, 31127, 31161, 31195, 31229, 31263, 31297, 31331, 31365, 31399, 31433, 31468, 31502, 31537,  /* 960 - 991*/
                31571, 31606, 31641, 31675, 31710, 31745, 31780, 31816, 31851, 31886, 31922, 31957, 31993, 32029, 32065, 32101, 32138, 32174, 32211, 32248, 32285, 32322, 32360, 32398, 32436, 32475, 32514, 32553, 32593, 32634, 32676, 32719,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 184, 300, 399, 488, 571, 650, 724, 795, 864, 930, 995, 1058, 1119, 1179, 1238, 1295, 1351, 1407, 1461, 1515, 1568, 1620, 1672, 1722, 1773, 1822, 1871, 1920, 1968, 2015, 2062,  /* 0 - 31*/
                2109, 2155, 2200, 2246, 2291, 2335, 2379, 2423, 2467, 2510, 2553, 2596, 2638, 2680, 2722, 2763, 2804, 2845, 2886, 2926, 2967, 3007, 3046, 3086, 3125, 3165, 3204, 3242, 3281, 3319, 3357, 3395,  /* 32 - 63*/
                3433, 3471, 3508, 3546, 3583, 3620, 3656, 3693, 3730, 3766, 3802, 3838, 3874, 3910, 3946, 3981, 4016, 4052, 4087, 4122, 4157, 4191, 4226, 4260, 4295, 4329, 4363, 4397, 4431, 4465, 4499, 4532,  /* 64 - 95*/
                4566, 4599, 4633, 4666, 4699, 4732, 4765, 4797, 4830, 4863, 4895, 4928, 4960, 4992, 5025, 5057, 5089, 5120, 5152, 5184, 5216, 5247, 5279, 5310, 5342, 5373, 5404, 5435, 5466, 5497, 5528, 5559,  /* 96 - 127*/
                5590, 5620, 5651, 5681, 5712, 5742, 5773, 5803, 5833, 5863, 5893, 5923, 5953, 5983, 6013, 6043, 6072, 6102, 6131, 6161, 6190, 6220, 6249, 6278, 6308, 6337, 6366, 6395, 6424, 6453, 6483, 6512,  /* 128 - 159*/
                6541, 6570, 6599, 6628, 6658, 6687, 6716, 6745, 6774, 6804, 6833, 6862, 6891, 6920, 6949, 6979, 7008, 7037, 7066, 7095, 7125, 7154, 7183, 7212, 7241, 7270, 7300, 7329, 7358, 7387, 7416, 7446,  /* 160 - 191*/
                7475, 7504, 7533, 7562, 7591, 7621, 7650, 7679, 7708, 7737, 7766, 7796, 7825, 7854, 7883, 7912, 7942, 7971, 8000, 8029, 8058, 8087, 8117, 8146, 8175, 8204, 8233, 8263, 8292, 8321, 8350, 8379,  /* 192 - 223*/
                8408, 8438, 8467, 8496, 8525, 8554, 8584, 8613, 8642, 8671, 8700, 8729, 8759, 8788, 8817, 8846, 8875, 8904, 8934, 8963, 8992, 9021, 9050, 9080, 9109, 9138, 9167, 9196, 9225, 9255, 9284, 9313,  /* 224 - 255*/
                9342, 9371, 9401, 9430, 9459, 9488, 9517, 9546, 9576, 9605, 9634, 9663, 9692, 9722, 9751, 9780, 9809, 9838, 9867, 9897, 9926, 9955, 9984, 10013, 10043, 10072, 10101, 10130, 10159, 10188, 10218, 10247,  /* 256 - 287*/
                10276, 10305, 10334, 10363, 10393, 10422, 10451, 10480, 10509, 10539, 10568, 10597, 10626, 10655, 10684, 10714, 10743, 10772, 10801, 10830, 10860, 10889, 10918, 10947, 10976, 11005, 11035, 11064, 11093, 11122, 11151, 11181,  /* 288 - 319*/
                11210, 11239, 11268, 11297, 11326, 11356, 11385, 11414, 11443, 11472, 11501, 11531, 11560, 11589, 11618, 11647, 11677, 11706, 11735, 11764, 11793, 11822, 11852, 11881, 11910, 11939, 11968, 11998, 12027, 12056, 12085, 12114,  /* 320 - 351*/
                12143, 12173, 12202, 12231, 12260, 12289, 12319, 12348, 12377, 12406, 12435, 12464, 12494, 12523, 12552, 12581, 12610, 12639, 12669, 12698, 12727, 12756, 12785, 12815, 12844, 12873, 12902, 12931, 12960, 12990, 13019, 13048,  /* 352 - 383*/
                13077, 13106, 13136, 13165, 13194, 13223, 13252, 13281, 13311, 13340, 13369, 13398, 13427, 13457, 13486, 13515, 13544, 13573, 13602, 13632, 13661, 13690, 13719, 13748, 13778, 13807, 13836, 13865, 13894, 13923, 13953, 13982,  /* 384 - 415*/
                14011, 14040, 14069, 14098, 14128, 14157, 14186, 14215, 14244, 14274, 14303, 14332, 14361, 14390, 14419, 14449, 14478, 14507, 14536, 14565, 14595, 14624, 14653, 14682, 14711, 14740, 14770, 14799, 14828, 14857, 14886, 14916,  /* 416 - 447*/
                14945, 14974, 15003, 15032, 15061, 15091, 15120, 15149, 15178, 15207, 15236, 15266, 15295, 15324, 15353, 15382, 15412, 15441, 15470, 15499, 15528, 15557, 15587, 15616, 15645, 15674, 15703, 15733, 15762, 15791, 15820, 15849,  /* 448 - 479*/
                15878, 15908, 15937, 15966, 15995, 16024, 16054, 16083, 16112, 16141, 16170, 16199, 16229, 16258, 16287, 16316, 16345, 16374, 16404, 16433, 16462, 16491, 16520, 16550, 16579, 16608, 16637, 16666, 16695, 16725, 16754, 16783,  /* 480 - 511*/
                16812, 16841, 16871, 16900, 16929, 16958, 16987, 17016, 17046, 17075, 17104, 17133, 17162, 17192, 17221, 17250, 17279, 17308, 17337, 17367, 17396, 17425, 17454, 17483, 17513, 17542, 17571, 17600, 17629, 17658, 17688, 17717,  /* 512 - 543*/
                17746, 17775, 17804, 17833, 17863, 17892, 17921, 17950, 17979, 18009, 18038, 18067, 18096, 18125, 18154, 18184, 18213, 18242, 18271, 18300, 18330, 18359, 18388, 18417, 18446, 18475, 18505, 18534, 18563, 18592, 18621, 18651,  /* 544 - 575*/
                18680, 18709, 18738, 18767, 18796, 18826, 18855, 18884, 18913, 18942, 18971, 19001, 19030, 19059, 19088, 19117, 19147, 19176, 19205, 19234, 19263, 19292, 19322, 19351, 19380, 19409, 19438, 19468, 19497, 19526, 19555, 19584,  /* 576 - 607*/
                19613, 19643, 19672, 19701, 19730, 19759, 19789, 19818, 19847, 19876, 19905, 19934, 19964, 19993, 20022, 20051, 20080, 20109, 20139, 20168, 20197, 20226, 20255, 20285, 20314, 20343, 20372, 20401, 20430, 20460, 20489, 20518,  /* 608 - 639*/
                20547, 20576, 20606, 20635, 20664, 20693, 20722, 20751, 20781, 20810, 20839, 20868, 20897, 20927, 20956, 20985, 21014, 21043, 21072, 21102, 21131, 21160, 21189, 21218, 21248, 21277, 21306, 21335, 21364, 21393, 21423, 21452,  /* 640 - 671*/
                21481, 21510, 21540, 21569, 21598, 21627, 21657, 21686, 21715, 21745, 21774, 21803, 21833, 21862, 21891, 21921, 21950, 21979, 22009, 22038, 22067, 22097, 22126, 22156, 22185, 22214, 22244, 22273, 22303, 22332, 22362, 22391,  /* 672 - 703*/
                22421, 22450, 22480, 22509, 22539, 22568, 22598, 22627, 22657, 22686, 22716, 22745, 22775, 22805, 22834, 22864, 22893, 22923, 22953, 22982, 23012, 23042, 23071, 23101, 23131, 23160, 23190, 23220, 23249, 23279, 23309, 23339,  /* 704 - 735*/
                23368, 23398, 23428, 23458, 23488, 23517, 23547, 23577, 23607, 23637, 23667, 23696, 23726, 23756, 23786, 23816, 23846, 23876, 23906, 23936, 23966, 23995, 24025, 24055, 24085, 24115, 24145, 24175, 24205, 24235, 24265, 24296,  /* 736 - 767*/
                24326, 24356, 24386, 24416, 24446, 24476, 24506, 24536, 24567, 24597, 24627, 24657, 24687, 24717, 24748, 24778, 24808, 24838, 24869, 24899, 24929, 24959, 24990, 25020, 25050, 25081, 25111, 25141, 25172, 25202, 25233, 25263,  /* 768 - 799*/
                25293, 25324, 25354, 25385, 25415, 25446, 25476, 25507, 25537, 25568, 25598, 25629, 25659, 25690, 25721, 25751, 25782, 25812, 25843, 25874, 25904, 25935, 25966, 25996, 26027, 26058, 26089, 26119, 26150, 26181, 26212, 26243,  /* 800 - 831*/
                26274, 26304, 26335, 26366, 26397, 26428, 26459, 26490, 26521, 26552, 26583, 26614, 26645, 26676, 26707, 26738, 26769, 26800, 26831, 26862, 26893, 26924, 26956, 26987, 27018, 27049, 27080, 27112, 27143, 27174, 27206, 27237,  /* 832 - 863*/
                27268, 27300, 27331, 27362, 27394, 27425, 27457, 27488, 27519, 27551, 27582, 27614, 27646, 27677, 27709, 27740, 27772, 27804, 27835, 27867, 27899, 27930, 27962, 27994, 28026, 28057, 28089, 28121, 28153, 28185, 28217, 28249,  /* 864 - 895*/
                28281, 28313, 28345, 28377, 28409, 28441, 28473, 28505, 28537, 28569, 28601, 28634, 28666, 28698, 28730, 28763, 28795, 28827, 28860, 28892, 28925, 28957, 28990, 29022, 29055, 29087, 29120, 29152, 29185, 29218, 29250, 29283,  /* 896 - 927*/
                29316, 29349, 29382, 29414, 29447, 29480, 29513, 29546, 29579, 29612, 29645, 29678, 29712, 29745, 29778, 29811, 29845, 29878, 29911, 29945, 29978, 30012, 30045, 30079, 30112, 30146, 30180, 30213, 30247, 30281, 30315, 30349,  /* 928 - 959*/
                30383, 30417, 30451, 30485, 30519, 30553, 30587, 30622, 30656, 30691, 30725, 30760, 30794, 30829, 30863, 30898, 30933, 30968, 31003, 31038, 31073, 31108, 31143, 31179, 31214, 31249, 31285, 31321, 31356, 31392, 31428, 31464,  /* 960 - 991*/
                31500, 31536, 31572, 31609, 31645, 31682, 31719, 31755, 31792, 31830, 31867, 31904, 31942, 31980, 32017, 32056, 32094, 32132, 32171, 32210, 32249, 32289, 32329, 32369, 32409, 32450, 32492, 32534, 32577, 32621, 32666, 32714,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 184, 300, 399, 488, 571, 650, 724, 795, 864, 930, 995, 1058, 1119, 1179, 1238, 1295, 1351, 1407, 1461, 1515, 1568, 1620, 1672, 1722, 1773, 1822, 1871, 1920, 1968, 2015, 2062,  /* 0 - 31*/
                2109, 2155, 2200, 2246, 2291, 2335, 2379, 2423, 2467, 2510, 2553, 2596, 2638, 2680, 2722, 2763, 2804, 2845, 2886, 2926, 2967, 3007, 3046, 3086, 3125, 3165, 3204, 3242, 3281, 3319, 3357, 3395,  /* 32 - 63*/
                3433, 3471, 3508, 3546, 3583, 3620, 3656, 3693, 3730, 3766, 3802, 3838, 3874, 3910, 3946, 3981, 4016, 4052, 4087, 4122, 4157, 4191, 4226, 4260, 4295, 4329, 4363, 4397, 4431, 4465, 4499, 4532,  /* 64 - 95*/
                4566, 4599, 4633, 4666, 4699, 4732, 4765, 4797, 4830, 4863, 4895, 4928, 4960, 4992, 5025, 5057, 5089, 5120, 5152, 5184, 5216, 5247, 5279, 5310, 5342, 5373, 5404, 5435, 5466, 5497, 5528, 5559,  /* 96 - 127*/
                5590, 5620, 5651, 5681, 5712, 5742, 5773, 5803, 5833, 5863, 5893, 5923, 5953, 5983, 6013, 6043, 6072, 6102, 6131, 6161, 6190, 6220, 6249, 6278, 6308, 6337, 6366, 6395, 6424, 6453, 6483, 6512,  /* 128 - 159*/
                6541, 6570, 6599, 6628, 6658, 6687, 6716, 6745, 6774, 6804, 6833, 6862, 6891, 6920, 6949, 6979, 7008, 7037, 7066, 7095, 7125, 7154, 7183, 7212, 7241, 7270, 7300, 7329, 7358, 7387, 7416, 7446,  /* 160 - 191*/
                7475, 7504, 7533, 7562, 7591, 7621, 7650, 7679, 7708, 7737, 7766, 7796, 7825, 7854, 7883, 7912, 7942, 7971, 8000, 8029, 8058, 8087, 8117, 8146, 8175, 8204, 8233, 8263, 8292, 8321, 8350, 8379,  /* 192 - 223*/
                8408, 8438, 8467, 8496, 8525, 8554, 8584, 8613, 8642, 8671, 8700, 8729, 8759, 8788, 8817, 8846, 8875, 8904, 8934, 8963, 8992, 9021, 9050, 9080, 9109, 9138, 9167, 9196, 9225, 9255, 9284, 9313,  /* 224 - 255*/
                9342, 9371, 9401, 9430, 9459, 9488, 9517, 9546, 9576, 9605, 9634, 9663, 9692, 9722, 9751, 9780, 9809, 9838, 9867, 9897, 9926, 9955, 9984, 10013, 10043, 10072, 10101, 10130, 10159, 10188, 10218, 10247,  /* 256 - 287*/
                10276, 10305, 10334, 10363, 10393, 10422, 10451, 10480, 10509, 10539, 10568, 10597, 10626, 10655, 10684, 10714, 10743, 10772, 10801, 10830, 10860, 10889, 10918, 10947, 10976, 11005, 11035, 11064, 11093, 11122, 11151, 11181,  /* 288 - 319*/
                11210, 11239, 11268, 11297, 11326, 11356, 11385, 11414, 11443, 11472, 11501, 11531, 11560, 11589, 11618, 11647, 11677, 11706, 11735, 11764, 11793, 11822, 11852, 11881, 11910, 11939, 11968, 11998, 12027, 12056, 12085, 12114,  /* 320 - 351*/
                12143, 12173, 12202, 12231, 12260, 12289, 12319, 12348, 12377, 12406, 12435, 12464, 12494, 12523, 12552, 12581, 12610, 12639, 12669, 12698, 12727, 12756, 12785, 12815, 12844, 12873, 12902, 12931, 12960, 12990, 13019, 13048,  /* 352 - 383*/
                13077, 13106, 13136, 13165, 13194, 13223, 13252, 13281, 13311, 13340, 13369, 13398, 13427, 13457, 13486, 13515, 13544, 13573, 13602, 13632, 13661, 13690, 13719, 13748, 13778, 13807, 13836, 13865, 13894, 13923, 13953, 13982,  /* 384 - 415*/
                14011, 14040, 14069, 14098, 14128, 14157, 14186, 14215, 14244, 14274, 14303, 14332, 14361, 14390, 14419, 14449, 14478, 14507, 14536, 14565, 14595, 14624, 14653, 14682, 14711, 14740, 14770, 14799, 14828, 14857, 14886, 14916,  /* 416 - 447*/
                14945, 14974, 15003, 15032, 15061, 15091, 15120, 15149, 15178, 15207, 15236, 15266, 15295, 15324, 15353, 15382, 15412, 15441, 15470, 15499, 15528, 15557, 15587, 15616, 15645, 15674, 15703, 15733, 15762, 15791, 15820, 15849,  /* 448 - 479*/
                15878, 15908, 15937, 15966, 15995, 16024, 16054, 16083, 16112, 16141, 16170, 16199, 16229, 16258, 16287, 16316, 16345, 16374, 16404, 16433, 16462, 16491, 16520, 16550, 16579, 16608, 16637, 16666, 16695, 16725, 16754, 16783,  /* 480 - 511*/
                16812, 16841, 16871, 16900, 16929, 16958, 16987, 17016, 17046, 17075, 17104, 17133, 17162, 17192, 17221, 17250, 17279, 17308, 17337, 17367, 17396, 17425, 17454, 17483, 17513, 17542, 17571, 17600, 17629, 17658, 17688, 17717,  /* 512 - 543*/
                17746, 17775, 17804, 17833, 17863, 17892, 17921, 17950, 17979, 18009, 18038, 18067, 18096, 18125, 18154, 18184, 18213, 18242, 18271, 18300, 18330, 18359, 18388, 18417, 18446, 18475, 18505, 18534, 18563, 18592, 18621, 18651,  /* 544 - 575*/
                18680, 18709, 18738, 18767, 18796, 18826, 18855, 18884, 18913, 18942, 18971, 19001, 19030, 19059, 19088, 19117, 19147, 19176, 19205, 19234, 19263, 19292, 19322, 19351, 19380, 19409, 19438, 19468, 19497, 19526, 19555, 19584,  /* 576 - 607*/
                19613, 19643, 19672, 19701, 19730, 19759, 19789, 19818, 19847, 19876, 19905, 19934, 19964, 19993, 20022, 20051, 20080, 20109, 20139, 20168, 20197, 20226, 20255, 20285, 20314, 20343, 20372, 20401, 20430, 20460, 20489, 20518,  /* 608 - 639*/
                20547, 20576, 20606, 20635, 20664, 20693, 20722, 20751, 20781, 20810, 20839, 20868, 20897, 20927, 20956, 20985, 21014, 21043, 21072, 21102, 21131, 21160, 21189, 21218, 21248, 21277, 21306, 21335, 21364, 21393, 21423, 21452,  /* 640 - 671*/
                21481, 21510, 21540, 21569, 21598, 21627, 21657, 21686, 21715, 21745, 21774, 21803, 21833, 21862, 21891, 21921, 21950, 21979, 22009, 22038, 22067, 22097, 22126, 22156, 22185, 22214, 22244, 22273, 22303, 22332, 22362, 22391,  /* 672 - 703*/
                22421, 22450, 22480, 22509, 22539, 22568, 22598, 22627, 22657, 22686, 22716, 22745, 22775, 22805, 22834, 22864, 22893, 22923, 22953, 22982, 23012, 23042, 23071, 23101, 23131, 23160, 23190, 23220, 23249, 23279, 23309, 23339,  /* 704 - 735*/
                23368, 23398, 23428, 23458, 23488, 23517, 23547, 23577, 23607, 23637, 23667, 23696, 23726, 23756, 23786, 23816, 23846, 23876, 23906, 23936, 23966, 23995, 24025, 24055, 24085, 24115, 24145, 24175, 24205, 24235, 24265, 24296,  /* 736 - 767*/
                24326, 24356, 24386, 24416, 24446, 24476, 24506, 24536, 24567, 24597, 24627, 24657, 24687, 24717, 24748, 24778, 24808, 24838, 24869, 24899, 24929, 24959, 24990, 25020, 25050, 25081, 25111, 25141, 25172, 25202, 25233, 25263,  /* 768 - 799*/
                25293, 25324, 25354, 25385, 25415, 25446, 25476, 25507, 25537, 25568, 25598, 25629, 25659, 25690, 25721, 25751, 25782, 25812, 25843, 25874, 25904, 25935, 25966, 25996, 26027, 26058, 26089, 26119, 26150, 26181, 26212, 26243,  /* 800 - 831*/
                26274, 26304, 26335, 26366, 26397, 26428, 26459, 26490, 26521, 26552, 26583, 26614, 26645, 26676, 26707, 26738, 26769, 26800, 26831, 26862, 26893, 26924, 26956, 26987, 27018, 27049, 27080, 27112, 27143, 27174, 27206, 27237,  /* 832 - 863*/
                27268, 27300, 27331, 27362, 27394, 27425, 27457, 27488, 27519, 27551, 27582, 27614, 27646, 27677, 27709, 27740, 27772, 27804, 27835, 27867, 27899, 27930, 27962, 27994, 28026, 28057, 28089, 28121, 28153, 28185, 28217, 28249,  /* 864 - 895*/
                28281, 28313, 28345, 28377, 28409, 28441, 28473, 28505, 28537, 28569, 28601, 28634, 28666, 28698, 28730, 28763, 28795, 28827, 28860, 28892, 28925, 28957, 28990, 29022, 29055, 29087, 29120, 29152, 29185, 29218, 29250, 29283,  /* 896 - 927*/
                29316, 29349, 29382, 29414, 29447, 29480, 29513, 29546, 29579, 29612, 29645, 29678, 29712, 29745, 29778, 29811, 29845, 29878, 29911, 29945, 29978, 30012, 30045, 30079, 30112, 30146, 30180, 30213, 30247, 30281, 30315, 30349,  /* 928 - 959*/
                30383, 30417, 30451, 30485, 30519, 30553, 30587, 30622, 30656, 30691, 30725, 30760, 30794, 30829, 30863, 30898, 30933, 30968, 31003, 31038, 31073, 31108, 31143, 31179, 31214, 31249, 31285, 31321, 31356, 31392, 31428, 31464,  /* 960 - 991*/
                31500, 31536, 31572, 31609, 31645, 31682, 31719, 31755, 31792, 31830, 31867, 31904, 31942, 31980, 32017, 32056, 32094, 32132, 32171, 32210, 32249, 32289, 32329, 32369, 32409, 32450, 32492, 32534, 32577, 32621, 32666, 32714,  /* 992 - 1023*/
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
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 1 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 2 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 3 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 4 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 5 */
            {
                /* nDetailSigmaDis */
                11000,
                /* nDetailSigmaVal */
                1000,
                /* nDetailExtraStrPos */
                16,
                /* nDetailExtraStrNeg */
                16,
                /* nDetailGainLimitPos */
                57344,
                /* nDetailGainLimitNeg */
                57344,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 6 */
            {
                /* nDetailSigmaDis */
                8000,
                /* nDetailSigmaVal */
                800,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 7 */
            {
                /* nDetailSigmaDis */
                8000,
                /* nDetailSigmaVal */
                800,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 8 */
            {
                /* nDetailSigmaDis */
                8000,
                /* nDetailSigmaVal */
                800,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 9 */
            {
                /* nDetailSigmaDis */
                10000,
                /* nDetailSigmaVal */
                1500,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 10 */
            {
                /* nDetailSigmaDis */
                10000,
                /* nDetailSigmaVal */
                1500,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
            },
            /* 11 */
            {
                /* nDetailSigmaDis */
                10000,
                /* nDetailSigmaVal */
                1500,
                /* nDetailExtraStrPos */
                147,
                /* nDetailExtraStrNeg */
                151,
                /* nDetailGainLimitPos */
                7287,
                /* nDetailGainLimitNeg */
                34130,
                /* nSlopeStrengthLut[33] */
                {
                    24139, 19088, 15184, 12888, 11051, 9214, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192, 8192,  /* 0 - 31*/
                    8192, /*32 - 32*/
                },
                /* nSlopeCoeff */
                5327,
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
                    {64, 64, 64, 110, 110, 110, 110, 110, 110, 110, 110, 110, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {64, 64, 64, 64, 64, 64, 64, 64, 64, 51, 48, 42, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {42, 42, 42, 28, 28, 30, 30, 64, 54, 48, 42, 42, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {32, 34, 34, 34, 34, 34, 34, 34, 34, 34, 32, 32, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {15, 10, 10, 10, 10, 10, 10, 12, 12, 12, 8, 8, /*0 - 11*/},
                    /* nDetailCoringPos[12] */
                    {1, 1, 1, 1, 1, 1, 80, 100, 200, 200, 200, 200, /*0 - 11*/},
                    /* nDetailCoringNeg[12] */
                    {1, 1, 1, 1, 1, 1, 100, 150, 200, 200, 200, 200, /*0 - 11*/},
                    /* nDetailGainPos[12] */
                    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, /*0 - 11*/},
                    /* nDetailGainNeg[12] */
                    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, /*0 - 11*/},
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
    1,
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
        {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_GIC_PARAM_T gic_param_sdr = {
    /* nGicEnable */
    1,
    /* nAutoMode */
    0,
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
        {11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11,  /*0 - 15*/},
        /* nFcCorSatLevel1[16] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,  /*0 - 15*/},
    },
};

const static AX_ISP_IQ_DEPURPLE_PARAM_T depurple_param_sdr = {
    /* nEnable */
    1,
    /* nAutoMode */
    0,
    /* nRefMode */
    1,
    /* nDepurpleMode */
    1,
    /* tDetParam */
    {
        /* nDetMode */
        1,
        /* nDetEdgeSlopeY */
        4,
        /* nDetEdgeOffsetY */
        0,
        /* nDetEdgeEnableC */
        1,
        /* nDetEdgeSlopeC */
        2,
        /* nDetEdgeOffsetC */
        0,
        /* nDetSeledgeThrY */
        14080,
        /* nDetSeledgeSlopeY */
        1,
        /* nDetSeledgeWeight[7] */
        {64, 64, 48, 40, 32, 24, 16, /*0 - 6*/},
        /* nDetMaskStrength */
        128,
        /* nDetMaskStrengthPre */
        32,
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
        {0, 0, 32, 64, 128, 128, 128, 128, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {0, 128, 128, 128, 128, 128, /*0 - 5*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        6,
        /* nRefVal[16] */
        {1024, 4096, 8192, 16384, 32768, 65536, /*0 - 5*/},
        /* nCompStrength[16] */
        {128, 128, 128, 128, 128, 128, /*0 - 5*/},
        /* nCompTargetLuma[16][8] */
        {
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
            {0, 0, 0, 0, 16, 96, 96, 64, /*0 - 7*/},
        },
        /* nCompTargetHue[16][16] */
        {
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
            {128, 128, 128, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, /*0 - 15*/},
        },
        /* nCompTargetSat[16][6] */
        {
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
            {128, 128, 128, 128, 128, 128, /*0 - 5*/},
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
        0,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-183, 44, -48, -48, 11, -106, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {-19, -18, -17, -14, -6, 2, 2, 1, 0, 19, 19, 19, 0, 0, 0, -16, /*0 - 15*/},
        /* nXcmHue[16] */
        {-128, -128, -128, 0, 32, 32, -640, -640, 192, -1, -384, -256, 0, 0, 0, -64, /*0 - 15*/},
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
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
                {3072, 8192, 65536, 512000, 1024000, /*0 - 4*/},
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
                {15, 15, 15, -10, -25, /*0 - 4*/},
                {15, 15, 15, -10, -25, /*0 - 4*/},
                {15, 15, 15, -5, -10, /*0 - 4*/},
                {15, 15, 20, 0, 0, /*0 - 4*/},
                {15, 15, 18, 0, 0, /*0 - 4*/},
                {15, 15, 15, 0, 10, /*0 - 4*/},
                {0, 0, 0, -5, -10, /*0 - 4*/},
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
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                    {-150, 10, -60, 26, 10, -317, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                    {-160, 10, -55, 2, 0, -199, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                    {-200, -30, -44, -50, 25, -104, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                    {-157, -40, -45, -40, 20, -103, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                    {-180, 40, -62, -58, 15, -100, /*0 - 5*/},
                },
                /* nCcmMatrix 5 */
                {
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                    {-184, 45, -45, -46, 10, -108, /*0 - 5*/},
                },
                /* nCcmMatrix 6 */
                {
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
                    {-107, -49, -74, -87, -11, -155, /*0 - 5*/},
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
                    {-15, -15, -21, -5, -4, 0, 0, 6, -5, -5, -5, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -5, -5, -5, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -5, -5, -5, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -5, -5, -5, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -5, -5, -5, -5, 0, 0, 0, -10, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {-15, -15, -21, -5, -4, 0, 0, 6, -10, -16, -16, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -10, -16, -16, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -10, -16, -16, -5, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {-15, -15, -21, -5, -4, 0, 0, 6, 16, 0, -10, -10, -5, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 16, 0, -10, -10, -5, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 16, 0, -10, -10, -5, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 16, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 16, 0, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {-15, -15, -21, -5, -4, 0, 0, 6, -10, -10, -16, -16, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -10, -10, -16, -16, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, -10, 20, 20, 20, 0, 0, 0, -10, /*0 - 15*/},
                    {-15, -15, -21, -5, -4, 0, 0, 6, 0, 15, 15, 15, 0, 0, 0, 0, /*0 - 15*/},
                    {-15, -15, -21, -5, 10, 18, 24, 24, 24, 24, 24, 24, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {-16, -14, -32, -14, -16, -16, -5, 0, -10, -16, -16, -16, 0, 0, 0, -20, /*0 - 15*/},
                    {-15, -15, -15, 0, -10, -10, -5, -10, 0, 15, 15, 15, 0, 0, 0, -15, /*0 - 15*/},
                    {-32, -32, -27, -14, -10, 0, 0, 0, 0, -16, -16, -16, 0, 0, 0, 0, /*0 - 15*/},
                    {-32, -32, -27, -14, -10, 0, 0, 0, 0, 8, 8, 8, 0, 0, 0, 0, /*0 - 15*/},
                    {-32, -32, -27, -14, -10, 10, 8, 6, 0, 15, 15, 15, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {-16, -24, -24, -28, -24, -24, -10, 0, -10, -16, -16, -16, 0, 0, 0, -20, /*0 - 15*/},
                    {-16, -28, -28, -18, -10, 0, 0, 0, -8, -8, -8, -8, 0, 0, 0, -20, /*0 - 15*/},
                    {-16, -28, -28, -14, -10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -20, /*0 - 15*/},
                    {-16, -14, -14, -14, -5, 0, 0, 0, 0, 10, 10, 10, 0, 0, 0, -20, /*0 - 15*/},
                    {-16, -14, -14, -14, -5, 0, 0, 0, 0, 20, 20, 20, 0, 0, 0, -20, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {-16, -24, -24, -24, -20, -8, 0, 0, 0, -16, -16, -16, 0, 0, 0, -16, /*0 - 15*/},
                    {-16, -24, -24, -24, -10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -20, /*0 - 15*/},
                    {-24, -24, -24, -24, -10, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, -20, /*0 - 15*/},
                    {-16, -16, -16, -16, -5, 0, 0, 0, 0, -10, -10, -10, 0, 0, 0, -20, /*0 - 15*/},
                    {-16, -16, -16, -16, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -20, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -77, -160, 0, 0, -640, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {0, 0, -546, -273, 0, -320, -320, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -546, -273, 0, -320, -320, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -546, -273, 0, -320, -320, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -546, -273, 0, -320, -320, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -546, -273, 0, -320, -320, -320, 0, 0, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {0, 0, -640, -320, 0, -320, -320, -320, 640, 320, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -640, -320, 0, -320, -320, -320, 640, 320, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -640, -320, 0, -320, -320, -320, 640, 320, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -640, -320, 0, -320, -320, -320, 640, 320, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                    {0, 0, -640, -320, 0, -320, -320, -320, 640, 320, -640, -320, -320, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {0, 0, -640, 0, 160, 160, -640, -640, -640, -640, -640, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {-640, -640, -640, 0, 160, 160, -640, -640, 640, 320, 320, 0, 0, 0, 0, -320, /*0 - 15*/},
                    {-640, -640, -640, 0, 160, 160, -640, -640, 320, -640, -640, 0, 0, 0, 0, -320, /*0 - 15*/},
                    {-640, -640, -640, 0, 160, 160, -640, -640, 320, -640, -640, 0, 0, 0, 0, -320, /*0 - 15*/},
                    {-640, -640, -640, 0, 160, 160, -640, -640, 320, -640, -640, 0, 0, 0, 0, -320, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, -640, -640, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, -640, -640, 160, 160, -320, -320, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, -640, -640, 160, 160, -320, -320, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, -640, -640, 160, 160, -320, -320, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, -640, -640, 160, 160, -320, -320, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, -640, -640, -640, -640, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -240, -640, -640, 320, 640, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -240, -640, -640, 320, 640, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -240, -640, -640, 320, 640, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, -240, -640, -640, 320, 640, 0, 0, 0, 0, 0, 0, /*0 - 15*/},
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
                0, 47, 98, 154, 213, 276, 342, 412, 484, 559, 636, 715, 795, 878, 961, 1046, 1131, 1217, 1303, 1389, 1475, 1560, 1644, 1728, 1810, 1890, 1969, 2045, 2120, 2191, 2260, 2326,  /* 0 - 31*/
                2388, 2447, 2502, 2554, 2603, 2650, 2693, 2734, 2772, 2808, 2843, 2875, 2906, 2935, 2963, 2990, 3016, 3042, 3066, 3090, 3114, 3136, 3158, 3180, 3201, 3222, 3242, 3262, 3282, 3301, 3320, 3339,  /* 32 - 63*/
                3357, 3376, 3394, 3413, 3431, 3448, 3466, 3483, 3500, 3517, 3533, 3549, 3565, 3580, 3595, 3609, 3623, 3637, 3650, 3663, 3675, 3687, 3699, 3710, 3721, 3732, 3743, 3753, 3763, 3773, 3783, 3792,  /* 64 - 95*/
                3802, 3811, 3820, 3829, 3838, 3847, 3856, 3865, 3874, 3882, 3891, 3900, 3909, 3917, 3926, 3935, 3944, 3952, 3961, 3970, 3979, 3988, 3997, 4006, 4016, 4025, 4035, 4044, 4054, 4064, 4074, 4084,  /* 96 - 127*/
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
        {0, 100, 500, /*0 - 2*/},
        /* nRefValEnd[3] */
        {50, 200, 1000, /*0 - 2*/},
        /* tGammaLut[3] */
        {
            /* 0 */
            {
                /* nLut[129] */
                {
                    0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61,  /* 0 - 31*/
                    63, 67, 71, 75, 79, 83, 87, 91, 95, 99, 103, 107, 111, 115, 119, 123, 127, 135, 143, 151, 159, 167, 175, 183, 191, 199, 207, 215, 223, 231, 239, 247,  /* 32 - 63*/
                    255, 271, 287, 303, 319, 335, 351, 367, 383, 399, 415, 431, 447, 463, 479, 495, 511, 543, 575, 607, 639, 671, 703, 735, 767, 799, 831, 863, 895, 927, 959, 991,  /* 64 - 95*/
                    1023, 1087, 1151, 1215, 1279, 1343, 1407, 1471, 1535, 1599, 1663, 1727, 1791, 1855, 1919, 1983, 2047, 2175, 2303, 2431, 2559, 2687, 2815, 2943, 3071, 3199, 3327, 3455, 3583, 3711, 3839, 3967,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 1 */
            {
                /* nLut[129] */
                {
                    0, 8, 17, 26, 35, 44, 53, 62, 71, 80, 89, 98, 107, 116, 125, 134, 143, 152, 161, 170, 179, 188, 197, 206, 215, 224, 233, 242, 251, 260, 269, 278,  /* 0 - 31*/
                    287, 305, 323, 342, 360, 377, 393, 410, 425, 441, 456, 471, 485, 499, 513, 527, 540, 566, 592, 616, 640, 663, 686, 708, 730, 751, 771, 792, 811, 831, 850, 868,  /* 32 - 63*/
                    887, 922, 957, 991, 1023, 1055, 1086, 1116, 1145, 1174, 1202, 1230, 1257, 1283, 1309, 1335, 1360, 1409, 1456, 1502, 1546, 1590, 1632, 1673, 1713, 1753, 1791, 1829, 1865, 1902, 1937, 1972,  /* 64 - 95*/
                    2006, 2073, 2137, 2200, 2261, 2320, 2378, 2434, 2489, 2543, 2595, 2647, 2697, 2746, 2795, 2842, 2889, 2980, 3068, 3154, 3237, 3318, 3397, 3474, 3549, 3622, 3694, 3764, 3833, 3900, 3966, 4031,  /* 96 - 127*/
                    4095, /*128 - 128*/
                },
            },
            /* 2 */
            {
                /* nLut[129] */
                {
                    0, 25, 51, 77, 103, 129, 155, 180, 203, 224, 245, 264, 282, 299, 316, 331, 346, 361, 375, 389, 402, 415, 428, 440, 452, 463, 475, 486, 497, 507, 518, 528,  /* 0 - 31*/
                    538, 558, 577, 595, 613, 630, 646, 663, 679, 694, 709, 724, 739, 753, 767, 780, 794, 820, 845, 870, 893, 916, 939, 960, 982, 1002, 1022, 1042, 1062, 1081, 1099, 1117,  /* 32 - 63*/
                    1135, 1170, 1204, 1236, 1268, 1299, 1328, 1357, 1386, 1413, 1440, 1467, 1493, 1518, 1543, 1567, 1591, 1637, 1682, 1726, 1768, 1809, 1849, 1888, 1925, 1962, 1998, 2034, 2068, 2102, 2135, 2167,  /* 64 - 95*/
                    2199, 2261, 2321, 2379, 2436, 2490, 2543, 2595, 2646, 2695, 2743, 2790, 2836, 2881, 2925, 2969, 3011, 3094, 3174, 3252, 3327, 3400, 3471, 3540, 3607, 3673, 3737, 3800, 3861, 3922, 3981, 4038,  /* 96 - 127*/
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
        65280,
        /* nSpatialSmoothness */
        2,
        /* nStrengthLimit */
        230,
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
        28,
        /* nGrayDcRatio */
        128,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[12] */
        {1024, 3072, 10240, 32768, 68096, 136192, 260096, 543744, 1021952, /*0 - 8*/},
        /* nEffectStrength[12] */
        {48, 48, 48, 48, 28, 28, 28, 28, 28, /*0 - 8*/},
        /* nGrayDcRatio[12] */
        {64, 64, 64, 64, 128, 128, 128, 128, 128, /*0 - 8*/},
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
        {0, 0, /*0 - 1*/},
        /* nYnrInvNrLut[4] */
        {512, 512, 512, 512, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
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
        },
        /* nYnrLevel[12][2] */
        {
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {255, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nYnrInvNrLut[12][4] */
        {
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {768, 768, 768, 768, /*0 - 3*/},
            {512, 512, 512, 512, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {1024, 1024, 1024, 1024, /*0 - 3*/},
            {512, 512, 512, 512, /*0 - 3*/},
            {512, 512, 512, 512, /*0 - 3*/},
            {512, 512, 512, 512, /*0 - 3*/},
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
        {1, 1, 1, 1, /*0 - 3*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nCnrLevel[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
        /* nCnrInvNrLut[12][4] */
        {
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
            {1, 1, 1, 1, /*0 - 3*/},
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
            {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {48, 10, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {0, 0, /*0 - 1*/},
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
            {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
            {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
        },
        /* nTfRatioLut[16] */
        {200, 200, 200, 200, 158, 158, 158, 80, 80, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
        /* nTfRatLimitLuma[2][2] */
        {
            {64, 255, /*0 - 1*/},
            {64, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {64, 255, /*0 - 1*/},
            {64, 255, /*0 - 1*/},
        },
        /* nSf0EdgeStre */
        64,
        /* nSf0DirStre */
        64,
        /* nSf0DetailStre */
        128,
        /* nSf0LumaNoiseLut[4][9] */
        {
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
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
        {1023, 1023, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {128, 128, /*0 - 1*/},
        /* nSf0ChromaProtLut[2][9] */
        {
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        },
        /* nSf1LumaMedEn */
        0,
        /* nSf1LumaGauStre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaGauRatio[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaKernelSize */
        0,
        /* nSf1LumaNoiseLut[2][9] */
        {
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {1023, 512, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {0, 256, /*0 - 1*/},
        /* nSf1ChromaCoring */
        1023,
        /* nSf1ChromaBlendRatio */
        0,
        /* nSf2LumaGauStre[2] */
        {256, 128, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        1,
        /* nSf2NoiseLut[2][9] */
        {
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {0, 0, 256, /*0 - 2*/},
            {0, 0, 256, /*0 - 2*/},
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
        {0, 0, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {0, 0, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, /*0 - 10*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 7 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 8 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 9 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 10 */
            {
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
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
            {64, 10, /*0 - 1*/},
            {64, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
            {48, 10, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
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
        },
        /* nStasUpdateLut[12][2][16] */
        {
            /* nStasUpdateLut 0 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 1 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 2 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 3 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 4 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 5 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 6 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 7 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 8 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 9 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
                {15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, /*0 - 15*/},
            },
            /* nStasUpdateLut 10 */
            {
                {4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, /*0 - 15*/},
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
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 9 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 10 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
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
        },
        /* nSf0EdgeStre[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 10*/},
        /* nSf0DirStre[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 10*/},
        /* nSf0DetailStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 10*/},
        /* nSf0LumaNoiseLut[12][4][9] */
        {
            /* nSf0LumaNoiseLut 0 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 9 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 10 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 8*/},
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
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 9 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 10 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
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
        },
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
            {200, 220, /*0 - 1*/},
        },
        /* nSf0ChromaProtLut[12][2][9] */
        {
            /* nSf0ChromaProtLut 0 */
            {
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
                {10, 10, 10, 10, 10, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 1 */
            {
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
                {10, 10, 10, 10, 10, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 2 */
            {
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
                {10, 10, 10, 10, 10, 10, 10, 10, 10, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 9 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 10 */
            {
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nSf1LumaGauStre[12][2] */
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
        },
        /* nSf1LumaGauRatio[12][2] */
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
        },
        /* nSf1LumaKernelSize[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 3 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 4 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 5 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 6 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 9 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 10 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
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
        },
        /* nSf1LumaCoring[12][2] */
        {
            {256, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
            {1023, 512, /*0 - 1*/},
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {168, 256, /*0 - 1*/},
            {64, 256, /*0 - 1*/},
            {42, 256, /*0 - 1*/},
            {24, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
            {0, 256, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {1023, 1023, 1023, 1023, 1023, 1023, 1023, 1023, 1023, 1023, 1023, /*0 - 10*/},
        /* nSf1ChromaBlendRatio[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
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
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nSf2KernelSize[12] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 10*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 9 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf2NoiseLut 10 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {96, 0, 160, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {128, 32, 96, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 2 */
            {
                {128, 32, 96, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 3 */
            {
                {128, 32, 96, /*0 - 2*/},
                {32, 0, 224, /*0 - 2*/},
            },
            /* nSf2BlendRatio 4 */
            {
                {128, 16, 112, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 5 */
            {
                {64, 64, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {64, 128, 64, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {64, 64, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 9 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 10 */
            {
                {0, 0, 256, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
        },
        /* nExtMaskStrenLuma[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 10*/},
        /* nExtMaskStrenChrom[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 10*/},
        /* nExtMaskStrenStatus[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 10*/},
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
            {256, 256, /*0 - 1*/},
        },
        /* nY3dnrPos[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nStaRefineErode[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nSfGuideMapLuma[12][2] */
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
            {0, 0, /*0 - 1*/},
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
        1,
        /* nShpLumaMaskLut[17] */
        {255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 16*/},
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
        {36, 36, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {4, 2, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {127, 96, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {8, 6, /*0 - 1*/},
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
        {1, 0, 1, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {464, -172, -176, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {728, -80, 80, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorRange[8][3] */
        {
            {440, 144, 144, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {511, 72, 64, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorSmooth[8][3] */
        {
            {2, 1, 1, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {2, 1, 1, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
            {0, 0, 0, /*0 - 2*/},
        },
        /* nColorIoFlag[8] */
        {0, 0, 0, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskIndex[8] */
        {0, 0, 1, 0, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorMaskLimit[8] */
        {128, 0, 128, 0, 0, 0, 0, 0, /*0 - 7*/},
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
        0,
        /* nHighFreqTextureLutMotionLevel */
        0,
        /* nHighFreqClnpMskEn[4] */
        {1, 1, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {-64, -32, -24, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {-47, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 127, 127, /*0 - 4*/},
            {0, 0, 0, -32, -64, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nHighFreqOsGain[2] */
        {4, 2, /*0 - 1*/},
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
        0,
        /* nMedFreqTextureLutMotionLevel */
        0,
        /* nMedFreqClnpMskEn[4] */
        {1, 1, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, 0, 0, 0, 16, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {-64, -32, -24, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {-53, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 127, 127, /*0 - 4*/},
            {0, 0, 0, -32, -64, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {64, 48, /*0 - 1*/},
        /* nMedFreqOsGain[2] */
        {1, 1, /*0 - 1*/},
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
        {0, 0, 0, 0, 16, /*0 - 4*/},
        /* nDirFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nDirFreqTextureLut[9] */
        {-64, -48, -32, -24, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {-64, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 127, 127, /*0 - 4*/},
            {127, 64, 0, -16, -32, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {1, 1, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {1, 1, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {128, 192, 192, 192, 255, 255, 255, 255, 255, /*0 - 8*/},
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
        {1, 1, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {0, 0, 0, 0, 0, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {-64, -48, -32, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqTextureLutMotion[9] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nLowFreqClnpLut[4][5] */
        {
            {0, 0, 0, 127, 127, /*0 - 4*/},
            {0, 0, 0, -16, -32, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {1, 1, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {1, 1, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {192, 128, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 128, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        0,
        /* nHighFreqCorSlope */
        8,
        /* nHighFreqCorOffset */
        24,
        /* nHighFreqLimit[2] */
        {512, 512, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {255, 128, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 255, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        0,
        /* nMedFreqCorSlope */
        12,
        /* nMedFreqCorOffset */
        24,
        /* nMedFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {80, 80, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 0, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        0,
        /* nDirFreqCorSlope */
        0,
        /* nDirFreqCorOffset */
        24,
        /* nDirFreqLimit[2] */
        {32, 32, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {0, 0, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 1, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        0,
        /* nLowFreqCorSlope */
        12,
        /* nLowFreqCorOffset */
        24,
        /* nLowFreqLimit[2] */
        {32, 32, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {48, 4, 96, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {4, 8, 8, /*0 - 2*/},
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
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, /*0 - 10*/},
        /* nHighFreqLogGain[12][2] */
        {
            {255, 128, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 128, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
        },
        /* nHighFreqCorBaseGain[12] */
        {0, 0, 0, 0, 15, 12, 12, 6, 0, 0, 0, /*0 - 10*/},
        /* nHighFreqCorSlope[12] */
        {8, 10, 12, 12, 0, 0, 0, 8, 8, 8, 8, /*0 - 10*/},
        /* nHighFreqCorOffset[12] */
        {24, 28, 32, 42, 0, 0, 0, 24, 24, 24, 24, /*0 - 10*/},
        /* nHighFreqLimit[12][2] */
        {
            {1023, 512, /*0 - 1*/},
            {768, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
        },
        /* nMedFreqLogGain[12][2] */
        {
            {255, 128, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {192, 192, /*0 - 1*/},
            {255, 192, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 128, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 96, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
            {0, 255, /*0 - 1*/},
        },
        /* nMedFreqCorBaseGain[12] */
        {0, 0, 0, 0, 15, 12, 12, 12, 12, 8, 0, /*0 - 10*/},
        /* nMedFreqCorSlope[12] */
        {12, 12, 12, 12, 0, 0, 0, 0, 0, 12, 12, /*0 - 10*/},
        /* nMedFreqCorOffset[12] */
        {24, 32, 38, 42, 0, 0, 0, 0, 0, 24, 24, /*0 - 10*/},
        /* nMedFreqLimit[12][2] */
        {
            {512, 128, /*0 - 1*/},
            {428, 128, /*0 - 1*/},
            {360, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {256, 128, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {1023, 1023, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
        },
        /* nDirFreqLogGain[12][2] */
        {
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
            {80, 80, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
            {0, 200, /*0 - 1*/},
            {0, 192, /*0 - 1*/},
            {0, 192, /*0 - 1*/},
            {0, 192, /*0 - 1*/},
            {0, 72, /*0 - 1*/},
            {0, 86, /*0 - 1*/},
            {0, 86, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 192, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nDirFreqCorSlope[12] */
        {0, 0, 12, 12, 12, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nDirFreqCorOffset[12] */
        {0, 0, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 10*/},
        /* nDirFreqLimit[12][2] */
        {
            {192, 128, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {96, 96, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {512, 512, /*0 - 1*/},
            {256, 256, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
        },
        /* nLowFreqLogGain[12][2] */
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
        },
        /* nLowFreqGainLimit[12][2] */
        {
            {0, 1, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
            {0, 6, /*0 - 1*/},
            {0, 12, /*0 - 1*/},
            {0, 8, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
            {0, 1, /*0 - 1*/},
        },
        /* nLowFreqCorBaseGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
        /* nLowFreqCorSlope[12] */
        {0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, /*0 - 10*/},
        /* nLowFreqCorOffset[12] */
        {0, 0, 48, 54, 24, 24, 24, 24, 24, 24, 24, /*0 - 10*/},
        /* nLowFreqLimit[12][2] */
        {
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
            {32, 32, /*0 - 1*/},
        },
        /* nShpHpfBsigma[12][3] */
        {
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
            {48, 4, 96, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
            {4, 8, 8, /*0 - 2*/},
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
        },
        /* nShpGain[12][2] */
        {
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 24, /*0 - 1*/},
            {24, 28, /*0 - 1*/},
            {24, 32, /*0 - 1*/},
            {24, 32, /*0 - 1*/},
            {16, 16, /*0 - 1*/},
        },
        /* nShpLimit[12][2] */
        {
            {-1024, 1024, /*0 - 1*/},
            {-1024, 1024, /*0 - 1*/},
            {-1024, 1024, /*0 - 1*/},
            {-1024, 1024, /*0 - 1*/},
            {-1024, 1024, /*0 - 1*/},
            {-1024, 1024, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
            {-4096, 4095, /*0 - 1*/},
        },
        /* nGrainLogGain[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
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
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 448, 384, 320, 256, 256, 256, 256, 256, /*0 - 28*/},
        /* nChromaCompSat[23] */
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nChromaCompY[12][29] */
        {
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 448, 384, 320, 256, 256, 256, 256, 256, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 28*/},
            {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 448, 384, 320, 256, 256, 256, 256, 256, /*0 - 28*/},
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
        },
    },
};

const static AX_ISP_IQ_SCM_PARAM_T scm_param_sdr = {
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
            0,
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
        127,
        /* nFramePosWeights[16] */
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, /*0 - 15*/},
        /* nSadThreshold */
        0,
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
    1,
    /* tGridRoiH */
    {
        /* nRoiOffsetH */
        32,
        /* nRoiOffsetV */
        16,
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
        32,
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

#endif
