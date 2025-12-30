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
        {0, 2560, /*0 - 1*/},
        /* nRefValEnd[4] */
        {2560, 4193280, /*0 - 1*/},
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
        1024,
        /* nAGain */
        1088,
        /* nDgain */
        1024,
        /* nHcgLcg */
        2,
        /* nSnsTotalAGain */
        2240,
        /* nSysTotalGain */
        2240,
        /* nShutter */
        30000,
        /* nIrisPwmDuty */
        0,
        /* nPos */
        0,
        /* nHdrRealRatioLtoS */
        1024,
        /* nHdrRealRatioStoVS */
        1024,
        /* nSetPoint */
        19969,
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
        999925,
        /* nRealMaxShutter */
        160000,
    },
    /* tAeAlgAuto */
    {
        /* nSetPoint */
        19969,
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
        28313,
        /* nCompensationMode */
        1,
        /* nMaxIspGain */
        8192,
        /* nMinIspGain */
        1024,
        /* nMaxUserDgain */
        8192,
        /* nMinUserDgain */
        1024,
        /* nMaxUserTotalAgain */
        50800,
        /* nMinUserTotalAgain */
        1024,
        /* nMaxUserSysGain */
        518096,
        /* nMinUserSysGain */
        1024,
        /* nMaxShutter */
        160000,
        /* nMinShutter */
        37,
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
            1,
            /* tRouteTable[8] */
            {
                /* 0 */
                {
                    /* sTableName[32] */
                    "30",
                    /* nRouteCurveNum */
                    4,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            37,
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
                            10000,
                            /* nGain */
                            10240,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            20000,
                            /* nGain */
                            20480,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            30000,
                            /* nGain */
                            102400,
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
                    "60",
                    /* nRouteCurveNum */
                    7,
                    /* tRouteCurveList[16] */
                    {
                        /* 0 */
                        {
                            /* nIntergrationTime */
                            37,
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
                            10240,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 2 */
                        {
                            /* nIntergrationTime */
                            60000,
                            /* nGain */
                            18432,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 3 */
                        {
                            /* nIntergrationTime */
                            66592,
                            /* nGain */
                            61440,
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
                            122880,
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
                            204800,
                            /* nAperture */
                            0,
                            /* nIncrementPriority */
                            0,
                        },
                        /* 6 */
                        {
                            /* nIntergrationTime */
                            160000,
                            /* nGain */
                            512000,
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
            },
        },
        /* tAeSetPointCurve */
        {
            /* nSize */
            6,
            /* nRefList[10] */
            {512, 1024, 10240, 102400, 204800, 1024000, /*0 - 5*/},
            /* nSetPointList[10] */
            {16384, 18432, 22528, 24576, 26624, 28672, /*0 - 5*/},
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
                {3072, 10240, 15360, 20480, 25600, 30720, 40960, 51200, 71680, 92160, 112640, 153600, 209920, 262144, /*0 - 13*/},
                /* nFastOverStepFactorList[16] */
                {102, 154, 205, 205, 256, 256, 287, 307, 307, 307, 307, 307, 410, 410, /*0 - 13*/},
                /* nFastOverSpeedDownFactorList[16] */
                {0, 51, 51, 51, 51, 51, 51, 102, 102, 102, 102, 102, 102, 102, /*0 - 13*/},
                /* nFastOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nFastUnderKneeCnt */
                11,
                /* nFastUnderLumaDiffList[16] */
                {3072, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nFastUnderStepFactorList[16] */
                {51, 51, 61, 72, 82, 102, 123, 123, 154, 154, 154, /*0 - 10*/},
                /* nFastUnderSpeedDownFactorList[16] */
                {0, 20, 31, 41, 41, 51, 51, 51, 102, 102, 102, /*0 - 10*/},
                /* nFastUnderSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 10*/},
                /* nSlowOverKneeCnt */
                14,
                /* nSlowOverLumaDiffList[16] */
                {3072, 10240, 15360, 20480, 25600, 30720, 40960, 51200, 81920, 92160, 112640, 153600, 209920, 262144, /*0 - 13*/},
                /* nSlowOverStepFactorList[16] */
                {82, 102, 154, 205, 205, 256, 307, 307, 358, 358, 410, 410, 512, 512, /*0 - 13*/},
                /* nSlowOverSpeedDownFactorList[16] */
                {0, 51, 51, 51, 51, 51, 51, 102, 102, 102, 102, 102, 102, 102, /*0 - 13*/},
                /* nSlowOverSkipList[16] */
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 13*/},
                /* nSlowUnderKneeCnt */
                11,
                /* nSlowUnderLumaDiffList[16] */
                {3072, 10240, 15360, 20480, 25600, 30720, 35840, 40960, 51200, 153600, 262144, /*0 - 10*/},
                /* nSlowUnderStepFactorList[16] */
                {51, 51, 82, 102, 123, 123, 123, 123, 154, 154, 154, /*0 - 10*/},
                /* nSlowUnderSpeedDownFactorList[16] */
                {0, 31, 51, 51, 51, 51, 51, 51, 102, 102, 102, /*0 - 10*/},
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
            482,
            /* nGainGr */
            256,
            /* nGainGb */
            256,
            /* nGainB */
            497,
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
            1406589,
            /* nBg */
            1344215,
        },
        /* nCenterPntRadius */
        1211848,
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
            -794,
            /* nB */
            1149,
        },
        /* tChordPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1343142,
                /* nBg */
                134029,
            },
            /* 1 */
            {
                /* nRg */
                1295925,
                /* nBg */
                170677,
            },
            /* 2 */
            {
                /* nRg */
                1251129,
                /* nBg */
                205437,
            },
            /* 3 */
            {
                /* nRg */
                1208452,
                /* nBg */
                238562,
            },
            /* 4 */
            {
                /* nRg */
                1167589,
                /* nBg */
                270260,
            },
            /* 5 */
            {
                /* nRg */
                1128310,
                /* nBg */
                300742,
            },
            /* 6 */
            {
                /* nRg */
                1090393,
                /* nBg */
                330176,
            },
            /* 7 */
            {
                /* nRg */
                1053630,
                /* nBg */
                358707,
            },
            /* 8 */
            {
                /* nRg */
                1017853,
                /* nBg */
                386463,
            },
            /* 9 */
            {
                /* nRg */
                1003204,
                /* nBg */
                397830,
            },
            /* 10 */
            {
                /* nRg */
                988692,
                /* nBg */
                409102,
            },
            /* 11 */
            {
                /* nRg */
                974295,
                /* nBg */
                420269,
            },
            /* 12 */
            {
                /* nRg */
                960003,
                /* nBg */
                431353,
            },
            /* 13 */
            {
                /* nRg */
                945826,
                /* nBg */
                442363,
            },
            /* 14 */
            {
                /* nRg */
                931744,
                /* nBg */
                453289,
            },
            /* 15 */
            {
                /* nRg */
                917735,
                /* nBg */
                464163,
            },
            /* 16 */
            {
                /* nRg */
                903810,
                /* nBg */
                474973,
            },
            /* 17 */
            {
                /* nRg */
                895987,
                /* nBg */
                481034,
            },
            /* 18 */
            {
                /* nRg */
                888196,
                /* nBg */
                487085,
            },
            /* 19 */
            {
                /* nRg */
                880416,
                /* nBg */
                493114,
            },
            /* 20 */
            {
                /* nRg */
                872656,
                /* nBg */
                499143,
            },
            /* 21 */
            {
                /* nRg */
                864907,
                /* nBg */
                505151,
            },
            /* 22 */
            {
                /* nRg */
                857179,
                /* nBg */
                511160,
            },
            /* 23 */
            {
                /* nRg */
                849451,
                /* nBg */
                517147,
            },
            /* 24 */
            {
                /* nRg */
                841744,
                /* nBg */
                523135,
            },
            /* 25 */
            {
                /* nRg */
                822356,
                /* nBg */
                538182,
            },
            /* 26 */
            {
                /* nRg */
                803000,
                /* nBg */
                553197,
            },
            /* 27 */
            {
                /* nRg */
                783643,
                /* nBg */
                568213,
            },
            /* 28 */
            {
                /* nRg */
                764286,
                /* nBg */
                583249,
            },
            /* 29 */
            {
                /* nRg */
                744877,
                /* nBg */
                598307,
            },
            /* 30 */
            {
                /* nRg */
                725405,
                /* nBg */
                613406,
            },
            /* 31 */
            {
                /* nRg */
                705849,
                /* nBg */
                628590,
            },
            /* 32 */
            {
                /* nRg */
                686188,
                /* nBg */
                643847,
            },
            /* 33 */
            {
                /* nRg */
                676814,
                /* nBg */
                651124,
            },
            /* 34 */
            {
                /* nRg */
                667398,
                /* nBg */
                658432,
            },
            /* 35 */
            {
                /* nRg */
                657950,
                /* nBg */
                665762,
            },
            /* 36 */
            {
                /* nRg */
                648471,
                /* nBg */
                673123,
            },
            /* 37 */
            {
                /* nRg */
                638939,
                /* nBg */
                680515,
            },
            /* 38 */
            {
                /* nRg */
                629366,
                /* nBg */
                687939,
            },
            /* 39 */
            {
                /* nRg */
                619750,
                /* nBg */
                695405,
            },
            /* 40 */
            {
                /* nRg */
                610072,
                /* nBg */
                702913,
            },
            /* 41 */
            {
                /* nRg */
                602994,
                /* nBg */
                708407,
            },
            /* 42 */
            {
                /* nRg */
                595885,
                /* nBg */
                713933,
            },
            /* 43 */
            {
                /* nRg */
                588733,
                /* nBg */
                719470,
            },
            /* 44 */
            {
                /* nRg */
                581561,
                /* nBg */
                725038,
            },
            /* 45 */
            {
                /* nRg */
                574347,
                /* nBg */
                730637,
            },
            /* 46 */
            {
                /* nRg */
                567101,
                /* nBg */
                736258,
            },
            /* 47 */
            {
                /* nRg */
                559824,
                /* nBg */
                741909,
            },
            /* 48 */
            {
                /* nRg */
                552505,
                /* nBg */
                747593,
            },
            /* 49 */
            {
                /* nRg */
                519077,
                /* nBg */
                773535,
            },
            /* 50 */
            {
                /* nRg */
                484725,
                /* nBg */
                800189,
            },
            /* 51 */
            {
                /* nRg */
                449315,
                /* nBg */
                827672,
            },
            /* 52 */
            {
                /* nRg */
                412688,
                /* nBg */
                856099,
            },
            /* 53 */
            {
                /* nRg */
                374656,
                /* nBg */
                885606,
            },
            /* 54 */
            {
                /* nRg */
                335031,
                /* nBg */
                916361,
            },
            /* 55 */
            {
                /* nRg */
                293580,
                /* nBg */
                948521,
            },
            /* 56 */
            {
                /* nRg */
                250043,
                /* nBg */
                982306,
            },
        },
        /* tArcPointList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1347536,
                /* nBg */
                217800,
            },
            /* 1 */
            {
                /* nRg */
                1300192,
                /* nBg */
                216017,
            },
            /* 2 */
            {
                /* nRg */
                1252608,
                /* nBg */
                216227,
            },
            /* 3 */
            {
                /* nRg */
                1204845,
                /* nBg */
                218460,
            },
            /* 4 */
            {
                /* nRg */
                1157009,
                /* nBg */
                222718,
            },
            /* 5 */
            {
                /* nRg */
                1109184,
                /* nBg */
                229019,
            },
            /* 6 */
            {
                /* nRg */
                1061442,
                /* nBg */
                237356,
            },
            /* 7 */
            {
                /* nRg */
                1013889,
                /* nBg */
                247758,
            },
            /* 8 */
            {
                /* nRg */
                966609,
                /* nBg */
                260194,
            },
            /* 9 */
            {
                /* nRg */
                945805,
                /* nBg */
                263172,
            },
            /* 10 */
            {
                /* nRg */
                924980,
                /* nBg */
                266548,
            },
            /* 11 */
            {
                /* nRg */
                904124,
                /* nBg */
                270312,
            },
            /* 12 */
            {
                /* nRg */
                883268,
                /* nBg */
                274486,
            },
            /* 13 */
            {
                /* nRg */
                862391,
                /* nBg */
                279058,
            },
            /* 14 */
            {
                /* nRg */
                841524,
                /* nBg */
                284038,
            },
            /* 15 */
            {
                /* nRg */
                820668,
                /* nBg */
                289417,
            },
            /* 16 */
            {
                /* nRg */
                799833,
                /* nBg */
                295206,
            },
            /* 17 */
            {
                /* nRg */
                789609,
                /* nBg */
                301182,
            },
            /* 18 */
            {
                /* nRg */
                779448,
                /* nBg */
                307264,
            },
            /* 19 */
            {
                /* nRg */
                769340,
                /* nBg */
                313440,
            },
            /* 20 */
            {
                /* nRg */
                759295,
                /* nBg */
                319721,
            },
            /* 21 */
            {
                /* nRg */
                749312,
                /* nBg */
                326097,
            },
            /* 22 */
            {
                /* nRg */
                739393,
                /* nBg */
                332566,
            },
            /* 23 */
            {
                /* nRg */
                729547,
                /* nBg */
                339141,
            },
            /* 24 */
            {
                /* nRg */
                719753,
                /* nBg */
                345799,
            },
            /* 25 */
            {
                /* nRg */
                695384,
                /* nBg */
                363007,
            },
            /* 26 */
            {
                /* nRg */
                671456,
                /* nBg */
                380811,
            },
            /* 27 */
            {
                /* nRg */
                647968,
                /* nBg */
                399193,
            },
            /* 28 */
            {
                /* nRg */
                624930,
                /* nBg */
                418151,
            },
            /* 29 */
            {
                /* nRg */
                602375,
                /* nBg */
                437676,
            },
            /* 30 */
            {
                /* nRg */
                580313,
                /* nBg */
                457745,
            },
            /* 31 */
            {
                /* nRg */
                558744,
                /* nBg */
                478350,
            },
            /* 32 */
            {
                /* nRg */
                537689,
                /* nBg */
                499479,
            },
            /* 33 */
            {
                /* nRg */
                527885,
                /* nBg */
                509681,
            },
            /* 34 */
            {
                /* nRg */
                518196,
                /* nBg */
                519999,
            },
            /* 35 */
            {
                /* nRg */
                508633,
                /* nBg */
                530433,
            },
            /* 36 */
            {
                /* nRg */
                499185,
                /* nBg */
                540971,
            },
            /* 37 */
            {
                /* nRg */
                489863,
                /* nBg */
                551624,
            },
            /* 38 */
            {
                /* nRg */
                480678,
                /* nBg */
                562383,
            },
            /* 39 */
            {
                /* nRg */
                471608,
                /* nBg */
                573256,
            },
            /* 40 */
            {
                /* nRg */
                462663,
                /* nBg */
                584225,
            },
            /* 41 */
            {
                /* nRg */
                456225,
                /* nBg */
                592288,
            },
            /* 42 */
            {
                /* nRg */
                449860,
                /* nBg */
                600404,
            },
            /* 43 */
            {
                /* nRg */
                443569,
                /* nBg */
                608583,
            },
            /* 44 */
            {
                /* nRg */
                437340,
                /* nBg */
                616804,
            },
            /* 45 */
            {
                /* nRg */
                431174,
                /* nBg */
                625088,
            },
            /* 46 */
            {
                /* nRg */
                425093,
                /* nBg */
                633413,
            },
            /* 47 */
            {
                /* nRg */
                419074,
                /* nBg */
                641791,
            },
            /* 48 */
            {
                /* nRg */
                413128,
                /* nBg */
                650232,
            },
            /* 49 */
            {
                /* nRg */
                387281,
                /* nBg */
                688789,
            },
            /* 50 */
            {
                /* nRg */
                362923,
                /* nBg */
                728309,
            },
            /* 51 */
            {
                /* nRg */
                340095,
                /* nBg */
                768732,
            },
            /* 52 */
            {
                /* nRg */
                318841,
                /* nBg */
                810004,
            },
            /* 53 */
            {
                /* nRg */
                299180,
                /* nBg */
                852062,
            },
            /* 54 */
            {
                /* nRg */
                281144,
                /* nBg */
                894844,
            },
            /* 55 */
            {
                /* nRg */
                264755,
                /* nBg */
                938276,
            },
            /* 56 */
            {
                /* nRg */
                250043,
                /* nBg */
                982306,
            },
        },
        /* tRadiusLineList[512] */
        {
            /* 0 */
            {
                /* nK */
                19533,
                /* nB */
                -24889,
            },
            /* 1 */
            {
                /* nK */
                10859,
                /* nB */
                -13252,
            },
            /* 2 */
            {
                /* nK */
                7501,
                /* nB */
                -8749,
            },
            /* 3 */
            {
                /* nK */
                5714,
                /* nB */
                -6351,
            },
            /* 4 */
            {
                /* nK */
                4601,
                /* nB */
                -4859,
            },
            /* 5 */
            {
                /* nK */
                3840,
                /* nB */
                -3837,
            },
            /* 6 */
            {
                /* nK */
                3284,
                /* nB */
                -3091,
            },
            /* 7 */
            {
                /* nK */
                2859,
                /* nB */
                -2522,
            },
            /* 8 */
            {
                /* nK */
                2523,
                /* nB */
                -2071,
            },
            /* 9 */
            {
                /* nK */
                2402,
                /* nB */
                -1909,
            },
            /* 10 */
            {
                /* nK */
                2291,
                /* nB */
                -1760,
            },
            /* 11 */
            {
                /* nK */
                2189,
                /* nB */
                -1622,
            },
            /* 12 */
            {
                /* nK */
                2093,
                /* nB */
                -1494,
            },
            /* 13 */
            {
                /* nK */
                2004,
                /* nB */
                -1375,
            },
            /* 14 */
            {
                /* nK */
                1921,
                /* nB */
                -1264,
            },
            /* 15 */
            {
                /* nK */
                1843,
                /* nB */
                -1159,
            },
            /* 16 */
            {
                /* nK */
                1770,
                /* nB */
                -1061,
            },
            /* 17 */
            {
                /* nK */
                1731,
                /* nB */
                -1008,
            },
            /* 18 */
            {
                /* nK */
                1693,
                /* nB */
                -957,
            },
            /* 19 */
            {
                /* nK */
                1656,
                /* nB */
                -908,
            },
            /* 20 */
            {
                /* nK */
                1621,
                /* nB */
                -860,
            },
            /* 21 */
            {
                /* nK */
                1586,
                /* nB */
                -814,
            },
            /* 22 */
            {
                /* nK */
                1553,
                /* nB */
                -769,
            },
            /* 23 */
            {
                /* nK */
                1520,
                /* nB */
                -725,
            },
            /* 24 */
            {
                /* nK */
                1489,
                /* nB */
                -683,
            },
            /* 25 */
            {
                /* nK */
                1413,
                /* nB */
                -581,
            },
            /* 26 */
            {
                /* nK */
                1342,
                /* nB */
                -486,
            },
            /* 27 */
            {
                /* nK */
                1276,
                /* nB */
                -397,
            },
            /* 28 */
            {
                /* nK */
                1213,
                /* nB */
                -314,
            },
            /* 29 */
            {
                /* nK */
                1154,
                /* nB */
                -235,
            },
            /* 30 */
            {
                /* nK */
                1099,
                /* nB */
                -160,
            },
            /* 31 */
            {
                /* nK */
                1046,
                /* nB */
                -89,
            },
            /* 32 */
            {
                /* nK */
                996,
                /* nB */
                -22,
            },
            /* 33 */
            {
                /* nK */
                973,
                /* nB */
                8,
            },
            /* 34 */
            {
                /* nK */
                950,
                /* nB */
                38,
            },
            /* 35 */
            {
                /* nK */
                928,
                /* nB */
                68,
            },
            /* 36 */
            {
                /* nK */
                906,
                /* nB */
                97,
            },
            /* 37 */
            {
                /* nK */
                885,
                /* nB */
                125,
            },
            /* 38 */
            {
                /* nK */
                865,
                /* nB */
                153,
            },
            /* 39 */
            {
                /* nK */
                844,
                /* nB */
                180,
            },
            /* 40 */
            {
                /* nK */
                824,
                /* nB */
                207,
            },
            /* 41 */
            {
                /* nK */
                810,
                /* nB */
                226,
            },
            /* 42 */
            {
                /* nK */
                796,
                /* nB */
                245,
            },
            /* 43 */
            {
                /* nK */
                782,
                /* nB */
                263,
            },
            /* 44 */
            {
                /* nK */
                769,
                /* nB */
                282,
            },
            /* 45 */
            {
                /* nK */
                755,
                /* nB */
                300,
            },
            /* 46 */
            {
                /* nK */
                742,
                /* nB */
                318,
            },
            /* 47 */
            {
                /* nK */
                728,
                /* nB */
                336,
            },
            /* 48 */
            {
                /* nK */
                715,
                /* nB */
                353,
            },
            /* 49 */
            {
                /* nK */
                658,
                /* nB */
                429,
            },
            /* 50 */
            {
                /* nK */
                604,
                /* nB */
                502,
            },
            /* 51 */
            {
                /* nK */
                553,
                /* nB */
                572,
            },
            /* 52 */
            {
                /* nK */
                503,
                /* nB */
                638,
            },
            /* 53 */
            {
                /* nK */
                455,
                /* nB */
                702,
            },
            /* 54 */
            {
                /* nK */
                409,
                /* nB */
                764,
            },
            /* 55 */
            {
                /* nK */
                364,
                /* nB */
                824,
            },
            /* 56 */
            {
                /* nK */
                320,
                /* nB */
                883,
            },
        },
        /* tInLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1342597,
                /* nBg */
                123554,
            },
            /* 1 */
            {
                /* nRg */
                1291342,
                /* nBg */
                122065,
            },
            /* 2 */
            {
                /* nRg */
                1239847,
                /* nBg */
                122725,
            },
            /* 3 */
            {
                /* nRg */
                1188204,
                /* nBg */
                125567,
            },
            /* 4 */
            {
                /* nRg */
                1136510,
                /* nBg */
                130600,
            },
            /* 5 */
            {
                /* nRg */
                1084867,
                /* nBg */
                137825,
            },
            /* 6 */
            {
                /* nRg */
                1033351,
                /* nBg */
                147262,
            },
            /* 7 */
            {
                /* nRg */
                982075,
                /* nBg */
                158912,
            },
            /* 8 */
            {
                /* nRg */
                931115,
                /* nBg */
                172753,
            },
            /* 9 */
            {
                /* nRg */
                908801,
                /* nBg */
                176360,
            },
            /* 10 */
            {
                /* nRg */
                886477,
                /* nBg */
                180387,
            },
            /* 11 */
            {
                /* nRg */
                864131,
                /* nBg */
                184832,
            },
            /* 12 */
            {
                /* nRg */
                841797,
                /* nBg */
                189719,
            },
            /* 13 */
            {
                /* nRg */
                819462,
                /* nBg */
                195025,
            },
            /* 14 */
            {
                /* nRg */
                797138,
                /* nBg */
                200760,
            },
            /* 15 */
            {
                /* nRg */
                774845,
                /* nBg */
                206916,
            },
            /* 16 */
            {
                /* nRg */
                752584,
                /* nBg */
                213511,
            },
            /* 17 */
            {
                /* nRg */
                741563,
                /* nBg */
                219960,
            },
            /* 18 */
            {
                /* nRg */
                730606,
                /* nBg */
                226513,
            },
            /* 19 */
            {
                /* nRg */
                719711,
                /* nBg */
                233172,
            },
            /* 20 */
            {
                /* nRg */
                708890,
                /* nBg */
                239935,
            },
            /* 21 */
            {
                /* nRg */
                698131,
                /* nBg */
                246814,
            },
            /* 22 */
            {
                /* nRg */
                687436,
                /* nBg */
                253787,
            },
            /* 23 */
            {
                /* nRg */
                676814,
                /* nBg */
                260865,
            },
            /* 24 */
            {
                /* nRg */
                666265,
                /* nBg */
                268047,
            },
            /* 25 */
            {
                /* nRg */
                639998,
                /* nBg */
                286597,
            },
            /* 26 */
            {
                /* nRg */
                614203,
                /* nBg */
                305786,
            },
            /* 27 */
            {
                /* nRg */
                588891,
                /* nBg */
                325604,
            },
            /* 28 */
            {
                /* nRg */
                564060,
                /* nBg */
                346041,
            },
            /* 29 */
            {
                /* nRg */
                539754,
                /* nBg */
                367075,
            },
            /* 30 */
            {
                /* nRg */
                515962,
                /* nBg */
                388707,
            },
            /* 31 */
            {
                /* nRg */
                492715,
                /* nBg */
                410916,
            },
            /* 32 */
            {
                /* nRg */
                470024,
                /* nBg */
                433691,
            },
            /* 33 */
            {
                /* nRg */
                459455,
                /* nBg */
                444691,
            },
            /* 34 */
            {
                /* nRg */
                449011,
                /* nBg */
                455816,
            },
            /* 35 */
            {
                /* nRg */
                438703,
                /* nBg */
                467057,
            },
            /* 36 */
            {
                /* nRg */
                428522,
                /* nBg */
                478423,
            },
            /* 37 */
            {
                /* nRg */
                418476,
                /* nBg */
                489905,
            },
            /* 38 */
            {
                /* nRg */
                408567,
                /* nBg */
                501502,
            },
            /* 39 */
            {
                /* nRg */
                398794,
                /* nBg */
                513215,
            },
            /* 40 */
            {
                /* nRg */
                389158,
                /* nBg */
                525043,
            },
            /* 41 */
            {
                /* nRg */
                382216,
                /* nBg */
                533736,
            },
            /* 42 */
            {
                /* nRg */
                375359,
                /* nBg */
                542481,
            },
            /* 43 */
            {
                /* nRg */
                368574,
                /* nBg */
                551289,
            },
            /* 44 */
            {
                /* nRg */
                361853,
                /* nBg */
                560160,
            },
            /* 45 */
            {
                /* nRg */
                355216,
                /* nBg */
                569083,
            },
            /* 46 */
            {
                /* nRg */
                348662,
                /* nBg */
                578059,
            },
            /* 47 */
            {
                /* nRg */
                342171,
                /* nBg */
                587098,
            },
            /* 48 */
            {
                /* nRg */
                335765,
                /* nBg */
                596189,
            },
            /* 49 */
            {
                /* nRg */
                307904,
                /* nBg */
                637744,
            },
            /* 50 */
            {
                /* nRg */
                281648,
                /* nBg */
                680348,
            },
            /* 51 */
            {
                /* nRg */
                257048,
                /* nBg */
                723926,
            },
            /* 52 */
            {
                /* nRg */
                234137,
                /* nBg */
                768407,
            },
            /* 53 */
            {
                /* nRg */
                212934,
                /* nBg */
                813737,
            },
            /* 54 */
            {
                /* nRg */
                193494,
                /* nBg */
                859843,
            },
            /* 55 */
            {
                /* nRg */
                175836,
                /* nBg */
                906662,
            },
            /* 56 */
            {
                /* nRg */
                159981,
                /* nBg */
                954120,
            },
        },
        /* tInRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1351929,
                /* nBg */
                301570,
            },
            /* 1 */
            {
                /* nRg */
                1308078,
                /* nBg */
                299536,
            },
            /* 2 */
            {
                /* nRg */
                1263954,
                /* nBg */
                299347,
            },
            /* 3 */
            {
                /* nRg */
                1219651,
                /* nBg */
                301025,
            },
            /* 4 */
            {
                /* nRg */
                1175233,
                /* nBg */
                304601,
            },
            /* 5 */
            {
                /* nRg */
                1130795,
                /* nBg */
                310064,
            },
            /* 6 */
            {
                /* nRg */
                1086419,
                /* nBg */
                317446,
            },
            /* 7 */
            {
                /* nRg */
                1042180,
                /* nBg */
                326726,
            },
            /* 8 */
            {
                /* nRg */
                998160,
                /* nBg */
                337925,
            },
            /* 9 */
            {
                /* nRg */
                978699,
                /* nBg */
                340336,
            },
            /* 10 */
            {
                /* nRg */
                959206,
                /* nBg */
                343136,
            },
            /* 11 */
            {
                /* nRg */
                939681,
                /* nBg */
                346292,
            },
            /* 12 */
            {
                /* nRg */
                920125,
                /* nBg */
                349836,
            },
            /* 13 */
            {
                /* nRg */
                900559,
                /* nBg */
                353758,
            },
            /* 14 */
            {
                /* nRg */
                880982,
                /* nBg */
                358068,
            },
            /* 15 */
            {
                /* nRg */
                861405,
                /* nBg */
                362755,
            },
            /* 16 */
            {
                /* nRg */
                841828,
                /* nBg */
                367819,
            },
            /* 17 */
            {
                /* nRg */
                832318,
                /* nBg */
                373387,
            },
            /* 18 */
            {
                /* nRg */
                822860,
                /* nBg */
                379050,
            },
            /* 19 */
            {
                /* nRg */
                813454,
                /* nBg */
                384796,
            },
            /* 20 */
            {
                /* nRg */
                804101,
                /* nBg */
                390637,
            },
            /* 21 */
            {
                /* nRg */
                794810,
                /* nBg */
                396571,
            },
            /* 22 */
            {
                /* nRg */
                785583,
                /* nBg */
                402601,
            },
            /* 23 */
            {
                /* nRg */
                776408,
                /* nBg */
                408714,
            },
            /* 24 */
            {
                /* nRg */
                767295,
                /* nBg */
                414911,
            },
            /* 25 */
            {
                /* nRg */
                744615,
                /* nBg */
                430933,
            },
            /* 26 */
            {
                /* nRg */
                722343,
                /* nBg */
                447501,
            },
            /* 27 */
            {
                /* nRg */
                700480,
                /* nBg */
                464614,
            },
            /* 28 */
            {
                /* nRg */
                679037,
                /* nBg */
                482261,
            },
            /* 29 */
            {
                /* nRg */
                658044,
                /* nBg */
                500422,
            },
            /* 30 */
            {
                /* nRg */
                637503,
                /* nBg */
                519108,
            },
            /* 31 */
            {
                /* nRg */
                617433,
                /* nBg */
                538286,
            },
            /* 32 */
            {
                /* nRg */
                597835,
                /* nBg */
                557947,
            },
            /* 33 */
            {
                /* nRg */
                588702,
                /* nBg */
                567447,
            },
            /* 34 */
            {
                /* nRg */
                579695,
                /* nBg */
                577052,
            },
            /* 35 */
            {
                /* nRg */
                570782,
                /* nBg */
                586762,
            },
            /* 36 */
            {
                /* nRg */
                561995,
                /* nBg */
                596577,
            },
            /* 37 */
            {
                /* nRg */
                553323,
                /* nBg */
                606496,
            },
            /* 38 */
            {
                /* nRg */
                544767,
                /* nBg */
                616510,
            },
            /* 39 */
            {
                /* nRg */
                536326,
                /* nBg */
                626619,
            },
            /* 40 */
            {
                /* nRg */
                528010,
                /* nBg */
                636832,
            },
            /* 41 */
            {
                /* nRg */
                522013,
                /* nBg */
                644339,
            },
            /* 42 */
            {
                /* nRg */
                516088,
                /* nBg */
                651900,
            },
            /* 43 */
            {
                /* nRg */
                510227,
                /* nBg */
                659502,
            },
            /* 44 */
            {
                /* nRg */
                504428,
                /* nBg */
                667156,
            },
            /* 45 */
            {
                /* nRg */
                498703,
                /* nBg */
                674864,
            },
            /* 46 */
            {
                /* nRg */
                493030,
                /* nBg */
                682612,
            },
            /* 47 */
            {
                /* nRg */
                487431,
                /* nBg */
                690414,
            },
            /* 48 */
            {
                /* nRg */
                481905,
                /* nBg */
                698268,
            },
            /* 49 */
            {
                /* nRg */
                457840,
                /* nBg */
                734160,
            },
            /* 50 */
            {
                /* nRg */
                435170,
                /* nBg */
                770945,
            },
            /* 51 */
            {
                /* nRg */
                413925,
                /* nBg */
                808567,
            },
            /* 52 */
            {
                /* nRg */
                394139,
                /* nBg */
                846987,
            },
            /* 53 */
            {
                /* nRg */
                375831,
                /* nBg */
                886131,
            },
            /* 54 */
            {
                /* nRg */
                359043,
                /* nBg */
                925945,
            },
            /* 55 */
            {
                /* nRg */
                343797,
                /* nBg */
                966378,
            },
            /* 56 */
            {
                /* nRg */
                330102,
                /* nBg */
                1007356,
            },
        },
        /* tOutLeftBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1339304,
                /* nBg */
                60734,
            },
            /* 1 */
            {
                /* nRg */
                1285428,
                /* nBg */
                59423,
            },
            /* 2 */
            {
                /* nRg */
                1231332,
                /* nBg */
                60387,
            },
            /* 3 */
            {
                /* nRg */
                1177100,
                /* nBg */
                63638,
            },
            /* 4 */
            {
                /* nRg */
                1122847,
                /* nBg */
                69185,
            },
            /* 5 */
            {
                /* nRg */
                1068656,
                /* nBg */
                77039,
            },
            /* 6 */
            {
                /* nRg */
                1014623,
                /* nBg */
                87200,
            },
            /* 7 */
            {
                /* nRg */
                960863,
                /* nBg */
                99678,
            },
            /* 8 */
            {
                /* nRg */
                907459,
                /* nBg */
                114463,
            },
            /* 9 */
            {
                /* nRg */
                884138,
                /* nBg */
                118479,
            },
            /* 10 */
            {
                /* nRg */
                860807,
                /* nBg */
                122946,
            },
            /* 11 */
            {
                /* nRg */
                837477,
                /* nBg */
                127853,
            },
            /* 12 */
            {
                /* nRg */
                814146,
                /* nBg */
                133201,
            },
            /* 13 */
            {
                /* nRg */
                790836,
                /* nBg */
                138999,
            },
            /* 14 */
            {
                /* nRg */
                767547,
                /* nBg */
                145238,
            },
            /* 15 */
            {
                /* nRg */
                744290,
                /* nBg */
                151918,
            },
            /* 16 */
            {
                /* nRg */
                721074,
                /* nBg */
                159058,
            },
            /* 17 */
            {
                /* nRg */
                709529,
                /* nBg */
                165811,
            },
            /* 18 */
            {
                /* nRg */
                698048,
                /* nBg */
                172679,
            },
            /* 19 */
            {
                /* nRg */
                686629,
                /* nBg */
                179663,
            },
            /* 20 */
            {
                /* nRg */
                675283,
                /* nBg */
                186751,
            },
            /* 21 */
            {
                /* nRg */
                664011,
                /* nBg */
                193955,
            },
            /* 22 */
            {
                /* nRg */
                652801,
                /* nBg */
                201264,
            },
            /* 23 */
            {
                /* nRg */
                641666,
                /* nBg */
                208688,
            },
            /* 24 */
            {
                /* nRg */
                630603,
                /* nBg */
                216216,
            },
            /* 25 */
            {
                /* nRg */
                603078,
                /* nBg */
                235657,
            },
            /* 26 */
            {
                /* nRg */
                576035,
                /* nBg */
                255769,
            },
            /* 27 */
            {
                /* nRg */
                549496,
                /* nBg */
                276541,
            },
            /* 28 */
            {
                /* nRg */
                523481,
                /* nBg */
                297963,
            },
            /* 29 */
            {
                /* nRg */
                498000,
                /* nBg */
                320015,
            },
            /* 30 */
            {
                /* nRg */
                473065,
                /* nBg */
                342685,
            },
            /* 31 */
            {
                /* nRg */
                448696,
                /* nBg */
                365964,
            },
            /* 32 */
            {
                /* nRg */
                424914,
                /* nBg */
                389840,
            },
            /* 33 */
            {
                /* nRg */
                413831,
                /* nBg */
                401363,
            },
            /* 34 */
            {
                /* nRg */
                402884,
                /* nBg */
                413024,
            },
            /* 35 */
            {
                /* nRg */
                392084,
                /* nBg */
                424810,
            },
            /* 36 */
            {
                /* nRg */
                381409,
                /* nBg */
                436721,
            },
            /* 37 */
            {
                /* nRg */
                370881,
                /* nBg */
                448759,
            },
            /* 38 */
            {
                /* nRg */
                360500,
                /* nBg */
                460912,
            },
            /* 39 */
            {
                /* nRg */
                350256,
                /* nBg */
                473191,
            },
            /* 40 */
            {
                /* nRg */
                340158,
                /* nBg */
                485585,
            },
            /* 41 */
            {
                /* nRg */
                332881,
                /* nBg */
                494697,
            },
            /* 42 */
            {
                /* nRg */
                325688,
                /* nBg */
                503872,
            },
            /* 43 */
            {
                /* nRg */
                318578,
                /* nBg */
                513100,
            },
            /* 44 */
            {
                /* nRg */
                311532,
                /* nBg */
                522390,
            },
            /* 45 */
            {
                /* nRg */
                304580,
                /* nBg */
                531743,
            },
            /* 46 */
            {
                /* nRg */
                297701,
                /* nBg */
                541160,
            },
            /* 47 */
            {
                /* nRg */
                290906,
                /* nBg */
                550628,
            },
            /* 48 */
            {
                /* nRg */
                284196,
                /* nBg */
                560160,
            },
            /* 49 */
            {
                /* nRg */
                254982,
                /* nBg */
                603718,
            },
            /* 50 */
            {
                /* nRg */
                227468,
                /* nBg */
                648376,
            },
            /* 51 */
            {
                /* nRg */
                201683,
                /* nBg */
                694042,
            },
            /* 52 */
            {
                /* nRg */
                177660,
                /* nBg */
                740672,
            },
            /* 53 */
            {
                /* nRg */
                155441,
                /* nBg */
                788183,
            },
            /* 54 */
            {
                /* nRg */
                135067,
                /* nBg */
                836512,
            },
            /* 55 */
            {
                /* nRg */
                116549,
                /* nBg */
                885585,
            },
            /* 56 */
            {
                /* nRg */
                99929,
                /* nBg */
                935340,
            },
        },
        /* tOutRightBorderPntList[512] */
        {
            /* 0 */
            {
                /* nRg */
                1355222,
                /* nBg */
                364401,
            },
            /* 1 */
            {
                /* nRg */
                1313981,
                /* nBg */
                362168,
            },
            /* 2 */
            {
                /* nRg */
                1272457,
                /* nBg */
                361685,
            },
            /* 3 */
            {
                /* nRg */
                1230745,
                /* nBg */
                362954,
            },
            /* 4 */
            {
                /* nRg */
                1188896,
                /* nBg */
                366016,
            },
            /* 5 */
            {
                /* nRg */
                1147006,
                /* nBg */
                370860,
            },
            /* 6 */
            {
                /* nRg */
                1105147,
                /* nBg */
                377508,
            },
            /* 7 */
            {
                /* nRg */
                1063392,
                /* nBg */
                385960,
            },
            /* 8 */
            {
                /* nRg */
                1021816,
                /* nBg */
                396225,
            },
            /* 9 */
            {
                /* nRg */
                1003372,
                /* nBg */
                398218,
            },
            /* 10 */
            {
                /* nRg */
                984875,
                /* nBg */
                400567,
            },
            /* 11 */
            {
                /* nRg */
                966347,
                /* nBg */
                403282,
            },
            /* 12 */
            {
                /* nRg */
                947776,
                /* nBg */
                406355,
            },
            /* 13 */
            {
                /* nRg */
                929185,
                /* nBg */
                409784,
            },
            /* 14 */
            {
                /* nRg */
                910573,
                /* nBg */
                413590,
            },
            /* 15 */
            {
                /* nRg */
                891961,
                /* nBg */
                417753,
            },
            /* 16 */
            {
                /* nRg */
                873327,
                /* nBg */
                422283,
            },
            /* 17 */
            {
                /* nRg */
                864352,
                /* nBg */
                427536,
            },
            /* 18 */
            {
                /* nRg */
                855418,
                /* nBg */
                432884,
            },
            /* 19 */
            {
                /* nRg */
                846536,
                /* nBg */
                438305,
            },
            /* 20 */
            {
                /* nRg */
                837707,
                /* nBg */
                443831,
            },
            /* 21 */
            {
                /* nRg */
                828941,
                /* nBg */
                449430,
            },
            /* 22 */
            {
                /* nRg */
                820217,
                /* nBg */
                455113,
            },
            /* 23 */
            {
                /* nRg */
                811556,
                /* nBg */
                460891,
            },
            /* 24 */
            {
                /* nRg */
                802958,
                /* nBg */
                466742,
            },
            /* 25 */
            {
                /* nRg */
                781546,
                /* nBg */
                481873,
            },
            /* 26 */
            {
                /* nRg */
                760501,
                /* nBg */
                497518,
            },
            /* 27 */
            {
                /* nRg */
                739865,
                /* nBg */
                513676,
            },
            /* 28 */
            {
                /* nRg */
                719617,
                /* nBg */
                530338,
            },
            /* 29 */
            {
                /* nRg */
                699799,
                /* nBg */
                547493,
            },
            /* 30 */
            {
                /* nRg */
                680400,
                /* nBg */
                565130,
            },
            /* 31 */
            {
                /* nRg */
                661442,
                /* nBg */
                583239,
            },
            /* 32 */
            {
                /* nRg */
                642945,
                /* nBg */
                601809,
            },
            /* 33 */
            {
                /* nRg */
                634326,
                /* nBg */
                610775,
            },
            /* 34 */
            {
                /* nRg */
                625811,
                /* nBg */
                619845,
            },
            /* 35 */
            {
                /* nRg */
                617402,
                /* nBg */
                629009,
            },
            /* 36 */
            {
                /* nRg */
                609107,
                /* nBg */
                638279,
            },
            /* 37 */
            {
                /* nRg */
                600918,
                /* nBg */
                647642,
            },
            /* 38 */
            {
                /* nRg */
                592833,
                /* nBg */
                657101,
            },
            /* 39 */
            {
                /* nRg */
                584864,
                /* nBg */
                666643,
            },
            /* 40 */
            {
                /* nRg */
                577010,
                /* nBg */
                676290,
            },
            /* 41 */
            {
                /* nRg */
                571359,
                /* nBg */
                683378,
            },
            /* 42 */
            {
                /* nRg */
                565759,
                /* nBg */
                690508,
            },
            /* 43 */
            {
                /* nRg */
                560223,
                /* nBg */
                697691,
            },
            /* 44 */
            {
                /* nRg */
                554749,
                /* nBg */
                704926,
            },
            /* 45 */
            {
                /* nRg */
                549338,
                /* nBg */
                712193,
            },
            /* 46 */
            {
                /* nRg */
                543991,
                /* nBg */
                719522,
            },
            /* 47 */
            {
                /* nRg */
                538706,
                /* nBg */
                726883,
            },
            /* 48 */
            {
                /* nRg */
                533474,
                /* nBg */
                734297,
            },
            /* 49 */
            {
                /* nRg */
                510761,
                /* nBg */
                768187,
            },
            /* 50 */
            {
                /* nRg */
                489349,
                /* nBg */
                802916,
            },
            /* 51 */
            {
                /* nRg */
                469290,
                /* nBg */
                838452,
            },
            /* 52 */
            {
                /* nRg */
                450605,
                /* nBg */
                874722,
            },
            /* 53 */
            {
                /* nRg */
                433324,
                /* nBg */
                911684,
            },
            /* 54 */
            {
                /* nRg */
                417470,
                /* nBg */
                949276,
            },
            /* 55 */
            {
                /* nRg */
                403073,
                /* nBg */
                987455,
            },
            /* 56 */
            {
                /* nRg */
                390144,
                /* nBg */
                1026147,
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
                    954204,
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
                    795869,
                    /* nBg */
                    288358,
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
                    723517,
                    /* nBg */
                    351273,
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
                    521142,
                    /* nBg */
                    483394,
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
                    467665,
                    /* nBg */
                    588251,
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
                    420479,
                    /* nBg */
                    655360,
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
                    607126,
                    /* nBg */
                    357564,
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
                403,
                /* nGainGr */
                256,
                /* nGainGb */
                256,
                /* nGainB */
                723,
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
        10137590,
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
            {400, 600, 700, 400, 200, 0, 0, 0, /*0 - 7*/},
            {400, 600, 700, 400, 200, 0, 0, 0, /*0 - 7*/},
            {300, 100, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {600, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {400, 600, 600, 600, 200, 0, 0, 0, /*0 - 7*/},
            {400, 600, 600, 600, 200, 0, 0, 0, /*0 - 7*/},
            {300, 150, 50, 50, 0, 0, 0, 0, /*0 - 7*/},
            {100, 100, 100, 0, 0, 0, 50, 50, /*0 - 7*/},
            {400, 500, 600, 500, 400, 400, 100, 100, /*0 - 7*/},
            {400, 500, 600, 500, 400, 400, 200, 200, /*0 - 7*/},
            {300, 10, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 100, 100, 100, 50, 50, 50, 50, /*0 - 7*/},
            {500, 500, 700, 600, 500, 500, 500, 400, /*0 - 7*/},
            {700, 700, 900, 1000, 1000, 1000, 900, 900, /*0 - 7*/},
            {400, 100, 10, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 300, 400, 500, 300, 300, 300, 300, /*0 - 7*/},
            {800, 800, 1000, 1000, 1000, 700, 500, 450, /*0 - 7*/},
            {800, 900, 1000, 1000, 1000, 700, 700, 700, /*0 - 7*/},
            {600, 600, 400, 0, 0, 0, 0, 0, /*0 - 7*/},
            {100, 200, 200, 200, 200, 200, 200, 200, /*0 - 7*/},
            {500, 500, 700, 800, 700, 700, 400, 400, /*0 - 7*/},
            {500, 500, 900, 900, 800, 700, 500, 600, /*0 - 7*/},
            {300, 300, 300, 300, 100, 0, 0, 0, /*0 - 7*/},
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
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7000, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6500, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6550, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6550, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6550, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6550, 7500, 12000, /*0 - 9*/},
            {1800, 2300, 2500, 2850, 3800, 4400, 5000, 6550, 7500, 12000, /*0 - 9*/},
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
        1,
        /* nGreenCutLuxListNum */
        2,
        /* nGreenCutCctListNum */
        0,
        /* nGreenCutLuxList */
        {102400, 204800, /*0 - 1*/},
        /* nGreenCutWeight */
        {1024, 102, /*0 - 1*/},
        /* nGreenCutBreakAngle */
        {146801, 146801, /*0 - 1*/},
        /* nGreenCutOffsetRg */
        {-20971, -20971, /*0 - 1*/},
        /* nGreenCutOffsetBg */
        {-20971, -20971, /*0 - 1*/},
        /* nGreenCutCctList */
        {0, /*0 - 0*/},
        /* nGreenCutCctDiscount */
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
        2,
        /* nRefVal[16] */
        {2048, 4096, /*0 - 1*/},
        /* nNoiseRatio[16] */
        {1024, 1024, /*0 - 1*/},
        /* nDpType[16] */
        {0, 0, /*0 - 1*/},
        /* nNonChwiseEn[16] */
        {0, 0, /*0 - 1*/},
        /* nChwiseStr[16] */
        {20, 20, /*0 - 1*/},
        /* nDetCoarseStr[16] */
        {236, 236, /*0 - 1*/},
        /* nDetFineStr[16] */
        {48, 48, /*0 - 1*/},
        /* nDynamicDpcStr[16] */
        {128, 128, /*0 - 1*/},
        /* nEdgeStr[16] */
        {102, 102, /*0 - 1*/},
        /* nHotColdTypeStr[16] */
        {32, 32, /*0 - 1*/},
        /* nSupWinkStr[16] */
        {16, 16, /*0 - 1*/},
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
        },
        /* nDynamicDpClrLimStr[16] */
        {128, 128, /*0 - 1*/},
        /* nStaticDpClrLimStr[16] */
        {128, 128, /*0 - 1*/},
        /* nNormalPixDpClrLimStr[16] */
        {128, 128, /*0 - 1*/},
        /* nPreDetLevelSlope[16] */
        {4, 4, /*0 - 1*/},
        /* nPreDetLevelOffset[16] */
        {0, 0, /*0 - 1*/},
        /* nPreDetLevelMax[16] */
        {256, 256, /*0 - 1*/},
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
            4368,
            /* nSblGrValue */
            4368,
            /* nSblGbValue */
            4368,
            /* nSblBValue */
            4368,
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
            12,
            /* nExposeTimeGrpNum */
            1,
            /* nGain[16] */
            {1024, 2048, 4096, 8192, 16384, 24576, 32768, 40960, 50800, 204800, 406400, 812800, /*0 - 11*/},
            /* nExposeTime[10] */
            {30000, /*0 - 0*/},
            /* nAutoSblRValue[16][10] */
            {
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
            },
            /* nAutoSblGrValue[16][10] */
            {
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
            },
            /* nAutoSblGbValue[16][10] */
            {
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
            },
            /* nAutoSblBValue[16][10] */
            {
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4368, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
                {4260, /*0 - 0*/},
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
            "/opt/etc/models/aiisp/SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
            /* szModelName[256] */
            "SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
            /* szTemporalBaseNrName[256] */
            "0.3.0-Patch-VB1_3d_S1-R600C_iso100_2000_L1000_8000_F4_C2_M3",
            /* szSpatialBaseNrName[256] */
            "0.3.0-Patch-VB1_2d_S1-R600C_iso100_2800_L800_8000_F3_C2",
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
            {4368, 4368, 4368, 4368, /*0 - 3*/},
            /* nBiasIn3D[4] */
            {4260, 4260, 4260, 4260, /*0 - 3*/},
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
                    {0, 128, /*0 - 1*/},
                    {16, 128, /*0 - 1*/},
                    {32, 128, /*0 - 1*/},
                    {48, 2048, /*0 - 1*/},
                    {64, 4096, /*0 - 1*/},
                    {80, 4096, /*0 - 1*/},
                    {96, 4096, /*0 - 1*/},
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
                    {240, 3840, /*0 - 1*/},
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
                /* tMata */
                {
                    /* szModelPath[256] */
                    "/opt/etc/models/aiisp/SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szModelName[256] */
                    "SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso100_2000_L1000_8000_F4_C2_M3",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_iso100_2800_L800_8000_F3_C2",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    300,
                    /* nIsoThresholdMax */
                    2000,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4368, 4368, 4368, 4368, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4368, 4368, 4368, 4368, /*0 - 3*/},
                },
                /* tParams */
                {
                    /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {3072, 6144, 10240, 12287, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {6144, 10240, 12287, 20480, /*0 - 3*/},
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
                        {3072, 6144, 10240, 12287, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {6144, 10240, 12287, 20480, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 256, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 256, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 256, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 256, /*0 - 1*/},
                                {16, 256, /*0 - 1*/},
                                {32, 256, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {16, 256, /*0 - 1*/},
                                {32, 512, /*0 - 1*/},
                                {48, 768, /*0 - 1*/},
                                {64, 1024, /*0 - 1*/},
                                {80, 1280, /*0 - 1*/},
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
                                {64, 1024, /*0 - 1*/},
                                {80, 1280, /*0 - 1*/},
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
                        /* nRefValStart[4] */
                        {3072, 6144, 10240, 12287, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {6144, 10240, 12287, 20480, /*0 - 3*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szModelName[256] */
                    "SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso2000_5000_L1000_8000_F5_C3_M1",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_iso100_2800_L800_8000_F3_C2",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    2000,
                    /* nIsoThresholdMax */
                    2800,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4368, 4368, 4368, 4368, /*0 - 3*/},
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
                        {12288, 16384, 20480, 24576, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {16384, 20480, 24576, 28672, /*0 - 3*/},
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
                        {12288, 16384, 20480, 24576, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {16384, 20480, 24576, 28672, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
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
                            /* nTemporalFilterStrLut 1 */
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
                            /* nTemporalFilterStrLut 2 */
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
                            /* nTemporalFilterStrLut 3 */
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
                        /* nRefValStart[4] */
                        {12288, 16384, 20480, 24576, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {16384, 20480, 24576, 28672, /*0 - 3*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szModelName[256] */
                    "SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso2000_5000_L1000_8000_F5_C3_M1",
                    /* szSpatialBaseNrName[256] */
                    "0.3.0-Patch-VB1_2d_S1-R600C_iso2800_5000_L800_8000_F8_C5",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    2800,
                    /* nIsoThresholdMax */
                    5000,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4368, 4368, 4368, 4368, /*0 - 3*/},
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
                        {28672, 32768, 36864, 40960, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {32768, 36864, 40960, 51200, /*0 - 3*/},
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
                        {28672, 32768, 36864, 40960, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {32768, 36864, 40960, 51200, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                        /* nRefValStart[4] */
                        {28672, 32768, 36864, 40960, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {32768, 36864, 40960, 51200, /*0 - 3*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
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
                                {240, 3840, /*0 - 1*/},
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
                    "/opt/etc/models/aiisp/SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szModelName[256] */
                    "SC850SL_multi4_sdr_mass_pack_1714012262_240425_ax620e.axmodel",
                    /* szTemporalBaseNrName[256] */
                    "0.3.0-Patch-VB1_3d_S1-R600C_iso5000_40000_L300_1500_F5_C3_M1",
                    /* szSpatialBaseNrName[256] */
                    "0.0.6-SC850SL-add_2d_600G_iso5000_40000_L400_1500_F1_C1",
                    /* nHcgMode */
                    0,
                    /* nIsoThresholdMin */
                    5000,
                    /* nIsoThresholdMax */
                    40000,
                    /* nHdrRatioMin */
                    1024,
                    /* nHdrRatioMax */
                    1024,
                    /* nBiasIn2D[4] */
                    {4368, 4368, 4368, 4368, /*0 - 3*/},
                    /* nBiasIn3D[4] */
                    {4200, 4200, 4200, 4200, /*0 - 3*/},
                },
                /* tParams */
                {
                     /* tBias */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {51200, 101599, 203198, 304797, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {101599, 203198, 304797, 406396, /*0 - 3*/},
                        /* nBiasIn[4][4] */
                        {
                            /*  nBiasIn 0 */
                            {0, -3, -3, 0, /*0 - 3*/},
                            /*  nBiasIn 1 */
                            {0, -2, -2, 0, /*0 - 3*/},
                            /*  nBiasIn 2 */
                            {0, -2, -2, 0, /*0 - 3*/},
							/*  nBiasIn 3 */
                            {0, -2, -2, 0, /*0 - 3*/},
                        },
                    },
                    /* tNonSens */
                    {
                        /* nRefGrpNum */
                        4,
                        /* nRefValStart[4] */
                        {51200, 101599, 203198, 304797, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {101599, 203198, 304797, 406396, /*0 - 3*/},
                        /* nTemporalFilterStrLut[4][17][2] */
                        {
                            /* nTemporalFilterStrLut 0 */
                            {
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                                {0, 128, /*0 - 1*/},
                                {16, 128, /*0 - 1*/},
                                {32, 128, /*0 - 1*/},
                                {48, 2048, /*0 - 1*/},
                                {64, 4096, /*0 - 1*/},
                                {80, 4096, /*0 - 1*/},
                                {96, 4096, /*0 - 1*/},
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
                        /* nRefValStart[4] */
                        {51200, 101599, 203198, 304797, /*0 - 3*/},
                        /* nRefValEnd[4] */
                        {101599, 203198, 304797, 406396, /*0 - 3*/},
                        /* nSpatialNrStrLut[4][17][2] */
                        {
                            /* nSpatialNrStrLut 0 */
                            {
                                {0, 2484, /*0 - 1*/},
                                {16, 2484, /*0 - 1*/},
                                {32, 2484, /*0 - 1*/},
                                {48, 2484, /*0 - 1*/},
                                {64, 2484, /*0 - 1*/},
                                {80, 2484, /*0 - 1*/},
                                {96, 2484, /*0 - 1*/},
                                {112, 2484, /*0 - 1*/},
                                {128, 2484, /*0 - 1*/},
                                {144, 2484, /*0 - 1*/},
                                {160, 2560, /*0 - 1*/},
                                {176, 2816, /*0 - 1*/},
                                {192, 3072, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3800, /*0 - 1*/},
                                {255, 3800, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 1 */
                            {
                                {0, 3088, /*0 - 1*/},
                                {16, 3088, /*0 - 1*/},
                                {32, 3088, /*0 - 1*/},
                                {48, 3088, /*0 - 1*/},
                                {64, 3088, /*0 - 1*/},
                                {80, 3088, /*0 - 1*/},
                                {96, 3088, /*0 - 1*/},
                                {112, 3088, /*0 - 1*/},
                                {128, 3088, /*0 - 1*/},
                                {144, 3088, /*0 - 1*/},
                                {160, 3088, /*0 - 1*/},
                                {176, 3088, /*0 - 1*/},
                                {192, 3088, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 2 */
                            {
                                {0, 3088, /*0 - 1*/},
                                {16, 3088, /*0 - 1*/},
                                {32, 3088, /*0 - 1*/},
                                {48, 3088, /*0 - 1*/},
                                {64, 3088, /*0 - 1*/},
                                {80, 3088, /*0 - 1*/},
                                {96, 3088, /*0 - 1*/},
                                {112, 3088, /*0 - 1*/},
                                {128, 3088, /*0 - 1*/},
                                {144, 3088, /*0 - 1*/},
                                {160, 3088, /*0 - 1*/},
                                {176, 3088, /*0 - 1*/},
                                {192, 3088, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
                                {255, 4096, /*0 - 1*/},
                            },
                            /* nSpatialNrStrLut 3 */
                            {
                                {0, 3088, /*0 - 1*/},
                                {16, 3088, /*0 - 1*/},
                                {32, 3088, /*0 - 1*/},
                                {48, 3088, /*0 - 1*/},
                                {64, 3088, /*0 - 1*/},
                                {80, 3088, /*0 - 1*/},
                                {96, 3088, /*0 - 1*/},
                                {112, 3088, /*0 - 1*/},
                                {128, 3088, /*0 - 1*/},
                                {144, 3088, /*0 - 1*/},
                                {160, 3088, /*0 - 1*/},
                                {176, 3088, /*0 - 1*/},
                                {192, 3088, /*0 - 1*/},
                                {208, 3328, /*0 - 1*/},
                                {224, 3584, /*0 - 1*/},
                                {240, 3840, /*0 - 1*/},
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
                {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 128, 128, 128, 128, /*0 - 16*/},
                {512, 512, 512, 384, 384, 384, 384, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
            },
            /* nLowFreqNrFactor[2][17] */
            {
                {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
                {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 0, 0, 0, 0, /*0 - 16*/},
            },
            /* nHfNrStrength[2] */
        {45, 83, /*0 - 1*/},
            /* nMfNrStrength[2] */
        {45, 83, /*0 - 1*/},
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
            /* tHrParam */
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
        1,
        /* nCoeffWinRad */
        2,
        /* nCoeffEps */
        200,
    },
    /* tManualParam */
    {
        /* nKMax */
        65530,
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
            64,
            /* nRltmStrength */
            75,
            /* nContrastStrength */
            42,
            /* nPostGamma */
            37,
            /* nHighlightSup */
            6,
            /* nDetailCoringPos */
            40,
            /* nDetailCoringNeg */
            40,
            /* nDetailGainPos */
            32,
            /* nDetailGainNeg */
            32,
        },
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 4096, 10240, 16384, 32768, 61440, 98304, 136192, 260096, 543744, 819200, 1021952, /*0 - 11*/},
        /* nKMax[12] */
        {65530, 65530, 65530, 65530, 65530, 65530, 65530, 65530, 65530, 65530, 65530, 65530, /*0 - 11*/},
        /* nPreGamma[12] */
        {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, /*0 - 11*/},
        /* nExtraDgain[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 11*/},
        /* nLog10Offset[12] */
        {86, 86, 86, 86, 86, 86, 86, 86, 86, 86, 86, 86, /*0 - 11*/},
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
                0, 140, 233, 314, 388, 458, 523, 586, 647, 705, 762, 817, 871, 924, 976, 1027, 1077, 1126, 1174, 1222, 1269, 1315, 1361, 1406, 1451, 1495, 1539, 1582, 1625, 1667, 1709, 1751,  /* 0 - 31*/
                1792, 1833, 1874, 1914, 1954, 1994, 2034, 2073, 2112, 2151, 2189, 2227, 2265, 2303, 2340, 2378, 2415, 2452, 2488, 2525, 2561, 2597, 2633, 2669, 2705, 2740, 2775, 2810, 2845, 2880, 2915, 2949,  /* 32 - 63*/
                2984, 3018, 3052, 3086, 3120, 3153, 3187, 3220, 3254, 3287, 3320, 3353, 3385, 3418, 3451, 3483, 3516, 3548, 3580, 3612, 3644, 3676, 3708, 3739, 3771, 3802, 3834, 3865, 3896, 3927, 3958, 3989,  /* 64 - 95*/
                4020, 4051, 4081, 4112, 4142, 4173, 4203, 4233, 4264, 4294, 4324, 4354, 4384, 4414, 4444, 4474, 4505, 4535, 4565, 4595, 4625, 4655, 4685, 4716, 4746, 4776, 4806, 4836, 4866, 4896, 4927, 4957,  /* 96 - 127*/
                4987, 5017, 5047, 5077, 5107, 5138, 5168, 5198, 5228, 5258, 5288, 5318, 5348, 5379, 5409, 5439, 5469, 5499, 5529, 5559, 5590, 5620, 5650, 5680, 5710, 5740, 5770, 5801, 5831, 5861, 5891, 5921,  /* 128 - 159*/
                5951, 5981, 6012, 6042, 6072, 6102, 6132, 6162, 6192, 6222, 6253, 6283, 6313, 6343, 6373, 6403, 6433, 6464, 6494, 6524, 6554, 6584, 6614, 6644, 6675, 6705, 6735, 6765, 6795, 6825, 6855, 6886,  /* 160 - 191*/
                6916, 6946, 6976, 7006, 7036, 7066, 7096, 7127, 7157, 7187, 7217, 7247, 7277, 7307, 7338, 7368, 7398, 7428, 7458, 7488, 7518, 7549, 7579, 7609, 7639, 7669, 7699, 7729, 7760, 7790, 7820, 7850,  /* 192 - 223*/
                7880, 7910, 7940, 7970, 8001, 8031, 8061, 8091, 8121, 8151, 8181, 8212, 8242, 8272, 8302, 8332, 8362, 8392, 8423, 8453, 8483, 8513, 8543, 8573, 8603, 8634, 8664, 8694, 8724, 8754, 8784, 8814,  /* 224 - 255*/
                8844, 8875, 8905, 8935, 8965, 8995, 9025, 9055, 9086, 9116, 9146, 9176, 9206, 9236, 9266, 9297, 9327, 9357, 9387, 9417, 9447, 9477, 9508, 9538, 9568, 9598, 9628, 9658, 9688, 9718, 9749, 9779,  /* 256 - 287*/
                9809, 9839, 9869, 9899, 9929, 9960, 9990, 10020, 10050, 10080, 10110, 10140, 10171, 10201, 10231, 10261, 10291, 10321, 10351, 10382, 10412, 10442, 10472, 10502, 10532, 10562, 10592, 10623, 10653, 10683, 10713, 10743,  /* 288 - 319*/
                10773, 10803, 10834, 10864, 10894, 10924, 10954, 10984, 11014, 11045, 11075, 11105, 11135, 11165, 11195, 11225, 11256, 11286, 11316, 11346, 11376, 11406, 11436, 11466, 11497, 11527, 11557, 11587, 11617, 11647, 11677, 11708,  /* 320 - 351*/
                11738, 11768, 11798, 11828, 11858, 11888, 11919, 11949, 11979, 12009, 12039, 12069, 12099, 12130, 12160, 12190, 12220, 12250, 12280, 12310, 12340, 12371, 12401, 12431, 12461, 12491, 12521, 12551, 12582, 12612, 12642, 12672,  /* 352 - 383*/
                12702, 12732, 12762, 12793, 12823, 12853, 12883, 12913, 12943, 12973, 13004, 13034, 13064, 13094, 13124, 13154, 13184, 13214, 13245, 13275, 13305, 13335, 13365, 13395, 13425, 13456, 13486, 13516, 13546, 13576, 13606, 13636,  /* 384 - 415*/
                13667, 13697, 13727, 13757, 13787, 13817, 13847, 13878, 13908, 13938, 13968, 13998, 14028, 14058, 14088, 14119, 14149, 14179, 14209, 14239, 14269, 14299, 14330, 14360, 14390, 14420, 14450, 14480, 14510, 14541, 14571, 14601,  /* 416 - 447*/
                14631, 14661, 14691, 14721, 14752, 14782, 14812, 14842, 14872, 14902, 14932, 14962, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15204, 15234, 15264, 15294, 15324, 15354, 15384, 15415, 15445, 15475, 15505, 15535, 15565,  /* 448 - 479*/
                15595, 15626, 15656, 15686, 15716, 15746, 15776, 15806, 15837, 15867, 15897, 15927, 15957, 15987, 16017, 16047, 16078, 16108, 16138, 16168, 16198, 16228, 16258, 16289, 16319, 16349, 16379, 16409, 16439, 16469, 16500, 16530,  /* 480 - 511*/
                16560, 16590, 16620, 16650, 16680, 16711, 16741, 16771, 16801, 16831, 16861, 16891, 16921, 16952, 16982, 17012, 17042, 17072, 17102, 17132, 17163, 17193, 17223, 17253, 17283, 17313, 17343, 17374, 17404, 17434, 17464, 17494,  /* 512 - 543*/
                17524, 17554, 17585, 17615, 17645, 17675, 17705, 17735, 17765, 17795, 17826, 17856, 17886, 17916, 17946, 17976, 18006, 18037, 18067, 18097, 18127, 18157, 18187, 18217, 18248, 18278, 18308, 18338, 18368, 18398, 18428, 18459,  /* 544 - 575*/
                18489, 18519, 18549, 18579, 18609, 18639, 18669, 18700, 18730, 18760, 18790, 18820, 18850, 18880, 18911, 18941, 18971, 19001, 19031, 19061, 19091, 19122, 19152, 19182, 19212, 19242, 19272, 19302, 19333, 19363, 19393, 19423,  /* 576 - 607*/
                19453, 19483, 19513, 19543, 19574, 19604, 19634, 19664, 19694, 19724, 19754, 19785, 19815, 19845, 19875, 19905, 19935, 19965, 19996, 20026, 20056, 20086, 20116, 20146, 20176, 20207, 20237, 20267, 20297, 20327, 20357, 20387,  /* 608 - 639*/
                20417, 20448, 20478, 20508, 20538, 20568, 20598, 20628, 20659, 20689, 20719, 20749, 20779, 20809, 20839, 20870, 20900, 20930, 20960, 20990, 21020, 21050, 21081, 21111, 21141, 21171, 21201, 21231, 21261, 21291, 21322, 21352,  /* 640 - 671*/
                21382, 21412, 21442, 21472, 21502, 21533, 21563, 21593, 21623, 21653, 21683, 21713, 21744, 21774, 21804, 21834, 21864, 21894, 21924, 21955, 21985, 22015, 22045, 22075, 22105, 22135, 22165, 22196, 22226, 22256, 22286, 22316,  /* 672 - 703*/
                22346, 22376, 22407, 22437, 22467, 22497, 22527, 22557, 22587, 22618, 22648, 22678, 22708, 22738, 22768, 22798, 22829, 22859, 22889, 22919, 22949, 22979, 23009, 23039, 23070, 23100, 23130, 23160, 23190, 23220, 23250, 23281,  /* 704 - 735*/
                23311, 23341, 23371, 23401, 23431, 23461, 23492, 23522, 23552, 23582, 23612, 23642, 23672, 23703, 23733, 23763, 23793, 23823, 23853, 23883, 23913, 23944, 23974, 24004, 24034, 24064, 24094, 24124, 24155, 24185, 24215, 24245,  /* 736 - 767*/
                24275, 24305, 24335, 24366, 24396, 24426, 24456, 24486, 24516, 24546, 24577, 24607, 24637, 24667, 24697, 24727, 24757, 24787, 24818, 24848, 24878, 24908, 24938, 24968, 24998, 25029, 25059, 25089, 25119, 25149, 25179, 25209,  /* 768 - 799*/
                25240, 25270, 25300, 25330, 25360, 25390, 25420, 25451, 25481, 25511, 25541, 25571, 25601, 25631, 25661, 25692, 25722, 25752, 25782, 25812, 25842, 25872, 25903, 25933, 25963, 25993, 26023, 26053, 26083, 26114, 26144, 26174,  /* 800 - 831*/
                26204, 26234, 26264, 26294, 26325, 26355, 26385, 26415, 26445, 26475, 26505, 26535, 26566, 26596, 26626, 26656, 26686, 26716, 26746, 26777, 26807, 26837, 26867, 26897, 26927, 26957, 26988, 27018, 27048, 27078, 27108, 27138,  /* 832 - 863*/
                27168, 27199, 27229, 27259, 27289, 27319, 27349, 27379, 27410, 27440, 27470, 27500, 27530, 27561, 27591, 27621, 27652, 27682, 27712, 27743, 27773, 27804, 27834, 27865, 27896, 27926, 27957, 27988, 28018, 28049, 28080, 28111,  /* 864 - 895*/
                28142, 28173, 28204, 28234, 28266, 28297, 28328, 28359, 28390, 28421, 28452, 28484, 28515, 28546, 28578, 28609, 28641, 28672, 28704, 28735, 28767, 28799, 28830, 28862, 28894, 28926, 28958, 28990, 29022, 29054, 29086, 29118,  /* 896 - 927*/
                29150, 29183, 29215, 29247, 29280, 29312, 29344, 29377, 29410, 29442, 29475, 29508, 29541, 29573, 29606, 29639, 29672, 29706, 29739, 29772, 29805, 29839, 29872, 29905, 29939, 29973, 30006, 30040, 30074, 30108, 30142, 30176,  /* 928 - 959*/
                30210, 30244, 30278, 30313, 30347, 30382, 30416, 30451, 30486, 30521, 30556, 30591, 30626, 30661, 30697, 30732, 30768, 30803, 30839, 30875, 30911, 30947, 30983, 31020, 31056, 31093, 31130, 31167, 31204, 31241, 31278, 31316,  /* 960 - 991*/
                31354, 31391, 31429, 31468, 31506, 31545, 31584, 31623, 31662, 31701, 31741, 31781, 31821, 31862, 31903, 31944, 31986, 32028, 32070, 32113, 32156, 32200, 32244, 32289, 32335, 32382, 32430, 32478, 32529, 32581, 32635, 32694,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 140, 233, 314, 388, 458, 523, 586, 647, 705, 762, 817, 871, 924, 976, 1027, 1077, 1126, 1174, 1222, 1269, 1315, 1361, 1406, 1451, 1495, 1539, 1582, 1625, 1667, 1709, 1751,  /* 0 - 31*/
                1792, 1833, 1874, 1914, 1954, 1994, 2034, 2073, 2112, 2151, 2189, 2227, 2265, 2303, 2340, 2378, 2415, 2452, 2488, 2525, 2561, 2597, 2633, 2669, 2705, 2740, 2775, 2810, 2845, 2880, 2915, 2949,  /* 32 - 63*/
                2984, 3018, 3052, 3086, 3120, 3153, 3187, 3220, 3254, 3287, 3320, 3353, 3385, 3418, 3451, 3483, 3516, 3548, 3580, 3612, 3644, 3676, 3708, 3739, 3771, 3802, 3834, 3865, 3896, 3927, 3958, 3989,  /* 64 - 95*/
                4020, 4051, 4081, 4112, 4142, 4173, 4203, 4233, 4264, 4294, 4324, 4354, 4384, 4414, 4444, 4474, 4505, 4535, 4565, 4595, 4625, 4655, 4685, 4716, 4746, 4776, 4806, 4836, 4866, 4896, 4927, 4957,  /* 96 - 127*/
                4987, 5017, 5047, 5077, 5107, 5138, 5168, 5198, 5228, 5258, 5288, 5318, 5348, 5379, 5409, 5439, 5469, 5499, 5529, 5559, 5590, 5620, 5650, 5680, 5710, 5740, 5770, 5801, 5831, 5861, 5891, 5921,  /* 128 - 159*/
                5951, 5981, 6012, 6042, 6072, 6102, 6132, 6162, 6192, 6222, 6253, 6283, 6313, 6343, 6373, 6403, 6433, 6464, 6494, 6524, 6554, 6584, 6614, 6644, 6675, 6705, 6735, 6765, 6795, 6825, 6855, 6886,  /* 160 - 191*/
                6916, 6946, 6976, 7006, 7036, 7066, 7096, 7127, 7157, 7187, 7217, 7247, 7277, 7307, 7338, 7368, 7398, 7428, 7458, 7488, 7518, 7549, 7579, 7609, 7639, 7669, 7699, 7729, 7760, 7790, 7820, 7850,  /* 192 - 223*/
                7880, 7910, 7940, 7970, 8001, 8031, 8061, 8091, 8121, 8151, 8181, 8212, 8242, 8272, 8302, 8332, 8362, 8392, 8423, 8453, 8483, 8513, 8543, 8573, 8603, 8634, 8664, 8694, 8724, 8754, 8784, 8814,  /* 224 - 255*/
                8844, 8875, 8905, 8935, 8965, 8995, 9025, 9055, 9086, 9116, 9146, 9176, 9206, 9236, 9266, 9297, 9327, 9357, 9387, 9417, 9447, 9477, 9508, 9538, 9568, 9598, 9628, 9658, 9688, 9718, 9749, 9779,  /* 256 - 287*/
                9809, 9839, 9869, 9899, 9929, 9960, 9990, 10020, 10050, 10080, 10110, 10140, 10171, 10201, 10231, 10261, 10291, 10321, 10351, 10382, 10412, 10442, 10472, 10502, 10532, 10562, 10592, 10623, 10653, 10683, 10713, 10743,  /* 288 - 319*/
                10773, 10803, 10834, 10864, 10894, 10924, 10954, 10984, 11014, 11045, 11075, 11105, 11135, 11165, 11195, 11225, 11256, 11286, 11316, 11346, 11376, 11406, 11436, 11466, 11497, 11527, 11557, 11587, 11617, 11647, 11677, 11708,  /* 320 - 351*/
                11738, 11768, 11798, 11828, 11858, 11888, 11919, 11949, 11979, 12009, 12039, 12069, 12099, 12130, 12160, 12190, 12220, 12250, 12280, 12310, 12340, 12371, 12401, 12431, 12461, 12491, 12521, 12551, 12582, 12612, 12642, 12672,  /* 352 - 383*/
                12702, 12732, 12762, 12793, 12823, 12853, 12883, 12913, 12943, 12973, 13004, 13034, 13064, 13094, 13124, 13154, 13184, 13214, 13245, 13275, 13305, 13335, 13365, 13395, 13425, 13456, 13486, 13516, 13546, 13576, 13606, 13636,  /* 384 - 415*/
                13667, 13697, 13727, 13757, 13787, 13817, 13847, 13878, 13908, 13938, 13968, 13998, 14028, 14058, 14088, 14119, 14149, 14179, 14209, 14239, 14269, 14299, 14330, 14360, 14390, 14420, 14450, 14480, 14510, 14541, 14571, 14601,  /* 416 - 447*/
                14631, 14661, 14691, 14721, 14752, 14782, 14812, 14842, 14872, 14902, 14932, 14962, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15204, 15234, 15264, 15294, 15324, 15354, 15384, 15415, 15445, 15475, 15505, 15535, 15565,  /* 448 - 479*/
                15595, 15626, 15656, 15686, 15716, 15746, 15776, 15806, 15837, 15867, 15897, 15927, 15957, 15987, 16017, 16047, 16078, 16108, 16138, 16168, 16198, 16228, 16258, 16289, 16319, 16349, 16379, 16409, 16439, 16469, 16500, 16530,  /* 480 - 511*/
                16560, 16590, 16620, 16650, 16680, 16711, 16741, 16771, 16801, 16831, 16861, 16891, 16921, 16952, 16982, 17012, 17042, 17072, 17102, 17132, 17163, 17193, 17223, 17253, 17283, 17313, 17343, 17374, 17404, 17434, 17464, 17494,  /* 512 - 543*/
                17524, 17554, 17585, 17615, 17645, 17675, 17705, 17735, 17765, 17795, 17826, 17856, 17886, 17916, 17946, 17976, 18006, 18037, 18067, 18097, 18127, 18157, 18187, 18217, 18248, 18278, 18308, 18338, 18368, 18398, 18428, 18459,  /* 544 - 575*/
                18489, 18519, 18549, 18579, 18609, 18639, 18669, 18700, 18730, 18760, 18790, 18820, 18850, 18880, 18911, 18941, 18971, 19001, 19031, 19061, 19091, 19122, 19152, 19182, 19212, 19242, 19272, 19302, 19333, 19363, 19393, 19423,  /* 576 - 607*/
                19453, 19483, 19513, 19543, 19574, 19604, 19634, 19664, 19694, 19724, 19754, 19785, 19815, 19845, 19875, 19905, 19935, 19965, 19996, 20026, 20056, 20086, 20116, 20146, 20176, 20207, 20237, 20267, 20297, 20327, 20357, 20387,  /* 608 - 639*/
                20417, 20448, 20478, 20508, 20538, 20568, 20598, 20628, 20659, 20689, 20719, 20749, 20779, 20809, 20839, 20870, 20900, 20930, 20960, 20990, 21020, 21050, 21081, 21111, 21141, 21171, 21201, 21231, 21261, 21291, 21322, 21352,  /* 640 - 671*/
                21382, 21412, 21442, 21472, 21502, 21533, 21563, 21593, 21623, 21653, 21683, 21713, 21744, 21774, 21804, 21834, 21864, 21894, 21924, 21955, 21985, 22015, 22045, 22075, 22105, 22135, 22165, 22196, 22226, 22256, 22286, 22316,  /* 672 - 703*/
                22346, 22376, 22407, 22437, 22467, 22497, 22527, 22557, 22587, 22618, 22648, 22678, 22708, 22738, 22768, 22798, 22829, 22859, 22889, 22919, 22949, 22979, 23009, 23039, 23070, 23100, 23130, 23160, 23190, 23220, 23250, 23281,  /* 704 - 735*/
                23311, 23341, 23371, 23401, 23431, 23461, 23492, 23522, 23552, 23582, 23612, 23642, 23672, 23703, 23733, 23763, 23793, 23823, 23853, 23883, 23913, 23944, 23974, 24004, 24034, 24064, 24094, 24124, 24155, 24185, 24215, 24245,  /* 736 - 767*/
                24275, 24305, 24335, 24366, 24396, 24426, 24456, 24486, 24516, 24546, 24577, 24607, 24637, 24667, 24697, 24727, 24757, 24787, 24818, 24848, 24878, 24908, 24938, 24968, 24998, 25029, 25059, 25089, 25119, 25149, 25179, 25209,  /* 768 - 799*/
                25240, 25270, 25300, 25330, 25360, 25390, 25420, 25451, 25481, 25511, 25541, 25571, 25601, 25631, 25661, 25692, 25722, 25752, 25782, 25812, 25842, 25872, 25903, 25933, 25963, 25993, 26023, 26053, 26083, 26114, 26144, 26174,  /* 800 - 831*/
                26204, 26234, 26264, 26294, 26325, 26355, 26385, 26415, 26445, 26475, 26505, 26535, 26566, 26596, 26626, 26656, 26686, 26716, 26746, 26777, 26807, 26837, 26867, 26897, 26927, 26957, 26988, 27018, 27048, 27078, 27108, 27138,  /* 832 - 863*/
                27168, 27199, 27229, 27259, 27289, 27319, 27349, 27379, 27410, 27440, 27470, 27500, 27530, 27561, 27591, 27621, 27652, 27682, 27712, 27743, 27773, 27804, 27834, 27865, 27896, 27926, 27957, 27988, 28018, 28049, 28080, 28111,  /* 864 - 895*/
                28142, 28173, 28204, 28234, 28266, 28297, 28328, 28359, 28390, 28421, 28452, 28484, 28515, 28546, 28578, 28609, 28641, 28672, 28704, 28735, 28767, 28799, 28830, 28862, 28894, 28926, 28958, 28990, 29022, 29054, 29086, 29118,  /* 896 - 927*/
                29150, 29183, 29215, 29247, 29280, 29312, 29344, 29377, 29410, 29442, 29475, 29508, 29541, 29573, 29606, 29639, 29672, 29706, 29739, 29772, 29805, 29839, 29872, 29905, 29939, 29973, 30006, 30040, 30074, 30108, 30142, 30176,  /* 928 - 959*/
                30210, 30244, 30278, 30313, 30347, 30382, 30416, 30451, 30486, 30521, 30556, 30591, 30626, 30661, 30697, 30732, 30768, 30803, 30839, 30875, 30911, 30947, 30983, 31020, 31056, 31093, 31130, 31167, 31204, 31241, 31278, 31316,  /* 960 - 991*/
                31354, 31391, 31429, 31468, 31506, 31545, 31584, 31623, 31662, 31701, 31741, 31781, 31821, 31862, 31903, 31944, 31986, 32028, 32070, 32113, 32156, 32200, 32244, 32289, 32335, 32382, 32430, 32478, 32529, 32581, 32635, 32694,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 61, 114, 163, 211, 258, 303, 347, 391, 434, 477, 519, 561, 603, 644, 684, 725, 765, 805, 844, 884, 923, 962, 1001, 1039, 1078, 1116, 1154, 1192, 1229, 1267, 1305,  /* 0 - 31*/
                1342, 1379, 1416, 1453, 1490, 1527, 1563, 1600, 1636, 1672, 1709, 1745, 1781, 1817, 1853, 1888, 1924, 1959, 1995, 2030, 2066, 2101, 2136, 2171, 2206, 2241, 2276, 2311, 2346, 2381, 2415, 2450,  /* 32 - 63*/
                2484, 2519, 2553, 2587, 2622, 2656, 2690, 2724, 2758, 2792, 2826, 2860, 2894, 2928, 2962, 2995, 3029, 3063, 3096, 3130, 3163, 3197, 3230, 3263, 3297, 3330, 3363, 3396, 3430, 3463, 3496, 3529,  /* 64 - 95*/
                3562, 3595, 3628, 3660, 3693, 3726, 3759, 3791, 3824, 3857, 3889, 3922, 3955, 3987, 4020, 4052, 4084, 4117, 4149, 4182, 4214, 4246, 4278, 4310, 4343, 4375, 4407, 4439, 4471, 4503, 4535, 4567,  /* 96 - 127*/
                4599, 4631, 4663, 4695, 4726, 4758, 4790, 4822, 4853, 4885, 4917, 4948, 4980, 5012, 5043, 5075, 5106, 5138, 5169, 5201, 5232, 5263, 5295, 5326, 5358, 5389, 5420, 5451, 5483, 5514, 5545, 5577,  /* 128 - 159*/
                5608, 5639, 5671, 5702, 5733, 5765, 5796, 5827, 5859, 5890, 5921, 5952, 5984, 6015, 6046, 6078, 6109, 6140, 6172, 6203, 6234, 6266, 6297, 6328, 6360, 6391, 6422, 6453, 6485, 6516, 6547, 6579,  /* 160 - 191*/
                6610, 6641, 6673, 6704, 6735, 6767, 6798, 6829, 6861, 6892, 6923, 6955, 6986, 7017, 7048, 7080, 7111, 7142, 7174, 7205, 7236, 7268, 7299, 7330, 7362, 7393, 7424, 7456, 7487, 7518, 7549, 7581,  /* 192 - 223*/
                7612, 7643, 7675, 7706, 7737, 7769, 7800, 7831, 7863, 7894, 7925, 7957, 7988, 8019, 8050, 8082, 8113, 8144, 8176, 8207, 8238, 8270, 8301, 8332, 8364, 8395, 8426, 8458, 8489, 8520, 8552, 8583,  /* 224 - 255*/
                8614, 8645, 8677, 8708, 8739, 8771, 8802, 8833, 8865, 8896, 8927, 8959, 8990, 9021, 9053, 9084, 9115, 9146, 9178, 9209, 9240, 9272, 9303, 9334, 9366, 9397, 9428, 9460, 9491, 9522, 9554, 9585,  /* 256 - 287*/
                9616, 9648, 9679, 9710, 9741, 9773, 9804, 9835, 9867, 9898, 9929, 9961, 9992, 10023, 10055, 10086, 10117, 10149, 10180, 10211, 10242, 10274, 10305, 10336, 10368, 10399, 10430, 10462, 10493, 10524, 10556, 10587,  /* 288 - 319*/
                10618, 10650, 10681, 10712, 10743, 10775, 10806, 10837, 10869, 10900, 10931, 10963, 10994, 11025, 11057, 11088, 11119, 11151, 11182, 11213, 11245, 11276, 11307, 11338, 11370, 11401, 11432, 11464, 11495, 11526, 11558, 11589,  /* 320 - 351*/
                11620, 11652, 11683, 11714, 11746, 11777, 11808, 11839, 11871, 11902, 11933, 11965, 11996, 12027, 12059, 12090, 12121, 12153, 12184, 12215, 12247, 12278, 12309, 12340, 12372, 12403, 12434, 12466, 12497, 12528, 12560, 12591,  /* 352 - 383*/
                12622, 12654, 12685, 12716, 12748, 12779, 12810, 12842, 12873, 12904, 12935, 12967, 12998, 13029, 13061, 13092, 13123, 13155, 13186, 13217, 13249, 13280, 13311, 13343, 13374, 13405, 13436, 13468, 13499, 13530, 13562, 13593,  /* 384 - 415*/
                13624, 13656, 13687, 13718, 13750, 13781, 13812, 13844, 13875, 13906, 13938, 13969, 14000, 14031, 14063, 14094, 14125, 14157, 14188, 14219, 14251, 14282, 14313, 14345, 14376, 14407, 14439, 14470, 14501, 14532, 14564, 14595,  /* 416 - 447*/
                14626, 14658, 14689, 14720, 14752, 14783, 14814, 14846, 14877, 14908, 14940, 14971, 15002, 15033, 15065, 15096, 15127, 15159, 15190, 15221, 15253, 15284, 15315, 15347, 15378, 15409, 15441, 15472, 15503, 15535, 15566, 15597,  /* 448 - 479*/
                15628, 15660, 15691, 15722, 15754, 15785, 15816, 15848, 15879, 15910, 15942, 15973, 16004, 16036, 16067, 16098, 16129, 16161, 16192, 16223, 16255, 16286, 16317, 16349, 16380, 16411, 16443, 16474, 16505, 16537, 16568, 16599,  /* 480 - 511*/
                16631, 16662, 16693, 16724, 16756, 16787, 16818, 16850, 16881, 16912, 16944, 16975, 17006, 17038, 17069, 17100, 17132, 17163, 17194, 17225, 17257, 17288, 17319, 17351, 17382, 17413, 17445, 17476, 17507, 17539, 17570, 17601,  /* 512 - 543*/
                17633, 17664, 17695, 17726, 17758, 17789, 17820, 17852, 17883, 17914, 17946, 17977, 18008, 18040, 18071, 18102, 18134, 18165, 18196, 18228, 18259, 18290, 18321, 18353, 18384, 18415, 18447, 18478, 18509, 18541, 18572, 18603,  /* 544 - 575*/
                18635, 18666, 18697, 18729, 18760, 18791, 18822, 18854, 18885, 18916, 18948, 18979, 19010, 19042, 19073, 19104, 19136, 19167, 19198, 19230, 19261, 19292, 19323, 19355, 19386, 19417, 19449, 19480, 19511, 19543, 19574, 19605,  /* 576 - 607*/
                19637, 19668, 19699, 19731, 19762, 19793, 19825, 19856, 19887, 19918, 19950, 19981, 20012, 20044, 20075, 20106, 20138, 20169, 20200, 20232, 20263, 20294, 20326, 20357, 20388, 20419, 20451, 20482, 20513, 20545, 20576, 20607,  /* 608 - 639*/
                20639, 20670, 20701, 20733, 20764, 20795, 20827, 20858, 20889, 20921, 20952, 20983, 21014, 21046, 21077, 21108, 21140, 21171, 21202, 21234, 21265, 21296, 21328, 21359, 21390, 21422, 21453, 21484, 21515, 21547, 21578, 21609,  /* 640 - 671*/
                21641, 21672, 21703, 21735, 21766, 21797, 21829, 21860, 21891, 21923, 21954, 21985, 22016, 22048, 22079, 22110, 22142, 22173, 22204, 22236, 22267, 22298, 22330, 22361, 22392, 22424, 22455, 22486, 22518, 22549, 22580, 22611,  /* 672 - 703*/
                22643, 22674, 22705, 22737, 22768, 22799, 22831, 22862, 22893, 22925, 22956, 22987, 23019, 23050, 23081, 23112, 23144, 23175, 23206, 23238, 23269, 23300, 23332, 23363, 23394, 23426, 23457, 23488, 23520, 23551, 23582, 23613,  /* 704 - 735*/
                23645, 23676, 23707, 23739, 23770, 23801, 23833, 23864, 23895, 23927, 23958, 23989, 24021, 24052, 24083, 24115, 24146, 24177, 24208, 24240, 24271, 24302, 24334, 24365, 24396, 24428, 24459, 24490, 24522, 24553, 24584, 24616,  /* 736 - 767*/
                24647, 24678, 24709, 24741, 24772, 24803, 24835, 24866, 24897, 24929, 24960, 24991, 25023, 25054, 25085, 25117, 25148, 25179, 25211, 25242, 25273, 25304, 25336, 25367, 25398, 25430, 25461, 25492, 25524, 25555, 25586, 25618,  /* 768 - 799*/
                25649, 25680, 25712, 25743, 25774, 25805, 25837, 25868, 25899, 25931, 25962, 25993, 26025, 26056, 26087, 26119, 26150, 26181, 26213, 26244, 26275, 26306, 26338, 26369, 26400, 26432, 26463, 26494, 26526, 26557, 26588, 26620,  /* 800 - 831*/
                26651, 26682, 26714, 26745, 26776, 26808, 26839, 26870, 26901, 26933, 26964, 26995, 27027, 27058, 27089, 27121, 27152, 27183, 27215, 27246, 27277, 27309, 27340, 27371, 27402, 27434, 27465, 27496, 27528, 27559, 27590, 27622,  /* 832 - 863*/
                27653, 27684, 27716, 27747, 27778, 27810, 27841, 27872, 27904, 27935, 27966, 27997, 28029, 28060, 28091, 28123, 28154, 28186, 28217, 28248, 28280, 28311, 28342, 28374, 28405, 28437, 28468, 28499, 28531, 28562, 28594, 28625,  /* 864 - 895*/
                28656, 28688, 28719, 28751, 28782, 28814, 28845, 28877, 28908, 28939, 28971, 29002, 29034, 29065, 29097, 29128, 29160, 29191, 29223, 29255, 29286, 29318, 29349, 29381, 29412, 29444, 29475, 29507, 29539, 29570, 29602, 29633,  /* 896 - 927*/
                29665, 29697, 29728, 29760, 29792, 29823, 29855, 29887, 29918, 29950, 29982, 30013, 30045, 30077, 30109, 30140, 30172, 30204, 30236, 30267, 30299, 30331, 30363, 30394, 30426, 30458, 30490, 30522, 30554, 30586, 30617, 30649,  /* 928 - 959*/
                30681, 30713, 30745, 30777, 30809, 30841, 30873, 30905, 30937, 30969, 31001, 31033, 31065, 31097, 31129, 31161, 31193, 31225, 31257, 31289, 31322, 31354, 31386, 31418, 31450, 31483, 31515, 31547, 31579, 31612, 31644, 31676,  /* 960 - 991*/
                31709, 31741, 31774, 31806, 31838, 31871, 31903, 31936, 31968, 32001, 32034, 32066, 32099, 32132, 32165, 32197, 32230, 32263, 32296, 32329, 32362, 32395, 32428, 32462, 32495, 32528, 32562, 32595, 32629, 32663, 32697, 32732,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 61, 114, 163, 211, 258, 303, 347, 391, 434, 477, 519, 561, 603, 644, 684, 725, 765, 805, 844, 884, 923, 962, 1001, 1039, 1078, 1116, 1154, 1192, 1229, 1267, 1305,  /* 0 - 31*/
                1342, 1379, 1416, 1453, 1490, 1527, 1563, 1600, 1636, 1672, 1709, 1745, 1781, 1817, 1853, 1888, 1924, 1959, 1995, 2030, 2066, 2101, 2136, 2171, 2206, 2241, 2276, 2311, 2346, 2381, 2415, 2450,  /* 32 - 63*/
                2484, 2519, 2553, 2587, 2622, 2656, 2690, 2724, 2758, 2792, 2826, 2860, 2894, 2928, 2962, 2995, 3029, 3063, 3096, 3130, 3163, 3197, 3230, 3263, 3297, 3330, 3363, 3396, 3430, 3463, 3496, 3529,  /* 64 - 95*/
                3562, 3595, 3628, 3660, 3693, 3726, 3759, 3791, 3824, 3857, 3889, 3922, 3955, 3987, 4020, 4052, 4084, 4117, 4149, 4182, 4214, 4246, 4278, 4310, 4343, 4375, 4407, 4439, 4471, 4503, 4535, 4567,  /* 96 - 127*/
                4599, 4631, 4663, 4695, 4726, 4758, 4790, 4822, 4853, 4885, 4917, 4948, 4980, 5012, 5043, 5075, 5106, 5138, 5169, 5201, 5232, 5263, 5295, 5326, 5358, 5389, 5420, 5451, 5483, 5514, 5545, 5577,  /* 128 - 159*/
                5608, 5639, 5671, 5702, 5733, 5765, 5796, 5827, 5859, 5890, 5921, 5952, 5984, 6015, 6046, 6078, 6109, 6140, 6172, 6203, 6234, 6266, 6297, 6328, 6360, 6391, 6422, 6453, 6485, 6516, 6547, 6579,  /* 160 - 191*/
                6610, 6641, 6673, 6704, 6735, 6767, 6798, 6829, 6861, 6892, 6923, 6955, 6986, 7017, 7048, 7080, 7111, 7142, 7174, 7205, 7236, 7268, 7299, 7330, 7362, 7393, 7424, 7456, 7487, 7518, 7549, 7581,  /* 192 - 223*/
                7612, 7643, 7675, 7706, 7737, 7769, 7800, 7831, 7863, 7894, 7925, 7957, 7988, 8019, 8050, 8082, 8113, 8144, 8176, 8207, 8238, 8270, 8301, 8332, 8364, 8395, 8426, 8458, 8489, 8520, 8552, 8583,  /* 224 - 255*/
                8614, 8645, 8677, 8708, 8739, 8771, 8802, 8833, 8865, 8896, 8927, 8959, 8990, 9021, 9053, 9084, 9115, 9146, 9178, 9209, 9240, 9272, 9303, 9334, 9366, 9397, 9428, 9460, 9491, 9522, 9554, 9585,  /* 256 - 287*/
                9616, 9648, 9679, 9710, 9741, 9773, 9804, 9835, 9867, 9898, 9929, 9961, 9992, 10023, 10055, 10086, 10117, 10149, 10180, 10211, 10242, 10274, 10305, 10336, 10368, 10399, 10430, 10462, 10493, 10524, 10556, 10587,  /* 288 - 319*/
                10618, 10650, 10681, 10712, 10743, 10775, 10806, 10837, 10869, 10900, 10931, 10963, 10994, 11025, 11057, 11088, 11119, 11151, 11182, 11213, 11245, 11276, 11307, 11338, 11370, 11401, 11432, 11464, 11495, 11526, 11558, 11589,  /* 320 - 351*/
                11620, 11652, 11683, 11714, 11746, 11777, 11808, 11839, 11871, 11902, 11933, 11965, 11996, 12027, 12059, 12090, 12121, 12153, 12184, 12215, 12247, 12278, 12309, 12340, 12372, 12403, 12434, 12466, 12497, 12528, 12560, 12591,  /* 352 - 383*/
                12622, 12654, 12685, 12716, 12748, 12779, 12810, 12842, 12873, 12904, 12935, 12967, 12998, 13029, 13061, 13092, 13123, 13155, 13186, 13217, 13249, 13280, 13311, 13343, 13374, 13405, 13436, 13468, 13499, 13530, 13562, 13593,  /* 384 - 415*/
                13624, 13656, 13687, 13718, 13750, 13781, 13812, 13844, 13875, 13906, 13938, 13969, 14000, 14031, 14063, 14094, 14125, 14157, 14188, 14219, 14251, 14282, 14313, 14345, 14376, 14407, 14439, 14470, 14501, 14532, 14564, 14595,  /* 416 - 447*/
                14626, 14658, 14689, 14720, 14752, 14783, 14814, 14846, 14877, 14908, 14940, 14971, 15002, 15033, 15065, 15096, 15127, 15159, 15190, 15221, 15253, 15284, 15315, 15347, 15378, 15409, 15441, 15472, 15503, 15535, 15566, 15597,  /* 448 - 479*/
                15628, 15660, 15691, 15722, 15754, 15785, 15816, 15848, 15879, 15910, 15942, 15973, 16004, 16036, 16067, 16098, 16129, 16161, 16192, 16223, 16255, 16286, 16317, 16349, 16380, 16411, 16443, 16474, 16505, 16537, 16568, 16599,  /* 480 - 511*/
                16631, 16662, 16693, 16724, 16756, 16787, 16818, 16850, 16881, 16912, 16944, 16975, 17006, 17038, 17069, 17100, 17132, 17163, 17194, 17225, 17257, 17288, 17319, 17351, 17382, 17413, 17445, 17476, 17507, 17539, 17570, 17601,  /* 512 - 543*/
                17633, 17664, 17695, 17726, 17758, 17789, 17820, 17852, 17883, 17914, 17946, 17977, 18008, 18040, 18071, 18102, 18134, 18165, 18196, 18228, 18259, 18290, 18321, 18353, 18384, 18415, 18447, 18478, 18509, 18541, 18572, 18603,  /* 544 - 575*/
                18635, 18666, 18697, 18729, 18760, 18791, 18822, 18854, 18885, 18916, 18948, 18979, 19010, 19042, 19073, 19104, 19136, 19167, 19198, 19230, 19261, 19292, 19323, 19355, 19386, 19417, 19449, 19480, 19511, 19543, 19574, 19605,  /* 576 - 607*/
                19637, 19668, 19699, 19731, 19762, 19793, 19825, 19856, 19887, 19918, 19950, 19981, 20012, 20044, 20075, 20106, 20138, 20169, 20200, 20232, 20263, 20294, 20326, 20357, 20388, 20419, 20451, 20482, 20513, 20545, 20576, 20607,  /* 608 - 639*/
                20639, 20670, 20701, 20733, 20764, 20795, 20827, 20858, 20889, 20921, 20952, 20983, 21014, 21046, 21077, 21108, 21140, 21171, 21202, 21234, 21265, 21296, 21328, 21359, 21390, 21422, 21453, 21484, 21515, 21547, 21578, 21609,  /* 640 - 671*/
                21641, 21672, 21703, 21735, 21766, 21797, 21829, 21860, 21891, 21923, 21954, 21985, 22016, 22048, 22079, 22110, 22142, 22173, 22204, 22236, 22267, 22298, 22330, 22361, 22392, 22424, 22455, 22486, 22518, 22549, 22580, 22611,  /* 672 - 703*/
                22643, 22674, 22705, 22737, 22768, 22799, 22831, 22862, 22893, 22925, 22956, 22987, 23019, 23050, 23081, 23112, 23144, 23175, 23206, 23238, 23269, 23300, 23332, 23363, 23394, 23426, 23457, 23488, 23520, 23551, 23582, 23613,  /* 704 - 735*/
                23645, 23676, 23707, 23739, 23770, 23801, 23833, 23864, 23895, 23927, 23958, 23989, 24021, 24052, 24083, 24115, 24146, 24177, 24208, 24240, 24271, 24302, 24334, 24365, 24396, 24428, 24459, 24490, 24522, 24553, 24584, 24616,  /* 736 - 767*/
                24647, 24678, 24709, 24741, 24772, 24803, 24835, 24866, 24897, 24929, 24960, 24991, 25023, 25054, 25085, 25117, 25148, 25179, 25211, 25242, 25273, 25304, 25336, 25367, 25398, 25430, 25461, 25492, 25524, 25555, 25586, 25618,  /* 768 - 799*/
                25649, 25680, 25712, 25743, 25774, 25805, 25837, 25868, 25899, 25931, 25962, 25993, 26025, 26056, 26087, 26119, 26150, 26181, 26213, 26244, 26275, 26306, 26338, 26369, 26400, 26432, 26463, 26494, 26526, 26557, 26588, 26620,  /* 800 - 831*/
                26651, 26682, 26714, 26745, 26776, 26808, 26839, 26870, 26901, 26933, 26964, 26995, 27027, 27058, 27089, 27121, 27152, 27183, 27215, 27246, 27277, 27309, 27340, 27371, 27402, 27434, 27465, 27496, 27528, 27559, 27590, 27622,  /* 832 - 863*/
                27653, 27684, 27716, 27747, 27778, 27810, 27841, 27872, 27904, 27935, 27966, 27997, 28029, 28060, 28091, 28123, 28154, 28186, 28217, 28248, 28280, 28311, 28342, 28374, 28405, 28437, 28468, 28499, 28531, 28562, 28594, 28625,  /* 864 - 895*/
                28656, 28688, 28719, 28751, 28782, 28814, 28845, 28877, 28908, 28939, 28971, 29002, 29034, 29065, 29097, 29128, 29160, 29191, 29223, 29255, 29286, 29318, 29349, 29381, 29412, 29444, 29475, 29507, 29539, 29570, 29602, 29633,  /* 896 - 927*/
                29665, 29697, 29728, 29760, 29792, 29823, 29855, 29887, 29918, 29950, 29982, 30013, 30045, 30077, 30109, 30140, 30172, 30204, 30236, 30267, 30299, 30331, 30363, 30394, 30426, 30458, 30490, 30522, 30554, 30586, 30617, 30649,  /* 928 - 959*/
                30681, 30713, 30745, 30777, 30809, 30841, 30873, 30905, 30937, 30969, 31001, 31033, 31065, 31097, 31129, 31161, 31193, 31225, 31257, 31289, 31322, 31354, 31386, 31418, 31450, 31483, 31515, 31547, 31579, 31612, 31644, 31676,  /* 960 - 991*/
                31709, 31741, 31774, 31806, 31838, 31871, 31903, 31936, 31968, 32001, 32034, 32066, 32099, 32132, 32165, 32197, 32230, 32263, 32296, 32329, 32362, 32395, 32428, 32462, 32495, 32528, 32562, 32595, 32629, 32663, 32697, 32732,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 80, 144, 203, 259, 313, 365, 416, 466, 514, 562, 609, 656, 702, 747, 792, 836, 880, 923, 966, 1009, 1052, 1094, 1135, 1177, 1218, 1259, 1300, 1340, 1381, 1421, 1461,  /* 0 - 31*/
                1500, 1540, 1579, 1618, 1657, 1696, 1734, 1773, 1811, 1849, 1887, 1925, 1963, 2000, 2038, 2075, 2112, 2149, 2186, 2223, 2260, 2296, 2333, 2369, 2406, 2442, 2478, 2514, 2550, 2586, 2621, 2657,  /* 32 - 63*/
                2693, 2728, 2763, 2799, 2834, 2869, 2904, 2939, 2974, 3009, 3043, 3078, 3113, 3147, 3182, 3216, 3250, 3284, 3319, 3353, 3387, 3421, 3455, 3489, 3522, 3556, 3590, 3623, 3657, 3690, 3724, 3757,  /* 64 - 95*/
                3791, 3824, 3857, 3890, 3923, 3957, 3990, 4023, 4055, 4088, 4121, 4154, 4187, 4219, 4252, 4285, 4317, 4350, 4382, 4414, 4447, 4479, 4511, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800,  /* 96 - 127*/
                4832, 4864, 4895, 4927, 4959, 4990, 5022, 5054, 5085, 5117, 5148, 5180, 5211, 5243, 5274, 5305, 5336, 5368, 5399, 5430, 5461, 5492, 5523, 5554, 5586, 5616, 5647, 5678, 5709, 5740, 5771, 5802,  /* 128 - 159*/
                5833, 5864, 5895, 5926, 5957, 5988, 6019, 6050, 6081, 6112, 6143, 6174, 6205, 6236, 6267, 6298, 6329, 6360, 6391, 6422, 6453, 6484, 6515, 6546, 6577, 6608, 6639, 6670, 6701, 6732, 6763, 6794,  /* 160 - 191*/
                6825, 6856, 6887, 6918, 6949, 6980, 7011, 7042, 7073, 7104, 7135, 7166, 7197, 7228, 7259, 7290, 7321, 7352, 7383, 7414, 7445, 7476, 7507, 7538, 7569, 7600, 7631, 7662, 7693, 7724, 7755, 7786,  /* 192 - 223*/
                7817, 7848, 7879, 7910, 7941, 7972, 8003, 8034, 8065, 8096, 8127, 8158, 8189, 8220, 8251, 8282, 8313, 8344, 8375, 8406, 8437, 8468, 8499, 8530, 8561, 8592, 8623, 8654, 8685, 8716, 8747, 8778,  /* 224 - 255*/
                8809, 8840, 8871, 8902, 8933, 8964, 8995, 9026, 9057, 9088, 9119, 9150, 9181, 9212, 9243, 9274, 9305, 9336, 9367, 9398, 9429, 9460, 9491, 9522, 9553, 9584, 9615, 9646, 9677, 9708, 9739, 9770,  /* 256 - 287*/
                9801, 9832, 9863, 9894, 9925, 9956, 9987, 10018, 10049, 10080, 10111, 10142, 10173, 10204, 10235, 10266, 10297, 10328, 10359, 10390, 10421, 10452, 10483, 10514, 10545, 10576, 10607, 10638, 10669, 10700, 10731, 10762,  /* 288 - 319*/
                10793, 10824, 10855, 10886, 10917, 10948, 10979, 11010, 11041, 11072, 11103, 11134, 11165, 11196, 11227, 11258, 11289, 11320, 11351, 11382, 11413, 11444, 11475, 11506, 11537, 11568, 11599, 11630, 11661, 11692, 11723, 11754,  /* 320 - 351*/
                11785, 11816, 11847, 11878, 11909, 11940, 11971, 12002, 12033, 12064, 12095, 12126, 12157, 12188, 12219, 12250, 12281, 12312, 12343, 12374, 12405, 12436, 12467, 12498, 12529, 12560, 12591, 12622, 12653, 12684, 12715, 12746,  /* 352 - 383*/
                12777, 12808, 12839, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13180, 13211, 13242, 13273, 13304, 13335, 13366, 13397, 13428, 13459, 13490, 13521, 13552, 13583, 13614, 13645, 13676, 13707, 13738,  /* 384 - 415*/
                13769, 13800, 13831, 13862, 13893, 13924, 13955, 13986, 14017, 14048, 14079, 14110, 14141, 14172, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513, 14544, 14575, 14606, 14637, 14668, 14699, 14730,  /* 416 - 447*/
                14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15071, 15102, 15133, 15164, 15195, 15226, 15257, 15288, 15319, 15350, 15381, 15412, 15443, 15474, 15505, 15536, 15567, 15598, 15629, 15660, 15691, 15722,  /* 448 - 479*/
                15753, 15784, 15815, 15846, 15877, 15908, 15939, 15970, 16001, 16032, 16063, 16094, 16125, 16156, 16187, 16218, 16249, 16280, 16311, 16342, 16373, 16404, 16435, 16466, 16497, 16528, 16559, 16590, 16621, 16652, 16683, 16714,  /* 480 - 511*/
                16745, 16775, 16806, 16837, 16868, 16899, 16930, 16961, 16992, 17023, 17054, 17085, 17116, 17147, 17178, 17209, 17240, 17271, 17302, 17333, 17364, 17395, 17426, 17457, 17488, 17519, 17550, 17581, 17612, 17643, 17674, 17705,  /* 512 - 543*/
                17736, 17767, 17798, 17829, 17860, 17891, 17922, 17953, 17984, 18015, 18046, 18077, 18108, 18139, 18170, 18201, 18232, 18263, 18294, 18325, 18356, 18387, 18418, 18449, 18480, 18511, 18542, 18573, 18604, 18635, 18666, 18697,  /* 544 - 575*/
                18728, 18759, 18790, 18821, 18852, 18883, 18914, 18945, 18976, 19007, 19038, 19069, 19100, 19131, 19162, 19193, 19224, 19255, 19286, 19317, 19348, 19379, 19410, 19441, 19472, 19503, 19534, 19565, 19596, 19627, 19658, 19689,  /* 576 - 607*/
                19720, 19751, 19782, 19813, 19844, 19875, 19906, 19937, 19968, 19999, 20030, 20061, 20092, 20123, 20154, 20185, 20216, 20247, 20278, 20309, 20340, 20371, 20402, 20433, 20464, 20495, 20526, 20557, 20588, 20619, 20650, 20681,  /* 608 - 639*/
                20712, 20743, 20774, 20805, 20836, 20867, 20898, 20929, 20960, 20991, 21022, 21053, 21084, 21115, 21146, 21177, 21208, 21239, 21270, 21301, 21332, 21363, 21394, 21425, 21456, 21487, 21518, 21549, 21580, 21611, 21642, 21673,  /* 640 - 671*/
                21704, 21735, 21766, 21797, 21828, 21859, 21890, 21921, 21952, 21983, 22014, 22045, 22076, 22107, 22138, 22169, 22200, 22231, 22262, 22293, 22324, 22355, 22386, 22417, 22448, 22479, 22510, 22541, 22572, 22603, 22634, 22665,  /* 672 - 703*/
                22696, 22727, 22758, 22789, 22820, 22851, 22882, 22913, 22944, 22975, 23006, 23037, 23068, 23099, 23130, 23161, 23192, 23223, 23254, 23285, 23316, 23347, 23378, 23409, 23440, 23471, 23502, 23533, 23564, 23595, 23626, 23657,  /* 704 - 735*/
                23688, 23719, 23750, 23781, 23812, 23843, 23874, 23905, 23936, 23967, 23998, 24029, 24060, 24091, 24122, 24153, 24184, 24215, 24246, 24277, 24308, 24339, 24370, 24401, 24432, 24463, 24494, 24525, 24556, 24587, 24618, 24649,  /* 736 - 767*/
                24680, 24711, 24742, 24773, 24804, 24835, 24866, 24897, 24928, 24959, 24990, 25021, 25052, 25083, 25114, 25145, 25176, 25207, 25238, 25269, 25300, 25331, 25362, 25393, 25424, 25455, 25486, 25517, 25548, 25579, 25610, 25641,  /* 768 - 799*/
                25672, 25703, 25734, 25765, 25796, 25827, 25858, 25889, 25920, 25951, 25982, 26013, 26044, 26075, 26106, 26137, 26168, 26199, 26230, 26261, 26292, 26323, 26354, 26385, 26416, 26447, 26478, 26509, 26540, 26571, 26602, 26633,  /* 800 - 831*/
                26664, 26695, 26726, 26757, 26788, 26819, 26850, 26881, 26912, 26943, 26974, 27005, 27036, 27067, 27098, 27129, 27160, 27191, 27222, 27253, 27284, 27315, 27346, 27377, 27408, 27439, 27470, 27501, 27532, 27563, 27594, 27625,  /* 832 - 863*/
                27656, 27687, 27718, 27749, 27780, 27811, 27842, 27873, 27904, 27935, 27966, 27997, 28028, 28059, 28090, 28121, 28152, 28183, 28214, 28245, 28276, 28307, 28338, 28369, 28400, 28431, 28463, 28494, 28525, 28556, 28587, 28618,  /* 864 - 895*/
                28649, 28681, 28712, 28743, 28774, 28805, 28837, 28868, 28899, 28930, 28961, 28993, 29024, 29055, 29086, 29118, 29149, 29180, 29212, 29243, 29274, 29306, 29337, 29368, 29400, 29431, 29462, 29494, 29525, 29557, 29588, 29620,  /* 896 - 927*/
                29651, 29682, 29714, 29745, 29777, 29808, 29840, 29871, 29903, 29934, 29966, 29998, 30029, 30061, 30092, 30124, 30155, 30187, 30219, 30250, 30282, 30314, 30345, 30377, 30409, 30441, 30472, 30504, 30536, 30568, 30600, 30631,  /* 928 - 959*/
                30663, 30695, 30727, 30759, 30791, 30823, 30855, 30887, 30919, 30951, 30983, 31015, 31047, 31079, 31111, 31143, 31175, 31207, 31239, 31272, 31304, 31336, 31368, 31401, 31433, 31465, 31498, 31530, 31562, 31595, 31627, 31660,  /* 960 - 991*/
                31692, 31725, 31757, 31790, 31823, 31855, 31888, 31921, 31954, 31987, 32020, 32052, 32086, 32119, 32152, 32185, 32218, 32251, 32285, 32318, 32352, 32385, 32419, 32453, 32487, 32521, 32555, 32589, 32624, 32659, 32694, 32730,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 80, 144, 203, 259, 313, 365, 416, 466, 514, 562, 609, 656, 702, 747, 792, 836, 880, 923, 966, 1009, 1052, 1094, 1135, 1177, 1218, 1259, 1300, 1340, 1381, 1421, 1461,  /* 0 - 31*/
                1500, 1540, 1579, 1618, 1657, 1696, 1734, 1773, 1811, 1849, 1887, 1925, 1963, 2000, 2038, 2075, 2112, 2149, 2186, 2223, 2260, 2296, 2333, 2369, 2406, 2442, 2478, 2514, 2550, 2586, 2621, 2657,  /* 32 - 63*/
                2693, 2728, 2763, 2799, 2834, 2869, 2904, 2939, 2974, 3009, 3043, 3078, 3113, 3147, 3182, 3216, 3250, 3284, 3319, 3353, 3387, 3421, 3455, 3489, 3522, 3556, 3590, 3623, 3657, 3690, 3724, 3757,  /* 64 - 95*/
                3791, 3824, 3857, 3890, 3923, 3957, 3990, 4023, 4055, 4088, 4121, 4154, 4187, 4219, 4252, 4285, 4317, 4350, 4382, 4414, 4447, 4479, 4511, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800,  /* 96 - 127*/
                4832, 4864, 4895, 4927, 4959, 4990, 5022, 5054, 5085, 5117, 5148, 5180, 5211, 5243, 5274, 5305, 5336, 5368, 5399, 5430, 5461, 5492, 5523, 5554, 5586, 5616, 5647, 5678, 5709, 5740, 5771, 5802,  /* 128 - 159*/
                5833, 5864, 5895, 5926, 5957, 5988, 6019, 6050, 6081, 6112, 6143, 6174, 6205, 6236, 6267, 6298, 6329, 6360, 6391, 6422, 6453, 6484, 6515, 6546, 6577, 6608, 6639, 6670, 6701, 6732, 6763, 6794,  /* 160 - 191*/
                6825, 6856, 6887, 6918, 6949, 6980, 7011, 7042, 7073, 7104, 7135, 7166, 7197, 7228, 7259, 7290, 7321, 7352, 7383, 7414, 7445, 7476, 7507, 7538, 7569, 7600, 7631, 7662, 7693, 7724, 7755, 7786,  /* 192 - 223*/
                7817, 7848, 7879, 7910, 7941, 7972, 8003, 8034, 8065, 8096, 8127, 8158, 8189, 8220, 8251, 8282, 8313, 8344, 8375, 8406, 8437, 8468, 8499, 8530, 8561, 8592, 8623, 8654, 8685, 8716, 8747, 8778,  /* 224 - 255*/
                8809, 8840, 8871, 8902, 8933, 8964, 8995, 9026, 9057, 9088, 9119, 9150, 9181, 9212, 9243, 9274, 9305, 9336, 9367, 9398, 9429, 9460, 9491, 9522, 9553, 9584, 9615, 9646, 9677, 9708, 9739, 9770,  /* 256 - 287*/
                9801, 9832, 9863, 9894, 9925, 9956, 9987, 10018, 10049, 10080, 10111, 10142, 10173, 10204, 10235, 10266, 10297, 10328, 10359, 10390, 10421, 10452, 10483, 10514, 10545, 10576, 10607, 10638, 10669, 10700, 10731, 10762,  /* 288 - 319*/
                10793, 10824, 10855, 10886, 10917, 10948, 10979, 11010, 11041, 11072, 11103, 11134, 11165, 11196, 11227, 11258, 11289, 11320, 11351, 11382, 11413, 11444, 11475, 11506, 11537, 11568, 11599, 11630, 11661, 11692, 11723, 11754,  /* 320 - 351*/
                11785, 11816, 11847, 11878, 11909, 11940, 11971, 12002, 12033, 12064, 12095, 12126, 12157, 12188, 12219, 12250, 12281, 12312, 12343, 12374, 12405, 12436, 12467, 12498, 12529, 12560, 12591, 12622, 12653, 12684, 12715, 12746,  /* 352 - 383*/
                12777, 12808, 12839, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13180, 13211, 13242, 13273, 13304, 13335, 13366, 13397, 13428, 13459, 13490, 13521, 13552, 13583, 13614, 13645, 13676, 13707, 13738,  /* 384 - 415*/
                13769, 13800, 13831, 13862, 13893, 13924, 13955, 13986, 14017, 14048, 14079, 14110, 14141, 14172, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513, 14544, 14575, 14606, 14637, 14668, 14699, 14730,  /* 416 - 447*/
                14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15071, 15102, 15133, 15164, 15195, 15226, 15257, 15288, 15319, 15350, 15381, 15412, 15443, 15474, 15505, 15536, 15567, 15598, 15629, 15660, 15691, 15722,  /* 448 - 479*/
                15753, 15784, 15815, 15846, 15877, 15908, 15939, 15970, 16001, 16032, 16063, 16094, 16125, 16156, 16187, 16218, 16249, 16280, 16311, 16342, 16373, 16404, 16435, 16466, 16497, 16528, 16559, 16590, 16621, 16652, 16683, 16714,  /* 480 - 511*/
                16745, 16775, 16806, 16837, 16868, 16899, 16930, 16961, 16992, 17023, 17054, 17085, 17116, 17147, 17178, 17209, 17240, 17271, 17302, 17333, 17364, 17395, 17426, 17457, 17488, 17519, 17550, 17581, 17612, 17643, 17674, 17705,  /* 512 - 543*/
                17736, 17767, 17798, 17829, 17860, 17891, 17922, 17953, 17984, 18015, 18046, 18077, 18108, 18139, 18170, 18201, 18232, 18263, 18294, 18325, 18356, 18387, 18418, 18449, 18480, 18511, 18542, 18573, 18604, 18635, 18666, 18697,  /* 544 - 575*/
                18728, 18759, 18790, 18821, 18852, 18883, 18914, 18945, 18976, 19007, 19038, 19069, 19100, 19131, 19162, 19193, 19224, 19255, 19286, 19317, 19348, 19379, 19410, 19441, 19472, 19503, 19534, 19565, 19596, 19627, 19658, 19689,  /* 576 - 607*/
                19720, 19751, 19782, 19813, 19844, 19875, 19906, 19937, 19968, 19999, 20030, 20061, 20092, 20123, 20154, 20185, 20216, 20247, 20278, 20309, 20340, 20371, 20402, 20433, 20464, 20495, 20526, 20557, 20588, 20619, 20650, 20681,  /* 608 - 639*/
                20712, 20743, 20774, 20805, 20836, 20867, 20898, 20929, 20960, 20991, 21022, 21053, 21084, 21115, 21146, 21177, 21208, 21239, 21270, 21301, 21332, 21363, 21394, 21425, 21456, 21487, 21518, 21549, 21580, 21611, 21642, 21673,  /* 640 - 671*/
                21704, 21735, 21766, 21797, 21828, 21859, 21890, 21921, 21952, 21983, 22014, 22045, 22076, 22107, 22138, 22169, 22200, 22231, 22262, 22293, 22324, 22355, 22386, 22417, 22448, 22479, 22510, 22541, 22572, 22603, 22634, 22665,  /* 672 - 703*/
                22696, 22727, 22758, 22789, 22820, 22851, 22882, 22913, 22944, 22975, 23006, 23037, 23068, 23099, 23130, 23161, 23192, 23223, 23254, 23285, 23316, 23347, 23378, 23409, 23440, 23471, 23502, 23533, 23564, 23595, 23626, 23657,  /* 704 - 735*/
                23688, 23719, 23750, 23781, 23812, 23843, 23874, 23905, 23936, 23967, 23998, 24029, 24060, 24091, 24122, 24153, 24184, 24215, 24246, 24277, 24308, 24339, 24370, 24401, 24432, 24463, 24494, 24525, 24556, 24587, 24618, 24649,  /* 736 - 767*/
                24680, 24711, 24742, 24773, 24804, 24835, 24866, 24897, 24928, 24959, 24990, 25021, 25052, 25083, 25114, 25145, 25176, 25207, 25238, 25269, 25300, 25331, 25362, 25393, 25424, 25455, 25486, 25517, 25548, 25579, 25610, 25641,  /* 768 - 799*/
                25672, 25703, 25734, 25765, 25796, 25827, 25858, 25889, 25920, 25951, 25982, 26013, 26044, 26075, 26106, 26137, 26168, 26199, 26230, 26261, 26292, 26323, 26354, 26385, 26416, 26447, 26478, 26509, 26540, 26571, 26602, 26633,  /* 800 - 831*/
                26664, 26695, 26726, 26757, 26788, 26819, 26850, 26881, 26912, 26943, 26974, 27005, 27036, 27067, 27098, 27129, 27160, 27191, 27222, 27253, 27284, 27315, 27346, 27377, 27408, 27439, 27470, 27501, 27532, 27563, 27594, 27625,  /* 832 - 863*/
                27656, 27687, 27718, 27749, 27780, 27811, 27842, 27873, 27904, 27935, 27966, 27997, 28028, 28059, 28090, 28121, 28152, 28183, 28214, 28245, 28276, 28307, 28338, 28369, 28400, 28431, 28463, 28494, 28525, 28556, 28587, 28618,  /* 864 - 895*/
                28649, 28681, 28712, 28743, 28774, 28805, 28837, 28868, 28899, 28930, 28961, 28993, 29024, 29055, 29086, 29118, 29149, 29180, 29212, 29243, 29274, 29306, 29337, 29368, 29400, 29431, 29462, 29494, 29525, 29557, 29588, 29620,  /* 896 - 927*/
                29651, 29682, 29714, 29745, 29777, 29808, 29840, 29871, 29903, 29934, 29966, 29998, 30029, 30061, 30092, 30124, 30155, 30187, 30219, 30250, 30282, 30314, 30345, 30377, 30409, 30441, 30472, 30504, 30536, 30568, 30600, 30631,  /* 928 - 959*/
                30663, 30695, 30727, 30759, 30791, 30823, 30855, 30887, 30919, 30951, 30983, 31015, 31047, 31079, 31111, 31143, 31175, 31207, 31239, 31272, 31304, 31336, 31368, 31401, 31433, 31465, 31498, 31530, 31562, 31595, 31627, 31660,  /* 960 - 991*/
                31692, 31725, 31757, 31790, 31823, 31855, 31888, 31921, 31954, 31987, 32020, 32052, 32086, 32119, 32152, 32185, 32218, 32251, 32285, 32318, 32352, 32385, 32419, 32453, 32487, 32521, 32555, 32589, 32624, 32659, 32694, 32730,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 80, 144, 203, 259, 313, 365, 416, 466, 514, 562, 609, 656, 702, 747, 792, 836, 880, 923, 966, 1009, 1052, 1094, 1135, 1177, 1218, 1259, 1300, 1340, 1381, 1421, 1461,  /* 0 - 31*/
                1500, 1540, 1579, 1618, 1657, 1696, 1734, 1773, 1811, 1849, 1887, 1925, 1963, 2000, 2038, 2075, 2112, 2149, 2186, 2223, 2260, 2296, 2333, 2369, 2406, 2442, 2478, 2514, 2550, 2586, 2621, 2657,  /* 32 - 63*/
                2693, 2728, 2763, 2799, 2834, 2869, 2904, 2939, 2974, 3009, 3043, 3078, 3113, 3147, 3182, 3216, 3250, 3284, 3319, 3353, 3387, 3421, 3455, 3489, 3522, 3556, 3590, 3623, 3657, 3690, 3724, 3757,  /* 64 - 95*/
                3791, 3824, 3857, 3890, 3923, 3957, 3990, 4023, 4055, 4088, 4121, 4154, 4187, 4219, 4252, 4285, 4317, 4350, 4382, 4414, 4447, 4479, 4511, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800,  /* 96 - 127*/
                4832, 4864, 4895, 4927, 4959, 4990, 5022, 5054, 5085, 5117, 5148, 5180, 5211, 5243, 5274, 5305, 5336, 5368, 5399, 5430, 5461, 5492, 5523, 5554, 5586, 5616, 5647, 5678, 5709, 5740, 5771, 5802,  /* 128 - 159*/
                5833, 5864, 5895, 5926, 5957, 5988, 6019, 6050, 6081, 6112, 6143, 6174, 6205, 6236, 6267, 6298, 6329, 6360, 6391, 6422, 6453, 6484, 6515, 6546, 6577, 6608, 6639, 6670, 6701, 6732, 6763, 6794,  /* 160 - 191*/
                6825, 6856, 6887, 6918, 6949, 6980, 7011, 7042, 7073, 7104, 7135, 7166, 7197, 7228, 7259, 7290, 7321, 7352, 7383, 7414, 7445, 7476, 7507, 7538, 7569, 7600, 7631, 7662, 7693, 7724, 7755, 7786,  /* 192 - 223*/
                7817, 7848, 7879, 7910, 7941, 7972, 8003, 8034, 8065, 8096, 8127, 8158, 8189, 8220, 8251, 8282, 8313, 8344, 8375, 8406, 8437, 8468, 8499, 8530, 8561, 8592, 8623, 8654, 8685, 8716, 8747, 8778,  /* 224 - 255*/
                8809, 8840, 8871, 8902, 8933, 8964, 8995, 9026, 9057, 9088, 9119, 9150, 9181, 9212, 9243, 9274, 9305, 9336, 9367, 9398, 9429, 9460, 9491, 9522, 9553, 9584, 9615, 9646, 9677, 9708, 9739, 9770,  /* 256 - 287*/
                9801, 9832, 9863, 9894, 9925, 9956, 9987, 10018, 10049, 10080, 10111, 10142, 10173, 10204, 10235, 10266, 10297, 10328, 10359, 10390, 10421, 10452, 10483, 10514, 10545, 10576, 10607, 10638, 10669, 10700, 10731, 10762,  /* 288 - 319*/
                10793, 10824, 10855, 10886, 10917, 10948, 10979, 11010, 11041, 11072, 11103, 11134, 11165, 11196, 11227, 11258, 11289, 11320, 11351, 11382, 11413, 11444, 11475, 11506, 11537, 11568, 11599, 11630, 11661, 11692, 11723, 11754,  /* 320 - 351*/
                11785, 11816, 11847, 11878, 11909, 11940, 11971, 12002, 12033, 12064, 12095, 12126, 12157, 12188, 12219, 12250, 12281, 12312, 12343, 12374, 12405, 12436, 12467, 12498, 12529, 12560, 12591, 12622, 12653, 12684, 12715, 12746,  /* 352 - 383*/
                12777, 12808, 12839, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13180, 13211, 13242, 13273, 13304, 13335, 13366, 13397, 13428, 13459, 13490, 13521, 13552, 13583, 13614, 13645, 13676, 13707, 13738,  /* 384 - 415*/
                13769, 13800, 13831, 13862, 13893, 13924, 13955, 13986, 14017, 14048, 14079, 14110, 14141, 14172, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513, 14544, 14575, 14606, 14637, 14668, 14699, 14730,  /* 416 - 447*/
                14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15071, 15102, 15133, 15164, 15195, 15226, 15257, 15288, 15319, 15350, 15381, 15412, 15443, 15474, 15505, 15536, 15567, 15598, 15629, 15660, 15691, 15722,  /* 448 - 479*/
                15753, 15784, 15815, 15846, 15877, 15908, 15939, 15970, 16001, 16032, 16063, 16094, 16125, 16156, 16187, 16218, 16249, 16280, 16311, 16342, 16373, 16404, 16435, 16466, 16497, 16528, 16559, 16590, 16621, 16652, 16683, 16714,  /* 480 - 511*/
                16745, 16775, 16806, 16837, 16868, 16899, 16930, 16961, 16992, 17023, 17054, 17085, 17116, 17147, 17178, 17209, 17240, 17271, 17302, 17333, 17364, 17395, 17426, 17457, 17488, 17519, 17550, 17581, 17612, 17643, 17674, 17705,  /* 512 - 543*/
                17736, 17767, 17798, 17829, 17860, 17891, 17922, 17953, 17984, 18015, 18046, 18077, 18108, 18139, 18170, 18201, 18232, 18263, 18294, 18325, 18356, 18387, 18418, 18449, 18480, 18511, 18542, 18573, 18604, 18635, 18666, 18697,  /* 544 - 575*/
                18728, 18759, 18790, 18821, 18852, 18883, 18914, 18945, 18976, 19007, 19038, 19069, 19100, 19131, 19162, 19193, 19224, 19255, 19286, 19317, 19348, 19379, 19410, 19441, 19472, 19503, 19534, 19565, 19596, 19627, 19658, 19689,  /* 576 - 607*/
                19720, 19751, 19782, 19813, 19844, 19875, 19906, 19937, 19968, 19999, 20030, 20061, 20092, 20123, 20154, 20185, 20216, 20247, 20278, 20309, 20340, 20371, 20402, 20433, 20464, 20495, 20526, 20557, 20588, 20619, 20650, 20681,  /* 608 - 639*/
                20712, 20743, 20774, 20805, 20836, 20867, 20898, 20929, 20960, 20991, 21022, 21053, 21084, 21115, 21146, 21177, 21208, 21239, 21270, 21301, 21332, 21363, 21394, 21425, 21456, 21487, 21518, 21549, 21580, 21611, 21642, 21673,  /* 640 - 671*/
                21704, 21735, 21766, 21797, 21828, 21859, 21890, 21921, 21952, 21983, 22014, 22045, 22076, 22107, 22138, 22169, 22200, 22231, 22262, 22293, 22324, 22355, 22386, 22417, 22448, 22479, 22510, 22541, 22572, 22603, 22634, 22665,  /* 672 - 703*/
                22696, 22727, 22758, 22789, 22820, 22851, 22882, 22913, 22944, 22975, 23006, 23037, 23068, 23099, 23130, 23161, 23192, 23223, 23254, 23285, 23316, 23347, 23378, 23409, 23440, 23471, 23502, 23533, 23564, 23595, 23626, 23657,  /* 704 - 735*/
                23688, 23719, 23750, 23781, 23812, 23843, 23874, 23905, 23936, 23967, 23998, 24029, 24060, 24091, 24122, 24153, 24184, 24215, 24246, 24277, 24308, 24339, 24370, 24401, 24432, 24463, 24494, 24525, 24556, 24587, 24618, 24649,  /* 736 - 767*/
                24680, 24711, 24742, 24773, 24804, 24835, 24866, 24897, 24928, 24959, 24990, 25021, 25052, 25083, 25114, 25145, 25176, 25207, 25238, 25269, 25300, 25331, 25362, 25393, 25424, 25455, 25486, 25517, 25548, 25579, 25610, 25641,  /* 768 - 799*/
                25672, 25703, 25734, 25765, 25796, 25827, 25858, 25889, 25920, 25951, 25982, 26013, 26044, 26075, 26106, 26137, 26168, 26199, 26230, 26261, 26292, 26323, 26354, 26385, 26416, 26447, 26478, 26509, 26540, 26571, 26602, 26633,  /* 800 - 831*/
                26664, 26695, 26726, 26757, 26788, 26819, 26850, 26881, 26912, 26943, 26974, 27005, 27036, 27067, 27098, 27129, 27160, 27191, 27222, 27253, 27284, 27315, 27346, 27377, 27408, 27439, 27470, 27501, 27532, 27563, 27594, 27625,  /* 832 - 863*/
                27656, 27687, 27718, 27749, 27780, 27811, 27842, 27873, 27904, 27935, 27966, 27997, 28028, 28059, 28090, 28121, 28152, 28183, 28214, 28245, 28276, 28307, 28338, 28369, 28400, 28431, 28463, 28494, 28525, 28556, 28587, 28618,  /* 864 - 895*/
                28649, 28681, 28712, 28743, 28774, 28805, 28837, 28868, 28899, 28930, 28961, 28993, 29024, 29055, 29086, 29118, 29149, 29180, 29212, 29243, 29274, 29306, 29337, 29368, 29400, 29431, 29462, 29494, 29525, 29557, 29588, 29620,  /* 896 - 927*/
                29651, 29682, 29714, 29745, 29777, 29808, 29840, 29871, 29903, 29934, 29966, 29998, 30029, 30061, 30092, 30124, 30155, 30187, 30219, 30250, 30282, 30314, 30345, 30377, 30409, 30441, 30472, 30504, 30536, 30568, 30600, 30631,  /* 928 - 959*/
                30663, 30695, 30727, 30759, 30791, 30823, 30855, 30887, 30919, 30951, 30983, 31015, 31047, 31079, 31111, 31143, 31175, 31207, 31239, 31272, 31304, 31336, 31368, 31401, 31433, 31465, 31498, 31530, 31562, 31595, 31627, 31660,  /* 960 - 991*/
                31692, 31725, 31757, 31790, 31823, 31855, 31888, 31921, 31954, 31987, 32020, 32052, 32086, 32119, 32152, 32185, 32218, 32251, 32285, 32318, 32352, 32385, 32419, 32453, 32487, 32521, 32555, 32589, 32624, 32659, 32694, 32730,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 80, 144, 203, 259, 313, 365, 416, 466, 514, 562, 609, 656, 702, 747, 792, 836, 880, 923, 966, 1009, 1052, 1094, 1135, 1177, 1218, 1259, 1300, 1340, 1381, 1421, 1461,  /* 0 - 31*/
                1500, 1540, 1579, 1618, 1657, 1696, 1734, 1773, 1811, 1849, 1887, 1925, 1963, 2000, 2038, 2075, 2112, 2149, 2186, 2223, 2260, 2296, 2333, 2369, 2406, 2442, 2478, 2514, 2550, 2586, 2621, 2657,  /* 32 - 63*/
                2693, 2728, 2763, 2799, 2834, 2869, 2904, 2939, 2974, 3009, 3043, 3078, 3113, 3147, 3182, 3216, 3250, 3284, 3319, 3353, 3387, 3421, 3455, 3489, 3522, 3556, 3590, 3623, 3657, 3690, 3724, 3757,  /* 64 - 95*/
                3791, 3824, 3857, 3890, 3923, 3957, 3990, 4023, 4055, 4088, 4121, 4154, 4187, 4219, 4252, 4285, 4317, 4350, 4382, 4414, 4447, 4479, 4511, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800,  /* 96 - 127*/
                4832, 4864, 4895, 4927, 4959, 4990, 5022, 5054, 5085, 5117, 5148, 5180, 5211, 5243, 5274, 5305, 5336, 5368, 5399, 5430, 5461, 5492, 5523, 5554, 5586, 5616, 5647, 5678, 5709, 5740, 5771, 5802,  /* 128 - 159*/
                5833, 5864, 5895, 5926, 5957, 5988, 6019, 6050, 6081, 6112, 6143, 6174, 6205, 6236, 6267, 6298, 6329, 6360, 6391, 6422, 6453, 6484, 6515, 6546, 6577, 6608, 6639, 6670, 6701, 6732, 6763, 6794,  /* 160 - 191*/
                6825, 6856, 6887, 6918, 6949, 6980, 7011, 7042, 7073, 7104, 7135, 7166, 7197, 7228, 7259, 7290, 7321, 7352, 7383, 7414, 7445, 7476, 7507, 7538, 7569, 7600, 7631, 7662, 7693, 7724, 7755, 7786,  /* 192 - 223*/
                7817, 7848, 7879, 7910, 7941, 7972, 8003, 8034, 8065, 8096, 8127, 8158, 8189, 8220, 8251, 8282, 8313, 8344, 8375, 8406, 8437, 8468, 8499, 8530, 8561, 8592, 8623, 8654, 8685, 8716, 8747, 8778,  /* 224 - 255*/
                8809, 8840, 8871, 8902, 8933, 8964, 8995, 9026, 9057, 9088, 9119, 9150, 9181, 9212, 9243, 9274, 9305, 9336, 9367, 9398, 9429, 9460, 9491, 9522, 9553, 9584, 9615, 9646, 9677, 9708, 9739, 9770,  /* 256 - 287*/
                9801, 9832, 9863, 9894, 9925, 9956, 9987, 10018, 10049, 10080, 10111, 10142, 10173, 10204, 10235, 10266, 10297, 10328, 10359, 10390, 10421, 10452, 10483, 10514, 10545, 10576, 10607, 10638, 10669, 10700, 10731, 10762,  /* 288 - 319*/
                10793, 10824, 10855, 10886, 10917, 10948, 10979, 11010, 11041, 11072, 11103, 11134, 11165, 11196, 11227, 11258, 11289, 11320, 11351, 11382, 11413, 11444, 11475, 11506, 11537, 11568, 11599, 11630, 11661, 11692, 11723, 11754,  /* 320 - 351*/
                11785, 11816, 11847, 11878, 11909, 11940, 11971, 12002, 12033, 12064, 12095, 12126, 12157, 12188, 12219, 12250, 12281, 12312, 12343, 12374, 12405, 12436, 12467, 12498, 12529, 12560, 12591, 12622, 12653, 12684, 12715, 12746,  /* 352 - 383*/
                12777, 12808, 12839, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13180, 13211, 13242, 13273, 13304, 13335, 13366, 13397, 13428, 13459, 13490, 13521, 13552, 13583, 13614, 13645, 13676, 13707, 13738,  /* 384 - 415*/
                13769, 13800, 13831, 13862, 13893, 13924, 13955, 13986, 14017, 14048, 14079, 14110, 14141, 14172, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513, 14544, 14575, 14606, 14637, 14668, 14699, 14730,  /* 416 - 447*/
                14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15071, 15102, 15133, 15164, 15195, 15226, 15257, 15288, 15319, 15350, 15381, 15412, 15443, 15474, 15505, 15536, 15567, 15598, 15629, 15660, 15691, 15722,  /* 448 - 479*/
                15753, 15784, 15815, 15846, 15877, 15908, 15939, 15970, 16001, 16032, 16063, 16094, 16125, 16156, 16187, 16218, 16249, 16280, 16311, 16342, 16373, 16404, 16435, 16466, 16497, 16528, 16559, 16590, 16621, 16652, 16683, 16714,  /* 480 - 511*/
                16745, 16775, 16806, 16837, 16868, 16899, 16930, 16961, 16992, 17023, 17054, 17085, 17116, 17147, 17178, 17209, 17240, 17271, 17302, 17333, 17364, 17395, 17426, 17457, 17488, 17519, 17550, 17581, 17612, 17643, 17674, 17705,  /* 512 - 543*/
                17736, 17767, 17798, 17829, 17860, 17891, 17922, 17953, 17984, 18015, 18046, 18077, 18108, 18139, 18170, 18201, 18232, 18263, 18294, 18325, 18356, 18387, 18418, 18449, 18480, 18511, 18542, 18573, 18604, 18635, 18666, 18697,  /* 544 - 575*/
                18728, 18759, 18790, 18821, 18852, 18883, 18914, 18945, 18976, 19007, 19038, 19069, 19100, 19131, 19162, 19193, 19224, 19255, 19286, 19317, 19348, 19379, 19410, 19441, 19472, 19503, 19534, 19565, 19596, 19627, 19658, 19689,  /* 576 - 607*/
                19720, 19751, 19782, 19813, 19844, 19875, 19906, 19937, 19968, 19999, 20030, 20061, 20092, 20123, 20154, 20185, 20216, 20247, 20278, 20309, 20340, 20371, 20402, 20433, 20464, 20495, 20526, 20557, 20588, 20619, 20650, 20681,  /* 608 - 639*/
                20712, 20743, 20774, 20805, 20836, 20867, 20898, 20929, 20960, 20991, 21022, 21053, 21084, 21115, 21146, 21177, 21208, 21239, 21270, 21301, 21332, 21363, 21394, 21425, 21456, 21487, 21518, 21549, 21580, 21611, 21642, 21673,  /* 640 - 671*/
                21704, 21735, 21766, 21797, 21828, 21859, 21890, 21921, 21952, 21983, 22014, 22045, 22076, 22107, 22138, 22169, 22200, 22231, 22262, 22293, 22324, 22355, 22386, 22417, 22448, 22479, 22510, 22541, 22572, 22603, 22634, 22665,  /* 672 - 703*/
                22696, 22727, 22758, 22789, 22820, 22851, 22882, 22913, 22944, 22975, 23006, 23037, 23068, 23099, 23130, 23161, 23192, 23223, 23254, 23285, 23316, 23347, 23378, 23409, 23440, 23471, 23502, 23533, 23564, 23595, 23626, 23657,  /* 704 - 735*/
                23688, 23719, 23750, 23781, 23812, 23843, 23874, 23905, 23936, 23967, 23998, 24029, 24060, 24091, 24122, 24153, 24184, 24215, 24246, 24277, 24308, 24339, 24370, 24401, 24432, 24463, 24494, 24525, 24556, 24587, 24618, 24649,  /* 736 - 767*/
                24680, 24711, 24742, 24773, 24804, 24835, 24866, 24897, 24928, 24959, 24990, 25021, 25052, 25083, 25114, 25145, 25176, 25207, 25238, 25269, 25300, 25331, 25362, 25393, 25424, 25455, 25486, 25517, 25548, 25579, 25610, 25641,  /* 768 - 799*/
                25672, 25703, 25734, 25765, 25796, 25827, 25858, 25889, 25920, 25951, 25982, 26013, 26044, 26075, 26106, 26137, 26168, 26199, 26230, 26261, 26292, 26323, 26354, 26385, 26416, 26447, 26478, 26509, 26540, 26571, 26602, 26633,  /* 800 - 831*/
                26664, 26695, 26726, 26757, 26788, 26819, 26850, 26881, 26912, 26943, 26974, 27005, 27036, 27067, 27098, 27129, 27160, 27191, 27222, 27253, 27284, 27315, 27346, 27377, 27408, 27439, 27470, 27501, 27532, 27563, 27594, 27625,  /* 832 - 863*/
                27656, 27687, 27718, 27749, 27780, 27811, 27842, 27873, 27904, 27935, 27966, 27997, 28028, 28059, 28090, 28121, 28152, 28183, 28214, 28245, 28276, 28307, 28338, 28369, 28400, 28431, 28463, 28494, 28525, 28556, 28587, 28618,  /* 864 - 895*/
                28649, 28681, 28712, 28743, 28774, 28805, 28837, 28868, 28899, 28930, 28961, 28993, 29024, 29055, 29086, 29118, 29149, 29180, 29212, 29243, 29274, 29306, 29337, 29368, 29400, 29431, 29462, 29494, 29525, 29557, 29588, 29620,  /* 896 - 927*/
                29651, 29682, 29714, 29745, 29777, 29808, 29840, 29871, 29903, 29934, 29966, 29998, 30029, 30061, 30092, 30124, 30155, 30187, 30219, 30250, 30282, 30314, 30345, 30377, 30409, 30441, 30472, 30504, 30536, 30568, 30600, 30631,  /* 928 - 959*/
                30663, 30695, 30727, 30759, 30791, 30823, 30855, 30887, 30919, 30951, 30983, 31015, 31047, 31079, 31111, 31143, 31175, 31207, 31239, 31272, 31304, 31336, 31368, 31401, 31433, 31465, 31498, 31530, 31562, 31595, 31627, 31660,  /* 960 - 991*/
                31692, 31725, 31757, 31790, 31823, 31855, 31888, 31921, 31954, 31987, 32020, 32052, 32086, 32119, 32152, 32185, 32218, 32251, 32285, 32318, 32352, 32385, 32419, 32453, 32487, 32521, 32555, 32589, 32624, 32659, 32694, 32730,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 80, 144, 203, 259, 313, 365, 416, 466, 514, 562, 609, 656, 702, 747, 792, 836, 880, 923, 966, 1009, 1052, 1094, 1135, 1177, 1218, 1259, 1300, 1340, 1381, 1421, 1461,  /* 0 - 31*/
                1500, 1540, 1579, 1618, 1657, 1696, 1734, 1773, 1811, 1849, 1887, 1925, 1963, 2000, 2038, 2075, 2112, 2149, 2186, 2223, 2260, 2296, 2333, 2369, 2406, 2442, 2478, 2514, 2550, 2586, 2621, 2657,  /* 32 - 63*/
                2693, 2728, 2763, 2799, 2834, 2869, 2904, 2939, 2974, 3009, 3043, 3078, 3113, 3147, 3182, 3216, 3250, 3284, 3319, 3353, 3387, 3421, 3455, 3489, 3522, 3556, 3590, 3623, 3657, 3690, 3724, 3757,  /* 64 - 95*/
                3791, 3824, 3857, 3890, 3923, 3957, 3990, 4023, 4055, 4088, 4121, 4154, 4187, 4219, 4252, 4285, 4317, 4350, 4382, 4414, 4447, 4479, 4511, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800,  /* 96 - 127*/
                4832, 4864, 4895, 4927, 4959, 4990, 5022, 5054, 5085, 5117, 5148, 5180, 5211, 5243, 5274, 5305, 5336, 5368, 5399, 5430, 5461, 5492, 5523, 5554, 5586, 5616, 5647, 5678, 5709, 5740, 5771, 5802,  /* 128 - 159*/
                5833, 5864, 5895, 5926, 5957, 5988, 6019, 6050, 6081, 6112, 6143, 6174, 6205, 6236, 6267, 6298, 6329, 6360, 6391, 6422, 6453, 6484, 6515, 6546, 6577, 6608, 6639, 6670, 6701, 6732, 6763, 6794,  /* 160 - 191*/
                6825, 6856, 6887, 6918, 6949, 6980, 7011, 7042, 7073, 7104, 7135, 7166, 7197, 7228, 7259, 7290, 7321, 7352, 7383, 7414, 7445, 7476, 7507, 7538, 7569, 7600, 7631, 7662, 7693, 7724, 7755, 7786,  /* 192 - 223*/
                7817, 7848, 7879, 7910, 7941, 7972, 8003, 8034, 8065, 8096, 8127, 8158, 8189, 8220, 8251, 8282, 8313, 8344, 8375, 8406, 8437, 8468, 8499, 8530, 8561, 8592, 8623, 8654, 8685, 8716, 8747, 8778,  /* 224 - 255*/
                8809, 8840, 8871, 8902, 8933, 8964, 8995, 9026, 9057, 9088, 9119, 9150, 9181, 9212, 9243, 9274, 9305, 9336, 9367, 9398, 9429, 9460, 9491, 9522, 9553, 9584, 9615, 9646, 9677, 9708, 9739, 9770,  /* 256 - 287*/
                9801, 9832, 9863, 9894, 9925, 9956, 9987, 10018, 10049, 10080, 10111, 10142, 10173, 10204, 10235, 10266, 10297, 10328, 10359, 10390, 10421, 10452, 10483, 10514, 10545, 10576, 10607, 10638, 10669, 10700, 10731, 10762,  /* 288 - 319*/
                10793, 10824, 10855, 10886, 10917, 10948, 10979, 11010, 11041, 11072, 11103, 11134, 11165, 11196, 11227, 11258, 11289, 11320, 11351, 11382, 11413, 11444, 11475, 11506, 11537, 11568, 11599, 11630, 11661, 11692, 11723, 11754,  /* 320 - 351*/
                11785, 11816, 11847, 11878, 11909, 11940, 11971, 12002, 12033, 12064, 12095, 12126, 12157, 12188, 12219, 12250, 12281, 12312, 12343, 12374, 12405, 12436, 12467, 12498, 12529, 12560, 12591, 12622, 12653, 12684, 12715, 12746,  /* 352 - 383*/
                12777, 12808, 12839, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13180, 13211, 13242, 13273, 13304, 13335, 13366, 13397, 13428, 13459, 13490, 13521, 13552, 13583, 13614, 13645, 13676, 13707, 13738,  /* 384 - 415*/
                13769, 13800, 13831, 13862, 13893, 13924, 13955, 13986, 14017, 14048, 14079, 14110, 14141, 14172, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513, 14544, 14575, 14606, 14637, 14668, 14699, 14730,  /* 416 - 447*/
                14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15071, 15102, 15133, 15164, 15195, 15226, 15257, 15288, 15319, 15350, 15381, 15412, 15443, 15474, 15505, 15536, 15567, 15598, 15629, 15660, 15691, 15722,  /* 448 - 479*/
                15753, 15784, 15815, 15846, 15877, 15908, 15939, 15970, 16001, 16032, 16063, 16094, 16125, 16156, 16187, 16218, 16249, 16280, 16311, 16342, 16373, 16404, 16435, 16466, 16497, 16528, 16559, 16590, 16621, 16652, 16683, 16714,  /* 480 - 511*/
                16745, 16775, 16806, 16837, 16868, 16899, 16930, 16961, 16992, 17023, 17054, 17085, 17116, 17147, 17178, 17209, 17240, 17271, 17302, 17333, 17364, 17395, 17426, 17457, 17488, 17519, 17550, 17581, 17612, 17643, 17674, 17705,  /* 512 - 543*/
                17736, 17767, 17798, 17829, 17860, 17891, 17922, 17953, 17984, 18015, 18046, 18077, 18108, 18139, 18170, 18201, 18232, 18263, 18294, 18325, 18356, 18387, 18418, 18449, 18480, 18511, 18542, 18573, 18604, 18635, 18666, 18697,  /* 544 - 575*/
                18728, 18759, 18790, 18821, 18852, 18883, 18914, 18945, 18976, 19007, 19038, 19069, 19100, 19131, 19162, 19193, 19224, 19255, 19286, 19317, 19348, 19379, 19410, 19441, 19472, 19503, 19534, 19565, 19596, 19627, 19658, 19689,  /* 576 - 607*/
                19720, 19751, 19782, 19813, 19844, 19875, 19906, 19937, 19968, 19999, 20030, 20061, 20092, 20123, 20154, 20185, 20216, 20247, 20278, 20309, 20340, 20371, 20402, 20433, 20464, 20495, 20526, 20557, 20588, 20619, 20650, 20681,  /* 608 - 639*/
                20712, 20743, 20774, 20805, 20836, 20867, 20898, 20929, 20960, 20991, 21022, 21053, 21084, 21115, 21146, 21177, 21208, 21239, 21270, 21301, 21332, 21363, 21394, 21425, 21456, 21487, 21518, 21549, 21580, 21611, 21642, 21673,  /* 640 - 671*/
                21704, 21735, 21766, 21797, 21828, 21859, 21890, 21921, 21952, 21983, 22014, 22045, 22076, 22107, 22138, 22169, 22200, 22231, 22262, 22293, 22324, 22355, 22386, 22417, 22448, 22479, 22510, 22541, 22572, 22603, 22634, 22665,  /* 672 - 703*/
                22696, 22727, 22758, 22789, 22820, 22851, 22882, 22913, 22944, 22975, 23006, 23037, 23068, 23099, 23130, 23161, 23192, 23223, 23254, 23285, 23316, 23347, 23378, 23409, 23440, 23471, 23502, 23533, 23564, 23595, 23626, 23657,  /* 704 - 735*/
                23688, 23719, 23750, 23781, 23812, 23843, 23874, 23905, 23936, 23967, 23998, 24029, 24060, 24091, 24122, 24153, 24184, 24215, 24246, 24277, 24308, 24339, 24370, 24401, 24432, 24463, 24494, 24525, 24556, 24587, 24618, 24649,  /* 736 - 767*/
                24680, 24711, 24742, 24773, 24804, 24835, 24866, 24897, 24928, 24959, 24990, 25021, 25052, 25083, 25114, 25145, 25176, 25207, 25238, 25269, 25300, 25331, 25362, 25393, 25424, 25455, 25486, 25517, 25548, 25579, 25610, 25641,  /* 768 - 799*/
                25672, 25703, 25734, 25765, 25796, 25827, 25858, 25889, 25920, 25951, 25982, 26013, 26044, 26075, 26106, 26137, 26168, 26199, 26230, 26261, 26292, 26323, 26354, 26385, 26416, 26447, 26478, 26509, 26540, 26571, 26602, 26633,  /* 800 - 831*/
                26664, 26695, 26726, 26757, 26788, 26819, 26850, 26881, 26912, 26943, 26974, 27005, 27036, 27067, 27098, 27129, 27160, 27191, 27222, 27253, 27284, 27315, 27346, 27377, 27408, 27439, 27470, 27501, 27532, 27563, 27594, 27625,  /* 832 - 863*/
                27656, 27687, 27718, 27749, 27780, 27811, 27842, 27873, 27904, 27935, 27966, 27997, 28028, 28059, 28090, 28121, 28152, 28183, 28214, 28245, 28276, 28307, 28338, 28369, 28400, 28431, 28463, 28494, 28525, 28556, 28587, 28618,  /* 864 - 895*/
                28649, 28681, 28712, 28743, 28774, 28805, 28837, 28868, 28899, 28930, 28961, 28993, 29024, 29055, 29086, 29118, 29149, 29180, 29212, 29243, 29274, 29306, 29337, 29368, 29400, 29431, 29462, 29494, 29525, 29557, 29588, 29620,  /* 896 - 927*/
                29651, 29682, 29714, 29745, 29777, 29808, 29840, 29871, 29903, 29934, 29966, 29998, 30029, 30061, 30092, 30124, 30155, 30187, 30219, 30250, 30282, 30314, 30345, 30377, 30409, 30441, 30472, 30504, 30536, 30568, 30600, 30631,  /* 928 - 959*/
                30663, 30695, 30727, 30759, 30791, 30823, 30855, 30887, 30919, 30951, 30983, 31015, 31047, 31079, 31111, 31143, 31175, 31207, 31239, 31272, 31304, 31336, 31368, 31401, 31433, 31465, 31498, 31530, 31562, 31595, 31627, 31660,  /* 960 - 991*/
                31692, 31725, 31757, 31790, 31823, 31855, 31888, 31921, 31954, 31987, 32020, 32052, 32086, 32119, 32152, 32185, 32218, 32251, 32285, 32318, 32352, 32385, 32419, 32453, 32487, 32521, 32555, 32589, 32624, 32659, 32694, 32730,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 80, 144, 203, 259, 313, 365, 416, 466, 514, 562, 609, 656, 702, 747, 792, 836, 880, 923, 966, 1009, 1052, 1094, 1135, 1177, 1218, 1259, 1300, 1340, 1381, 1421, 1461,  /* 0 - 31*/
                1500, 1540, 1579, 1618, 1657, 1696, 1734, 1773, 1811, 1849, 1887, 1925, 1963, 2000, 2038, 2075, 2112, 2149, 2186, 2223, 2260, 2296, 2333, 2369, 2406, 2442, 2478, 2514, 2550, 2586, 2621, 2657,  /* 32 - 63*/
                2693, 2728, 2763, 2799, 2834, 2869, 2904, 2939, 2974, 3009, 3043, 3078, 3113, 3147, 3182, 3216, 3250, 3284, 3319, 3353, 3387, 3421, 3455, 3489, 3522, 3556, 3590, 3623, 3657, 3690, 3724, 3757,  /* 64 - 95*/
                3791, 3824, 3857, 3890, 3923, 3957, 3990, 4023, 4055, 4088, 4121, 4154, 4187, 4219, 4252, 4285, 4317, 4350, 4382, 4414, 4447, 4479, 4511, 4544, 4576, 4608, 4640, 4672, 4704, 4736, 4768, 4800,  /* 96 - 127*/
                4832, 4864, 4895, 4927, 4959, 4990, 5022, 5054, 5085, 5117, 5148, 5180, 5211, 5243, 5274, 5305, 5336, 5368, 5399, 5430, 5461, 5492, 5523, 5554, 5586, 5616, 5647, 5678, 5709, 5740, 5771, 5802,  /* 128 - 159*/
                5833, 5864, 5895, 5926, 5957, 5988, 6019, 6050, 6081, 6112, 6143, 6174, 6205, 6236, 6267, 6298, 6329, 6360, 6391, 6422, 6453, 6484, 6515, 6546, 6577, 6608, 6639, 6670, 6701, 6732, 6763, 6794,  /* 160 - 191*/
                6825, 6856, 6887, 6918, 6949, 6980, 7011, 7042, 7073, 7104, 7135, 7166, 7197, 7228, 7259, 7290, 7321, 7352, 7383, 7414, 7445, 7476, 7507, 7538, 7569, 7600, 7631, 7662, 7693, 7724, 7755, 7786,  /* 192 - 223*/
                7817, 7848, 7879, 7910, 7941, 7972, 8003, 8034, 8065, 8096, 8127, 8158, 8189, 8220, 8251, 8282, 8313, 8344, 8375, 8406, 8437, 8468, 8499, 8530, 8561, 8592, 8623, 8654, 8685, 8716, 8747, 8778,  /* 224 - 255*/
                8809, 8840, 8871, 8902, 8933, 8964, 8995, 9026, 9057, 9088, 9119, 9150, 9181, 9212, 9243, 9274, 9305, 9336, 9367, 9398, 9429, 9460, 9491, 9522, 9553, 9584, 9615, 9646, 9677, 9708, 9739, 9770,  /* 256 - 287*/
                9801, 9832, 9863, 9894, 9925, 9956, 9987, 10018, 10049, 10080, 10111, 10142, 10173, 10204, 10235, 10266, 10297, 10328, 10359, 10390, 10421, 10452, 10483, 10514, 10545, 10576, 10607, 10638, 10669, 10700, 10731, 10762,  /* 288 - 319*/
                10793, 10824, 10855, 10886, 10917, 10948, 10979, 11010, 11041, 11072, 11103, 11134, 11165, 11196, 11227, 11258, 11289, 11320, 11351, 11382, 11413, 11444, 11475, 11506, 11537, 11568, 11599, 11630, 11661, 11692, 11723, 11754,  /* 320 - 351*/
                11785, 11816, 11847, 11878, 11909, 11940, 11971, 12002, 12033, 12064, 12095, 12126, 12157, 12188, 12219, 12250, 12281, 12312, 12343, 12374, 12405, 12436, 12467, 12498, 12529, 12560, 12591, 12622, 12653, 12684, 12715, 12746,  /* 352 - 383*/
                12777, 12808, 12839, 12870, 12901, 12932, 12963, 12994, 13025, 13056, 13087, 13118, 13149, 13180, 13211, 13242, 13273, 13304, 13335, 13366, 13397, 13428, 13459, 13490, 13521, 13552, 13583, 13614, 13645, 13676, 13707, 13738,  /* 384 - 415*/
                13769, 13800, 13831, 13862, 13893, 13924, 13955, 13986, 14017, 14048, 14079, 14110, 14141, 14172, 14203, 14234, 14265, 14296, 14327, 14358, 14389, 14420, 14451, 14482, 14513, 14544, 14575, 14606, 14637, 14668, 14699, 14730,  /* 416 - 447*/
                14761, 14792, 14823, 14854, 14885, 14916, 14947, 14978, 15009, 15040, 15071, 15102, 15133, 15164, 15195, 15226, 15257, 15288, 15319, 15350, 15381, 15412, 15443, 15474, 15505, 15536, 15567, 15598, 15629, 15660, 15691, 15722,  /* 448 - 479*/
                15753, 15784, 15815, 15846, 15877, 15908, 15939, 15970, 16001, 16032, 16063, 16094, 16125, 16156, 16187, 16218, 16249, 16280, 16311, 16342, 16373, 16404, 16435, 16466, 16497, 16528, 16559, 16590, 16621, 16652, 16683, 16714,  /* 480 - 511*/
                16745, 16775, 16806, 16837, 16868, 16899, 16930, 16961, 16992, 17023, 17054, 17085, 17116, 17147, 17178, 17209, 17240, 17271, 17302, 17333, 17364, 17395, 17426, 17457, 17488, 17519, 17550, 17581, 17612, 17643, 17674, 17705,  /* 512 - 543*/
                17736, 17767, 17798, 17829, 17860, 17891, 17922, 17953, 17984, 18015, 18046, 18077, 18108, 18139, 18170, 18201, 18232, 18263, 18294, 18325, 18356, 18387, 18418, 18449, 18480, 18511, 18542, 18573, 18604, 18635, 18666, 18697,  /* 544 - 575*/
                18728, 18759, 18790, 18821, 18852, 18883, 18914, 18945, 18976, 19007, 19038, 19069, 19100, 19131, 19162, 19193, 19224, 19255, 19286, 19317, 19348, 19379, 19410, 19441, 19472, 19503, 19534, 19565, 19596, 19627, 19658, 19689,  /* 576 - 607*/
                19720, 19751, 19782, 19813, 19844, 19875, 19906, 19937, 19968, 19999, 20030, 20061, 20092, 20123, 20154, 20185, 20216, 20247, 20278, 20309, 20340, 20371, 20402, 20433, 20464, 20495, 20526, 20557, 20588, 20619, 20650, 20681,  /* 608 - 639*/
                20712, 20743, 20774, 20805, 20836, 20867, 20898, 20929, 20960, 20991, 21022, 21053, 21084, 21115, 21146, 21177, 21208, 21239, 21270, 21301, 21332, 21363, 21394, 21425, 21456, 21487, 21518, 21549, 21580, 21611, 21642, 21673,  /* 640 - 671*/
                21704, 21735, 21766, 21797, 21828, 21859, 21890, 21921, 21952, 21983, 22014, 22045, 22076, 22107, 22138, 22169, 22200, 22231, 22262, 22293, 22324, 22355, 22386, 22417, 22448, 22479, 22510, 22541, 22572, 22603, 22634, 22665,  /* 672 - 703*/
                22696, 22727, 22758, 22789, 22820, 22851, 22882, 22913, 22944, 22975, 23006, 23037, 23068, 23099, 23130, 23161, 23192, 23223, 23254, 23285, 23316, 23347, 23378, 23409, 23440, 23471, 23502, 23533, 23564, 23595, 23626, 23657,  /* 704 - 735*/
                23688, 23719, 23750, 23781, 23812, 23843, 23874, 23905, 23936, 23967, 23998, 24029, 24060, 24091, 24122, 24153, 24184, 24215, 24246, 24277, 24308, 24339, 24370, 24401, 24432, 24463, 24494, 24525, 24556, 24587, 24618, 24649,  /* 736 - 767*/
                24680, 24711, 24742, 24773, 24804, 24835, 24866, 24897, 24928, 24959, 24990, 25021, 25052, 25083, 25114, 25145, 25176, 25207, 25238, 25269, 25300, 25331, 25362, 25393, 25424, 25455, 25486, 25517, 25548, 25579, 25610, 25641,  /* 768 - 799*/
                25672, 25703, 25734, 25765, 25796, 25827, 25858, 25889, 25920, 25951, 25982, 26013, 26044, 26075, 26106, 26137, 26168, 26199, 26230, 26261, 26292, 26323, 26354, 26385, 26416, 26447, 26478, 26509, 26540, 26571, 26602, 26633,  /* 800 - 831*/
                26664, 26695, 26726, 26757, 26788, 26819, 26850, 26881, 26912, 26943, 26974, 27005, 27036, 27067, 27098, 27129, 27160, 27191, 27222, 27253, 27284, 27315, 27346, 27377, 27408, 27439, 27470, 27501, 27532, 27563, 27594, 27625,  /* 832 - 863*/
                27656, 27687, 27718, 27749, 27780, 27811, 27842, 27873, 27904, 27935, 27966, 27997, 28028, 28059, 28090, 28121, 28152, 28183, 28214, 28245, 28276, 28307, 28338, 28369, 28400, 28431, 28463, 28494, 28525, 28556, 28587, 28618,  /* 864 - 895*/
                28649, 28681, 28712, 28743, 28774, 28805, 28837, 28868, 28899, 28930, 28961, 28993, 29024, 29055, 29086, 29118, 29149, 29180, 29212, 29243, 29274, 29306, 29337, 29368, 29400, 29431, 29462, 29494, 29525, 29557, 29588, 29620,  /* 896 - 927*/
                29651, 29682, 29714, 29745, 29777, 29808, 29840, 29871, 29903, 29934, 29966, 29998, 30029, 30061, 30092, 30124, 30155, 30187, 30219, 30250, 30282, 30314, 30345, 30377, 30409, 30441, 30472, 30504, 30536, 30568, 30600, 30631,  /* 928 - 959*/
                30663, 30695, 30727, 30759, 30791, 30823, 30855, 30887, 30919, 30951, 30983, 31015, 31047, 31079, 31111, 31143, 31175, 31207, 31239, 31272, 31304, 31336, 31368, 31401, 31433, 31465, 31498, 31530, 31562, 31595, 31627, 31660,  /* 960 - 991*/
                31692, 31725, 31757, 31790, 31823, 31855, 31888, 31921, 31954, 31987, 32020, 32052, 32086, 32119, 32152, 32185, 32218, 32251, 32285, 32318, 32352, 32385, 32419, 32453, 32487, 32521, 32555, 32589, 32624, 32659, 32694, 32730,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 140, 233, 314, 388, 458, 523, 586, 647, 705, 762, 817, 871, 924, 976, 1027, 1077, 1126, 1174, 1222, 1269, 1315, 1361, 1406, 1451, 1495, 1539, 1582, 1625, 1667, 1709, 1751,  /* 0 - 31*/
                1792, 1833, 1874, 1914, 1954, 1994, 2034, 2073, 2112, 2151, 2189, 2227, 2265, 2303, 2340, 2378, 2415, 2452, 2488, 2525, 2561, 2597, 2633, 2669, 2705, 2740, 2775, 2810, 2845, 2880, 2915, 2949,  /* 32 - 63*/
                2984, 3018, 3052, 3086, 3120, 3153, 3187, 3220, 3254, 3287, 3320, 3353, 3385, 3418, 3451, 3483, 3516, 3548, 3580, 3612, 3644, 3676, 3708, 3739, 3771, 3802, 3834, 3865, 3896, 3927, 3958, 3989,  /* 64 - 95*/
                4020, 4051, 4081, 4112, 4142, 4173, 4203, 4233, 4264, 4294, 4324, 4354, 4384, 4414, 4444, 4474, 4505, 4535, 4565, 4595, 4625, 4655, 4685, 4716, 4746, 4776, 4806, 4836, 4866, 4896, 4927, 4957,  /* 96 - 127*/
                4987, 5017, 5047, 5077, 5107, 5138, 5168, 5198, 5228, 5258, 5288, 5318, 5348, 5379, 5409, 5439, 5469, 5499, 5529, 5559, 5590, 5620, 5650, 5680, 5710, 5740, 5770, 5801, 5831, 5861, 5891, 5921,  /* 128 - 159*/
                5951, 5981, 6012, 6042, 6072, 6102, 6132, 6162, 6192, 6222, 6253, 6283, 6313, 6343, 6373, 6403, 6433, 6464, 6494, 6524, 6554, 6584, 6614, 6644, 6675, 6705, 6735, 6765, 6795, 6825, 6855, 6886,  /* 160 - 191*/
                6916, 6946, 6976, 7006, 7036, 7066, 7096, 7127, 7157, 7187, 7217, 7247, 7277, 7307, 7338, 7368, 7398, 7428, 7458, 7488, 7518, 7549, 7579, 7609, 7639, 7669, 7699, 7729, 7760, 7790, 7820, 7850,  /* 192 - 223*/
                7880, 7910, 7940, 7970, 8001, 8031, 8061, 8091, 8121, 8151, 8181, 8212, 8242, 8272, 8302, 8332, 8362, 8392, 8423, 8453, 8483, 8513, 8543, 8573, 8603, 8634, 8664, 8694, 8724, 8754, 8784, 8814,  /* 224 - 255*/
                8844, 8875, 8905, 8935, 8965, 8995, 9025, 9055, 9086, 9116, 9146, 9176, 9206, 9236, 9266, 9297, 9327, 9357, 9387, 9417, 9447, 9477, 9508, 9538, 9568, 9598, 9628, 9658, 9688, 9718, 9749, 9779,  /* 256 - 287*/
                9809, 9839, 9869, 9899, 9929, 9960, 9990, 10020, 10050, 10080, 10110, 10140, 10171, 10201, 10231, 10261, 10291, 10321, 10351, 10382, 10412, 10442, 10472, 10502, 10532, 10562, 10592, 10623, 10653, 10683, 10713, 10743,  /* 288 - 319*/
                10773, 10803, 10834, 10864, 10894, 10924, 10954, 10984, 11014, 11045, 11075, 11105, 11135, 11165, 11195, 11225, 11256, 11286, 11316, 11346, 11376, 11406, 11436, 11466, 11497, 11527, 11557, 11587, 11617, 11647, 11677, 11708,  /* 320 - 351*/
                11738, 11768, 11798, 11828, 11858, 11888, 11919, 11949, 11979, 12009, 12039, 12069, 12099, 12130, 12160, 12190, 12220, 12250, 12280, 12310, 12340, 12371, 12401, 12431, 12461, 12491, 12521, 12551, 12582, 12612, 12642, 12672,  /* 352 - 383*/
                12702, 12732, 12762, 12793, 12823, 12853, 12883, 12913, 12943, 12973, 13004, 13034, 13064, 13094, 13124, 13154, 13184, 13214, 13245, 13275, 13305, 13335, 13365, 13395, 13425, 13456, 13486, 13516, 13546, 13576, 13606, 13636,  /* 384 - 415*/
                13667, 13697, 13727, 13757, 13787, 13817, 13847, 13878, 13908, 13938, 13968, 13998, 14028, 14058, 14088, 14119, 14149, 14179, 14209, 14239, 14269, 14299, 14330, 14360, 14390, 14420, 14450, 14480, 14510, 14541, 14571, 14601,  /* 416 - 447*/
                14631, 14661, 14691, 14721, 14752, 14782, 14812, 14842, 14872, 14902, 14932, 14962, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15204, 15234, 15264, 15294, 15324, 15354, 15384, 15415, 15445, 15475, 15505, 15535, 15565,  /* 448 - 479*/
                15595, 15626, 15656, 15686, 15716, 15746, 15776, 15806, 15837, 15867, 15897, 15927, 15957, 15987, 16017, 16047, 16078, 16108, 16138, 16168, 16198, 16228, 16258, 16289, 16319, 16349, 16379, 16409, 16439, 16469, 16500, 16530,  /* 480 - 511*/
                16560, 16590, 16620, 16650, 16680, 16711, 16741, 16771, 16801, 16831, 16861, 16891, 16921, 16952, 16982, 17012, 17042, 17072, 17102, 17132, 17163, 17193, 17223, 17253, 17283, 17313, 17343, 17374, 17404, 17434, 17464, 17494,  /* 512 - 543*/
                17524, 17554, 17585, 17615, 17645, 17675, 17705, 17735, 17765, 17795, 17826, 17856, 17886, 17916, 17946, 17976, 18006, 18037, 18067, 18097, 18127, 18157, 18187, 18217, 18248, 18278, 18308, 18338, 18368, 18398, 18428, 18459,  /* 544 - 575*/
                18489, 18519, 18549, 18579, 18609, 18639, 18669, 18700, 18730, 18760, 18790, 18820, 18850, 18880, 18911, 18941, 18971, 19001, 19031, 19061, 19091, 19122, 19152, 19182, 19212, 19242, 19272, 19302, 19333, 19363, 19393, 19423,  /* 576 - 607*/
                19453, 19483, 19513, 19543, 19574, 19604, 19634, 19664, 19694, 19724, 19754, 19785, 19815, 19845, 19875, 19905, 19935, 19965, 19996, 20026, 20056, 20086, 20116, 20146, 20176, 20207, 20237, 20267, 20297, 20327, 20357, 20387,  /* 608 - 639*/
                20417, 20448, 20478, 20508, 20538, 20568, 20598, 20628, 20659, 20689, 20719, 20749, 20779, 20809, 20839, 20870, 20900, 20930, 20960, 20990, 21020, 21050, 21081, 21111, 21141, 21171, 21201, 21231, 21261, 21291, 21322, 21352,  /* 640 - 671*/
                21382, 21412, 21442, 21472, 21502, 21533, 21563, 21593, 21623, 21653, 21683, 21713, 21744, 21774, 21804, 21834, 21864, 21894, 21924, 21955, 21985, 22015, 22045, 22075, 22105, 22135, 22165, 22196, 22226, 22256, 22286, 22316,  /* 672 - 703*/
                22346, 22376, 22407, 22437, 22467, 22497, 22527, 22557, 22587, 22618, 22648, 22678, 22708, 22738, 22768, 22798, 22829, 22859, 22889, 22919, 22949, 22979, 23009, 23039, 23070, 23100, 23130, 23160, 23190, 23220, 23250, 23281,  /* 704 - 735*/
                23311, 23341, 23371, 23401, 23431, 23461, 23492, 23522, 23552, 23582, 23612, 23642, 23672, 23703, 23733, 23763, 23793, 23823, 23853, 23883, 23913, 23944, 23974, 24004, 24034, 24064, 24094, 24124, 24155, 24185, 24215, 24245,  /* 736 - 767*/
                24275, 24305, 24335, 24366, 24396, 24426, 24456, 24486, 24516, 24546, 24577, 24607, 24637, 24667, 24697, 24727, 24757, 24787, 24818, 24848, 24878, 24908, 24938, 24968, 24998, 25029, 25059, 25089, 25119, 25149, 25179, 25209,  /* 768 - 799*/
                25240, 25270, 25300, 25330, 25360, 25390, 25420, 25451, 25481, 25511, 25541, 25571, 25601, 25631, 25661, 25692, 25722, 25752, 25782, 25812, 25842, 25872, 25903, 25933, 25963, 25993, 26023, 26053, 26083, 26114, 26144, 26174,  /* 800 - 831*/
                26204, 26234, 26264, 26294, 26325, 26355, 26385, 26415, 26445, 26475, 26505, 26535, 26566, 26596, 26626, 26656, 26686, 26716, 26746, 26777, 26807, 26837, 26867, 26897, 26927, 26957, 26988, 27018, 27048, 27078, 27108, 27138,  /* 832 - 863*/
                27168, 27199, 27229, 27259, 27289, 27319, 27349, 27379, 27410, 27440, 27470, 27500, 27530, 27561, 27591, 27621, 27652, 27682, 27712, 27743, 27773, 27804, 27834, 27865, 27896, 27926, 27957, 27988, 28018, 28049, 28080, 28111,  /* 864 - 895*/
                28142, 28173, 28204, 28234, 28266, 28297, 28328, 28359, 28390, 28421, 28452, 28484, 28515, 28546, 28578, 28609, 28641, 28672, 28704, 28735, 28767, 28799, 28830, 28862, 28894, 28926, 28958, 28990, 29022, 29054, 29086, 29118,  /* 896 - 927*/
                29150, 29183, 29215, 29247, 29280, 29312, 29344, 29377, 29410, 29442, 29475, 29508, 29541, 29573, 29606, 29639, 29672, 29706, 29739, 29772, 29805, 29839, 29872, 29905, 29939, 29973, 30006, 30040, 30074, 30108, 30142, 30176,  /* 928 - 959*/
                30210, 30244, 30278, 30313, 30347, 30382, 30416, 30451, 30486, 30521, 30556, 30591, 30626, 30661, 30697, 30732, 30768, 30803, 30839, 30875, 30911, 30947, 30983, 31020, 31056, 31093, 31130, 31167, 31204, 31241, 31278, 31316,  /* 960 - 991*/
                31354, 31391, 31429, 31468, 31506, 31545, 31584, 31623, 31662, 31701, 31741, 31781, 31821, 31862, 31903, 31944, 31986, 32028, 32070, 32113, 32156, 32200, 32244, 32289, 32335, 32382, 32430, 32478, 32529, 32581, 32635, 32694,  /* 992 - 1023*/
                32768, /*1024 - 1024*/
            },
            {
                0, 140, 233, 314, 388, 458, 523, 586, 647, 705, 762, 817, 871, 924, 976, 1027, 1077, 1126, 1174, 1222, 1269, 1315, 1361, 1406, 1451, 1495, 1539, 1582, 1625, 1667, 1709, 1751,  /* 0 - 31*/
                1792, 1833, 1874, 1914, 1954, 1994, 2034, 2073, 2112, 2151, 2189, 2227, 2265, 2303, 2340, 2378, 2415, 2452, 2488, 2525, 2561, 2597, 2633, 2669, 2705, 2740, 2775, 2810, 2845, 2880, 2915, 2949,  /* 32 - 63*/
                2984, 3018, 3052, 3086, 3120, 3153, 3187, 3220, 3254, 3287, 3320, 3353, 3385, 3418, 3451, 3483, 3516, 3548, 3580, 3612, 3644, 3676, 3708, 3739, 3771, 3802, 3834, 3865, 3896, 3927, 3958, 3989,  /* 64 - 95*/
                4020, 4051, 4081, 4112, 4142, 4173, 4203, 4233, 4264, 4294, 4324, 4354, 4384, 4414, 4444, 4474, 4505, 4535, 4565, 4595, 4625, 4655, 4685, 4716, 4746, 4776, 4806, 4836, 4866, 4896, 4927, 4957,  /* 96 - 127*/
                4987, 5017, 5047, 5077, 5107, 5138, 5168, 5198, 5228, 5258, 5288, 5318, 5348, 5379, 5409, 5439, 5469, 5499, 5529, 5559, 5590, 5620, 5650, 5680, 5710, 5740, 5770, 5801, 5831, 5861, 5891, 5921,  /* 128 - 159*/
                5951, 5981, 6012, 6042, 6072, 6102, 6132, 6162, 6192, 6222, 6253, 6283, 6313, 6343, 6373, 6403, 6433, 6464, 6494, 6524, 6554, 6584, 6614, 6644, 6675, 6705, 6735, 6765, 6795, 6825, 6855, 6886,  /* 160 - 191*/
                6916, 6946, 6976, 7006, 7036, 7066, 7096, 7127, 7157, 7187, 7217, 7247, 7277, 7307, 7338, 7368, 7398, 7428, 7458, 7488, 7518, 7549, 7579, 7609, 7639, 7669, 7699, 7729, 7760, 7790, 7820, 7850,  /* 192 - 223*/
                7880, 7910, 7940, 7970, 8001, 8031, 8061, 8091, 8121, 8151, 8181, 8212, 8242, 8272, 8302, 8332, 8362, 8392, 8423, 8453, 8483, 8513, 8543, 8573, 8603, 8634, 8664, 8694, 8724, 8754, 8784, 8814,  /* 224 - 255*/
                8844, 8875, 8905, 8935, 8965, 8995, 9025, 9055, 9086, 9116, 9146, 9176, 9206, 9236, 9266, 9297, 9327, 9357, 9387, 9417, 9447, 9477, 9508, 9538, 9568, 9598, 9628, 9658, 9688, 9718, 9749, 9779,  /* 256 - 287*/
                9809, 9839, 9869, 9899, 9929, 9960, 9990, 10020, 10050, 10080, 10110, 10140, 10171, 10201, 10231, 10261, 10291, 10321, 10351, 10382, 10412, 10442, 10472, 10502, 10532, 10562, 10592, 10623, 10653, 10683, 10713, 10743,  /* 288 - 319*/
                10773, 10803, 10834, 10864, 10894, 10924, 10954, 10984, 11014, 11045, 11075, 11105, 11135, 11165, 11195, 11225, 11256, 11286, 11316, 11346, 11376, 11406, 11436, 11466, 11497, 11527, 11557, 11587, 11617, 11647, 11677, 11708,  /* 320 - 351*/
                11738, 11768, 11798, 11828, 11858, 11888, 11919, 11949, 11979, 12009, 12039, 12069, 12099, 12130, 12160, 12190, 12220, 12250, 12280, 12310, 12340, 12371, 12401, 12431, 12461, 12491, 12521, 12551, 12582, 12612, 12642, 12672,  /* 352 - 383*/
                12702, 12732, 12762, 12793, 12823, 12853, 12883, 12913, 12943, 12973, 13004, 13034, 13064, 13094, 13124, 13154, 13184, 13214, 13245, 13275, 13305, 13335, 13365, 13395, 13425, 13456, 13486, 13516, 13546, 13576, 13606, 13636,  /* 384 - 415*/
                13667, 13697, 13727, 13757, 13787, 13817, 13847, 13878, 13908, 13938, 13968, 13998, 14028, 14058, 14088, 14119, 14149, 14179, 14209, 14239, 14269, 14299, 14330, 14360, 14390, 14420, 14450, 14480, 14510, 14541, 14571, 14601,  /* 416 - 447*/
                14631, 14661, 14691, 14721, 14752, 14782, 14812, 14842, 14872, 14902, 14932, 14962, 14993, 15023, 15053, 15083, 15113, 15143, 15173, 15204, 15234, 15264, 15294, 15324, 15354, 15384, 15415, 15445, 15475, 15505, 15535, 15565,  /* 448 - 479*/
                15595, 15626, 15656, 15686, 15716, 15746, 15776, 15806, 15837, 15867, 15897, 15927, 15957, 15987, 16017, 16047, 16078, 16108, 16138, 16168, 16198, 16228, 16258, 16289, 16319, 16349, 16379, 16409, 16439, 16469, 16500, 16530,  /* 480 - 511*/
                16560, 16590, 16620, 16650, 16680, 16711, 16741, 16771, 16801, 16831, 16861, 16891, 16921, 16952, 16982, 17012, 17042, 17072, 17102, 17132, 17163, 17193, 17223, 17253, 17283, 17313, 17343, 17374, 17404, 17434, 17464, 17494,  /* 512 - 543*/
                17524, 17554, 17585, 17615, 17645, 17675, 17705, 17735, 17765, 17795, 17826, 17856, 17886, 17916, 17946, 17976, 18006, 18037, 18067, 18097, 18127, 18157, 18187, 18217, 18248, 18278, 18308, 18338, 18368, 18398, 18428, 18459,  /* 544 - 575*/
                18489, 18519, 18549, 18579, 18609, 18639, 18669, 18700, 18730, 18760, 18790, 18820, 18850, 18880, 18911, 18941, 18971, 19001, 19031, 19061, 19091, 19122, 19152, 19182, 19212, 19242, 19272, 19302, 19333, 19363, 19393, 19423,  /* 576 - 607*/
                19453, 19483, 19513, 19543, 19574, 19604, 19634, 19664, 19694, 19724, 19754, 19785, 19815, 19845, 19875, 19905, 19935, 19965, 19996, 20026, 20056, 20086, 20116, 20146, 20176, 20207, 20237, 20267, 20297, 20327, 20357, 20387,  /* 608 - 639*/
                20417, 20448, 20478, 20508, 20538, 20568, 20598, 20628, 20659, 20689, 20719, 20749, 20779, 20809, 20839, 20870, 20900, 20930, 20960, 20990, 21020, 21050, 21081, 21111, 21141, 21171, 21201, 21231, 21261, 21291, 21322, 21352,  /* 640 - 671*/
                21382, 21412, 21442, 21472, 21502, 21533, 21563, 21593, 21623, 21653, 21683, 21713, 21744, 21774, 21804, 21834, 21864, 21894, 21924, 21955, 21985, 22015, 22045, 22075, 22105, 22135, 22165, 22196, 22226, 22256, 22286, 22316,  /* 672 - 703*/
                22346, 22376, 22407, 22437, 22467, 22497, 22527, 22557, 22587, 22618, 22648, 22678, 22708, 22738, 22768, 22798, 22829, 22859, 22889, 22919, 22949, 22979, 23009, 23039, 23070, 23100, 23130, 23160, 23190, 23220, 23250, 23281,  /* 704 - 735*/
                23311, 23341, 23371, 23401, 23431, 23461, 23492, 23522, 23552, 23582, 23612, 23642, 23672, 23703, 23733, 23763, 23793, 23823, 23853, 23883, 23913, 23944, 23974, 24004, 24034, 24064, 24094, 24124, 24155, 24185, 24215, 24245,  /* 736 - 767*/
                24275, 24305, 24335, 24366, 24396, 24426, 24456, 24486, 24516, 24546, 24577, 24607, 24637, 24667, 24697, 24727, 24757, 24787, 24818, 24848, 24878, 24908, 24938, 24968, 24998, 25029, 25059, 25089, 25119, 25149, 25179, 25209,  /* 768 - 799*/
                25240, 25270, 25300, 25330, 25360, 25390, 25420, 25451, 25481, 25511, 25541, 25571, 25601, 25631, 25661, 25692, 25722, 25752, 25782, 25812, 25842, 25872, 25903, 25933, 25963, 25993, 26023, 26053, 26083, 26114, 26144, 26174,  /* 800 - 831*/
                26204, 26234, 26264, 26294, 26325, 26355, 26385, 26415, 26445, 26475, 26505, 26535, 26566, 26596, 26626, 26656, 26686, 26716, 26746, 26777, 26807, 26837, 26867, 26897, 26927, 26957, 26988, 27018, 27048, 27078, 27108, 27138,  /* 832 - 863*/
                27168, 27199, 27229, 27259, 27289, 27319, 27349, 27379, 27410, 27440, 27470, 27500, 27530, 27561, 27591, 27621, 27652, 27682, 27712, 27743, 27773, 27804, 27834, 27865, 27896, 27926, 27957, 27988, 28018, 28049, 28080, 28111,  /* 864 - 895*/
                28142, 28173, 28204, 28234, 28266, 28297, 28328, 28359, 28390, 28421, 28452, 28484, 28515, 28546, 28578, 28609, 28641, 28672, 28704, 28735, 28767, 28799, 28830, 28862, 28894, 28926, 28958, 28990, 29022, 29054, 29086, 29118,  /* 896 - 927*/
                29150, 29183, 29215, 29247, 29280, 29312, 29344, 29377, 29410, 29442, 29475, 29508, 29541, 29573, 29606, 29639, 29672, 29706, 29739, 29772, 29805, 29839, 29872, 29905, 29939, 29973, 30006, 30040, 30074, 30108, 30142, 30176,  /* 928 - 959*/
                30210, 30244, 30278, 30313, 30347, 30382, 30416, 30451, 30486, 30521, 30556, 30591, 30626, 30661, 30697, 30732, 30768, 30803, 30839, 30875, 30911, 30947, 30983, 31020, 31056, 31093, 31130, 31167, 31204, 31241, 31278, 31316,  /* 960 - 991*/
                31354, 31391, 31429, 31468, 31506, 31545, 31584, 31623, 31662, 31701, 31741, 31781, 31821, 31862, 31903, 31944, 31986, 32028, 32070, 32113, 32156, 32200, 32244, 32289, 32335, 32382, 32430, 32478, 32529, 32581, 32635, 32694,  /* 992 - 1023*/
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
            /* tHrParam */
            {
                /* 0 */
                {
                    /* nLocalFactor[12] */
                    {64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 11*/},
                    /* nRltmStrength[12] */
                    {76, 76, 76, 74, 72, 72, 72, 76, 78, 78, 78, 78, /*0 - 11*/},
                    /* nContrastStrength[12] */
                    {32, 32, 30, 30, 30, 21, 21, 21, 26, 26, 26, 26, /*0 - 11*/},
                    /* nPostGamma[12] */
                    {40, 40, 42, 42, 44, 44, 44, 42, 40, 40, 40, 40, /*0 - 11*/},
                    /* nHighlightSup[12] */
                    {6, 6, 6, 6, 6, 6, 6, 4, 3, 2, 2, 2, /*0 - 11*/},
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
        {255, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 15*/},
    },
};

const static AX_ISP_IQ_GIC_PARAM_T gic_param_sdr = {
    /* nGicEnable */
    1,
    /* nAutoMode */
    1,
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
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1026432, 1024, 1024, 1024, 1024, 1024, /*0 - 15*/},
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
        0,
        /* nDetEdgeSlopeC */
        15,
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
        {0, 0, 0, 81, 128, 128, 128, 84, /*0 - 7*/},
        /* nCompTargetHue[16] */
        {128, 128, 86, 0, 0, 64, 64, 0, 0, 13, 26, 38, 32, 32, 64, 128, /*0 - 15*/},
        /* nCompTargetSat[6] */
        {0, 0, 96, 128, 128, 86, /*0 - 5*/},
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
        0,
        /* nCcmHue */
        0,
        /* nCcmMatrix[6] */
        {-58, -52, -60, -73, -3, -110, /*0 - 5*/},
        /* nXcmCtrlLevel[16] */
        {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 15*/},
        /* nXcmSat[16] */
        {-5, -5, -5, 0, -20, -15, -15, -25, -15, 10, 10, 10, 0, 0, 0, -15, /*0 - 15*/},
        /* nXcmHue[16] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
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
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
                {3072, 16229, 61986, 368640, 1024000, /*0 - 4*/},
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
                {-20, -20, -20, -20, -20, /*0 - 4*/},
                {-3, -3, 5, 5, -3, /*0 - 4*/},
                {5, 5, 10, 10, 0, /*0 - 4*/},
                {5, 5, 5, 5, 0, /*0 - 4*/},
                {-7, -6, -3, -3, -3, /*0 - 4*/},
                {-7, -6, -3, -3, -3, /*0 - 4*/},
                {-3, -3, -3, -8, -20, /*0 - 4*/},
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
                    {84, -151, -172, -1, -35, -418, /*0 - 5*/},
                    {84, -151, -172, -1, -35, -418, /*0 - 5*/},
                    {84, -151, -172, -1, -35, -418, /*0 - 5*/},
                    {84, -151, -172, -1, -35, -418, /*0 - 5*/},
                    {84, -151, -172, -1, -35, -418, /*0 - 5*/},
                },
                /* nCcmMatrix 1 */
                {
                    {33, -104, -80, -24, -11, -200, /*0 - 5*/},
                    {33, -104, -80, -24, -11, -200, /*0 - 5*/},
                    {33, -104, -80, -24, -11, -200, /*0 - 5*/},
                    {33, -104, -80, -24, -11, -200, /*0 - 5*/},
                    {33, -104, -80, -24, -11, -200, /*0 - 5*/},
                },
                /* nCcmMatrix 2 */
                {
                    {-8, -76, -59, -50, -3, -135, /*0 - 5*/},
                    {-8, -76, -59, -50, -3, -135, /*0 - 5*/},
                    {-118, -76, -59, -50, -3, -135, /*0 - 5*/},
                    {-118, -76, -59, -50, -3, -135, /*0 - 5*/},
                    {-118, -76, -59, -50, -3, -135, /*0 - 5*/},
                },
                /* nCcmMatrix 3 */
                {
                    {-19, -69, -50, -55, -2, -130, /*0 - 5*/},
                    {-19, -69, -50, -55, -2, -130, /*0 - 5*/},
                    {-118, -69, -50, -55, -2, -130, /*0 - 5*/},
                    {-118, -69, -50, -55, -2, -130, /*0 - 5*/},
                    {-118, -69, -50, -55, -2, -130, /*0 - 5*/},
                },
                /* nCcmMatrix 4 */
                {
                    {-37, -62, -55, -65, -2, -120, /*0 - 5*/},
                    {-37, -62, -30, -65, -2, -120, /*0 - 5*/},
                    {-118, -62, -30, -65, -2, -120, /*0 - 5*/},
                    {-118, -62, -30, -65, -2, -120, /*0 - 5*/},
                    {-118, -62, -30, -65, -2, -120, /*0 - 5*/},
                },
                /* nCcmMatrix 5 */
                {
                    {-58, -52, -60, -73, -3, -110, /*0 - 5*/},
                    {-58, -52, -30, -73, -3, -110, /*0 - 5*/},
                    {-128, -52, -30, -73, -3, -110, /*0 - 5*/},
                    {-128, -52, -30, -73, -3, -110, /*0 - 5*/},
                    {-128, -52, -30, -73, -3, -110, /*0 - 5*/},
                },
                /* nCcmMatrix 6 */
                {
                    {-71, -46, -81, -77, -3, -165, /*0 - 5*/},
                    {-71, -46, -81, -77, -3, -165, /*0 - 5*/},
                    {-128, -46, -81, -77, -3, -165, /*0 - 5*/},
                    {-128, -46, -81, -77, -3, -165, /*0 - 5*/},
                    {-128, -46, -81, -77, -3, -165, /*0 - 5*/},
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
                    {-15, -5, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -10, -5, 0, 0, -20, -25, -20, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -10, -5, 0, 0, -15, -20, -20, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -10, -5, 0, 0, -15, -20, -20, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -10, -5, 0, 0, -15, -20, -15, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                },
                /* nXcmSat 1 */
                {
                    {-15, -5, -5, 0, -20, -15, -10, -5, 0, 0, 0, 0, 0, -5, -10, -20, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -20, -25, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -20, -25, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -20, -25, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -5, -5, 0, -20, -15, -20, -25, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                },
                /* nXcmSat 2 */
                {
                    {-15, -15, -15, -10, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -20, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -15, -20, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -15, -15, -25, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                },
                /* nXcmSat 3 */
                {
                    {-15, -15, -15, -10, -20, -15, -15, -25, -15, 15, 15, 15, 0, -4, -10, -20, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -25, -25, -25, 15, 15, 15, 0, -5, -10, -20, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -25, -25, -25, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -15, -15, -10, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                },
                /* nXcmSat 4 */
                {
                    {-15, -15, -15, -15, -20, -15, -20, -25, -15, 10, 10, 10, 0, -5, -10, -20, /*0 - 15*/},
                    {-15, -15, -15, -15, -20, -15, -20, -25, -15, 10, 10, 10, 0, -5, -10, -20, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -20, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -15, -25, -15, 15, 15, 15, 0, -5, -10, -15, /*0 - 15*/},
                },
                /* nXcmSat 5 */
                {
                    {-15, -15, -15, -15, -20, -15, -15, -25, -15, 10, 10, 10, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -15, -15, -15, -20, -15, -15, -25, -15, 10, 10, 10, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -15, -25, -15, 10, 10, 10, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -20, -25, -15, 10, 10, 10, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -5, -5, 0, -20, -15, -20, -25, -15, 10, 10, 10, 0, -5, -10, -15, /*0 - 15*/},
                },
                /* nXcmSat 6 */
                {
                    {-15, -5, -5, 0, 0, -10, -15, -15, -15, 0, 0, 0, 0, -5, -10, -20, /*0 - 15*/},
                    {-15, -10, -5, 0, 0, -10, -15, -20, -15, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-15, -10, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -10, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, -10, -15, /*0 - 15*/},
                    {-10, -10, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -5, -15, /*0 - 15*/},
                },
            },
            /* nXcmHue[12][5][16] */
            {
                /* nXcmHue 0 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 1 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 2 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 3 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 4 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 5 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                },
                /* nXcmHue 6 */
                {
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 320, 0, 0, 0, 0, 0, /*0 - 15*/},
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
                0, 62, 126, 190, 255, 321, 387, 453, 520, 585, 651, 716, 780, 843, 904, 965, 1024, 1081, 1136, 1190, 1244, 1297, 1349, 1402, 1454, 1508, 1561, 1615, 1670, 1724, 1778, 1832,  /* 0 - 31*/
                1885, 1938, 1991, 2043, 2095, 2147, 2199, 2250, 2301, 2353, 2404, 2455, 2506, 2555, 2604, 2651, 2698, 2742, 2785, 2827, 2867, 2906, 2943, 2980, 3015, 3050, 3084, 3116, 3148, 3179, 3209, 3239,  /* 32 - 63*/
                3268, 3296, 3323, 3350, 3376, 3401, 3425, 3449, 3471, 3493, 3515, 3535, 3554, 3573, 3591, 3607, 3624, 3639, 3653, 3667, 3680, 3692, 3704, 3716, 3727, 3737, 3747, 3757, 3766, 3775, 3784, 3793,  /* 64 - 95*/
                3802, 3810, 3819, 3827, 3836, 3844, 3853, 3862, 3870, 3879, 3888, 3897, 3907, 3916, 3925, 3934, 3944, 3953, 3962, 3971, 3980, 3990, 3999, 4008, 4017, 4027, 4036, 4046, 4055, 4065, 4075, 4085,  /* 96 - 127*/
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
        {0, 100, 512000, /*0 - 2*/},
        /* nRefValEnd[3] */
        {30, 204800, 1024000, /*0 - 2*/},
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
        52,
        /* nGrayDcRatio */
        64,
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 40960, 50800, 204800, 406400, 812800, /*0 - 11*/},
        /* nEffectStrength[12] */
        {50, 50, 74, 74, 62, 62, 48, 48, 48, 48, 48, 48, /*0 - 11*/},
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
    1,
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
        {192, 240, 256, 256, /*0 - 3*/},
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
            {192, 240, 256, 256, /*0 - 3*/},
            {192, 240, 256, 256, /*0 - 3*/},
            {192, 240, 256, 256, /*0 - 3*/},
            {192, 240, 256, 256, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
            {192, 309, 619, 619, /*0 - 3*/},
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
        11,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1024000, /*0 - 10*/},
        /* nCnrLevel[12] */
        {16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, /*0 - 10*/},
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
            {64, 64, 64, 72, 76, 76, 76, 64, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
            {64, 64, 64, 72, 76, 76, 76, 64, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
        },
        /* nMotDetStrenLuma[2] */
        {230, -10, /*0 - 1*/},
        /* nMotDetStrenChrom[2] */
        {230, -10, /*0 - 1*/},
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
            {21, 255, /*0 - 1*/},
            {21, 255, /*0 - 1*/},
        },
        /* nTfRatLimitChroma[2][2] */
        {
            {21, 255, /*0 - 1*/},
            {21, 255, /*0 - 1*/},
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
            {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
            {256, 256, 256, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
        },
        /* nSf0LumaKernelSize[2] */
        {0, 0, /*0 - 1*/},
        /* nSf0LumaGauStre[2] */
        {128, 128, /*0 - 1*/},
        /* nSf0lumaBlendRatio[2][3] */
        {
            {180, 0, 76, /*0 - 2*/},
            {87, 0, 169, /*0 - 2*/},
        },
        /* nSf0ChromaAttenStre[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf0ChromaAttenLimit[2] */
        {255, 255, /*0 - 1*/},
        /* nSf0ChromaProtLut[2][9] */
        {
            {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
            {11, 11, 11, 11, 11, 11, 11, 11, 11, /*0 - 8*/},
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
            {256, 256, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
        },
        /* nSf1LumaIdrThre[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaIdrGain[2] */
        {0, 0, /*0 - 1*/},
        /* nSf1LumaClipLevel[2] */
        {1023, 1023, /*0 - 1*/},
        /* nSf1LumaCoring[2] */
        {256, 512, /*0 - 1*/},
        /* nSf1LumaBlendRatio[2] */
        {47, 169, /*0 - 1*/},
        /* nSf1ChromaCoring */
        1021,
        /* nSf1ChromaBlendRatio */
        6,
        /* nSf2LumaGauStre[2] */
        {128, 128, /*0 - 1*/},
        /* nSf2LumaMedEn */
        0,
        /* nSf2KernelSize */
        1,
        /* nSf2NoiseLut[2][9] */
        {
            {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
        },
        /* nSf2BlendRatio[2][3] */
        {
            {64, 0, 192, /*0 - 2*/},
            {58, 0, 198, /*0 - 2*/},
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
        1,
        /* nSfGuideMapLuma[2] */
        {256, 0, /*0 - 1*/},
        /* nSfGuideMapChroma[2] */
        {256, 0, /*0 - 1*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        9,
        /* nRefVal[12] */
        {1024, 2048, 4096, 10240, 16384, 28672, 65536, 262144, 1048576, /*0 - 8*/},
        /* nMotDetNoiseLut[12][2][17] */
        {
            /* nMotDetNoiseLut 0 */
            {
                {48, 42, 32, 32, 32, 32, 32, 36, 48, 48, 48, 32, 32, 32, 32, 32, 32, /*0 - 16*/},
                {48, 42, 32, 32, 32, 32, 32, 32, 42, 48, 48, 36, 36, 32, 24, 24, 24, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 1 */
            {
                {64, 64, 36, 36, 36, 36, 36, 64, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
                {64, 64, 32, 32, 32, 32, 32, 32, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 2 */
            {
                {64, 64, 64, 72, 76, 76, 76, 64, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
                {64, 64, 64, 72, 76, 76, 76, 64, 64, 64, 48, 46, 46, 32, 32, 32, 32, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 3 */
            {
                {160, 160, 160, 160, 150, 160, 140, 130, 130, 130, 110, 100, 90, 80, 80, 80, 80, /*0 - 16*/},
                {90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 4 */
            {
                {180, 180, 180, 180, 170, 180, 160, 150, 150, 150, 130, 120, 110, 100, 100, 100, 100, /*0 - 16*/},
                {110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 5 */
            {
                {180, 180, 180, 180, 170, 180, 160, 150, 150, 150, 130, 120, 110, 100, 100, 100, 100, /*0 - 16*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 6 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                {128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 7 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
            },
            /* nMotDetNoiseLut 8 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
                {256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 16*/},
            },
        },
        /* nMotDetStrenLuma[12][2] */
        {
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
            {146, -10, /*0 - 1*/},
        },
        /* nMotDetStrenChrom[12][2] */
        {
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {230, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
            {206, -10, /*0 - 1*/},
        },
        /* nMotDetSmoothLuma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
        },
        /* nMotDetSmoothChroma[12][2] */
        {
            {2, 1, /*0 - 1*/},
            {2, 1, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
            {2, 0, /*0 - 1*/},
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
        },
        /* nMotDetBlendRatio[12][2] */
        {
            {256, 32, /*0 - 1*/},
            {256, 64, /*0 - 1*/},
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
        },
        /* nTfRatioLut[12][16] */
        {
            {200, 200, 200, 200, 158, 158, 158, 120, 100, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
            {200, 200, 200, 200, 158, 158, 158, 120, 100, 80, 60, 40, 35, 25, 20, 12, /*0 - 15*/},
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
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 1 */
            {
                {16, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 2 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 3 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 4 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 5 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 6 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 7 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitLuma 8 */
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
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 1 */
            {
                {16, 255, /*0 - 1*/},
                {32, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 2 */
            {
                {64, 255, /*0 - 1*/},
                {64, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 3 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 4 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 5 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 6 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 7 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
            /* nTfRatLimitChroma 8 */
            {
                {60, 255, /*0 - 1*/},
                {60, 255, /*0 - 1*/},
            },
        },
        /* nSf0EdgeStre[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
        /* nSf0DirStre[12] */
        {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
        /* nSf0DetailStre[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nSf0LumaNoiseLut[12][4][9] */
        {
            /* nSf0LumaNoiseLut 0 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 1 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 2 */
            {
                {256, 256, 256, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {256, 256, 256, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 3 */
            {
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 4 */
            {
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 5 */
            {
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 6 */
            {
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 7 */
            {
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf0LumaNoiseLut 8 */
            {
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 128, 192, 256, 256, 256, 256, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
        },
        /* nSf0LumaKernelSize[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 3, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
            {1, 0, /*0 - 1*/},
        },
        /* nSf0LumaGauStre[12][2] */
        {
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
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
                {96, 0, 160, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 1 */
            {
                {128, 0, 128, /*0 - 2*/},
                {96, 0, 160, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 2 */
            {
                {64, 0, 192, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 3 */
            {
                {64, 0, 192, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 4 */
            {
                {64, 0, 192, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 5 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 6 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 7 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf0lumaBlendRatio 8 */
            {
                {128, 0, 128, /*0 - 2*/},
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
        },
        /* nSf0ChromaAttenLimit[12][2] */
        {
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {255, 255, /*0 - 1*/},
            {230, 220, /*0 - 1*/},
            {168, 180, /*0 - 1*/},
            {128, 148, /*0 - 1*/},
            {128, 148, /*0 - 1*/},
            {128, 148, /*0 - 1*/},
            {128, 148, /*0 - 1*/},
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
                {20, 20, 20, 20, 20, 20, 20, 20, 20, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 3 */
            {
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 4 */
            {
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 5 */
            {
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 6 */
            {
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 7 */
            {
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
            /* nSf0ChromaProtLut 8 */
            {
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
                {128, 128, 128, 256, 256, 256, 256, 256, 256, /*0 - 8*/},
            },
        },
        /* nSf1LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
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
        },
        /* nSf1LumaGauRatio[12][2] */
        {
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {0, 0, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
            {56, 32, /*0 - 1*/},
        },
        /* nSf1LumaKernelSize[12] */
        {0, 0, 0, 1, 1, 1, 1, 1, 1, /*0 - 8*/},
        /* nSf1LumaNoiseLut[12][2][9] */
        {
            /* nSf1LumaNoiseLut 0 */
            {
                {256, 256, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 1 */
            {
                {256, 256, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 2 */
            {
                {256, 256, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
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
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 7 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf1LumaNoiseLut 8 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
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
        },
        /* nSf1LumaCoring[12][2] */
        {
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
            {256, 512, /*0 - 1*/},
        },
        /* nSf1LumaBlendRatio[12][2] */
        {
            {32, 160, /*0 - 1*/},
            {32, 160, /*0 - 1*/},
            {192, 256, /*0 - 1*/},
            {192, 256, /*0 - 1*/},
            {192, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
            {128, 256, /*0 - 1*/},
        },
        /* nSf1ChromaCoring[12] */
        {1023, 1023, 998, 1000, 256, 256, 256, 256, 256, /*0 - 8*/},
        /* nSf1ChromaBlendRatio[12] */
        {0, 0, 60, 20, 35, 35, 35, 35, 35, /*0 - 8*/},
        /* nSf2LumaGauStre[12][2] */
        {
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {128, 128, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
            {48, 60, /*0 - 1*/},
        },
        /* nSf2LumaMedEn[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nSf2KernelSize[12] */
        {1, 1, 1, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nSf2NoiseLut[12][2][9] */
        {
            /* nSf2NoiseLut 0 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 1 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 2 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 3 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 4 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 5 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 6 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 7 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
            /* nSf2NoiseLut 8 */
            {
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
                {64, 64, 64, 64, 64, 64, 64, 64, 64, /*0 - 8*/},
            },
        },
        /* nSf2BlendRatio[12][2][3] */
        {
            /* nSf2BlendRatio 0 */
            {
                {64, 0, 192, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 1 */
            {
                {64, 0, 192, /*0 - 2*/},
                {64, 0, 192, /*0 - 2*/},
            },
            /* nSf2BlendRatio 2 */
            {
                {64, 0, 192, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 3 */
            {
                {64, 0, 192, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 4 */
            {
                {64, 0, 192, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 5 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 6 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 7 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
            /* nSf2BlendRatio 8 */
            {
                {128, 0, 128, /*0 - 2*/},
                {0, 0, 256, /*0 - 2*/},
            },
        },
        /* nExtMaskStrenLuma[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nExtMaskStrenChrom[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
        /* nExtMaskStrenStatus[12] */
        {128, 128, 128, 128, 128, 128, 128, 128, 128, /*0 - 8*/},
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
        },
        /* nY3dnrPos[12] */
        {0, 0, 0, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nStaRefineErode[12] */
        {1, 1, 1, 0, 0, 0, 0, 0, 0, /*0 - 8*/},
        /* nSfGuideMapLuma[12][2] */
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
        {0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, /*0 - 16*/},
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
        {96, 96, /*0 - 1*/},
        /* nOsStaticGain[2] */
        {4, 2, /*0 - 1*/},
        /* nOsMotionLimit[2] */
        {127, 127, /*0 - 1*/},
        /* nOsMotionGain[2] */
        {4, 2, /*0 - 1*/},
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
        {1, 1, 1, 1, 0, 0, 0, 0, /*0 - 7*/},
        /* nColorCenter[8][3] */
        {
            {464, -256, -256, /*0 - 2*/},
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
            {508, 256, 256, /*0 - 2*/},
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
            {1, 1, 1, /*0 - 2*/},
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
        0,
        /* nHighFreqTextureLutMotionLevel */
        0,
        /* nHighFreqClnpMskEn[4] */
        {1, 1, 0, 0, /*0 - 3*/},
        /* nHighFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nHighFreqMotionLut[5] */
        {0, 0, 0, 127, 127, /*0 - 4*/},
        /* nHighFreqLumaLut[5] */
        {0, 0, 30, 65, 127, /*0 - 4*/},
        /* nHighFreqTextureLut[9] */
        {0, 32, 32, 48, 56, 64, 80, 96, 112, /*0 - 8*/},
        /* nHighFreqTextureLutMotion[9] */
        {0, 0, 0, 0, 127, 127, 127, 127, 127, /*0 - 8*/},
        /* nHighFreqClnpLut[4][5] */
        {
            {0, 0, 0, 64, 127, /*0 - 4*/},
            {127, 64, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nHighFreqOsLimit[2] */
        {32, 32, /*0 - 1*/},
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
        0,
        /* nMedFreqTextureLutMotionLevel */
        0,
        /* nMedFreqClnpMskEn[4] */
        {1, 1, 0, 0, /*0 - 3*/},
        /* nMedFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nMedFreqMotionLut[5] */
        {0, 0, 0, 127, 127, /*0 - 4*/},
        /* nMedFreqLumaLut[5] */
        {0, 0, 37, 73, 127, /*0 - 4*/},
        /* nMedFreqTextureLut[9] */
        {0, 32, 54, 74, 94, 106, 112, 120, 127, /*0 - 8*/},
        /* nMedFreqTextureLutMotion[9] */
        {0, 0, 0, 0, 0, 127, 127, 127, 127, /*0 - 8*/},
        /* nMedFreqClnpLut[4][5] */
        {
            {0, 0, 0, 64, 127, /*0 - 4*/},
            {127, 64, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nMedFreqOsLimit[2] */
        {32, 32, /*0 - 1*/},
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
        {0, 32, 58, 68, 88, 102, 110, 114, 114, /*0 - 8*/},
        /* nDirFreqTextureLutMotion[9] */
        {0, 0, 0, 0, 127, 127, 127, 127, 127, /*0 - 8*/},
        /* nDirFreqClnpLut[4][5] */
        {
            {0, 0, 0, 64, 127, /*0 - 4*/},
            {127, 64, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nDirFreqOsLimit[2] */
        {32, 32, /*0 - 1*/},
        /* nDirFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
        /* nDirFreqDirEdgeLevelLut[9] */
        {196, 196, 255, 255, 255, 255, 255, 255, 255, /*0 - 8*/},
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
        0,
        /* nLowFreqTextureLutMotionLevel */
        0,
        /* nLowFreqClnpMskEn[4] */
        {1, 1, 0, 0, /*0 - 3*/},
        /* nLowFreqClnpLutLevel[4] */
        {0, 0, 0, 0, /*0 - 3*/},
        /* nLowFreqMotionLut[5] */
        {0, 0, 0, 127, 127, /*0 - 4*/},
        /* nLowFreqLumaLut[5] */
        {0, 0, 49, 85, 124, /*0 - 4*/},
        /* nLowFreqTextureLut[9] */
        {0, 32, 58, 84, 98, 106, 108, 110, 110, /*0 - 8*/},
        /* nLowFreqTextureLutMotion[9] */
        {0, 0, 0, 0, 127, 127, 127, 127, 127, /*0 - 8*/},
        /* nLowFreqClnpLut[4][5] */
        {
            {0, 0, 0, 64, 127, /*0 - 4*/},
            {127, 64, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
            {0, 0, 0, 0, 0, /*0 - 4*/},
        },
        /* nLowFreqOsLimit[2] */
        {32, 32, /*0 - 1*/},
        /* nLowFreqOsGain[2] */
        {2, 2, /*0 - 1*/},
    },
    /* tManualParam */
    {
        /* nHighFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nHighFreqGainLimit[2] */
        {0, 128, /*0 - 1*/},
        /* nHighFreqCorBaseGain */
        8,
        /* nHighFreqCorSlope */
        4,
        /* nHighFreqCorOffset */
        24,
        /* nHighFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nMedFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nMedFreqGainLimit[2] */
        {0, 18, /*0 - 1*/},
        /* nMedFreqCorBaseGain */
        8,
        /* nMedFreqCorSlope */
        4,
        /* nMedFreqCorOffset */
        24,
        /* nMedFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nDirFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nDirFreqGainLimit[2] */
        {0, 32, /*0 - 1*/},
        /* nDirFreqCorBaseGain */
        8,
        /* nDirFreqCorSlope */
        4,
        /* nDirFreqCorOffset */
        24,
        /* nDirFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nLowFreqLogGain[2] */
        {128, 128, /*0 - 1*/},
        /* nLowFreqGainLimit[2] */
        {0, 16, /*0 - 1*/},
        /* nLowFreqCorBaseGain */
        8,
        /* nLowFreqCorSlope */
        4,
        /* nLowFreqCorOffset */
        24,
        /* nLowFreqLimit[2] */
        {256, 256, /*0 - 1*/},
        /* nShpHpfBsigma[3] */
        {8, 24, 24, /*0 - 2*/},
        /* nShpHpfDsigma[3] */
        {16, 36, 52, /*0 - 2*/},
        /* nShpHpfScale[3] */
        {128, 128, 128, /*0 - 2*/},
        /* nShpGain[2] */
        {88, 46, /*0 - 1*/},
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
        {1024, 2048, 4096, 8192, 16384, 32382, 64610, 128913, 257218, 513216, 1026432, 2052864, /*0 - 11*/},
        /* nHighFreqLogGain[12][2] */
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
            {128, 128, /*0 - 1*/},
        },
        /* nHighFreqGainLimit[12][2] */
        {
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
        },
        /* nHighFreqCorBaseGain[12] */
        {4, 4, 5, 6, 6, 6, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nHighFreqCorSlope[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nHighFreqCorOffset[12] */
        {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 11*/},
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
            {128, 128, /*0 - 1*/},
        },
        /* nMedFreqGainLimit[12][2] */
        {
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 128, /*0 - 1*/},
            {0, 64, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
        },
        /* nMedFreqCorBaseGain[12] */
        {4, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nMedFreqCorSlope[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nMedFreqCorOffset[12] */
        {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 11*/},
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
            {256, 256, /*0 - 1*/},
        },
        /* nDirFreqLogGain[12][2] */
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
            {128, 128, /*0 - 1*/},
        },
        /* nDirFreqGainLimit[12][2] */
        {
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
            {0, 32, /*0 - 1*/},
        },
        /* nDirFreqCorBaseGain[12] */
        {4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nDirFreqCorSlope[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nDirFreqCorOffset[12] */
        {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 11*/},
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
            {128, 128, /*0 - 1*/},
        },
        /* nLowFreqGainLimit[12][2] */
        {
            {0, 8, /*0 - 1*/},
            {0, 8, /*0 - 1*/},
            {0, 8, /*0 - 1*/},
            {0, 8, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
            {0, 16, /*0 - 1*/},
        },
        /* nLowFreqCorBaseGain[12] */
        {4, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, /*0 - 11*/},
        /* nLowFreqCorSlope[12] */
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, /*0 - 11*/},
        /* nLowFreqCorOffset[12] */
        {24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, /*0 - 11*/},
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
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
            {8, 24, 24, /*0 - 2*/},
        },
        /* nShpHpfDsigma[12][3] */
        {
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
            {16, 36, 52, /*0 - 2*/},
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
            {90, 48, /*0 - 1*/},
            {72, 48, /*0 - 1*/},
            {56, 48, /*0 - 1*/},
            {52, 32, /*0 - 1*/},
            {44, 24, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {32, 16, /*0 - 1*/},
            {44, 24, /*0 - 1*/},
            {44, 24, /*0 - 1*/},
            {44, 24, /*0 - 1*/},
            {44, 24, /*0 - 1*/},
        },
        /* nShpLimit[12][2] */
        {
            {-1536, 1536, /*0 - 1*/},
            {-1536, 1536, /*0 - 1*/},
            {-1536, 1536, /*0 - 1*/},
            {-1536, 1536, /*0 - 1*/},
            {-1536, 1536, /*0 - 1*/},
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
        {512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, 512, /*0 - 22*/},
    },
    /* tAutoParam */
    {
        /* nParamGrpNum */
        12,
        /* nRefVal[12] */
        {1024, 2048, 4096, 8192, 16384, 24576, 32768, 40960, 50800, 204800, 406400, 812800, /*0 - 11*/},
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
    {64, 1023, /*0 - 1*/},
    /* nYrtOutputRange[2] */
    {0, 1023, /*0 - 1*/},
    /* nCrtInputRange[2] */
    {32, 992, /*0 - 1*/},
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
