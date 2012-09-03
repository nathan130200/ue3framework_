/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FoxGameContent_WPN_functions.h
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

// Function FoxGameContent_WPN.FoxDamageType_Bullet_Electro.ApplyEffect
// [0x00426002] 
// Parameters infos:
// class AFoxPawn*                VictimPawn                     ( CPF_Parm )
// class AController*             ControllerInstigator           ( CPF_OptionalParm | CPF_Parm )
// int                            DamageAmount                   ( CPF_Parm | CPF_OutParm )

void UFoxDamageType_Bullet_Electro::ApplyEffect ( class AFoxPawn* VictimPawn, class AController* ControllerInstigator, int* DamageAmount )
{
	static UFunction* pFnApplyEffect = NULL;

	if ( ! pFnApplyEffect )
		pFnApplyEffect = (UFunction*) UObject::GObjObjects()->Data[ 103273 ];

	UFoxDamageType_Bullet_Electro_execApplyEffect_Parms ApplyEffect_Parms;
	ApplyEffect_Parms.VictimPawn = VictimPawn;
	ApplyEffect_Parms.ControllerInstigator = ControllerInstigator;

	this->ProcessEvent ( pFnApplyEffect, &ApplyEffect_Parms, NULL );

	if ( DamageAmount )
		*DamageAmount = ApplyEffect_Parms.DamageAmount;
};

// Function FoxGameContent_WPN.FoxDamageType_Bullet_Toxic.ApplyEffect
// [0x00426002] 
// Parameters infos:
// class AFoxPawn*                VictimPawn                     ( CPF_Parm )
// class AController*             ControllerInstigator           ( CPF_OptionalParm | CPF_Parm )
// int                            DamageAmount                   ( CPF_Parm | CPF_OutParm )

void UFoxDamageType_Bullet_Toxic::ApplyEffect ( class AFoxPawn* VictimPawn, class AController* ControllerInstigator, int* DamageAmount )
{
	static UFunction* pFnApplyEffect = NULL;

	if ( ! pFnApplyEffect )
		pFnApplyEffect = (UFunction*) UObject::GObjObjects()->Data[ 103301 ];

	UFoxDamageType_Bullet_Toxic_execApplyEffect_Parms ApplyEffect_Parms;
	ApplyEffect_Parms.VictimPawn = VictimPawn;
	ApplyEffect_Parms.ControllerInstigator = ControllerInstigator;

	this->ProcessEvent ( pFnApplyEffect, &ApplyEffect_Parms, NULL );

	if ( DamageAmount )
		*DamageAmount = ApplyEffect_Parms.DamageAmount;
};

// Function FoxGameContent_WPN.FoxWeaponScope_Default.UpdateSpawnEffectMaterials
// [0x00020000] 
// Parameters infos:
// struct FName                   ParamName                      ( CPF_Const | CPF_Parm )
// float                          Value                          ( CPF_Const | CPF_Parm )
// int                            stage                          ( CPF_Const | CPF_Parm )

void UFoxWeaponScope_Default::UpdateSpawnEffectMaterials ( struct FName ParamName, float Value, int stage )
{
	static UFunction* pFnUpdateSpawnEffectMaterials = NULL;

	if ( ! pFnUpdateSpawnEffectMaterials )
		pFnUpdateSpawnEffectMaterials = (UFunction*) UObject::GObjObjects()->Data[ 103782 ];

	UFoxWeaponScope_Default_execUpdateSpawnEffectMaterials_Parms UpdateSpawnEffectMaterials_Parms;
	memcpy ( &UpdateSpawnEffectMaterials_Parms.ParamName, &ParamName, 0x8 );
	UpdateSpawnEffectMaterials_Parms.Value = Value;
	UpdateSpawnEffectMaterials_Parms.stage = stage;

	this->ProcessEvent ( pFnUpdateSpawnEffectMaterials, &UpdateSpawnEffectMaterials_Parms, NULL );
};

// Function FoxGameContent_WPN.FoxWeaponScope_Default.SetSpawnEffectStage
// [0x00024000] 
// Parameters infos:
// int                            stage                          ( CPF_Const | CPF_Parm )
// struct FLinearColor            SpawnInColor                   ( CPF_OptionalParm | CPF_Parm )

void UFoxWeaponScope_Default::SetSpawnEffectStage ( int stage, struct FLinearColor SpawnInColor )
{
	static UFunction* pFnSetSpawnEffectStage = NULL;

	if ( ! pFnSetSpawnEffectStage )
		pFnSetSpawnEffectStage = (UFunction*) UObject::GObjObjects()->Data[ 103779 ];

	UFoxWeaponScope_Default_execSetSpawnEffectStage_Parms SetSpawnEffectStage_Parms;
	SetSpawnEffectStage_Parms.stage = stage;
	memcpy ( &SetSpawnEffectStage_Parms.SpawnInColor, &SpawnInColor, 0x10 );

	this->ProcessEvent ( pFnSetSpawnEffectStage, &SetSpawnEffectStage_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif