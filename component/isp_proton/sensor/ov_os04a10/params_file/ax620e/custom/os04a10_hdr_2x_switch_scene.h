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
        {0,             10240, /*0 - 2*/},
        /* nRefValEnd[2] */
        {10240,         4193280, /*0 - 2*/},
        /* eAiWorkMode[2] */
        {0, 1, /*0 - 2*/},
    },
};

#endif
