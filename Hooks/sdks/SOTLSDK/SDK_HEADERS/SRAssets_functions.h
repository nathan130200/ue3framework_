/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SRAssets_functions.h
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

// Function SRAssets.YWeapon_MPOfficerSupply_Content.ConsumeAmmo
// [0x00000000] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )

void AYWeapon_MPOfficerSupply_Content::ConsumeAmmo ( unsigned char FiringMode )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 135205 ];

	AYWeapon_MPOfficerSupply_Content_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FiringMode = FiringMode;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function SRAssets.YWeapon_MPOfficerSupply_Content.SpawnGrenadeToDrop
// [0x00000000] 
// Parameters infos:
// class AYProj_Physical*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartLoc                       ( CPF_Parm )

class AYProj_Physical* AYWeapon_MPOfficerSupply_Content::SpawnGrenadeToDrop ( struct FVector StartLoc )
{
	static UFunction* pFnSpawnGrenadeToDrop = NULL;

	if ( ! pFnSpawnGrenadeToDrop )
		pFnSpawnGrenadeToDrop = (UFunction*) UObject::GObjObjects()->Data[ 135202 ];

	AYWeapon_MPOfficerSupply_Content_execSpawnGrenadeToDrop_Parms SpawnGrenadeToDrop_Parms;
	memcpy ( &SpawnGrenadeToDrop_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnSpawnGrenadeToDrop, &SpawnGrenadeToDrop_Parms, NULL );

	return SpawnGrenadeToDrop_Parms.ReturnValue;
};

// Function SRAssets.YWeapon_MPOfficerBeacon_Content.SpawnGrenadeToDrop
// [0x00000000] 
// Parameters infos:
// class AYProj_Physical*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartLoc                       ( CPF_Parm )

class AYProj_Physical* AYWeapon_MPOfficerBeacon_Content::SpawnGrenadeToDrop ( struct FVector StartLoc )
{
	static UFunction* pFnSpawnGrenadeToDrop = NULL;

	if ( ! pFnSpawnGrenadeToDrop )
		pFnSpawnGrenadeToDrop = (UFunction*) UObject::GObjObjects()->Data[ 135186 ];

	AYWeapon_MPOfficerBeacon_Content_execSpawnGrenadeToDrop_Parms SpawnGrenadeToDrop_Parms;
	memcpy ( &SpawnGrenadeToDrop_Parms.StartLoc, &StartLoc, 0xC );

	this->ProcessEvent ( pFnSpawnGrenadeToDrop, &SpawnGrenadeToDrop_Parms, NULL );

	return SpawnGrenadeToDrop_Parms.ReturnValue;
};

// Function SRAssets.YArsenalManagerMP_Content.SetupOfficerGrenades
// [0x00000000] 
// Parameters infos:

void AYArsenalManagerMP_Content::SetupOfficerGrenades ( )
{
	static UFunction* pFnSetupOfficerGrenades = NULL;

	if ( ! pFnSetupOfficerGrenades )
		pFnSetupOfficerGrenades = (UFunction*) UObject::GObjObjects()->Data[ 133775 ];

	AYArsenalManagerMP_Content_execSetupOfficerGrenades_Parms SetupOfficerGrenades_Parms;

	this->ProcessEvent ( pFnSetupOfficerGrenades, &SetupOfficerGrenades_Parms, NULL );
};

// Function SRAssets.YHUD_SP_Content.DrawGameHud
// [0x00000000] 
// Parameters infos:
// float                          dt                             ( CPF_Parm )

void AYHUD_SP_Content::DrawGameHud ( float dt )
{
	static UFunction* pFnDrawGameHud = NULL;

	if ( ! pFnDrawGameHud )
		pFnDrawGameHud = (UFunction*) UObject::GObjObjects()->Data[ 134839 ];

	AYHUD_SP_Content_execDrawGameHud_Parms DrawGameHud_Parms;
	DrawGameHud_Parms.dt = dt;

	this->ProcessEvent ( pFnDrawGameHud, &DrawGameHud_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif