#define _ARMA_

class CfgPatches
{
	class JPSP_IFA_SPE_Weapon_Compat
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {};
        magazine[] = {"JPSP_1Rnd_G_No68"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","WW2_Core_c_WW2_Core_c","WW2_Assets_c_Weapons_InfantryWeapons_c","WW2_Assets_c_Vehicles_Weapons_c", "WW2_Assets_c_Vehicles_Tanks_c", "WW2_Assets_c_Vehicles_Tanks_c_PzKpfwVI_B", "WW2_Assets_c_Vehicles_Tanks_c_Churchill", "WW2_Assets_c_Vehicles_Tanks_c_Cromwell", "WW2_SPE_Assets_c_Vehicles_Weapons_c","WW2_Assets_c_Weapons_InfantryWeapons_c"};
		ammo[] = {"LIB_89mm_PIAT_penetrator","JPSP_No82_penetrator","JPSP_Pwm_penetrator","JPSP_Rpg6_penetrator","JPSP_G_No68","JPSP_G_No68_penetrator"};
	};
};

class cfgWeapons
{
    class LIB_LeeEnfield_No1;
    class LIB_LeeEnfield_No4;
    class LIB_LeeEnfield_No4_Scoped;
    class LIB_RifleGrenade_Muzzle;
	class LIB_LeeEnfield_No4_CUP: LIB_LeeEnfield_No4
	{
		magazines[] = {"LIB_10Rnd_770x56","LIB_10Rnd_770x56_MkVIII"};
		muzzles[] = {"this","LIB_LeeEnfield_No4_RG","LIB_AltReload1","LIB_AltReload2"};
		class LIB_LeeEnfield_No4_RG: LIB_RifleGrenade_Muzzle
		{
			magazines[] = {"LIB_1Rnd_G_MillsBomb","JPSP_1Rnd_G_No68"};
			cameraDir = "eye_look";
			discreteDistance[] = {50,100,150,200,250};
			discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
			discreteDistanceInitIndex = 1;
			reloadAction = "LIB_GestureReload_LeeEnfield_GL";
			reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
		};
		baseWeapon = "LIB_LeeEnfield_No4";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "LIB_ACC_GL_Enfield_CUP_Empty";
			};
		};
	};
	class LIB_LeeEnfield_No1_CUP: LIB_LeeEnfield_No1
	{
		magazines[] = {"LIB_10Rnd_770x56","LIB_10Rnd_770x56_MkVIII"};
		muzzles[] = {"this","LIB_LeeEnfield_No4_RG","LIB_AltReload1","LIB_AltReload2"};
		class LIB_LeeEnfield_No4_RG: LIB_RifleGrenade_Muzzle
		{
			magazines[] = {"LIB_1Rnd_G_MillsBomb","JPSP_1Rnd_G_No68"};
			cameraDir = "eye_look";
			discreteDistance[] = {50,100,150,200,250};
			discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
			discreteDistanceInitIndex = 1;
			reloadAction = "LIB_GestureReload_LeeEnfield_GL";
			reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
		};
		baseWeapon = "LIB_LeeEnfield_No1";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "LIB_ACC_GL_Enfield_CUP_Empty";
			};
		};
	};
	class LIB_LeeEnfield_No4_Scoped_CUP: LIB_LeeEnfield_No4_Scoped
	{
		magazines[] = {"LIB_10Rnd_770x56","LIB_10Rnd_770x56_MkVIII"};
		muzzles[] = {"this","LIB_LeeEnfield_No4_RG","LIB_AltReload1"};
		class LIB_LeeEnfield_No4_RG: LIB_RifleGrenade_Muzzle
		{
			magazines[] = {"LIB_1Rnd_G_MillsBomb", "JPSP_1Rnd_G_No68"};
			cameraDir = "eye_look";
			discreteDistance[] = {50,100,150,200,250};
			discreteDistanceCameraPoint[] = {"eye","op_eye","op_eye2","op_eye3","op_eye4"};
			discreteDistanceInitIndex = 1;
			reloadAction = "LIB_GestureReload_LeeEnfield_GL";
			reloadMagazineSound[] = {"\WW2\Assets_s\Weapons\Rifles_s\RifleGrenades\blank_reload",5,1,10};
		};
		baseWeapon = "LIB_LeeEnfield_No4_Scoped";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "LIB_ACC_GL_Enfield_CUP_Empty";
			};
		};
	};
};

class CfgMagazines
{
    class LIB_BaseRifleGrenade;
	class JPSP_1Rnd_G_No68: LIB_BaseRifleGrenade
	{
		author = "Jpspider";
		scope = 2;
		type = 16;
		model = "\WW2\Assets_m\Weapons\Grenades_m\WW2_MillsBomb_Mag.p3d";
		displayName = "No. 68 AT Anti-Tank Rifle Grenade";
		displayNameShort = "HEAT";
		descriptionShort = "No. 68 AT grenade<br />Type: High Explosive Anti-Tank Greande<br />Rounds: 1/1<br />Used in: Enfield No.1 CUP";
		picture = "\JPSP_IFA_SPE_Weapon_Compat\no68_ca.paa";
		ammo = "JPSP_G_No68";
		initSpeed = 180;
		count = 1;
		nameSound = "";
		mass = 5.5;
		modelSpecial = "\WW2\Assets_m\Weapons\Rifles_m\WW2_GL_Enfield_Grenade.p3d";
		modelSpecialIsProxy = 1;
		class LIB_RifleGrenade
		{
			attachment = "LIB_ACC_GL_MK2";
		};
	};
};
class CfgAmmo
{
    class LIB_Rocket_base;
    class SPE_HEAT_Rocket_penetrator_Base;
    class LIB_Grenade_base;
    class LIB_GrenadeHand_base;
    class SPE_Grenade_base;
    class SPE_ammo_HEAT_penetrator;
    #define MACRO_CALIBER(mm,speed) caliber=(mm /((15 * speed)/1000));
    
