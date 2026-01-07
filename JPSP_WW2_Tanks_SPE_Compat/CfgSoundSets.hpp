class Engine_Base_RPM0_EXT_SoundSet;
class Engine_Base_RPM0_INT_SoundSet;
class MBT_03_Engine_INT_Burst_SoundSet;
class MBT_03_Engine_EXT_Burst_SoundSet;
class CfgSoundSets
{
    class PanzerII_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class PanzerII_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class PanzerII_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class PanzerII_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class PanzerII_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class PanzerII_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class PanzerII_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class PanzerII_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class PanzerII_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class PanzerII_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"PanzerII_Engine_RMP4_INT_SoundShader"};
		volumeFactor = 1.5;
		spatial = 1;
		loop = 1;
	};
	class PanzerII_EngineBurst_INT_SoundSet: MBT_03_Engine_INT_Burst_SoundSet
	{
		soundShaders[] = {"PanzerII_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};
	class PanzerII_EngineBurst_EXT_SoundSet: MBT_03_Engine_EXT_Burst_SoundSet
	{
		soundShaders[] = {"PanzerII_EngineBurst_EXT_SoundShader"};
		volumeFactor = 1;
		playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial = 1;
		loop = 0;
	};

	class Valentine_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class Valentine_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class Valentine_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class Valentine_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class Valentine_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class Valentine_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class Valentine_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1;
	};
	class Valentine_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class Valentine_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class Valentine_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"Valentine_Engine_RMP4_INT_SoundShader"};
		volumeFactor = 1.5;
		spatial = 1;
		loop = 1;
	};
	class Valentine_EngineBurst_INT_SoundSet: MBT_03_Engine_INT_Burst_SoundSet
	{
		soundShaders[] = {"Valentine_EngineBurst_INT_SoundShader"};
		volumeFactor = 1.1;
		playTrigger = "thrust - 0.1";
		spatial = 1;
		loop = 0;
	};
	class Valentine_EngineBurst_EXT_SoundSet: MBT_03_Engine_EXT_Burst_SoundSet
	{
		soundShaders[] = {"Valentine_EngineBurst_EXT_SoundShader"};
		volumeFactor = 1;
		playTrigger = "thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial = 1;
		loop = 0;
	};
};