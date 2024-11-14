class CfgMagazines
{
	class SPE_20x_SprGr_Flak_38;
	class JPSP_10x_SprGr_Flak_38: SPE_20x_SprGr_Flak_38
	{
		displayName = "SprGr 39 L'spur (HE)";
		displayNameShort = "HE";
		ammo = "JPSP_SprGr_Flak_38";
		count = 10;
	};
	class SPE_20x_PzGr_Flak_38_AP_T;
	class JPSP_10x_PzGr_Flak_38_AP_T: SPE_20x_PzGr_Flak_38_AP_T
	{
		displayName = "PzGr 39 L'spur (APHE)";
		displayNameShort = "APHE";
		ammo = "JPSP_PzGr_Flak_38_AP_T";
		count = 10;
	};
	class JPSP_10x_PzGr40_Flak_38_APCR_T: JPSP_10x_PzGr_Flak_38_AP_T
	{
		displayName = "PzGr 40 L'spur (APCR)";
		displayNameShort = "APCR";
		initSpeed = 1050;
		ammo = "JPSP_PzGr40_Flak_38_APCR_T";
		count = 10;
		SPE_ShellType = "APCR";
	};
};