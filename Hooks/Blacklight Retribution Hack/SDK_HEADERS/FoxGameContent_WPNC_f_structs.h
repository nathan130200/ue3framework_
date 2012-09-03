/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNC_f_structs.h
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

// Function FoxGameContent_WPNC.FoxDamageType_FlameThrower.EffectStarted
// [0x00422802] ( FUNC_Event )
struct UFoxDamageType_FlameThrower_eventEffectStarted_Parms
{
	struct FDOTInfo                                    CurrentDOTInfo;                                   		// 0x0000 (0x0024) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AFoxPawn*                                    VictimPawn;                                       		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function FoxGameContent_WPNC.FoxWeapon_MiniGun.TryToGetBackToZoom
// [0x00020100] 
struct AFoxWeapon_MiniGun_execTryToGetBackToZoom_Parms
{
};

// Function FoxGameContent_WPNC.FoxWeapon_MiniGun.TryToGetBackToFiringState
// [0x00020100] 
struct AFoxWeapon_MiniGun_execTryToGetBackToFiringState_Parms
{
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun.GetWeaponSpecificDecalData
// [0x00020102] 
struct AFoxWeaponAttachment_MiniGun_execGetWeaponSpecificDecalData_Parms
{
	class UFoxPhysicalMaterialProperty*                PMP_Info;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UFoxPMPInfo_Decals*                          ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_MiniGun_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_MiniGun_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_RailGun.GetWeaponSpecificDecalData
// [0x00020102] 
struct AFoxWeaponAttachment_RailGun_execGetWeaponSpecificDecalData_Parms
{
	class UFoxPhysicalMaterialProperty*                PMP_Info;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UFoxPMPInfo_Decals*                          ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_RailGun.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_RailGun_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_RailGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_RailGun_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif