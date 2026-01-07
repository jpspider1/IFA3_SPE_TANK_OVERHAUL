class CfgMagazines
{
	class SPE_20x_SprGr_Flak_38;
	class JPSP_10x_SprGr_Flak_38: SPE_20x_SprGr_Flak_38
	{
		displayName = "SprGr 39 (HE)";
		displayNameShort = "HE";
		ammo = "JPSP_SprGr_Flak_38";
		count = 10;
	};
	class SPE_20x_PzGr_Flak_38_AP_T;
	class JPSP_10x_PzGr_Flak_38_AP_T: SPE_20x_PzGr_Flak_38_AP_T
	{
		displayName = "PzGr 39 (APHE)";
		displayNameShort = "APHE";
		ammo = "JPSP_PzGr_Flak_38_AP_T";
		count = 10;
	};
	class JPSP_10x_PzGr40_Flak_38_APCR_T: JPSP_10x_PzGr_Flak_38_AP_T
	{
		displayName = "PzGr 40 (APCR)";
		displayNameShort = "APCR";
		initSpeed = 1050;
		ammo = "JPSP_PzGr40_Flak_38_APCR_T";
		count = 10;
		SPE_ShellType = "APCR";
	};
	/*
	76 Sherman
	6 HVAP
	30 APHE
	28 HE
	7 Smoke

	M26 Pershing 70 total rounds
	magazineWell[] = {"SPE_76x539mm_M1_AP","SPE_76x539mm_M1_APCR","SPE_76x539mm_M1_HE","SPE_76x539mm_M1_SMK"};
	magazines[] = {"SPE_30x_76mm_M1_M62_APCBC","SPE_20x_76mm_M1_HC_M62_APCBC","SPE_30x_76mm_M1_M79_AP","SPE_20x_76mm_M1_HC_M79_AP","SPE_6x_76mm_M1_M93_APCR","SPE_5x_76mm_M1_HC_M93_APCR","SPE_28x_76mm_M1_M42_HE","SPE_15x_76mm_M1_HC_M42_HE","SPE_7x_76mm_M1_M89_SMK","SPE_5x_76mm_M1_HC_M89_SMK","SPE_76mm_M1_M93_APCR","SPE_76mm_M1_M62_APCBC","SPE_76mm_M1_M79_AP","SPE_76mm_M1_M42_HE","SPE_76mm_M1_M89_SMK","SPE_76mm_M1_HC_M93_APCR","SPE_76mm_M1_HC_M62_APCBC","SPE_76mm_M1_HC_M79_AP","SPE_76mm_M1_HC_M42_HE","SPE_76mm_M1_HC_M89_SMK"};
	*/
	class SPE_AP_VehicleMagazine_base;
	class JPSP_90mm_M82_APCBC: SPE_AP_VehicleMagazine_base
	{
		ammo = "JPSP_90mm_M82_APCBC";
		displayName = "M82 Shell (APHE)";
		displayNameShort = "APCBC-HE-T";
		initSpeed = 853;
		maxLeadSpeed = 40;
		scope = 2;
		SPE_ShellType = "APHE";
	};
	class JPSP_1x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 1; };
	class JPSP_2x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 2; };
	class JPSP_3x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 3; };
	class JPSP_4x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 4; };
	class JPSP_5x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 5; };
	class JPSP_6x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 6; };
	class JPSP_7x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 7; };
	class JPSP_8x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 8; };
	class JPSP_9x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 9; };
	class JPSP_10x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 10; };
	class JPSP_11x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 11; };
	class JPSP_12x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 12; };
	class JPSP_13x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 13; };
	class JPSP_14x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 14; };
	class JPSP_15x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 15; };
	class JPSP_16x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 16; };
	class JPSP_17x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 17; };
	class JPSP_18x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 18; };
	class JPSP_19x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 19; };
	class JPSP_20x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 20; };
	class JPSP_21x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 21; };
	class JPSP_22x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 22; };
	class JPSP_23x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 23; };
	class JPSP_24x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 24; };
	class JPSP_25x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 25; };
	class JPSP_26x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 26; };
	class JPSP_27x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 27; };
	class JPSP_28x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 28; };
	class JPSP_29x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 29; };
	class JPSP_30x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 30; };
	class JPSP_31x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 31; };
	class JPSP_32x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 32; };
	class JPSP_33x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 33; };
	class JPSP_34x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 34; };
	class JPSP_35x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 35; };
	class JPSP_36x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 36; };
	class JPSP_37x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 37; };
	class JPSP_38x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 38; };
	class JPSP_39x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 39; };
	class JPSP_40x_90mm_M82_APCBC: JPSP_90mm_M82_APCBC { count = 40; };
	
};