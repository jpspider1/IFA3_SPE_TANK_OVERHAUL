class Engine_Base_RPM0_EXT_SoundSet;
class Engine_Base_RPM0_INT_SoundSet;
class MBT_03_Engine_INT_Burst_SoundSet;
class MBT_03_Engine_EXT_Burst_SoundSet;
class CfgSoundSets
{
	class DAIMLER_Engine_RMP0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class DAIMLER_Engine_RMP1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1;
	};
	class DAIMLER_Engine_RMP2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class DAIMLER_Engine_RMP3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class DAIMLER_Engine_RMP4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-4};
		volumeFactor = 1.3;
	};
	class DAIMLER_Engine_RMP0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class DAIMLER_Engine_RMP1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.3;
	};
	class DAIMLER_Engine_RMP2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.6;
	};
	class DAIMLER_Engine_RMP3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.6;
	};
	class DAIMLER_Engine_RMP4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"DAIMLER_Engine_RMP4_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 1.6;
	};
};