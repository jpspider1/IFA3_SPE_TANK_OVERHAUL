class CfgSoundShaders
{
    class PanzerII_Engine_RMP0_EXT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_idle_EXT_01.ogg",1}};
		frequency = "0.9 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700, 2700])) - 0))";
		volume = "engineOn * 1 * 1.5 * (rpm factor [0.06 *700, (0.06 *700 + 1.5 *(700-0.06 *700))]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700, 2700])) factor [(1150 - 700)/(2500 - 700) - (((1150 - 700)/(2500 - 700) - 0) - (1.5 * ((1150 - 700)/(2500 - 700) - 0)))/2, 0])";
		range = "6*250";
	};
	class PanzerII_Engine_RMP1_EXT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_EXT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - (1800 - 1100)/(3300 - 1100)))";
		volume = "engineOn * 1 * (((rpm factor [1200, 3300]) factor[ 0 + (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2, (1800 - 1100)/(3300 - 1100) - (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2]) * ((rpm factor [1200, 3300]) factor[ (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]))";
		range = "6*500";
	};
	class PanzerII_Engine_RMP2_EXT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_EXT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - (2200 - 1100)/(3300 - 1100)))";
		volume = "engineOn * 1 * (((rpm factor [1200, 3300]) factor[ (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200, 3300]) factor[ (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]))";
		range = "6*500";
	};
	class PanzerII_Engine_RMP3_EXT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_EXT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - (3000 - 1100)/(3300 - 1100)))";
		volume = "engineOn * 1 * (((rpm factor [1200, 3300]) factor[ (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200, 3300]) factor[ 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2]))";
		range = "6*500";
	};
	class PanzerII_Engine_RMP4_EXT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_EXT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - 1))";
		volume = "engineOn * 1 * ((rpm factor [1200, 3300]) factor[ (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2])";
		range = "6*500";
	};
	class PanzerII_Tracks1_01_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1}};
		range = "6*500";
		frequency = 1;
		volume = "(0.3*(asphalt max rock)*(1+0.5*angVelocity factor[0,1]) + 0.7) * ((abs(speed) factor[0,1]) * (abs(speed) factor[4,3]))";
	};
	class PanzerII_Tracks1_02_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1}};
		range = "6*500";
		frequency = 1;
		volume = "(0.3*(asphalt max rock)*(1+0.5*angVelocity factor[0,1]) + 0.7) * ((abs(speed) factor[3,4]) * (abs(speed) factor[7,6]))";
	};
	class PanzerII_Tracks1_03_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1}};
		range = "6*500";
		frequency = 1;
		volume = "(0.3*(asphalt max rock)*(1+0.5*angVelocity factor[0,1]) + 0.7) * ((abs(speed) factor[6,7]) * (abs(speed) factor[10,9]))";
	};
	class PanzerII_Tracks1_04_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1}};
		range = "6*500";
		frequency = 1;
		volume = "(0.3*(asphalt max rock)*(1+0.5*angVelocity factor[0,1]) + 0.7) * ((abs(speed) factor[9,10]) * (abs(speed) factor[13,12]))";
	};
	class PanzerII_Tracks1_05_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1}};
		range = "6*500";
		frequency = 1;
		volume = "(0.3*(asphalt max rock)*(1+0.5*angVelocity factor[0,1]) + 0.7) * (speed factor [12,13])";
	};
	class PanzerII_Hard_Scrape_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1}};
		range = 50;
		frequency = 1;
		volume = "(asphalt max rock) * (angVelocity factor[0.3,0.4]))";
	};
	class PanzerII_Hard_Slip_EXT_SoundShader
	{
		samples[] = {{"A3\Sounds_F\vehicles\armor\shared\hard_slip1_EXT",1}};
		range = 50;
		frequency = 1;
		volume = "0.5 * (asphalt max rock) * ((abs(longSlip)) factor [0.1,0.3]) * (angVelocity factor[0.1,0])";
	};
	class PanzerII_Engine_RMP0_INT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_idle_INT_01.ogg",1}};
		frequency = "0.9 * (1 + 0.8 * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700, 2700])) - 0))";
		volume = "engineOn * 1 * 1.5 * (rpm factor [0.06 *700, (0.06 *700 + 1.5 *(700-0.06 *700))]) * (((1+0.1*1 *thrust) * ((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 1 *thrust)*((1-1 ) * (speed factor [0, 30]) + 1  * (rpm factor [700, 2700])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [700, 2700])) factor [(1150 - 700)/(2500 - 700) - (((1150 - 700)/(2500 - 700) - 0) - (1.5 * ((1150 - 700)/(2500 - 700) - 0)))/2, 0])";
		range = "6*100";
	};
	class PanzerII_Engine_RMP1_INT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_INT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - (1800 - 1100)/(3300 - 1100)))";
		volume = "engineOn * 1 * (((rpm factor [1200, 3300]) factor[ 0 + (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2, (1800 - 1100)/(3300 - 1100) - (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2]) * ((rpm factor [1200, 3300]) factor[ (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]))";
		range = "6*100";
	};
	class PanzerII_Engine_RMP2_INT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_INT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - (2200 - 1100)/(3300 - 1100)))";
		volume = "engineOn * 1 * (((rpm factor [1200, 3300]) factor[ (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200, 3300]) factor[ (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]))";
		range = "6*100";
	};
	class PanzerII_Engine_RMP3_INT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_INT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - (3000 - 1100)/(3300 - 1100)))";
		volume = "engineOn * 1 * (((rpm factor [1200, 3300]) factor[ (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200, 3300]) factor[ 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2]))";
		range = "6*100";
	};
	class PanzerII_Engine_RMP4_INT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_low_RPM_INT_01.ogg",1}};
		frequency = "1 * (1 + 1 * ((rpm factor [1200, 3300]) - 1))";
		volume = "engineOn * 1 * ((rpm factor [1200, 3300]) factor[ (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2])";
		range = "6*100";
	};
	class PanzerII_EngineBurst_INT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_throttle_INT_01.ogg",1},{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_throttle_INT_01.ogg",1},{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_throttle_INT_01.ogg",1}};
		frequency = 1;
		volume = 1;
		range = "6*100";
	};
	class PanzerII_EngineBurst_EXT_SoundShader
	{
		samples[] = {{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_throttle_EXT_01.ogg",1},{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_throttle_EXT_01.ogg",1},{"\JPSP_WW2_Tanks_SPE_Compat\Sounds\Panzer_II_engine_throttle_EXT_01.ogg",1}};
		frequency = 1;
		volume = 1;
		range = "6*500";
	};
};