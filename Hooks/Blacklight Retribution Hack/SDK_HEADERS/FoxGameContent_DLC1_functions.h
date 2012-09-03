/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_DLC1_functions.h
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

// Function FoxGameContent_DLC1.FoxWeaponAttachment_AutoShotgun.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void AFoxWeaponAttachment_AutoShotgun::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 96230 ];

	AFoxWeaponAttachment_AutoShotgun_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function FoxGameContent_DLC1.FoxWeaponAttachment_CrowBar.GetWeaponSpecificImpactSound
// [0x00020102] 
// Parameters infos:
// class UAkEvent*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UAkEvent* AFoxWeaponAttachment_CrowBar::GetWeaponSpecificImpactSound ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactSound = NULL;

	if ( ! pFnGetWeaponSpecificImpactSound )
		pFnGetWeaponSpecificImpactSound = (UFunction*) UObject::GObjObjects()->Data[ 96250 ];

	AFoxWeaponAttachment_CrowBar_execGetWeaponSpecificImpactSound_Parms GetWeaponSpecificImpactSound_Parms;
	GetWeaponSpecificImpactSound_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactSound_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactSound, &GetWeaponSpecificImpactSound_Parms, NULL );

	return GetWeaponSpecificImpactSound_Parms.ReturnValue;
};

// Function FoxGameContent_DLC1.FoxWeaponAttachment_CrowBar.GetWeaponSpecificImpactEffect
// [0x00020102] 
// Parameters infos:
// class UParticleSystem*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UFoxPMPInfo_ImpactFX*    ImpactFX_Info                  ( CPF_Parm )
// unsigned char                  FiringMode                     ( CPF_Const | CPF_Parm )

class UParticleSystem* AFoxWeaponAttachment_CrowBar::GetWeaponSpecificImpactEffect ( class UFoxPMPInfo_ImpactFX* ImpactFX_Info, unsigned char FiringMode )
{
	static UFunction* pFnGetWeaponSpecificImpactEffect = NULL;

	if ( ! pFnGetWeaponSpecificImpactEffect )
		pFnGetWeaponSpecificImpactEffect = (UFunction*) UObject::GObjObjects()->Data[ 96246 ];

	AFoxWeaponAttachment_CrowBar_execGetWeaponSpecificImpactEffect_Parms GetWeaponSpecificImpactEffect_Parms;
	GetWeaponSpecificImpactEffect_Parms.ImpactFX_Info = ImpactFX_Info;
	GetWeaponSpecificImpactEffect_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnGetWeaponSpecificImpactEffect, &GetWeaponSpecificImpactEffect_Parms, NULL );

	return GetWeaponSpecificImpactEffect_Parms.ReturnValue;
};

// Function FoxGameContent_DLC1.FoxWeaponAttachment_ShotgunPistol.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void AFoxWeaponAttachment_ShotgunPistol::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 96290 ];

	AFoxWeaponAttachment_ShotgunPistol_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif