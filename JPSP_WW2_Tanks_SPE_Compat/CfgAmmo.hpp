class CfgAmmo
{
	#define MACRO_CALIBER(mm,speed) caliber=(mm /((15 * speed)/1000));
	class SPE_SprGr_Flak_38;
	class JPSP_SprGr_Flak_38: SPE_SprGr_Flak_38
	{
		hit = 50; //50
		MACRO_CALIBER(20,900)
		typicalSpeed = 900;

		ace_frag_enabled = 1;
		ace_frag_metal = 50;
		ace_frag_charge = 6;
		ace_frag_gurney_c = 2930; 
		ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
		ace_frag_classes[] = {"ACE_frag_tiny","ACE_frag_small_HD"};
		ace_frag_force = 1; 
	};
	class SPE_PzGr_Flak_38_AP_T;
	class JPSP_PzGr_Flak_38_AP_T: SPE_PzGr_Flak_38_AP_T
	{
		hit = 60; //120
		MACRO_CALIBER(20,800) //34, 800
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow.p3d";
		typicalSpeed = 800;

		ace_frag_enabled = 1;
		ace_frag_metal = 50;
		ace_frag_charge = 6;
		ace_frag_gurney_c = 2930; 
		ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
		ace_frag_classes[] = {"ACE_frag_tiny","ACE_frag_small_HD"};
		ace_frag_force = 1; 
	};
	class JPSP_PzGr40_Flak_38_APCR_T: JPSP_PzGr_Flak_38_AP_T
	{
		MACRO_CALIBER(30,1050) //45, 1050
		typicalSpeed = 1050;
	};
};