#define _ARMA_

class CfgPatches
{
	class JPSP_IFA_SPE_Tank_Overhaul
	{
		units[] = {"JPSP_SdKfz124_AT", "JPSP_Churchill_Mk4", "JPSP_Churchill_Mk4_desert", "JPSP_Cromwell_Mk1", "JPSP_ZIS2", "JPSP_OT34_76"};
        vehicles[] = {};
		weapons[] = {"JPSP_QOF_75", "JPSP_QOF_6", "JPSP_LIB_D_55", "JPSP_LIB_76mm_ZIS3", "JPSP_LIB_57mm_ZIS2","JPSP_LIB_76mm_F34","JPSP_LIB_85mm_ZiSS53","JPSP_D25T"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","WW2_Core_c_WW2_Core_c","WW2_Assets_c_Weapons_InfantryWeapons_c","WW2_Assets_c_Vehicles_Weapons_c", "WW2_Assets_c_Vehicles_Tanks_c", "WW2_Assets_c_Vehicles_Tanks_c_PzKpfwVI_B", "WW2_Assets_c_Vehicles_Tanks_c_Churchill", "WW2_Assets_c_Vehicles_Tanks_c_Cromwell", "WW2_Assets_c_Vehicles_Tanks_c_SdKfz124", "WW2_Assets_c_Vehicles_Tanks_c_SU85", "WW2_Assets_c_Vehicles_Tanks_c_T34_76", "WW2_Assets_c_Vehicles_Tanks_c_T34_85", "WW2_Assets_c_Vehicles_Tanks_c_JS2_43", "WW2_Assets_c_Vehicles_Tanks_c_M4_Sherman", "WW2_Assets_c_Vehicles_StaticWeapons_c_Zis3","WW2_Assets_c_Vehicles_Tanks_c_UniversalCarrier", "WW2_Assets_c_Vehicles_Tanks_c_PzKpfwVI_E","WW2_SPE_Assets_c_Vehicles_Weapons_c"};
		ammo[] = {"LIB_Shell_base","LIB_ShellAPCR_base","LIB_ShellHE_base"};
	};
};

class CfgAmmo
{
	class ShellBase;
	class LIB_Shell_base: ShellBase
	{
		irLock = 0;
	};
	class LIB_ShellAPCR_base: ShellBase
	{
		irLock = 0;
	};
	class LIB_ShellHE_base: ShellBase
	{
		irLock = 0;
	};
};


class CfgVehicles
{
    //inherit start
	class All{};
	class AllVehicles: All
	{
		class NewTurret
		{
			class ViewGunner;
			class HitPoints
			{
				class HitTurret;
				class HitGun;
			};
			class Turrets;
			class ViewOptics;
		};
		class ViewPilot;
		class ViewCargo;
		class ViewOptics;
		class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo{};
		};

		//SPE
		class SPE_Veh_HudLayers
  		{
    		class Vehicle
    		{
      			class SPE_Veh_HudLayers
      			{
					class ltrack;
					class rtrack;
					class hull;
					class engine;
					class turret;
					class gun;
				};
			};
  		};
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret
		{
			class ViewOptics: ViewOptics{};
			class ViewGunner: ViewCargo{};
		};
	};
	class Tank: LandVehicle
	{
		class HitPoints;
		class ViewPilot: ViewPilot{};
		class ViewOptics: ViewOptics{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
				class Turrets
				{
					class CommanderOptics: NewTurret{};
				};
			};
		};
	};
	class Tank_F: Tank
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner: ViewCargo{};
					};
				};
			};
		};
	};
	class LIB_Tank_base: Tank_F
	{
		class HitPoints: HitPoints
		{
			class HitHull: Hithull{};
		};
		class ViewOptics: ViewOptics{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret{};
					class HitGun: HitGun{};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner: ViewGunner{};
					};
					class Loader_place: NewTurret
					{
						class ViewOptics: ViewOptics{};
					};
				};
			};
		};
		class Animationsources;

        //SPE
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
		{
			class Vehicle: Vehicle
			{
				class SPE_Veh_HudLayers: SPE_Veh_HudLayers
				{
					class hull: hull {};
					class engine: engine {};
					class wheel_1_1: hull {};
					class wheel_1_2: wheel_1_1 {};
					class wheel_2_1: wheel_1_1 {};
					class wheel_2_2: wheel_1_1 {};
					class turret: turret {};
					class gun: turret {};
				};
			};
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticCannon: StaticWeapon{};
	class LIB_StaticCannon_base: StaticCannon
	{
		class ViewOptics;
		class HitPoints;
		class AnimationSources
		{
			class recoil_source;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide;
					class Narrow;
				};
			};
			class CommanderOptics: CommanderOptics
			{
				class ViewOptics: ViewOptics{};
			};
		};
	};
    //inherit end

	class LIB_UniversalCarrier_base: LIB_Tank_base
	{
		//SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_2_1"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\UniversalCarrier\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\UniversalCarrier\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\UniversalCarrier\ltrack.paa";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\UniversalCarrier\rtrack.paa";
                    };
                };
            };
        };
	};
    class LIB_Churchill_base: LIB_Tank_base
    {
        armor = 800; //up from 400
        armorStructural = 125; //up from 100
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_OQF_75","LIB_Besa_coax"};
                weapons[] = {"JPSP_QOF_75","LIB_Besa_coax"};
				//magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
                magazines[] = {
                    "SPE_30x_M61_M1_AP",
                    "SPE_14x_T45_M1_APCR",
                    "SPE_60x_M48_HE",
                    "LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
			};
			class kurs_MG_turret: MainTurret
			{
				body = "kurs_MG_turret";
				gun = "kurs_MG_gun";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_kursMG";
				proxyIndex = 2;
				lockWhenDriverOut = 0;
				forceHideGunner = 1;
				gunnerInAction = "LIB_PzKpfwVI_E_crew_In";
				gunnerAction = "LIB_PzKpfwVI_E_mgunner_Out";
				memoryPointsGetInGunner = "pos_mgunner";
				memoryPointsGetInGunnerDir = "pos_mgunner_dir";
				gunnerName = "$STR_LIB_tank_machinegunner";
				maxHorizontalRotSpeed = 1.5;
				maxVerticalRotSpeed = 1.5;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				minElev = -10;
				maxElev = 10;
				minTurn = -12;
				maxTurn = 12;
				weapons[] = {"LIB_Besa_kurs"};
				magazines[] = {"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
				gunBeg = "kursMG_beg";
				gunEnd = "kursMG_end";
				memoryPointGun = "kulas_kursMG";
				gunnerCompartments = "Compartment1";
				primaryGunner = 0;
				memoryPointGunnerOptics = "gunnerview_kursMG";
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
				commanding = 2;
				class HitPoints{};
				LIB_WP_TurretProtected = 1;
				class OpticsIn
				{
					class Main
					{
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -100;
						maxAngleX = 100;
						initAngleY = 0;
						minAngleY = -360;
						maxAngleY = 360;
						initFov = 0.194;
						minFov = 0.194;
						maxFov = 0.194;
						memoryPointGunnerOptics = "gunnerview_kursMG";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.194;
					minFov = 0.194;
					maxFov = 0.194;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
        class HitPoints: HitPoints
        {
            class HitEngine
            {
                armor = 0.7; //0.6
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 0.15;
                name = "engine_hit";
                passThrough = 0.5; //0
                radius = 0.25;
                visual = "motor";

                class DestructEffects
                {
                    ammoExplosionEffect = "";
					class SPE_Engine_Smoke
                    {
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                        position = "engine_smoke";
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                    };
                    class SPE_Engine_Fire: SPE_Engine_Smoke
                    {
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                        position = "engine_smoke";
                        simulation = "particles";
                        type = "SmallFireFPlace";
                    };
                    class SPE_Engine_Sounds: SPE_Engine_Smoke
                    {
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                        position = "engine_smoke";
                        simulation = "sound";
                        type = "Fire";
                    };
                    class SPE_Engine_Sparks: SPE_Engine_Smoke
                    {
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                        position = "engine_smoke";
                        simulation = "particles";
                        type = "FireSparks";
                    };
                };
            };
            class HitHull
            {
                armor = 0.9; //0.8 //-190 is the Tiger 1 from SPE value
                explosionShielding = 0.2;
                material = -1;
                minimalHit = 0.15;
                name = "hull_hit";
                passThrough = 0.5; //default 1
                radius = 0.25;
                visual = "dmg_hull";
				//SPE stuff not sure what it does
				simulation = "SPE_AmmoRack";
				armorComponent = "int_ammo";
            };
        };
		//SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Churchill\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Churchill\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Churchill\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Churchill\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Churchill\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Churchill\gun.paa";
					};
                };
            };
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
    };
	class LIB_Churchill_Mk7: LIB_Churchill_base
	{
		author = "I44";
		scope = 2;
		displayName = "$STR_LIB_Churchill_Mk7";
		picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_Churchill_mk7_ca.paa";
		model = "\WW2\Assets_m\Vehicles\Tanks_m\I44_Churchill.p3d";
		side = 2;
		faction = "LIB_UK_ARMY";
		crew = "LIB_UK_Tank_Crew";
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_QOF_75";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_QOF_75";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_Besa_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_Besa_coax";
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
	};
    class LIB_Churchill_Mk7_Howitzer: LIB_Churchill_base
    {
        displayName = "Churchill Mk VIII (Howitzer)";
        picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_Churchill_mk7_AVRE_ca.paa";
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
    };
	class JPSP_Churchill_Mk4_base: LIB_Churchill_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyIndex = 1;
				//weapons[] = {"LIB_OQF_75","LIB_Besa_coax"};
				weapons[] = {"JPSP_QOF_6","LIB_Besa_coax"};
                //magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
				magazines[] = {
                    "SPE_20x_6pdr_mk9_APCBC",
                    "SPE_10x_6pdr_mk8_AP",
                    "SPE_10x_6pdr_mk8_AP",
                    "SPE_10x_6pdr_mk8_AP",
                    "SPE_15x_6pdr_mk10T_HE",
                    "SPE_15x_6pdr_mk10T_HE",
                    "SPE_15x_6pdr_mk10T_HE",
                    "SPE_15x_6pdr_mk10T_HE",
                    "LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
                minElev = -5;
				maxElev = 20;
				maxHorizontalRotSpeed = "((360/16)/45)";
				maxVerticalRotSpeed = 0.5;
				gunnerType = "LIB_UK_Tank_Crew";
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.133;
						minFov = 0.133;
						maxFov = 0.133;
						visionMode[] = {"Normal"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_Cromwell_75mm_Reticle.p3d";
						opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						OpticsFlare = 1;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
						initFov = 0.4;
						minFov = 0.4;
						maxFov = 0.4;
						opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						opticsDisablePeripherialVision = 1;
					};
				};
			};
            class kurs_MG_turret: MainTurret
			{
				body = "kurs_MG_turret";
				gun = "kurs_MG_gun";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				animationSourceHatch = "";
				selectionFireAnim = "zasleh_kursMG";
				proxyIndex = 2;
				lockWhenDriverOut = 0;
				forceHideGunner = 1;
				gunnerInAction = "LIB_PzKpfwVI_E_crew_In";
				gunnerAction = "LIB_PzKpfwVI_E_mgunner_Out";
				memoryPointsGetInGunner = "pos_mgunner";
				memoryPointsGetInGunnerDir = "pos_mgunner_dir";
				gunnerName = "$STR_LIB_tank_machinegunner";
				maxHorizontalRotSpeed = 1.5;
				maxVerticalRotSpeed = 1.5;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				minElev = -10;
				maxElev = 10;
				minTurn = -12;
				maxTurn = 12;
				weapons[] = {"LIB_Besa_kurs"};
				magazines[] = {"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
				gunBeg = "kursMG_beg";
				gunEnd = "kursMG_end";
				memoryPointGun = "kulas_kursMG";
				gunnerCompartments = "Compartment1";
				primaryGunner = 0;
				memoryPointGunnerOptics = "gunnerview_kursMG";
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
				commanding = 2;
				class HitPoints{};
				LIB_WP_TurretProtected = 1;
				class OpticsIn
				{
					class Main
					{
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -100;
						maxAngleX = 100;
						initAngleY = 0;
						minAngleY = -360;
						maxAngleY = 360;
						initFov = 0.194;
						minFov = 0.194;
						maxFov = 0.194;
						memoryPointGunnerOptics = "gunnerview_kursMG";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.194;
					minFov = 0.194;
					maxFov = 0.194;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_QOF_6";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_QOF_6";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_Besa_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_Besa_coax";
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
	};
	class JPSP_Churchill_Mk4: JPSP_Churchill_Mk4_base
	{
		author = "Jpspider";
		scope = 2;
		displayName = "Churchill Mk IV";
		picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_Churchill_mk7_ca.paa";
		model = "\WW2\Assets_m\Vehicles\Tanks_m\I44_Churchill.p3d";
		side = 2;
		faction = "LIB_UK_ARMY";
		crew = "LIB_UK_Tank_Crew";
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "LIB_OQF_75";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "LIB_OQF_75";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_Besa_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_Besa_coax";
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
	};
	class JPSP_Churchill_Mk4_desert: JPSP_Churchill_Mk4
	{
		author = "IFA3 Team";
		scope = 2;
		faction = "LIB_UK_DR";
		crew = "LIB_UK_DR_Tank_Crew";
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\I44_Churchill\i44_churchill_desert_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn: OpticsIn
				{
					class Wide: Wide{};
					class Narrow: Narrow{};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "LIB_UK_DR_Tank_Commander";
					};
					class Loader_place: Loader_place{};
				};
			};
			class kurs_MG_turret: kurs_MG_turret{};
		};
	};
    class LIB_Cromwell_Base: LIB_Tank_base
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_OQF_75","LIB_Besa_coax"};
                weapons[] = {"JPSP_QOF_75","LIB_Besa_coax"};
				//magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
                magazines[] = {
                    "SPE_30x_M61_M1_AP",
                    "SPE_14x_T45_M1_APCR",
                    "SPE_60x_M48_HE",
                    "LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
			};
        };

        class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_QOF_75";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_QOF_75";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_Besa_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_Besa_coax";
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};

        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Cromwell\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Cromwell\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Cromwell\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Cromwell\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Cromwell\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Cromwell\gun.paa";
					};
                };
            };
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
        
    };
    class JPSP_Cromwell_Mk1_Base: LIB_Cromwell_Base
    {
        displayName = "Cromwell Mk I";
        picture = "\WW2\Assets_t\Vehicles\Pictures_t\LIB_Cromwell_Mk4_ca.paa";
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_OQF_75","LIB_Besa_coax"};
                weapons[] = {"JPSP_QOF_6","LIB_Besa_coax"};
				//magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
                magazines[] = {
                    "SPE_20x_6pdr_mk9_APCBC",
                    "SPE_10x_6pdr_mk8_AP",
                    "SPE_10x_6pdr_mk8_AP",
                    "SPE_10x_6pdr_mk8_AP",
                    "SPE_15x_6pdr_mk10T_HE",
                    "SPE_15x_6pdr_mk10T_HE",
                    "SPE_15x_6pdr_mk10T_HE",
                    "SPE_15x_6pdr_mk10T_HE",
                    "LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
			};
            class kurs_MG_turret: MainTurret
			{
				body = "kurs_MG_turret";
				gun = "kurs_MG_gun";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				animationSourceHatch = "hatchMGunner";
				selectionFireAnim = "zasleh_kursMG";
				proxyIndex = 2;
				primaryGunner = 0;
				lockWhenDriverOut = 0;
				forceHideGunner = 1;
				gunnerInAction = "LIB_PzKpfwVI_E_crew_In";
				gunnerAction = "LIB_PzKpfwVI_E_mgunner_Out";
				getInAction = "GetInMedium";
				getOutAction = "GetOutMedium";
				memoryPointsGetInGunner = "pos_mgunner";
				memoryPointsGetInGunnerDir = "pos_mgunner_dir";
				gunnerName = "$STR_LIB_tank_machinegunner";
				maxHorizontalRotSpeed = 1.5;
				maxVerticalRotSpeed = 1.5;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				minElev = -10;
				maxElev = 10;
				minTurn = -12;
				maxTurn = 12;
				weapons[] = {"LIB_Besa_kurs"};
				magazines[] = {"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
				gunBeg = "kursMG_beg";
				gunEnd = "kursMG_end";
				memoryPointGun = "kulas_kursMG";
				memoryPointGunnerOptics = "gunnerview_kursMG";
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
				commanding = 2;
				class HitPoints{};
				LIB_WP_TurretProtected = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -100;
						maxAngleX = 100;
						initAngleY = 0;
						minAngleY = -360;
						maxAngleY = 360;
						initFov = 0.194;
						minFov = 0.194;
						maxFov = 0.194;
						visionMode[] = {"Normal"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_Cromwell_MG_Reticle.p3d";
						opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						OpticsFlare = 1;
					};
				};
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.194;
					minFov = 0.194;
					maxFov = 0.194;
				};
			};
        };
        class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_QOF_6";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_QOF_6";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_Besa_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_Besa_coax";
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
    };
    class JPSP_Cromwell_Mk1: JPSP_Cromwell_Mk1_Base
	{
        displayName = "Cromwell Mk I";
		author = "IFA3 Team";
		scope = 2;
		faction = "LIB_UK_ARMY";
		crew = "LIB_UK_Tank_Crew";
	};
    class LIB_PzKpfwVI_B_base: LIB_Tank_base
    {
		//SPE Launcher
		SPE_grenadeLauncherAngle[] = {"smoke_dir"};
		SPE_grenadeLauncherPositions[] = {"smoke_source"};

		explosionEffect = "SPE_FuelExplosionBig";
        //SPE Tiger I sounds
        soundEngineOffExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Stop.wss",1,1,200};
        soundEngineOffInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Stop.wss",1,1};
        soundEngineOnExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Start_1.wss",1,1,200};
        soundEngineOnInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Start_1.wss",1,1};
        soundGetIn[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        soundGetOut[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        class Sounds
        {
            soundSetsExt[] = {"SPE_tank_tiger_ext_idle_SoundSet","SPE_tank_tiger_ext_slow_SoundSet","SPE_tank_tiger_ext_mid_SoundSet","SPE_tank_tiger_ext_fast_SoundSet","SPE_tank_tiger_exhaust_ext_idle_SoundSet","SPE_tank_tiger_exhaust_ext_slow_SoundSet","SPE_tank_tiger_exhaust_ext_mid_SoundSet","SPE_tank_tiger_exhaust_ext_fast_SoundSet","SPE_tank_tiger_dist_slow_SoundSet","SPE_tank_tiger_dist_mid_SoundSet","SPE_tank_tiger_dist_high_SoundSet","SPE_tank_tiger_ext_tracks_slow_soundSet","SPE_tank_tiger_ext_tracks_mid_soundSet","SPE_tank_tiger_ext_tracks_fast_soundSet","SPE_tank_tiger_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet","SPE_tank_tiger_ext_turbine_soundSet"};
            soundSetsInt[] = {"SPE_tank_tiger_int_idle_SoundSet","SPE_tank_tiger_int_slow_SoundSet","SPE_tank_tiger_int_mid_SoundSet","SPE_tank_tiger_int_fast_SoundSet","SPE_tank_tiger_exhaust_int_idle_SoundSet","SPE_tank_tiger_exhaust_int_slow_SoundSet","SPE_tank_tiger_exhaust_int_mid_SoundSet","SPE_tank_tiger_exhaust_int_fast_SoundSet","SPE_tank_tiger_ext_tracks_slow_soundSet","SPE_tank_tiger_ext_tracks_mid_soundSet","SPE_tank_tiger_ext_tracks_fast_soundSet","SPE_tank_tiger_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet","SPE_tank_tiger_int_turbine_soundSet"};
        };
        class Turrets: Turrets
		{
            class MainTurret: MainTurret
			{
                weapons[] = {"SPE_Pak43_L71","SPE_MG34_coax"};
                //magazines[] = {"SPE_20x_PzGr43_AP","SPE_10x_PzGr40_APCR","SPE_10x_SprGr39_HE"};
                magazines[] = {"SPE_30x_PzGr43_AP","SPE_10x_PzGr40_APCR",
                "SPE_40x_SprGr39_HE",
                "SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34"};
                maxHorizontalRotSpeed = "((360/60)/40)";
				maxVerticalRotSpeed = 0.17;
				gunnerAction = "T72_GunnerOut";
				gunnerInAction = "T72_Gunner";
				minElev = -8;
				maxElev = 15;
				class OpticsIn
				{
					class Near
					{
						opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
					class Far: Near
					{
						opticsDisplayName = "$STR_OpticsIn_Far_5x";
						memoryPointGunnerOptics = "gunnerview_1";
						initFov = 0.0625;
						minFov = 0.0625;
						maxFov = 0.0625;
					};
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						//weapons[] = {"SPE_GER_CloseDefenceLauncher"};
						//magazines[] = {"SPE_5Rnd_GER_G_SPRGR_326Mag","SPE_15Rnd_GER_G_NBKS_39Mag","SPE_3Rnd_GER_G_Rsz_Orange_350Mag","SPE_4Rnd_G_FLGR_CDW"};
						gunnerInAction = "crew_tank01_in";
						gunnerAction = "commander_mbt3_out";
						gunnerOpticsModel = "";
						gunnerForceOptics = 0;
						gunnerOutOpticsModel = "\WW2\Assets_m\Weapons\Optics_m\IF_Optika_Empty.p3d";
						gunnerOutOpticsShowCursor = 1;
						memoryPointGunnerOutOptics = "CommanderViewOut";
						gunnerType = "LIB_GER_tank_unterofficer";
						lodTurnedIn = 1000;
						lodTurnedOut = -1;
						class ViewOptics: ViewOptics
						{
							initFov = 0.35;
							minFov = 0.35;
							maxFov = 0.35;
						};
					};
					class Loader_place: Loader_place
					{
						proxyIndex = 3;
						gunnerInAction = "LIB_PzKpfwVI_B_loader_In";
						gunnerAction = "LIB_PzKpfwVI_B_loader_Out";
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Tiger_Commander_Optic.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
					};
				};
            };
            class kurs_MG_turret: MainTurret
            {
                weapons[] = {"SPE_MG34_kurs"};
                magazines[] = {"SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34"};
            };
        };
        class Hitpoints
		{
			class HitHull
			{
				armor = 0.8;
				explosionShielding = 0.2;
				material = -1;
				minimalHit = 0.15;
				name = "hull_hit";
				passThrough = 1;
				radius = 0.25;
				visual = "dmg_hull";
			};
		};
        class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SPE_Pak43_L71";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "SPE_Pak43_L71";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "SPE_MG34_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "SPE_MG34_coax";
			};
			class reticle_v_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.1;
			};
			class reticle_r_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.5;
			};
			class Hide_Skirt
			{
				displayName = "$STR_LIB_DN_ASSETS_VEHICLES_HIDE_SKIRT";
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
        /*
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
        class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwVI_B\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwVI_B\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwVI_B\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwVI_B\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwVI_B\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwVI_B\gun.paa";
					};
                };
            };
        };
        */
        
    };
	class LIB_PzKpfwVI_E_base: LIB_Tank_base
	{
		//SPE Launcher
		SPE_grenadeLauncherAngle[] = {"smoke_dir"};
		SPE_grenadeLauncherPositions[] = {"smoke_source"};

		explosionEffect = "SPE_FuelExplosionBig";
        //SPE Tiger I sounds
        soundEngineOffExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Stop.wss",1,1,200};
        soundEngineOffInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Stop.wss",1,1};
        soundEngineOnExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Start_1.wss",1,1,200};
        soundEngineOnInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Start_1.wss",1,1};
        soundGetIn[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        soundGetOut[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        class Sounds
        {
            soundSetsExt[] = {"SPE_tank_tiger_ext_idle_SoundSet","SPE_tank_tiger_ext_slow_SoundSet","SPE_tank_tiger_ext_mid_SoundSet","SPE_tank_tiger_ext_fast_SoundSet","SPE_tank_tiger_exhaust_ext_idle_SoundSet","SPE_tank_tiger_exhaust_ext_slow_SoundSet","SPE_tank_tiger_exhaust_ext_mid_SoundSet","SPE_tank_tiger_exhaust_ext_fast_SoundSet","SPE_tank_tiger_dist_slow_SoundSet","SPE_tank_tiger_dist_mid_SoundSet","SPE_tank_tiger_dist_high_SoundSet","SPE_tank_tiger_ext_tracks_slow_soundSet","SPE_tank_tiger_ext_tracks_mid_soundSet","SPE_tank_tiger_ext_tracks_fast_soundSet","SPE_tank_tiger_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet","SPE_tank_tiger_ext_turbine_soundSet"};
            soundSetsInt[] = {"SPE_tank_tiger_int_idle_SoundSet","SPE_tank_tiger_int_slow_SoundSet","SPE_tank_tiger_int_mid_SoundSet","SPE_tank_tiger_int_fast_SoundSet","SPE_tank_tiger_exhaust_int_idle_SoundSet","SPE_tank_tiger_exhaust_int_slow_SoundSet","SPE_tank_tiger_exhaust_int_mid_SoundSet","SPE_tank_tiger_exhaust_int_fast_SoundSet","SPE_tank_tiger_ext_tracks_slow_soundSet","SPE_tank_tiger_ext_tracks_mid_soundSet","SPE_tank_tiger_ext_tracks_fast_soundSet","SPE_tank_tiger_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet","SPE_tank_tiger_int_turbine_soundSet"};
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_KwK36_L56","LIB_MG34_coax"};
				//magazines[] = {"LIB_30x_PzGr39_KwK36_AP","LIB_12x_PzGr40_KwK36_APCR","LIB_50x_SprGr_KwK36_HE","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34"};
				weapons[] = {"SPE_KwK36_L56","SPE_MG34_coax"};
				magazines[] = {"SPE_30x_PzGr39_KwK36_AP","SPE_12x_PzGr40_KwK36_APCR","SPE_50x_SprGr_KwK36_HE","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34"};
				maxHorizontalRotSpeed = "((360/60)/40)";
				maxVerticalRotSpeed = "(rad (360 / 60))";
				gunnerAction = "LIB_PzKpfwVI_E_crew_In";
				gunnerInAction = "LIB_PzKpfwVI_E_crew_In";
				minElev = -6.5;
				maxElev = 17;
				class OpticsIn
				{
					class Near
					{
						opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
					class Far: Near
					{
						opticsDisplayName = "$STR_OpticsIn_Far_5x";
						memoryPointGunnerOptics = "gunnerview_1";
						initFov = 0.0625;
						minFov = 0.0625;
						maxFov = 0.0625;
					};
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						gunnerInAction = "crew_tank01_in";
						gunnerAction = "commander_mbt3_out";
						gunnerOpticsModel = "";
						gunnerForceOptics = 0;
						gunnerOutOpticsModel = "\WW2\Assets_m\Weapons\Optics_m\IF_Optika_Empty.p3d";
						gunnerOutOpticsShowCursor = 1;
						memoryPointGunnerOutOptics = "CommanderViewOut";
						gunnerType = "LIB_GER_tank_unterofficer";
						lodTurnedIn = 1000;
						lodTurnedOut = -1;
						class ViewOptics: ViewOptics
						{
							initFov = 0.35;
							minFov = 0.35;
							maxFov = 0.35;
						};
					};
					class Loader_place: Loader_place
					{
						proxyIndex = 3;
						gunnerInAction = "LIB_PzKpfwVI_E_crew_In";
						gunnerAction = "LIB_PzKpfwVI_E_loader_Out";
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Tiger_Commander_Optic.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
					};
				};
			};
			class kurs_MG_turret: MainTurret
			{
				body = "kurs_MG_turret";
				gun = "kurs_MG_gun";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				animationSourceHatch = "hatchMGunner";
				selectionFireAnim = "zasleh_kursMG";
				proxyIndex = 2;
				primaryGunner = 0;
				lockWhenDriverOut = 0;
				forceHideGunner = 0;
				gunnerInAction = "LIB_PzKpfwVI_E_crew_In";
				gunnerAction = "LIB_PzKpfwVI_E_mgunner_Out";
				memoryPointsGetInGunner = "pos_mgunner";
				memoryPointsGetInGunnerDir = "pos_mgunner_dir";
				gunnerName = "$STR_LIB_tank_machinegunner";
				maxHorizontalRotSpeed = 1.5;
				maxVerticalRotSpeed = 1.5;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				minElev = -10;
				maxElev = 10;
				minTurn = -12;
				maxTurn = 12;
				weapons[] = {"SPE_MG34_coax"};
				magazines[] = {"SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34"};
				gunBeg = "kursMG_beg";
				gunEnd = "kursMG_end";
				memoryPointGun = "kulas_kursMG";
				memoryPointGunnerOptics = "gunnerview_kursMG";
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_MG.p3d";
				commanding = 2;
				class HitPoints{};
				LIB_WP_TurretProtected = 1;
				class OpticsIn
				{
					class Main
					{
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_MG.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -100;
						maxAngleX = 100;
						initAngleY = 0;
						minAngleY = -360;
						maxAngleY = 360;
						initFov = 0.194;
						minFov = 0.194;
						maxFov = 0.194;
						memoryPointGunnerOptics = "gunnerview_kursMG";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				class Turrets{};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.194;
					minFov = 0.194;
					maxFov = 0.194;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SPE_KwK36_L56";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "SPE_KwK36_L56";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "SPE_MG34_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "SPE_MG34_coax";
			};
			class reticle_v_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.1;
			};
			class reticle_r_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.5;
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};
	};
    class LIB_SdKfz124_base: LIB_Tank_base
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_leFH18_L28"};
				weapons[] = {"SPE_leFH18_L28"};
                //magazines[] = {"LIB_20x_Shell_105L28_Gr39HlC_HE","LIB_20x_Shell_105L28_Gr38_HE"};
                magazines[] = {"SPE_20x_Shell_105L28_Gr38_HE","SPE_20x_Shell_105L28_Gr38_HE","SPE_8x_Shell_105L28_Gr39HlC_HEAT_Artillery","SPE_20x_Shell_105L28_Gr38_NB"};
            };
        };
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SdKfz124\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SdKfz124\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SdKfz124\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SdKfz124\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SdKfz124\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SdKfz124\gun.paa";
					};
                };
            };
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
    };
    class JPSP_SdKfz124_AT_base: LIB_SdKfz124_base
    {
        artilleryScanner = 0;
		availableForSupportTypes[] = {};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_leFH18_L28"};
				weapons[] = {"SPE_LeFH18"};
                //magazines[] = {"LIB_20x_Shell_105L28_Gr39HlC_HE","LIB_20x_Shell_105L28_Gr38_HE"};
                magazines[] = {"SPE_20x_105mm_LeFH_PzGrRot_AP","SPE_20x_Shell_105L28_Gr38_HE_direct","SPE_8x_Shell_105L28_Gr39HlC_HEAT","SPE_20x_Shell_105L28_Gr38_NB_direct"};
            };
        };
    };
    class JPSP_SdKfz124_AT: JPSP_SdKfz124_AT_base
	{
		author = "I44";
		scope = 2;
		displayName = "Sd.Kfz 124 Wespe (AT)";
		side = 1;
		faction = "LIB_WEHRMACHT";
		crew = "LIB_GER_SPG_crew";
	};
    class LIB_M4A3_75_base: LIB_Tank_base
    {
		soundEngineOffExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\M4A1_75\M4A1_75_Ext_Engine_Stop.wss",1.7341,1,200};
		soundEngineOffInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\M4A1_75\M4A1_75_Int_Engine_Stop.wss",2.1095,1};
		soundEngineOnExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\M4A1_75\M4A1_75_Ext_Engine_Start.wss",1.7341,1,200};
		soundEngineOnInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\M4A1_75\M4A1_75_Int_Engine_Start.wss",2.1095,1};
		soundGetIn[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\M4A1_75\M4A1_75_GetInOut.wss",1.8,1,20};
		soundGetOut[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\M4A1_75\M4A1_75_GetInOut.wss",1.8,1,20};
		class Sounds
		{
			soundSetsExt[] = {"SPE_tank_sherman_ext_idle_SoundSet","SPE_tank_sherman_ext_slow_SoundSet","SPE_tank_sherman_ext_mid_SoundSet","SPE_tank_sherman_ext_fast_SoundSet","SPE_tank_sherman_exhaust_ext_idle_SoundSet","SPE_tank_sherman_exhaust_ext_slow_SoundSet","SPE_tank_sherman_exhaust_ext_mid_SoundSet","SPE_tank_sherman_exhaust_ext_fast_SoundSet","SPE_tank_sherman_dist_slow_SoundSet","SPE_tank_sherman_dist_mid_SoundSet","SPE_tank_sherman_dist_high_SoundSet","SPE_tank_sherman_ext_tracks_slow_soundSet","SPE_tank_sherman_ext_tracks_mid_soundSet","SPE_tank_sherman_ext_tracks_fast_soundSet","SPE_tank_sherman_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
			soundSetsInt[] = {"SPE_tank_sherman_int_idle_SoundSet","SPE_tank_sherman_int_slow_SoundSet","SPE_tank_sherman_int_mid_SoundSet","SPE_tank_sherman_int_fast_SoundSet","SPE_tank_sherman_exhaust_int_idle_SoundSet","SPE_tank_sherman_exhaust_int_slow_SoundSet","SPE_tank_sherman_exhaust_int_mid_SoundSet","SPE_tank_sherman_exhaust_int_fast_SoundSet","SPE_tank_sherman_ext_tracks_slow_soundSet","SPE_tank_sherman_ext_tracks_mid_soundSet","SPE_tank_sherman_ext_tracks_fast_soundSet","SPE_tank_sherman_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet"};
		};
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\gun.paa";
					};
                };
            };
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
    };
    class LIB_M4A3_75: LIB_M4A3_75_base
    {
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M4A3_75\gun.paa";
					};
                };
            };
        };
    };
    class LIB_M3A3_Stuart: LIB_M4A3_75
    {
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
                weapons[] = {"LIB_M6_L53","SPE_M1919A4_coax"};
				magazines[] = {"LIB_50x_37L57_M74_AP","LIB_40x_37L57_M51_APCR","LIB_60x_37L57_M63_HE",
                "SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4"};
			};
		};
        class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "LIB_M6_L53";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "LIB_M6_L53";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "SPE_M1919A4_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "SPE_M1919A4_coax";
			};
		};
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M3_Stuart\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M3_Stuart\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M3_Stuart\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M3_Stuart\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M3_Stuart\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\M3_Stuart\gun.paa";
					};
                };
            };
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
    };
	class LIB_M4A4_FIREFLY: LIB_M4A3_75
	{
		armor = 300; //425
		armorStructural = 50; //100
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				proxyIndex = 1;
				weapons[] = {"SPE_M1_HC_76mm_L55","SPE_M1919A4_coax"};
				magazines[] = {"SPE_30x_76mm_M1_HC_M62_APCBC","SPE_14x_76mm_M1_HC_M93_APCR","SPE_60x_76mm_M1_HC_M42_HE",
				"SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4"};
				minElev = -5;
				maxElev = 20;
				gunnerType = "LIB_UK_Tank_Crew";
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.133;
						minFov = 0.133;
						maxFov = 0.133;
						visionMode[] = {"Normal"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_No43x3_Sight.p3d";
						opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						OpticsFlare = 1;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
						initFov = 0.4;
						minFov = 0.4;
						maxFov = 0.4;
						opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						opticsDisablePeripherialVision = 1;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "";
						minElev = -45;
						maxElev = 45;
						minTurn = -50;
						maxTurn = 20;
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_2";
						minOutElev = -50;
						maxOutElev = 50;
						initOutElev = 0;
						minOutTurn = -95;
						maxOutTurn = 95;
						initOutTurn = 0;
						gunnerType = "LIB_UK_Tank_Commander";
						class ViewOptics: ViewOptics
						{
							initFov = 0.35;
							minFov = 0.35;
							maxFov = 0.35;
						};
					};
					class Loader_place: Loader_place
					{
						proxyIndex = 3;
						gunnerAction = "gunner_apcwheeled1_out";
						minElev = -45;
						maxElev = 45;
						minTurn = -50;
						maxTurn = 20;
						minOutElev = -50;
						maxOutElev = 50;
					};
				};
			};
		};
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SPE_M1_HC_76mm_L55";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "SPE_M1_HC_76mm_L55";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "SPE_M1919A4_coax";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "SPE_M1919A4_coax";
			};
		};
		class Hitpoints: Hitpoints
		{
			class HitHull
			{
				armor = 0.8;
				explosionShielding = 0.35; //0.2
				material = -1;
				minimalHit = 0.15; //0.15
				name = "hull_hit";
				passThrough = 10; //1
				radius = 0.25;
				visual = "dmg_hull";
			};
			class HitEngine
			{
				armor = 0.4; //0.6
				explosionShielding = 0.4; //0.2
				material = -1;
				minimalHit = 0.15;
				name = "engine_hit";
				passThrough = 1; //0
				radius = 0.25;
				visual = "motor";
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
	};
    class LIB_PzKpfwIV_H_base: LIB_Tank_base
    {
        soundEngineOffExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Stop.wss",1,1,200};
        soundEngineOffInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Stop.wss",1,1};
        soundEngineOnExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Start_1.wss",1,1,200};
        soundEngineOnInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Start_1.wss",1,1};
        soundGetIn[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        soundGetOut[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        class Sounds
        {
            soundSetsExt[] = {"SPE_tank_pz4_ext_idle_SoundSet","SPE_tank_pz4_ext_slow_SoundSet","SPE_tank_pz4_ext_mid_SoundSet","SPE_tank_pz4_ext_fast_SoundSet","SPE_tank_pz4_exhaust_ext_idle_SoundSet","SPE_tank_pz4_exhaust_ext_slow_SoundSet","SPE_tank_pz4_exhaust_ext_mid_SoundSet","SPE_tank_pz4_exhaust_ext_fast_SoundSet","SPE_tank_pz4_dist_slow_SoundSet","SPE_tank_pz4_dist_mid_SoundSet","SPE_tank_pz4_dist_high_SoundSet","SPE_tank_pz4_ext_tracks_slow_soundSet","SPE_tank_pz4_ext_tracks_mid_soundSet","SPE_tank_pz4_ext_tracks_fast_soundSet","SPE_tank_pz4_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
            soundSetsInt[] = {"SPE_tank_pz4_int_idle_SoundSet","SPE_tank_pz4_int_slow_SoundSet","SPE_tank_pz4_int_mid_SoundSet","SPE_tank_pz4_int_fast_SoundSet","SPE_tank_pz4_exhaust_int_idle_SoundSet","SPE_tank_pz4_exhaust_int_slow_SoundSet","SPE_tank_pz4_exhaust_int_mid_SoundSet","SPE_tank_pz4_exhaust_int_fast_SoundSet","SPE_tank_pz4_ext_tracks_slow_soundSet","SPE_tank_pz4_ext_tracks_mid_soundSet","SPE_tank_pz4_ext_tracks_fast_soundSet","SPE_tank_pz4_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet"};
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
        /*
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\gun.paa";
					};
                };
            };
        };
        */
    };
    class LIB_FlakPanzerIV_Wirbelwind: LIB_PzKpfwIV_H_base
    {
        soundEngineOffExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Stop.wss",1,1,200};
        soundEngineOffInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Stop.wss",1,1};
        soundEngineOnExt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Ext_Start_1.wss",1,1,200};
        soundEngineOnInt[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_Int_Start_1.wss",1,1};
        soundGetIn[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        soundGetOut[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20};
        class Sounds
        {
            soundSetsExt[] = {"SPE_tank_pz4_ext_idle_SoundSet","SPE_tank_pz4_ext_slow_SoundSet","SPE_tank_pz4_ext_mid_SoundSet","SPE_tank_pz4_ext_fast_SoundSet","SPE_tank_pz4_exhaust_ext_idle_SoundSet","SPE_tank_pz4_exhaust_ext_slow_SoundSet","SPE_tank_pz4_exhaust_ext_mid_SoundSet","SPE_tank_pz4_exhaust_ext_fast_SoundSet","SPE_tank_pz4_dist_slow_SoundSet","SPE_tank_pz4_dist_mid_SoundSet","SPE_tank_pz4_dist_high_SoundSet","SPE_tank_pz4_ext_tracks_slow_soundSet","SPE_tank_pz4_ext_tracks_mid_soundSet","SPE_tank_pz4_ext_tracks_fast_soundSet","SPE_tank_pz4_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
            soundSetsInt[] = {"SPE_tank_pz4_int_idle_SoundSet","SPE_tank_pz4_int_slow_SoundSet","SPE_tank_pz4_int_mid_SoundSet","SPE_tank_pz4_int_fast_SoundSet","SPE_tank_pz4_exhaust_int_idle_SoundSet","SPE_tank_pz4_exhaust_int_slow_SoundSet","SPE_tank_pz4_exhaust_int_mid_SoundSet","SPE_tank_pz4_exhaust_int_fast_SoundSet","SPE_tank_pz4_ext_tracks_slow_soundSet","SPE_tank_pz4_ext_tracks_mid_soundSet","SPE_tank_pz4_ext_tracks_fast_soundSet","SPE_tank_pz4_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet"};
        };
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
        /*
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\PzKpfwIV_H\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Flakpanzer\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\Flakpanzer\gun.paa";
					};
                };
            };
        };
        */
    };
    class LIB_SU85_base: LIB_Tank_base
    {
		armor = 300; //400
		armorStructural = 50; //100
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_LIB_D_55"};
				magazines[] = {"SPE_15x_76mm_M7_M62_APCBC","SPE_8x_76mm_M7_M93_APCR","SPE_25x_76mm_M7_M42_HE"};
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_LIB_D_55";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_LIB_D_55";
			};
			class reticle_v_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.1;
			};
			class reticle_h_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.5;
			};
		};
		
        //SPE hud
		/*
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SU85\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SU85\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SU85\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SU85\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SU85\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\SU85\gun.paa";
					};
                };
            };
        };
		*/
		
    };
	class LIB_Zis3_base: LIB_StaticCannon_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_LIB_76mm_ZIS3"};
				magazines[] = {"SPE_40x_76mm_M7_M62_APCBC","SPE_10x_76mm_M7_M93_APCR","SPE_50x_76mm_M7_M42_HE"};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
				initElev = 5;
				gunnerForceOptics = 0;
				ejectDeadGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -5;
					maxAngleX = 37;
					initAngleY = 0;
					minAngleY = -27;
					maxAngleY = 27;
					initFov = 0.3;
					minFov = 0.3;
					maxFov = 0.3;
				};
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
					};
					class Narrow: Narrow
					{
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerType = "LIB_SOV_gun_lieutenant";
				ejectDeadGunner = 1;
				class ViewOptics: ViewOptics{};
			};
		};
		class AnimationSources: AnimationSources
		{
			class LIB_ZIS3_reload_weapon_state
			{
				source = "reload";
				weapon = "JPSP_LIB_76mm_ZIS3";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_LIB_76mm_ZIS3";
			};
			class LIB_ZIS3_reload_magazine_state: LIB_ZIS3_reload_weapon_state
			{
				source = "reloadmagazine";
			};
			class LIB_ZIS3_count_magazine_state: LIB_ZIS3_reload_weapon_state
			{
				source = "revolving";
			};
			class PanoramaY: recoil_source
			{
				animPeriod = 0.001;
			};
			class Reflector: recoil_source
			{
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
	};
	class LIB_Zis2_base: LIB_Zis3_base
	{
		displayName = "57mm ZIS-2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_LIB_57mm_ZIS2"};
				magazines[] = {"SPE_20x_57mm_M86_APCBC","SPE_20x_57mm_M70_AP","SPE_12x_6pdr_Mk1T_APDS","SPE_21x_57mm_T18_HE","SPE_21x_57mm_T18_HE"};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
				initElev = 5;
				gunnerForceOptics = 0;
				ejectDeadGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -5;
					maxAngleX = 37;
					initAngleY = 0;
					minAngleY = -27;
					maxAngleY = 27;
					initFov = 0.3;
					minFov = 0.3;
					maxFov = 0.3;
				};
				class OpticsIn: OpticsIn
				{
					class Wide: Wide
					{
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
					};
					class Narrow: Narrow
					{
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Zis3.p3d";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
			};
			class CommanderOptics: CommanderOptics
			{
				gunnerType = "LIB_SOV_gun_lieutenant";
				ejectDeadGunner = 1;
				class ViewOptics: ViewOptics{};
			};
		};
		class AnimationSources: AnimationSources
		{
			class LIB_ZIS3_reload_weapon_state
			{
				source = "reload";
				weapon = "JPSP_LIB_76mm_ZIS3";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_LIB_76mm_ZIS3";
			};
			class LIB_ZIS3_reload_magazine_state: LIB_ZIS3_reload_weapon_state
			{
				source = "reloadmagazine";
			};
			class LIB_ZIS3_count_magazine_state: LIB_ZIS3_reload_weapon_state
			{
				source = "revolving";
			};
			class PanoramaY: recoil_source
			{
				animPeriod = 0.001;
			};
			class Reflector: recoil_source
			{
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
	};
	class JPSP_ZIS2: LIB_Zis2_base
	{
		author = "AWAR";
		scope = 2;
		side = 0;
		faction = "LIB_RKKA";
		crew = "LIB_SOV_gun_crew";
		typicalCargo[] = {"LIB_SOV_gun_sergeant","LIB_SOV_gun_crew","LIB_SOV_gun_crew"};
	};
    
    class LIB_T34_76_base: LIB_Tank_base
    {
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_LIB_76mm_F34","LIB_DT29"};
				magazines[] = {"SPE_40x_M61_M1_AP","SPE_14x_T45_M1_APCR","SPE_50x_M48_HE",
				"LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT"};
			};
		};
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_LIB_76mm_F34";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_LIB_76mm_F34";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_DT29";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_DT29";
			};
			class reticle_v_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.1;
			};
			class reticle_h_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.5;
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
		/*
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_76\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_76\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_76\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_76\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_76\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_76\gun.paa";
					};
                };
            };
        };
		*/
    };
	
	class JPSP_OT34_76: LIB_T34_76_base
	{
		scope=2;
		displayName="OT-34-76";
		side=0;
		faction="LIB_RKKA";
		crew="LIB_sov_tank_overall_crew";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_LIB_76mm_F34","LIB_DT29"};
				magazines[] = {"SPE_40x_M61_M1_AP","SPE_14x_T45_M1_APCR","SPE_50x_M48_HE",
				"LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT"};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
				gunnerOutOpticsModel = "\WW2\Assets_m\Weapons\Optics_m\IF_Optika_Empty.p3d";
				gunnerType = "LIB_SOV_tank_lieutenant";
				maxHorizontalRotSpeed = "((360/14)/40)";
				maxVerticalRotSpeed = 0.25;
				primaryObserver = 1;
				gunnerForceOptics = 0;
				gunnerInAction = "crew_tank01_in";
				gunnerAction = "commander_mbt3_out";
				animationSourceHatch = "HatchGunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				minElev = -5;
				maxElev = 25;
				proxyIndex = 1;
				forceHideGunner = 0;
				lodTurnedIn = 1000;
				lodTurnedOut = -1;
				class OpticsIn
				{
					class Near
					{
						opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
				};
				isPersonTurret = 1;
				personTurretAction = "vehicle_turnout_2";
				minOutElev = -45;
				maxOutElev = 45;
				initOutElev = 0;
				minOutTurn = -95;
				maxOutTurn = 95;
				initOutTurn = 0;
				class Turrets
				{
					class Loader_place: NewTurret
					{
						proxyIndex = 2;
						weapons[] = {};
						magazines[] = {};
						body = "";
						gun = "";
						selectionFireAnim = "";
						animationSourceBody = "view_loader_turret";
						animationSourceGun = "view_loader_gun";
						animationSourceHatch = "hatchLoader";
						lockWhenDriverOut = 0;
						startEngine = 0;
						stabilizedInAxes = 0;
						primaryGunner = 0;
						commanding = -1;
						gunnerName = "$STR_LIB_tank_loader";
						gunnerType = "LIB_SOV_tank_overall_crew";
						gunnerForceOptics = 1;
						maxHorizontalRotSpeed = 1.5;
						maxVerticalRotSpeed = 1.5;
						minElev = -45;
						maxElev = 45;
						minTurn = -50;
						maxTurn = 20;
						gunBeg = "view_loader";
						gunEnd = "view_loader";
						memoryPointGun = "view_loader";
						memoryPointGunnerOptics = "view_loader";
						memoryPointsGetInGunner = "pos_loader";
						memoryPointsGetInGunnerDir = "pos_loader_dir";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerInAction = "LIB_t34_76_loader_In";
						gunnerAction = "LIB_t34_76_Loader_Out";
						gunnerOutOpticsModel = "\WW2\Assets_m\Weapons\Optics_m\IF_Optika_Empty.p3d";
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_T34_Commander_Optic.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics: ViewOptics
						{
							minAngleX = -100;
							maxAngleX = 100;
							minAngleY = -360;
							maxAngleY = 360;
							initFov = 0.194;
							minFov = 0.194;
							maxFov = 0.194;
						};
						allowTabLock = 0;
						canUseScanners = 0;
						class HitPoints{};
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_2";
						minOutElev = -45;
						maxOutElev = 45;
						initOutElev = 0;
						minOutTurn = -95;
						maxOutTurn = 95;
						initOutTurn = 0;
					};
				};
			};
			class kurs_MG_turret: NewTurret
			{
				body="kurs_MG_turret";
				gun="kurs_MG_gun";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				animationSourceHatch="";
				selectionFireAnim="zasleh_kursMG";
				proxyIndex=3;
				lockWhenDriverOut=0;
				gunnerInAction="LIB_t34_76_commander_In";
				gunnerAction="LIB_t34_76_commander_In";
				memoryPointsGetInGunner="pos_driver";
				memoryPointsGetInGunnerDir="pos_driver_dir";
				getInAction="GetInLow";
				getOutAction="GetOutLow";
				gunnerName="Flamethrower's seat";
				primaryGunner=0;
				primaryObserver=0;
				commanding=-1;
				maxHorizontalRotSpeed=1.5;
				maxVerticalRotSpeed=1.5;
				minElev=-10;
				maxElev=10;
				minTurn=-12;
				maxTurn=12;
				startEngine=0;
				weapons[]=
				{
					"LIB_Tank_Flamethrower"
				};
				magazines[]=
				{
					"LIB_Crocodile_FlameProjector_Mag",
					"LIB_Crocodile_FlameProjector_Mag"
				};
				gunBeg="kursMG_beg";
				gunEnd="kursMG_end";
				memoryPointGun="kulas_kursMG";
				memoryPointGunnerOptics="gunnerview_kursMG";
				gunnerOpticsModel="\WW2\Assets_m\Vehicles\Optics_m\IF_T34_mg_optic.p3d";
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-100;
					maxAngleX=100;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.19400001;
					minFov=0.19400001;
					maxFov=0.19400001;
				};
			};
		};
	};
    class LIB_T34_85_base: LIB_Tank_base
    {
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_LIB_85mm_ZiSS53","LIB_DT29"};
				magazines[] = {"SPE_14x_76mm_M7_M62_APCBC","SPE_5x_76mm_M7_M93_APCR","SPE_36x_76mm_M7_M42_HE",
				"LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT"};
			};
		};
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_LIB_85mm_ZiSS53";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_LIB_85mm_ZiSS53";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_DT29";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_DT29";
			};
			class reticle_v_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.1;
			};
			class reticle_h_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.5;
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
		/*
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\T34_85\gun.paa";
					};
                };
            };
        };
		*/
    };
	
    class LIB_JS2_43_base: LIB_Tank_base
    {
		class EventHandlers
		{
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_Tanks
			{
				init = "_this call SPE_System_Tanks_EH_Tank_init";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_D25T","LIB_DT29"};
				//magazines[] = {"LIB_63rnd_DT"};
				magazines[] = {"SPE_12x_M101_M67_HEAT","SPE_16x_M101_M1_HE","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT"};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optics.p3d";
				maxHorizontalRotSpeed = "((360/40)/40)";
				maxVerticalRotSpeed = 0.14;
				gunnerAction = "T72_GunnerOut";
				gunnerInAction = "T72_Gunner";
				gunnerType = "LIB_SOV_tank_overall_sergeant";
				minElev = -3;
				maxElev = 20;
				//JPSP hitpoint modification
				class HitPoints: Hitpoints
				{
					class HitGun: HitGun
					{
						armor = 1; //0.8
						explosionShielding = 0.2;
						material = -1;
						minimalHit = 0.15;
						name = "main_gun_hit";
						passThrough = 0;
						radius = 0.25;
						visual = "dmg_gun";
					};
					class HitTurret: HitTurret
					{
						armor = 1;
						explosionShielding = 0.2;
						material = -1;
						minimalHit = 0.15;
						name = "main_turret_hit";
						passThrough = 0.5;
						radius = 0.25;
						visual = "dmg_turret";
					};
				};

				class ViewOptics: ViewOptics
				{
					initFov = 0.0625;
					minFov = 0.0625;
					maxFov = 0.0625;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						stabilizedInAxes = 0;
						gunnerInAction = "crew_tank01_in";
						gunnerAction = "commander_mbt3_out";
						gunnerOpticsModel = "";
						gunnerForceOptics = 0;
						lodTurnedIn = 1000;
						lodTurnedOut = -1;
						gunnerType = "LIB_SOV_tank_overall_lieutenant";
						class ViewOptics: ViewOptics
						{
							minAngleX = -100;
							maxAngleX = 100;
							minAngleY = 155;
							maxAngleY = 205;
							initFov = 0.194;
							minFov = 0.194;
							maxFov = 0.194;
						};
					};
					class Loader_place: Loader_place
					{
						proxyIndex = 2;
						gunnerInAction = "ZSU_Commander";
						gunnerAction = "lib_JS2_commander_Out";
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_JS_Commander_Optic.p3d";
						gunnerType = "LIB_SOV_tank_overall_crew";
					};
					class back_MG_turret: NewTurret
					{
						weapons[] = {"LIB_DT29_back"};
						magazines[] = {"LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT","LIB_63rnd_DT"};
						body = "back_MG_turret";
						gun = "back_MG_gun";
						animationSourceBody = "Turret_2";
						animationSourceGun = "Gun_2";
						animationSourceHatch = "";
						selectionFireAnim = "zasleh_back_MG";
						forceHideGunner = 1;
						startEngine = 0;
						stabilizedInAxes = 0;
						maxHorizontalRotSpeed = 1.5;
						maxVerticalRotSpeed = 1.5;
						gunnerInAction = "LIB_t34_85_loader_In";
						gunnerAction = "lib_JS2_loader_Out";
						memoryPointsGetInGunner = "pos_loader";
						memoryPointsGetInGunnerDir = "pos_loader_dir";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						proxyIndex = 3;
						primaryGunner = 0;
						commanding = -1;
						gunnerName = "$STR_LIB_tank_machinegunner";
						minElev = -25;
						maxElev = 25;
						minTurn = 155;
						maxTurn = 205;
						gunBeg = "backMG_beg";
						gunEnd = "backMG_end";
						memoryPointGun = "kulas_backMG";
						memoryPointGunnerOptics = "gunnerview_backMG";
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Js_MG_Optic.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						gunnerType = "LIB_SOV_tank_overall_crew";
						class HitPoints{};
						LIB_WP_TurretProtected = 1;
						class ViewOptics: ViewOptics
						{
							minAngleX = -100;
							maxAngleX = 100;
							minAngleY = 155;
							maxAngleY = 205;
							initFov = 0.194;
							minFov = 0.194;
							maxFov = 0.194;
						};
					};
				};
			};
		};
		class AnimationSources: Animationsources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_D25T";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_D25T";
			};
			class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "LIB_DT29";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "LIB_DT29";
			};
			class reticle_v_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.1;
			};
			class reticle_h_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0.5;
			};
			class ACE_Turret
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
		};
				/*
        //SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\JS2_43\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\JS2_43\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\JS2_43\ltrack.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\JS2_43\rtrack.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\JS2_43\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Tanks\JS2_43\gun.paa";
					};
                };
            };
        };
		*/
    };
    
};
class CfgWeapons
{
	//inherit begin
	class SPE_M3_L40_base;
    class SPE_M3_L40;
	class SPE_M1_57mm_Base;
    class SPE_M1_57mm;
	class SPE_M4_Howitzer;
	class SPE_M4_Howitzer_base;
	class SPE_M4_Howitzer_HEAT_AI;
	class SPE_M4_Howitzer_SMOKE_AI;
	// inherit end

