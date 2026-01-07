class CfgWeapons
{
	class SPE_Flak_30;
	class JPSP_KwK_30_L55 : SPE_Flak_30
	{
		displayName = "2cm KwK30 L/55";
		magazines[] = {"JPSP_10x_PzGr_Flak_38_AP_T", "JPSP_10x_SprGr_Flak_38", "JPSP_10x_PzGr40_Flak_38_APCR_T"};
		//Ranging
		//ballisticsComputer = 2;
		//discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
		//discreteDistanceInitIndex = 2;
		//copied from LIB_KwK30_L55_base
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "konec hlavne";
				effectName = "AutoCannonFired";
				positionName = "usti hlavne";
			};
		};
	};

	class SPE_Flak_38;
	class JPSP_KwK_38_L55 : SPE_Flak_38
	{
		displayName = "2cm KwK38 L/55";
		magazines[] = {"JPSP_10x_PzGr_Flak_38_AP_T", "JPSP_10x_SprGr_Flak_38", "JPSP_10x_PzGr40_Flak_38_APCR_T"};
		//Ranging
		ballisticsComputer = 2;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
		discreteDistanceInitIndex = 2;
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "konec hlavne";
				effectName = "AutoCannonFired";
				positionName = "usti hlavne";
			};
		};
	};

	class SPE_M1_76mm_L55;
	class JPSP_M3_90mm_base: SPE_M1_76mm_L55
	{
		displayName = "90 mm M3 L/53";
		magazineReloadTime = 7;
		magazines[] = {"SPE_30x_76mm_M1_M62_APCBC","SPE_20x_76mm_M1_HC_M62_APCBC","SPE_30x_76mm_M1_M79_AP","SPE_20x_76mm_M1_HC_M79_AP","SPE_6x_76mm_M1_M93_APCR","SPE_5x_76mm_M1_HC_M93_APCR","SPE_28x_76mm_M1_M42_HE","SPE_15x_76mm_M1_HC_M42_HE","SPE_7x_76mm_M1_M89_SMK","SPE_5x_76mm_M1_HC_M89_SMK","SPE_76mm_M1_M93_APCR","SPE_76mm_M1_M62_APCBC","SPE_76mm_M1_M79_AP","SPE_76mm_M1_M42_HE","SPE_76mm_M1_M89_SMK","SPE_76mm_M1_HC_M93_APCR","SPE_76mm_M1_HC_M62_APCBC","SPE_76mm_M1_HC_M79_AP","SPE_76mm_M1_HC_M42_HE","SPE_76mm_M1_HC_M89_SMK"};
		magazineWell[] = {"SPE_76x539mm_M1_AP","SPE_76x539mm_M1_APCR","SPE_76x539mm_M1_HE","SPE_76x539mm_M1_SMK"};
	};

	// SPE M6 37mm gun
	class SPE_M6_L53_base;
	class JPSP_QOF_2: SPE_M6_L53_base
	{
		displayName="Ordnance QF 2-pounder";
		displaynameshort = "QF 2-pdr";
	};
};