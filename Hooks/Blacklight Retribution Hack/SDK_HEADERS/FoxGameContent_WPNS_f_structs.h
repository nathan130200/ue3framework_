/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNS_f_structs.h
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

// Function FoxGameContent_WPNS.FoxWeaponAttachment_Shotgun.PlayImpactEffects
// [0x00820102] 
struct AFoxWeaponAttachment_Shotgun_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	// TArray< struct FImpactInfo >                    ImpactList;                                       		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FImpactInfo                              RealImpact;                                       		// 0x0034 (0x0050) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif