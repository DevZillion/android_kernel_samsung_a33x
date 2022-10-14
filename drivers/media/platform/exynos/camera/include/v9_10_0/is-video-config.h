// SPDX-License-Identifier: GPL-2.0
/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_VIDEO_CONFIG_H
#define IS_VIDEO_CONFIG_H

enum is_video_dev_num {
	IS_VIDEO_NOT_EXIST,
	IS_VIDEO_SS0_NUM = 1,
	IS_VIDEO_SS1_NUM,
	IS_VIDEO_SS2_NUM,
	IS_VIDEO_SS3_NUM,
	IS_VIDEO_SS4_NUM,
	IS_VIDEO_SS5_NUM,
	IS_VIDEO_BNS_NUM,
	IS_VIDEO_PRE_NUM = 9,
	IS_VIDEO_30S_NUM = 10,
	IS_VIDEO_30C_NUM,
	IS_VIDEO_30P_NUM,
	IS_VIDEO_30F_NUM,
	IS_VIDEO_30G_NUM,
	IS_VIDEO_30O_NUM,	/* ORB DS WDMA */
	IS_VIDEO_30L_NUM,	/* LME DS WDMA */
	IS_VIDEO_32O_NUM,	/* ORB DS WDMA */
	IS_VIDEO_32L_NUM,	/* LME DS WDMA */
	IS_VIDEO_31S_NUM = 20,
	IS_VIDEO_31C_NUM,
	IS_VIDEO_31P_NUM,
	IS_VIDEO_31F_NUM,
	IS_VIDEO_31G_NUM,
	IS_VIDEO_31O_NUM,	/* ORB DS WDMA */
	IS_VIDEO_31L_NUM,	/* LME DS WDMA */
	IS_VIDEO_33O_NUM,	/* ORB DS WDMA */
	IS_VIDEO_33L_NUM,	/* LME DS WDMA */
	IS_VIDEO_I0S_NUM = 30,
	IS_VIDEO_I0C_NUM,
	IS_VIDEO_I0P_NUM,
	IS_VIDEO_I0V_NUM,	/* MCFP/TNR PREV BAYER WDMA */
	IS_VIDEO_I0W_NUM,	/* MCFP/TNR PREV WEIGHT WDMA */
	IS_VIDEO_I0T_NUM,	/* MCFP/TNR PREV BAYER RDMA */
	IS_VIDEO_I0G_NUM,	/* MCFP/TNR PREV WEIGHT RDMA */
	IS_VIDEO_I1S_NUM = 40,
	IS_VIDEO_I1C_NUM,
	IS_VIDEO_I1P_NUM,
	IS_VIDEO_I1T_NUM,
	IS_VIDEO_ME0C_NUM = 48,
	IS_VIDEO_ME1C_NUM = 49,
	/* 55 : this section was reserved by GDC */
	IS_VIDEO_M0S_NUM = 60,
	IS_VIDEO_M1S_NUM,
	IS_VIDEO_M0P_NUM = 70,
	IS_VIDEO_M1P_NUM,
	IS_VIDEO_M2P_NUM,
	IS_VIDEO_M3P_NUM,
	IS_VIDEO_M4P_NUM,
	IS_VIDEO_M5P_NUM,
	IS_VIDEO_VRA_NUM = 80,
	IS_VIDEO_YPP_NUM = 81,
	IS_VIDEO_LME0_NUM = 85,
	IS_VIDEO_LME0S_NUM,
	IS_VIDEO_LME0C_NUM,	/* LME MOTION HW OUT(pure motion) */
	IS_VIDEO_LME1_NUM = 88,
	IS_VIDEO_LME1S_NUM,
	IS_VIDEO_LME1C_NUM,	/* LME MOTION HW OUT(pure motion) */
	IS_VIDEO_CLH0S_NUM = 94,
	IS_VIDEO_CLH0C_NUM,
	IS_VIDEO_ORB0C_NUM,
	IS_VIDEO_ORB1C_NUM,
	IS_VIDEO_ORB0_NUM,
	IS_VIDEO_ORB1_NUM,
	/* 100~109 : this section was reserved by jpeg etc. */
	IS_VIDEO_SS0VC0_NUM = 110,
	IS_VIDEO_SS0VC1_NUM,
	IS_VIDEO_SS0VC2_NUM,
	IS_VIDEO_SS0VC3_NUM,
	IS_VIDEO_SS1VC0_NUM,
	IS_VIDEO_SS1VC1_NUM,
	IS_VIDEO_SS1VC2_NUM,
	IS_VIDEO_SS1VC3_NUM,
	IS_VIDEO_SS2VC0_NUM,
	IS_VIDEO_SS2VC1_NUM,
	IS_VIDEO_SS2VC2_NUM = 120,
	IS_VIDEO_SS2VC3_NUM,
	IS_VIDEO_SS3VC0_NUM,
	IS_VIDEO_SS3VC1_NUM,
	IS_VIDEO_SS3VC2_NUM,
	IS_VIDEO_SS3VC3_NUM,
	IS_VIDEO_SS4VC0_NUM,
	IS_VIDEO_SS4VC1_NUM,
	IS_VIDEO_SS4VC2_NUM,
	IS_VIDEO_SS4VC3_NUM,
	IS_VIDEO_SS5VC0_NUM = 130,
	IS_VIDEO_SS5VC1_NUM,
	IS_VIDEO_SS5VC2_NUM,
	IS_VIDEO_SS5VC3_NUM,
	/* 134~135 : reserved */
	IS_VIDEO_PAF0S_NUM = 140,
	IS_VIDEO_PAF1S_NUM,
	IS_VIDEO_PAF2S_NUM,
	IS_VIDEO_PAF3S_NUM,
	IS_VIDEO_32S_NUM = 145,
	IS_VIDEO_32C_NUM,
	IS_VIDEO_32P_NUM,
	IS_VIDEO_32F_NUM,
	IS_VIDEO_32G_NUM,
	IS_VIDEO_33S_NUM = 150,
	IS_VIDEO_33C_NUM,
	IS_VIDEO_33P_NUM,
	IS_VIDEO_33F_NUM,
	IS_VIDEO_33G_NUM = 154,

	/* Logical video node */
	IS_VIDEO_LVN_BASE = 155,
	IS_VIDEO_30D_NUM = IS_VIDEO_LVN_BASE,	/* DRC GRID WDMA*/
	IS_VIDEO_31D_NUM,
	IS_VIDEO_32D_NUM,
	IS_VIDEO_33D_NUM,
	IS_VIDEO_30H_NUM,	/* HF WDMA */
	IS_VIDEO_31H_NUM = 160,
	IS_VIDEO_32H_NUM,
	IS_VIDEO_33H_NUM,
	IS_VIDEO_IMM_NUM,	/* MCFP MOTION RDMA */
	IS_VIDEO_IRG_NUM,	/* DNS RGB RDMA */
	IS_VIDEO_ISC_NUM,	/* DNS SEGMENT CONFIDENCE MAP */
	IS_VIDEO_IDR_NUM,	/* DNS DRC GRID RDMA */
	IS_VIDEO_INR_NUM,	/* DNS NOISE RDMA */
	IS_VIDEO_IND_NUM,	/* DNS NR DS WDMA */
	IS_VIDEO_IDG_NUM,	/* DNS DRC GAIN WDMA */
	IS_VIDEO_ISH_NUM = 170,	/* DNS SV HIST WDMA */
	IS_VIDEO_IHF_NUM,	/* DNS HF WDMA */
	IS_VIDEO_INW_NUM,	/* DNS NOISE WDMA */
	IS_VIDEO_INRW_NUM,	/* DNS NOISE REP WDMA */
	IS_VIDEO_IRGW_NUM,	/* DNS RGB WDMA */
	IS_VIDEO_INB_NUM = 175,	/* DNS NR BAYER */
	IS_VIDEO_YND_NUM,	/* YUVPP NR DS RDMA */
	IS_VIDEO_YDG_NUM,	/* YUVPP DRC GAIN RDMA */
	IS_VIDEO_YSH_NUM,	/* YUVPP SV HIST RDMA */
	IS_VIDEO_YNS_NUM,	/* YUVPP NOISE RDMA */
	IS_VIDEO_LME0M_NUM = 180,	/* LME MOTION SW OUT(processed motion) */
	IS_VIDEO_LME1M_NUM = 181,	/* LME MOTION SW OUT(processed motion) */
	IS_VIDEO_MAX_NUM
};

