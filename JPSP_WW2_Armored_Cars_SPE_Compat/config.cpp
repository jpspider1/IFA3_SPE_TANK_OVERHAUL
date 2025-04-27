class CfgPatches
{
	class JPSP_WW2_Armored_Cars_SPE_Combat
	{
		units[] = {"JPSP_DaimlerMk2_Littlejohn", "JPSP_DaimlerMk2_Littlejohn_DR"};
        vehicles[] = {};
		weapons[] = {"JPSP_QOF_2_Littlejohn"};
		requiredVersion = 1;
		requiredAddons[] = {"FA_WW2_Armored_Cars"};
		ammo[] = {};
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
	class Car: LandVehicle
	{
		class HitPoints
		{
			class HitEngine;
			class HitRGlass;
			class HitLGlass;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitRFWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitLBWheel;
			class HitRBWheel;
		};
		class ViewPilot: ViewPilot{};
		class DestructionEffects
		{
			class Light1;
		};
		class EventHandlers;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
			class HitHull;
		};
		class ViewPilot: ViewPilot{};
		class NewTurret: NewTurret{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
				class ViewOptics: ViewOptics{};
				class ViewGunner: ViewGunner{};
			};
		};
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel: HitLFWheel{};
			class HitLBWheel: HitLFWheel{};
			class HitRBWheel: HitLFWheel{};
			class HitLF2Wheel: HitLFWheel{};
			class HitRF2Wheel: HitLFWheel{};
			class HitLMWheel: HitLFWheel{};
			class HitRMWheel: HitLFWheel{};
			class HitGlass1;
			class HitGlass2: HitGlass1{};
			class HitGlass3: HitGlass1{};
			class HitGlass4: HitGlass1{};
			class HitGlass5: HitGlass1{};
			class HitGlass6: HitGlass1{};
		};
		class Exhausts
		{
			class Exhaust1;
		};
		class Reflectors
		{
			class Left;
			class Right: Left{};
			class Right2: Right{};
			class Left2: Left{};
		};
	};
	class Wheeled_Apc_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints{};
		class Exhausts
		{
			class Exhaust1;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Components;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components;
						class ViewGunner;
					};
				};
			};
		};
	};
	class APC_Wheeled_01_base_F: Wheeled_Apc_F
	{
		class ViewPilot;
		class HitPoints: HitPoints{};
		class Exhausts
		{
			class Exhaust1;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Components;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components;
						class ViewGunner;
					};
				};
			};
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
					class HitLFWheel: hull {};
					class wheel_1_2: HitLFWheel {};
					class wheel_1_3: HitLFWheel {};
					class wheel_1_4: HitLFWheel {};
					class wheel_2_1: HitLFWheel {};
					class wheel_2_2: HitLFWheel {};
					class wheel_2_3: HitLFWheel {};
					class wheel_2_4: HitLFWheel {};
					class turret: turret {};
					class gun: turret {};
				};
			};
		};
	};

	class FA_DaimlerMk2_Base: APC_Wheeled_01_base_F
	{
		armor = 200; // 280 original
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				armor = 1; // 1
				explosionShielding = 1.5;
				material = -1;
				name = "karoserie";
				passThrough = 0.5; // 1
				visual = "zbytek";
				radius = 0.15; // SPE 250/1
			};

			class HitHull: HitHull
			{
				armor = 1; //1.5
				explosionShielding = 8; // 8
				material = -1;
				minimalHit = 0.1;
				passThrough = 0.5;
				name="hull";
				visual="body";
				radius = 0.01; // SPE 250/1
			};
			class HitEngine: HitEngine
			{
				armor = -200; //0.5
				explosionShielding = 0.2; //0.5
				material = -1;
				minimalHit = 0.01; // Added
				passThrough = 0.2; //0.5
				radius = 0.25; // Added
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class LIB_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_fire";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
				};
				name="engine";
				visual="";
			};
			class HitFuel: HitFuel
			{	
				// Added SPE 250/1
				armor = -200; //0.5
				explosionShielding = 0.2; //1.5
				material = -1;
				passThrough = 0.1; //0.1
				minimalHit = 0.01; // Added
				radius = 0.25;
				// END
				name="palivo";
				visual="";
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.5; //3.8
				armorComponent="wheel_1_1_hide";
				name="wheel_1_1_steering";
				visual="wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.5; //3.8
				armorComponent="wheel_1_2_hide";
				name="wheel_1_2_steering";
				visual="wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5; //3.8
				armorComponent="wheel_2_1_hide";
				name="wheel_2_1_steering";
				visual="wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.5; //3.8
				armorComponent="wheel_2_2_hide";
				name="wheel_2_2_steering";
				visual="wheel_2_2_hide";
			};
		};

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
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "CommanderPeriscope";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -5;
						maxElev = 10;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minCamElev = -90;
						maxCamElev = 90;
						weapons[] = {"FA_SmokeLauncher"};
						magazines[] = {"FA_SmokeLauncherMag_2"};
						soundServo[] = {};
						soundServoVertical[] = {};
						forceHideGunner = 0;
						gunnerType = "LIB_UK_DR_Tank_Commander";
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
							minAngleX = -65;
							maxAngleX = 85;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = 0.6;
							minFov = 0.6;
							maxFov = 0.6;
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
								memoryPointGunnerOptics = "gunnerview";
								visionMode[] = {"Normal"};
								opticsFlare = 1;
								opticsDisablePeripherialVision = 1;
								cameraDir = "";
							};
						};
						turretInfoType = "";
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints{};
						stabilizedInAxes = 0;
						maxHorizontalRotSpeed = 3;
						maxVerticalRotSpeed = 3;
						gunnerHasFlares = 0;
						viewGunnerInExternal = 1;
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"JPSP_QOF_2","FA_Besa_coax"};
				magazines[] = {"SPE_20x_Shell_37L57_M51_APC","SPE_15x_Shell_37L57_M74_AP","SPE_30x_Shell_37L57_M63_HE","SPE_15x_Shell_37L57_M2_Canister",
				"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh_1";
				maxHorizontalRotSpeed = 0.7;
				maxVerticalRotSpeed = 0.6;
				gunnerCompartments = "Compartment1";
				soundServo[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Servo.wss",1.25,1,25};
				soundServoVertical[] = {"\WW2\Assets_s\Vehicles\Tanks_s\PzKpfwVI_E\PzKpfwVI_E_Servo.wss",1.25,1,25};
				gunnerAction = "mbt2_slot2b_out";
				gunnerInAction = "Commander_MBT_01_cannon_F_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_M70D_Reticle.p3d";
				startEngine = 0;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				turretInfoType = "";
				usePip = 0;
				minElev = -10;
				maxElev = 25;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerForceOptics = 1;
				class OpticsIn
				{
					class Near
					{
						opticsDisplayName = "$STR_OpticsIn_Near_2_5x";
						useModelOptics = 1;
						gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_M70D_Reticle.p3d";
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
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor = "2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name = "vez";
						visual = "OtocVez";
					};
					class HitGun: HitGun
					{
						armor = "4*100/((18+2*9+9) + (19+2*19+19))";
						name = "zbranVelitele";
						visual = "OtocHlaven";
					};
				};
				gunnerDoor = "";
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideSparewheel
			{
				displayName = "Hide Sparewheel";
				author = "Luca";
				source = "Proxy";
				initPhase = 1;
				mass = -20;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_QOF_2";
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";

			// SPE Event Handlers
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
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
	};

	class JPSP_DaimlerMk2_Littlejohn_Base: FA_DaimlerMk2_Base
	{
		displayName = "Daimler Armoured Car Mk II (Littlejohn)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JPSP_QOF_2_Littlejohn","FA_Besa_coax"};
				magazines[] = {"SPE_12x_6pdr_Mk1T_APDS","SPE_12x_6pdr_Mk1T_APDS","SPE_12x_6pdr_Mk1T_APDS","SPE_12x_6pdr_Mk1T_APDS",
				"LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa","LIB_225Rnd_Besa"};
			};
		};
	};
	class JPSP_DaimlerMk2_Littlejohn: JPSP_DaimlerMk2_Littlejohn_Base
	{
		scope=2;
		scopeCurator=2;
		author="Luca";
		displayName="Daimler Armoured Car Mk II (Littlejohn)";
		editorPreview="\FA_WW2_Armored_Cars\ui\previews\pre_mk2_ca.jpg";
		faction="LIB_UK_ARMY";
		crew="LIB_UK_Tank_Crew";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\FA_WW2_Armored_Cars\daimlermk2\textures\hull_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="LIB_UK_Tank_Crew";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType="LIB_UK_Tank_Commander";
					};
				};
			};
		};
	};
	class JPSP_DaimlerMk2_Littlejohn_DR: JPSP_DaimlerMk2_Littlejohn_Base
	{
		scope=2;
		scopeCurator=2;
		author="Luca";
		displayName="Daimler Armoured Car Mk II (Littlejohn)";
		editorPreview="\FA_WW2_Armored_Cars\ui\previews\pre_mk2_dr_ca.jpg";
		faction="LIB_UK_DR";
		crew="LIB_UK_DR_Tank_Crew";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\FA_WW2_Armored_Cars\daimlermk2\textures\hull_camo_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="LIB_UK_DR_Tank_Crew";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType="LIB_UK_DR_Tank_Commander";
					};
				};
			};
		};
		textureList[]=
		{
			"Grey",
			0.30000001,
			"Camo",
			1,
			"GreyClean",
			0.050000001,
			"CamoClean",
			0.30000001
		};
	};

	class FA_Sdkfz231_Base: APC_Wheeled_01_base_F
	{
		armor=200; //down from 245 

		//SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","HitLFWheel","wheel_1_2","wheel_1_3","wheel_1_4","wheel_2_1","wheel_2_2","wheel_2_3","wheel_2_4","turret","gun"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\engine.paa";
                    };
                    class HitLFWheel: HitLFWheel
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_1_1.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_1_2.paa";
                    };
                    class wheel_1_3: wheel_1_3
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_1_3.paa";
                    };
                    class wheel_1_4: wheel_1_4
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_1_4.paa";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_2_1.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_2_2.paa";
                    };
                    class wheel_2_3: wheel_2_3
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_2_3.paa";
                    };
                    class wheel_2_4: wheel_2_4
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\wheel_2_4.paa";
                    };
					class turret: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\turret.paa";
					};
					class gun: turret
					{
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\SdKfz234_1\gun.paa";
					};
                };
            };
        };

		class HitPoints: HitPoints
		{
			// Added
			class HitBody: HitBody
			{
				armor = 1.5; //1
				explosionShielding = 1.5;
				material = -1; //1
				name = "karoserie";
				passThrough = 0; //0
				visual = "zbytek";
				minimalHit = 0.01; // SPE 250/1
				radius = 0.15; // SPE 250/1
			};
			// END

			class HitHull: HitHull
			{
				name = "hull";
				visual = "body";
				// SPE 250/1
				armor = 1.5; //1.5
				explosionShielding = 0.2; //0.2
				material = -1;
				minimalHit = 0.15;
				passThrough = 0.5;
				radius = 0.01;
				// END
			};
			class HitEngine: HitEngine
			{
				// Added SPE 250/1
				armor = -200;
				explosionShielding = 0.2;
				material = -1;
				minimalHit = 0.01;
				passThrough = 0.2;
				radius = 0.25;
				// END
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
					// Added
					class JPSP_Engine_Sounds: LIB_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class JPSP_Engine_Sparks: LIB_Engine_Smoke
					{
						type = "FireSparks";
					};
					// END
				};
				name = "engine";
				visual = "";
			};
			class HitFuel: HitFuel
			{
				// Added SPE 250/1
				armor = -200; //0.5
				explosionShielding = 0.2; //1.5
				material = -1;
				passThrough = 0.1; //0.1
				minimalHit = 0.01; // Added
				radius = 0.25;
				// END
				name = "palivo";
				visual = "";
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_1_1_hide";
				name = "wheel_1_1_steering";
				visual = "wheel_1_1_hide";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_1_2_hide";
				name = "wheel_1_2_steering";
				visual = "wheel_1_2_hide";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_2_1_hide";
				name = "wheel_2_1_steering";
				visual = "wheel_2_1_hide";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_2_2_hide";
				name = "wheel_2_2_steering";
				visual = "wheel_2_2_hide";
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_1_3_hide";
				name = "wheel_1_3_steering";
				visual = "wheel_1_3_hide";
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_2_3_hide";
				name = "wheel_2_3_steering";
				visual = "wheel_2_3_hide";
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_1_4_hide";
				name = "wheel_1_4_steering";
				visual = "wheel_1_4_hide";
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5; //3.8
				armorComponent = "wheel_2_4_hide";
				name = "wheel_2_4_steering";
				visual = "wheel_2_4_hide";
			};
		};
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
				//SPE Panzer III L Values
				//Experimental
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				soundElevation[] = {"",0.00316228,1};
				soundServo[] = {"\WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\Shared\turrets\Turret_Tank_RotationManual_LP",1.2,1,40,90};
				soundServoVertical[] = {"\WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\Shared\turrets\Turret_Tank_Vertical_LP.wss",1.3,1,90};
				SPE_Rotate[] = {"reticle_r",0.005};
				SPE_SightAmmoTypes[] = {"23pzd_10x_PzGr40_Flak_38_APCR_T","23pzd_10x_PzGr_Flak_38_AP_T","23pzd_10x_SprGr_Flak_38","SPE_150rnd_MG34"};
				SPE_SightFormulas[] = {"(0.596952*(%1^2) + (0.166247*%1) - 0.00710369)","((0.141687*(%1^2)) + (0.286384*%1) - 0.0131232)","((-0.148747*(%1^2)) + (1.19296*%1) - 0.0249271)","((6.0861*(%1^2)) - (0.355454*%1) + 0.0119158)"};
				SPE_SightRotations[] = {{-14.2,113.55},{-14.2,113.55},{171.9,151},{171.9,151}};
				SPE_Source_H[] = {};
				SPE_Source_V[] = {"SPE_Vertical","SPE_Rotate"};
				SPE_Vertical[] = {"reticle_v",0.005};
				turretInfoType = "SPE_TZF5E_Gunner_Optic";
				// END SPE Values -----
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "mainTurret";
						gun = "obsGun";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
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
								memoryPointGunnerOptics = "gunnerview";
								visionMode[] = {"Normal"};
								opticsFlare = 1;
								opticsDisablePeripherialVision = 1;
								cameraDir = "";
							};
							
							//SPE Panther Periscope
							class Periscope: ViewOptics
							{
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
								gunnerOpticsModel = "\WW2\SPE_Assets_m\Vehicles\Optics_m\SPE_Optics_Pak40_Scripted.p3d";
								initAngleX = 0;
								initAngleY = 0;
								initFov = 0.025;
								maxAngleX = 30;
								maxAngleY = 100;
								maxFov = 0.025;
								maxMoveX = 0;
								maxMoveY = 0;
								maxMoveZ = 0;
								minAngleX = -30;
								minAngleY = -100;
								minFov = 0.025;
								minMoveX = 0;
								minMoveY = 0;
								minMoveZ = 0;
								opticsDisplayName = "PERISCOPE";
								speedZoomMaxFOV = 0;
								speedZoomMaxSpeed = 1e+10;
								visionMode[] = {"Normal"};
							};
						};
						turretInfoType = "SPE_SF14_Periscope_Optic"; // SPE Panther periscope
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints{};
						stabilizedInAxes = 0;
						maxHorizontalRotSpeed = 1.2;
						maxVerticalRotSpeed = 1.2;
						gunnerHasFlares = 0;
						viewGunnerInExternal = 1;
						gunnerCompartments = "Compartment1";
					};
				};

				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"JPSP_KwK_30_L55","SPE_MG34_coax"};
				magazines[] = {"JPSP_10x_PzGr40_Flak_38_APCR_T","JPSP_10x_PzGr40_Flak_38_APCR_T","JPSP_10x_PzGr40_Flak_38_APCR_T",
				"JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T","JPSP_10x_PzGr_Flak_38_AP_T",
				"JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38","JPSP_10x_SprGr_Flak_38",
				"SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34","SPE_150rnd_MG34", "SPE_150rnd_MG34", "SPE_150rnd_MG34", "SPE_150rnd_MG34"};
				memoryPointGun = "usti hlavne1";
				selectionFireAnim = "zasleh_1";
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.7;
				forceHideGunner = 1;
				gunnerAction = "crew_tank01_out";
				gunnerInAction = "crew_tank01_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				memoryPointGunnerOptics = "gunnerview";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				usePip = 0;
				minElev = -10;
				maxElev = 25;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerForceOptics = 1;
				personTurretAction = "vehicle_turnout_1";
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.22;
						minFov=0.22;
						maxFov=0.22;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						opticsPPEffects[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
						OpticsFlare=1;
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
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor = "2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19))";
						name = "vez";
						visual = "OtocVez";
					};
					class HitGun: HitGun
					{
						armor = "4*100/((18+2*9+9) + (19+2*19+19))";
						name = "zbranVelitele";
						visual = "OtocHlaven";
					};
				};
				gunnerDoor = "";
				gunnerCompartments = "Compartment1";
				startEngine = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"FA_WW2_Armored_Cars\sdkfz231\textures\hull.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat","FA_WW2_Armored_Cars\sdkfz231\textures\wheels.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat","A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"};
		};
		class TextureSources
		{
			class Camo
			{
				displayName = "Camo";
				author = "Luca";
				textures[] = {"FA_WW2_Armored_Cars\sdkfz231\textures\hull_camo_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
			class CamoArid
			{
				displayName = "Camo (Arid)";
				author = "Luca";
				textures[] = {"FA_WW2_Armored_Cars\sdkfz231\textures\hull_camo_desert_co.paa"};
				factions[] = {"LIB_WEHRMACHT","LIB_DAK"};
			};
			class Feldgrau
			{
				displayName = "Feldgrau";
				author = "Luca";
				textures[] = {"FA_WW2_Armored_Cars\sdkfz231\textures\hull_feldgrau_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
			// 10thSS
			class 10ssCamo
			{
				displayName = "[10SS] Camo";
				author = "Luca + Jpspider";
				textures[] = {"\JPSP_WW2_Armored_Cars_SPE_Compat\data\10ss_hull_camo_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
			class 10ssCamo_132
			{
				displayName = "[10SS] Camo 132";
				author = "Luca + Jpspider";
				textures[] = {"\JPSP_WW2_Armored_Cars_SPE_Compat\data\10ss_hull_camo_132_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
			class 10ssCamo_226
			{
				displayName = "[10SS] Camo 226";
				author = "Luca + Jpspider";
				textures[] = {"\JPSP_WW2_Armored_Cars_SPE_Compat\data\10ss_hull_camo_226_co.paa"};
				factions[] = {"LIB_WEHRMACHT"};
			};
		};
		textureList[] = {"Feldgrau",0.8,"Camo",0.85,"CamoArid",0.1};
		class AnimationSources: AnimationSources
		{
			class HideShield
			{
				displayName = "Hide Shield";
				author = "Luca";
				source = "Proxy";
				initPhase = 1;
				mass = 0;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "JPSP_KwK_30_L55";
			};
			class muzzle_rot1
			{
				source = "ammorandom";
				weapon = "SPE_MG34_coax";
			};
			class hide_decal_number_2
			{
				displayName = "Show Number (Turret/2)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_8",0,"hide_decal_number_22",0,"hide_decal_number_28",0,"hide_decal_number_82",0,"hide_decal_number_88",0};
			};
			class hide_decal_number_8
			{
				displayName = "Show Number (Turret/8)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_2",0,"hide_decal_number_22",0,"hide_decal_number_28",0,"hide_decal_number_82",0,"hide_decal_number_88",0};
			};
			class hide_decal_number_22
			{
				displayName = "Show Number (Turret/22)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_2",0,"hide_decal_number_8",0,"hide_decal_number_28",0,"hide_decal_number_82",0,"hide_decal_number_88",0};
			};
			class hide_decal_number_28
			{
				displayName = "Show Number (Turret/28)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_2",0,"hide_decal_number_8",0,"hide_decal_number_22",0,"hide_decal_number_82",0,"hide_decal_number_88",0};
			};
			class hide_decal_number_82
			{
				displayName = "Show Number (Turret/82)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_2",0,"hide_decal_number_8",0,"hide_decal_number_22",0,"hide_decal_number_28",0,"hide_decal_number_88",0};
			};
			class hide_decal_number_88
			{
				displayName = "Show Number (Turret/88)";
				author = "Luca";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -0.1;
				forceAnimatePhase = 1;
				forceAnimate[] = {"hide_decal_number_2",0,"hide_decal_number_8",0,"hide_decal_number_22",0,"hide_decal_number_28",0,"hide_decal_number_82",0};
			};
		};
		animationList[] = {"hide_decal_number_2",0.9,"hide_decal_number_8",0.9,"hide_decal_number_22",0.9,"hide_decal_number_28",0.9,"hide_decal_number_82",0.9,"hide_decal_number_88",0.9,"HideShield",1};
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
			class SPE_DestructionEffects_Fix
			{
				engine = "_this call SPE_Fnc_engineCheckDamage";
			};
			class SPE_MaxSpeed
			{
				init = "(_this select 0) setVariable ['SPE_maxSpeed',getNumber (configFile/'CfgVehicles'/(typeOf (_this select 0))/'maxSpeed')];";
			};
			class SPE_System_Tanks_Damage
			{
				getOut = "_this call SPE_Fnc_System_Tanks_getOutEH";
				init = "_this call SPE_Fnc_System_Tanks_initEH";
				killed = "_this call SPE_Fnc_System_Tanks_killed_EH";
			};
			class SPE_VehicleTypeCaching
			{
				init = "(_this select 0) setVariable ['SPE_isTank',true];";
			};
		};
		ace_vehicle_damage_hullDetonationProb = 0.2;
		ace_vehicle_damage_turretDetonationProb = 0.2;
		ace_vehicle_damage_engineDetonationProb = 0.2;
		ace_vehicle_damage_hullFireProb = 0.4;
		ace_vehicle_damage_turretFireProb = 0.2;
		ace_vehicle_damage_engineFireProb = 0.4;
		ace_vehicle_damage_detonationDuringFireProb = 0.3;
		ace_vehicle_damage_canHaveFireRing = 0;
		ace_vehicle_damage_slatHitpoints[] = {};
		ace_vehicle_damage_eraHitpoints[] = {};
		ace_vehicle_damage_turret = "";
	};
};
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"