	//SPE renamed guns
    class JPSP_QOF_75: SPE_M3_L40
    {
        displayName = "Ordnance QF 75 mm";
        class MODE_PLAYER_ALL: SPE_M3_L40_base
        {
            displayName = "Ordnance QF 75 mm";
        };
    };
    class JPSP_QOF_6: SPE_M1_57mm
    {
        displayName = "Ordnance QF 6-pounder";
        class MODE_PLAYER_ALL: SPE_M1_57mm_Base
        {
            displayName = "Ordnance QF 6-pounder";
        };
    };
    class JPSP_LIB_57mm_ZIS2: SPE_M1_57mm
    {
        displayName = "57mm ZiS-2";
        class MODE_PLAYER_ALL: SPE_M1_57mm_Base
        {
            displayName = "57mm ZiS-2";
        };
    };
	class SPE_M7_76mm_base;
	class SPE_M7_76mm_L55;
	class JPSP_LIB_D_55: SPE_M7_76mm_L55
	{
		displayName = "85mm D-5S";
		class MODE_PLAYER_ALL: SPE_M7_76mm_base
        {
            displayName = "85mm D-5S";
        };
	};
	class JPSP_LIB_76mm_ZIS3: SPE_M7_76mm_L55
	{
		displayName = "76mm ZiS-3";
		class MODE_PLAYER_ALL: SPE_M7_76mm_base
        {
            displayName = "76mm ZiS-3";
        };
	};
    class JPSP_LIB_76mm_F34: SPE_M3_L40
    {
        displayName = "76mm F-34";
        class MODE_PLAYER_ALL: SPE_M3_L40_base
        {
            displayName = "76mm F-34";
        };
    };
	class JPSP_LIB_85mm_ZiSS53: SPE_M7_76mm_L55
	{
		displayName = "85mm ZiS-S-53";
		class MODE_PLAYER_ALL: SPE_M7_76mm_base
        {
            displayName = "85mm ZiS-S-53";
        };
	};
	class JPSP_D25T: SPE_M4_Howitzer
	{
		displayName = "122 mm D-25T";
		magazineReloadTime = 24; //24
		reloadTime = 24;
		magazines[] = {"SPE_M101_M1_HE","SPE_M101_M67_HEAT"};
		magazineWell[] = {"SPE_105x372mm_M101_HE","SPE_105x372mm_M101_HEAT"};
        class MODE_PLAYER_ALL: SPE_M4_Howitzer_base
        {
            displayName = "122 mm D-25T";
			magazines[] = {"SPE_M101_M1_HE","SPE_M101_M67_HEAT"};
			magazineWell[] = {"SPE_105x372mm_M101_HE","SPE_105x372mm_M101_HEAT"};
			magazineReloadTime = 24;
			reloadTime = 24;
        };
		class MODE_AI_HEAT: SPE_M4_Howitzer_HEAT_AI
		{
            displayName = "122 mm D-25T";
			magazines[] = {"SPE_M101_M67_HEAT"};
			magazineWell[] = {"SPE_105x372mm_M101_HEAT"};
			magazineReloadTime = 24;
			reloadTime = 24;
		};
		class MODE_AI_SMOKE: SPE_M4_Howitzer_SMOKE_AI
		{
            displayName = "122 mm D-25T";
			magazines[] = {};
			magazineWell[] = {};
			magazineReloadTime = 24;
			reloadTime = 24;
		};
	};
};
