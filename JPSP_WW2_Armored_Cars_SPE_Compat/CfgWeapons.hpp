class CfgWeapons
{
	class SPE_Flak_30;
	class JPSP_KwK_30_L55 : SPE_Flak_30
	{
		displayName = "2cm KwK30 L/55";
		magazines[] = {"JPSP_10x_PzGr_Flak_38_AP_T", "JPSP_10x_SprGr_Flak_38", "JPSP_10x_PzGr40_Flak_38_APCR_T"};
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

	// SPE M6 37mm gun
	class SPE_M6_L53_base;
	class JPSP_QOF_2: SPE_M6_L53_base
	{
		displayName="Ordnance QF 2-pounder";
		displaynameshort = "QF 2-pdr";
	};

	class SPE_M1_57mm;
	class SPE_M1_57mm_APDS_AI;
	class SPE_M1_57mm_HE_AI;
	class SPE_M1_57mm_Base;
	class JPSP_QOF_2_Littlejohn: SPE_M1_57mm
	{
		displayName="Ordnance QF 2-pounder (Littlejohn)";
		displaynameshort = "QF 2-pdr (Littlejohn)";
		magazines[] = {"SPE_12x_6pdr_Mk1T_APDS","SPE_6pdr_Mk1T_APDS"};
		magazineWell[] = {"SPE_57x441mm_M1_APDS"};

		class SPE_M1_57mm_APDS_AI: SPE_M1_57mm_APDS_AI
		{
			displayName="Ordnance QF 2-pounder (Littlejohn)";
		};
		class MODE_AI_HE: SPE_M1_57mm_HE_AI
		{
			displayName="Ordnance QF 2-pounder (Littlejohn)";
		};
		class MODE_PLAYER_ALL: SPE_M1_57mm_Base
		{
			displayName="Ordnance QF 2-pounder (Littlejohn)";
		};
	};
};