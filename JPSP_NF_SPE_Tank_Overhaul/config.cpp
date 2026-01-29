#define _ARMA_

class CfgPatches
{
	class JPSP_NF_SPE_Tank_Overhaul
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {"JPSP_NF_76mm_F34","JPSP_NF_85mm_ZiSS53","JPSP_NF_76mm_F32","JPSP_NF_76mm_ZiS5","JPSP_NF_45mm"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","NORTH_vehicles_cfg"};
		ammo[] = {};
	};
};

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class VehicleSystemsTemplateLeftDriver;
class VehicleSystemsTemplateRightDriver;
class CfgVehicles
{
    //inherit start
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class Components;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class EventHandlers;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class NORTH_Tank_Base: Tank_F
	{
		author = "$STR_NORTH_author";
		commanderCanSee = "1 + 2 + 4 + 8";
		gunnerCanSee = "1 + 2 + 4 + 8";
		driverCanSee = "1 + 2 + 4 + 8";
		hideWeaponsDriver = 1;
		hideWeaponsGunner = 1;
		hideWeaponsCommander = 1;
		sensitivity = 2.5;
		accuracy = 0.7;
		irScanRangeMax = 5000;
		irScanRangeMin = 0;
		crewVulnerable = 0;
		driverInAction = "crew_tank01_in";
		GunnerInAction = "crew_tank01_in";
		CommanderInAction = "crew_tank01_in";
		forceHideDriver = 1;
		radarType = 0;
		destrType = "DestructDefault";
		attenuationEffectType = "TankAttenuation";
		_generalMacro = "NORTH_Tank_Base";
		maxFordingDepth = 0.55;
		cost = 1200000;
		canUseScanners = 0;
		class Components: Components
		{
			class AITankSteeringComponent;
			class TransportCountermeasuresComponent;
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftDriver
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightDriver
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
				};
			};
		};
		explosionEffect = "NORTH_vehExplosionBig";
		secondaryExplosionEffect = "NORTH_SmallSecondary";
		class EventHandlers: Eventhandlers
		{
			killed = "_this call NORTH_fnc_effectKilled";
		};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_tank_s"};
				speechPlural[] = {"veh_vehicle_tank_p"};
			};
		};
		nameSound = "veh_vehicle_tank_s";
		simulation = "tankX";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				visual = "telo";
				passThrough = 1;
				minimalHit = 0.15;
				explosionShielding = 1.0;
				radius = 0.141;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.5;
				material = -1;
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.178;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.5;
				material = -1;
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.178;
			};
			class HitEngine: HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.141;
			};
		};
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0},{"wheel_podkolol3",0},{"wheel_podkolol4",0},{"wheel_podkolol5",0},{"wheel_podkolol6",0},{"wheel_podkolop2",0},{"wheel_podkolop3",0},{"wheel_podkolop4",0},{"wheel_podkolop5",0},{"wheel_podkolop6",0},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"maingunoptics",0.17},{"maingunint",0.17},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"drivingwheel",0},{"indicatorspeed_mfd_driver",0},{"indicatorrpm",0},{"indicatorrpm_mfd_driver",0},{"lights_driver",0},{"lights_driver_off",0},{"lights_turret",0},{"dmg_com_halo_unhide",0},{"engine_damage_indicator",0},{"main_gun_damage_indicator",0},{"track_damage_indicator",0},{"pedal_thrust",0},{"pedal_brake",0},{"indicatortempwater_mfd_driver",0},{"indicatorfuel_mfd_driver",1},{"indicator_hull_direction_mfd_driver",0},{"indicator_main_turret_mfd_driver",0},{"indicator_hull_direction_mfd_com",0},{"indicator_main_turret_mfd_com",0},{"indicator_main_turret_onscreen_com",0},{"indicator_com_turret_mfd_com",0},{"indicator_com_turret_onscreen_com",0},{"indicator_hull_direction_mfd_gunner",0},{"indicator_main_turret_mfd_gunner",0},{"indicator_com_smoke_1",1},{"indicator_com_smoke_2",1},{"indicator_damage_engine",0},{"indicator_damage_fuel",0},{"indicator_damage_tracks",0},{"indicator_turret_damage_hull",0},{"lights_turret2",0},{"indicator_turret_damage_engine",0},{"indicator_turret_damage_fuel",0},{"indicator_turret_damage_main_gun",0},{"indicator_turret_damage_track",0},{"indicator_turret_damage_turret",0},{"indicator_turret_damage_comturret",0},{"hide_mfd_and_pip_screen_driver",1},{"hide_mfd_and_pip_screen_gunner",1},{"hide_mfd_elements",1},{"cannon_muzzle_flash",0},{"zaslehrot_cannon",521},{"cannon_ready_light",0},{"turret_control_x",0},{"turret_control_y",0},{"com_turret_control_x",0},{"com_turret_control_y",0}};
			hide[] = {"clan","zasleh","zasleh_1","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni","nr_hr_Ps","nr_hf_Ps","nr_hf_1","nr_hf_2","nr_hf_3","nr_hf_4","nr_hf_5","nr_hf_6","nr_hf_7","nr_hr_1","nr_hr_2","nr_hr_3","nr_hr_4","nr_hr_5","nr_hr_6","nr_hr_7","nr_tur_1","nr_tur_2","nr_tur_3"};
			verticalOffset = 2.477;
			verticalOffsetWorld = 0;
			init = "this call NORTH_fnc_initSimpleObject";
		};
		scope = 1;
		scopeCurator = 1;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
		memoryPointsGetInCommander = "pos commander";
		memoryPointsGetInCommanderDir = "pos commander dir";
		hiddenSelections[] = {"camo"};
		NORTH_moloHitProbability[] = {0.9,0.3};
		NORTH_moloHitProbabilityCoef[] = {{0.85,0.9,1},{0.5,0.7,1}};
		NORTH_vehicleTimePeriod = 0;
		NORTH_vehicleDesignation = 164;
		NORTH_vehicleNumberRange[] = {50,166};
		NORTH_vehicleHideSelections[] = {{"nr_hf_ps","nr_hr_ps"},{},{},{},{}};
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		proxyType = "CPDriver";
		mapSize = 8;
		threat[] = {0.9,1,0.9};
		nightVision = 0;
		driverAction = "ManActTestDriverOut";
		driverForceOptics = 1;
		memoryPointDriverOptics = "driverview";
		memoryPointDriverOutOptics = "driverview";
		transportSoldier = 0;
		unloadInCombat = 1;
		typicalCargo[] = {};
		cargoAction[] = {};
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		insideSoundCoef = 0.9;
		armor = 500;
		armorStructural = 4;
		enableGPS = 0;
		damperSize = 0.35;
		damperForce = 0.4;
		damperDamping = 0.25;
		terrainCoef = 2.0;
		supplyRadius = 4.0;
		memoryPointSupply = "doplnovani";
		getInRadius = 2.5;
		bounding = "light_L";
		alphaTracks = 1;
		memoryPointTrack1L = "Stopa ll";
		memoryPointTrack1R = "Stopa lr";
		memoryPointTrack2L = "Stopa rl";
		memoryPointTrack2R = "Stopa rr";
		selectionLeftOffset = "pasoffsetL";
		selectionRightOffset = "pasoffsetP";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 1;
				gunnerCanSee = "1 + 2 + 4 + 8";
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {};
				magazines[] = {};
				gunnerName = "Gunner";
				commanding = 2;
				canUseScanners = 0;
				primaryGunner = 1;
				primaryObsever = 0;
				hasGunner = 1;
				stabilizedInAxes = 0;
				gunnerInAction = "ManActTestDriver";
				gunnerOpticsModel = "NORTH\NF_vehicles\fin\t26\45mm_optics.p3d";
				maxHorizontalRotSpeed = 1.4;
				maxVerticalRotSpeed = 1.4;
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {1,1,1,1};
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				gunnerAction = "ManActTestDriverOut";
				gunnerOutOpticsModel = "";
				gunnerOutForceOptics = 0;
				outGunnerMayFire = 0;
				viewGunnerInExternal = 0;
				viewCommanderInExternal = 0;
				forceHideGunner = 0;
				class Components: Components
				{
					class AITankSteeringComponent;
					class TransportCountermeasuresComponent;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftDriver
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightDriver
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
						};
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
				};
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGun = "kulas";
				animationSourceBody = "mainTurret";
				gun = "OtocHlaven";
				animationSourceGun = "mainGun";
				animationSourceHatch = "hatchGunner";
				selectionFireAnim = "zasleh";
				startEngine = 0;
				proxyType = "CPGunner";
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						name = "vez";
						visual = "vez";
						material = -1;
						passThrough = 0;
						minimalHit = 0.3;
						explosionShielding = 0.3;
						radius = 0.1;
					};
					class HitGun
					{
						armor = 0.2;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.4;
						explosionShielding = 0.3;
						radius = 0.1;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						turretInfoType = "RscWeaponZeroing";
						weapons[] = {};
						magazines[] = {};
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						gunnerName = "Commander";
						commanding = 2;
						primaryGunner = 0;
						primaryObserver = 1;
						hasGunner = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerInAction = "ManActTestDriver";
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
						gunnerOutOpticsModel = "";
						gunnerOutOpticsColor[] = {1,1,1,1};
						gunnerOpticsColor[] = {1,1,1,1};
						gunnerOpticsEffect[] = {};
						gunnerForceOptics = 1;
						inGunnerMayFire = 1;
						gunnerAction = "ManActTestDriverOut";
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						outGunnerMayFire = 1;
						viewGunnerInExternal = 0;
						forceHideGunner = 0;
						canUseScanners = 0;
						class Components: Components
						{
							class AITankSteeringComponent;
							class TransportCountermeasuresComponent;
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftDriver
							{
								componentType = "VehicleSystemsDisplayManager";
								defaultDisplay = "EmptyDisplay";
								left = 1;
								x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
								y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
								class Components
								{
									class EmptyDisplay
									{
										componentType = "EmptyDisplayComponent";
									};
									class CrewDisplay
									{
										componentType = "CrewDisplayComponent";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightDriver
							{
								componentType = "VehicleSystemsDisplayManager";
								defaultDisplay = "EmptyDisplay";
								right = 1;
								x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
								y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
								class Components
								{
									class EmptyDisplay
									{
										componentType = "EmptyDisplayComponent";
									};
									class CrewDisplay
									{
										componentType = "CrewDisplayComponent";
									};
								};
							};
						};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.14;
							minFov = 0.14;
							maxFov = 0.14;
						};
						soundServo[] = {};
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						gunBeg = "";
						gunEnd = "";
						memoryPointGun = "gun_muzzle";
						stabilizedInAxes = 0;
						animationSourceBody = "obsTurret";
						body = "OtocVelitele";
						animationSourceGun = "obsGun";
						gun = "obsGun";
						selectionFireAnim = "zasleh_com";
						animationSourceHatch = "poklop_Commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						startEngine = 0;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_start",0.7943282,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_int_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\epb_2_ext_stop",0.7943282,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_1",0.7943282,1,200};
				frequency = "0.95 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_2",0.8912509,1,240};
				frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_3",1.1220185,1,280};
				frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_4",1.2589254,1,320};
				frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_5",1.4125376,1,360};
				frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_6",1.5848932,1,400};
				frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_7",1.7782794,1,440};
				frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_1",1.1220185,1,200};
				frequency = "0.8 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_2",1.4125376,1,200};
				frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_3",1.7782794,1,230};
				frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_4",1.9952624,1,290};
				frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_5",1.7782794,1,350};
				frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_6",2.2387211,1,400};
				frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_7",2.5118864,1,450};
				frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_1",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_2",0.3548134,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_3",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_7",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_1",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(400/ 2600),(750/ 2600)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(100/ 2600),(200/ 2600)]) * ((rpm/ 2600) factor[(850/ 2600),(700/ 2600)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_2",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(620/ 2600),(910/ 2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(720/ 2600),(790/ 2600)]) * ((rpm/ 2600) factor[(950/ 2600),(850/ 2600)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_3",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(800/ 2600),(1150/ 2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(830/ 2600),(940/ 2600)]) * ((rpm/ 2600) factor[(1200/ 2600),(1000/ 2600)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(960/ 2600),(1500/ 2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(950/ 2600),(1100/ 2600)]) * ((rpm/ 2600) factor[(1500/ 2600),(1250/ 2600)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(1200/ 2600),(1700/ 2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1250/ 2600),(1450/ 2600)]) * ((rpm/ 2600) factor[(1700/ 2600),(1560/ 2600)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(1520/ 2600),(2000/ 2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2600) factor[(1570/ 2600),(1670/ 2600)]) * ((rpm/ 2600) factor[(2200/ 2600),(1900/ 2600)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_7",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2600) factor[(1800/ 2600),(2300/ 2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2600) factor[(1950/ 2600),(2170/ 2600)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",0.8912509,1.0,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2",0.3548134,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1",0.25118864,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2",0.2818383,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-0) max 0)/ 65),(((-5) max 5)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-15) max 15)/ 65),(((-10) max 10)/ 65)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-11) max 11)/ 65),(((-15) max 15)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-25) max 25)/ 65),(((-20) max 20)/ 65)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-21) max 21)/ 65),(((-25) max 25)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-35) max 35)/ 65),(((-30) max 30)/ 65)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 65) factor[(((-31) max 31)/ 65),(((-35) max 35)/ 65)]) * ((((-speed*3.6) max speed*3.6)/ 65) factor[(((-45) max 45)/ 65),(((-40) max 40)/ 65)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 65) factor[(((-41) max 41)/ 65),(((-50) max 50)/ 65)])";
			};
		};
		class GunFire: WeaponFireGun{};
		class GunClouds: WeaponCloudsGun{};
		class MGunClouds: WeaponCloudsMGun{};
		class Library{};
	};
	//inherit end
	class NORTH_FIN_T34_76_1941: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{

				// SPE Components
				class Components
				{
					class VehicleSystemsTemplateLeftGunner;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsTemplateRightGunner;
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				weapons[] = {"JPSP_NF_76mm_F34","NORTH_DT_01"};
				magazines[] = {"SPE_50x_M61_M1_AP","SPE_50x_M48_HE",
				"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_76mm_F34";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_76mm_F34";
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
	class NORTH_FIN_T34_76_1943: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{

				// SPE Components
				class Components
				{
					class VehicleSystemsTemplateLeftGunner;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsTemplateRightGunner;
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				weapons[] = {"JPSP_NF_76mm_F34","NORTH_DT_01"};
				magazines[] = {"SPE_50x_M61_M1_AP","SPE_50x_M48_HE",
				"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_76mm_F34";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_76mm_F34";
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
	class NORTH_FIN_T34_85_45: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{

				// SPE Components
				class Components
				{
					class VehicleSystemsTemplateLeftGunner;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsTemplateRightGunner;
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				//magazines[] = {"SPE_18x_76mm_M7_M62_APCBC","SPE_8x_76mm_M7_M93_APCR","SPE_20x_76mm_M7_M42_HE","SPE_8x_76mm_M7_M89_SMK"};
				//weapons[] = {"SPE_M7_76mm_L55"};
				weapons[] = {"JPSP_NF_85mm_ZiSS53","NORTH_DT_01","SmokeLauncher"};
				magazines[] = {"SPE_40x_76mm_M7_M62_APCBC","SPE_10x_76mm_M7_M93_APCR","SPE_50x_76mm_M7_M42_HE",
				"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","SmokeLauncherMag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_85mm_ZiSS53";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_85mm_ZiSS53";
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
	class NORTH_FIN_T34_85: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{

				// SPE Components
				class Components
				{
					class VehicleSystemsTemplateLeftGunner;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsTemplateRightGunner;
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				weapons[] = {"JPSP_NF_85mm_ZiSS53","NORTH_DT_01"};
				magazines[] = {"SPE_40x_76mm_M7_M62_APCBC","SPE_10x_76mm_M7_M93_APCR","SPE_50x_76mm_M7_M42_HE",
				,"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_85mm_ZiSS53";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_85mm_ZiSS53";
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

	/*
	class NORTH_FIN_KV1_1940: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_NF_76mm_F32","NORTH_DT_01"};
				magazines[] = {"SPE_50x_M61_M1_AP","SPE_50x_M48_HE",
				"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_76mm_F32";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_76mm_F32";
			};
		};
	};
	class NORTH_FIN_KV1_1942: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"SPE_M1_76mm_L55","SPE_M1919A4_coax"};
				//magazines[] = {"SPE_6x_76mm_M1_M93_APCR","SPE_30x_76mm_M1_M62_APCBC","SPE_28x_76mm_M1_M42_HE","SPE_7x_76mm_M1_M89_SMK","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4"};
				weapons[] = {"JPSP_NF_76mm_ZiS5","NORTH_DT_01"};
				magazines[] = {"SPE_30x_76mm_M1_M62_APCBC","SPE_28x_76mm_M1_M42_HE",
				"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_76mm_ZiS5";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_76mm_ZiS5";
			};
		};
	};
	*/
	class NORTH_SOV_T70: NORTH_Tank_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{

				// SPE Components
				class Components
				{
					class VehicleSystemsTemplateLeftGunner;
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};

					class VehicleSystemsTemplateRightGunner;
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class AmmoDisplay
							{
								componentType = "CustomDisplayComponent";
								resource = "SPE_RscVehicleAmmoStatus";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
						};
					};
				};

				//weapons[] = {"SPE_M6_L53","SPE_M1919A4_coax"};
				//magazines[] = {"SPE_20x_Shell_37L57_M51_APC","SPE_15x_Shell_37L57_M74_AP","SPE_30x_Shell_37L57_M63_HE","SPE_15x_Shell_37L57_M2_Canister","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4","SPE_250Rnd_M1919A4"};
				weapons[] = {"JPSP_NF_45mm","NORTH_DT_01"};
				magazines[] = {"SPE_20x_Shell_37L57_M51_APC","SPE_15x_Shell_37L57_M74_AP","SPE_30x_Shell_37L57_M63_HE","SPE_15x_Shell_37L57_M2_Canister",
				"NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag","NORTH_47rnd_dt_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "JPSP_NF_45mm";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_NF_45mm";
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
};
class CfgWeapons
{
	//85mm ZiS-S-53
    class SPE_M3_L40_base;
    class SPE_M3_L40;
    class JPSP_NF_76mm_F34: SPE_M3_L40
    {
        displayName = "76mm F-34";
        class MODE_PLAYER_ALL: SPE_M3_L40_base
        {
            displayName = "76mm F-34";
        };
    };
    class JPSP_NF_76mm_F32: SPE_M3_L40
    {
        displayName = "76mm F-32";
        class MODE_PLAYER_ALL: SPE_M3_L40_base
        {
            displayName = "76mm F-32";
        };
    };
	class SPE_M7_76mm_base;
	class SPE_M7_76mm_L55;
	class JPSP_NF_85mm_ZiSS53: SPE_M7_76mm_L55
	{
		displayName = "85mm ZiS-S-53";
		class MODE_PLAYER_ALL: SPE_M7_76mm_base
        {
            displayName = "85mm ZiS-S-53";
        };
	};
	class SPE_M1_76mm_base;
	class SPE_M1_76mm_L55;
	class JPSP_NF_76mm_ZiS5: SPE_M1_76mm_L55
	{
		displayName = "76mm ZiS-5";
		class MODE_PLAYER_ALL: SPE_M7_76mm_base
        {
            displayName = "76mm ZiS-5";
        };
	};
	class SPE_M6_L53_base;
	class SPE_M6_L53;
	class JPSP_NF_45mm: SPE_M6_L53
	{
		displayName = "45 mm 20K Obr. 1932-34";
		class MODE_PLAYER_ALL: SPE_M6_L53_base
        {
            displayName = "45 mm 20K Obr. 1932-34";
        };
	};
};
