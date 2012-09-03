/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNC_functions.h
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

// Function FoxGameContent_WPNC.FoxDamageType_FlameThrower.EffectStarted
// [0x00422802] ( FUNC_Event )
// Parameters infos:
// class AFoxPawn*                VictimPawn                     ( CPF_Parm )
// struct FDOTInfo                CurrentDOTInfo                 ( CPF_Parm | CPF_OutParm )

void UFoxDamageType_FlameThrower::eventEffectStarted ( class AFoxPawn* VictimPawn, struct FDOTInfo* CurrentDOTInfo )
{
	static UFunction* pFnEffectStarted = NULL;

	if ( ! pFnEffectStarted )
		pFnEffectStarted = (UFunction*) UObject::GObjObjects()->Data[ 108433 ];

	UFoxDamageType_FlameThrower_eventEffectStarted_Parms EffectStarted_Parms;
	EffectStarted_Parms.VictimPawn = VictimPawn;

	this->ProcessEvent ( pFnEffectStarted, &EffectStarted_Parms, NULL );

	if ( CurrentDOTInfo )
		memcpy ( CurrentDOTInfo, &EffectStarted_Parms.CurrentDOTInfo, 0x24 );
};

// Function FoxGameContent_WPNC.FoxWeapon_MiniGun.TryToGetBackToZoom
// [0x00020100] 
// Parameters infos:

void AFoxWeapon_MiniGun::TryToGetBackToZoom ( )
{
	static UFunction* pFnTryToGetBackToZoom = NULL;

	if ( ! pFnTryToGetBackToZoom )
		pFnTryToGetBackToZoom = (UFunction*) UObject::GObjObjects()->Data[ 108605 ];

	AFoxWeapon_MiniGun_execTryToGetBackToZoom_Parms TryToGetBackToZoom_Parms;

	this->ProcessEvent ( pFnTryToGetBackToZoom, &TryToGetBackToZoom_Parms, NULL );
};

// Function FoxGameContent_WPNC.FoxWeapon_MiniGun.TryToGetBackToFiringState
// [0x00020100] 
// Parameters infos:

void AFoxWeapon_MiniGun::TryToGetBackToFiringState ( )
{
	static UFunction* pFnTryToGetBackToFiringState = NULL;

	if ( ! pFnTryToGetBackToFiringState )
		pFnTryToGetBackToFiringState = (UFunction*) UObject::GObjObjects()->Data[ 108604 ];

	AFoxWeapon_MiniGun_execTryToGetBackToFiringState_Parms TryToGetBackToFiringState_Parms;

	this->ProcessEvent ( pFnTryToGetBackToFiringState, &TryToGetBackToFiringState_Parms, NULL );
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun.GetWeaponSpecificDecalData
// [0x00020102] 
// Parameters infos:
// class UFoxPMPInfo_Decals*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPhysicalMaterialProperty* PMP_Info                       ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UFoxPMPInfo_Decals* AFoxWeaponAttachment_MiniGun::GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 108713 ];

	AFoxWeaponAttachment_MiniGun_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.PMP_Info = PMP_Info;
	GetWeaponSpecificDecalData_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_MiniGun::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 108709 ];

	AFoxWeaponAttachment_MiniGun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_MiniGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_MiniGun::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 108705 ];

	AFoxWeaponAttachment_MiniGun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_RailGun.GetWeaponSpecificDecalData
// [0x00020102] 
// Parameters infos:
// class UFoxPMPInfo_Decals*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPhysicalMaterialProperty* PMP_Info                       ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UFoxPMPInfo_Decals* AFoxWeaponAttachment_RailGun::GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 108732 ];

	AFoxWeaponAttachment_RailGun_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.PMP_Info = PMP_Info;
	GetWeaponSpecificDecalData_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_RailGun.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_RailGun::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 108728 ];

	AFoxWeaponAttachment_RailGun_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_WPNC.FoxWeaponAttachment_RailGun.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_RailGun::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 108724 ];

	AFoxWeaponAttachment_RailGun_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif