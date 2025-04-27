class CfgAmmo
{
	#define MACRO_CALIBER(mm,speed) caliber=(mm /((15 * speed)/1000));
	class SPE_SprGr_Flak_38;
	class JPSP_SprGr_Flak_38: SPE_SprGr_Flak_38
	{
		hit = 50; //50
		MACRO_CALIBER(20,900)
		typicalSpeed = 900;

		ace_frag_enabled = 1;
		ace_frag_metal = 50;
		ace_frag_charge = 6;
		ace_frag_gurney_c = 2930; 
		ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
		ace_frag_classes[] = {"ACE_frag_tiny","ACE_frag_small_HD"};
		ace_frag_force = 1; 
	};
	class SPE_PzGr_Flak_38_AP_T;
	class JPSP_PzGr_Flak_38_AP_T: SPE_PzGr_Flak_38_AP_T
	{
		hit = 60; //120
		MACRO_CALIBER(20,800) //34, 800
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow.p3d";
		typicalSpeed = 800;

		ace_frag_enabled = 1;
		ace_frag_metal = 50;
		ace_frag_charge = 6;
		ace_frag_gurney_c = 2930; 
		ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
		ace_frag_classes[] = {"ACE_frag_tiny","ACE_frag_small_HD"};
		ace_frag_force = 1; 
	};
	class JPSP_PzGr40_Flak_38_APCR_T: JPSP_PzGr_Flak_38_AP_T
	{
		MACRO_CALIBER(30,1050) //45, 1050
		typicalSpeed = 1050;
	};

	//SPE_PzGr39_KwK36_AP
	class SPE_Shell_base;
	class JPSP_90mm_M82_APCBC: SPE_Shell_base
	{
		airFriction = -0.0001778;
		hit = 240;
		submunitionAmmo = "JPSP_90mm_M82_APCBC_penetrator";
		typicalSpeed = 853;
		class CamShakeExplode
		{
			distance = "((80^0.5)*3)";
			duration = 5;
			frequency = 20;
			power = 20;
		};
		class CamShakeFire
		{
			distance = "((120^0.5)*8)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			power = "(120^0.25)";
		};
		class CamShakeHit
		{
			distance = 1;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 5;
			power = 20;
		};
		class CamShakePlayerFire
		{
			distance = 1;
			duration = 1;
			frequency = 20;
			power = 1;
		};
		class EventHandlers
		{
			class SPE_RicochetHandler
			{
				init = "_this call SPE_soundFunction_ricochet_ammoInit";
			};
			class SPE_vehicleDamageDebug
			{
				init = "_this call SPE_fnc_System_vehicleDamageDebug_projectileInit";
			};
		};
		class HitEffects
		{
			default_mat = "ImpactEffectsGroundSabot";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
			object = "ImpactConcrete";
			vehicle = "ImpactMetalSabotBig";
		};
	};
	//SPE_PzGr39_KwK36_AP_penetrator
	class SPE_ammo_APHE_penetrator;
	class JPSP_90mm_M82_APCBC_penetrator: SPE_ammo_APHE_penetrator
	{
		airFriction = -0.0001778;
		MACRO_CALIBER(183,853)
		hit = 235;
		typicalSpeed = 853;
		class CamShakeExplode
		{
			distance = 5.19615;
			duration = 0.4;
			frequency = 20;
			power = 1.73205;
		};
		class CamShakeFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class CamShakeHit
		{
			distance = 1;
			duration = 0.2;
			frequency = 20;
			power = 3;
		};
		class CamShakePlayerFire
		{
			distance = 0;
			duration = 0;
			frequency = 0;
			power = 0;
		};
		class HitEffects
		{
			default_mat = "ImpactEffectsGroundSabot";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundHard = "ImpactEffectsGroundSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "SPE_ImpactMetalSabotBig_nosmoke";
			hitMetalPlate = "SPE_ImpactMetalSabotBig_nosmoke";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
			object = "ImpactConcrete";
			vehicle = "SPE_ImpactMetalSabotBig_nosmoke";
		};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",3.16228,1,200};
			class SCrackForest
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				trigger = "forest";
			};
			class SCrackHouses
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				trigger = "houses max interior";
			};
			class SCrackMeadow
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				trigger = "meadow max sea";
			};
			class SCrackTrees
			{
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				trigger = "trees";
			};
		};
	};
};