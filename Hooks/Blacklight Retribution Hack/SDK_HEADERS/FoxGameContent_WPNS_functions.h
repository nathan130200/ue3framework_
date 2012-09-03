/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPNS_functions.h
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

// Function FoxGameContent_WPNS.FoxWeaponAttachment_Shotgun.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void AFoxWeaponAttachment_Shotgun::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 119668 ];

	AFoxWeaponAttachment_Shotgun_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif