/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_CHA_functions.h
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

// Function FoxGameContent_CHA.FoxWeapon_HardSuitCannon.TryToGetBackToZoom
// [0x00020100] 
// Parameters infos:

void AFoxWeapon_HardSuitCannon::TryToGetBackToZoom ( )
{
	static UFunction* pFnTryToGetBackToZoom = NULL;

	if ( ! pFnTryToGetBackToZoom )
		pFnTryToGetBackToZoom = (UFunction*) UObject::GObjObjects()->Data[ 86299 ];

	AFoxWeapon_HardSuitCannon_execTryToGetBackToZoom_Parms TryToGetBackToZoom_Parms;

	this->ProcessEvent ( pFnTryToGetBackToZoom, &TryToGetBackToZoom_Parms, NULL );
};

// Function FoxGameContent_CHA.FoxWeapon_HardSuitCannon.TryToGetBackToFiringState
// [0x00020100] 
// Parameters infos:

void AFoxWeapon_HardSuitCannon::TryToGetBackToFiringState ( )
{
	static UFunction* pFnTryToGetBackToFiringState = NULL;

	if ( ! pFnTryToGetBackToFiringState )
		pFnTryToGetBackToFiringState = (UFunction*) UObject::GObjObjects()->Data[ 86298 ];

	AFoxWeapon_HardSuitCannon_execTryToGetBackToFiringState_Parms TryToGetBackToFiringState_Parms;

	this->ProcessEvent ( pFnTryToGetBackToFiringState, &TryToGetBackToFiringState_Parms, NULL );
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon.GetWeaponSpecificDecalData
// [0x00020102] 
// Parameters infos:
// class UFoxPMPInfo_Decals*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPhysicalMaterialProperty* PMP_Info                       ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UFoxPMPInfo_Decals* AFoxWeaponAttachment_HardSuitCannon::GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 86347 ];

	AFoxWeaponAttachment_HardSuitCannon_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.PMP_Info = PMP_Info;
	GetWeaponSpecificDecalData_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_HardSuitCannon::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 86343 ];

	AFoxWeaponAttachment_HardSuitCannon_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitCannon.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_HardSuitCannon::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 86339 ];

	AFoxWeaponAttachment_HardSuitCannon_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG.GetWeaponSpecificDecalData
// [0x00020102] 
// Parameters infos:
// class UFoxPMPInfo_Decals*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPhysicalMaterialProperty* PMP_Info                       ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UFoxPMPInfo_Decals* AFoxWeaponAttachment_HardSuitHMG::GetWeaponSpecificDecalData ( class UFoxPhysicalMaterialProperty* PMP_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificDecalData = NULL;

	if ( ! pFnGetWeaponSpecificDecalData )
		pFnGetWeaponSpecificDecalData = (UFunction*) UObject::GObjObjects()->Data[ 86365 ];

	AFoxWeaponAttachment_HardSuitHMG_execGetWeaponSpecificDecalData_Parms GetWeaponSpecificDecalData_Parms;
	GetWeaponSpecificDecalData_Parms.PMP_Info = PMP_Info;
	GetWeaponSpecificDecalData_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificDecalData, &GetWeaponSpecificDecalData_Parms, NULL );

	return GetWeaponSpecificDecalData_Parms.ReturnValue;
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_HardSuitHMG::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 86361 ];

	AFoxWeaponAttachment_HardSuitHMG_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_CHA.FoxWeaponAttachment_HardSuitHMG.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_HardSuitHMG::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 86357 ];

	AFoxWeaponAttachment_HardSuitHMG_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif