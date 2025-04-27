#define _ARMA_

class CfgPatches
{
	class JPSP_WW2_Tanks_SPE_Compat
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"JPSP_IFA_SPE_Tank_Overhaul","FA_WW2_Tanks"};
		ammo[] = {};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
    //inherit start
	class All
	{
		class ViewCargo;
		class ViewOptics;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class ViewGunner;
			class ViewOptics;
			class HitPoints
			{
				class HitTurret;
				class HitGun;
			};
		};
		class ViewPilot;
		class ViewCargo;
		class ViewOptics;
		class CargoTurret: NewTurret
		{
			class ViewGunner: ViewCargo{};
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
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Reflectors
		{
			class Left;
			class Right: Left{};
			class Right2: Right{};
			class Left2: Left{};
		};
	};
    //inherit end

	class FA_T26_BASE: Tank_F
	{
		class EventHandlers: EventHandlers
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

	class FA_Pz38t_BASE: Tank_F
	{
        class Sounds
        {
        soundSetsExt[] = {"PanzerII_Engine_RMP0_EXT_SoundSet","PanzerII_Engine_RMP1_EXT_SoundSet","PanzerII_Engine_RMP2_EXT_SoundSet","PanzerII_Engine_RMP3_EXT_SoundSet","PanzerII_Engine_RMP4_EXT_SoundSet","SPE_tank_stug_exhaust_ext_idle_SoundSet","SPE_tank_stug_exhaust_ext_slow_SoundSet","SPE_tank_stug_exhaust_ext_mid_SoundSet","SPE_tank_stug_exhaust_ext_fast_SoundSet","SPE_tank_stug_dist_slow_SoundSet","SPE_tank_stug_dist_mid_SoundSet","SPE_tank_stug_dist_high_SoundSet","SPE_tank_stug_ext_tracks_slow_soundSet","SPE_tank_stug_ext_tracks_mid_soundSet","SPE_tank_stug_ext_tracks_fast_soundSet","SPE_tank_stug_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
		soundSetsInt[] = {"PanzerII_Engine_RMP0_INT_SoundSet","PanzerII_Engine_RMP1_INT_SoundSet","PanzerII_Engine_RMP2_INT_SoundSet","PanzerII_Engine_RMP3_INT_SoundSet","PanzerII_Engine_RMP4_INT_SoundSet","SPE_tank_stug_exhaust_int_idle_SoundSet","SPE_tank_stug_exhaust_int_slow_SoundSet","SPE_tank_stug_exhaust_int_mid_SoundSet","SPE_tank_stug_exhaust_int_fast_SoundSet","SPE_tank_stug_ext_tracks_slow_soundSet","SPE_tank_stug_ext_tracks_mid_soundSet","SPE_tank_stug_ext_tracks_fast_soundSet","SPE_tank_stug_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet"};
		};

		class EventHandlers: EventHandlers
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

	class FA_M26_BASE: Tank_F
	{
		//M4A3 SPE Sherman
        class Sounds
        {
            soundSetsExt[] = {"SPE_tank_m4a3_ext_onLoad_rpm0_soundSet","SPE_tank_m4a3_ext_onLoad_rpm1_soundSet","SPE_tank_m4a3_ext_onLoad_rpm2_soundSet","SPE_tank_m4a3_ext_onLoad_rpm3_soundSet","SPE_tank_m4a3_ext_onLoad_rpm4_soundSet","SPE_tank_m4a3_ext_onLoad_rpm5_soundSet","SPE_tank_m4a3_ext_onLoad_rpm6_soundSet","SPE_tank_m4a3_ext_onLoad_rpm7_soundSet","SPE_tank_m4a3_ext_onLoad_rpm8_soundSet","SPE_tank_m4a3_ext_onLoad_rpm9_soundSet","SPE_tank_m4a3_ext_onLoad_rpm10_soundSet","SPE_tank_m4a3_ext_offLoad_rpm0_soundSet","SPE_tank_m4a3_ext_offLoad_rpm1_soundSet","SPE_tank_m4a3_ext_offLoad_rpm2_soundSet","SPE_tank_m4a3_ext_offLoad_rpm3_soundSet","SPE_tank_m4a3_ext_offLoad_rpm4_soundSet","SPE_tank_m4a3_ext_offLoad_rpm5_soundSet","SPE_tank_m4a3_ext_offLoad_rpm6_soundSet","SPE_tank_m4a3_ext_offLoad_rpm7_soundSet","SPE_tank_m4a3_ext_offLoad_rpm8_soundSet","SPE_tank_m4a3_ext_offLoad_rpm9_soundSet","SPE_tank_m4a3_ext_offLoad_rpm10_soundSet","SPE_tank_m4a3_ext_tracks_slow_soundSet","SPE_tank_m4a3_ext_tracks_mid_soundSet","SPE_tank_m4a3_ext_tracks_fast_soundSet","SPE_tank_m4a3_ext_rumble_soundSet","SPE_tank_m4a3_ext_acceleration_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
			soundSetsInt[] = {"SPE_tank_m4a3_int_onLoad_rpm0_soundSet","SPE_tank_m4a3_int_onLoad_rpm1_soundSet","SPE_tank_m4a3_int_onLoad_rpm2_soundSet","SPE_tank_m4a3_int_onLoad_rpm3_soundSet","SPE_tank_m4a3_int_onLoad_rpm4_soundSet","SPE_tank_m4a3_int_onLoad_rpm5_soundSet","SPE_tank_m4a3_int_onLoad_rpm6_soundSet","SPE_tank_m4a3_int_onLoad_rpm7_soundSet","SPE_tank_m4a3_int_onLoad_rpm8_soundSet","SPE_tank_m4a3_int_onLoad_rpm9_soundSet","SPE_tank_m4a3_int_onLoad_rpm10_soundSet","SPE_tank_m4a3_int_offLoad_rpm0_soundSet","SPE_tank_m4a3_int_offLoad_rpm1_soundSet","SPE_tank_m4a3_int_offLoad_rpm2_soundSet","SPE_tank_m4a3_int_offLoad_rpm3_soundSet","SPE_tank_m4a3_int_offLoad_rpm4_soundSet","SPE_tank_m4a3_int_offLoad_rpm5_soundSet","SPE_tank_m4a3_int_offLoad_rpm6_soundSet","SPE_tank_m4a3_int_offLoad_rpm7_soundSet","SPE_tank_m4a3_int_offLoad_rpm8_soundSet","SPE_tank_m4a3_int_offLoad_rpm9_soundSet","SPE_tank_m4a3_int_offLoad_rpm10_soundSet","SPE_tank_m4a3_int_acceleration_soundSet","SPE_tank_m4a3_ext_tracks_slow_soundSet","SPE_tank_m4a3_ext_tracks_mid_soundSet","SPE_tank_m4a3_ext_tracks_fast_soundSet","SPE_tank_m4a3_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet"};
		};

		class EventHandlers: EventHandlers
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

	class FA_Panzer2_Base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "";
						gun = "CommanderPeriscope";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunnerType = "LIB_US_Tank_Sergeant";
						minElev = -5;
						maxElev = 10;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = -90;
						maxCamElev = 90;
						weapons[] = {};
						magazines[] = {};
						soundServo[] = {};
						soundServoVertical[] = {};
						forceHideGunner = 0;
						gunnerAction = "Commander_MBT_01_cannon_F_out";
						gunnerInAction = "Commander_MBT_01_cannon_F_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						isPersonTurret = 1;
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						personTurretAction = "vehicle_turnout_2";
						minOutElev = -45;
						maxOutElev = 65;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						gunnerForceOptics = 1;
						class ViewGunner: ViewGunner{};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.3;
							maxFov = 0.3;
							visionMode[] = {"Normal"};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Near
							{
								opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
								useModelOptics = 1;
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
								gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.3;
								minFov = 0.3;
								maxFov = 0.3;
								memoryPointGunnerOptics = "commanderview";
								visionMode[] = {"Normal"};
								opticsFlare = 1;
								opticsDisablePeripherialVision = 1;
								cameraDir = "";
							};
						};
						turretInfoType = "";
						showCrewAim = 1;
						startEngine = 0;
						commanding = 3;
						stabilizedInAxes = 0;
						maxHorizontalRotSpeed = 4;
						maxVerticalRotSpeed = 4;
						gunnerHasFlares = 0;
						viewGunnerInExternal = 1;
						class HitPoints{};
					};
				};
				startEngine = 0;
				commanding = 2;
				proxyIndex = 1;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"FA_90mm_M3","FA_M1919A4_coax_T"};
				magazines[] = {"FA_40x_M77_AP","FA_20x_M71_HE","FA_10x_M82_APC","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4"};
				gunnerType = "LIB_US_tank_crew";
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh1";
				maxHorizontalRotSpeed = 0.18;
				maxVerticalRotSpeed = 0.25;
				soundServo[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Servo.wss",1.25,1,25};
				soundServoVertical[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Servo.wss",1.25,1,25};
				gunnerAction = "mbt2_slot2b_out";
				gunnerInAction = "mbt2_slot2b_in";
				forceHideGunner = 1;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				memoryPointGunnerOptics = "usti hlavne";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				turretInfoType = "";
				usePip = 0;
				minElev = -10;
				maxElev = 20;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_M70D_Reticle.p3d";
				personTurretAction = "vehicle_turnout_1";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.3;
					maxFov = 0.3;
					visionMode[] = {"Normal"};
				};
				class OpticsIn
				{
					class Near
					{
						opticsDisplayName = "x2.5";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_M70D_Reticle.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
					class Far
					{
						opticsDisplayName = "x5";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_M70D_Reticle.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.0625;
						minFov = 0.0625;
						maxFov = 0.0625;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 15;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {};
				};
				gunnerDoor = "";
				class HitPoints
				{
					class HitTurret
					{
						armor = 2;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
			class HullTurret: NewTurret
			{
				startEngine = 0;
				proxyIndex = 2;
				body = "ObsATurret";
				gun = "ObsAGun";
				gunBeg = "usti hlavne2";
				gunEnd = "konec hlavne2";
				animationSourceBody = "ObsATurret";
				animationSourceGun = "ObsAGun";
				gunnerName = "Radio Operator";
				weapons[] = {"FA_M1919A4_hull_T"};
				magazines[] = {"LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4","LIB_250Rnd_M1919A4"};
				gunnerType = "LIB_US_tank_crew";
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				maxHorizontalRotSpeed = 0.75;
				maxVerticalRotSpeed = 0.65;
				soundServo[] = {};
				soundServoVertical[] = {};
				gunnerAction = "mbt2_slot2b_out";
				gunnerInAction = "mbt2_slot2b_in";
				forceHideGunner = 1;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				primaryGunner = 0;
				commanding = -1;
				memoryPointGunnerOptics = "gunnerview1";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				turretInfoType = "";
				usePip = 0;
				minElev = 0;
				maxElev = 15;
				initElev = 0;
				minTurn = -22;
				maxTurn = 22;
				initTurn = 0;
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_M19A1_Sight.p3d";
				personTurretAction = "vehicle_turnout_1";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.3;
					maxFov = 0.3;
					visionMode[] = {"Normal"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 15;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {};
				};
				gunnerDoor = "";
				class HitPoints{};
			};
		};
        class Sounds
        {
        soundSetsExt[] = {"PanzerII_Engine_RMP0_EXT_SoundSet","PanzerII_Engine_RMP1_EXT_SoundSet","PanzerII_Engine_RMP2_EXT_SoundSet","PanzerII_Engine_RMP3_EXT_SoundSet","PanzerII_Engine_RMP4_EXT_SoundSet","SPE_tank_stug_exhaust_ext_idle_SoundSet","SPE_tank_stug_exhaust_ext_slow_SoundSet","SPE_tank_stug_exhaust_ext_mid_SoundSet","SPE_tank_stug_exhaust_ext_fast_SoundSet","SPE_tank_stug_dist_slow_SoundSet","SPE_tank_stug_dist_mid_SoundSet","SPE_tank_stug_dist_high_SoundSet","SPE_tank_stug_ext_tracks_slow_soundSet","SPE_tank_stug_ext_tracks_mid_soundSet","SPE_tank_stug_ext_tracks_fast_soundSet","SPE_tank_stug_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
		soundSetsInt[] = {"PanzerII_Engine_RMP0_INT_SoundSet","PanzerII_Engine_RMP1_INT_SoundSet","PanzerII_Engine_RMP2_INT_SoundSet","PanzerII_Engine_RMP3_INT_SoundSet","PanzerII_Engine_RMP4_INT_SoundSet","SPE_tank_stug_exhaust_int_idle_SoundSet","SPE_tank_stug_exhaust_int_slow_SoundSet","SPE_tank_stug_exhaust_int_mid_SoundSet","SPE_tank_stug_exhaust_int_fast_SoundSet","SPE_tank_stug_ext_tracks_slow_soundSet","SPE_tank_stug_ext_tracks_mid_soundSet","SPE_tank_stug_ext_tracks_fast_soundSet","SPE_tank_stug_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet"};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets{};
				startEngine = 0;
				commanding = 2;
				proxyIndex = 1;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"JPSP_KwK_30_L55","FA_MG34_coax_T"};
				magazines[] = {
					"JPSP_10x_PzGr40_Flak_38_APCR_T","JPSP_10x_PzGr40_Flak_38_APCR_T",
					"JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T",
					"JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38",
					"LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34","LIB_150rnd_MG34"};
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh1";
				maxHorizontalRotSpeed = 0.75;
				maxVerticalRotSpeed = 0.65;
				soundServo[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Servo.wss",1.25,1,25};
				soundServoVertical[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Servo.wss",1.25,1,25};
				forceHideGunner = 0;
				gunnerAction = "Commander_MBT_01_cannon_F_out";
				gunnerInAction = "Commander_MBT_01_cannon_F_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				memoryPointGunnerOptics = "usti hlavne";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				turretInfoType = "";
				usePip = 0;
				minElev = -10;
				maxElev = 20;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_TZF3a.p3d";
				isPersonTurret = 1;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				personTurretAction = "vehicle_turnout_2";
				minOutElev = -45;
				maxOutElev = 65;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				class OpticsIn
				{
					class Near
					{
						opticsDisplayName = "x2.5";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\WW2_TZF3a.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						memoryPointGunnerOptics = "gunnerview";
						visionMode[] = {"Normal"};
						opticsFlare = 1;
						opticsDisablePeripherialVision = 1;
						cameraDir = "";
					};
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.3;
					maxFov = 0.3;
					visionMode[] = {"Normal"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 15;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {};
				};
				gunnerDoor = "";
				class HitPoints
				{
					class HitTurret
					{
						armor = 2;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_KwK_30_L55";
			};
			class muzzle_rot1
			{
				source = "ammorandom";
				weapon = "FA_MG34_coax_T";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "JPSP_KwK_30_L55";
			};
			class hide_decal_front
			{
				displayName = "Hide Decal (Front)";
				author = "Luca";
				source = "user";
				initPhase = 1;
				animPeriod = 1;
				mass = -1;
			};
			class hide_decal_left
			{
				displayName = "Hide Decal (Left)";
				author = "Luca";
				source = "user";
				initPhase = 1;
				animPeriod = 1;
				mass = -1;
			};
			class hide_decal_rear
			{
				displayName = "Hide Decal (Rear)";
				author = "Luca";
				source = "user";
				initPhase = 1;
				animPeriod = 1;
				mass = -1;
			};
			class hide_decal_right
			{
				displayName = "Hide Decal (Right)";
				author = "Luca";
				source = "user";
				initPhase = 1;
				animPeriod = 1;
				mass = -1;
			};
			class hide_decal_number
			{
				displayName = "Show Number (Turret/207)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_7",0,"hide_decal_number_20",0,"hide_decal_number_72",0,"hide_decal_number_702",0};
			};
			class hide_decal_number_7
			{
				displayName = "Show Number (Turret/7)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number",0,"hide_decal_number_20",0,"hide_decal_number_72",0,"hide_decal_number_702",0};
			};
			class hide_decal_number_20
			{
				displayName = "Show Number (Turret/20)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number",0,"hide_decal_number_7",0,"hide_decal_number_72",0,"hide_decal_number_702",0};
			};
			class hide_decal_number_72
			{
				displayName = "Show Number (Turret/72)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number",0,"hide_decal_number_7",0,"hide_decal_number_20",0,"hide_decal_number_702",0};
			};
			class hide_decal_number_702
			{
				displayName = "Show Number (Turret/702)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number",0,"hide_decal_number_7",0,"hide_decal_number_20",0,"hide_decal_number_72",0};
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

	class FA_KV1_BASE: Tank_F
	{
		class EventHandlers: EventHandlers
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

	class FA_ValentineMk3_BASE: Tank_F
	{
		class EventHandlers: EventHandlers
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

#include "CfgSoundSets.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"