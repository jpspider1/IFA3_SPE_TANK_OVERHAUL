#define _ARMA_

class CfgPatches
{
	class JPSP_SPE_German_Soviet_Rebalance
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","WW2_SPE_Assets_c_Vehicles_Weapons_c","WW2_SPE_Assets_c_Vehicles_AmmoParameters_c"};
		ammo[] = {};
	};
};

class CfgAmmo
{
	// Inherit
	class SPE_Shell_base;
	class SPE_ShellAPCR_base;
	
	// Panzer IV
	class SPE_PzGr39_KWK40_AP: SPE_Shell_base
	{
		deflecting = 14; //29
	};
	class SPE_PzGr40_KWK40_APCR: SPE_ShellAPCR_base
	{
		deflecting = 17; //34
	};
	// Panther
	class SPE_PzGr3942_KwK42_AP: SPE_Shell_base
	{
		deflecting = 14; //29
	};
	class SPE_PzGr4042_KwK42_APCR: SPE_ShellAPCR_base
	{
		deflecting = 17; //34
	};
	// Tiger
	class SPE_PzGr39_KwK36_AP: SPE_Shell_base
	{
		deflecting = 14; //29
	};
	class SPE_PzGr40_KwK36_APCR: SPE_ShellAPCR_base
	{
		deflecting = 17; //34
	};
	// Jagdpanther
	class SPE_PzGr43_AP: SPE_Shell_base
	{
		deflecting = 14; //29
	};
	class SPE_PzGr40_APCR: SPE_ShellAPCR_base
	{
		deflecting = 17; //34
	};
	// T-34-85 (and M10)
	class SPE_76mm_M7_M62_APHE: SPE_Shell_base
	{
		deflecting = 43.5; //29 x 1.5
	};
};
