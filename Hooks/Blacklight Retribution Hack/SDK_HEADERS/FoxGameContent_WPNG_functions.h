/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNG_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Barricade.ActivateEmissive
// [0x00820102] 
// Parameters infos:

void AFoxWeaponAttachment_Barricade::ActivateEmissive ( )
{
	static UFunction* pFnActivateEmissive = NULL;

	if ( ! pFnActivateEmissive )
		pFnActivateEmissive = (UFunction*) UObject::GObjObjects()->Data[ 114145 ];

	AFoxWeaponAttachment_Barricade_execActivateEmissive_Parms ActivateEmissive_Parms;

	this->ProcessEvent ( pFnActivateEmissive, &ActivateEmissive_Parms, NULL );
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Barricade.AttachWeaponTo
// [0x00024102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )
// struct FName                   SocketName                     ( CPF_OptionalParm | CPF_Parm )

void AFoxWeaponAttachment_Barricade::AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 114142 ];

	AFoxWeaponAttachment_Barricade_execAttachWeaponTo_Parms AttachWeaponTo_Parms;
	AttachWeaponTo_Parms.MeshCpnt = MeshCpnt;
	memcpy ( &AttachWeaponTo_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Barricade.StartReloadAnim
// [0x00024100] 
// Parameters infos:
// unsigned char                  FireMode                       ( CPF_OptionalParm | CPF_Parm )

void AFoxWeaponAttachment_Barricade::StartReloadAnim ( unsigned char FireMode )
{
	static UFunction* pFnStartReloadAnim = NULL;

	if ( ! pFnStartReloadAnim )
		pFnStartReloadAnim = (UFunction*) UObject::GObjObjects()->Data[ 114140 ];

	AFoxWeaponAttachment_Barricade_execStartReloadAnim_Parms StartReloadAnim_Parms;
	StartReloadAnim_Parms.FireMode = FireMode;

	this->ProcessEvent ( pFnStartReloadAnim, &StartReloadAnim_Parms, NULL );
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Cloak.StartFiringSound
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Const | CPF_Parm )

void AFoxWeaponAttachment_Cloak::StartFiringSound ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFiringSound = NULL;

	if ( ! pFnStartFiringSound )
		pFnStartFiringSound = (UFunction*) UObject::GObjObjects()->Data[ 114155 ];

	AFoxWeaponAttachment_Cloak_execStartFiringSound_Parms StartFiringSound_Parms;
	StartFiringSound_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFiringSound, &StartFiringSound_Parms, NULL );
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Hammer.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_Hammer::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 114193 ];

	AFoxWeaponAttachment_Hammer_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_Hammer.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_Hammer::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 114189 ];

	AFoxWeaponAttachment_Hammer_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_HealGun.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_HealGun::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 114212 ];

	AFoxWeaponAttachment_HealGun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_HealGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_HealGun::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 114208 ];

	AFoxWeaponAttachment_HealGun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_HealGun.SkipImpactEffects
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  HitActor                       ( CPF_Parm )

bool AFoxWeaponAttachment_HealGun::SkipImpactEffects ( class AActor* HitActor )
{
	static UFunction* pFnSkipImpactEffects = NULL;

	if ( ! pFnSkipImpactEffects )
		pFnSkipImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 114205 ];

	AFoxWeaponAttachment_HealGun_execSkipImpactEffects_Parms SkipImpactEffects_Parms;
	SkipImpactEffects_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnSkipImpactEffects, &SkipImpactEffects_Parms, NULL );

	return SkipImpactEffects_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_RepairGun::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 114263 ];

	AFoxWeaponAttachment_RepairGun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_RepairGun::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 114259 ];

	AFoxWeaponAttachment_RepairGun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function FoxGameContent_WPNG.FoxWeaponAttachment_RepairGun.SkipImpactEffects
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  HitActor                       ( CPF_Parm )

bool AFoxWeaponAttachment_RepairGun::SkipImpactEffects ( class AActor* HitActor )
{
	static UFunction* pFnSkipImpactEffects = NULL;

	if ( ! pFnSkipImpactEffects )
		pFnSkipImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 114256 ];

	AFoxWeaponAttachment_RepairGun_execSkipImpactEffects_Parms SkipImpactEffects_Parms;
	SkipImpactEffects_Parms.HitActor = HitActor;

	this->ProcessEvent ( pFnSkipImpactEffects, &SkipImpactEffects_Parms, NULL );

	return SkipImpactEffects_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif