/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNG_f_structs.h
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

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Barricade.ActivateEmissive
// [0x00820102] 
struct AFoxWeaponAttachment_Barricade_execActivateEmissive_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FLinearColor                             Emissive;                                         		// 0x0004 (0x0010) [0x0000000000000000]              
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Barricade.AttachWeaponTo
// [0x00024102] 
struct AFoxWeaponAttachment_Barricade_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Barricade.StartReloadAnim
// [0x00024100] 
struct AFoxWeaponAttachment_Barricade_execStartReloadAnim_Parms
{
	unsigned char                                      FireMode;                                         		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Cloak.StartFiringSound
// [0x00020102] 
struct AFoxWeaponAttachment_Cloak_execStartFiringSound_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Hammer.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_Hammer_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Hammer.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_Hammer_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_HealGun.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_HealGun_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_HealGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_HealGun_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_HealGun.SkipImpactEffects
// [0x00020102] 
struct AFoxWeaponAttachment_HealGun_execSkipImpactEffects_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun.GetWeaponSpecificImpactSound
// [0x00020102] 
struct AFoxWeaponAttachment_RepairGun_execGetWeaponSpecificImpactSound_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UAkEvent*                                    ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
struct AFoxWeaponAttachment_RepairGun_execGetWeaponSpecificImpactEffect_Parms
{
	class UFoxPMPInfo_ImpactFX*                        ImpactFX_Info;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FiringMode;                                       		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UParticleSystem*                             ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun.SkipImpactEffects
// [0x00020102] 
struct AFoxWeaponAttachment_RepairGun_execSkipImpactEffects_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif