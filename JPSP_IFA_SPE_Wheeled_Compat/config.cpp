#define _ARMA_

class CfgPatches
{
	class JPSP_IFA_SPE_Wheeled_Compat
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","WW2_Core_c_WW2_Core_c","WW2_Assets_c_Weapons_InfantryWeapons_c","WW2_Assets_c_Vehicles_Weapons_c", "WW2_Assets_c_Vehicles_Tanks_c", "ww2_assets_c_vehicles_wheeledapc_c","WW2_Assets_c_Vehicles_Wheeled_c_Scout_M3"};
		ammo[] = {};
	};
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
	class Truck_F: Car_F
	{
		class HitPoints: HitPoints{};
		class Exhausts
		{
			class Exhaust1;
		};
		class Turrets: Turrets{};
	};
	class LIB_Truck_base: Truck_F
	{
		class ViewPilot: ViewPilot{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret{};
					class HitGun: HitGun{};
				};
			};
		};
		class CargoTurret: CargoTurret{};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody{};
			class HitEngine: HitEngine{};
			class HitFuel: HitFuel{};
			class HitLFWheel: HitLFWheel{};
			class HitRFWheel: HitRFWheel{};
			class HitLF2Wheel: HitLF2Wheel{};
			class HitRF2Wheel: HitRF2Wheel{};
			class HitLMWheel: HitLMWheel{};
			class HitRMWheel: HitRMWheel{};
			class HitLBWheel: HitLBWheel{};
			class HitRBWheel: HitRBWheel{};
			class HitRGlass: HitRGlass{};
			class HitLGlass: HitLGlass{};
			class HitLFTire_0;
			class HitLFTire_1: HitLFTire_0{};
			class HitLFTire_2: HitLFTire_0{};
			class HitLFTire_3: HitLFTire_0{};
			class HitLBTire_0;
			class HitLBTire_1: HitLBTire_0{};
			class HitLBTire_2: HitLBTire_0{};
			class HitLBTire_3: HitLBTire_0{};
			class HitRFTire_0;
			class HitRFTire_1: HitRFTire_0{};
			class HitRFTire_2: HitRFTire_0{};
			class HitRFTire_3: HitRFTire_0{};
			class HitRBTire_0;
			class HitRBTire_1: HitRBTire_0{};
			class HitRBTire_2: HitRBTire_0{};
			class HitRBTire_3: HitRBTire_0{};
			class left_door;
			class right_door: left_door{};
		};
		class AnimationSources: AnimationSources
		{
			class HitLBWheel: HitLBWheel{};
			class HitRBWheel: HitRBWheel{};
			class HitLF2Wheel: HitLF2Wheel{};
			class HitRF2Wheel: HitRF2Wheel{};
			class HitLFWheel: HitLFWheel{};
			class HitLMWheel: HitLMWheel{};
			class HitRFWheel: HitRFWheel{};
			class HitRMWheel: HitRMWheel{};
			class HitGlass1;
			class HitGlass2: HitGlass1{};
			class HitGlass3: HitGlass1{};
			class HitGlass4: HitGlass1{};
			class HitGlass5;
			class HitGlass6;
			class Door_1_1_rotate;
			class Door_2_1_rotate: Door_1_1_rotate{};
			class contact_hull_translate;
			class wheel_1_1_hide;
			class wheel_1_2_hide: wheel_1_1_hide{};
			class wheel_2_1_hide: wheel_1_1_hide{};
			class wheel_2_2_hide: wheel_1_1_hide{};
			class wheel_1_1_Damage_Destruct: wheel_1_1_hide{};
			class wheel_1_2_Damage_Destruct: wheel_1_1_hide{};
			class wheel_2_1_Damage_Destruct: wheel_1_1_hide{};
			class wheel_2_2_Damage_Destruct: wheel_1_1_hide{};
			class door_1_1_hide: wheel_1_1_hide{};
			class door_2_1_hide: wheel_1_1_hide{};
		};
		class UserActions
		{
			class Towing;
			class Drop;
		};
		class Reflectors
		{
			class Left;
			class Right: Left{};
		};
		class Exhausts
		{
			class Exhaust_left;
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

	class LIB_Scout_M3_base: LIB_Truck_base
	{
		//SPE hud
		unitInfoType = "RscUnitInfoTank_SPE";
		class SPE_Veh_HudLayers: SPE_Veh_HudLayers
        {
            class Vehicle: Vehicle
            {
                SPE_Layers_Array[] = {"hull","engine","wheel_1_1","wheel_1_2","wheel_2_1","wheel_2_2"};
                class SPE_Veh_HudLayers: SPE_Veh_HudLayers
                {
                    class hull: hull
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\Scout_M3\hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\Scout_M3\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\Scout_M3\ltwheel.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\Scout_M3\ldwheel.paa";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\Scout_M3\rtwheel.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\Trucks\Scout_M3\rdwheel.paa";
                    };
                };
            };
        };

		class AnimationSources: AnimationSources
		{
			class wing_1_1_hide
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class wing_2_1_hide: wing_1_1_hide{};
			class destruct_shield_hide: wing_1_1_hide{};
			class hood_1_1_hide: wing_1_1_hide{};
			class hood_2_1_hide: wing_1_1_hide{};
			class front_bumper_hide: wing_1_1_hide{};
			class rear_bumper_hide: wing_1_1_hide{};
			class shield_rotate
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class iron_sight_rotate: shield_rotate{};
			class shield_column_hide: wing_1_1_hide{};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SPE_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SPE_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SPE_M2";
				sourceAddress = "mirror";
			};
			class scope_rotation
			{
				source = "user";
				animperiod = 2;
				angle0 = 0;
				angle1 = "rad -4.02";
			};
			class scope_translation
			{
				source = "user";
				animperiod = 2;
			};
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//weapons[] = {"LIB_M2"};
				weapons[] = {"SPE_M2"};
				//magazines[] = {"LIB_100Rnd_127x99_M2","LIB_100Rnd_127x99_M2","LIB_100Rnd_127x99_M2","LIB_100Rnd_127x99_M2","LIB_100Rnd_127x99_M2"};
				magazines[] = {"SPE_100Rnd_127x99_M2","SPE_100Rnd_127x99_M2","SPE_100Rnd_127x99_M2","SPE_100Rnd_127x99_M2","SPE_100Rnd_127x99_M2","SPE_100Rnd_127x99_M2","SPE_100Rnd_127x99_M2"};
				gunnerOpticsModel = "\WW2\Assets_m\Weapons\Optics_m\IF_Optika_Empty.p3d";
				outGunnerMayFire = 1;
				memoryPointGun = "usti_hlavne";
				memoryPointGunnerOutOptics = "gunnerview";
				gunnerAction = "lib_scout_gunner";
				gunnerInAction = "lib_scout_gunner";
				initElev = 45;
				maxElev = 25;
				minTurn = -38;
				maxTurn = 38;
				commanding = -1;
				primaryObserver = 1;
				gunnerForceOptics = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				startEngine = 0;
				castGunnerShadow = 1;
				LIB_WP_TurretProtected = 0.5;
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret{};
					class HitGun: HitGun{};
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 0.85;
				};
				class ViewGunner: ViewGunner
				{
					initAngleX = 5;
					minAngleX = -85;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 0.85;
				};
				class Turrets: Turrets{};
			};
		};
	};
    
};