    class LIB_89mm_PIAT: LIB_Rocket_base
    {
        hit = 270;
        fuseDistance = 15;
        submunitionAmmo = "LIB_89mm_PIAT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1000;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        //SPE
        SoundSetExplosion[] = {"SPE_explo_midImpact_SoundSet","SPE_exploTail_midImpact_SoundSet","SPE_explo_debris_small_SoundSet"};
    };
    class LIB_89mm_PIAT_penetrator: SPE_HEAT_Rocket_penetrator_Base
    {
        hit = 270;
        MACRO_CALIBER(100,1000)
        deflecting = 15;
    };
    class LIB_G_89mm_PIAT: LIB_Grenade_base
    {
        hit = 270;
        indirectHit = 5;
        indirectHitRange = 2.6;
        warheadName = "HEAT";
        caliber = 0.1;
        submunitionAmmo = "LIB_89mm_PIAT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1000;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        deflecting = 15;
        //SPE
        SoundSetExplosion[] = {"SPE_explo_midImpact_SoundSet","SPE_exploTail_midImpact_SoundSet","SPE_explo_debris_small_SoundSet"};
    };
    class LIB_No82: LIB_GrenadeHand_base
    {
        hit = 400;
        indirectHitRange = 1.6;
        indirectHit = 145;
        warheadName = "HEAT";
        caliber = 1;
        submunitionAmmo = "JPSP_No82_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1000;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
		deflecting = 0;
		fuseDistance = 0;
		explosionTime = 0;
        //SPE
        explosionType = "explosive";
        SoundSetExplosion[] = {"SPE_explo_grenade_SoundSet","SPE_exploTail_grenade_SoundSet","SPE_explo_debris_small_SoundSet"};
    };
    class JPSP_No82_penetrator: SPE_HEAT_Rocket_penetrator_Base
    {
        hit = 270;
        MACRO_CALIBER(50,1000)
        deflecting = 0;
    };
	class LIB_Pwm: LIB_GrenadeHand_base
	{
        hit = 400;
        indirectHitRange = 1.6;
        indirectHit = 145;
        warheadName = "HEAT";
        caliber = 1;
        submunitionAmmo = "JPSP_Pwm_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1000;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
		deflecting = 0;
		fuseDistance = 0;
		explosionTime = 0;
        //SPE
        explosionType = "explosive";
        SoundSetExplosion[] = {"SPE_explo_grenade_SoundSet","SPE_exploTail_grenade_SoundSet","SPE_explo_debris_small_SoundSet"};
	};
    class JPSP_Pwm_penetrator: SPE_HEAT_Rocket_penetrator_Base
    {
        hit = 270;
        MACRO_CALIBER(150,1000)
        deflecting = 0;
    };
	class LIB_Rpg6: LIB_GrenadeHand_base
	{
        hit = 400; //95
        indirectHitRange = 1.6;
        indirectHit = 145; //5
        warheadName = "HEAT";
        caliber = 1;
        submunitionAmmo = "JPSP_Rpg6_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionParentSpeedCoef = 0;
        submunitionInitSpeed = 1000;
        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
		deflecting = 0;
		fuseDistance = 0;
		explosionTime = 0;
        //SPE
        explosionType = "explosive";
        SoundSetExplosion[] = {"SPE_explo_grenade_SoundSet","SPE_exploTail_grenade_SoundSet","SPE_explo_debris_small_SoundSet"};
	};
    class JPSP_Rpg6_penetrator: SPE_HEAT_Rocket_penetrator_Base
    {
        hit = 270;
        MACRO_CALIBER(100,1000)
        deflecting = 0;
    };
	class JPSP_G_No68: SPE_Grenade_base
	{
		aiAmmoUsageFlags = "128 + 512";
		airFriction = -0.009;
		allowAgainstInfantry = 0;
		deflecting = 25;
		deleteParentWhenTriggered = 0;
		hit = 90;
		indirectHit = 5;
		indirectHitRange = 1.6;
		model = "\WW2\SPE_Assets_m\Weapons\WeaponsAmmo_m\SPE_GL_M9A1.p3d";
		submunitionAmmo = "JPSP_G_No68_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		triggerOnImpact = 1;
		typicalSpeed = 197.51;
		warheadName = "HEAT";
	};
	//submunition
	class JPSP_G_No68_penetrator: SPE_ammo_HEAT_penetrator
	{
		MACRO_CALIBER(52,1000)
		deflecting = 25;
		hit = 190;
	};
};