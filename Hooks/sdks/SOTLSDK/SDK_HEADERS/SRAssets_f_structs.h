/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SRAssets_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function SRAssets.YWeapon_MPOfficerSupply_Content.ConsumeAmmo
// [0x00000000] 
struct AYWeapon_MPOfficerSupply_Content_execConsumeAmmo_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SRAssets.YWeapon_MPOfficerSupply_Content.SpawnGrenadeToDrop
// [0x00000000] 
struct AYWeapon_MPOfficerSupply_Content_execSpawnGrenadeToDrop_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AYProj_Physical*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SRAssets.YWeapon_MPOfficerBeacon_Content.SpawnGrenadeToDrop
// [0x00000000] 
struct AYWeapon_MPOfficerBeacon_Content_execSpawnGrenadeToDrop_Parms
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AYProj_Physical*                             ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SRAssets.YArsenalManagerMP_Content.SetupOfficerGrenades
// [0x00000000] 
struct AYArsenalManagerMP_Content_execSetupOfficerGrenades_Parms
{
	// class AYWeapon_Explosive*                       explosive;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SRAssets.YHUD_SP_Content.DrawGameHud
// [0x00000000] 
struct AYHUD_SP_Content_execDrawGameHud_Parms
{
	float                                              dt;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif