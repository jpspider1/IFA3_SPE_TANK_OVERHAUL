class CfgPatches
{
	class JPSP_JagdpanzerIV_L70_SPE_Compat
	{
		requiredaddons[] = {"JP_JagdpanzerIV70"};
		requiredversion = 1.0;
		units[] = {"JPSP_JP_PanzerIV"};
		weapons[] = {"JPSP_MG42_Veh"};
		magazines[] = {};
		skipWhenMissingDependencies = 1;
	};
};

class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
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

	// Jagdpanzer IV/70 with Panther gun
	class JP_PanzerIV70_BASE: Tank_F
	{
		//SPE
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
			SPE_Layers_Array[] = {"Background","Engine_Status","Fuel_Status","Fuel_Arrow","Speed_Arrow","Vehicle","Compass","Commander_View"};
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"ltrack","rtrack","hull","engine","turret","gun"};
				class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class engine: engine
					{
						Text = "\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\StuG_3_G\Engine.paa";
					};
					class gun: gun
					{
						Text = "\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\StuG_3_G\Gun.paa";
					};
					class hull: hull
					{
						Text = "\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\StuG_3_G\Hull.paa";
					};
					class ltrack: ltrack
					{
						Text = "\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\StuG_3_G\LTrack.paa";
					};
					class rtrack: rtrack
					{
						Text = "\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\StuG_3_G\RTrack.paa";
					};
					class turret: turret
					{
						Text = "\WW2\SPE_Core_t\Data_t\Extended_HUD\Tanks\StuG_3_G\Turret.paa";
					};
                };
            };
        };

		SPE_Cargo_Dir[] = {90,180,180,270};
		SPE_grenadeLauncherAngle[] = {"smoke_dir"};
		SPE_grenadeLauncherPositions[] = {"smoke_source"};
		SPE_Layers_Array[] = {"Background","Engine_Status","Fuel_Status","Fuel_Arrow","Speed_Arrow","Vehicle","Compass","Commander_View","Hit_Indicator","Glass"};
		//SPE_System_VehicleLoadout_AvailableAmmunition[] = {"SPE_87x_PzGr39_KWK40_AP","SPE_87x_PzGr40_KWK40_APCR","SPE_87x_SprGr34_KWK40_HE","SPE_87x_KGrRotNB_KWK40_SMK"};
		SPE_System_VehicleLoadout_AvailableAmmunition[] = {"SPE_82x_PzGr3942_KwK42_AP","SPE_82x_PzGr4042_KwK42_APCR","SPE_82x_SprGr42_KwK42_HE","SPE_250Rnd_792x57"};
		SPE_Towing_Distance = 1.2;
		SPE_Towing_OffsetX_SPE_Default = 0;
		SPE_Towing_OffsetY_SPE_Default = 0;
		SPE_WP_CargoProtected[] = {0};
		SPE_WP_DriverProtected = 1;
		//END
		scope = 1;
		scopeCurator = 1;
		author = "Luca";
		displayName = "Sdkfz. 162 (V) (BASE)";
		side = 1;
		faction = "LIB_WEHRMACHT";
		crew = "LIB_GER_tank_crew";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"JP_JagdpanzerIV70\data\textures\camo1_co.paa"};
		model = "\JP_JagdpanzerIV70\data\jagdpanzeriv70.p3d";
		picture = "\JP_JagdpanzerIV70\data\ui\jagdpanzeriv_pic_ca.paa";
		icon = "\JP_JagdpanzerIV70\data\ui\jagdpanzeriv_map_ca.paa";
		accuracy = 0.3;
		acceleration = 12;
		terrainCoef = 0.65;
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
		memoryPointsGetInCommander = "pos commander";
		memoryPointsGetInCommanderDir = "pos commander dir";
		memoryPointDriverOptics = "driverview";
		driverForceOptics = 1;
		driverOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Generic_Periscope.p3d"; // SPE
		forceHideDriver = 1;
		driverAction = "driver_hemtt";
		driverInAction = "driver_low01";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		maximumLoad = 1000;
		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = 0;
		armor = 900; //400 original - 450 is P4 - 700 is Jagdpanther - at 700 Sherman 2 shots the front on driver port
		armorStructural = 50; //3.5
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				// SPE
				armor = 1; //1
				armorComponent = "int_ammo"; // SPE P4
				explosionShielding = 0.1; //0.2
				material = -1;
				minimalHit = 0.15;
				passThrough = 0.5;
				radius = 0.15; // SPE P4
				// END
				name = "hull";
				visual = "hull";
			};
			class HitEngine: HitEngine
			{
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class LIB_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_fire";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class LIB_Engine_Fire: LIB_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class LIB_Engine_Sparks: LIB_Engine_Smoke
					{
						type = "FireSparks";
					};
					class LIB_Engine_Sounds: LIB_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
				};
				armor = -200; //0.6
				material = -1;
				armorComponent = "engine";
				name = "engine";
				visual = "-";
				passThrough = 0.2;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = -200; //0.5
				material = -1;
				armorComponent = "palivo";
				name = "palivo";
				visual = "-";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack
			{
				material = -1;
				armorComponent = "pas_L";
				name = "pas_L";
				visual = "pas_L";
				radius = 0.2;
				armor = -650; //-650
				minimalHit = 0.0738462;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				material = -1;
				armorComponent = "pas_P";
				name = "pas_P";
				visual = "pas_P";
				radius = 0.2;
				armor = -650; //-650
				minimalHit = 0.0738462;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			// Taken from Turret class
			class HitTurret
			{
				armor = 8;
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
			// END
		};
		enableManualFire = 0;
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
						defaultDisplay = "AmmoDisplay";
						forcedDisplay = "AmmoDisplay";
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
						defaultDisplay = "EmptyDisplay";
						forcedDisplay = "EmptyDisplay";
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
				// END

				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						// SPE
						//weapons[] = {"SPE_GER_CloseDefenceLauncher"};
						//magazines[] = {"SPE_5Rnd_GER_G_SPRGR_326Mag","SPE_15Rnd_GER_G_NBKS_39Mag","SPE_3Rnd_GER_G_Rsz_Orange_350Mag","SPE_4Rnd_G_FLGR_CDW"};
						// END
						body = "";
						gun = "CommanderPeriscope";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunnerType = "LIB_GER_tank_unterofficer";
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
								opticsDisplayName = "VISION"; // SPE
								useModelOptics = 1;
								gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Generic_Periscope.p3d"; // SPE
								gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.75; //0.3
								minFov = 0.75; //0.3
								maxFov = 0.75; //0.3
								memoryPointGunnerOptics = "commanderview";
								visionMode[] = {"Normal"};
								opticsFlare = 1;
								opticsDisablePeripherialVision = 1;
								cameraDir = "";
							};
							// SPE
							
							class Wide: Near
							{
								gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Generic_Periscope.p3d"; // SPE
								initAngleX = 0;
								initAngleY = 0;
								maxAngleX = 10;
								maxAngleY = 90;
								maxFov = 0.4; // 0.75
								initFov = 0.4; //0.3
								minAngleX = -10;
								minAngleY = -90;
								minFov = 0.4; //0.75
								opticsDisablePeripherialVision = 0;
								opticsDisplayName = "VISION";
								opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
								SPE_DefaultOptic = 1;
								visionMode[] = {"Normal"};
							};
							
							class Periscope: Near
							{
								camPos = "commanderview_periscope";
								gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Optics_Pak40_Scripted.p3d";
								initAngleX = 0;
								initAngleY = 0;
								initFov = 0.025;
								maxAngleX = 20;
								maxAngleY = 90;
								maxFov = 0.025;
								minAngleX = -7;
								minFov = 0.025;
								opticsDisablePeripherialVision = 0;
								opticsDisplayName = "PERISCOPE";
								OpticsFlare = 1;
								opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
								SPE_DefaultOptic = 1;
								thermalMode[] = {0,1};
								visionMode[] = {"Normal"};
							};
							// END 
						};
						turretInfoType = "SPE_SF14_Periscope_Optic"; //""
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
				// SPE
				soundElevation[] = {"",0.00316228,1};
				soundServo[] = {"\WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\Shared\turrets\Turret_Tank_RotationManual_LP",1.2,1,40,90};
				soundServoVertical[] = {"\WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\Shared\turrets\Turret_Tank_Vertical_LP.wss",1.3,1,90};
				SPE_Rotate[] = {"reticle_r",0.01};
				SPE_Sight_CannonClass = "SPE_StuK40_L48";
				//SPE_SightAmmoTypes[] = {{"SPE_PzGr40_StuK40_APCR",0},{"SPE_PzGr39_StuK40_AP",2},{"SPE_SprGr34_StuK40_HE",1},{"SPE_KGrRotNB_StuK40_SMK",1}};
				SPE_SightAmmoTypes[] = {"SPE_PzGr4042_KwK42_APCR","SPE_PzGr3942_KwK42_AP","SPE_SprGr42_KwK42_HE","SPE_250Rnd_792x57"};
				SPE_SightFormulas[] = {{"((-5.45322*(%1^2)) + (0.659279 * %1) + 0.00381782)",0.0175},{"((5.62993*(%1^2)) + (0.244311*%1) + 0.00665018)",0.192545},{"((12.3526*(%1^2)) + (0.494935*%1) + 0.004876)",0.0947}};
				SPE_Source_H[] = {};
				SPE_Source_V[] = {"SPE_Vertical","SPE_Rotate"};
				SPE_Vertical[] = {"reticle_v",0.01};
				SPE_WP_TurretProtected = 1;
				// END
				startEngine = 0;
				commanding = 2;
				proxyIndex = 1;
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				//weapons[] = {"JP_KwK42_L70"};
				//magazines[] = {"JP_30x_PzGr39_KwK42_AP","JP_10x_PzGr4042_KwK42_APCR","JP_20x_SprGr42_KwK42_HE"};
				//SPE
				weapons[] = {"SPE_KwK42_L70","JPSP_MG42_Veh"};
				magazines[] = {"SPE_43x_PzGr3942_KwK42_AP","SPE_9x_PzGr4042_KwK42_APCR","SPE_30x_SprGr42_KwK42_HE",
				"SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57"};
				//weapons[] = {"SPE_StuK40_L48","JPSP_MG42_Veh"};
				//magazines[] = {"SPE_15x_PzGr39_StuK40_AP","SPE_5x_PzGr40_StuK40_APCR","SPE_30x_SprGr34_StuK40_HE","SPE_5x_KGrRotNB_StuK40_SMK","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57"};
				// END
				gunnerType = "LIB_GER_tank_crew";
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh1";
				maxHorizontalRotSpeed = 0.25; // 0.12 - SPE Stug is 0.25
				maxVerticalRotSpeed = 0.25;
				//soundServo[] = {"\WW2\Assets_s\Vehicles\Tanks_s\SU85\SU85_Treads_1_3.wss",0.5,1,25};
				//soundServoVertical[] = {"\WW2\Assets_s\Vehicles\Tanks_s\SU85\SU85_Treads_1_3.wss",0.5,1,25};
				gunnerAction = "mbt2_slot2b_out";
				gunnerInAction = "mbt2_slot2b_in";
				forceHideGunner = 0;
				isPersonTurret = 1;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				personTurretAction = "vehicle_turnout_1";
				minOutElev = -45;
				maxOutElev = 65;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				memoryPointGunnerOptics = "usti hlavne";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				turretInfoType = "SPE_SflZF1a_Stuk40_Gunner_Optic"; //""
				usePip = 0;
				minElev = -8;
				maxElev = 15; // 12
				initElev = 0;
				minTurn = -12; // -10
				maxTurn = 12; // 10
				initTurn = 0;
				gunnerForceOptics = 1;
				//gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Pak40.p3d";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty"; // SPE
				class OpticsIn
				{
					// SPE
					class Wide
					{
						gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Generic_Periscope.p3d";
						initAngleX = 0;
						initAngleY = 0;
						initFov = 0.75;
						maxAngleX = 30;
						maxAngleY = 100;
						maxFov = 0.75;
						memoryPointGunnerOptics = "gunnerview";
						minAngleX = -30;
						minAngleY = -100;
						minFov = 0.75;
						opticsDisablePeripherialVision = 1;
						opticsDisplayName = "PERISCOPE";
						opticsPPEffects[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						visionMode[] = {"Normal"};
					};
					// END
					class Near
					{
						opticsDisplayName = "x2.5";
						useModelOptics = 1;
						//gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Pak40.p3d";
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty"; // SPE
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
						//gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\IF_Optika_Pak40.p3d";
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty"; // SPE
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
						armor = 8;
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
				weapon = "SPE_KwK42_L70";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "SPE_KwK42_L70";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"JP_JagdpanzerIV70\data\textures\camo1.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat","JP_JagdpanzerIV70\data\textures\tracks.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"};
		};
		class TextureSources
		{
			class Camo
			{
				displayName = "Camo";
				author = "Luca";
				textures[] = {"JP_JagdpanzerIV70\data\textures\camo1_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
			class Feldgrau
			{
				displayName = "Feldgrau";
				author = "Luca";
				textures[] = {"JP_JagdpanzerIV70\data\textures\camo1_feldgrau_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
		};
		textureList[] = {"Camo",0.8,"Feldgrau",0.3};
		soundGetIn[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20}; // SPE P4
		soundGetOut[] = {"\WW2\SPE_Assets_s\Vehicles\Tanks_s\PzKpfwIV_G\PzKpfwIV_G_GetInOut_1.wss",1.8,1,20}; // SPE P4
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"JPSP_Ger_Sounds\PzIV\Panzer_engine_start_INT_01.ogg","db2",1}; // SPE P4
		soundEngineOnExt[] = {"JPSP_Ger_Sounds\PzIV\Panzer_engine_start_EXT_01.ogg","db2",1.2,500}; // SPE P4
		soundEngineOffInt[] = {"JPSP_Ger_Sounds\PzIV\Panzer_engine_stop_EXT_01.ogg","db2",1}; // SPE P4
		soundEngineOffExt[] = {"JPSP_Ger_Sounds\PzIV\Panzer_engine_stop_EXT_01.ogg","db2",1,500}; // SPE P4
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Building_01",3.16228,1,200}; // SPE P4
		buildCrash1[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Building_02",3.16228,1,200}; // SPE P4
		buildCrash2[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Building_03",3.16228,1,200}; // SPE P4
		buildCrash3[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Building_04",3.16228,1,200}; // SPE P4
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Armor_01",3.16228,1,200}; // SPE P4
		ArmorCrash1[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Armor_02",3.16228,1,200}; // SPE P4
		ArmorCrash2[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Armor_03",3.16228,1,200}; // SPE P4
		ArmorCrash3[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Armor_04",3.16228,1,200}; // SPE P4
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			// SPE P4
			soundSetsExt[] = {"PIV_Engine_RMP0_EXT_SoundSet","PIV_Engine_RMP1_EXT_SoundSet","PIV_Engine_RMP2_EXT_SoundSet","PIV_Engine_RMP3_EXT_SoundSet","PIV_Engine_RMP4_EXT_SoundSet","PIV_EngineBurst_EXT_SoundSet","SPE_tank_pz4_ext_tracks_slow_soundSet","SPE_tank_pz4_ext_tracks_mid_soundSet","SPE_tank_pz4_ext_tracks_fast_soundSet","SPE_tank_pz4_ext_rumble_soundSet","SPE_tank_ext_internalFire_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet","SPE_tank_Ext_rain_light_soundSet","SPE_tank_Ext_rain_hard_soundSet","Tank_General_Collision_SoundSet"};
			soundSetsInt[] = {"PIV_Engine_RMP0_INT_SoundSet","PIV_Engine_RMP1_INT_SoundSet","PIV_Engine_RMP2_INT_SoundSet","PIV_Engine_RMP3_INT_SoundSet","PIV_Engine_RMP4_INT_SoundSet","PIV_EngineBurst_INT_SoundSet","SPE_tank_pz4_ext_tracks_slow_soundSet","SPE_tank_pz4_ext_tracks_mid_soundSet","SPE_tank_pz4_ext_tracks_fast_soundSet","SPE_tank_pz4_ext_rumble_soundSet","SPE_tank_int_internalFire_soundSet","SPE_int_breakingStrain_soundSet","SPE_tankRattling_1_soundSet","SPE_int_vehicleStrainTankHeavy_soundSet","SPE_curveStress_1_soundShader","SPE_tank_Int_rain_light_soundSet","SPE_tank_Int_rain_hard_soundSet","Tank_General_Collision_Int_SoundSet","SPE_cscReload_Int_shellEject_genericCannon_SoundSet","SPE_cscReload_Int_movementLoop_genericCannon_SoundSet","SPE_cscReload_Int_breechOpen_genericCannon_SoundSet","SPE_cscReload_Int_shellLoading_genericCannon_SoundSet"};
		};
		simulation = "tankX";
		fuelCapacity = 24;
		brakeIdleSpeed = 0.1;
		maxSpeed = 36;
		normalSpeedForwardCoef = 0.75;
		slowSpeedForwardCoef = 0.25;
		waterResistanceCoef = 0.3;
		enginePower = 545;
		maxOmega = 314.16;
		minOmega = 104.72;
		redRpm = 3000;
		idleRpm = 1000;
		peakTorque = 4950;
		torqueCurve[] = {{0.333333,1},{1,0.7}};
		thrustDelay = 0.1;
		engineMOI = 80;
		dampingRateFullThrottle = 1.4;
		dampingRateZeroThrottleClutchEngaged = 5;
		dampingRateZeroThrottleClutchDisengaged = 0.8;
		clutchStrength = 40;
		latency = 1.3;
		switchTime = 0;
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.333333,0.333333,0,0.993333,0.333333,0.983333,0.7,0.983333,0.733333,0.983333,0.733333};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-6.5,"N",0,"D2",4.4,"D3",2.2,"D4",1.5,"D5",1};
			transmissionRatios[] = {"High",11.5};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		tankTurnForce = 100;
		tankTurnForceAngMinSpd = 0.7;
		tankTurnForceAngSpd = 0.72;
		accelAidForceCoef = 0;
		accelAidForceYOffset = -8;
		accelAidForceSpd = 1.23;
		class Wheels
		{
			class L2
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				steering = 0;
				width = 0.25;
				mass = 50;
				MOI = 30;
				dampingRate = 262;
				dampingRateInAir = 262;
				dampingRateDestroyed = 520;
				maxDroop = 0.18;
				maxCompression = 0.18;
				sprungMass = 480;
				springStrength = 63500;
				springDamperRate = 8800;
				maxBrakeTorque = 5000;
				latStiffX = 2;
				latStiffY = 40.107;
				longitudinalStiffnessPerUnitGravity = 4000;
				frictionVsSlipGraph[] = {{0.0,1.0},{0.1,1.6},{0.5,0.6}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol1";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_8_axis";
				boundary = "wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_8_axis";
				boundary = "wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		class Reflectors
		{
			class LightCarHeadR01
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				intensity = 10;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 250;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
		};
		aggregateReflectors[] = {{"LightCarHeadR01"}};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
			// SPE
			class SPE_AntiFlip
			{
				EpeContact = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactEnd = "_this call SPE_AntiFlip_fnc_epeEH";
				EpeContactStart = "_this call SPE_AntiFlip_fnc_epeEH";
				init = "_this call SPE_AntiFlip_fnc_vehicleInit";
			};
			class SPE_DefaultOptic
			{
				getIn = "_this call SPE_fnc_System_Optics_setDefaultOptic";
				seatSwitched = "[_this#0,'',_this#1,(_this#0 unitTurret _this#1)] call SPE_fnc_System_Optics_setDefaultOptic";
			};
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_MaxSpeed
			{
				init = "(_this select 0) setVariable ['SPE_maxSpeed',getNumber (configFile/'CfgVehicles'/(typeOf (_this select 0))/'maxSpeed')];";
			};
			class SPE_sound_tankHitPartInteriorEventhandler
			{
				hitPart = "_this call SPE_soundFunction_interiorHit";
			};
			class SPE_System_partDestruction
			{
				init = "_this call SPE_Fnc_System_partDestruction_initEH";
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
			// END
		};
		ace_vehicle_damage_hullDetonationProb = 0.2;
		ace_vehicle_damage_turretDetonationProb = 0.1;
		ace_vehicle_damage_engineDetonationProb = 0.3;
		ace_vehicle_damage_hullFireProb = 0.2;
		ace_vehicle_damage_turretFireProb = 0.1;
		ace_vehicle_damage_engineFireProb = 0.6;
		ace_vehicle_damage_detonationDuringFireProb = 0.35;
		ace_vehicle_damage_canHaveFireRing = 0;
		ace_vehicle_damage_slatHitpoints[] = {};
		ace_vehicle_damage_eraHitpoints[] = {};
		ace_vehicle_damage_turret = "";
	};
	class JP_PanzerIV70: JP_PanzerIV70_BASE
	{
		scope = 2;
		scopeCurator = 2;
		author = "Luca";
		displayName = "Jagdpanzer IV/70 (V)";
		editorPreview = "\JP_JagdpanzerIV70\data\ui\previews\pre_jagdpanzeriv_ca.jpg";
	};

	// Jagdpanzer IV with StuG gun
	class JPSP_JP_PanzerIV_BASE: JP_PanzerIV70_BASE
	{
		author = "Luca + Jspider";
		displayName = "Sdkfz. 162 (V) (BASE)";
		SPE_System_VehicleLoadout_AvailableAmmunition[] = {"SPE_87x_PzGr39_KWK40_AP","SPE_87x_PzGr40_KWK40_APCR","SPE_87x_SprGr34_KWK40_HE","SPE_87x_KGrRotNB_KWK40_SMK"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// SPE
				soundElevation[] = {"",0.00316228,1};
				soundServo[] = {"\WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\Shared\turrets\Turret_Tank_RotationManual_LP",1.2,1,40,90};
				soundServoVertical[] = {"\WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\Shared\turrets\Turret_Tank_Vertical_LP.wss",1.3,1,90};
				SPE_Rotate[] = {"reticle_r",0.01};
				SPE_Sight_CannonClass = "SPE_StuK40_L48";
				SPE_SightAmmoTypes[] = {{"SPE_PzGr40_StuK40_APCR",0},{"SPE_PzGr39_StuK40_AP",2},{"SPE_SprGr34_StuK40_HE",1},{"SPE_KGrRotNB_StuK40_SMK",1}};
				SPE_SightFormulas[] = {{"((-5.45322*(%1^2)) + (0.659279 * %1) + 0.00381782)",0.0175},{"((5.62993*(%1^2)) + (0.244311*%1) + 0.00665018)",0.192545},{"((12.3526*(%1^2)) + (0.494935*%1) + 0.004876)",0.0947}};
				SPE_Source_H[] = {};
				SPE_Source_V[] = {"SPE_Vertical","SPE_Rotate"};
				SPE_Vertical[] = {"reticle_v",0.01};
				SPE_WP_TurretProtected = 1;
				// END

				//SPE
				weapons[] = {"SPE_StuK40_L48","JPSP_MG42_Veh"};
				magazines[] = {"SPE_30x_PzGr39_StuK40_AP","SPE_5x_PzGr40_StuK40_APCR","SPE_15x_SprGr34_StuK40_HE","SPE_5x_KGrRotNB_StuK40_SMK",
				"SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57","SPE_250Rnd_792x57"};
				// END
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SPE_StuK40_L48";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "SPE_StuK40_L48";
			};
		};
	};
	class JPSP_JP_PanzerIV: JPSP_JP_PanzerIV_BASE
	{
		scope = 2;
		scopeCurator = 2;
		author = "Luca + Jpspider";
		displayName = "Jagdpanzer IV";
		editorPreview = "\JP_JagdpanzerIV70\data\ui\previews\pre_jagdpanzeriv_ca.jpg";
	};
};

class CfgWeapons
{
	class SPE_MG42_Tripod;
	class JPSP_MG42_Veh: SPE_MG42_Tripod
	{
		//Ranging
		ballisticsComputer = 2;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 2;
		//copied from LIB_MG34_coax
		class GunParticles
		{
			class FirstEffect
			{
				directionName = "kulas";
				effectName = "RifleAssaultCloud";
				positionName = "kulas";
			};
		};	
	};
};