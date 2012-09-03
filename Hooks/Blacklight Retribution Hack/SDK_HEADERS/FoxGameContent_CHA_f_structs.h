/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_CHA_f_structs.h
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

// Function FoxGameContent_CHA.FoxWeapon_HardSuitCannon.TryToGetBackToZoom
// [0x00020100] 
struct AFoxWeapon_HardSuitCannon_execTryToGetBackToZoom_Parms
{
};

// Function FoxGameContent_CHA.FoxWeapon_HardSuitCannon.TryToGetBackToFiringState
// [0x00020100] 
struct AFoxWeapon_HardSuitCannon_execTryToGetBackToFiringState_Parms
{
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon.GetWeaponSpecificDecalData
// [0x00020102] 
struct AFoxWeaponAttachment_HardSuitCannon_execGetWeaponSpecificDecalData_Parms
{
	class UFoxPhysicalMaterialProperty*                PMP_Info;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UFoxPMPInfo_Decals*                          ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_HardSuitCannon_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_HardSuitCannon_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG.GetWeaponSpecificDecalData
// [0x00020102] 
struct AFoxWeaponAttachment_HardSuitHMG_execGetWeaponSpecificDecalData_Parms
{
	class UFoxPhysicalMaterialProperty*                PMP_Info;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UFoxPMPInfo_Decals*                          ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_HardSuitHMG_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_HardSuitHMG_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif