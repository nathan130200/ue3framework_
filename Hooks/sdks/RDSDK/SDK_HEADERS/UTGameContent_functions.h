/*
#############################################################################################
# Ravaged Beta (Beta) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UTGameContent_functions.h
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

// Function UTGameContent.UTArmorPickup_BaseArmor.AddShieldStrength
// [0x00020002] 
// Parameters infos:
// class AUTPawn*                 P                              ( CPF_Parm )

void AUTArmorPickup_BaseArmor::AddShieldStrength ( class AUTPawn* P )
{
	static UFunction* pFnAddShieldStrength = NULL;

	if ( ! pFnAddShieldStrength )
		pFnAddShieldStrength = (UFunction*) UObject::GObjObjects()->Data[ 68662 ];

	AUTArmorPickup_BaseArmor_execAddShieldStrength_Parms AddShieldStrength_Parms;
	AddShieldStrength_Parms.P = P;

	this->ProcessEvent ( pFnAddShieldStrength, &AddShieldStrength_Parms, NULL );
};

// Function UTGameContent.UTArmorPickup_BaseArmor.CanUseShield
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTPawn*                 P                              ( CPF_Parm )

int AUTArmorPickup_BaseArmor::CanUseShield ( class AUTPawn* P )
{
	static UFunction* pFnCanUseShield = NULL;

	if ( ! pFnCanUseShield )
		pFnCanUseShield = (UFunction*) UObject::GObjObjects()->Data[ 68659 ];

	AUTArmorPickup_BaseArmor_execCanUseShield_Parms CanUseShield_Parms;
	CanUseShield_Parms.P = P;

	this->ProcessEvent ( pFnCanUseShield, &CanUseShield_Parms, NULL );

	return CanUseShield_Parms.ReturnValue;
};

// Function UTGameContent.UTArmorPickup_ShieldBelt.AddShieldStrength
// [0x00020002] 
// Parameters infos:
// class AUTPawn*                 P                              ( CPF_Parm )

void AUTArmorPickup_ShieldBelt::AddShieldStrength ( class AUTPawn* P )
{
	static UFunction* pFnAddShieldStrength = NULL;

	if ( ! pFnAddShieldStrength )
		pFnAddShieldStrength = (UFunction*) UObject::GObjObjects()->Data[ 68680 ];

	AUTArmorPickup_ShieldBelt_execAddShieldStrength_Parms AddShieldStrength_Parms;
	AddShieldStrength_Parms.P = P;

	this->ProcessEvent ( pFnAddShieldStrength, &AddShieldStrength_Parms, NULL );
};

// Function UTGameContent.UTArmorPickup_ShieldBelt.CanUseShield
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTPawn*                 P                              ( CPF_Parm )

int AUTArmorPickup_ShieldBelt::CanUseShield ( class AUTPawn* P )
{
	static UFunction* pFnCanUseShield = NULL;

	if ( ! pFnCanUseShield )
		pFnCanUseShield = (UFunction*) UObject::GObjObjects()->Data[ 68677 ];

	AUTArmorPickup_ShieldBelt_execCanUseShield_Parms CanUseShield_Parms;
	CanUseShield_Parms.P = P;

	this->ProcessEvent ( pFnCanUseShield, &CanUseShield_Parms, NULL );

	return CanUseShield_Parms.ReturnValue;
};

// Function UTGameContent.UTDroppedShieldBelt.BotDesireability
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Bot                            ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

float AUTDroppedShieldBelt::BotDesireability ( class APawn* Bot, class AController* C )
{
	static UFunction* pFnBotDesireability = NULL;

	if ( ! pFnBotDesireability )
		pFnBotDesireability = (UFunction*) UObject::GObjObjects()->Data[ 68932 ];

	AUTDroppedShieldBelt_execBotDesireability_Parms BotDesireability_Parms;
	BotDesireability_Parms.Bot = Bot;
	BotDesireability_Parms.C = C;

	this->ProcessEvent ( pFnBotDesireability, &BotDesireability_Parms, NULL );

	return BotDesireability_Parms.ReturnValue;
};

// Function UTGameContent.UTDroppedShieldBelt.CanUseShield
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTPawn*                 P                              ( CPF_Parm )

int AUTDroppedShieldBelt::CanUseShield ( class AUTPawn* P )
{
	static UFunction* pFnCanUseShield = NULL;

	if ( ! pFnCanUseShield )
		pFnCanUseShield = (UFunction*) UObject::GObjObjects()->Data[ 68929 ];

	AUTDroppedShieldBelt_execCanUseShield_Parms CanUseShield_Parms;
	CanUseShield_Parms.P = P;

	this->ProcessEvent ( pFnCanUseShield, &CanUseShield_Parms, NULL );

	return CanUseShield_Parms.ReturnValue;
};

// Function UTGameContent.UTDroppedShieldBelt.GiveTo
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTDroppedShieldBelt::GiveTo ( class APawn* P )
{
	static UFunction* pFnGiveTo = NULL;

	if ( ! pFnGiveTo )
		pFnGiveTo = (UFunction*) UObject::GObjObjects()->Data[ 68926 ];

	AUTDroppedShieldBelt_execGiveTo_Parms GiveTo_Parms;
	GiveTo_Parms.P = P;

	this->ProcessEvent ( pFnGiveTo, &GiveTo_Parms, NULL );
};

// Function UTGameContent.UTDroppedShieldBelt.DroppedFrom
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTDroppedShieldBelt::DroppedFrom ( class APawn* P )
{
	static UFunction* pFnDroppedFrom = NULL;

	if ( ! pFnDroppedFrom )
		pFnDroppedFrom = (UFunction*) UObject::GObjObjects()->Data[ 68923 ];

	AUTDroppedShieldBelt_execDroppedFrom_Parms DroppedFrom_Parms;
	DroppedFrom_Parms.P = P;

	this->ProcessEvent ( pFnDroppedFrom, &DroppedFrom_Parms, NULL );
};

// Function UTGameContent.UTArmorPickup_Thighpad.AddShieldStrength
// [0x00020002] 
// Parameters infos:
// class AUTPawn*                 P                              ( CPF_Parm )

void AUTArmorPickup_Thighpad::AddShieldStrength ( class AUTPawn* P )
{
	static UFunction* pFnAddShieldStrength = NULL;

	if ( ! pFnAddShieldStrength )
		pFnAddShieldStrength = (UFunction*) UObject::GObjObjects()->Data[ 68698 ];

	AUTArmorPickup_Thighpad_execAddShieldStrength_Parms AddShieldStrength_Parms;
	AddShieldStrength_Parms.P = P;

	this->ProcessEvent ( pFnAddShieldStrength, &AddShieldStrength_Parms, NULL );
};

// Function UTGameContent.UTArmorPickup_Thighpad.CanUseShield
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTPawn*                 P                              ( CPF_Parm )

int AUTArmorPickup_Thighpad::CanUseShield ( class AUTPawn* P )
{
	static UFunction* pFnCanUseShield = NULL;

	if ( ! pFnCanUseShield )
		pFnCanUseShield = (UFunction*) UObject::GObjObjects()->Data[ 68695 ];

	AUTArmorPickup_Thighpad_execCanUseShield_Parms CanUseShield_Parms;
	CanUseShield_Parms.P = P;

	this->ProcessEvent ( pFnCanUseShield, &CanUseShield_Parms, NULL );

	return CanUseShield_Parms.ReturnValue;
};

// Function UTGameContent.UTAttachment_RocketLauncher.StopThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:

void AUTAttachment_RocketLauncher::StopThirdPersonFireEffects ( )
{
	static UFunction* pFnStopThirdPersonFireEffects = NULL;

	if ( ! pFnStopThirdPersonFireEffects )
		pFnStopThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 68713 ];

	AUTAttachment_RocketLauncher_execStopThirdPersonFireEffects_Parms StopThirdPersonFireEffects_Parms;

	this->ProcessEvent ( pFnStopThirdPersonFireEffects, &StopThirdPersonFireEffects_Parms, NULL );
};

// Function UTGameContent.UTAttachment_RocketLauncher.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void AUTAttachment_RocketLauncher::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 68711 ];

	AUTAttachment_RocketLauncher_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function UTGameContent.UTAttachment_RocketLauncher.AttachTo
// [0x00020102] 
// Parameters infos:
// class AUTPawn*                 OwnerPawn                      ( CPF_Parm )

void AUTAttachment_RocketLauncher::AttachTo ( class AUTPawn* OwnerPawn )
{
	static UFunction* pFnAttachTo = NULL;

	if ( ! pFnAttachTo )
		pFnAttachTo = (UFunction*) UObject::GObjObjects()->Data[ 68709 ];

	AUTAttachment_RocketLauncher_execAttachTo_Parms AttachTo_Parms;
	AttachTo_Parms.OwnerPawn = OwnerPawn;

	this->ProcessEvent ( pFnAttachTo, &AttachTo_Parms, NULL );
};

// Function UTGameContent.UTAttachment_ShockRifle.SetMuzzleFlashParams
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void AUTAttachment_ShockRifle::SetMuzzleFlashParams ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetMuzzleFlashParams = NULL;

	if ( ! pFnSetMuzzleFlashParams )
		pFnSetMuzzleFlashParams = (UFunction*) UObject::GObjObjects()->Data[ 68741 ];

	AUTAttachment_ShockRifle_execSetMuzzleFlashParams_Parms SetMuzzleFlashParams_Parms;
	SetMuzzleFlashParams_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetMuzzleFlashParams, &SetMuzzleFlashParams_Parms, NULL );
};

// Function UTGameContent.UTAttachment_ShockRifle.AllowImpactEffects
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  HitActor                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool AUTAttachment_ShockRifle::AllowImpactEffects ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnAllowImpactEffects = NULL;

	if ( ! pFnAllowImpactEffects )
		pFnAllowImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 68735 ];

	AUTAttachment_ShockRifle_execAllowImpactEffects_Parms AllowImpactEffects_Parms;
	AllowImpactEffects_Parms.HitActor = HitActor;
	memcpy ( &AllowImpactEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &AllowImpactEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnAllowImpactEffects, &AllowImpactEffects_Parms, NULL );

	return AllowImpactEffects_Parms.ReturnValue;
};

// Function UTGameContent.UTAttachment_ShockRifle.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void AUTAttachment_ShockRifle::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 68733 ];

	AUTAttachment_ShockRifle_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function UTGameContent.UTAttachment_ShockRifle.FirstPersonFireEffects
// [0x00820102] 
// Parameters infos:
// class AWeapon*                 PawnWeapon                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void AUTAttachment_ShockRifle::FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation )
{
	static UFunction* pFnFirstPersonFireEffects = NULL;

	if ( ! pFnFirstPersonFireEffects )
		pFnFirstPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 68729 ];

	AUTAttachment_ShockRifle_execFirstPersonFireEffects_Parms FirstPersonFireEffects_Parms;
	FirstPersonFireEffects_Parms.PawnWeapon = PawnWeapon;
	memcpy ( &FirstPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnFirstPersonFireEffects, &FirstPersonFireEffects_Parms, NULL );
};

// Function UTGameContent.UTAttachment_ShockRifle.SpawnBeam
// [0x00820102] 
// Parameters infos:
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )
// unsigned long                  bFirstPerson                   ( CPF_Parm )

void AUTAttachment_ShockRifle::SpawnBeam ( struct FVector Start, struct FVector End, unsigned long bFirstPerson )
{
	static UFunction* pFnSpawnBeam = NULL;

	if ( ! pFnSpawnBeam )
		pFnSpawnBeam = (UFunction*) UObject::GObjObjects()->Data[ 68720 ];

	AUTAttachment_ShockRifle_execSpawnBeam_Parms SpawnBeam_Parms;
	memcpy ( &SpawnBeam_Parms.Start, &Start, 0xC );
	memcpy ( &SpawnBeam_Parms.End, &End, 0xC );
	SpawnBeam_Parms.bFirstPerson = bFirstPerson;

	this->ProcessEvent ( pFnSpawnBeam, &SpawnBeam_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.PlayFireEffects
// [0x00024102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void AUTWeap_ShockRifle::PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation )
{
	static UFunction* pFnPlayFireEffects = NULL;

	if ( ! pFnPlayFireEffects )
		pFnPlayFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 69777 ];

	AUTWeap_ShockRifle_execPlayFireEffects_Parms PlayFireEffects_Parms;
	PlayFireEffects_Parms.FireModeNum = FireModeNum;
	memcpy ( &PlayFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayFireEffects, &PlayFireEffects_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.SetMuzzleFlashParams
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void AUTWeap_ShockRifle::SetMuzzleFlashParams ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetMuzzleFlashParams = NULL;

	if ( ! pFnSetMuzzleFlashParams )
		pFnSetMuzzleFlashParams = (UFunction*) UObject::GObjObjects()->Data[ 69773 ];

	AUTWeap_ShockRifle_execSetMuzzleFlashParams_Parms SetMuzzleFlashParams_Parms;
	SetMuzzleFlashParams_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetMuzzleFlashParams, &SetMuzzleFlashParams_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.SetFlashLocation
// [0x00020002] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void AUTWeap_ShockRifle::SetFlashLocation ( struct FVector HitLocation )
{
	static UFunction* pFnSetFlashLocation = NULL;

	if ( ! pFnSetFlashLocation )
		pFnSetFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 69770 ];

	AUTWeap_ShockRifle_execSetFlashLocation_Parms SetFlashLocation_Parms;
	memcpy ( &SetFlashLocation_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSetFlashLocation, &SetFlashLocation_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.CalcWeaponFire
// [0x00C24102] 
// Parameters infos:
// struct FImpactInfo             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )
// struct FVector                 Extent                         ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FImpactInfo >   ImpactList                     ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FImpactInfo AUTWeap_ShockRifle::CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList )
{
	static UFunction* pFnCalcWeaponFire = NULL;

	if ( ! pFnCalcWeaponFire )
		pFnCalcWeaponFire = (UFunction*) UObject::GObjObjects()->Data[ 69762 ];

	AUTWeap_ShockRifle_execCalcWeaponFire_Parms CalcWeaponFire_Parms;
	memcpy ( &CalcWeaponFire_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &CalcWeaponFire_Parms.EndTrace, &EndTrace, 0xC );
	memcpy ( &CalcWeaponFire_Parms.Extent, &Extent, 0xC );

	this->ProcessEvent ( pFnCalcWeaponFire, &CalcWeaponFire_Parms, NULL );

	if ( ImpactList )
		memcpy ( ImpactList, &CalcWeaponFire_Parms.ImpactList, 0xC );

	return CalcWeaponFire_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator AUTWeap_ShockRifle::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 69756 ];

	AUTWeap_ShockRifle_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.ProjectileFire
// [0x00020102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* AUTWeap_ShockRifle::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 69753 ];

	AUTWeap_ShockRifle_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.BestMode
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUTWeap_ShockRifle::BestMode ( )
{
	static UFunction* pFnBestMode = NULL;

	if ( ! pFnBestMode )
		pFnBestMode = (UFunction*) UObject::GObjObjects()->Data[ 69749 ];

	AUTWeap_ShockRifle_execBestMode_Parms BestMode_Parms;

	this->ProcessEvent ( pFnBestMode, &BestMode_Parms, NULL );

	return BestMode_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.ClearCombo
// [0x00020002] 
// Parameters infos:

void AUTWeap_ShockRifle::ClearCombo ( )
{
	static UFunction* pFnClearCombo = NULL;

	if ( ! pFnClearCombo )
		pFnClearCombo = (UFunction*) UObject::GObjObjects()->Data[ 69748 ];

	AUTWeap_ShockRifle_execClearCombo_Parms ClearCombo_Parms;

	this->ProcessEvent ( pFnClearCombo, &ClearCombo_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.DoCombo
// [0x00020002] 
// Parameters infos:

void AUTWeap_ShockRifle::DoCombo ( )
{
	static UFunction* pFnDoCombo = NULL;

	if ( ! pFnDoCombo )
		pFnDoCombo = (UFunction*) UObject::GObjObjects()->Data[ 69747 ];

	AUTWeap_ShockRifle_execDoCombo_Parms DoCombo_Parms;

	this->ProcessEvent ( pFnDoCombo, &DoCombo_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void AUTWeap_ShockRifle::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 69745 ];

	AUTWeap_ShockRifle_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.SuggestAttackStyle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTWeap_ShockRifle::SuggestAttackStyle ( )
{
	static UFunction* pFnSuggestAttackStyle = NULL;

	if ( ! pFnSuggestAttackStyle )
		pFnSuggestAttackStyle = (UFunction*) UObject::GObjObjects()->Data[ 69743 ];

	AUTWeap_ShockRifle_execSuggestAttackStyle_Parms SuggestAttackStyle_Parms;

	this->ProcessEvent ( pFnSuggestAttackStyle, &SuggestAttackStyle_Parms, NULL );

	return SuggestAttackStyle_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.RangedAttackTime
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTWeap_ShockRifle::RangedAttackTime ( )
{
	static UFunction* pFnRangedAttackTime = NULL;

	if ( ! pFnRangedAttackTime )
		pFnRangedAttackTime = (UFunction*) UObject::GObjObjects()->Data[ 69740 ];

	AUTWeap_ShockRifle_execRangedAttackTime_Parms RangedAttackTime_Parms;

	this->ProcessEvent ( pFnRangedAttackTime, &RangedAttackTime_Parms, NULL );

	return RangedAttackTime_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.SetComboTarget
// [0x00020002] 
// Parameters infos:
// class AUTProj_Shockball*       S                              ( CPF_Parm )

void AUTWeap_ShockRifle::SetComboTarget ( class AUTProj_Shockball* S )
{
	static UFunction* pFnSetComboTarget = NULL;

	if ( ! pFnSetComboTarget )
		pFnSetComboTarget = (UFunction*) UObject::GObjObjects()->Data[ 69738 ];

	AUTWeap_ShockRifle_execSetComboTarget_Parms SetComboTarget_Parms;
	SetComboTarget_Parms.S = S;

	this->ProcessEvent ( pFnSetComboTarget, &SetComboTarget_Parms, NULL );
};

// Function UTGameContent.UTWeap_ShockRifle.InstantFireStartTrace
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AUTWeap_ShockRifle::InstantFireStartTrace ( )
{
	static UFunction* pFnInstantFireStartTrace = NULL;

	if ( ! pFnInstantFireStartTrace )
		pFnInstantFireStartTrace = (UFunction*) UObject::GObjObjects()->Data[ 69736 ];

	AUTWeap_ShockRifle_execInstantFireStartTrace_Parms InstantFireStartTrace_Parms;

	this->ProcessEvent ( pFnInstantFireStartTrace, &InstantFireStartTrace_Parms, NULL );

	return InstantFireStartTrace_Parms.ReturnValue;
};

// Function UTGameContent.UTWeap_ShockRifle.GetAIRating
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTWeap_ShockRifle::GetAIRating ( )
{
	static UFunction* pFnGetAIRating = NULL;

	if ( ! pFnGetAIRating )
		pFnGetAIRating = (UFunction*) UObject::GObjObjects()->Data[ 69733 ];

	AUTWeap_ShockRifle_execGetAIRating_Parms GetAIRating_Parms;

	this->ProcessEvent ( pFnGetAIRating, &GetAIRating_Parms, NULL );

	return GetAIRating_Parms.ReturnValue;
};

// Function UTGameContent.UTProj_Shockball.Monitor
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTProj_Shockball::Monitor ( class APawn* P )
{
	static UFunction* pFnMonitor = NULL;

	if ( ! pFnMonitor )
		pFnMonitor = (UFunction*) UObject::GObjObjects()->Data[ 69202 ];

	AUTProj_Shockball_execMonitor_Parms Monitor_Parms;
	Monitor_Parms.P = P;

	this->ProcessEvent ( pFnMonitor, &Monitor_Parms, NULL );
};

// Function UTGameContent.UTProj_Shockball.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AUTProj_Shockball::eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 69194 ];

	AUTProj_Shockball_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function UTGameContent.UTProj_Shockball.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AUTProj_Shockball::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 69189 ];

	AUTProj_Shockball_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function UTGameContent.UTProj_Shockball.ComboExplosion
// [0x00020002] 
// Parameters infos:

void AUTProj_Shockball::ComboExplosion ( )
{
	static UFunction* pFnComboExplosion = NULL;

	if ( ! pFnComboExplosion )
		pFnComboExplosion = (UFunction*) UObject::GObjObjects()->Data[ 69188 ];

	AUTProj_Shockball_execComboExplosion_Parms ComboExplosion_Parms;

	this->ProcessEvent ( pFnComboExplosion, &ComboExplosion_Parms, NULL );
};

// Function UTGameContent.UTProj_Shockball.CreateProjectileLight
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTProj_Shockball::eventCreateProjectileLight ( )
{
	static UFunction* pFnCreateProjectileLight = NULL;

	if ( ! pFnCreateProjectileLight )
		pFnCreateProjectileLight = (UFunction*) UObject::GObjObjects()->Data[ 69187 ];

	AUTProj_Shockball_eventCreateProjectileLight_Parms CreateProjectileLight_Parms;

	this->ProcessEvent ( pFnCreateProjectileLight, &CreateProjectileLight_Parms, NULL );
};

// Function UTGameContent.UTProj_Shockball.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTProj_Shockball::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 69185 ];

	AUTProj_Shockball_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function UTGameContent.UTBerserk.PlayBerserkFadingSound
// [0x00020002] 
// Parameters infos:

void AUTBerserk::PlayBerserkFadingSound ( )
{
	static UFunction* pFnPlayBerserkFadingSound = NULL;

	if ( ! pFnPlayBerserkFadingSound )
		pFnPlayBerserkFadingSound = (UFunction*) UObject::GObjObjects()->Data[ 68776 ];

	AUTBerserk_execPlayBerserkFadingSound_Parms PlayBerserkFadingSound_Parms;

	this->ProcessEvent ( pFnPlayBerserkFadingSound, &PlayBerserkFadingSound_Parms, NULL );
};

// Function UTGameContent.UTBerserk.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTBerserk::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 68775 ];

	AUTBerserk_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function UTGameContent.UTBerserk.ItemRemovedFromInvManager
// [0x00020002] 
// Parameters infos:

void AUTBerserk::ItemRemovedFromInvManager ( )
{
	static UFunction* pFnItemRemovedFromInvManager = NULL;

	if ( ! pFnItemRemovedFromInvManager )
		pFnItemRemovedFromInvManager = (UFunction*) UObject::GObjObjects()->Data[ 68772 ];

	AUTBerserk_execItemRemovedFromInvManager_Parms ItemRemovedFromInvManager_Parms;

	this->ProcessEvent ( pFnItemRemovedFromInvManager, &ItemRemovedFromInvManager_Parms, NULL );
};

// Function UTGameContent.UTBerserk.ClientGivenTo
// [0x010201C2] 
// Parameters infos:
// class APawn*                   NewOwner                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_Parm )

void AUTBerserk::ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
{
	static UFunction* pFnClientGivenTo = NULL;

	if ( ! pFnClientGivenTo )
		pFnClientGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 68769 ];

	AUTBerserk_execClientGivenTo_Parms ClientGivenTo_Parms;
	ClientGivenTo_Parms.NewOwner = NewOwner;
	ClientGivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnClientGivenTo, &ClientGivenTo_Parms, NULL );
};

// Function UTGameContent.UTBerserk.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   NewOwner                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void AUTBerserk::GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 68764 ];

	AUTBerserk_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.NewOwner = NewOwner;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function UTGameContent.UTBerserk.AdjustPawn
// [0x00020102] 
// Parameters infos:
// class AUTPawn*                 P                              ( CPF_Parm )
// unsigned long                  bRemoveBonus                   ( CPF_Parm )

void AUTBerserk::AdjustPawn ( class AUTPawn* P, unsigned long bRemoveBonus )
{
	static UFunction* pFnAdjustPawn = NULL;

	if ( ! pFnAdjustPawn )
		pFnAdjustPawn = (UFunction*) UObject::GObjObjects()->Data[ 68761 ];

	AUTBerserk_execAdjustPawn_Parms AdjustPawn_Parms;
	AdjustPawn_Parms.P = P;
	AdjustPawn_Parms.bRemoveBonus = bRemoveBonus;

	this->ProcessEvent ( pFnAdjustPawn, &AdjustPawn_Parms, NULL );
};

// Function UTGameContent.UTBerserk.AddWeaponOverlay
// [0x00022102] 
// Parameters infos:
// class AUTGameReplicationInfo*  GRI                            ( CPF_Parm )

void AUTBerserk::AddWeaponOverlay ( class AUTGameReplicationInfo* GRI )
{
	static UFunction* pFnAddWeaponOverlay = NULL;

	if ( ! pFnAddWeaponOverlay )
		pFnAddWeaponOverlay = (UFunction*) UObject::GObjObjects()->Data[ 68759 ];

	AUTBerserk_execAddWeaponOverlay_Parms AddWeaponOverlay_Parms;
	AddWeaponOverlay_Parms.GRI = GRI;

	this->ProcessEvent ( pFnAddWeaponOverlay, &AddWeaponOverlay_Parms, NULL );
};

// Function UTGameContent.UTPowerupRewardMessage.AnnouncementSound
// [0x00022002] 
// Parameters infos:
// class USoundNodeWave*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MessageIndex                   ( CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

class USoundNodeWave* UUTPowerupRewardMessage::AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC )
{
	static UFunction* pFnAnnouncementSound = NULL;

	if ( ! pFnAnnouncementSound )
		pFnAnnouncementSound = (UFunction*) UObject::GObjObjects()->Data[ 69078 ];

	UUTPowerupRewardMessage_execAnnouncementSound_Parms AnnouncementSound_Parms;
	AnnouncementSound_Parms.MessageIndex = MessageIndex;
	AnnouncementSound_Parms.OptionalObject = OptionalObject;
	AnnouncementSound_Parms.PC = PC;

	this->ProcessEvent ( pFnAnnouncementSound, &AnnouncementSound_Parms, NULL );

	return AnnouncementSound_Parms.ReturnValue;
};

// Function UTGameContent.UTPowerupRewardMessage.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UUTPowerupRewardMessage::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 69072 ];

	UUTPowerupRewardMessage_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function UTGameContent.UTPowerupRewardMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UUTPowerupRewardMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 69065 ];

	UUTPowerupRewardMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function UTGameContent.UTCTFMessage.ShouldBeRemoved
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTQueuedAnnouncement*   MyAnnouncement                 ( CPF_Parm )
// class UClass*                  NewAnnouncementClass           ( CPF_Parm )
// int                            NewMessageIndex                ( CPF_Parm )

bool UUTCTFMessage::ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex )
{
	static UFunction* pFnShouldBeRemoved = NULL;

	if ( ! pFnShouldBeRemoved )
		pFnShouldBeRemoved = (UFunction*) UObject::GObjObjects()->Data[ 68832 ];

	UUTCTFMessage_execShouldBeRemoved_Parms ShouldBeRemoved_Parms;
	ShouldBeRemoved_Parms.MyAnnouncement = MyAnnouncement;
	ShouldBeRemoved_Parms.NewAnnouncementClass = NewAnnouncementClass;
	ShouldBeRemoved_Parms.NewMessageIndex = NewMessageIndex;

	this->ProcessEvent ( pFnShouldBeRemoved, &ShouldBeRemoved_Parms, NULL );

	return ShouldBeRemoved_Parms.ReturnValue;
};

// Function UTGameContent.UTCTFBlueFlag.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUTCTFBlueFlag::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 68799 ];

	AUTCTFBlueFlag_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UTGameContent.UTTeamScoreMessage.GetColor
// [0x00026002] 
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FColor UUTTeamScoreMessage::GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetColor = NULL;

	if ( ! pFnGetColor )
		pFnGetColor = (UFunction*) UObject::GObjObjects()->Data[ 69247 ];

	UUTTeamScoreMessage_execGetColor_Parms GetColor_Parms;
	GetColor_Parms.Switch = Switch;
	GetColor_Parms.RelatedPRI = RelatedPRI;
	GetColor_Parms.RelatedPRI01 = RelatedPRI01;
	GetColor_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetColor, &GetColor_Parms, NULL );

	return GetColor_Parms.ReturnValue;
};

// Function UTGameContent.UTTeamScoreMessage.GetString
// [0x00026002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPRI1HUD                       ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

struct FString UUTTeamScoreMessage::GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = (UFunction*) UObject::GObjObjects()->Data[ 69240 ];

	UUTTeamScoreMessage_execGetString_Parms GetString_Parms;
	GetString_Parms.Switch = Switch;
	GetString_Parms.bPRI1HUD = bPRI1HUD;
	GetString_Parms.RelatedPRI = RelatedPRI;
	GetString_Parms.RelatedPRI01 = RelatedPRI01;
	GetString_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	return GetString_Parms.ReturnValue;
};

// Function UTGameContent.UTTeamScoreMessage.AnnouncementSound
// [0x00022002] 
// Parameters infos:
// class USoundNodeWave*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            MessageIndex                   ( CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

class USoundNodeWave* UUTTeamScoreMessage::AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC )
{
	static UFunction* pFnAnnouncementSound = NULL;

	if ( ! pFnAnnouncementSound )
		pFnAnnouncementSound = (UFunction*) UObject::GObjObjects()->Data[ 69235 ];

	UUTTeamScoreMessage_execAnnouncementSound_Parms AnnouncementSound_Parms;
	AnnouncementSound_Parms.MessageIndex = MessageIndex;
	AnnouncementSound_Parms.OptionalObject = OptionalObject;
	AnnouncementSound_Parms.PC = PC;

	this->ProcessEvent ( pFnAnnouncementSound, &AnnouncementSound_Parms, NULL );

	return AnnouncementSound_Parms.ReturnValue;
};

// Function UTGameContent.UTTeamScoreMessage.ClientReceive
// [0x00026102] 
// Parameters infos:
// class APlayerController*       P                              ( CPF_Parm )
// int                            Switch                         ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI                     ( CPF_OptionalParm | CPF_Parm )
// class APlayerReplicationInfo*  RelatedPRI01                   ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 OptionalObject                 ( CPF_OptionalParm | CPF_Parm )

void UUTTeamScoreMessage::ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject )
{
	static UFunction* pFnClientReceive = NULL;

	if ( ! pFnClientReceive )
		pFnClientReceive = (UFunction*) UObject::GObjObjects()->Data[ 69228 ];

	UUTTeamScoreMessage_execClientReceive_Parms ClientReceive_Parms;
	ClientReceive_Parms.P = P;
	ClientReceive_Parms.Switch = Switch;
	ClientReceive_Parms.RelatedPRI = RelatedPRI;
	ClientReceive_Parms.RelatedPRI01 = RelatedPRI01;
	ClientReceive_Parms.OptionalObject = OptionalObject;

	this->ProcessEvent ( pFnClientReceive, &ClientReceive_Parms, NULL );
};

// Function UTGameContent.UTTeamScoreMessage.AnnouncementLevel
// [0x00022002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  MessageIndex                   ( CPF_Parm )

unsigned char UUTTeamScoreMessage::AnnouncementLevel ( unsigned char MessageIndex )
{
	static UFunction* pFnAnnouncementLevel = NULL;

	if ( ! pFnAnnouncementLevel )
		pFnAnnouncementLevel = (UFunction*) UObject::GObjObjects()->Data[ 69225 ];

	UUTTeamScoreMessage_execAnnouncementLevel_Parms AnnouncementLevel_Parms;
	AnnouncementLevel_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnAnnouncementLevel, &AnnouncementLevel_Parms, NULL );

	return AnnouncementLevel_Parms.ReturnValue;
};

// Function UTGameContent.UTCTFRedFlag.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUTCTFRedFlag::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 68840 ];

	AUTCTFRedFlag_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UTGameContent.UTDecoy.Landed
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void AUTDecoy::Landed ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 68868 ];

	AUTDecoy_execLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function UTGameContent.UTDecoy.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTDecoy::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 68865 ];

	AUTDecoy_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function UTGameContent.UTDecoy.CheckRange
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Aggressor                      ( CPF_Parm )

bool AUTDecoy::CheckRange ( class AActor* Aggressor )
{
	static UFunction* pFnCheckRange = NULL;

	if ( ! pFnCheckRange )
		pFnCheckRange = (UFunction*) UObject::GObjObjects()->Data[ 68862 ];

	AUTDecoy_execCheckRange_Parms CheckRange_Parms;
	CheckRange_Parms.Aggressor = Aggressor;

	this->ProcessEvent ( pFnCheckRange, &CheckRange_Parms, NULL );

	return CheckRange_Parms.ReturnValue;
};

// Function UTGameContent.UTVehicle_Cicada_Content.IncomingMissile
// [0x00020002] 
// Parameters infos:
// class AProjectile*             P                              ( CPF_Parm )

void AUTVehicle_Cicada_Content::IncomingMissile ( class AProjectile* P )
{
	static UFunction* pFnIncomingMissile = NULL;

	if ( ! pFnIncomingMissile )
		pFnIncomingMissile = (UFunction*) UObject::GObjObjects()->Data[ 69299 ];

	AUTVehicle_Cicada_Content_execIncomingMissile_Parms IncomingMissile_Parms;
	IncomingMissile_Parms.P = P;

	this->ProcessEvent ( pFnIncomingMissile, &IncomingMissile_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Cicada_Content.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUTVehicle_Cicada_Content::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 69298 ];

	AUTVehicle_Cicada_Content_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UTGameContent.UTDmgType_CicadaLaser.ScoreKill
// [0x00022002] 
// Parameters infos:
// class AUTPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )
// class AUTPlayerReplicationInfo* KilledPRI                      ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )

void UUTDmgType_CicadaLaser::ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 68876 ];

	UUTDmgType_CicadaLaser_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.KillerPRI = KillerPRI;
	ScoreKill_Parms.KilledPRI = KilledPRI;
	ScoreKill_Parms.KilledPawn = KilledPawn;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaTurret.ProjectileFire
// [0x00020102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* AUTVWeap_CicadaTurret::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 69677 ];

	AUTVWeap_CicadaTurret_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaTurret.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator AUTVWeap_CicadaTurret::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 69673 ];

	AUTVWeap_CicadaTurret_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaTurret.IncomingMissile
// [0x00020102] 
// Parameters infos:
// class AProjectile*             P                              ( CPF_Parm )

void AUTVWeap_CicadaTurret::IncomingMissile ( class AProjectile* P )
{
	static UFunction* pFnIncomingMissile = NULL;

	if ( ! pFnIncomingMissile )
		pFnIncomingMissile = (UFunction*) UObject::GObjObjects()->Data[ 69670 ];

	AUTVWeap_CicadaTurret_execIncomingMissile_Parms IncomingMissile_Parms;
	IncomingMissile_Parms.P = P;

	this->ProcessEvent ( pFnIncomingMissile, &IncomingMissile_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaTurret.AddMissile
// [0x00020102] 
// Parameters infos:
// class AProjectile*             P                              ( CPF_Parm )

void AUTVWeap_CicadaTurret::AddMissile ( class AProjectile* P )
{
	static UFunction* pFnAddMissile = NULL;

	if ( ! pFnAddMissile )
		pFnAddMissile = (UFunction*) UObject::GObjObjects()->Data[ 69667 ];

	AUTVWeap_CicadaTurret_execAddMissile_Parms AddMissile_Parms;
	AddMissile_Parms.P = P;

	this->ProcessEvent ( pFnAddMissile, &AddMissile_Parms, NULL );
};

// Function UTGameContent.UTDmgType_CicadaRocket.ScoreKill
// [0x00022002] 
// Parameters infos:
// class AUTPlayerReplicationInfo* KillerPRI                      ( CPF_Parm )
// class AUTPlayerReplicationInfo* KilledPRI                      ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )

void UUTDmgType_CicadaRocket::ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn )
{
	static UFunction* pFnScoreKill = NULL;

	if ( ! pFnScoreKill )
		pFnScoreKill = (UFunction*) UObject::GObjObjects()->Data[ 68885 ];

	UUTDmgType_CicadaRocket_execScoreKill_Parms ScoreKill_Parms;
	ScoreKill_Parms.KillerPRI = KillerPRI;
	ScoreKill_Parms.KilledPRI = KilledPRI;
	ScoreKill_Parms.KilledPawn = KilledPawn;

	this->ProcessEvent ( pFnScoreKill, &ScoreKill_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.DrawLoadedCrosshair
// [0x00820102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void AUTVWeap_CicadaMissileLauncher::DrawLoadedCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawLoadedCrosshair = NULL;

	if ( ! pFnDrawLoadedCrosshair )
		pFnDrawLoadedCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 69640 ];

	AUTVWeap_CicadaMissileLauncher_execDrawLoadedCrosshair_Parms DrawLoadedCrosshair_Parms;
	DrawLoadedCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawLoadedCrosshair, &DrawLoadedCrosshair_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.DrawTarget
// [0x00020100] 
// Parameters infos:
// class AUTHUDBase*              H                              ( CPF_Parm )

void AUTVWeap_CicadaMissileLauncher::DrawTarget ( class AUTHUDBase* H )
{
	static UFunction* pFnDrawTarget = NULL;

	if ( ! pFnDrawTarget )
		pFnDrawTarget = (UFunction*) UObject::GObjObjects()->Data[ 69638 ];

	AUTVWeap_CicadaMissileLauncher_execDrawTarget_Parms DrawTarget_Parms;
	DrawTarget_Parms.H = H;

	this->ProcessEvent ( pFnDrawTarget, &DrawTarget_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.DrawBrackets
// [0x00020100] 
// Parameters infos:
// class AUTHUDBase*              H                              ( CPF_Parm )
// float                          CX                             ( CPF_Parm )
// float                          CY                             ( CPF_Parm )

void AUTVWeap_CicadaMissileLauncher::DrawBrackets ( class AUTHUDBase* H, float CX, float CY )
{
	static UFunction* pFnDrawBrackets = NULL;

	if ( ! pFnDrawBrackets )
		pFnDrawBrackets = (UFunction*) UObject::GObjObjects()->Data[ 69634 ];

	AUTVWeap_CicadaMissileLauncher_execDrawBrackets_Parms DrawBrackets_Parms;
	DrawBrackets_Parms.H = H;
	DrawBrackets_Parms.CX = CX;
	DrawBrackets_Parms.CY = CY;

	this->ProcessEvent ( pFnDrawBrackets, &DrawBrackets_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.FireLoadedRocket
// [0x00020000] 
// Parameters infos:

void AUTVWeap_CicadaMissileLauncher::FireLoadedRocket ( )
{
	static UFunction* pFnFireLoadedRocket = NULL;

	if ( ! pFnFireLoadedRocket )
		pFnFireLoadedRocket = (UFunction*) UObject::GObjObjects()->Data[ 69576 ];

	AUTVWeap_CicadaMissileLauncher_execFireLoadedRocket_Parms FireLoadedRocket_Parms;

	this->ProcessEvent ( pFnFireLoadedRocket, &FireLoadedRocket_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.BestMode
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUTVWeap_CicadaMissileLauncher::BestMode ( )
{
	static UFunction* pFnBestMode = NULL;

	if ( ! pFnBestMode )
		pFnBestMode = (UFunction*) UObject::GObjObjects()->Data[ 69574 ];

	AUTVWeap_CicadaMissileLauncher_execBestMode_Parms BestMode_Parms;

	this->ProcessEvent ( pFnBestMode, &BestMode_Parms, NULL );

	return BestMode_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.ProjectileFire
// [0x00820102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* AUTVWeap_CicadaMissileLauncher::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 69566 ];

	AUTVWeap_CicadaMissileLauncher_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.CustomFire
// [0x00020102] 
// Parameters infos:

void AUTVWeap_CicadaMissileLauncher::CustomFire ( )
{
	static UFunction* pFnCustomFire = NULL;

	if ( ! pFnCustomFire )
		pFnCustomFire = (UFunction*) UObject::GObjObjects()->Data[ 69565 ];

	AUTVWeap_CicadaMissileLauncher_execCustomFire_Parms CustomFire_Parms;

	this->ProcessEvent ( pFnCustomFire, &CustomFire_Parms, NULL );
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.FindInitialTarget
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bAdjustUp                      ( CPF_Parm )
// struct FVector                 AdjustLoc                      ( CPF_Parm )

struct FVector AUTVWeap_CicadaMissileLauncher::FindInitialTarget ( unsigned long bAdjustUp, struct FVector AdjustLoc )
{
	static UFunction* pFnFindInitialTarget = NULL;

	if ( ! pFnFindInitialTarget )
		pFnFindInitialTarget = (UFunction*) UObject::GObjObjects()->Data[ 69556 ];

	AUTVWeap_CicadaMissileLauncher_execFindInitialTarget_Parms FindInitialTarget_Parms;
	FindInitialTarget_Parms.bAdjustUp = bAdjustUp;
	memcpy ( &FindInitialTarget_Parms.AdjustLoc, &AdjustLoc, 0xC );

	this->ProcessEvent ( pFnFindInitialTarget, &FindInitialTarget_Parms, NULL );

	return FindInitialTarget_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.GetAmmoCount
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AUTVWeap_CicadaMissileLauncher::GetAmmoCount ( )
{
	static UFunction* pFnGetAmmoCount = NULL;

	if ( ! pFnGetAmmoCount )
		pFnGetAmmoCount = (UFunction*) UObject::GObjObjects()->Data[ 69554 ];

	AUTVWeap_CicadaMissileLauncher_execGetAmmoCount_Parms GetAmmoCount_Parms;

	this->ProcessEvent ( pFnGetAmmoCount, &GetAmmoCount_Parms, NULL );

	return GetAmmoCount_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.CanHitDesiredTarget
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 SocketLocation                 ( CPF_Parm )
// struct FRotator                SocketRotation                 ( CPF_Parm )
// struct FVector                 DesiredAimPoint                ( CPF_Parm )
// class AActor*                  TargetActor                    ( CPF_Parm )
// struct FVector                 RealAimPoint                   ( CPF_Parm | CPF_OutParm )

bool AUTVWeap_CicadaMissileLauncher::CanHitDesiredTarget ( struct FVector SocketLocation, struct FRotator SocketRotation, struct FVector DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint )
{
	static UFunction* pFnCanHitDesiredTarget = NULL;

	if ( ! pFnCanHitDesiredTarget )
		pFnCanHitDesiredTarget = (UFunction*) UObject::GObjObjects()->Data[ 69547 ];

	AUTVWeap_CicadaMissileLauncher_execCanHitDesiredTarget_Parms CanHitDesiredTarget_Parms;
	memcpy ( &CanHitDesiredTarget_Parms.SocketLocation, &SocketLocation, 0xC );
	memcpy ( &CanHitDesiredTarget_Parms.SocketRotation, &SocketRotation, 0xC );
	memcpy ( &CanHitDesiredTarget_Parms.DesiredAimPoint, &DesiredAimPoint, 0xC );
	CanHitDesiredTarget_Parms.TargetActor = TargetActor;

	this->ProcessEvent ( pFnCanHitDesiredTarget, &CanHitDesiredTarget_Parms, NULL );

	if ( RealAimPoint )
		memcpy ( RealAimPoint, &CanHitDesiredTarget_Parms.RealAimPoint, 0xC );

	return CanHitDesiredTarget_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_CicadaMissileLauncher.IsAimCorrect
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVWeap_CicadaMissileLauncher::IsAimCorrect ( )
{
	static UFunction* pFnIsAimCorrect = NULL;

	if ( ! pFnIsAimCorrect )
		pFnIsAimCorrect = (UFunction*) UObject::GObjObjects()->Data[ 69545 ];

	AUTVWeap_CicadaMissileLauncher_execIsAimCorrect_Parms IsAimCorrect_Parms;

	this->ProcessEvent ( pFnIsAimCorrect, &IsAimCorrect_Parms, NULL );

	return IsAimCorrect_Parms.ReturnValue;
};

// Function UTGameContent.UTDmgType_MantaBolt.SpawnHitEffect
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UUTDmgType_MantaBolt::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 68898 ];

	UUTDmgType_MantaBolt_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function UTGameContent.UTVWeap_MantaGun.SuggestAttackStyle
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTVWeap_MantaGun::SuggestAttackStyle ( )
{
	static UFunction* pFnSuggestAttackStyle = NULL;

	if ( ! pFnSuggestAttackStyle )
		pFnSuggestAttackStyle = (UFunction*) UObject::GObjObjects()->Data[ 69688 ];

	AUTVWeap_MantaGun_execSuggestAttackStyle_Parms SuggestAttackStyle_Parms;

	this->ProcessEvent ( pFnSuggestAttackStyle, &SuggestAttackStyle_Parms, NULL );

	return SuggestAttackStyle_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_ScorpionTurret.ProjectileFire
// [0x00020102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* AUTVWeap_ScorpionTurret::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 69701 ];

	AUTVWeap_ScorpionTurret_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function UTGameContent.UTVWeap_ScorpionTurret.GetAdjustedAim
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartFireLoc                   ( CPF_Parm )

struct FRotator AUTVWeap_ScorpionTurret::GetAdjustedAim ( struct FVector StartFireLoc )
{
	static UFunction* pFnGetAdjustedAim = NULL;

	if ( ! pFnGetAdjustedAim )
		pFnGetAdjustedAim = (UFunction*) UObject::GObjObjects()->Data[ 69697 ];

	AUTVWeap_ScorpionTurret_execGetAdjustedAim_Parms GetAdjustedAim_Parms;
	memcpy ( &GetAdjustedAim_Parms.StartFireLoc, &StartFireLoc, 0xC );

	this->ProcessEvent ( pFnGetAdjustedAim, &GetAdjustedAim_Parms, NULL );

	return GetAdjustedAim_Parms.ReturnValue;
};

// Function UTGameContent.UTGameCrowdAgent.PlayDeath
// [0x00020002] 
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AUTGameCrowdAgent::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 68945 ];

	AUTGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );
};

// Function UTGameContent.UTJumpBootEffect.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTJumpBootEffect::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 68962 ];

	AUTJumpBootEffect_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function UTGameContent.UTJumpBootEffect.AttachToOwner
// [0x00820102] 
// Parameters infos:

void AUTJumpBootEffect::AttachToOwner ( )
{
	static UFunction* pFnAttachToOwner = NULL;

	if ( ! pFnAttachToOwner )
		pFnAttachToOwner = (UFunction*) UObject::GObjObjects()->Data[ 68958 ];

	AUTJumpBootEffect_execAttachToOwner_Parms AttachToOwner_Parms;

	this->ProcessEvent ( pFnAttachToOwner, &AttachToOwner_Parms, NULL );
};

// Function UTGameContent.UTJumpBootEffect.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AUTJumpBootEffect::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 68957 ];

	AUTJumpBootEffect_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.DetourWeight
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Other                          ( CPF_Parm )
// float                          PathWeight                     ( CPF_Parm )

float AUTJumpBoots::DetourWeight ( class APawn* Other, float PathWeight )
{
	static UFunction* pFnDetourWeight = NULL;

	if ( ! pFnDetourWeight )
		pFnDetourWeight = (UFunction*) UObject::GObjObjects()->Data[ 69000 ];

	AUTJumpBoots_execDetourWeight_Parms DetourWeight_Parms;
	DetourWeight_Parms.Other = Other;
	DetourWeight_Parms.PathWeight = PathWeight;

	this->ProcessEvent ( pFnDetourWeight, &DetourWeight_Parms, NULL );

	return DetourWeight_Parms.ReturnValue;
};

// Function UTGameContent.UTJumpBoots.BotDesireability
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  PickupHolder                   ( CPF_Parm )
// class APawn*                   P                              ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

float AUTJumpBoots::BotDesireability ( class AActor* PickupHolder, class APawn* P, class AController* C )
{
	static UFunction* pFnBotDesireability = NULL;

	if ( ! pFnBotDesireability )
		pFnBotDesireability = (UFunction*) UObject::GObjObjects()->Data[ 68994 ];

	AUTJumpBoots_execBotDesireability_Parms BotDesireability_Parms;
	BotDesireability_Parms.PickupHolder = PickupHolder;
	BotDesireability_Parms.P = P;
	BotDesireability_Parms.C = C;

	this->ProcessEvent ( pFnBotDesireability, &BotDesireability_Parms, NULL );

	return BotDesireability_Parms.ReturnValue;
};

// Function UTGameContent.UTJumpBoots.DropFrom
// [0x00020002] 
// Parameters infos:
// struct FVector                 StartLocation                  ( CPF_Parm )
// struct FVector                 StartVelocity                  ( CPF_Parm )

void AUTJumpBoots::DropFrom ( struct FVector StartLocation, struct FVector StartVelocity )
{
	static UFunction* pFnDropFrom = NULL;

	if ( ! pFnDropFrom )
		pFnDropFrom = (UFunction*) UObject::GObjObjects()->Data[ 68991 ];

	AUTJumpBoots_execDropFrom_Parms DropFrom_Parms;
	memcpy ( &DropFrom_Parms.StartLocation, &StartLocation, 0xC );
	memcpy ( &DropFrom_Parms.StartVelocity, &StartVelocity, 0xC );

	this->ProcessEvent ( pFnDropFrom, &DropFrom_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.DenyPickupQuery
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ItemClass                      ( CPF_Parm )
// class AActor*                  Pickup                         ( CPF_Parm )

bool AUTJumpBoots::DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup )
{
	static UFunction* pFnDenyPickupQuery = NULL;

	if ( ! pFnDenyPickupQuery )
		pFnDenyPickupQuery = (UFunction*) UObject::GObjObjects()->Data[ 68987 ];

	AUTJumpBoots_execDenyPickupQuery_Parms DenyPickupQuery_Parms;
	DenyPickupQuery_Parms.ItemClass = ItemClass;
	DenyPickupQuery_Parms.Pickup = Pickup;

	this->ProcessEvent ( pFnDenyPickupQuery, &DenyPickupQuery_Parms, NULL );

	return DenyPickupQuery_Parms.ReturnValue;
};

// Function UTGameContent.UTJumpBoots.OwnerEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void AUTJumpBoots::OwnerEvent ( struct FName EventName )
{
	static UFunction* pFnOwnerEvent = NULL;

	if ( ! pFnOwnerEvent )
		pFnOwnerEvent = (UFunction*) UObject::GObjObjects()->Data[ 68985 ];

	AUTJumpBoots_execOwnerEvent_Parms OwnerEvent_Parms;
	memcpy ( &OwnerEvent_Parms.EventName, &EventName, 0x8 );

	this->ProcessEvent ( pFnOwnerEvent, &OwnerEvent_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.AdjustPawn
// [0x00020102] 
// Parameters infos:
// class AUTPawn*                 P                              ( CPF_Parm )
// unsigned long                  bRemoveBonus                   ( CPF_Parm )

void AUTJumpBoots::AdjustPawn ( class AUTPawn* P, unsigned long bRemoveBonus )
{
	static UFunction* pFnAdjustPawn = NULL;

	if ( ! pFnAdjustPawn )
		pFnAdjustPawn = (UFunction*) UObject::GObjObjects()->Data[ 68982 ];

	AUTJumpBoots_execAdjustPawn_Parms AdjustPawn_Parms;
	AdjustPawn_Parms.P = P;
	AdjustPawn_Parms.bRemoveBonus = bRemoveBonus;

	this->ProcessEvent ( pFnAdjustPawn, &AdjustPawn_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.ClientLostItem
// [0x010201C2] 
// Parameters infos:

void AUTJumpBoots::ClientLostItem ( )
{
	static UFunction* pFnClientLostItem = NULL;

	if ( ! pFnClientLostItem )
		pFnClientLostItem = (UFunction*) UObject::GObjObjects()->Data[ 68980 ];

	AUTJumpBoots_execClientLostItem_Parms ClientLostItem_Parms;

	this->ProcessEvent ( pFnClientLostItem, &ClientLostItem_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.ClientGivenTo
// [0x010201C2] 
// Parameters infos:
// class APawn*                   NewOwner                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_Parm )

void AUTJumpBoots::ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
{
	static UFunction* pFnClientGivenTo = NULL;

	if ( ! pFnClientGivenTo )
		pFnClientGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 68977 ];

	AUTJumpBoots_execClientGivenTo_Parms ClientGivenTo_Parms;
	ClientGivenTo_Parms.NewOwner = NewOwner;
	ClientGivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnClientGivenTo, &ClientGivenTo_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.ReplicatedEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTJumpBoots::ReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 68975 ];

	AUTJumpBoots_execReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.ItemRemovedFromInvManager
// [0x00020002] 
// Parameters infos:

void AUTJumpBoots::ItemRemovedFromInvManager ( )
{
	static UFunction* pFnItemRemovedFromInvManager = NULL;

	if ( ! pFnItemRemovedFromInvManager )
		pFnItemRemovedFromInvManager = (UFunction*) UObject::GObjObjects()->Data[ 68974 ];

	AUTJumpBoots_execItemRemovedFromInvManager_Parms ItemRemovedFromInvManager_Parms;

	this->ProcessEvent ( pFnItemRemovedFromInvManager, &ItemRemovedFromInvManager_Parms, NULL );
};

// Function UTGameContent.UTJumpBoots.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   NewOwner                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void AUTJumpBoots::GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 68971 ];

	AUTJumpBoots_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.NewOwner = NewOwner;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function UTGameContent.UTPickupFactory_HealthPack.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUTPickupFactory_HealthPack::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 69019 ];

	AUTPickupFactory_HealthPack_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UTGameContent.UTPickupFactory_SuperHealth.SetPickupVisible
// [0x00020102] 
// Parameters infos:

void AUTPickupFactory_SuperHealth::SetPickupVisible ( )
{
	static UFunction* pFnSetPickupVisible = NULL;

	if ( ! pFnSetPickupVisible )
		pFnSetPickupVisible = (UFunction*) UObject::GObjObjects()->Data[ 69041 ];

	AUTPickupFactory_SuperHealth_execSetPickupVisible_Parms SetPickupVisible_Parms;

	this->ProcessEvent ( pFnSetPickupVisible, &SetPickupVisible_Parms, NULL );
};

// Function UTGameContent.UTPickupFactory_SuperHealth.SetPickupHidden
// [0x00020102] 
// Parameters infos:

void AUTPickupFactory_SuperHealth::SetPickupHidden ( )
{
	static UFunction* pFnSetPickupHidden = NULL;

	if ( ! pFnSetPickupHidden )
		pFnSetPickupHidden = (UFunction*) UObject::GObjObjects()->Data[ 69040 ];

	AUTPickupFactory_SuperHealth_execSetPickupHidden_Parms SetPickupHidden_Parms;

	this->ProcessEvent ( pFnSetPickupHidden, &SetPickupHidden_Parms, NULL );
};

// Function UTGameContent.UTPickupFactory_SuperHealth.RespawnEffect
// [0x00020102] 
// Parameters infos:

void AUTPickupFactory_SuperHealth::RespawnEffect ( )
{
	static UFunction* pFnRespawnEffect = NULL;

	if ( ! pFnRespawnEffect )
		pFnRespawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 69039 ];

	AUTPickupFactory_SuperHealth_execRespawnEffect_Parms RespawnEffect_Parms;

	this->ProcessEvent ( pFnRespawnEffect, &RespawnEffect_Parms, NULL );
};

// Function UTGameContent.UTPickupFactory_UDamage.SetResOut
// [0x00020102] 
// Parameters infos:

void AUTPickupFactory_UDamage::SetResOut ( )
{
	static UFunction* pFnSetResOut = NULL;

	if ( ! pFnSetResOut )
		pFnSetResOut = (UFunction*) UObject::GObjObjects()->Data[ 69053 ];

	AUTPickupFactory_UDamage_execSetResOut_Parms SetResOut_Parms;

	this->ProcessEvent ( pFnSetResOut, &SetResOut_Parms, NULL );
};

// Function UTGameContent.UTPickupFactory_UDamage.InitPickupMeshEffects
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTPickupFactory_UDamage::eventInitPickupMeshEffects ( )
{
	static UFunction* pFnInitPickupMeshEffects = NULL;

	if ( ! pFnInitPickupMeshEffects )
		pFnInitPickupMeshEffects = (UFunction*) UObject::GObjObjects()->Data[ 69052 ];

	AUTPickupFactory_UDamage_eventInitPickupMeshEffects_Parms InitPickupMeshEffects_Parms;

	this->ProcessEvent ( pFnInitPickupMeshEffects, &InitPickupMeshEffects_Parms, NULL );
};

// Function UTGameContent.UTUDamage.PlayUDamageFadingSound
// [0x00020002] 
// Parameters infos:

void AUTUDamage::PlayUDamageFadingSound ( )
{
	static UFunction* pFnPlayUDamageFadingSound = NULL;

	if ( ! pFnPlayUDamageFadingSound )
		pFnPlayUDamageFadingSound = (UFunction*) UObject::GObjObjects()->Data[ 69286 ];

	AUTUDamage_execPlayUDamageFadingSound_Parms PlayUDamageFadingSound_Parms;

	this->ProcessEvent ( pFnPlayUDamageFadingSound, &PlayUDamageFadingSound_Parms, NULL );
};

// Function UTGameContent.UTUDamage.OwnerEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   EventName                      ( CPF_Parm )

void AUTUDamage::OwnerEvent ( struct FName EventName )
{
	static UFunction* pFnOwnerEvent = NULL;

	if ( ! pFnOwnerEvent )
		pFnOwnerEvent = (UFunction*) UObject::GObjObjects()->Data[ 69284 ];

	AUTUDamage_execOwnerEvent_Parms OwnerEvent_Parms;
	memcpy ( &OwnerEvent_Parms.EventName, &EventName, 0x8 );

	this->ProcessEvent ( pFnOwnerEvent, &OwnerEvent_Parms, NULL );
};

// Function UTGameContent.UTUDamage.ItemRemovedFromInvManager
// [0x00020002] 
// Parameters infos:

void AUTUDamage::ItemRemovedFromInvManager ( )
{
	static UFunction* pFnItemRemovedFromInvManager = NULL;

	if ( ! pFnItemRemovedFromInvManager )
		pFnItemRemovedFromInvManager = (UFunction*) UObject::GObjObjects()->Data[ 69281 ];

	AUTUDamage_execItemRemovedFromInvManager_Parms ItemRemovedFromInvManager_Parms;

	this->ProcessEvent ( pFnItemRemovedFromInvManager, &ItemRemovedFromInvManager_Parms, NULL );
};

// Function UTGameContent.UTUDamage.GivenTo
// [0x00024002] 
// Parameters infos:
// class APawn*                   NewOwner                       ( CPF_Parm )
// unsigned long                  bDoNotActivate                 ( CPF_OptionalParm | CPF_Parm )

void AUTUDamage::GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate )
{
	static UFunction* pFnGivenTo = NULL;

	if ( ! pFnGivenTo )
		pFnGivenTo = (UFunction*) UObject::GObjObjects()->Data[ 69277 ];

	AUTUDamage_execGivenTo_Parms GivenTo_Parms;
	GivenTo_Parms.NewOwner = NewOwner;
	GivenTo_Parms.bDoNotActivate = bDoNotActivate;

	this->ProcessEvent ( pFnGivenTo, &GivenTo_Parms, NULL );
};

// Function UTGameContent.UTUDamage.AddWeaponOverlay
// [0x00022102] 
// Parameters infos:
// class AUTGameReplicationInfo*  GRI                            ( CPF_Parm )

void AUTUDamage::AddWeaponOverlay ( class AUTGameReplicationInfo* GRI )
{
	static UFunction* pFnAddWeaponOverlay = NULL;

	if ( ! pFnAddWeaponOverlay )
		pFnAddWeaponOverlay = (UFunction*) UObject::GObjObjects()->Data[ 69275 ];

	AUTUDamage_execAddWeaponOverlay_Parms AddWeaponOverlay_Parms;
	AddWeaponOverlay_Parms.GRI = GRI;

	this->ProcessEvent ( pFnAddWeaponOverlay, &AddWeaponOverlay_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AUTProj_CicadaRocket::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 69137 ];

	AUTProj_CicadaRocket_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AUTProj_CicadaRocket::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 69133 ];

	AUTProj_CicadaRocket_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.Landed
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void AUTProj_CicadaRocket::Landed ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 69130 ];

	AUTProj_CicadaRocket_execLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.Ignite
// [0x00020102] 
// Parameters infos:

void AUTProj_CicadaRocket::Ignite ( )
{
	static UFunction* pFnIgnite = NULL;

	if ( ! pFnIgnite )
		pFnIgnite = (UFunction*) UObject::GObjObjects()->Data[ 69114 ];

	AUTProj_CicadaRocket_execIgnite_Parms Ignite_Parms;

	this->ProcessEvent ( pFnIgnite, &Ignite_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.ChangeTarget
// [0x00020102] 
// Parameters infos:

void AUTProj_CicadaRocket::ChangeTarget ( )
{
	static UFunction* pFnChangeTarget = NULL;

	if ( ! pFnChangeTarget )
		pFnChangeTarget = (UFunction*) UObject::GObjObjects()->Data[ 69113 ];

	AUTProj_CicadaRocket_execChangeTarget_Parms ChangeTarget_Parms;

	this->ProcessEvent ( pFnChangeTarget, &ChangeTarget_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.ArmMissile
// [0x00020002] 
// Parameters infos:
// struct FVector                 InitAccel                      ( CPF_Parm )
// struct FVector                 InitVelocity                   ( CPF_Parm )

void AUTProj_CicadaRocket::ArmMissile ( struct FVector InitAccel, struct FVector InitVelocity )
{
	static UFunction* pFnArmMissile = NULL;

	if ( ! pFnArmMissile )
		pFnArmMissile = (UFunction*) UObject::GObjObjects()->Data[ 69109 ];

	AUTProj_CicadaRocket_execArmMissile_Parms ArmMissile_Parms;
	memcpy ( &ArmMissile_Parms.InitAccel, &InitAccel, 0xC );
	memcpy ( &ArmMissile_Parms.InitVelocity, &InitVelocity, 0xC );

	this->ProcessEvent ( pFnArmMissile, &ArmMissile_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.Init
// [0x00020000] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void AUTProj_CicadaRocket::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 69107 ];

	AUTProj_CicadaRocket_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function UTGameContent.UTProj_CicadaRocket.ReplicatedEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTProj_CicadaRocket::ReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 69105 ];

	AUTProj_CicadaRocket_execReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function UTGameContent.UTProj_MantaBolt.SpawnExplosionEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AUTProj_MantaBolt::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 69146 ];

	AUTProj_MantaBolt_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function UTGameContent.UTTeleporter.InitializePortalEffect
// [0x00020102] 
// Parameters infos:
// class AActor*                  Dest                           ( CPF_Parm )

void AUTTeleporter::InitializePortalEffect ( class AActor* Dest )
{
	static UFunction* pFnInitializePortalEffect = NULL;

	if ( ! pFnInitializePortalEffect )
		pFnInitializePortalEffect = (UFunction*) UObject::GObjObjects()->Data[ 69257 ];

	AUTTeleporter_execInitializePortalEffect_Parms InitializePortalEffect_Parms;
	InitializePortalEffect_Parms.Dest = Dest;

	this->ProcessEvent ( pFnInitializePortalEffect, &InitializePortalEffect_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.BlowupVehicle
// [0x00020102] 
// Parameters infos:

void AUTVehicle_Manta_Content::BlowupVehicle ( )
{
	static UFunction* pFnBlowupVehicle = NULL;

	if ( ! pFnBlowupVehicle )
		pFnBlowupVehicle = (UFunction*) UObject::GObjObjects()->Data[ 69393 ];

	AUTVehicle_Manta_Content_execBlowupVehicle_Parms BlowupVehicle_Parms;

	this->ProcessEvent ( pFnBlowupVehicle, &BlowupVehicle_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.DrivingStatusChanged
// [0x00020102] 
// Parameters infos:

void AUTVehicle_Manta_Content::DrivingStatusChanged ( )
{
	static UFunction* pFnDrivingStatusChanged = NULL;

	if ( ! pFnDrivingStatusChanged )
		pFnDrivingStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 69392 ];

	AUTVehicle_Manta_Content_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

	this->ProcessEvent ( pFnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool AUTVehicle_Manta_Content::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 69387 ];

	AUTVehicle_Manta_Content_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function UTGameContent.UTVehicle_Manta_Content.TakeDamage
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle_Manta_Content::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 69379 ];

	AUTVehicle_Manta_Content_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.SetVehicleEffectParms
// [0x00020102] 
// Parameters infos:
// struct FName                   TriggerName                    ( CPF_Parm )
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void AUTVehicle_Manta_Content::SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetVehicleEffectParms = NULL;

	if ( ! pFnSetVehicleEffectParms )
		pFnSetVehicleEffectParms = (UFunction*) UObject::GObjObjects()->Data[ 69376 ];

	AUTVehicle_Manta_Content_execSetVehicleEffectParms_Parms SetVehicleEffectParms_Parms;
	memcpy ( &SetVehicleEffectParms_Parms.TriggerName, &TriggerName, 0x8 );
	SetVehicleEffectParms_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetVehicleEffectParms, &SetVehicleEffectParms_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.MantaDuckEffect
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTVehicle_Manta_Content::eventMantaDuckEffect ( )
{
	static UFunction* pFnMantaDuckEffect = NULL;

	if ( ! pFnMantaDuckEffect )
		pFnMantaDuckEffect = (UFunction*) UObject::GObjObjects()->Data[ 69375 ];

	AUTVehicle_Manta_Content_eventMantaDuckEffect_Parms MantaDuckEffect_Parms;

	this->ProcessEvent ( pFnMantaDuckEffect, &MantaDuckEffect_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.MantaJumpEffect
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTVehicle_Manta_Content::eventMantaJumpEffect ( )
{
	static UFunction* pFnMantaJumpEffect = NULL;

	if ( ! pFnMantaJumpEffect )
		pFnMantaJumpEffect = (UFunction*) UObject::GObjObjects()->Data[ 69374 ];

	AUTVehicle_Manta_Content_eventMantaJumpEffect_Parms MantaJumpEffect_Parms;

	this->ProcessEvent ( pFnMantaJumpEffect, &MantaJumpEffect_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Manta_Content.InitializeEffects
// [0x00020102] 
// Parameters infos:

void AUTVehicle_Manta_Content::InitializeEffects ( )
{
	static UFunction* pFnInitializeEffects = NULL;

	if ( ! pFnInitializeEffects )
		pFnInitializeEffects = (UFunction*) UObject::GObjObjects()->Data[ 69373 ];

	AUTVehicle_Manta_Content_execInitializeEffects_Parms InitializeEffects_Parms;

	this->ProcessEvent ( pFnInitializeEffects, &InitializeEffects_Parms, NULL );
};

// Function UTGameContent.UTVehicle_Scorpion_Content.TeamChanged
// [0x00820102] 
// Parameters infos:

void AUTVehicle_Scorpion_Content::TeamChanged ( )
{
	static UFunction* pFnTeamChanged = NULL;

	if ( ! pFnTeamChanged )
		pFnTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 69431 ];

	AUTVehicle_Scorpion_Content_execTeamChanged_Parms TeamChanged_Parms;

	this->ProcessEvent ( pFnTeamChanged, &TeamChanged_Parms, NULL );
};

// Function UTGameContent.UTVehicleCTFGame_Content.SetPlayerDefaults
// [0x00020002] 
// Parameters infos:
// class APawn*                   PlayerPawn                     ( CPF_Parm )

void AUTVehicleCTFGame_Content::SetPlayerDefaults ( class APawn* PlayerPawn )
{
	static UFunction* pFnSetPlayerDefaults = NULL;

	if ( ! pFnSetPlayerDefaults )
		pFnSetPlayerDefaults = (UFunction*) UObject::GObjObjects()->Data[ 69505 ];

	AUTVehicleCTFGame_Content_execSetPlayerDefaults_Parms SetPlayerDefaults_Parms;
	SetPlayerDefaults_Parms.PlayerPawn = PlayerPawn;

	this->ProcessEvent ( pFnSetPlayerDefaults, &SetPlayerDefaults_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif