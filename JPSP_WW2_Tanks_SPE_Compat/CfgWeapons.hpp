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
};