static const char * const vn_name[IS_VIDEO_MAX_NUM + 1] = {
	[IS_VIDEO_NOT_EXIST] = "V:NE",
	[IS_VIDEO_SS0_NUM] = "V:SS0",
	[IS_VIDEO_SS1_NUM] = "V:SS1",
	[IS_VIDEO_SS2_NUM] = "V:SS2",
	[IS_VIDEO_SS3_NUM] = "V:SS3",
	[IS_VIDEO_SS4_NUM] = "V:SS4",
	[IS_VIDEO_SS5_NUM] = "V:SS5",
	[IS_VIDEO_BNS_NUM] = "V:BNS",
	[IS_VIDEO_PRE_NUM] = "V:PRE",
	[IS_VIDEO_30S_NUM] = "V:30S",
	[IS_VIDEO_30C_NUM] = "V:30C",
	[IS_VIDEO_30P_NUM] = "V:30P",
	[IS_VIDEO_30F_NUM] = "V:30F",
	[IS_VIDEO_30G_NUM] = "V:30G",
	[IS_VIDEO_30O_NUM] = "V:30O",
	[IS_VIDEO_30L_NUM] = "V:30L",
	[IS_VIDEO_32O_NUM] = "V:32O",
	[IS_VIDEO_32L_NUM] = "V:32L",
	[IS_VIDEO_31S_NUM] = "V:31S",
	[IS_VIDEO_31C_NUM] = "V:31C",
	[IS_VIDEO_31P_NUM] = "V:31P",
	[IS_VIDEO_31F_NUM] = "V:31F",
	[IS_VIDEO_31G_NUM] = "V:31G",
	[IS_VIDEO_31O_NUM] = "V:31O",
	[IS_VIDEO_31L_NUM] = "V:31L",
	[IS_VIDEO_33O_NUM] = "V:33O",
	[IS_VIDEO_33L_NUM] = "V:33L",

	[IS_VIDEO_I0S_NUM] = "V:I0S",
	[IS_VIDEO_I0C_NUM] = "V:I0C",
	[IS_VIDEO_I0P_NUM] = "V:I0P",
	[IS_VIDEO_I0V_NUM] = "V:TBW",
	[IS_VIDEO_I0W_NUM] = "V:TWW",
	[IS_VIDEO_I0T_NUM] = "V:TBR",
	[IS_VIDEO_I0G_NUM] = "V:TWR",
	[IS_VIDEO_ME0C_NUM] = "V:M0C",
	[IS_VIDEO_ME1C_NUM] = "V:M1C",
	[IS_VIDEO_M0S_NUM] = "V:M0S",
	[IS_VIDEO_M1S_NUM] = "V:M1S",
	[IS_VIDEO_M0P_NUM] = "V:M0P",
	[IS_VIDEO_M1P_NUM] = "V:M1P",
	[IS_VIDEO_M2P_NUM] = "V:M2P",
	[IS_VIDEO_M3P_NUM] = "V:M3P",
	[IS_VIDEO_M4P_NUM] = "V:M4P",
	[IS_VIDEO_M5P_NUM] = "V:M5P",

	[IS_VIDEO_VRA_NUM] = "V:VRA",
	[IS_VIDEO_YPP_NUM] = "V:YPP",
	[IS_VIDEO_LME0_NUM] = "V:LME0",
	[IS_VIDEO_LME0S_NUM] = "V:LE0S",
	[IS_VIDEO_LME0C_NUM] = "V:LE0C",
	[IS_VIDEO_LME1_NUM] = "V:LME1",
	[IS_VIDEO_LME1S_NUM] = "V:LE1S",
	[IS_VIDEO_LME1C_NUM] = "V:LE1C",
	[IS_VIDEO_CLH0S_NUM] = "V:CLS",
	[IS_VIDEO_CLH0C_NUM] = "V:CLC",
	[IS_VIDEO_ORB0C_NUM] = "V:O0C",
	[IS_VIDEO_ORB1C_NUM] = "V:O1C",

	[IS_VIDEO_SS0VC0_NUM] = "V:S0VC0",
	[IS_VIDEO_SS0VC1_NUM] = "V:S0VC1",
	[IS_VIDEO_SS0VC2_NUM] = "V:S0VC2",
	[IS_VIDEO_SS0VC3_NUM] = "V:S0VC3",
	[IS_VIDEO_SS1VC0_NUM] = "V:S1VC0",
	[IS_VIDEO_SS1VC1_NUM] = "V:S1VC1",
	[IS_VIDEO_SS1VC2_NUM] = "V:S1VC2",
	[IS_VIDEO_SS1VC3_NUM] = "V:S1VC3",
	[IS_VIDEO_SS2VC0_NUM] = "V:S2VC0",
	[IS_VIDEO_SS2VC1_NUM] = "V:S2VC1",
	[IS_VIDEO_SS2VC2_NUM] = "V:S2VC2",
	[IS_VIDEO_SS2VC3_NUM] = "V:S2VC3",
	[IS_VIDEO_SS3VC0_NUM] = "V:S3VC0",
	[IS_VIDEO_SS3VC1_NUM] = "V:S3VC1",
	[IS_VIDEO_SS3VC2_NUM] = "V:S3VC2",
	[IS_VIDEO_SS3VC3_NUM] = "V:S3VC3",
	[IS_VIDEO_SS4VC0_NUM] = "V:S4VC0",
	[IS_VIDEO_SS4VC1_NUM] = "V:S4VC1",
	[IS_VIDEO_SS4VC2_NUM] = "V:S4VC2",
	[IS_VIDEO_SS4VC3_NUM] = "V:S4VC3",
	[IS_VIDEO_SS5VC0_NUM] = "V:S5VC0",
	[IS_VIDEO_SS5VC1_NUM] = "V:S5VC1",
	[IS_VIDEO_SS5VC2_NUM] = "V:S5VC2",
	[IS_VIDEO_SS5VC3_NUM] = "V:S5VC3",

	[IS_VIDEO_PAF0S_NUM] = "V:PDP0",
	[IS_VIDEO_PAF1S_NUM] = "V:PDP1",
	[IS_VIDEO_PAF2S_NUM] = "V:PDP2",
	[IS_VIDEO_PAF3S_NUM] = "V:PDP3",

	[IS_VIDEO_32S_NUM] = "V:32S",
	[IS_VIDEO_32C_NUM] = "V:32C",
	[IS_VIDEO_32P_NUM] = "V:32P",
	[IS_VIDEO_32F_NUM] = "V:32F",
	[IS_VIDEO_32G_NUM] = "V:32G",
	[IS_VIDEO_33S_NUM] = "V:33S",
	[IS_VIDEO_33C_NUM] = "V:33C",
	[IS_VIDEO_33P_NUM] = "V:33P",
	[IS_VIDEO_33F_NUM] = "V:33F",
	[IS_VIDEO_33G_NUM] = "V:33G",

	[IS_VIDEO_30D_NUM] = "V:30D",
	[IS_VIDEO_31D_NUM] = "V:31D",
	[IS_VIDEO_32D_NUM] = "V:32D",
	[IS_VIDEO_33D_NUM] = "V:33D",
	[IS_VIDEO_30H_NUM] = "V:30H",
	[IS_VIDEO_31H_NUM] = "V:31H",
	[IS_VIDEO_32H_NUM] = "V:32H",
	[IS_VIDEO_33H_NUM] = "V:33H",

	[IS_VIDEO_IMM_NUM] = "V:IMTR",
	[IS_VIDEO_IRG_NUM] = "V:IRGBR",
	[IS_VIDEO_ISC_NUM] = "V:ISEGR",
	[IS_VIDEO_IDR_NUM] = "V:IDGR",
	[IS_VIDEO_INR_NUM] = "V:INOR",
	[IS_VIDEO_IND_NUM] = "V:INDS",
	[IS_VIDEO_IDG_NUM] = "V:IDRG",
	[IS_VIDEO_ISH_NUM] = "V:ISVH",
	[IS_VIDEO_IHF_NUM] = "V:IHF",
	[IS_VIDEO_INW_NUM] = "V:INOW",
	[IS_VIDEO_INRW_NUM] = "V:INOWR",
	[IS_VIDEO_IRGW_NUM] = "V:IRGB",
	[IS_VIDEO_INB_NUM] = "V:INRB",

	[IS_VIDEO_YND_NUM] = "V:YNRD",
	[IS_VIDEO_YDG_NUM] = "V:YDRG",
	[IS_VIDEO_YSH_NUM] = "V:YSVH",
	[IS_VIDEO_YNS_NUM] = "V:YNOI",

	[IS_VIDEO_LME0M_NUM] = "V:LE0M",
	[IS_VIDEO_LME1M_NUM] = "V:LE1M",

	[IS_VIDEO_MAX_NUM] = "V:MAX"
};

#endif /* IS_VIDEO_CONFIG_H */
