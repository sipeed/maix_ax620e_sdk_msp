/**************************************************************************************************
 *
 * Copyright (c) 2019-2024 Axera Semiconductor Co., Ltd. All Rights Reserved.
 *
 * This source file is the property of Axera Semiconductor Co., Ltd. and
 * may not be copied or distributed in any isomorphic form without the prior
 * written consent of Axera Semiconductor Co., Ltd.
 *
 **************************************************************************************************/

#ifndef _IVPS_MD5_H_
#define _IVPS_MD5_H_

typedef struct _IVPS_MD5_RESULT {
	AX_U64 nLow;
	AX_U64 nHigh;
} IVPS_MD5_RESULT_T;

typedef struct _IVPS_MD5_INFO {
	char arrCaseId[32];
	int nGrpId;
	int nChnId;

	IVPS_MD5_RESULT_T tMD5Result;
} IVPS_MD5_INFO_T;

static IVPS_MD5_INFO_T gMD5Info[] =
{
	/* CSC */
	{"MM_IVPS_SYNC_0101", 0, 0, {0xe8687eb2e384e1bc, 0x946ef8e09269129a}},
	{"MM_IVPS_SYNC_0102", 0, 0, {0x2fcee8355ff231a6, 0x5f94c4797fcff4fa}},
	{"MM_IVPS_SYNC_0103", 0, 0, {0x6ad6bfa211e028b5, 0xba308825c454717b}},
	{"MM_IVPS_SYNC_0104", 0, 0, {0xb4036d742f762955, 0xa2602bda07d02cf6}},
	{"MM_IVPS_SYNC_0105", 0, 0, {0x8c0031d0af9eb332, 0x71d62672b2426918}},

	/* CropResize */
	{"MM_IVPS_SYNC_0201", 0, 0, {0x14f212b9e4b79bf2, 0xcea674dadc3cec55}},
	{"MM_IVPS_SYNC_0202", 0, 0, {0xa1682f49b3d4a39a, 0x9ef572a9aa8eafb7}},
	{"MM_IVPS_SYNC_0203", 0, 0, {0xa1682f49b3d4a39a, 0x9ef572a9aa8eafb7}},
	{"MM_IVPS_SYNC_0204", 0, 0, {0x6d567cd1acf7aa81, 0x9dbd26e7cb18aafd}},
	{"MM_IVPS_SYNC_0205", 0, 0, {0x1ac56823cd18e4b5, 0x78505f337538eb0d}},
	{"MM_IVPS_SYNC_0206", 0, 0, {0xd0097d2a9d5517e5, 0x05b5cbf410a6a5a8}},
	{"MM_IVPS_SYNC_0207", 0, 0, {0xd19f25331fa6dda0, 0xb39bd777919e6eca}},
	{"MM_IVPS_SYNC_0208", 0, 0, {0x21c866f88c556f12, 0xb7d681290eb2d1d2}},
	{"MM_IVPS_SYNC_0209", 0, 0, {0xbb5aa60823e0bc1e, 0xf67e2e88d839de2e}},
	{"MM_IVPS_SYNC_020A", 0, 0, {0x3dfcf384390850b9, 0xd8bed1e1c507e3ff}},

	/* FlipAndRotation */
	{"MM_IVPS_SYNC_0301", 0, 0, {0xab8a40e6b6c7283a, 0x5dd0a029766f0bbd}},
	{"MM_IVPS_SYNC_0302", 0, 0, {0x1009552fa324579a, 0x58647e58b5c5e885}},

	/* AlphaBlending */
	{"MM_IVPS_SYNC_0401", 0, 0, {0x715436866696131a, 0xe5ba5847cca47564}},

	/* CropResizeV2 */
	{"MM_IVPS_SYNC_0501", 0, 0, {0xdfdf5c8789897938, 0x603c0d4724ace81b}},
	{"MM_IVPS_SYNC_0501", 0, 1, {0xa01b8cb1f838f664, 0x5538a3eb03a1c248}},
	{"MM_IVPS_SYNC_0501", 0, 2, {0xcc747927a99b557a, 0x4fbc9a516a7855cc}},
	{"MM_IVPS_SYNC_0501", 0, 3, {0x043a014f3adb65cc, 0x784cefe35d66871c}},
	{"MM_IVPS_SYNC_0501", 0, 4, {0x2188c498d2f2400d, 0xf7c55eb7ba1acf32}},

	{"MM_IVPS_SYNC_0502", 0, 0, {0x02cc88784393c069, 0xb141080ad9070431}},
	{"MM_IVPS_SYNC_0502", 0, 1, {0xfb3ce3a26fff120c, 0x2a6eeb408d220b84}},
	{"MM_IVPS_SYNC_0502", 0, 2, {0x1d87484b602e7ccb, 0x1ef0680d614a0eff}},
	{"MM_IVPS_SYNC_0502", 0, 3, {0xfb3ce3a26fff120c, 0x2a6eeb408d220b84}},
	{"MM_IVPS_SYNC_0502", 0, 4, {0x5ac28b72ef273e29, 0x9ad99c2eada48461}},

	/* Mosaic */
	{"MM_IVPS_SYNC_0601", 0, 0, {0xa86d5f36847c4455, 0xdae1f9846e8daab7}},

	/* OSD */
	{"MM_IVPS_SYNC_0701", 0, 0, {0xfc988f72f8d9cd23, 0x9ce014dc94d317db}},
	{"MM_IVPS_SYNC_0702", 0, 0, {0x8bc9794efbd4bf93, 0x9b9b5e894d7d468e}},
	{"MM_IVPS_SYNC_0703", 0, 0, {0xa6fcfce4ea9f189a, 0xe755b24c5ff3052f}},
	{"MM_IVPS_SYNC_0704", 0, 0, {0xe07e41c8b9c54392, 0xc9871eb029d5e5a8}},

	/* Mask */
	{"MM_IVPS_SYNC_0801", 0, 0, {0x3fdb62c2d0836634, 0xbdfeeac35b948a4d}},

	/* Dewarp */
	{"MM_IVPS_SYNC_0901", 0, 0, {0x1e3970ba2a4ddac2, 0xf667064b374e54f6}},
};

#endif /* _IVPS_MD5_H_ */