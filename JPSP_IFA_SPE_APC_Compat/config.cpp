#define _ARMA_

class CfgPatches
{
	class JPSP_IFA_SPE_APC_Compat
	{
		units[] = {};
        vehicles[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_UI_F","a3_map_altis_scenes","a3_map_vr_scenes","a3_map_stratis_scenes","A3_Map_Stratis","A3_Data_F_Enoch_Loadorder","WW2_Core_c_WW2_Core_c","WW2_Assets_c_Weapons_InfantryWeapons_c","WW2_Assets_c_Vehicles_Weapons_c", "WW2_Assets_c_Vehicles_Tanks_c", "ww2_assets_c_vehicles_wheeledapc_c","WW2_Assets_c_Vehicles_WheeledAPC_c_SdKfz251"};
		ammo[] = {};
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
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Truck_F: Car_F
	{
		class Turrets: Turrets{};
	};
	class LIB_Truck_base: Truck_F
	{
		class HitPoints: HitPoints
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
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitLFTire_0;
			class HitLFTire_1;
			class HitLFTire_2;
			class HitLFTire_3;
			class HitLBTire_0;
			class HitLBTire_1;
			class HitLBTire_2;
			class HitLBTire_3;
			class HitRFTire_0;
			class HitRFTire_1;
			class HitRFTire_2;
			class HitRFTire_3;
			class HitRBTire_0;
			class HitRBTire_1;
			class HitRBTire_2;
			class HitRBTire_3;
			class left_door;
			class right_door;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass1;
			class wheel_1_1_hide;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints: HitPoints
				{
					class HitGun;
					class HitTurret;
				};
			};
		};
		class CargoTurret: CargoTurret{};
	};
	class LIB_WheeledTracked_APC_base: LIB_Truck_base
	{
		class ViewPilot: ViewPilot{};
		class ViewOptics: ViewOptics{};
		class ViewCargo: ViewCargo{};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitTrans;
			class HitFuel;
			class HitLFWheel;
			class HitRFWheel;
			class HitLFTire_0;
			class HitLFTire_1;
			class HitLFTire_2;
			class HitLFTire_3;
			class HitLBTire_0;
			class HitLBTire_1;
			class HitLBTire_2;
			class HitLBTire_3;
			class HitRFTire_0;
			class HitRFTire_1;
			class HitRFTire_2;
			class HitRFTire_3;
			class HitRBTire_0;
			class HitRBTire_1;
			class HitRBTire_2;
			class HitRBTire_3;
			class left_door;
			class right_door;
			class left_wing;
			class right_wing;
		};
		class CargoTurret: CargoTurret{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret{};
					class HitGun: HitGun{};
				};
				class ViewOptics: ViewOptics{};
				class ViewGunner: ViewGunner{};
				class Turrets
				{
					class CargoTurret_01;
					class CargoTurret_02;
					class CargoTurret_03;
					class CargoTurret_04;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim;
			class ReloadMagazine;
			class Revolving;
			class ReloadAnim2;
			class ReloadMagazine2;
			class Revolving2;
			class hatch_rotate;
			class hatch2_rotate;
			class scope_rotation;
			class scope_rotation_2;
			class scope_translation;
			class muzzle_rot_HMG;
			class HitLFwheel;
			class HitRFwheel;
			class LTrack;
			class RTrack;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitGlass5;
			class HitGlass6;
			class door_1_1_rotate;
			class door_2_1_rotate;
			class contact_hull_translate;
			class wheel_1_1_hide;
			class wheel_1_2_hide;
			class wheel_2_1_hide;
			class wheel_2_2_hide;
			class wheel_1_1_Damage_Destruct;
			class wheel_1_2_Damage_Destruct;
			class wheel_2_1_Damage_Destruct;
			class wheel_2_2_Damage_Destruct;
			class door_1_1_hide;
			class door_2_1_hide;
			class wing_1_1_hide;
			class wing_2_1_hide;
		};
		class UserActions
		{
			class Towing;
			class Drop;
		};
		class Exhausts;
		class Reflectors;

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
	class LIB_SdKfz251_base: LIB_WheeledTracked_APC_base
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
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\WheeledAPC\SdKfz251\Hull.paa";
                    };
                    class engine: engine
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\WheeledAPC\SdKfz251\engine.paa";
                    };
                    class wheel_1_1: wheel_1_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\WheeledAPC\SdKfz251\ltwheel.paa";
                    };
                    class wheel_1_2: wheel_1_2
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\WheeledAPC\SdKfz251\ldwheel.paa";
                    };
                    class wheel_2_1: wheel_2_1
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\WheeledAPC\SdKfz251\rtwheel.paa";
                    };
                    class wheel_2_2: wheel_2_2
                    {
						Text = "\WW2\Core_t\IF_Data_t\Extended_HUD\WheeledAPC\SdKfz251\rdwheel.paa";
                    };
                };
            };
        };

		//SPE 250 sounds
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[] = {"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\sdkfz250\getInOut",1,1,25};
		soundGetOut[] = {"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\sdkfz250\getInOut",1,1,25};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.77828,1,20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.77828,1,20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.77828,1,20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.77828,1,20};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\sdkfz250\int_start",1.6,1};
		soundEngineOffInt[] = {"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\sdkfz250\int_stop",1.6,1};
		soundEngineOnExt[] = {"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\sdkfz250\ext_start",1.8,1,150};
		soundEngineOffExt[] = {"WW2\SPE_Assets_s\Vehicles\SoundFrameWork_s\sdkfz250\ext_stop",1.8,1,150};
		BushCrash1[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",0.630957,1,100};
		BushCrash2[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",0.630957,1,100};
		BushCrash3[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",0.630957,1,100};
		soundBushCrash[] = {"BushCrash1",0.33,"BushCrash2",0.33,"BushCrash3",0.33};
		buildCrash0[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",3.16228,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",3.16228,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",3.16228,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",3.16228,1,200};
		buildCrash4[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",3.16228,1,200};
		buildCrash5[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",3.16228,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.166,"buildCrash1",0.166,"buildCrash2",0.166,"buildCrash3",0.166,"buildCrash4",0.166,"buildCrash5",0.166};
		woodCrash0[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",3.16228,1,200};
		woodCrash1[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",3.16228,1,200};
		woodCrash2[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",3.16228,1,200};
		woodCrash3[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",3.16228,1,200};
		woodCrash4[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",3.16228,1,200};
		woodCrash5[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",3.16228,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",3.16228,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",3.16228,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",3.16228,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",3.16228,1,200};
		ArmorCrash4[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",3.16228,1,200};
		ArmorCrash5[] = {"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",3.16228,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.166,"ArmorCrash1",0.166,"ArmorCrash2",0.166,"ArmorCrash3",0.166,"ArmorCrash4",0.166,"ArmorCrash5",0.166};
		class Sounds
		{
			soundSetsInt[] = {"SPE_sdkfz250_int_onLoad_rpm0_soundSet","SPE_sdkfz250_int_onLoad_rpm1_soundSet","SPE_sdkfz250_int_onLoad_rpm2_soundSet","SPE_sdkfz250_int_onLoad_rpm3_soundSet","SPE_sdkfz250_int_onLoad_rpm4_soundSet","SPE_sdkfz250_int_onLoad_rpm5_soundSet","SPE_sdkfz250_int_onLoad_rpm6_soundSet","SPE_sdkfz250_int_onLoad_rpm7_soundSet","SPE_sdkfz250_int_onLoad_rpm8_soundSet","SPE_sdkfz250_int_onLoad_rpm9_soundSet","SPE_sdkfz250_int_onLoad_rpm10_soundSet","SPE_sdkfz250_int_offLoad_rpm0_soundSet","SPE_sdkfz250_int_offLoad_rpm1_soundSet","SPE_sdkfz250_int_offLoad_rpm2_soundSet","SPE_sdkfz250_int_offLoad_rpm3_soundSet","SPE_sdkfz250_int_offLoad_rpm4_soundSet","SPE_sdkfz250_int_offLoad_rpm5_soundSet","SPE_sdkfz250_int_offLoad_rpm6_soundSet","SPE_sdkfz250_int_offLoad_rpm7_soundSet","SPE_sdkfz250_int_offLoad_rpm8_soundSet","SPE_sdkfz250_int_offLoad_rpm9_soundSet","SPE_sdkfz250_int_offLoad_rpm10_soundSet","SPE_sdkfz250_int_acceleration_soundSet","SPE_halftrack_sdkfz250_int_tracks_slow_soundSet","SPE_halftrack_sdkfz250_int_tracks_mid_soundSet","SPE_halftrack_sdkfz250_int_tracks_fast_soundSet","Van_01_Rattling_INT_SoundSet","SPE_truck_int_tires_rock_slow_SoundSet","SPE_truck_int_tires_rock_fast_SoundSet","SPE_truck_int_tires_grass_slow_SoundSet","SPE_truck_int_tires_grass_fast_SoundSet","SPE_truck_int_tires_sand_slow_SoundSet","SPE_truck_int_tires_sand_fast_SoundSet","SPE_truck_int_tires_gravel_slow_SoundSet","SPE_truck_int_tires_gravel_fast_SoundSet","SPE_truck_int_tires_mud_slow_SoundSet","SPE_truck_int_tires_mud_fast_SoundSet","SPE_truck_int_tires_asphalt_slow_SoundSet","SPE_truck_int_tires_asphalt_fast_SoundSet","SPE_truck_int_tires_water_slow_SoundSet","SPE_truck_int_tires_water_fast_SoundSet","Van_01_Tires_Turn_Hard_INT_SoundSet","Van_01_Tires_Turn_Soft_INT_SoundSet","Van_01_Tires_Brake_Hard_INT_SoundSet","SPE_truck_int_tires_brake_soft_soundSet","SPE_tank_int_internalFire_soundSet","SPE_halfTrack_Int_rain_light_soundSet","SPE_halfTrack_Int_rain_hard_soundSet","SPE_halfTrack_int_stress_soundSet","SPE_halfTrack_int_rumble_soundSet","SPE_halfTrack_int_rattling_offroad_low_soundSet","SPE_halfTrack_int_rattling_offroad_high_soundSet","SPE_halfTrackSurfaceSound_int_soft_soundSet","SPE_halfTrackSurfaceSound_int_hard_soundSet","SPE_halfTrackSurfaceSound_int_sand_soundSet"};
			soundSetsExt[] = {"SPE_sdkfz250_ext_onLoad_rpm0_soundSet","SPE_sdkfz250_ext_onLoad_rpm1_soundSet","SPE_sdkfz250_ext_onLoad_rpm2_soundSet","SPE_sdkfz250_ext_onLoad_rpm3_soundSet","SPE_sdkfz250_ext_onLoad_rpm4_soundSet","SPE_sdkfz250_ext_onLoad_rpm5_soundSet","SPE_sdkfz250_ext_onLoad_rpm6_soundSet","SPE_sdkfz250_ext_onLoad_rpm7_soundSet","SPE_sdkfz250_ext_onLoad_rpm8_soundSet","SPE_sdkfz250_ext_onLoad_rpm9_soundSet","SPE_sdkfz250_ext_onLoad_rpm10_soundSet","SPE_sdkfz250_ext_offLoad_rpm0_soundSet","SPE_sdkfz250_ext_offLoad_rpm1_soundSet","SPE_sdkfz250_ext_offLoad_rpm2_soundSet","SPE_sdkfz250_ext_offLoad_rpm3_soundSet","SPE_sdkfz250_ext_offLoad_rpm4_soundSet","SPE_sdkfz250_ext_offLoad_rpm5_soundSet","SPE_sdkfz250_ext_offLoad_rpm6_soundSet","SPE_sdkfz250_ext_offLoad_rpm7_soundSet","SPE_sdkfz250_ext_offLoad_rpm8_soundSet","SPE_sdkfz250_ext_offLoad_rpm9_soundSet","SPE_sdkfz250_ext_offLoad_rpm10_soundSet","SPE_sdkfz250_ext_acceleration_soundSet","SPE_halftrack_sdkfz250_ext_tracks_slow_soundSet","SPE_halftrack_sdkfz250_ext_tracks_mid_soundSet","SPE_halftrack_sdkfz250_ext_tracks_fast_soundSet","Van_01_Rattling_EXT_SoundSet","Van_01_Stress_EXT_SoundSet","SPE_truck_ext_tires_rock_slow_SoundSet","SPE_truck_ext_tires_rock_fast_SoundSet","SPE_truck_ext_tires_grass_slow_SoundSet","SPE_truck_ext_tires_grass_fast_SoundSet","SPE_truck_ext_tires_sand_slow_SoundSet","SPE_truck_ext_tires_sand_fast_SoundSet","SPE_truck_ext_tires_gravel_slow_SoundSet","SPE_truck_ext_tires_gravel_fast_SoundSet","SPE_truck_ext_tires_mud_slow_SoundSet","SPE_truck_ext_tires_mud_fast_SoundSet","SPE_truck_ext_tires_asphalt_slow_SoundSet","SPE_truck_ext_tires_asphalt_fast_SoundSet","SPE_truck_ext_tires_water_slow_SoundSet","SPE_truck_ext_tires_water_fast_SoundSet","Van_01_Tires_Turn_Hard_EXT_SoundSet","Van_01_Tires_Turn_Soft_EXT_SoundSet","Van_01_Tires_Brake_Hard_EXT_SoundSet","Van_01_Tires_Brake_Soft_EXT_SoundSet","SPE_tank_ext_internalFire_soundSet","SPE_car_Ext_rain_light_soundSet","SPE_car_Ext_rain_hard_soundSet","SPE_halfTrack_ext_rattling_offroad_low_soundSet","SPE_halfTrack_ext_rattling_offroad_high_soundSet","SPE_truck_ext_distantTires_soundSet","SPE_truck_ext_distantTires_wet_soundSet","SPE_truck_ext_tires_wetLayer_soundSet","SPE_trackSurfaceSound_ext_soft_soundSet","SPE_trackSurfaceSound_ext_hard_soundSet","SPE_trackSurfaceSound_ext_sand_soundSet"};
		};

		class UserActions: UserActions
		{
			class hatches_open
			{
				displayName = "$STR_LIB_DN_OPEN_HATCHES";
				position = "zamerny";
				radius = 1;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "Alive(this) AND ((call ww2_fnc_findPlayer) == driver this) AND this animationPhase ""hatch_rotate"" < 0.5";
				statement = "this animate [""hatch_rotate"",1]";
			};
			class hatches_close: hatches_open
			{
				displayName = "$STR_LIB_DN_CLOSE_HATCHES";
				condition = "Alive(this) AND ((call ww2_fnc_findPlayer) == driver this) AND this animationPhase ""hatch_rotate"" > 0.5";
				statement = "this animate [""hatch_rotate"",0]";
			};
			class hatches_open2
			{
				displayName = "$STR_LIB_DN_OPEN_HATCHES";
				position = "zamerny";
				radius = 1;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "Alive(this) AND ((this getCargoIndex (call ww2_fnc_findPlayer)) == 9) AND this animationPhase ""hatch2_rotate"" < 0.5";
				statement = "this animate [""hatch2_rotate"",1]";
			};
			class hatches_close2: hatches_open2
			{
				displayName = "$STR_LIB_DN_CLOSE_HATCHES";
				condition = "Alive(this) AND ((this getCargoIndex (call ww2_fnc_findPlayer)) == 9) AND this animationPhase ""hatch2_rotate"" > 0.5";
				statement = "this animate [""hatch2_rotate"",0]";
			};
			class Doors_open
			{
				displayName = "$STR_LIB_DN_OPEN_DOORS";
				position = "door_l_axis";
				radius = 5;
				showWindow = 0;
				onlyForplayer = 0;
				condition = "Alive(this) AND this animationPhase ""door_1_1_rotate"" < 0.5"; // AND ((call ww2_fnc_findPlayer) in (crew this))
				statement = "this animatedoor [""door_1_1_rotate"",1]; this animatedoor [""door_2_1_rotate"",1]";
			};
			class Doors_close: Doors_open
			{
				displayName = "$STR_LIB_DN_CLOSE_DOORS";
				condition = "Alive(this) AND this animationPhase ""door_1_1_rotate"" > 0.5"; // AND ((call ww2_fnc_findPlayer) in (crew this))
				statement = "this animatedoor [""door_1_1_rotate"",0]; this animatedoor [""door_2_1_rotate"",0]";
			};
			//SPE Towing
			class Towing
			{
				condition = "[this] call SPE_System_Artillery_Towing_Condition_Attach_Wheeled_APCs";
				displayName = "Hitch to vehicle";
				displayNameDefault = "<img image='WW2\SPE_Assets_t\Vehicles\Misc_t\Start_Towing.paa' size='3' shadow='false' />";
				onlyForplayer = 0;
				position = "zamerny";
				radius = 6;
				statement = "[this] call SPE_System_Artillery_Towing_Statement_Attach_Wheeled_APCs;";
			};
			class Drop
			{
				condition = "[this] call SPE_System_Artillery_Towing_Condition_Drop_Wheeled_APCs";
				displayName = "Unhitch";
				displayNameDefault = "<img image='WW2\SPE_Assets_t\Vehicles\Misc_t\Drop_Towing.paa' size='3' shadow='false' />";
				onlyForplayer = 0;
				position = "zamerny";
				radius = 6;
				statement = "[this] spawn SPE_System_Artillery_Towing_Statement_Drop_Wheeled_APCs;";
			};
		};
	};
    
};
