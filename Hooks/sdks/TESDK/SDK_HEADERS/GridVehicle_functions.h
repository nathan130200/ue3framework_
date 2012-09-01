/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridVehicle_functions.h
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

// Function GridVehicle.ForcedDirVolume.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool AForcedDirVolume::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 39075 ];

	AForcedDirVolume_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function GridVehicle.ForcedDirVolume.UnTouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AForcedDirVolume::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39071 ];

	AForcedDirVolume_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function GridVehicle.ForcedDirVolume.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AForcedDirVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 39062 ];

	AForcedDirVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GridVehicle.ForcedDirVolume.ActorEnteredVolume
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AForcedDirVolume::eventActorEnteredVolume ( class AActor* Other )
{
	static UFunction* pFnActorEnteredVolume = NULL;

	if ( ! pFnActorEnteredVolume )
		pFnActorEnteredVolume = (UFunction*) UObject::GObjObjects()->Data[ 39060 ];

	AForcedDirVolume_eventActorEnteredVolume_Parms ActorEnteredVolume_Parms;
	ActorEnteredVolume_Parms.Other = Other;

	this->ProcessEvent ( pFnActorEnteredVolume, &ActorEnteredVolume_Parms, NULL );
};

// Function GridVehicle.ForcedDirVolume.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AForcedDirVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 39059 ];

	AForcedDirVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GridVehicle.UTSkelControl_Damage.RestorePart
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UUTSkelControl_Damage::eventRestorePart ( )
{
	static UFunction* pFnRestorePart = NULL;

	if ( ! pFnRestorePart )
		pFnRestorePart = (UFunction*) UObject::GObjObjects()->Data[ 40217 ];

	UUTSkelControl_Damage_eventRestorePart_Parms RestorePart_Parms;

	this->ProcessEvent ( pFnRestorePart, &RestorePart_Parms, NULL );

	return RestorePart_Parms.ReturnValue;
};

// Function GridVehicle.UTSkelControl_Damage.BreakApartOnDeath
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 PartLocation                   ( CPF_Parm )
// unsigned long                  bIsVisible                     ( CPF_Parm )

void UUTSkelControl_Damage::eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible )
{
	static UFunction* pFnBreakApartOnDeath = NULL;

	if ( ! pFnBreakApartOnDeath )
		pFnBreakApartOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 40387 ];

	UUTSkelControl_Damage_eventBreakApartOnDeath_Parms BreakApartOnDeath_Parms;
	memcpy ( &BreakApartOnDeath_Parms.PartLocation, &PartLocation, 0xC );
	BreakApartOnDeath_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnBreakApartOnDeath, &BreakApartOnDeath_Parms, NULL );
};

// Function GridVehicle.UTSkelControl_Damage.BreakApart
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 PartLocation                   ( CPF_Parm )
// unsigned long                  bIsVisible                     ( CPF_Parm )

void UUTSkelControl_Damage::eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible )
{
	static UFunction* pFnBreakApart = NULL;

	if ( ! pFnBreakApart )
		pFnBreakApart = (UFunction*) UObject::GObjObjects()->Data[ 40384 ];

	UUTSkelControl_Damage_eventBreakApart_Parms BreakApart_Parms;
	memcpy ( &BreakApart_Parms.PartLocation, &PartLocation, 0xC );
	BreakApart_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnBreakApart, &BreakApart_Parms, NULL );
};

// Function GridVehicle.UTSkelControl_TurretConstrained.WouldConstrainPitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            TestPitch                      ( CPF_Parm )
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

bool UUTSkelControl_TurretConstrained::WouldConstrainPitch ( int TestPitch, class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnWouldConstrainPitch = NULL;

	if ( ! pFnWouldConstrainPitch )
		pFnWouldConstrainPitch = (UFunction*) UObject::GObjObjects()->Data[ 39797 ];

	UUTSkelControl_TurretConstrained_execWouldConstrainPitch_Parms WouldConstrainPitch_Parms;
	WouldConstrainPitch_Parms.TestPitch = TestPitch;
	WouldConstrainPitch_Parms.SkelComp = SkelComp;

	pFnWouldConstrainPitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWouldConstrainPitch, &WouldConstrainPitch_Parms, NULL );

	pFnWouldConstrainPitch->FunctionFlags |= 0x400;

	return WouldConstrainPitch_Parms.ReturnValue;
};

// Function GridVehicle.UTSkelControl_TurretConstrained.InitTurret
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                InitRot                        ( CPF_Parm )
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void UUTSkelControl_TurretConstrained::InitTurret ( struct FRotator InitRot, class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnInitTurret = NULL;

	if ( ! pFnInitTurret )
		pFnInitTurret = (UFunction*) UObject::GObjObjects()->Data[ 39921 ];

	UUTSkelControl_TurretConstrained_execInitTurret_Parms InitTurret_Parms;
	memcpy ( &InitTurret_Parms.InitRot, &InitRot, 0xC );
	InitTurret_Parms.SkelComp = SkelComp;

	pFnInitTurret->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitTurret, &InitTurret_Parms, NULL );

	pFnInitTurret->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTSkelControl_TurretConstrained.OnTurretStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsMoving                      ( CPF_Parm )

void UUTSkelControl_TurretConstrained::OnTurretStatusChange ( unsigned long bIsMoving )
{
	static UFunction* pFnOnTurretStatusChange = NULL;

	if ( ! pFnOnTurretStatusChange )
		pFnOnTurretStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 40394 ];

	UUTSkelControl_TurretConstrained_execOnTurretStatusChange_Parms OnTurretStatusChange_Parms;
	OnTurretStatusChange_Parms.bIsMoving = bIsMoving;

	this->ProcessEvent ( pFnOnTurretStatusChange, &OnTurretStatusChange_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.ApplyWeaponEffects
// [0x00024100] 
// Parameters infos:
// int                            OverlayFlags                   ( CPF_Parm )
// int                            SeatIndex                      ( CPF_OptionalParm | CPF_Parm )

void AUTVehicleBase::ApplyWeaponEffects ( int OverlayFlags, int SeatIndex )
{
	static UFunction* pFnApplyWeaponEffects = NULL;

	if ( ! pFnApplyWeaponEffects )
		pFnApplyWeaponEffects = (UFunction*) UObject::GObjObjects()->Data[ 39136 ];

	AUTVehicleBase_execApplyWeaponEffects_Parms ApplyWeaponEffects_Parms;
	ApplyWeaponEffects_Parms.OverlayFlags = OverlayFlags;
	ApplyWeaponEffects_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnApplyWeaponEffects, &ApplyWeaponEffects_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.QuickPick
// [0x00020100] 
// Parameters infos:
// int                            Quad                           ( CPF_Parm )

void AUTVehicleBase::QuickPick ( int Quad )
{
	static UFunction* pFnQuickPick = NULL;

	if ( ! pFnQuickPick )
		pFnQuickPick = (UFunction*) UObject::GObjObjects()->Data[ 39134 ];

	AUTVehicleBase_execQuickPick_Parms QuickPick_Parms;
	QuickPick_Parms.Quad = Quad;

	this->ProcessEvent ( pFnQuickPick, &QuickPick_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.DisplayHud
// [0x00024000] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector2D               HudPOS                         ( CPF_Parm )
// int                            SIndex                         ( CPF_OptionalParm | CPF_Parm )

void AUTVehicleBase::DisplayHud ( class AHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SIndex )
{
	static UFunction* pFnDisplayHud = NULL;

	if ( ! pFnDisplayHud )
		pFnDisplayHud = (UFunction*) UObject::GObjObjects()->Data[ 39129 ];

	AUTVehicleBase_execDisplayHud_Parms DisplayHud_Parms;
	DisplayHud_Parms.HUD = HUD;
	DisplayHud_Parms.Canvas = Canvas;
	memcpy ( &DisplayHud_Parms.HudPOS, &HudPOS, 0x8 );
	DisplayHud_Parms.SIndex = SIndex;

	this->ProcessEvent ( pFnDisplayHud, &DisplayHud_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.GetPowerLevel
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          PowerLevel                     ( CPF_Parm | CPF_OutParm )

bool AUTVehicleBase::GetPowerLevel ( float* PowerLevel )
{
	static UFunction* pFnGetPowerLevel = NULL;

	if ( ! pFnGetPowerLevel )
		pFnGetPowerLevel = (UFunction*) UObject::GObjObjects()->Data[ 39126 ];

	AUTVehicleBase_execGetPowerLevel_Parms GetPowerLevel_Parms;

	this->ProcessEvent ( pFnGetPowerLevel, &GetPowerLevel_Parms, NULL );

	if ( PowerLevel )
		*PowerLevel = GetPowerLevel_Parms.PowerLevel;

	return GetPowerLevel_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.HandleDeadVehicleDriver
// [0x00020002] 
// Parameters infos:

void AUTVehicleBase::HandleDeadVehicleDriver ( )
{
	static UFunction* pFnHandleDeadVehicleDriver = NULL;

	if ( ! pFnHandleDeadVehicleDriver )
		pFnHandleDeadVehicleDriver = (UFunction*) UObject::GObjObjects()->Data[ 39121 ];

	AUTVehicleBase_execHandleDeadVehicleDriver_Parms HandleDeadVehicleDriver_Parms;

	this->ProcessEvent ( pFnHandleDeadVehicleDriver, &HandleDeadVehicleDriver_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.DetachDriver
// [0x00020102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTVehicleBase::DetachDriver ( class APawn* P )
{
	static UFunction* pFnDetachDriver = NULL;

	if ( ! pFnDetachDriver )
		pFnDetachDriver = (UFunction*) UObject::GObjObjects()->Data[ 39119 ];

	AUTVehicleBase_execDetachDriver_Parms DetachDriver_Parms;
	DetachDriver_Parms.P = P;

	this->ProcessEvent ( pFnDetachDriver, &DetachDriver_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.StopFiringWeapon
// [0x00020102] 
// Parameters infos:

void AUTVehicleBase::StopFiringWeapon ( )
{
	static UFunction* pFnStopFiringWeapon = NULL;

	if ( ! pFnStopFiringWeapon )
		pFnStopFiringWeapon = (UFunction*) UObject::GObjObjects()->Data[ 39118 ];

	AUTVehicleBase_execStopFiringWeapon_Parms StopFiringWeapon_Parms;

	this->ProcessEvent ( pFnStopFiringWeapon, &StopFiringWeapon_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.EjectDriver
// [0x00820002] 
// Parameters infos:

void AUTVehicleBase::EjectDriver ( )
{
	static UFunction* pFnEjectDriver = NULL;

	if ( ! pFnEjectDriver )
		pFnEjectDriver = (UFunction*) UObject::GObjObjects()->Data[ 39115 ];

	AUTVehicleBase_execEjectDriver_Parms EjectDriver_Parms;

	this->ProcessEvent ( pFnEjectDriver, &EjectDriver_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.DriverLeft
// [0x00020002] 
// Parameters infos:

void AUTVehicleBase::DriverLeft ( )
{
	static UFunction* pFnDriverLeft = NULL;

	if ( ! pFnDriverLeft )
		pFnDriverLeft = (UFunction*) UObject::GObjObjects()->Data[ 39113 ];

	AUTVehicleBase_execDriverLeft_Parms DriverLeft_Parms;

	this->ProcessEvent ( pFnDriverLeft, &DriverLeft_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.DriverEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicleBase::DriverEnter ( class APawn* P )
{
	static UFunction* pFnDriverEnter = NULL;

	if ( ! pFnDriverEnter )
		pFnDriverEnter = (UFunction*) UObject::GObjObjects()->Data[ 39109 ];

	AUTVehicleBase_execDriverEnter_Parms DriverEnter_Parms;
	DriverEnter_Parms.P = P;

	this->ProcessEvent ( pFnDriverEnter, &DriverEnter_Parms, NULL );

	return DriverEnter_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.DrivingStatusChanged
// [0x00020102] 
// Parameters infos:

void AUTVehicleBase::DrivingStatusChanged ( )
{
	static UFunction* pFnDrivingStatusChanged = NULL;

	if ( ! pFnDrivingStatusChanged )
		pFnDrivingStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 39108 ];

	AUTVehicleBase_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

	this->ProcessEvent ( pFnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.GetVehicleDrivingStatName
// [0x00020002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName AUTVehicleBase::GetVehicleDrivingStatName ( )
{
	static UFunction* pFnGetVehicleDrivingStatName = NULL;

	if ( ! pFnGetVehicleDrivingStatName )
		pFnGetVehicleDrivingStatName = (UFunction*) UObject::GObjObjects()->Data[ 39105 ];

	AUTVehicleBase_execGetVehicleDrivingStatName_Parms GetVehicleDrivingStatName_Parms;

	this->ProcessEvent ( pFnGetVehicleDrivingStatName, &GetVehicleDrivingStatName_Parms, NULL );

	return GetVehicleDrivingStatName_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.NeedToTurn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 targ                           ( CPF_Parm )

bool AUTVehicleBase::NeedToTurn ( struct FVector targ )
{
	static UFunction* pFnNeedToTurn = NULL;

	if ( ! pFnNeedToTurn )
		pFnNeedToTurn = (UFunction*) UObject::GObjObjects()->Data[ 39099 ];

	AUTVehicleBase_execNeedToTurn_Parms NeedToTurn_Parms;
	memcpy ( &NeedToTurn_Parms.targ, &targ, 0xC );

	this->ProcessEvent ( pFnNeedToTurn, &NeedToTurn_Parms, NULL );

	return NeedToTurn_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.GetDamageScaling
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTVehicleBase::GetDamageScaling ( )
{
	static UFunction* pFnGetDamageScaling = NULL;

	if ( ! pFnGetDamageScaling )
		pFnGetDamageScaling = (UFunction*) UObject::GObjObjects()->Data[ 39097 ];

	AUTVehicleBase_execGetDamageScaling_Parms GetDamageScaling_Parms;

	this->ProcessEvent ( pFnGetDamageScaling, &GetDamageScaling_Parms, NULL );

	return GetDamageScaling_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.BotFire
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bFinished                      ( CPF_Parm )

bool AUTVehicleBase::BotFire ( unsigned long bFinished )
{
	static UFunction* pFnBotFire = NULL;

	if ( ! pFnBotFire )
		pFnBotFire = (UFunction*) UObject::GObjObjects()->Data[ 39094 ];

	AUTVehicleBase_execBotFire_Parms BotFire_Parms;
	BotFire_Parms.bFinished = bFinished;

	this->ProcessEvent ( pFnBotFire, &BotFire_Parms, NULL );

	return BotFire_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.ChooseFireMode
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUTVehicleBase::ChooseFireMode ( )
{
	static UFunction* pFnChooseFireMode = NULL;

	if ( ! pFnChooseFireMode )
		pFnChooseFireMode = (UFunction*) UObject::GObjObjects()->Data[ 39092 ];

	AUTVehicleBase_execChooseFireMode_Parms ChooseFireMode_Parms;

	this->ProcessEvent ( pFnChooseFireMode, &ChooseFireMode_Parms, NULL );

	return ChooseFireMode_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleBase.ServerChangeSeat
// [0x002200C0] 
// Parameters infos:
// int                            RequestedSeat                  ( CPF_Parm )

void AUTVehicleBase::ServerChangeSeat ( int RequestedSeat )
{
	static UFunction* pFnServerChangeSeat = NULL;

	if ( ! pFnServerChangeSeat )
		pFnServerChangeSeat = (UFunction*) UObject::GObjObjects()->Data[ 39090 ];

	AUTVehicleBase_execServerChangeSeat_Parms ServerChangeSeat_Parms;
	ServerChangeSeat_Parms.RequestedSeat = RequestedSeat;

	this->ProcessEvent ( pFnServerChangeSeat, &ServerChangeSeat_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.ServerAdjacentSeat
// [0x002200C0] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

void AUTVehicleBase::ServerAdjacentSeat ( int Direction, class AController* C )
{
	static UFunction* pFnServerAdjacentSeat = NULL;

	if ( ! pFnServerAdjacentSeat )
		pFnServerAdjacentSeat = (UFunction*) UObject::GObjObjects()->Data[ 39087 ];

	AUTVehicleBase_execServerAdjacentSeat_Parms ServerAdjacentSeat_Parms;
	ServerAdjacentSeat_Parms.Direction = Direction;
	ServerAdjacentSeat_Parms.C = C;

	this->ProcessEvent ( pFnServerAdjacentSeat, &ServerAdjacentSeat_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.AdjacentSeat
// [0x00020102] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

void AUTVehicleBase::AdjacentSeat ( int Direction, class AController* C )
{
	static UFunction* pFnAdjacentSeat = NULL;

	if ( ! pFnAdjacentSeat )
		pFnAdjacentSeat = (UFunction*) UObject::GObjObjects()->Data[ 39084 ];

	AUTVehicleBase_execAdjacentSeat_Parms AdjacentSeat_Parms;
	AdjacentSeat_Parms.Direction = Direction;
	AdjacentSeat_Parms.C = C;

	this->ProcessEvent ( pFnAdjacentSeat, &AdjacentSeat_Parms, NULL );
};

// Function GridVehicle.UTVehicleBase.SwitchWeapon
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewGroup                       ( CPF_Parm )

void AUTVehicleBase::SwitchWeapon ( unsigned char NewGroup )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 39082 ];

	AUTVehicleBase_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DetachTowCable
// [0x00020000] 
// Parameters infos:

void AUTVehicle::DetachTowCable ( )
{
	static UFunction* pFnDetachTowCable = NULL;

	if ( ! pFnDetachTowCable )
		pFnDetachTowCable = (UFunction*) UObject::GObjObjects()->Data[ 40283 ];

	AUTVehicle_execDetachTowCable_Parms DetachTowCable_Parms;

	this->ProcessEvent ( pFnDetachTowCable, &DetachTowCable_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetTowedVehicles
// [0x00420002] 
// Parameters infos:
// TArray< class AUTVehicle* >    TowedVehicles                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AUTVehicle::GetTowedVehicles ( TArray< class AUTVehicle* >* TowedVehicles )
{
	static UFunction* pFnGetTowedVehicles = NULL;

	if ( ! pFnGetTowedVehicles )
		pFnGetTowedVehicles = (UFunction*) UObject::GObjObjects()->Data[ 40279 ];

	AUTVehicle_execGetTowedVehicles_Parms GetTowedVehicles_Parms;

	this->ProcessEvent ( pFnGetTowedVehicles, &GetTowedVehicles_Parms, NULL );

	if ( TowedVehicles )
		memcpy ( TowedVehicles, &GetTowedVehicles_Parms.TowedVehicles, 0xC );
};

// Function GridVehicle.UTVehicle.GetTowingVehicle
// [0x00020000] 
// Parameters infos:
// class AUTVehicle*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AUTVehicle* AUTVehicle::GetTowingVehicle ( )
{
	static UFunction* pFnGetTowingVehicle = NULL;

	if ( ! pFnGetTowingVehicle )
		pFnGetTowingVehicle = (UFunction*) UObject::GObjObjects()->Data[ 40277 ];

	AUTVehicle_execGetTowingVehicle_Parms GetTowingVehicle_Parms;

	this->ProcessEvent ( pFnGetTowingVehicle, &GetTowingVehicle_Parms, NULL );

	return GetTowingVehicle_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.OnTouchForcedDirVolume
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AForcedDirVolume*        Vol                            ( CPF_Parm )

bool AUTVehicle::OnTouchForcedDirVolume ( class AForcedDirVolume* Vol )
{
	static UFunction* pFnOnTouchForcedDirVolume = NULL;

	if ( ! pFnOnTouchForcedDirVolume )
		pFnOnTouchForcedDirVolume = (UFunction*) UObject::GObjObjects()->Data[ 39068 ];

	AUTVehicle_execOnTouchForcedDirVolume_Parms OnTouchForcedDirVolume_Parms;
	OnTouchForcedDirVolume_Parms.Vol = Vol;

	this->ProcessEvent ( pFnOnTouchForcedDirVolume, &OnTouchForcedDirVolume_Parms, NULL );

	return OnTouchForcedDirVolume_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ApplyWeaponEffects
// [0x00024102] 
// Parameters infos:
// int                            OverlayFlags                   ( CPF_Parm )
// int                            SeatIndex                      ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::ApplyWeaponEffects ( int OverlayFlags, int SeatIndex )
{
	static UFunction* pFnApplyWeaponEffects = NULL;

	if ( ! pFnApplyWeaponEffects )
		pFnApplyWeaponEffects = (UFunction*) UObject::GObjObjects()->Data[ 40271 ];

	AUTVehicle_execApplyWeaponEffects_Parms ApplyWeaponEffects_Parms;
	ApplyWeaponEffects_Parms.OverlayFlags = OverlayFlags;
	ApplyWeaponEffects_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnApplyWeaponEffects, &ApplyWeaponEffects_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetVehicleKillStatName
// [0x00020002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName AUTVehicle::GetVehicleKillStatName ( )
{
	static UFunction* pFnGetVehicleKillStatName = NULL;

	if ( ! pFnGetVehicleKillStatName )
		pFnGetVehicleKillStatName = (UFunction*) UObject::GObjObjects()->Data[ 40268 ];

	AUTVehicle_execGetVehicleKillStatName_Parms GetVehicleKillStatName_Parms;

	this->ProcessEvent ( pFnGetVehicleKillStatName, &GetVehicleKillStatName_Parms, NULL );

	return GetVehicleKillStatName_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.CanAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AUTVehicle::CanAttack ( class AActor* Other )
{
	static UFunction* pFnCanAttack = NULL;

	if ( ! pFnCanAttack )
		pFnCanAttack = (UFunction*) UObject::GObjObjects()->Data[ 40263 ];

	AUTVehicle_execCanAttack_Parms CanAttack_Parms;
	CanAttack_Parms.Other = Other;

	this->ProcessEvent ( pFnCanAttack, &CanAttack_Parms, NULL );

	return CanAttack_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetAlternateLockTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* AUTVehicle::GetAlternateLockTarget ( )
{
	static UFunction* pFnGetAlternateLockTarget = NULL;

	if ( ! pFnGetAlternateLockTarget )
		pFnGetAlternateLockTarget = (UFunction*) UObject::GObjObjects()->Data[ 40261 ];

	AUTVehicle_execGetAlternateLockTarget_Parms GetAlternateLockTarget_Parms;

	pFnGetAlternateLockTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAlternateLockTarget, &GetAlternateLockTarget_Parms, NULL );

	pFnGetAlternateLockTarget->FunctionFlags |= 0x400;

	return GetAlternateLockTarget_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.DetachDriver
// [0x00020102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTVehicle::DetachDriver ( class APawn* P )
{
	static UFunction* pFnDetachDriver = NULL;

	if ( ! pFnDetachDriver )
		pFnDetachDriver = (UFunction*) UObject::GObjObjects()->Data[ 40259 ];

	AUTVehicle_execDetachDriver_Parms DetachDriver_Parms;
	DetachDriver_Parms.P = P;

	this->ProcessEvent ( pFnDetachDriver, &DetachDriver_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetMovementEffect
// [0x00024102] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// unsigned long                  bSetActive                     ( CPF_Parm )
// class APawn*                   UTP                            ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::SetMovementEffect ( int SeatIndex, unsigned long bSetActive, class APawn* UTP )
{
	static UFunction* pFnSetMovementEffect = NULL;

	if ( ! pFnSetMovementEffect )
		pFnSetMovementEffect = (UFunction*) UObject::GObjObjects()->Data[ 40253 ];

	AUTVehicle_execSetMovementEffect_Parms SetMovementEffect_Parms;
	SetMovementEffect_Parms.SeatIndex = SeatIndex;
	SetMovementEffect_Parms.bSetActive = bSetActive;
	SetMovementEffect_Parms.UTP = UTP;

	this->ProcessEvent ( pFnSetMovementEffect, &SetMovementEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetSeatStoragePawn
// [0x00020002] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// class APawn*                   PawnToSit                      ( CPF_Parm )

void AUTVehicle::SetSeatStoragePawn ( int SeatIndex, class APawn* PawnToSit )
{
	static UFunction* pFnSetSeatStoragePawn = NULL;

	if ( ! pFnSetSeatStoragePawn )
		pFnSetSeatStoragePawn = (UFunction*) UObject::GObjObjects()->Data[ 40249 ];

	AUTVehicle_execSetSeatStoragePawn_Parms SetSeatStoragePawn_Parms;
	SetSeatStoragePawn_Parms.SeatIndex = SeatIndex;
	SetSeatStoragePawn_Parms.PawnToSit = PawnToSit;

	this->ProcessEvent ( pFnSetSeatStoragePawn, &SetSeatStoragePawn_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetHoverBoardAttachPoint
// [0x00820102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HoverBoardLocation             ( CPF_Parm )

struct FName AUTVehicle::GetHoverBoardAttachPoint ( struct FVector HoverBoardLocation )
{
	static UFunction* pFnGetHoverBoardAttachPoint = NULL;

	if ( ! pFnGetHoverBoardAttachPoint )
		pFnGetHoverBoardAttachPoint = (UFunction*) UObject::GObjObjects()->Data[ 40241 ];

	AUTVehicle_execGetHoverBoardAttachPoint_Parms GetHoverBoardAttachPoint_Parms;
	memcpy ( &GetHoverBoardAttachPoint_Parms.HoverBoardLocation, &HoverBoardLocation, 0xC );

	this->ProcessEvent ( pFnGetHoverBoardAttachPoint, &GetHoverBoardAttachPoint_Parms, NULL );

	return GetHoverBoardAttachPoint_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SetHoverBoardAttachPointInUse
// [0x00020102] 
// Parameters infos:
// struct FName                   PointName                      ( CPF_Parm )
// unsigned long                  bInUse                         ( CPF_Parm )

void AUTVehicle::SetHoverBoardAttachPointInUse ( struct FName PointName, unsigned long bInUse )
{
	static UFunction* pFnSetHoverBoardAttachPointInUse = NULL;

	if ( ! pFnSetHoverBoardAttachPointInUse )
		pFnSetHoverBoardAttachPointInUse = (UFunction*) UObject::GObjObjects()->Data[ 40236 ];

	AUTVehicle_execSetHoverBoardAttachPointInUse_Parms SetHoverBoardAttachPointInUse_Parms;
	memcpy ( &SetHoverBoardAttachPointInUse_Parms.PointName, &PointName, 0x8 );
	SetHoverBoardAttachPointInUse_Parms.bInUse = bInUse;

	this->ProcessEvent ( pFnSetHoverBoardAttachPointInUse, &SetHoverBoardAttachPointInUse_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetShieldActive
// [0x00020000] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// unsigned long                  bActive                        ( CPF_Parm )

void AUTVehicle::SetShieldActive ( int SeatIndex, unsigned long bActive )
{
	static UFunction* pFnSetShieldActive = NULL;

	if ( ! pFnSetShieldActive )
		pFnSetShieldActive = (UFunction*) UObject::GObjObjects()->Data[ 40233 ];

	AUTVehicle_execSetShieldActive_Parms SetShieldActive_Parms;
	SetShieldActive_Parms.SeatIndex = SeatIndex;
	SetShieldActive_Parms.bActive = bActive;

	this->ProcessEvent ( pFnSetShieldActive, &SetShieldActive_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetSVehicleDebug
// [0x00420102] 
// Parameters infos:
// TArray< struct FString >       DebugInfo                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AUTVehicle::GetSVehicleDebug ( TArray< struct FString >* DebugInfo )
{
	static UFunction* pFnGetSVehicleDebug = NULL;

	if ( ! pFnGetSVehicleDebug )
		pFnGetSVehicleDebug = (UFunction*) UObject::GObjObjects()->Data[ 40229 ];

	AUTVehicle_execGetSVehicleDebug_Parms GetSVehicleDebug_Parms;

	this->ProcessEvent ( pFnGetSVehicleDebug, &GetSVehicleDebug_Parms, NULL );

	if ( DebugInfo )
		memcpy ( DebugInfo, &GetSVehicleDebug_Parms.DebugInfo, 0xC );
};

// Function GridVehicle.UTVehicle.MorphTargetDestroyed
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// int                            MorphNodeIndex                 ( CPF_Parm )

void AUTVehicle::eventMorphTargetDestroyed ( int MorphNodeIndex )
{
	static UFunction* pFnMorphTargetDestroyed = NULL;

	if ( ! pFnMorphTargetDestroyed )
		pFnMorphTargetDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 40227 ];

	AUTVehicle_eventMorphTargetDestroyed_Parms MorphTargetDestroyed_Parms;
	MorphTargetDestroyed_Parms.MorphNodeIndex = MorphNodeIndex;

	this->ProcessEvent ( pFnMorphTargetDestroyed, &MorphTargetDestroyed_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ApplyRandomMorphDamage
// [0x00020102] 
// Parameters infos:
// int                            Amount                         ( CPF_Parm )

void AUTVehicle::ApplyRandomMorphDamage ( int Amount )
{
	static UFunction* pFnApplyRandomMorphDamage = NULL;

	if ( ! pFnApplyRandomMorphDamage )
		pFnApplyRandomMorphDamage = (UFunction*) UObject::GObjObjects()->Data[ 40220 ];

	AUTVehicle_execApplyRandomMorphDamage_Parms ApplyRandomMorphDamage_Parms;
	ApplyRandomMorphDamage_Parms.Amount = Amount;

	this->ProcessEvent ( pFnApplyRandomMorphDamage, &ApplyRandomMorphDamage_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ApplyMorphHeal
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// int                            Amount                         ( CPF_Parm )

void AUTVehicle::eventApplyMorphHeal ( int Amount )
{
	static UFunction* pFnApplyMorphHeal = NULL;

	if ( ! pFnApplyMorphHeal )
		pFnApplyMorphHeal = (UFunction*) UObject::GObjObjects()->Data[ 40210 ];

	AUTVehicle_eventApplyMorphHeal_Parms ApplyMorphHeal_Parms;
	ApplyMorphHeal_Parms.Amount = Amount;

	this->ProcessEvent ( pFnApplyMorphHeal, &ApplyMorphHeal_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ReceivedHealthChange
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventReceivedHealthChange ( )
{
	static UFunction* pFnReceivedHealthChange = NULL;

	if ( ! pFnReceivedHealthChange )
		pFnReceivedHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 40208 ];

	AUTVehicle_eventReceivedHealthChange_Parms ReceivedHealthChange_Parms;

	this->ProcessEvent ( pFnReceivedHealthChange, &ReceivedHealthChange_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ApplyMorphDamage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void AUTVehicle::ApplyMorphDamage ( struct FVector HitLocation, int Damage, struct FVector Momentum )
{
	static UFunction* pFnApplyMorphDamage = NULL;

	if ( ! pFnApplyMorphDamage )
		pFnApplyMorphDamage = (UFunction*) UObject::GObjObjects()->Data[ 40204 ];

	AUTVehicle_execApplyMorphDamage_Parms ApplyMorphDamage_Parms;
	memcpy ( &ApplyMorphDamage_Parms.HitLocation, &HitLocation, 0xC );
	ApplyMorphDamage_Parms.Damage = Damage;
	memcpy ( &ApplyMorphDamage_Parms.Momentum, &Momentum, 0xC );

	pFnApplyMorphDamage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnApplyMorphDamage, &ApplyMorphDamage_Parms, NULL );

	pFnApplyMorphDamage->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTVehicle.UpdateDamageMaterial
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AUTVehicle::UpdateDamageMaterial ( )
{
	static UFunction* pFnUpdateDamageMaterial = NULL;

	if ( ! pFnUpdateDamageMaterial )
		pFnUpdateDamageMaterial = (UFunction*) UObject::GObjObjects()->Data[ 40203 ];

	AUTVehicle_execUpdateDamageMaterial_Parms UpdateDamageMaterial_Parms;

	pFnUpdateDamageMaterial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDamageMaterial, &UpdateDamageMaterial_Parms, NULL );

	pFnUpdateDamageMaterial->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTVehicle.InitDamageSkel
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AUTVehicle::InitDamageSkel ( )
{
	static UFunction* pFnInitDamageSkel = NULL;

	if ( ! pFnInitDamageSkel )
		pFnInitDamageSkel = (UFunction*) UObject::GObjObjects()->Data[ 40202 ];

	AUTVehicle_execInitDamageSkel_Parms InitDamageSkel_Parms;

	pFnInitDamageSkel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitDamageSkel, &InitDamageSkel_Parms, NULL );

	pFnInitDamageSkel->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTVehicle.InitializeMorphs
// [0x00020102] 
// Parameters infos:

void AUTVehicle::InitializeMorphs ( )
{
	static UFunction* pFnInitializeMorphs = NULL;

	if ( ! pFnInitializeMorphs )
		pFnInitializeMorphs = (UFunction*) UObject::GObjObjects()->Data[ 40199 ];

	AUTVehicle_execInitializeMorphs_Parms InitializeMorphs_Parms;

	this->ProcessEvent ( pFnInitializeMorphs, &InitializeMorphs_Parms, NULL );
};

// Function GridVehicle.UTVehicle.RBPenetrationDestroy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventRBPenetrationDestroy ( )
{
	static UFunction* pFnRBPenetrationDestroy = NULL;

	if ( ! pFnRBPenetrationDestroy )
		pFnRBPenetrationDestroy = (UFunction*) UObject::GObjObjects()->Data[ 40198 ];

	AUTVehicle_eventRBPenetrationDestroy_Parms RBPenetrationDestroy_Parms;

	this->ProcessEvent ( pFnRBPenetrationDestroy, &RBPenetrationDestroy_Parms, NULL );
};

// Function GridVehicle.UTVehicle.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     HitComponent                   ( CPF_Parm | CPF_EditInline )
// class UPrimitiveComponent*     OtherComponent                 ( CPF_Parm | CPF_EditInline )
// int                            ContactIndex                   ( CPF_Parm )
// struct FCollisionImpactData    Collision                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AUTVehicle::eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision )
{
	static UFunction* pFnRigidBodyCollision = NULL;

	if ( ! pFnRigidBodyCollision )
		pFnRigidBodyCollision = (UFunction*) UObject::GObjObjects()->Data[ 40142 ];

	AUTVehicle_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
	RigidBodyCollision_Parms.HitComponent = HitComponent;
	RigidBodyCollision_Parms.OtherComponent = OtherComponent;
	RigidBodyCollision_Parms.ContactIndex = ContactIndex;

	this->ProcessEvent ( pFnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

	if ( Collision )
		memcpy ( Collision, &RigidBodyCollision_Parms.Collision, 0x24 );
};

// Function GridVehicle.UTVehicle.GetCollisionDamageModifier
// [0x00C20002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FRigidBodyContactInfo > ContactInfos                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

float AUTVehicle::GetCollisionDamageModifier ( TArray< struct FRigidBodyContactInfo >* ContactInfos )
{
	static UFunction* pFnGetCollisionDamageModifier = NULL;

	if ( ! pFnGetCollisionDamageModifier )
		pFnGetCollisionDamageModifier = (UFunction*) UObject::GObjObjects()->Data[ 40183 ];

	AUTVehicle_execGetCollisionDamageModifier_Parms GetCollisionDamageModifier_Parms;

	this->ProcessEvent ( pFnGetCollisionDamageModifier, &GetCollisionDamageModifier_Parms, NULL );

	if ( ContactInfos )
		memcpy ( ContactInfos, &GetCollisionDamageModifier_Parms.ContactInfos, 0xC );

	return GetCollisionDamageModifier_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetHealth
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

int AUTVehicle::GetHealth ( int SeatIndex )
{
	static UFunction* pFnGetHealth = NULL;

	if ( ! pFnGetHealth )
		pFnGetHealth = (UFunction*) UObject::GObjObjects()->Data[ 40180 ];

	AUTVehicle_execGetHealth_Parms GetHealth_Parms;
	GetHealth_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetHealth, &GetHealth_Parms, NULL );

	return GetHealth_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.OnPropertyChange
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FName                   PropName                       ( CPF_Parm )

void AUTVehicle::eventOnPropertyChange ( struct FName PropName )
{
	static UFunction* pFnOnPropertyChange = NULL;

	if ( ! pFnOnPropertyChange )
		pFnOnPropertyChange = (UFunction*) UObject::GObjObjects()->Data[ 40177 ];

	AUTVehicle_eventOnPropertyChange_Parms OnPropertyChange_Parms;
	memcpy ( &OnPropertyChange_Parms.PropName, &PropName, 0x8 );

	this->ProcessEvent ( pFnOnPropertyChange, &OnPropertyChange_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetHumanReadableName
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AUTVehicle::GetHumanReadableName ( )
{
	static UFunction* pFnGetHumanReadableName = NULL;

	if ( ! pFnGetHumanReadableName )
		pFnGetHumanReadableName = (UFunction*) UObject::GObjObjects()->Data[ 40175 ];

	AUTVehicle_execGetHumanReadableName_Parms GetHumanReadableName_Parms;

	this->ProcessEvent ( pFnGetHumanReadableName, &GetHumanReadableName_Parms, NULL );

	return GetHumanReadableName_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SitDriver
// [0x00020102] 
// Parameters infos:
// class APawn*                   UTP                            ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::SitDriver ( class APawn* UTP, int SeatIndex )
{
	static UFunction* pFnSitDriver = NULL;

	if ( ! pFnSitDriver )
		pFnSitDriver = (UFunction*) UObject::GObjObjects()->Data[ 40172 ];

	AUTVehicle_execSitDriver_Parms SitDriver_Parms;
	SitDriver_Parms.UTP = UTP;
	SitDriver_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnSitDriver, &SitDriver_Parms, NULL );
};

// Function GridVehicle.UTVehicle.AttachDriver
// [0x00020102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTVehicle::AttachDriver ( class APawn* P )
{
	static UFunction* pFnAttachDriver = NULL;

	if ( ! pFnAttachDriver )
		pFnAttachDriver = (UFunction*) UObject::GObjObjects()->Data[ 40169 ];

	AUTVehicle_execAttachDriver_Parms AttachDriver_Parms;
	AttachDriver_Parms.P = P;

	this->ProcessEvent ( pFnAttachDriver, &AttachDriver_Parms, NULL );
};

// Function GridVehicle.UTVehicle.CheckDamageSmoke
// [0x00020102] 
// Parameters infos:

void AUTVehicle::CheckDamageSmoke ( )
{
	static UFunction* pFnCheckDamageSmoke = NULL;

	if ( ! pFnCheckDamageSmoke )
		pFnCheckDamageSmoke = (UFunction*) UObject::GObjObjects()->Data[ 40168 ];

	AUTVehicle_execCheckDamageSmoke_Parms CheckDamageSmoke_Parms;

	this->ProcessEvent ( pFnCheckDamageSmoke, &CheckDamageSmoke_Parms, NULL );
};

// Function GridVehicle.UTVehicle.StopVehicleSounds
// [0x00020102] 
// Parameters infos:

void AUTVehicle::StopVehicleSounds ( )
{
	static UFunction* pFnStopVehicleSounds = NULL;

	if ( ! pFnStopVehicleSounds )
		pFnStopVehicleSounds = (UFunction*) UObject::GObjObjects()->Data[ 40166 ];

	AUTVehicle_execStopVehicleSounds_Parms StopVehicleSounds_Parms;

	this->ProcessEvent ( pFnStopVehicleSounds, &StopVehicleSounds_Parms, NULL );
};

// Function GridVehicle.UTVehicle.TurretExplosion
// [0x00820102] 
// Parameters infos:

void AUTVehicle::TurretExplosion ( )
{
	static UFunction* pFnTurretExplosion = NULL;

	if ( ! pFnTurretExplosion )
		pFnTurretExplosion = (UFunction*) UObject::GObjObjects()->Data[ 40163 ];

	AUTVehicle_execTurretExplosion_Parms TurretExplosion_Parms;

	this->ProcessEvent ( pFnTurretExplosion, &TurretExplosion_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ShouldSpawnExplosionLight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool AUTVehicle::ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnShouldSpawnExplosionLight = NULL;

	if ( ! pFnShouldSpawnExplosionLight )
		pFnShouldSpawnExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 40092 ];

	AUTVehicle_execShouldSpawnExplosionLight_Parms ShouldSpawnExplosionLight_Parms;
	memcpy ( &ShouldSpawnExplosionLight_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ShouldSpawnExplosionLight_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnShouldSpawnExplosionLight, &ShouldSpawnExplosionLight_Parms, NULL );

	return ShouldSpawnExplosionLight_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SetBurnOut
// [0x00820102] 
// Parameters infos:

void AUTVehicle::SetBurnOut ( )
{
	static UFunction* pFnSetBurnOut = NULL;

	if ( ! pFnSetBurnOut )
		pFnSetBurnOut = (UFunction*) UObject::GObjObjects()->Data[ 40087 ];

	AUTVehicle_execSetBurnOut_Parms SetBurnOut_Parms;

	this->ProcessEvent ( pFnSetBurnOut, &SetBurnOut_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DisableCollision
// [0x00020102] 
// Parameters infos:

void AUTVehicle::DisableCollision ( )
{
	static UFunction* pFnDisableCollision = NULL;

	if ( ! pFnDisableCollision )
		pFnDisableCollision = (UFunction*) UObject::GObjObjects()->Data[ 40086 ];

	AUTVehicle_execDisableCollision_Parms DisableCollision_Parms;

	this->ProcessEvent ( pFnDisableCollision, &DisableCollision_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DisableDamageSmoke
// [0x00020102] 
// Parameters infos:

void AUTVehicle::DisableDamageSmoke ( )
{
	static UFunction* pFnDisableDamageSmoke = NULL;

	if ( ! pFnDisableDamageSmoke )
		pFnDisableDamageSmoke = (UFunction*) UObject::GObjObjects()->Data[ 40085 ];

	AUTVehicle_execDisableDamageSmoke_Parms DisableDamageSmoke_Parms;

	this->ProcessEvent ( pFnDisableDamageSmoke, &DisableDamageSmoke_Parms, NULL );
};

// Function GridVehicle.UTVehicle.TurnOffShadows
// [0x00020102] 
// Parameters infos:

void AUTVehicle::TurnOffShadows ( )
{
	static UFunction* pFnTurnOffShadows = NULL;

	if ( ! pFnTurnOffShadows )
		pFnTurnOffShadows = (UFunction*) UObject::GObjObjects()->Data[ 40084 ];

	AUTVehicle_execTurnOffShadows_Parms TurnOffShadows_Parms;

	this->ProcessEvent ( pFnTurnOffShadows, &TurnOffShadows_Parms, NULL );
};

// Function GridVehicle.UTVehicle.StartBurnOut
// [0x00020102] 
// Parameters infos:

void AUTVehicle::StartBurnOut ( )
{
	static UFunction* pFnStartBurnOut = NULL;

	if ( ! pFnStartBurnOut )
		pFnStartBurnOut = (UFunction*) UObject::GObjObjects()->Data[ 40081 ];

	AUTVehicle_execStartBurnOut_Parms StartBurnOut_Parms;

	this->ProcessEvent ( pFnStartBurnOut, &StartBurnOut_Parms, NULL );
};

// Function GridVehicle.UTVehicle.AdjustCameraScale
// [0x00020100] 
// Parameters infos:
// unsigned long                  bMoveCameraIn                  ( CPF_Parm )

void AUTVehicle::AdjustCameraScale ( unsigned long bMoveCameraIn )
{
	static UFunction* pFnAdjustCameraScale = NULL;

	if ( ! pFnAdjustCameraScale )
		pFnAdjustCameraScale = (UFunction*) UObject::GObjObjects()->Data[ 40079 ];

	AUTVehicle_execAdjustCameraScale_Parms AdjustCameraScale_Parms;
	AdjustCameraScale_Parms.bMoveCameraIn = bMoveCameraIn;

	this->ProcessEvent ( pFnAdjustCameraScale, &AdjustCameraScale_Parms, NULL );
};

// Function GridVehicle.UTVehicle.VehicleCalcCamera
// [0x00C24102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )
// unsigned long                  bPivotOnly                     ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// struct FVector                 CamStart                       ( CPF_Parm | CPF_OutParm )

void AUTVehicle::VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart )
{
	static UFunction* pFnVehicleCalcCamera = NULL;

	if ( ! pFnVehicleCalcCamera )
		pFnVehicleCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 40056 ];

	AUTVehicle_execVehicleCalcCamera_Parms VehicleCalcCamera_Parms;
	VehicleCalcCamera_Parms.DeltaTime = DeltaTime;
	VehicleCalcCamera_Parms.SeatIndex = SeatIndex;
	VehicleCalcCamera_Parms.bPivotOnly = bPivotOnly;

	this->ProcessEvent ( pFnVehicleCalcCamera, &VehicleCalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &VehicleCalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &VehicleCalcCamera_Parms.out_CamRot, 0xC );

	if ( CamStart )
		memcpy ( CamStart, &VehicleCalcCamera_Parms.CamStart, 0xC );
};

// Function GridVehicle.UTVehicle.LimitCameraZ
// [0x00820102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          CurrentCamZ                    ( CPF_Parm )
// float                          OriginalCamZ                   ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

float AUTVehicle::LimitCameraZ ( float CurrentCamZ, float OriginalCamZ, int SeatIndex )
{
	static UFunction* pFnLimitCameraZ = NULL;

	if ( ! pFnLimitCameraZ )
		pFnLimitCameraZ = (UFunction*) UObject::GObjObjects()->Data[ 40049 ];

	AUTVehicle_execLimitCameraZ_Parms LimitCameraZ_Parms;
	LimitCameraZ_Parms.CurrentCamZ = CurrentCamZ;
	LimitCameraZ_Parms.OriginalCamZ = OriginalCamZ;
	LimitCameraZ_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnLimitCameraZ, &LimitCameraZ_Parms, NULL );

	return LimitCameraZ_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetCameraStart
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector AUTVehicle::GetCameraStart ( int SeatIndex )
{
	static UFunction* pFnGetCameraStart = NULL;

	if ( ! pFnGetCameraStart )
		pFnGetCameraStart = (UFunction*) UObject::GObjObjects()->Data[ 40038 ];

	AUTVehicle_execGetCameraStart_Parms GetCameraStart_Parms;
	GetCameraStart_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetCameraStart, &GetCameraStart_Parms, NULL );

	return GetCameraStart_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetCameraFocus
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector AUTVehicle::GetCameraFocus ( int SeatIndex )
{
	static UFunction* pFnGetCameraFocus = NULL;

	if ( ! pFnGetCameraFocus )
		pFnGetCameraFocus = (UFunction*) UObject::GObjObjects()->Data[ 40031 ];

	AUTVehicle_execGetCameraFocus_Parms GetCameraFocus_Parms;
	GetCameraFocus_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetCameraFocus, &GetCameraFocus_Parms, NULL );

	return GetCameraFocus_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AUTVehicle::CalcCamera ( float DeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 40024 ];

	AUTVehicle_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.FindGoodEndView
// [0x00C20102] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// struct FRotator                GoodRotation                   ( CPF_Parm | CPF_OutParm )

void AUTVehicle::FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation )
{
	static UFunction* pFnFindGoodEndView = NULL;

	if ( ! pFnFindGoodEndView )
		pFnFindGoodEndView = (UFunction*) UObject::GObjObjects()->Data[ 40014 ];

	AUTVehicle_execFindGoodEndView_Parms FindGoodEndView_Parms;
	FindGoodEndView_Parms.PC = PC;

	this->ProcessEvent ( pFnFindGoodEndView, &FindGoodEndView_Parms, NULL );

	if ( GoodRotation )
		memcpy ( GoodRotation, &FindGoodEndView_Parms.GoodRotation, 0xC );
};

// Function GridVehicle.UTVehicle.VehicleAdjustFlashLocation
// [0x00024102] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 NewLocation                    ( CPF_Parm )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::VehicleAdjustFlashLocation ( int SeatIndex, unsigned char FireModeNum, struct FVector NewLocation, unsigned long bClear )
{
	static UFunction* pFnVehicleAdjustFlashLocation = NULL;

	if ( ! pFnVehicleAdjustFlashLocation )
		pFnVehicleAdjustFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 40009 ];

	AUTVehicle_execVehicleAdjustFlashLocation_Parms VehicleAdjustFlashLocation_Parms;
	VehicleAdjustFlashLocation_Parms.SeatIndex = SeatIndex;
	VehicleAdjustFlashLocation_Parms.FireModeNum = FireModeNum;
	memcpy ( &VehicleAdjustFlashLocation_Parms.NewLocation, &NewLocation, 0xC );
	VehicleAdjustFlashLocation_Parms.bClear = bClear;

	this->ProcessEvent ( pFnVehicleAdjustFlashLocation, &VehicleAdjustFlashLocation_Parms, NULL );
};

// Function GridVehicle.UTVehicle.VehicleAdjustFlashCount
// [0x00024102] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::VehicleAdjustFlashCount ( int SeatIndex, unsigned char FireModeNum, unsigned long bClear )
{
	static UFunction* pFnVehicleAdjustFlashCount = NULL;

	if ( ! pFnVehicleAdjustFlashCount )
		pFnVehicleAdjustFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 40005 ];

	AUTVehicle_execVehicleAdjustFlashCount_Parms VehicleAdjustFlashCount_Parms;
	VehicleAdjustFlashCount_Parms.SeatIndex = SeatIndex;
	VehicleAdjustFlashCount_Parms.FireModeNum = FireModeNum;
	VehicleAdjustFlashCount_Parms.bClear = bClear;

	this->ProcessEvent ( pFnVehicleAdjustFlashCount, &VehicleAdjustFlashCount_Parms, NULL );
};

// Function GridVehicle.UTVehicle.FindWeaponHitNormal
// [0x00420102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm | CPF_OutParm )

class AActor* AUTVehicle::FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo )
{
	static UFunction* pFnFindWeaponHitNormal = NULL;

	if ( ! pFnFindWeaponHitNormal )
		pFnFindWeaponHitNormal = (UFunction*) UObject::GObjObjects()->Data[ 39998 ];

	AUTVehicle_execFindWeaponHitNormal_Parms FindWeaponHitNormal_Parms;
	memcpy ( &FindWeaponHitNormal_Parms.End, &End, 0xC );
	memcpy ( &FindWeaponHitNormal_Parms.Start, &Start, 0xC );

	this->ProcessEvent ( pFnFindWeaponHitNormal, &FindWeaponHitNormal_Parms, NULL );

	if ( HitLocation )
		memcpy ( HitLocation, &FindWeaponHitNormal_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &FindWeaponHitNormal_Parms.HitNormal, 0xC );

	if ( HitInfo )
		memcpy ( HitInfo, &FindWeaponHitNormal_Parms.HitInfo, 0x1C );

	return FindWeaponHitNormal_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.VehicleWeaponFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex )
{
	static UFunction* pFnVehicleWeaponFireEffects = NULL;

	if ( ! pFnVehicleWeaponFireEffects )
		pFnVehicleWeaponFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 39995 ];

	AUTVehicle_execVehicleWeaponFireEffects_Parms VehicleWeaponFireEffects_Parms;
	memcpy ( &VehicleWeaponFireEffects_Parms.HitLocation, &HitLocation, 0xC );
	VehicleWeaponFireEffects_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnVehicleWeaponFireEffects, &VehicleWeaponFireEffects_Parms, NULL );
};

// Function GridVehicle.UTVehicle.VehicleWeaponStoppedFiring
// [0x00020102] 
// Parameters infos:
// unsigned long                  bViaReplication                ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::VehicleWeaponStoppedFiring ( unsigned long bViaReplication, int SeatIndex )
{
	static UFunction* pFnVehicleWeaponStoppedFiring = NULL;

	if ( ! pFnVehicleWeaponStoppedFiring )
		pFnVehicleWeaponStoppedFiring = (UFunction*) UObject::GObjObjects()->Data[ 39989 ];

	AUTVehicle_execVehicleWeaponStoppedFiring_Parms VehicleWeaponStoppedFiring_Parms;
	VehicleWeaponStoppedFiring_Parms.bViaReplication = bViaReplication;
	VehicleWeaponStoppedFiring_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnVehicleWeaponStoppedFiring, &VehicleWeaponStoppedFiring_Parms, NULL );
};

// Function GridVehicle.UTVehicle.WeaponStoppedFiring
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 InWeapon                       ( CPF_Parm )
// unsigned long                  bViaReplication                ( CPF_Parm )

void AUTVehicle::WeaponStoppedFiring ( class AWeapon* InWeapon, unsigned long bViaReplication )
{
	static UFunction* pFnWeaponStoppedFiring = NULL;

	if ( ! pFnWeaponStoppedFiring )
		pFnWeaponStoppedFiring = (UFunction*) UObject::GObjObjects()->Data[ 39986 ];

	AUTVehicle_execWeaponStoppedFiring_Parms WeaponStoppedFiring_Parms;
	WeaponStoppedFiring_Parms.InWeapon = InWeapon;
	WeaponStoppedFiring_Parms.bViaReplication = bViaReplication;

	this->ProcessEvent ( pFnWeaponStoppedFiring, &WeaponStoppedFiring_Parms, NULL );
};

// Function GridVehicle.UTVehicle.VehicleWeaponFired
// [0x00020102] 
// Parameters infos:
// unsigned long                  bViaReplication                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::VehicleWeaponFired ( unsigned long bViaReplication, struct FVector HitLocation, int SeatIndex )
{
	static UFunction* pFnVehicleWeaponFired = NULL;

	if ( ! pFnVehicleWeaponFired )
		pFnVehicleWeaponFired = (UFunction*) UObject::GObjObjects()->Data[ 39982 ];

	AUTVehicle_execVehicleWeaponFired_Parms VehicleWeaponFired_Parms;
	VehicleWeaponFired_Parms.bViaReplication = bViaReplication;
	memcpy ( &VehicleWeaponFired_Parms.HitLocation, &HitLocation, 0xC );
	VehicleWeaponFired_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnVehicleWeaponFired, &VehicleWeaponFired_Parms, NULL );
};

// Function GridVehicle.UTVehicle.WeaponFired
// [0x00024102] 
// Parameters infos:
// class AWeapon*                 InWeapon                       ( CPF_Parm )
// unsigned long                  bViaReplication                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation )
{
	static UFunction* pFnWeaponFired = NULL;

	if ( ! pFnWeaponFired )
		pFnWeaponFired = (UFunction*) UObject::GObjObjects()->Data[ 39978 ];

	AUTVehicle_execWeaponFired_Parms WeaponFired_Parms;
	WeaponFired_Parms.InWeapon = InWeapon;
	WeaponFired_Parms.bViaReplication = bViaReplication;
	memcpy ( &WeaponFired_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnWeaponFired, &WeaponFired_Parms, NULL );
};

// Function GridVehicle.UTVehicle.CauseMuzzleFlashLight
// [0x00020102] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::CauseMuzzleFlashLight ( int SeatIndex )
{
	static UFunction* pFnCauseMuzzleFlashLight = NULL;

	if ( ! pFnCauseMuzzleFlashLight )
		pFnCauseMuzzleFlashLight = (UFunction*) UObject::GObjObjects()->Data[ 39976 ];

	AUTVehicle_execCauseMuzzleFlashLight_Parms CauseMuzzleFlashLight_Parms;
	CauseMuzzleFlashLight_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnCauseMuzzleFlashLight, &CauseMuzzleFlashLight_Parms, NULL );
};

// Function GridVehicle.UTVehicle.OverrideEndFire
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

bool AUTVehicle::OverrideEndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnOverrideEndFire = NULL;

	if ( ! pFnOverrideEndFire )
		pFnOverrideEndFire = (UFunction*) UObject::GObjObjects()->Data[ 39973 ];

	AUTVehicle_execOverrideEndFire_Parms OverrideEndFire_Parms;
	OverrideEndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnOverrideEndFire, &OverrideEndFire_Parms, NULL );

	return OverrideEndFire_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.OverrideBeginFire
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

bool AUTVehicle::OverrideBeginFire ( unsigned char FireModeNum )
{
	static UFunction* pFnOverrideBeginFire = NULL;

	if ( ! pFnOverrideBeginFire )
		pFnOverrideBeginFire = (UFunction*) UObject::GObjObjects()->Data[ 39970 ];

	AUTVehicle_execOverrideBeginFire_Parms OverrideBeginFire_Parms;
	OverrideBeginFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnOverrideBeginFire, &OverrideBeginFire_Parms, NULL );

	return OverrideBeginFire_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetWeaponAim
// [0x00820002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUTVehicleWeapon*        VWeapon                        ( CPF_Parm )

struct FRotator AUTVehicle::GetWeaponAim ( class AUTVehicleWeapon* VWeapon )
{
	static UFunction* pFnGetWeaponAim = NULL;

	if ( ! pFnGetWeaponAim )
		pFnGetWeaponAim = (UFunction*) UObject::GObjObjects()->Data[ 39955 ];

	AUTVehicle_execGetWeaponAim_Parms GetWeaponAim_Parms;
	GetWeaponAim_Parms.VWeapon = VWeapon;

	this->ProcessEvent ( pFnGetWeaponAim, &GetWeaponAim_Parms, NULL );

	return GetWeaponAim_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetPhysicalFireStartLoc
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameWeapon*             ForWeapon                      ( CPF_Parm )

struct FVector AUTVehicle::GetPhysicalFireStartLoc ( class AGameWeapon* ForWeapon )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 39951 ];

	AUTVehicle_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	GetPhysicalFireStartLoc_Parms.ForWeapon = ForWeapon;

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetEffectLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector AUTVehicle::GetEffectLocation ( int SeatIndex )
{
	static UFunction* pFnGetEffectLocation = NULL;

	if ( ! pFnGetEffectLocation )
		pFnGetEffectLocation = (UFunction*) UObject::GObjObjects()->Data[ 39947 ];

	AUTVehicle_execGetEffectLocation_Parms GetEffectLocation_Parms;
	GetEffectLocation_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetEffectLocation, &GetEffectLocation_Parms, NULL );

	return GetEffectLocation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetBarrelLocationAndRotation
// [0x00424902] ( FUNC_Event )
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// struct FVector                 SocketLocation                 ( CPF_Parm | CPF_OutParm )
// struct FRotator                SocketRotation                 ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

void AUTVehicle::eventGetBarrelLocationAndRotation ( int SeatIndex, struct FVector* SocketLocation, struct FRotator* SocketRotation )
{
	static UFunction* pFnGetBarrelLocationAndRotation = NULL;

	if ( ! pFnGetBarrelLocationAndRotation )
		pFnGetBarrelLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 39943 ];

	AUTVehicle_eventGetBarrelLocationAndRotation_Parms GetBarrelLocationAndRotation_Parms;
	GetBarrelLocationAndRotation_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetBarrelLocationAndRotation, &GetBarrelLocationAndRotation_Parms, NULL );

	if ( SocketLocation )
		memcpy ( SocketLocation, &GetBarrelLocationAndRotation_Parms.SocketLocation, 0xC );

	if ( SocketRotation )
		memcpy ( SocketRotation, &GetBarrelLocationAndRotation_Parms.SocketRotation, 0xC );
};

// Function GridVehicle.UTVehicle.ClearFlashLocation
// [0x00020002] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )

void AUTVehicle::ClearFlashLocation ( class AWeapon* Who )
{
	static UFunction* pFnClearFlashLocation = NULL;

	if ( ! pFnClearFlashLocation )
		pFnClearFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 39940 ];

	AUTVehicle_execClearFlashLocation_Parms ClearFlashLocation_Parms;
	ClearFlashLocation_Parms.Who = Who;

	this->ProcessEvent ( pFnClearFlashLocation, &ClearFlashLocation_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetFlashLocation
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_Parm )

void AUTVehicle::SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewLoc )
{
	static UFunction* pFnSetFlashLocation = NULL;

	if ( ! pFnSetFlashLocation )
		pFnSetFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 39935 ];

	AUTVehicle_execSetFlashLocation_Parms SetFlashLocation_Parms;
	SetFlashLocation_Parms.Who = Who;
	SetFlashLocation_Parms.FireModeNum = FireModeNum;
	memcpy ( &SetFlashLocation_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnSetFlashLocation, &SetFlashLocation_Parms, NULL );
};

// Function GridVehicle.UTVehicle.IncrementFlashCount
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

void AUTVehicle::IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum )
{
	static UFunction* pFnIncrementFlashCount = NULL;

	if ( ! pFnIncrementFlashCount )
		pFnIncrementFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 39931 ];

	AUTVehicle_execIncrementFlashCount_Parms IncrementFlashCount_Parms;
	IncrementFlashCount_Parms.Who = Who;
	IncrementFlashCount_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnIncrementFlashCount, &IncrementFlashCount_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ClearFlashCount
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )

void AUTVehicle::ClearFlashCount ( class AWeapon* Who )
{
	static UFunction* pFnClearFlashCount = NULL;

	if ( ! pFnClearFlashCount )
		pFnClearFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 39928 ];

	AUTVehicle_execClearFlashCount_Parms ClearFlashCount_Parms;
	ClearFlashCount_Parms.Who = Who;

	this->ProcessEvent ( pFnClearFlashCount, &ClearFlashCount_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetFiringMode
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Weap                           ( CPF_Parm )
// unsigned char                  FiringModeNum                  ( CPF_Parm )

void AUTVehicle::SetFiringMode ( class AWeapon* Weap, unsigned char FiringModeNum )
{
	static UFunction* pFnSetFiringMode = NULL;

	if ( ! pFnSetFiringMode )
		pFnSetFiringMode = (UFunction*) UObject::GObjObjects()->Data[ 39925 ];

	AUTVehicle_execSetFiringMode_Parms SetFiringMode_Parms;
	SetFiringMode_Parms.Weap = Weap;
	SetFiringMode_Parms.FiringModeNum = FiringModeNum;

	this->ProcessEvent ( pFnSetFiringMode, &SetFiringMode_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void AUTVehicle::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 39922 ];

	AUTVehicle_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function GridVehicle.UTVehicle.InitializeTurrets
// [0x00820102] 
// Parameters infos:

void AUTVehicle::InitializeTurrets ( )
{
	static UFunction* pFnInitializeTurrets = NULL;

	if ( ! pFnInitializeTurrets )
		pFnInitializeTurrets = (UFunction*) UObject::GObjObjects()->Data[ 39914 ];

	AUTVehicle_execInitializeTurrets_Parms InitializeTurrets_Parms;

	this->ProcessEvent ( pFnInitializeTurrets, &InitializeTurrets_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PreCacheSeatNames
// [0x00020102] 
// Parameters infos:

void AUTVehicle::PreCacheSeatNames ( )
{
	static UFunction* pFnPreCacheSeatNames = NULL;

	if ( ! pFnPreCacheSeatNames )
		pFnPreCacheSeatNames = (UFunction*) UObject::GObjObjects()->Data[ 39912 ];

	AUTVehicle_execPreCacheSeatNames_Parms PreCacheSeatNames_Parms;

	this->ProcessEvent ( pFnPreCacheSeatNames, &PreCacheSeatNames_Parms, NULL );
};

// Function GridVehicle.UTVehicle.InitializeSeats
// [0x00020002] 
// Parameters infos:

void AUTVehicle::InitializeSeats ( )
{
	static UFunction* pFnInitializeSeats = NULL;

	if ( ! pFnInitializeSeats )
		pFnInitializeSeats = (UFunction*) UObject::GObjObjects()->Data[ 39905 ];

	AUTVehicle_execInitializeSeats_Parms InitializeSeats_Parms;

	this->ProcessEvent ( pFnInitializeSeats, &InitializeSeats_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ImportantVehicle
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::ImportantVehicle ( )
{
	static UFunction* pFnImportantVehicle = NULL;

	if ( ! pFnImportantVehicle )
		pFnImportantVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39903 ];

	AUTVehicle_execImportantVehicle_Parms ImportantVehicle_Parms;

	this->ProcessEvent ( pFnImportantVehicle, &ImportantVehicle_Parms, NULL );

	return ImportantVehicle_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.IsArtillery
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::IsArtillery ( )
{
	static UFunction* pFnIsArtillery = NULL;

	if ( ! pFnIsArtillery )
		pFnIsArtillery = (UFunction*) UObject::GObjObjects()->Data[ 39901 ];

	AUTVehicle_execIsArtillery_Parms IsArtillery_Parms;

	this->ProcessEvent ( pFnIsArtillery, &IsArtillery_Parms, NULL );

	return IsArtillery_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.TakeDamage
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 39893 ];

	AUTVehicle_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GridVehicle.UTVehicle.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void AUTVehicle::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 39886 ];

	AUTVehicle_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PlayTakeHitEffects
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventPlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 39885 ];

	AUTVehicle_eventPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PlayHit
// [0x00020002] 
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void AUTVehicle::PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnPlayHit = NULL;

	if ( ! pFnPlayHit )
		pFnPlayHit = (UFunction*) UObject::GObjObjects()->Data[ 39878 ];

	AUTVehicle_execPlayHit_Parms PlayHit_Parms;
	PlayHit_Parms.Damage = Damage;
	PlayHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &PlayHit_Parms.HitLocation, &HitLocation, 0xC );
	PlayHit_Parms.DamageType = DamageType;
	memcpy ( &PlayHit_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayHit_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnPlayHit, &PlayHit_Parms, NULL );
};

// Function GridVehicle.UTVehicle.StopLinkedEffect
// [0x00880102] 
// Parameters infos:

void AUTVehicle::StopLinkedEffect ( )
{
	static UFunction* pFnStopLinkedEffect = NULL;

	if ( ! pFnStopLinkedEffect )
		pFnStopLinkedEffect = (UFunction*) UObject::GObjObjects()->Data[ 39874 ];

	AUTVehicle_execStopLinkedEffect_Parms StopLinkedEffect_Parms;

	this->ProcessEvent ( pFnStopLinkedEffect, &StopLinkedEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.StartLinkedEffect
// [0x00880102] 
// Parameters infos:

void AUTVehicle::StartLinkedEffect ( )
{
	static UFunction* pFnStartLinkedEffect = NULL;

	if ( ! pFnStartLinkedEffect )
		pFnStartLinkedEffect = (UFunction*) UObject::GObjObjects()->Data[ 39869 ];

	AUTVehicle_execStartLinkedEffect_Parms StartLinkedEffect_Parms;

	this->ProcessEvent ( pFnStartLinkedEffect, &StartLinkedEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DecrementLinkedToCount
// [0x00020002] 
// Parameters infos:

void AUTVehicle::DecrementLinkedToCount ( )
{
	static UFunction* pFnDecrementLinkedToCount = NULL;

	if ( ! pFnDecrementLinkedToCount )
		pFnDecrementLinkedToCount = (UFunction*) UObject::GObjObjects()->Data[ 39868 ];

	AUTVehicle_execDecrementLinkedToCount_Parms DecrementLinkedToCount_Parms;

	this->ProcessEvent ( pFnDecrementLinkedToCount, &DecrementLinkedToCount_Parms, NULL );
};

// Function GridVehicle.UTVehicle.IncrementLinkedToCount
// [0x00020002] 
// Parameters infos:

void AUTVehicle::IncrementLinkedToCount ( )
{
	static UFunction* pFnIncrementLinkedToCount = NULL;

	if ( ! pFnIncrementLinkedToCount )
		pFnIncrementLinkedToCount = (UFunction*) UObject::GObjObjects()->Data[ 39867 ];

	AUTVehicle_execIncrementLinkedToCount_Parms IncrementLinkedToCount_Parms;

	this->ProcessEvent ( pFnIncrementLinkedToCount, &IncrementLinkedToCount_Parms, NULL );
};

// Function GridVehicle.UTVehicle.HealDamage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Amount                         ( CPF_Parm )
// class AController*             Healer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

bool AUTVehicle::HealDamage ( int Amount, class AController* Healer, class UClass* DamageType )
{
	static UFunction* pFnHealDamage = NULL;

	if ( ! pFnHealDamage )
		pFnHealDamage = (UFunction*) UObject::GObjObjects()->Data[ 39862 ];

	AUTVehicle_execHealDamage_Parms HealDamage_Parms;
	HealDamage_Parms.Amount = Amount;
	HealDamage_Parms.Healer = Healer;
	HealDamage_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnHealDamage, &HealDamage_Parms, NULL );

	return HealDamage_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.AllowLinkThroughOwnedActor
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  OwnedActor                     ( CPF_Parm )

bool AUTVehicle::AllowLinkThroughOwnedActor ( class AActor* OwnedActor )
{
	static UFunction* pFnAllowLinkThroughOwnedActor = NULL;

	if ( ! pFnAllowLinkThroughOwnedActor )
		pFnAllowLinkThroughOwnedActor = (UFunction*) UObject::GObjObjects()->Data[ 39859 ];

	AUTVehicle_execAllowLinkThroughOwnedActor_Parms AllowLinkThroughOwnedActor_Parms;
	AllowLinkThroughOwnedActor_Parms.OwnedActor = OwnedActor;

	this->ProcessEvent ( pFnAllowLinkThroughOwnedActor, &AllowLinkThroughOwnedActor_Parms, NULL );

	return AllowLinkThroughOwnedActor_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.TeamLink
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            TeamNum                        ( CPF_Parm )

bool AUTVehicle::TeamLink ( int TeamNum )
{
	static UFunction* pFnTeamLink = NULL;

	if ( ! pFnTeamLink )
		pFnTeamLink = (UFunction*) UObject::GObjObjects()->Data[ 39856 ];

	AUTVehicle_execTeamLink_Parms TeamLink_Parms;
	TeamLink_Parms.TeamNum = TeamNum;

	this->ProcessEvent ( pFnTeamLink, &TeamLink_Parms, NULL );

	return TeamLink_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SetReservation
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )

void AUTVehicle::SetReservation ( class AController* C )
{
	static UFunction* pFnSetReservation = NULL;

	if ( ! pFnSetReservation )
		pFnSetReservation = (UFunction*) UObject::GObjObjects()->Data[ 39854 ];

	AUTVehicle_execSetReservation_Parms SetReservation_Parms;
	SetReservation_Parms.C = C;

	this->ProcessEvent ( pFnSetReservation, &SetReservation_Parms, NULL );
};

// Function GridVehicle.UTVehicle.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool AUTVehicle::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 39851 ];

	AUTVehicle_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SpokenFor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             C                              ( CPF_Parm )

bool AUTVehicle::SpokenFor ( class AController* C )
{
	static UFunction* pFnSpokenFor = NULL;

	if ( ! pFnSpokenFor )
		pFnSpokenFor = (UFunction*) UObject::GObjObjects()->Data[ 39848 ];

	AUTVehicle_execSpokenFor_Parms SpokenFor_Parms;
	SpokenFor_Parms.C = C;

	this->ProcessEvent ( pFnSpokenFor, &SpokenFor_Parms, NULL );

	return SpokenFor_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ChangedReservation
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicle::ChangedReservation ( class APawn* P )
{
	static UFunction* pFnChangedReservation = NULL;

	if ( ! pFnChangedReservation )
		pFnChangedReservation = (UFunction*) UObject::GObjObjects()->Data[ 39845 ];

	AUTVehicle_execChangedReservation_Parms ChangedReservation_Parms;
	ChangedReservation_Parms.P = P;

	this->ProcessEvent ( pFnChangedReservation, &ChangedReservation_Parms, NULL );

	return ChangedReservation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ReservationCostMultiplier
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

float AUTVehicle::ReservationCostMultiplier ( class APawn* P )
{
	static UFunction* pFnReservationCostMultiplier = NULL;

	if ( ! pFnReservationCostMultiplier )
		pFnReservationCostMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 39842 ];

	AUTVehicle_execReservationCostMultiplier_Parms ReservationCostMultiplier_Parms;
	ReservationCostMultiplier_Parms.P = P;

	this->ProcessEvent ( pFnReservationCostMultiplier, &ReservationCostMultiplier_Parms, NULL );

	return ReservationCostMultiplier_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUTVehicle::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 39840 ];

	AUTVehicle_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.OpenPositionFor
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicle::OpenPositionFor ( class APawn* P )
{
	static UFunction* pFnOpenPositionFor = NULL;

	if ( ! pFnOpenPositionFor )
		pFnOpenPositionFor = (UFunction*) UObject::GObjObjects()->Data[ 39836 ];

	AUTVehicle_execOpenPositionFor_Parms OpenPositionFor_Parms;
	OpenPositionFor_Parms.P = P;

	this->ProcessEvent ( pFnOpenPositionFor, &OpenPositionFor_Parms, NULL );

	return OpenPositionFor_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.Occupied
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::Occupied ( )
{
	static UFunction* pFnOccupied = NULL;

	if ( ! pFnOccupied )
		pFnOccupied = (UFunction*) UObject::GObjObjects()->Data[ 39833 ];

	AUTVehicle_execOccupied_Parms Occupied_Parms;

	this->ProcessEvent ( pFnOccupied, &Occupied_Parms, NULL );

	return Occupied_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.CheckReset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventCheckReset ( )
{
	static UFunction* pFnCheckReset = NULL;

	if ( ! pFnCheckReset )
		pFnCheckReset = (UFunction*) UObject::GObjObjects()->Data[ 39830 ];

	AUTVehicle_eventCheckReset_Parms CheckReset_Parms;

	this->ProcessEvent ( pFnCheckReset, &CheckReset_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PassengerLeave
// [0x00020002] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::PassengerLeave ( int SeatIndex )
{
	static UFunction* pFnPassengerLeave = NULL;

	if ( ! pFnPassengerLeave )
		pFnPassengerLeave = (UFunction*) UObject::GObjObjects()->Data[ 39828 ];

	AUTVehicle_execPassengerLeave_Parms PassengerLeave_Parms;
	PassengerLeave_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnPassengerLeave, &PassengerLeave_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DriverLeave
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceLeave                    ( CPF_Parm )

bool AUTVehicle::eventDriverLeave ( unsigned long bForceLeave )
{
	static UFunction* pFnDriverLeave = NULL;

	if ( ! pFnDriverLeave )
		pFnDriverLeave = (UFunction*) UObject::GObjObjects()->Data[ 39824 ];

	AUTVehicle_eventDriverLeave_Parms DriverLeave_Parms;
	DriverLeave_Parms.bForceLeave = bForceLeave;

	this->ProcessEvent ( pFnDriverLeave, &DriverLeave_Parms, NULL );

	return DriverLeave_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.PassengerEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

bool AUTVehicle::PassengerEnter ( class APawn* P, int SeatIndex )
{
	static UFunction* pFnPassengerEnter = NULL;

	if ( ! pFnPassengerEnter )
		pFnPassengerEnter = (UFunction*) UObject::GObjObjects()->Data[ 39820 ];

	AUTVehicle_execPassengerEnter_Parms PassengerEnter_Parms;
	PassengerEnter_Parms.P = P;
	PassengerEnter_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnPassengerEnter, &PassengerEnter_Parms, NULL );

	return PassengerEnter_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetFirstAvailableSeat
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AUTVehicle::GetFirstAvailableSeat ( )
{
	static UFunction* pFnGetFirstAvailableSeat = NULL;

	if ( ! pFnGetFirstAvailableSeat )
		pFnGetFirstAvailableSeat = (UFunction*) UObject::GObjObjects()->Data[ 39817 ];

	AUTVehicle_execGetFirstAvailableSeat_Parms GetFirstAvailableSeat_Parms;

	this->ProcessEvent ( pFnGetFirstAvailableSeat, &GetFirstAvailableSeat_Parms, NULL );

	return GetFirstAvailableSeat_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.DriverLeft
// [0x00020002] 
// Parameters infos:

void AUTVehicle::DriverLeft ( )
{
	static UFunction* pFnDriverLeft = NULL;

	if ( ! pFnDriverLeft )
		pFnDriverLeft = (UFunction*) UObject::GObjObjects()->Data[ 39816 ];

	AUTVehicle_execDriverLeft_Parms DriverLeft_Parms;

	this->ProcessEvent ( pFnDriverLeft, &DriverLeft_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DriverEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicle::DriverEnter ( class APawn* P )
{
	static UFunction* pFnDriverEnter = NULL;

	if ( ! pFnDriverEnter )
		pFnDriverEnter = (UFunction*) UObject::GObjObjects()->Data[ 39813 ];

	AUTVehicle_execDriverEnter_Parms DriverEnter_Parms;
	DriverEnter_Parms.P = P;

	this->ProcessEvent ( pFnDriverEnter, &DriverEnter_Parms, NULL );

	return DriverEnter_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetMoveTargetFor
// [0x00020002] 
// Parameters infos:
// class AUTVehicle*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

class AUTVehicle* AUTVehicle::GetMoveTargetFor ( class APawn* P )
{
	static UFunction* pFnGetMoveTargetFor = NULL;

	if ( ! pFnGetMoveTargetFor )
		pFnGetMoveTargetFor = (UFunction*) UObject::GObjObjects()->Data[ 39810 ];

	AUTVehicle_execGetMoveTargetFor_Parms GetMoveTargetFor_Parms;
	GetMoveTargetFor_Parms.P = P;

	this->ProcessEvent ( pFnGetMoveTargetFor, &GetMoveTargetFor_Parms, NULL );

	return GetMoveTargetFor_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.NumPassengers
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AUTVehicle::NumPassengers ( )
{
	static UFunction* pFnNumPassengers = NULL;

	if ( ! pFnNumPassengers )
		pFnNumPassengers = (UFunction*) UObject::GObjObjects()->Data[ 39806 ];

	AUTVehicle_execNumPassengers_Parms NumPassengers_Parms;

	this->ProcessEvent ( pFnNumPassengers, &NumPassengers_Parms, NULL );

	return NumPassengers_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.UpdateControllerOnPossess
// [0x00020000] 
// Parameters infos:
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void AUTVehicle::UpdateControllerOnPossess ( unsigned long bVehicleTransition )
{
	static UFunction* pFnUpdateControllerOnPossess = NULL;

	if ( ! pFnUpdateControllerOnPossess )
		pFnUpdateControllerOnPossess = (UFunction*) UObject::GObjObjects()->Data[ 39804 ];

	AUTVehicle_execUpdateControllerOnPossess_Parms UpdateControllerOnPossess_Parms;
	UpdateControllerOnPossess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnUpdateControllerOnPossess, &UpdateControllerOnPossess_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PlayHorn
// [0x00020002] 
// Parameters infos:

void AUTVehicle::PlayHorn ( )
{
	static UFunction* pFnPlayHorn = NULL;

	if ( ! pFnPlayHorn )
		pFnPlayHorn = (UFunction*) UObject::GObjObjects()->Data[ 39799 ];

	AUTVehicle_execPlayHorn_Parms PlayHorn_Parms;

	this->ProcessEvent ( pFnPlayHorn, &PlayHorn_Parms, NULL );
};

// Function GridVehicle.UTVehicle.CheckTurretPitchLimit
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            NeededPitch                    ( CPF_Parm )
// int                            SeatIndex                      ( CPF_Parm )

bool AUTVehicle::CheckTurretPitchLimit ( int NeededPitch, int SeatIndex )
{
	static UFunction* pFnCheckTurretPitchLimit = NULL;

	if ( ! pFnCheckTurretPitchLimit )
		pFnCheckTurretPitchLimit = (UFunction*) UObject::GObjObjects()->Data[ 39792 ];

	AUTVehicle_execCheckTurretPitchLimit_Parms CheckTurretPitchLimit_Parms;
	CheckTurretPitchLimit_Parms.NeededPitch = NeededPitch;
	CheckTurretPitchLimit_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnCheckTurretPitchLimit, &CheckTurretPitchLimit_Parms, NULL );

	return CheckTurretPitchLimit_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.TooCloseToAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AUTVehicle::TooCloseToAttack ( class AActor* Other )
{
	static UFunction* pFnTooCloseToAttack = NULL;

	if ( ! pFnTooCloseToAttack )
		pFnTooCloseToAttack = (UFunction*) UObject::GObjObjects()->Data[ 39786 ];

	AUTVehicle_execTooCloseToAttack_Parms TooCloseToAttack_Parms;
	TooCloseToAttack_Parms.Other = Other;

	this->ProcessEvent ( pFnTooCloseToAttack, &TooCloseToAttack_Parms, NULL );

	return TooCloseToAttack_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SendLockOnMessage
// [0x00020102] 
// Parameters infos:
// int                            Switch                         ( CPF_Parm )

void AUTVehicle::SendLockOnMessage ( int Switch )
{
	static UFunction* pFnSendLockOnMessage = NULL;

	if ( ! pFnSendLockOnMessage )
		pFnSendLockOnMessage = (UFunction*) UObject::GObjObjects()->Data[ 39782 ];

	AUTVehicle_execSendLockOnMessage_Parms SendLockOnMessage_Parms;
	SendLockOnMessage_Parms.Switch = Switch;

	this->ProcessEvent ( pFnSendLockOnMessage, &SendLockOnMessage_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ShootMissile
// [0x00020002] 
// Parameters infos:
// class AProjectile*             P                              ( CPF_Parm )

void AUTVehicle::ShootMissile ( class AProjectile* P )
{
	static UFunction* pFnShootMissile = NULL;

	if ( ! pFnShootMissile )
		pFnShootMissile = (UFunction*) UObject::GObjObjects()->Data[ 39780 ];

	AUTVehicle_execShootMissile_Parms ShootMissile_Parms;
	ShootMissile_Parms.P = P;

	this->ProcessEvent ( pFnShootMissile, &ShootMissile_Parms, NULL );
};

// Function GridVehicle.UTVehicle.IncomingMissile
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AProjectile*             P                              ( CPF_Parm )

void AUTVehicle::eventIncomingMissile ( class AProjectile* P )
{
	static UFunction* pFnIncomingMissile = NULL;

	if ( ! pFnIncomingMissile )
		pFnIncomingMissile = (UFunction*) UObject::GObjObjects()->Data[ 39777 ];

	AUTVehicle_eventIncomingMissile_Parms IncomingMissile_Parms;
	IncomingMissile_Parms.P = P;

	this->ProcessEvent ( pFnIncomingMissile, &IncomingMissile_Parms, NULL );
};

// Function GridVehicle.UTVehicle.Dodge
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  DoubleClickMove                ( CPF_Parm )

bool AUTVehicle::Dodge ( unsigned char DoubleClickMove )
{
	static UFunction* pFnDodge = NULL;

	if ( ! pFnDodge )
		pFnDodge = (UFunction*) UObject::GObjObjects()->Data[ 39774 ];

	AUTVehicle_execDodge_Parms Dodge_Parms;
	Dodge_Parms.DoubleClickMove = DoubleClickMove;

	this->ProcessEvent ( pFnDodge, &Dodge_Parms, NULL );

	return Dodge_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.TeamChanged_VehicleEffects
// [0x00020102] 
// Parameters infos:

void AUTVehicle::TeamChanged_VehicleEffects ( )
{
	static UFunction* pFnTeamChanged_VehicleEffects = NULL;

	if ( ! pFnTeamChanged_VehicleEffects )
		pFnTeamChanged_VehicleEffects = (UFunction*) UObject::GObjObjects()->Data[ 39769 ];

	AUTVehicle_execTeamChanged_VehicleEffects_Parms TeamChanged_VehicleEffects_Parms;

	this->ProcessEvent ( pFnTeamChanged_VehicleEffects, &TeamChanged_VehicleEffects_Parms, NULL );
};

// Function GridVehicle.UTVehicle.TeamChanged
// [0x00020102] 
// Parameters infos:

void AUTVehicle::TeamChanged ( )
{
	static UFunction* pFnTeamChanged = NULL;

	if ( ! pFnTeamChanged )
		pFnTeamChanged = (UFunction*) UObject::GObjObjects()->Data[ 39767 ];

	AUTVehicle_execTeamChanged_Parms TeamChanged_Parms;

	this->ProcessEvent ( pFnTeamChanged, &TeamChanged_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetTeamNum
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  T                              ( CPF_Parm )

void AUTVehicle::eventSetTeamNum ( unsigned char T )
{
	static UFunction* pFnSetTeamNum = NULL;

	if ( ! pFnSetTeamNum )
		pFnSetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 39765 ];

	AUTVehicle_eventSetTeamNum_Parms SetTeamNum_Parms;
	SetTeamNum_Parms.T = T;

	this->ProcessEvent ( pFnSetTeamNum, &SetTeamNum_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetDisplayedHealth
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTVehicle::GetDisplayedHealth ( )
{
	static UFunction* pFnGetDisplayedHealth = NULL;

	if ( ! pFnGetDisplayedHealth )
		pFnGetDisplayedHealth = (UFunction*) UObject::GObjObjects()->Data[ 39763 ];

	AUTVehicle_execGetDisplayedHealth_Parms GetDisplayedHealth_Parms;

	this->ProcessEvent ( pFnGetDisplayedHealth, &GetDisplayedHealth_Parms, NULL );

	return GetDisplayedHealth_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AUTVehicle::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 39758 ];

	AUTVehicle_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTVehicle.ShouldShowUseable
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APlayerController*       PC                             ( CPF_Parm )
// float                          Dist                           ( CPF_Parm )

bool AUTVehicle::ShouldShowUseable ( class APlayerController* PC, float Dist )
{
	static UFunction* pFnShouldShowUseable = NULL;

	if ( ! pFnShouldShowUseable )
		pFnShouldShowUseable = (UFunction*) UObject::GObjObjects()->Data[ 39754 ];

	AUTVehicle_execShouldShowUseable_Parms ShouldShowUseable_Parms;
	ShouldShowUseable_Parms.PC = PC;
	ShouldShowUseable_Parms.Dist = Dist;

	this->ProcessEvent ( pFnShouldShowUseable, &ShouldShowUseable_Parms, NULL );

	return ShouldShowUseable_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.VehicleLocked
// [0x00020002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTVehicle::VehicleLocked ( class APawn* P )
{
	static UFunction* pFnVehicleLocked = NULL;

	if ( ! pFnVehicleLocked )
		pFnVehicleLocked = (UFunction*) UObject::GObjObjects()->Data[ 39751 ];

	AUTVehicle_execVehicleLocked_Parms VehicleLocked_Parms;
	VehicleLocked_Parms.P = P;

	this->ProcessEvent ( pFnVehicleLocked, &VehicleLocked_Parms, NULL );
};

// Function GridVehicle.UTVehicle.TryToDrive
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicle::TryToDrive ( class APawn* P )
{
	static UFunction* pFnTryToDrive = NULL;

	if ( ! pFnTryToDrive )
		pFnTryToDrive = (UFunction*) UObject::GObjObjects()->Data[ 39744 ];

	AUTVehicle_execTryToDrive_Parms TryToDrive_Parms;
	TryToDrive_Parms.P = P;

	this->ProcessEvent ( pFnTryToDrive, &TryToDrive_Parms, NULL );

	return TryToDrive_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.CanEnterVehicle
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicle::CanEnterVehicle ( class APawn* P )
{
	static UFunction* pFnCanEnterVehicle = NULL;

	if ( ! pFnCanEnterVehicle )
		pFnCanEnterVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39737 ];

	AUTVehicle_execCanEnterVehicle_Parms CanEnterVehicle_Parms;
	CanEnterVehicle_Parms.P = P;

	this->ProcessEvent ( pFnCanEnterVehicle, &CanEnterVehicle_Parms, NULL );

	return CanEnterVehicle_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetSeatPRI
// [0x00020102] 
// Parameters infos:
// class APlayerReplicationInfo*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatNum                        ( CPF_Parm )

class APlayerReplicationInfo* AUTVehicle::GetSeatPRI ( int SeatNum )
{
	static UFunction* pFnGetSeatPRI = NULL;

	if ( ! pFnGetSeatPRI )
		pFnGetSeatPRI = (UFunction*) UObject::GObjObjects()->Data[ 39734 ];

	AUTVehicle_execGetSeatPRI_Parms GetSeatPRI_Parms;
	GetSeatPRI_Parms.SeatNum = SeatNum;

	this->ProcessEvent ( pFnGetSeatPRI, &GetSeatPRI_Parms, NULL );

	return GetSeatPRI_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.InCustomEntryRadius
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUTVehicle::InCustomEntryRadius ( class APawn* P )
{
	static UFunction* pFnInCustomEntryRadius = NULL;

	if ( ! pFnInCustomEntryRadius )
		pFnInCustomEntryRadius = (UFunction*) UObject::GObjObjects()->Data[ 39731 ];

	AUTVehicle_execInCustomEntryRadius_Parms InCustomEntryRadius_Parms;
	InCustomEntryRadius_Parms.P = P;

	this->ProcessEvent ( pFnInCustomEntryRadius, &InCustomEntryRadius_Parms, NULL );

	return InCustomEntryRadius_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.BlowupVehicle
// [0x00020102] 
// Parameters infos:

void AUTVehicle::BlowupVehicle ( )
{
	static UFunction* pFnBlowupVehicle = NULL;

	if ( ! pFnBlowupVehicle )
		pFnBlowupVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39728 ];

	AUTVehicle_execBlowupVehicle_Parms BlowupVehicle_Parms;

	this->ProcessEvent ( pFnBlowupVehicle, &BlowupVehicle_Parms, NULL );
};

// Function GridVehicle.UTVehicle.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool AUTVehicle::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 39721 ];

	AUTVehicle_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetCollisionDamageInstigator
// [0x00020002] 
// Parameters infos:
// class AController*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AController* AUTVehicle::GetCollisionDamageInstigator ( )
{
	static UFunction* pFnGetCollisionDamageInstigator = NULL;

	if ( ! pFnGetCollisionDamageInstigator )
		pFnGetCollisionDamageInstigator = (UFunction*) UObject::GObjObjects()->Data[ 39719 ];

	AUTVehicle_execGetCollisionDamageInstigator_Parms GetCollisionDamageInstigator_Parms;

	this->ProcessEvent ( pFnGetCollisionDamageInstigator, &GetCollisionDamageInstigator_Parms, NULL );

	return GetCollisionDamageInstigator_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.TornOff
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventTornOff ( )
{
	static UFunction* pFnTornOff = NULL;

	if ( ! pFnTornOff )
		pFnTornOff = (UFunction*) UObject::GObjObjects()->Data[ 39718 ];

	AUTVehicle_eventTornOff_Parms TornOff_Parms;

	this->ProcessEvent ( pFnTornOff, &TornOff_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ChangeSeat
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             ControllerToMove               ( CPF_Parm )
// int                            RequestedSeat                  ( CPF_Parm )

bool AUTVehicle::ChangeSeat ( class AController* ControllerToMove, int RequestedSeat )
{
	static UFunction* pFnChangeSeat = NULL;

	if ( ! pFnChangeSeat )
		pFnChangeSeat = (UFunction*) UObject::GObjObjects()->Data[ 39710 ];

	AUTVehicle_execChangeSeat_Parms ChangeSeat_Parms;
	ChangeSeat_Parms.ControllerToMove = ControllerToMove;
	ChangeSeat_Parms.RequestedSeat = RequestedSeat;

	this->ProcessEvent ( pFnChangeSeat, &ChangeSeat_Parms, NULL );

	return ChangeSeat_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.HasPriority
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             first                          ( CPF_Parm )
// class AController*             Second                         ( CPF_Parm )

bool AUTVehicle::HasPriority ( class AController* first, class AController* Second )
{
	static UFunction* pFnHasPriority = NULL;

	if ( ! pFnHasPriority )
		pFnHasPriority = (UFunction*) UObject::GObjObjects()->Data[ 39706 ];

	AUTVehicle_execHasPriority_Parms HasPriority_Parms;
	HasPriority_Parms.first = first;
	HasPriority_Parms.Second = Second;

	this->ProcessEvent ( pFnHasPriority, &HasPriority_Parms, NULL );

	return HasPriority_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ServerChangeSeat
// [0x002200C2] 
// Parameters infos:
// int                            RequestedSeat                  ( CPF_Parm )

void AUTVehicle::ServerChangeSeat ( int RequestedSeat )
{
	static UFunction* pFnServerChangeSeat = NULL;

	if ( ! pFnServerChangeSeat )
		pFnServerChangeSeat = (UFunction*) UObject::GObjObjects()->Data[ 39704 ];

	AUTVehicle_execServerChangeSeat_Parms ServerChangeSeat_Parms;
	ServerChangeSeat_Parms.RequestedSeat = RequestedSeat;

	this->ProcessEvent ( pFnServerChangeSeat, &ServerChangeSeat_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ServerAdjacentSeat
// [0x002200C2] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

void AUTVehicle::ServerAdjacentSeat ( int Direction, class AController* C )
{
	static UFunction* pFnServerAdjacentSeat = NULL;

	if ( ! pFnServerAdjacentSeat )
		pFnServerAdjacentSeat = (UFunction*) UObject::GObjObjects()->Data[ 39699 ];

	AUTVehicle_execServerAdjacentSeat_Parms ServerAdjacentSeat_Parms;
	ServerAdjacentSeat_Parms.Direction = Direction;
	ServerAdjacentSeat_Parms.C = C;

	this->ProcessEvent ( pFnServerAdjacentSeat, &ServerAdjacentSeat_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetControllerForSeatIndex
// [0x00020002] 
// Parameters infos:
// class AController*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

class AController* AUTVehicle::GetControllerForSeatIndex ( int SeatIndex )
{
	static UFunction* pFnGetControllerForSeatIndex = NULL;

	if ( ! pFnGetControllerForSeatIndex )
		pFnGetControllerForSeatIndex = (UFunction*) UObject::GObjObjects()->Data[ 39696 ];

	AUTVehicle_execGetControllerForSeatIndex_Parms GetControllerForSeatIndex_Parms;
	GetControllerForSeatIndex_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnGetControllerForSeatIndex, &GetControllerForSeatIndex_Parms, NULL );

	return GetControllerForSeatIndex_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetSeatIndexForController
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             ControllerToMove               ( CPF_Parm )

int AUTVehicle::GetSeatIndexForController ( class AController* ControllerToMove )
{
	static UFunction* pFnGetSeatIndexForController = NULL;

	if ( ! pFnGetSeatIndexForController )
		pFnGetSeatIndexForController = (UFunction*) UObject::GObjObjects()->Data[ 39692 ];

	AUTVehicle_execGetSeatIndexForController_Parms GetSeatIndexForController_Parms;
	GetSeatIndexForController_Parms.ControllerToMove = ControllerToMove;

	this->ProcessEvent ( pFnGetSeatIndexForController, &GetSeatIndexForController_Parms, NULL );

	return GetSeatIndexForController_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.AnySeatAvailable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::AnySeatAvailable ( )
{
	static UFunction* pFnAnySeatAvailable = NULL;

	if ( ! pFnAnySeatAvailable )
		pFnAnySeatAvailable = (UFunction*) UObject::GObjObjects()->Data[ 39689 ];

	AUTVehicle_execAnySeatAvailable_Parms AnySeatAvailable_Parms;

	this->ProcessEvent ( pFnAnySeatAvailable, &AnySeatAvailable_Parms, NULL );

	return AnySeatAvailable_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SeatAvailable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

bool AUTVehicle::SeatAvailable ( int SeatIndex )
{
	static UFunction* pFnSeatAvailable = NULL;

	if ( ! pFnSeatAvailable )
		pFnSeatAvailable = (UFunction*) UObject::GObjObjects()->Data[ 39686 ];

	AUTVehicle_execSeatAvailable_Parms SeatAvailable_Parms;
	SeatAvailable_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnSeatAvailable, &SeatAvailable_Parms, NULL );

	return SeatAvailable_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AUTVehicle::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 39682 ];

	AUTVehicle_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DrivingStatusChanged
// [0x00020102] 
// Parameters infos:

void AUTVehicle::DrivingStatusChanged ( )
{
	static UFunction* pFnDrivingStatusChanged = NULL;

	if ( ! pFnDrivingStatusChanged )
		pFnDrivingStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 39681 ];

	AUTVehicle_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

	this->ProcessEvent ( pFnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
};

// Function GridVehicle.UTVehicle.HasOccupiedTurret
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::HasOccupiedTurret ( )
{
	static UFunction* pFnHasOccupiedTurret = NULL;

	if ( ! pFnHasOccupiedTurret )
		pFnHasOccupiedTurret = (UFunction*) UObject::GObjObjects()->Data[ 39678 ];

	AUTVehicle_execHasOccupiedTurret_Parms HasOccupiedTurret_Parms;

	this->ProcessEvent ( pFnHasOccupiedTurret, &HasOccupiedTurret_Parms, NULL );

	return HasOccupiedTurret_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SetKeyVehicle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventSetKeyVehicle ( )
{
	static UFunction* pFnSetKeyVehicle = NULL;

	if ( ! pFnSetKeyVehicle )
		pFnSetKeyVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39677 ];

	AUTVehicle_eventSetKeyVehicle_Parms SetKeyVehicle_Parms;

	this->ProcessEvent ( pFnSetKeyVehicle, &SetKeyVehicle_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTVehicle::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 39673 ];

	AUTVehicle_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GridVehicle.UTVehicle.WeaponRotationChanged
// [0x00020102] 
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )

void AUTVehicle::WeaponRotationChanged ( int SeatIndex )
{
	static UFunction* pFnWeaponRotationChanged = NULL;

	if ( ! pFnWeaponRotationChanged )
		pFnWeaponRotationChanged = (UFunction*) UObject::GObjObjects()->Data[ 39669 ];

	AUTVehicle_execWeaponRotationChanged_Parms WeaponRotationChanged_Parms;
	WeaponRotationChanged_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnWeaponRotationChanged, &WeaponRotationChanged_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetViewRotation
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator AUTVehicle::eventGetViewRotation ( )
{
	static UFunction* pFnGetViewRotation = NULL;

	if ( ! pFnGetViewRotation )
		pFnGetViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 39667 ];

	AUTVehicle_eventGetViewRotation_Parms GetViewRotation_Parms;

	this->ProcessEvent ( pFnGetViewRotation, &GetViewRotation_Parms, NULL );

	return GetViewRotation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ShouldClamp
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::ShouldClamp ( )
{
	static UFunction* pFnShouldClamp = NULL;

	if ( ! pFnShouldClamp )
		pFnShouldClamp = (UFunction*) UObject::GObjObjects()->Data[ 39665 ];

	AUTVehicle_execShouldClamp_Parms ShouldClamp_Parms;

	this->ProcessEvent ( pFnShouldClamp, &ShouldClamp_Parms, NULL );

	return ShouldClamp_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetClampedViewRotation
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator AUTVehicle::GetClampedViewRotation ( )
{
	static UFunction* pFnGetClampedViewRotation = NULL;

	if ( ! pFnGetClampedViewRotation )
		pFnGetClampedViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 39657 ];

	AUTVehicle_execGetClampedViewRotation_Parms GetClampedViewRotation_Parms;

	this->ProcessEvent ( pFnGetClampedViewRotation, &GetClampedViewRotation_Parms, NULL );

	return GetClampedViewRotation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ProcessViewRotation
// [0x00420102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void AUTVehicle::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 39649 ];

	AUTVehicle_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GridVehicle.UTVehicle.ServerSetConsoleTurning
// [0x002200C2] 
// Parameters infos:
// unsigned long                  bNewConsoleTurning             ( CPF_Parm )

void AUTVehicle::ServerSetConsoleTurning ( unsigned long bNewConsoleTurning )
{
	static UFunction* pFnServerSetConsoleTurning = NULL;

	if ( ! pFnServerSetConsoleTurning )
		pFnServerSetConsoleTurning = (UFunction*) UObject::GObjObjects()->Data[ 39647 ];

	AUTVehicle_execServerSetConsoleTurning_Parms ServerSetConsoleTurning_Parms;
	ServerSetConsoleTurning_Parms.bNewConsoleTurning = bNewConsoleTurning;

	this->ProcessEvent ( pFnServerSetConsoleTurning, &ServerSetConsoleTurning_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetSeatIndexFromPrefix
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Prefix                         ( CPF_Parm | CPF_NeedCtorLink )

int AUTVehicle::GetSeatIndexFromPrefix ( struct FString Prefix )
{
	static UFunction* pFnGetSeatIndexFromPrefix = NULL;

	if ( ! pFnGetSeatIndexFromPrefix )
		pFnGetSeatIndexFromPrefix = (UFunction*) UObject::GObjObjects()->Data[ 39643 ];

	AUTVehicle_execGetSeatIndexFromPrefix_Parms GetSeatIndexFromPrefix_Parms;
	memcpy ( &GetSeatIndexFromPrefix_Parms.Prefix, &Prefix, 0xC );

	this->ProcessEvent ( pFnGetSeatIndexFromPrefix, &GetSeatIndexFromPrefix_Parms, NULL );

	return GetSeatIndexFromPrefix_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.TakeFireDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventTakeFireDamage ( )
{
	static UFunction* pFnTakeFireDamage = NULL;

	if ( ! pFnTakeFireDamage )
		pFnTakeFireDamage = (UFunction*) UObject::GObjObjects()->Data[ 39641 ];

	AUTVehicle_eventTakeFireDamage_Parms TakeFireDamage_Parms;

	this->ProcessEvent ( pFnTakeFireDamage, &TakeFireDamage_Parms, NULL );
};

// Function GridVehicle.UTVehicle.EnableVehicle
// [0x00020102] 
// Parameters infos:

void AUTVehicle::EnableVehicle ( )
{
	static UFunction* pFnEnableVehicle = NULL;

	if ( ! pFnEnableVehicle )
		pFnEnableVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39640 ];

	AUTVehicle_execEnableVehicle_Parms EnableVehicle_Parms;

	this->ProcessEvent ( pFnEnableVehicle, &EnableVehicle_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DisableVehicle
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::DisableVehicle ( )
{
	static UFunction* pFnDisableVehicle = NULL;

	if ( ! pFnDisableVehicle )
		pFnDisableVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39637 ];

	AUTVehicle_execDisableVehicle_Parms DisableVehicle_Parms;

	this->ProcessEvent ( pFnDisableVehicle, &DisableVehicle_Parms, NULL );

	return DisableVehicle_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SetTexturesToBeResident
// [0x00020102] 
// Parameters infos:
// unsigned long                  bActive                        ( CPF_Parm )

void AUTVehicle::SetTexturesToBeResident ( unsigned long bActive )
{
	static UFunction* pFnSetTexturesToBeResident = NULL;

	if ( ! pFnSetTexturesToBeResident )
		pFnSetTexturesToBeResident = (UFunction*) UObject::GObjObjects()->Data[ 39627 ];

	AUTVehicle_execSetTexturesToBeResident_Parms SetTexturesToBeResident_Parms;
	SetTexturesToBeResident_Parms.bActive = bActive;

	this->ProcessEvent ( pFnSetTexturesToBeResident, &SetTexturesToBeResident_Parms, NULL );
};

// Function GridVehicle.UTVehicle.Destroyed
// [0x00020102] 
// Parameters infos:

void AUTVehicle::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 39625 ];

	AUTVehicle_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DriverRadiusDamage
// [0x00024002] 
// Parameters infos:
// float                          DamageAmount                   ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// float                          DamageFalloffExponent          ( CPF_OptionalParm | CPF_Parm )

void AUTVehicle::DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser, float DamageFalloffExponent )
{
	static UFunction* pFnDriverRadiusDamage = NULL;

	if ( ! pFnDriverRadiusDamage )
		pFnDriverRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 39614 ];

	AUTVehicle_execDriverRadiusDamage_Parms DriverRadiusDamage_Parms;
	DriverRadiusDamage_Parms.DamageAmount = DamageAmount;
	DriverRadiusDamage_Parms.DamageRadius = DamageRadius;
	DriverRadiusDamage_Parms.EventInstigator = EventInstigator;
	DriverRadiusDamage_Parms.DamageType = DamageType;
	DriverRadiusDamage_Parms.Momentum = Momentum;
	memcpy ( &DriverRadiusDamage_Parms.HitLocation, &HitLocation, 0xC );
	DriverRadiusDamage_Parms.DamageCauser = DamageCauser;
	DriverRadiusDamage_Parms.DamageFalloffExponent = DamageFalloffExponent;

	this->ProcessEvent ( pFnDriverRadiusDamage, &DriverRadiusDamage_Parms, NULL );
};

// Function GridVehicle.UTVehicle.TakeWaterDamage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventTakeWaterDamage ( )
{
	static UFunction* pFnTakeWaterDamage = NULL;

	if ( ! pFnTakeWaterDamage )
		pFnTakeWaterDamage = (UFunction*) UObject::GObjObjects()->Data[ 39612 ];

	AUTVehicle_eventTakeWaterDamage_Parms TakeWaterDamage_Parms;

	this->ProcessEvent ( pFnTakeWaterDamage, &TakeWaterDamage_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PancakeOther
// [0x00020002] 
// Parameters infos:
// class APawn*                   Other                          ( CPF_Parm )

void AUTVehicle::PancakeOther ( class APawn* Other )
{
	static UFunction* pFnPancakeOther = NULL;

	if ( ! pFnPancakeOther )
		pFnPancakeOther = (UFunction*) UObject::GObjObjects()->Data[ 39610 ];

	AUTVehicle_execPancakeOther_Parms PancakeOther_Parms;
	PancakeOther_Parms.Other = Other;

	this->ProcessEvent ( pFnPancakeOther, &PancakeOther_Parms, NULL );
};

// Function GridVehicle.UTVehicle.RanInto
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AUTVehicle::eventRanInto ( class AActor* Other )
{
	static UFunction* pFnRanInto = NULL;

	if ( ! pFnRanInto )
		pFnRanInto = (UFunction*) UObject::GObjObjects()->Data[ 39606 ];

	AUTVehicle_eventRanInto_Parms RanInto_Parms;
	RanInto_Parms.Other = Other;

	this->ProcessEvent ( pFnRanInto, &RanInto_Parms, NULL );
};

// Function GridVehicle.UTVehicle.FindAutoExit
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ExitingDriver                  ( CPF_Parm )

bool AUTVehicle::FindAutoExit ( class APawn* ExitingDriver )
{
	static UFunction* pFnFindAutoExit = NULL;

	if ( ! pFnFindAutoExit )
		pFnFindAutoExit = (UFunction*) UObject::GObjObjects()->Data[ 39599 ];

	AUTVehicle_execFindAutoExit_Parms FindAutoExit_Parms;
	FindAutoExit_Parms.ExitingDriver = ExitingDriver;

	this->ProcessEvent ( pFnFindAutoExit, &FindAutoExit_Parms, NULL );

	return FindAutoExit_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ExitRotation
// [0x00020002] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator AUTVehicle::ExitRotation ( )
{
	static UFunction* pFnExitRotation = NULL;

	if ( ! pFnExitRotation )
		pFnExitRotation = (UFunction*) UObject::GObjObjects()->Data[ 39597 ];

	AUTVehicle_execExitRotation_Parms ExitRotation_Parms;

	this->ProcessEvent ( pFnExitRotation, &ExitRotation_Parms, NULL );

	return ExitRotation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.EntryAnnouncement
// [0x00020102] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )

void AUTVehicle::EntryAnnouncement ( class AController* C )
{
	static UFunction* pFnEntryAnnouncement = NULL;

	if ( ! pFnEntryAnnouncement )
		pFnEntryAnnouncement = (UFunction*) UObject::GObjObjects()->Data[ 39595 ];

	AUTVehicle_execEntryAnnouncement_Parms EntryAnnouncement_Parms;
	EntryAnnouncement_Parms.C = C;

	this->ProcessEvent ( pFnEntryAnnouncement, &EntryAnnouncement_Parms, NULL );
};

// Function GridVehicle.UTVehicle.VehicleEvent
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )

void AUTVehicle::VehicleEvent ( struct FName EventTag )
{
	static UFunction* pFnVehicleEvent = NULL;

	if ( ! pFnVehicleEvent )
		pFnVehicleEvent = (UFunction*) UObject::GObjObjects()->Data[ 39593 ];

	AUTVehicle_execVehicleEvent_Parms VehicleEvent_Parms;
	memcpy ( &VehicleEvent_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnVehicleEvent, &VehicleEvent_Parms, NULL );
};

// Function GridVehicle.UTVehicle.EagleEyeTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::EagleEyeTarget ( )
{
	static UFunction* pFnEagleEyeTarget = NULL;

	if ( ! pFnEagleEyeTarget )
		pFnEagleEyeTarget = (UFunction*) UObject::GObjObjects()->Data[ 39591 ];

	AUTVehicle_execEagleEyeTarget_Parms EagleEyeTarget_Parms;

	this->ProcessEvent ( pFnEagleEyeTarget, &EagleEyeTarget_Parms, NULL );

	return EagleEyeTarget_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.PlayVehicleAnimation
// [0x00020100] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )

void AUTVehicle::PlayVehicleAnimation ( struct FName EventTag )
{
	static UFunction* pFnPlayVehicleAnimation = NULL;

	if ( ! pFnPlayVehicleAnimation )
		pFnPlayVehicleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 39589 ];

	AUTVehicle_execPlayVehicleAnimation_Parms PlayVehicleAnimation_Parms;
	memcpy ( &PlayVehicleAnimation_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnPlayVehicleAnimation, &PlayVehicleAnimation_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PlayVehicleSound
// [0x00020102] 
// Parameters infos:
// struct FName                   SoundTag                       ( CPF_Parm )

void AUTVehicle::PlayVehicleSound ( struct FName SoundTag )
{
	static UFunction* pFnPlayVehicleSound = NULL;

	if ( ! pFnPlayVehicleSound )
		pFnPlayVehicleSound = (UFunction*) UObject::GObjObjects()->Data[ 39586 ];

	AUTVehicle_execPlayVehicleSound_Parms PlayVehicleSound_Parms;
	memcpy ( &PlayVehicleSound_Parms.SoundTag, &SoundTag, 0x8 );

	this->ProcessEvent ( pFnPlayVehicleSound, &PlayVehicleSound_Parms, NULL );
};

// Function GridVehicle.UTVehicle.TriggerVehicleEffect
// [0x00020102] 
// Parameters infos:
// struct FName                   EventTag                       ( CPF_Parm )

void AUTVehicle::TriggerVehicleEffect ( struct FName EventTag )
{
	static UFunction* pFnTriggerVehicleEffect = NULL;

	if ( ! pFnTriggerVehicleEffect )
		pFnTriggerVehicleEffect = (UFunction*) UObject::GObjObjects()->Data[ 39583 ];

	AUTVehicle_execTriggerVehicleEffect_Parms TriggerVehicleEffect_Parms;
	memcpy ( &TriggerVehicleEffect_Parms.EventTag, &EventTag, 0x8 );

	this->ProcessEvent ( pFnTriggerVehicleEffect, &TriggerVehicleEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetVehicleEffectParms
// [0x00020102] 
// Parameters infos:
// struct FName                   TriggerName                    ( CPF_Parm )
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void AUTVehicle::SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetVehicleEffectParms = NULL;

	if ( ! pFnSetVehicleEffectParms )
		pFnSetVehicleEffectParms = (UFunction*) UObject::GObjObjects()->Data[ 39579 ];

	AUTVehicle_execSetVehicleEffectParms_Parms SetVehicleEffectParms_Parms;
	memcpy ( &SetVehicleEffectParms_Parms.TriggerName, &TriggerName, 0x8 );
	SetVehicleEffectParms_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetVehicleEffectParms, &SetVehicleEffectParms_Parms, NULL );
};

// Function GridVehicle.UTVehicle.InitializeEffects
// [0x00020102] 
// Parameters infos:

void AUTVehicle::InitializeEffects ( )
{
	static UFunction* pFnInitializeEffects = NULL;

	if ( ! pFnInitializeEffects )
		pFnInitializeEffects = (UFunction*) UObject::GObjObjects()->Data[ 39578 ];

	AUTVehicle_execInitializeEffects_Parms InitializeEffects_Parms;

	this->ProcessEvent ( pFnInitializeEffects, &InitializeEffects_Parms, NULL );
};

// Function GridVehicle.UTVehicle.CreateVehicleEffect
// [0x00020102] 
// Parameters infos:
// int                            EffectIndex                    ( CPF_Parm )

void AUTVehicle::CreateVehicleEffect ( int EffectIndex )
{
	static UFunction* pFnCreateVehicleEffect = NULL;

	if ( ! pFnCreateVehicleEffect )
		pFnCreateVehicleEffect = (UFunction*) UObject::GObjObjects()->Data[ 39576 ];

	AUTVehicle_execCreateVehicleEffect_Parms CreateVehicleEffect_Parms;
	CreateVehicleEffect_Parms.EffectIndex = EffectIndex;

	this->ProcessEvent ( pFnCreateVehicleEffect, &CreateVehicleEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.IsDriverSeat
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AVehicle*                TestSeatPawn                   ( CPF_Parm )

bool AUTVehicle::IsDriverSeat ( class AVehicle* TestSeatPawn )
{
	static UFunction* pFnIsDriverSeat = NULL;

	if ( ! pFnIsDriverSeat )
		pFnIsDriverSeat = (UFunction*) UObject::GObjObjects()->Data[ 39573 ];

	AUTVehicle_execIsDriverSeat_Parms IsDriverSeat_Parms;
	IsDriverSeat_Parms.TestSeatPawn = TestSeatPawn;

	this->ProcessEvent ( pFnIsDriverSeat, &IsDriverSeat_Parms, NULL );

	return IsDriverSeat_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.IsGoodTowTruck
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::IsGoodTowTruck ( )
{
	static UFunction* pFnIsGoodTowTruck = NULL;

	if ( ! pFnIsGoodTowTruck )
		pFnIsGoodTowTruck = (UFunction*) UObject::GObjObjects()->Data[ 39571 ];

	AUTVehicle_execIsGoodTowTruck_Parms IsGoodTowTruck_Parms;

	this->ProcessEvent ( pFnIsGoodTowTruck, &IsGoodTowTruck_Parms, NULL );

	return IsGoodTowTruck_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.FastVehicle
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicle::FastVehicle ( )
{
	static UFunction* pFnFastVehicle = NULL;

	if ( ! pFnFastVehicle )
		pFnFastVehicle = (UFunction*) UObject::GObjObjects()->Data[ 39569 ];

	AUTVehicle_execFastVehicle_Parms FastVehicle_Parms;

	this->ProcessEvent ( pFnFastVehicle, &FastVehicle_Parms, NULL );

	return FastVehicle_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.JumpOutCheck
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUTVehicle::eventJumpOutCheck ( )
{
	static UFunction* pFnJumpOutCheck = NULL;

	if ( ! pFnJumpOutCheck )
		pFnJumpOutCheck = (UFunction*) UObject::GObjObjects()->Data[ 39568 ];

	AUTVehicle_eventJumpOutCheck_Parms JumpOutCheck_Parms;

	this->ProcessEvent ( pFnJumpOutCheck, &JumpOutCheck_Parms, NULL );
};

// Function GridVehicle.UTVehicle.DrawKillIcon
// [0x00822102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          ScreenX                        ( CPF_Parm )
// float                          ScreenY                        ( CPF_Parm )
// float                          HUDScaleX                      ( CPF_Parm )
// float                          HUDScaleY                      ( CPF_Parm )

void AUTVehicle::DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY )
{
	static UFunction* pFnDrawKillIcon = NULL;

	if ( ! pFnDrawKillIcon )
		pFnDrawKillIcon = (UFunction*) UObject::GObjObjects()->Data[ 39561 ];

	AUTVehicle_execDrawKillIcon_Parms DrawKillIcon_Parms;
	DrawKillIcon_Parms.Canvas = Canvas;
	DrawKillIcon_Parms.ScreenX = ScreenX;
	DrawKillIcon_Parms.ScreenY = ScreenY;
	DrawKillIcon_Parms.HUDScaleX = HUDScaleX;
	DrawKillIcon_Parms.HUDScaleY = HUDScaleY;

	this->ProcessEvent ( pFnDrawKillIcon, &DrawKillIcon_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AUTVehicle::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 39559 ];

	AUTVehicle_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTVehicle.EjectSeat
// [0x00020002] 
// Parameters infos:
// int                            SeatIdx                        ( CPF_Parm )

void AUTVehicle::EjectSeat ( int SeatIdx )
{
	static UFunction* pFnEjectSeat = NULL;

	if ( ! pFnEjectSeat )
		pFnEjectSeat = (UFunction*) UObject::GObjObjects()->Data[ 39556 ];

	AUTVehicle_execEjectSeat_Parms EjectSeat_Parms;
	EjectSeat_Parms.SeatIdx = SeatIdx;

	this->ProcessEvent ( pFnEjectSeat, &EjectSeat_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SelfDestruct
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ImpactedActor                  ( CPF_Parm )

void AUTVehicle::eventSelfDestruct ( class AActor* ImpactedActor )
{
	static UFunction* pFnSelfDestruct = NULL;

	if ( ! pFnSelfDestruct )
		pFnSelfDestruct = (UFunction*) UObject::GObjObjects()->Data[ 39554 ];

	AUTVehicle_eventSelfDestruct_Parms SelfDestruct_Parms;
	SelfDestruct_Parms.ImpactedActor = ImpactedActor;

	this->ProcessEvent ( pFnSelfDestruct, &SelfDestruct_Parms, NULL );
};

// Function GridVehicle.UTVehicle.StopSpawnEffect
// [0x00020102] 
// Parameters infos:

void AUTVehicle::StopSpawnEffect ( )
{
	static UFunction* pFnStopSpawnEffect = NULL;

	if ( ! pFnStopSpawnEffect )
		pFnStopSpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 39552 ];

	AUTVehicle_execStopSpawnEffect_Parms StopSpawnEffect_Parms;

	this->ProcessEvent ( pFnStopSpawnEffect, &StopSpawnEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PlaySpawnEffect
// [0x00020102] 
// Parameters infos:

void AUTVehicle::PlaySpawnEffect ( )
{
	static UFunction* pFnPlaySpawnEffect = NULL;

	if ( ! pFnPlaySpawnEffect )
		pFnPlaySpawnEffect = (UFunction*) UObject::GObjObjects()->Data[ 39549 ];

	AUTVehicle_execPlaySpawnEffect_Parms PlaySpawnEffect_Parms;

	this->ProcessEvent ( pFnPlaySpawnEffect, &PlaySpawnEffect_Parms, NULL );
};

// Function GridVehicle.UTVehicle.GetChargePower
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTVehicle::GetChargePower ( )
{
	static UFunction* pFnGetChargePower = NULL;

	if ( ! pFnGetChargePower )
		pFnGetChargePower = (UFunction*) UObject::GObjObjects()->Data[ 39547 ];

	AUTVehicle_execGetChargePower_Parms GetChargePower_Parms;

	this->ProcessEvent ( pFnGetChargePower, &GetChargePower_Parms, NULL );

	return GetChargePower_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AUTVehicle::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 39545 ];

	AUTVehicle_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GridVehicle.UTVehicle.SetInputs
// [0x00820102] 
// Parameters infos:
// float                          InForward                      ( CPF_Parm )
// float                          InStrafe                       ( CPF_Parm )
// float                          InUp                           ( CPF_Parm )

void AUTVehicle::SetInputs ( float InForward, float InStrafe, float InUp )
{
	static UFunction* pFnSetInputs = NULL;

	if ( ! pFnSetInputs )
		pFnSetInputs = (UFunction*) UObject::GObjObjects()->Data[ 39530 ];

	AUTVehicle_execSetInputs_Parms SetInputs_Parms;
	SetInputs_Parms.InForward = InForward;
	SetInputs_Parms.InStrafe = InStrafe;
	SetInputs_Parms.InUp = InUp;

	this->ProcessEvent ( pFnSetInputs, &SetInputs_Parms, NULL );
};

// Function GridVehicle.UTVehicle.UpdateLookSteerStatus
// [0x00020102] 
// Parameters infos:

void AUTVehicle::UpdateLookSteerStatus ( )
{
	static UFunction* pFnUpdateLookSteerStatus = NULL;

	if ( ! pFnUpdateLookSteerStatus )
		pFnUpdateLookSteerStatus = (UFunction*) UObject::GObjObjects()->Data[ 39529 ];

	AUTVehicle_execUpdateLookSteerStatus_Parms UpdateLookSteerStatus_Parms;

	this->ProcessEvent ( pFnUpdateLookSteerStatus, &UpdateLookSteerStatus_Parms, NULL );
};

// Function GridVehicle.UTVehicle.CreateDamageMaterialInstance
// [0x00020102] 
// Parameters infos:

void AUTVehicle::CreateDamageMaterialInstance ( )
{
	static UFunction* pFnCreateDamageMaterialInstance = NULL;

	if ( ! pFnCreateDamageMaterialInstance )
		pFnCreateDamageMaterialInstance = (UFunction*) UObject::GObjObjects()->Data[ 39528 ];

	AUTVehicle_execCreateDamageMaterialInstance_Parms CreateDamageMaterialInstance_Parms;

	this->ProcessEvent ( pFnCreateDamageMaterialInstance, &CreateDamageMaterialInstance_Parms, NULL );
};

// Function GridVehicle.UTVehicle.ReattachMesh
// [0x00020102] 
// Parameters infos:

void AUTVehicle::ReattachMesh ( )
{
	static UFunction* pFnReattachMesh = NULL;

	if ( ! pFnReattachMesh )
		pFnReattachMesh = (UFunction*) UObject::GObjObjects()->Data[ 39527 ];

	AUTVehicle_execReattachMesh_Parms ReattachMesh_Parms;

	this->ProcessEvent ( pFnReattachMesh, &ReattachMesh_Parms, NULL );
};

// Function GridVehicle.UTVehicle.UpdateShadowSettings
// [0x00020102] 
// Parameters infos:
// unsigned long                  bWantShadow                    ( CPF_Parm )

void AUTVehicle::UpdateShadowSettings ( unsigned long bWantShadow )
{
	static UFunction* pFnUpdateShadowSettings = NULL;

	if ( ! pFnUpdateShadowSettings )
		pFnUpdateShadowSettings = (UFunction*) UObject::GObjObjects()->Data[ 39523 ];

	AUTVehicle_execUpdateShadowSettings_Parms UpdateShadowSettings_Parms;
	UpdateShadowSettings_Parms.bWantShadow = bWantShadow;

	this->ProcessEvent ( pFnUpdateShadowSettings, &UpdateShadowSettings_Parms, NULL );
};

// Function GridVehicle.UTVehicle.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUTVehicle::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 39521 ];

	AUTVehicle_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GridVehicle.UTVehicle.IsSeatControllerReplicationViewer
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x03E7]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

bool AUTVehicle::IsSeatControllerReplicationViewer ( int SeatIndex )
{
	static UFunction* pFnIsSeatControllerReplicationViewer = NULL;

	if ( ! pFnIsSeatControllerReplicationViewer )
		pFnIsSeatControllerReplicationViewer = (UFunction*) UObject::GObjObjects()->Data[ 39518 ];

	AUTVehicle_execIsSeatControllerReplicationViewer_Parms IsSeatControllerReplicationViewer_Parms;
	IsSeatControllerReplicationViewer_Parms.SeatIndex = SeatIndex;

	unsigned short NativeIndex = pFnIsSeatControllerReplicationViewer->iNative;
	pFnIsSeatControllerReplicationViewer->iNative = 0;

	pFnIsSeatControllerReplicationViewer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSeatControllerReplicationViewer, &IsSeatControllerReplicationViewer_Parms, NULL );

	pFnIsSeatControllerReplicationViewer->FunctionFlags |= 0x400;

	pFnIsSeatControllerReplicationViewer->iNative = NativeIndex;

	return IsSeatControllerReplicationViewer_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetBarrelIndex
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

int AUTVehicle::GetBarrelIndex ( int SeatIndex )
{
	static UFunction* pFnGetBarrelIndex = NULL;

	if ( ! pFnGetBarrelIndex )
		pFnGetBarrelIndex = (UFunction*) UObject::GObjObjects()->Data[ 39515 ];

	AUTVehicle_execGetBarrelIndex_Parms GetBarrelIndex_Parms;
	GetBarrelIndex_Parms.SeatIndex = SeatIndex;

	pFnGetBarrelIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBarrelIndex, &GetBarrelIndex_Parms, NULL );

	pFnGetBarrelIndex->FunctionFlags |= 0x400;

	return GetBarrelIndex_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.GetSeatPivotPoint
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector AUTVehicle::GetSeatPivotPoint ( int SeatIndex )
{
	static UFunction* pFnGetSeatPivotPoint = NULL;

	if ( ! pFnGetSeatPivotPoint )
		pFnGetSeatPivotPoint = (UFunction*) UObject::GObjObjects()->Data[ 39512 ];

	AUTVehicle_execGetSeatPivotPoint_Parms GetSeatPivotPoint_Parms;
	GetSeatPivotPoint_Parms.SeatIndex = SeatIndex;

	pFnGetSeatPivotPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSeatPivotPoint, &GetSeatPivotPoint_Parms, NULL );

	pFnGetSeatPivotPoint->FunctionFlags |= 0x400;

	return GetSeatPivotPoint_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.ForceWeaponRotation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// struct FRotator                NewRotation                    ( CPF_Parm )

void AUTVehicle::ForceWeaponRotation ( int SeatIndex, struct FRotator NewRotation )
{
	static UFunction* pFnForceWeaponRotation = NULL;

	if ( ! pFnForceWeaponRotation )
		pFnForceWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 39509 ];

	AUTVehicle_execForceWeaponRotation_Parms ForceWeaponRotation_Parms;
	ForceWeaponRotation_Parms.SeatIndex = SeatIndex;
	memcpy ( &ForceWeaponRotation_Parms.NewRotation, &NewRotation, 0xC );

	pFnForceWeaponRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceWeaponRotation, &ForceWeaponRotation_Parms, NULL );

	pFnForceWeaponRotation->FunctionFlags |= 0x400;
};

// Function GridVehicle.UTVehicle.SeatFiringMode
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  NewFireMode                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

unsigned char AUTVehicle::SeatFiringMode ( int SeatIndex, unsigned char NewFireMode, unsigned long bReadValue )
{
	static UFunction* pFnSeatFiringMode = NULL;

	if ( ! pFnSeatFiringMode )
		pFnSeatFiringMode = (UFunction*) UObject::GObjObjects()->Data[ 39504 ];

	AUTVehicle_execSeatFiringMode_Parms SeatFiringMode_Parms;
	SeatFiringMode_Parms.SeatIndex = SeatIndex;
	SeatFiringMode_Parms.NewFireMode = NewFireMode;
	SeatFiringMode_Parms.bReadValue = bReadValue;

	pFnSeatFiringMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatFiringMode, &SeatFiringMode_Parms, NULL );

	pFnSeatFiringMode->FunctionFlags |= 0x400;

	return SeatFiringMode_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SeatFlashCount
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  NewCount                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

unsigned char AUTVehicle::SeatFlashCount ( int SeatIndex, unsigned char NewCount, unsigned long bReadValue )
{
	static UFunction* pFnSeatFlashCount = NULL;

	if ( ! pFnSeatFlashCount )
		pFnSeatFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 39499 ];

	AUTVehicle_execSeatFlashCount_Parms SeatFlashCount_Parms;
	SeatFlashCount_Parms.SeatIndex = SeatIndex;
	SeatFlashCount_Parms.NewCount = NewCount;
	SeatFlashCount_Parms.bReadValue = bReadValue;

	pFnSeatFlashCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatFlashCount, &SeatFlashCount_Parms, NULL );

	pFnSeatFlashCount->FunctionFlags |= 0x400;

	return SeatFlashCount_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SeatFlashLocation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

struct FVector AUTVehicle::SeatFlashLocation ( int SeatIndex, struct FVector NewLoc, unsigned long bReadValue )
{
	static UFunction* pFnSeatFlashLocation = NULL;

	if ( ! pFnSeatFlashLocation )
		pFnSeatFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 39494 ];

	AUTVehicle_execSeatFlashLocation_Parms SeatFlashLocation_Parms;
	SeatFlashLocation_Parms.SeatIndex = SeatIndex;
	memcpy ( &SeatFlashLocation_Parms.NewLoc, &NewLoc, 0xC );
	SeatFlashLocation_Parms.bReadValue = bReadValue;

	pFnSeatFlashLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatFlashLocation, &SeatFlashLocation_Parms, NULL );

	pFnSeatFlashLocation->FunctionFlags |= 0x400;

	return SeatFlashLocation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicle.SeatWeaponRotation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// struct FRotator                NewRot                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

struct FRotator AUTVehicle::SeatWeaponRotation ( int SeatIndex, struct FRotator NewRot, unsigned long bReadValue )
{
	static UFunction* pFnSeatWeaponRotation = NULL;

	if ( ! pFnSeatWeaponRotation )
		pFnSeatWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 39489 ];

	AUTVehicle_execSeatWeaponRotation_Parms SeatWeaponRotation_Parms;
	SeatWeaponRotation_Parms.SeatIndex = SeatIndex;
	memcpy ( &SeatWeaponRotation_Parms.NewRot, &NewRot, 0xC );
	SeatWeaponRotation_Parms.bReadValue = bReadValue;

	pFnSeatWeaponRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatWeaponRotation, &SeatWeaponRotation_Parms, NULL );

	pFnSeatWeaponRotation->FunctionFlags |= 0x400;

	return SeatWeaponRotation_Parms.ReturnValue;
};

// Function GridVehicle.UTHoverVehicle.BlowupVehicle
// [0x00020102] 
// Parameters infos:

void AUTHoverVehicle::BlowupVehicle ( )
{
	static UFunction* pFnBlowupVehicle = NULL;

	if ( ! pFnBlowupVehicle )
		pFnBlowupVehicle = (UFunction*) UObject::GObjObjects()->Data[ 40297 ];

	AUTHoverVehicle_execBlowupVehicle_Parms BlowupVehicle_Parms;

	this->ProcessEvent ( pFnBlowupVehicle, &BlowupVehicle_Parms, NULL );
};

// Function GridVehicle.UTAirVehicle.Dodge
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  DoubleClickMove                ( CPF_Parm )

bool AUTAirVehicle::Dodge ( unsigned char DoubleClickMove )
{
	static UFunction* pFnDodge = NULL;

	if ( ! pFnDodge )
		pFnDodge = (UFunction*) UObject::GObjObjects()->Data[ 40332 ];

	AUTAirVehicle_execDodge_Parms Dodge_Parms;
	Dodge_Parms.DoubleClickMove = DoubleClickMove;

	this->ProcessEvent ( pFnDodge, &Dodge_Parms, NULL );

	return Dodge_Parms.ReturnValue;
};

// Function GridVehicle.UTAirVehicle.FastVehicle
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTAirVehicle::FastVehicle ( )
{
	static UFunction* pFnFastVehicle = NULL;

	if ( ! pFnFastVehicle )
		pFnFastVehicle = (UFunction*) UObject::GObjObjects()->Data[ 40330 ];

	AUTAirVehicle_execFastVehicle_Parms FastVehicle_Parms;

	this->ProcessEvent ( pFnFastVehicle, &FastVehicle_Parms, NULL );

	return FastVehicle_Parms.ReturnValue;
};

// Function GridVehicle.UTAirVehicle.RecommendLongRangedAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTAirVehicle::RecommendLongRangedAttack ( )
{
	static UFunction* pFnRecommendLongRangedAttack = NULL;

	if ( ! pFnRecommendLongRangedAttack )
		pFnRecommendLongRangedAttack = (UFunction*) UObject::GObjObjects()->Data[ 40328 ];

	AUTAirVehicle_execRecommendLongRangedAttack_Parms RecommendLongRangedAttack_Parms;

	this->ProcessEvent ( pFnRecommendLongRangedAttack, &RecommendLongRangedAttack_Parms, NULL );

	return RecommendLongRangedAttack_Parms.ReturnValue;
};

// Function GridVehicle.UTAirVehicle.SetDriving
// [0x00020102] 
// Parameters infos:
// unsigned long                  bNewDriving                    ( CPF_Parm )

void AUTAirVehicle::SetDriving ( unsigned long bNewDriving )
{
	static UFunction* pFnSetDriving = NULL;

	if ( ! pFnSetDriving )
		pFnSetDriving = (UFunction*) UObject::GObjObjects()->Data[ 40313 ];

	AUTAirVehicle_execSetDriving_Parms SetDriving_Parms;
	SetDriving_Parms.bNewDriving = bNewDriving;

	this->ProcessEvent ( pFnSetDriving, &SetDriving_Parms, NULL );
};

// Function GridVehicle.UTAirVehicle.GetGravityZ
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTAirVehicle::GetGravityZ ( )
{
	static UFunction* pFnGetGravityZ = NULL;

	if ( ! pFnGetGravityZ )
		pFnGetGravityZ = (UFunction*) UObject::GObjObjects()->Data[ 40311 ];

	AUTAirVehicle_execGetGravityZ_Parms GetGravityZ_Parms;

	pFnGetGravityZ->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGravityZ, &GetGravityZ_Parms, NULL );

	pFnGetGravityZ->FunctionFlags |= 0x400;

	return GetGravityZ_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.ApplyWeaponEffects
// [0x00024102] 
// Parameters infos:
// int                            OverlayFlags                   ( CPF_Parm )
// int                            SeatIndex                      ( CPF_OptionalParm | CPF_Parm )

void AUTWeaponPawn::ApplyWeaponEffects ( int OverlayFlags, int SeatIndex )
{
	static UFunction* pFnApplyWeaponEffects = NULL;

	if ( ! pFnApplyWeaponEffects )
		pFnApplyWeaponEffects = (UFunction*) UObject::GObjObjects()->Data[ 40679 ];

	AUTWeaponPawn_execApplyWeaponEffects_Parms ApplyWeaponEffects_Parms;
	ApplyWeaponEffects_Parms.OverlayFlags = OverlayFlags;
	ApplyWeaponEffects_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnApplyWeaponEffects, &ApplyWeaponEffects_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.TooCloseToAttack
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AUTWeaponPawn::TooCloseToAttack ( class AActor* Other )
{
	static UFunction* pFnTooCloseToAttack = NULL;

	if ( ! pFnTooCloseToAttack )
		pFnTooCloseToAttack = (UFunction*) UObject::GObjObjects()->Data[ 40675 ];

	AUTWeaponPawn_execTooCloseToAttack_Parms TooCloseToAttack_Parms;
	TooCloseToAttack_Parms.Other = Other;

	this->ProcessEvent ( pFnTooCloseToAttack, &TooCloseToAttack_Parms, NULL );

	return TooCloseToAttack_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.Died
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool AUTWeaponPawn::Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnDied = NULL;

	if ( ! pFnDied )
		pFnDied = (UFunction*) UObject::GObjObjects()->Data[ 40669 ];

	AUTWeaponPawn_execDied_Parms Died_Parms;
	Died_Parms.Killer = Killer;
	Died_Parms.DamageType = DamageType;
	memcpy ( &Died_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnDied, &Died_Parms, NULL );

	return Died_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.DriverLeave
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForceLeave                    ( CPF_Parm )

bool AUTWeaponPawn::DriverLeave ( unsigned long bForceLeave )
{
	static UFunction* pFnDriverLeave = NULL;

	if ( ! pFnDriverLeave )
		pFnDriverLeave = (UFunction*) UObject::GObjObjects()->Data[ 40666 ];

	AUTWeaponPawn_execDriverLeave_Parms DriverLeave_Parms;
	DriverLeave_Parms.bForceLeave = bForceLeave;

	this->ProcessEvent ( pFnDriverLeave, &DriverLeave_Parms, NULL );

	return DriverLeave_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.FaceRotation
// [0x00020102] 
// Parameters infos:
// struct FRotator                NewRotation                    ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )

void AUTWeaponPawn::FaceRotation ( struct FRotator NewRotation, float DeltaTime )
{
	static UFunction* pFnFaceRotation = NULL;

	if ( ! pFnFaceRotation )
		pFnFaceRotation = (UFunction*) UObject::GObjObjects()->Data[ 40663 ];

	AUTWeaponPawn_execFaceRotation_Parms FaceRotation_Parms;
	memcpy ( &FaceRotation_Parms.NewRotation, &NewRotation, 0xC );
	FaceRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnFaceRotation, &FaceRotation_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.AttachDriver
// [0x00020102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUTWeaponPawn::AttachDriver ( class APawn* P )
{
	static UFunction* pFnAttachDriver = NULL;

	if ( ! pFnAttachDriver )
		pFnAttachDriver = (UFunction*) UObject::GObjObjects()->Data[ 40660 ];

	AUTWeaponPawn_execAttachDriver_Parms AttachDriver_Parms;
	AttachDriver_Parms.P = P;

	this->ProcessEvent ( pFnAttachDriver, &AttachDriver_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.SetBaseEyeheight
// [0x00020102] 
// Parameters infos:

void AUTWeaponPawn::SetBaseEyeheight ( )
{
	static UFunction* pFnSetBaseEyeheight = NULL;

	if ( ! pFnSetBaseEyeheight )
		pFnSetBaseEyeheight = (UFunction*) UObject::GObjObjects()->Data[ 40659 ];

	AUTWeaponPawn_execSetBaseEyeheight_Parms SetBaseEyeheight_Parms;

	this->ProcessEvent ( pFnSetBaseEyeheight, &SetBaseEyeheight_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.GetCollisionRadius
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTWeaponPawn::GetCollisionRadius ( )
{
	static UFunction* pFnGetCollisionRadius = NULL;

	if ( ! pFnGetCollisionRadius )
		pFnGetCollisionRadius = (UFunction*) UObject::GObjObjects()->Data[ 40657 ];

	AUTWeaponPawn_execGetCollisionRadius_Parms GetCollisionRadius_Parms;

	this->ProcessEvent ( pFnGetCollisionRadius, &GetCollisionRadius_Parms, NULL );

	return GetCollisionRadius_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.DoJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bUpdating                      ( CPF_Parm )

bool AUTWeaponPawn::DoJump ( unsigned long bUpdating )
{
	static UFunction* pFnDoJump = NULL;

	if ( ! pFnDoJump )
		pFnDoJump = (UFunction*) UObject::GObjObjects()->Data[ 40654 ];

	AUTWeaponPawn_execDoJump_Parms DoJump_Parms;
	DoJump_Parms.bUpdating = bUpdating;

	this->ProcessEvent ( pFnDoJump, &DoJump_Parms, NULL );

	return DoJump_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.SetMovementPhysics
// [0x00020000] 
// Parameters infos:

void AUTWeaponPawn::SetMovementPhysics ( )
{
	static UFunction* pFnSetMovementPhysics = NULL;

	if ( ! pFnSetMovementPhysics )
		pFnSetMovementPhysics = (UFunction*) UObject::GObjObjects()->Data[ 40653 ];

	AUTWeaponPawn_execSetMovementPhysics_Parms SetMovementPhysics_Parms;

	this->ProcessEvent ( pFnSetMovementPhysics, &SetMovementPhysics_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.BaseChange
// [0x00020820] ( FUNC_Event )
// Parameters infos:

void AUTWeaponPawn::eventBaseChange ( )
{
	static UFunction* pFnBaseChange = NULL;

	if ( ! pFnBaseChange )
		pFnBaseChange = (UFunction*) UObject::GObjObjects()->Data[ 40652 ];

	AUTWeaponPawn_eventBaseChange_Parms BaseChange_Parms;

	this->ProcessEvent ( pFnBaseChange, &BaseChange_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.JumpOffPawn
// [0x00020000] 
// Parameters infos:

void AUTWeaponPawn::JumpOffPawn ( )
{
	static UFunction* pFnJumpOffPawn = NULL;

	if ( ! pFnJumpOffPawn )
		pFnJumpOffPawn = (UFunction*) UObject::GObjObjects()->Data[ 40651 ];

	AUTWeaponPawn_execJumpOffPawn_Parms JumpOffPawn_Parms;

	this->ProcessEvent ( pFnJumpOffPawn, &JumpOffPawn_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.AddVelocity
// [0x00024000] 
// Parameters infos:
// struct FVector                 NewVelocity                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )

void AUTWeaponPawn::AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnAddVelocity = NULL;

	if ( ! pFnAddVelocity )
		pFnAddVelocity = (UFunction*) UObject::GObjObjects()->Data[ 40646 ];

	AUTWeaponPawn_execAddVelocity_Parms AddVelocity_Parms;
	memcpy ( &AddVelocity_Parms.NewVelocity, &NewVelocity, 0xC );
	memcpy ( &AddVelocity_Parms.HitLocation, &HitLocation, 0xC );
	AddVelocity_Parms.DamageType = DamageType;
	memcpy ( &AddVelocity_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAddVelocity, &AddVelocity_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.DropToGround
// [0x00020000] 
// Parameters infos:

void AUTWeaponPawn::DropToGround ( )
{
	static UFunction* pFnDropToGround = NULL;

	if ( ! pFnDropToGround )
		pFnDropToGround = (UFunction*) UObject::GObjObjects()->Data[ 40645 ];

	AUTWeaponPawn_execDropToGround_Parms DropToGround_Parms;

	this->ProcessEvent ( pFnDropToGround, &DropToGround_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.PlaceExitingDriver
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ExitingDriver                  ( CPF_OptionalParm | CPF_Parm )

bool AUTWeaponPawn::PlaceExitingDriver ( class APawn* ExitingDriver )
{
	static UFunction* pFnPlaceExitingDriver = NULL;

	if ( ! pFnPlaceExitingDriver )
		pFnPlaceExitingDriver = (UFunction*) UObject::GObjObjects()->Data[ 40642 ];

	AUTWeaponPawn_execPlaceExitingDriver_Parms PlaceExitingDriver_Parms;
	PlaceExitingDriver_Parms.ExitingDriver = ExitingDriver;

	this->ProcessEvent ( pFnPlaceExitingDriver, &PlaceExitingDriver_Parms, NULL );

	return PlaceExitingDriver_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.AdjustCameraScale
// [0x00020102] 
// Parameters infos:
// unsigned long                  bIn                            ( CPF_Parm )

void AUTWeaponPawn::AdjustCameraScale ( unsigned long bIn )
{
	static UFunction* pFnAdjustCameraScale = NULL;

	if ( ! pFnAdjustCameraScale )
		pFnAdjustCameraScale = (UFunction*) UObject::GObjObjects()->Data[ 40640 ];

	AUTWeaponPawn_execAdjustCameraScale_Parms AdjustCameraScale_Parms;
	AdjustCameraScale_Parms.bIn = bIn;

	this->ProcessEvent ( pFnAdjustCameraScale, &AdjustCameraScale_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.ServerChangeSeat
// [0x002200C2] 
// Parameters infos:
// int                            RequestedSeat                  ( CPF_Parm )

void AUTWeaponPawn::ServerChangeSeat ( int RequestedSeat )
{
	static UFunction* pFnServerChangeSeat = NULL;

	if ( ! pFnServerChangeSeat )
		pFnServerChangeSeat = (UFunction*) UObject::GObjObjects()->Data[ 40638 ];

	AUTWeaponPawn_execServerChangeSeat_Parms ServerChangeSeat_Parms;
	ServerChangeSeat_Parms.RequestedSeat = RequestedSeat;

	this->ProcessEvent ( pFnServerChangeSeat, &ServerChangeSeat_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.ServerAdjacentSeat
// [0x002200C2] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

void AUTWeaponPawn::ServerAdjacentSeat ( int Direction, class AController* C )
{
	static UFunction* pFnServerAdjacentSeat = NULL;

	if ( ! pFnServerAdjacentSeat )
		pFnServerAdjacentSeat = (UFunction*) UObject::GObjObjects()->Data[ 40635 ];

	AUTWeaponPawn_execServerAdjacentSeat_Parms ServerAdjacentSeat_Parms;
	ServerAdjacentSeat_Parms.Direction = Direction;
	ServerAdjacentSeat_Parms.C = C;

	this->ProcessEvent ( pFnServerAdjacentSeat, &ServerAdjacentSeat_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.DriverLeft
// [0x00020002] 
// Parameters infos:

void AUTWeaponPawn::DriverLeft ( )
{
	static UFunction* pFnDriverLeft = NULL;

	if ( ! pFnDriverLeft )
		pFnDriverLeft = (UFunction*) UObject::GObjObjects()->Data[ 40634 ];

	AUTWeaponPawn_execDriverLeft_Parms DriverLeft_Parms;

	this->ProcessEvent ( pFnDriverLeft, &DriverLeft_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.PossessedBy
// [0x00020002] 
// Parameters infos:
// class AController*             C                              ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void AUTWeaponPawn::PossessedBy ( class AController* C, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossessedBy = NULL;

	if ( ! pFnPossessedBy )
		pFnPossessedBy = (UFunction*) UObject::GObjObjects()->Data[ 40631 ];

	AUTWeaponPawn_execPossessedBy_Parms PossessedBy_Parms;
	PossessedBy_Parms.C = C;
	PossessedBy_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossessedBy, &PossessedBy_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.ClearFlashLocation
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )

void AUTWeaponPawn::ClearFlashLocation ( class AWeapon* Who )
{
	static UFunction* pFnClearFlashLocation = NULL;

	if ( ! pFnClearFlashLocation )
		pFnClearFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 40629 ];

	AUTWeaponPawn_execClearFlashLocation_Parms ClearFlashLocation_Parms;
	ClearFlashLocation_Parms.Who = Who;

	this->ProcessEvent ( pFnClearFlashLocation, &ClearFlashLocation_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.SetFlashLocation
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_Parm )

void AUTWeaponPawn::SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewLoc )
{
	static UFunction* pFnSetFlashLocation = NULL;

	if ( ! pFnSetFlashLocation )
		pFnSetFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 40625 ];

	AUTWeaponPawn_execSetFlashLocation_Parms SetFlashLocation_Parms;
	SetFlashLocation_Parms.Who = Who;
	SetFlashLocation_Parms.FireModeNum = FireModeNum;
	memcpy ( &SetFlashLocation_Parms.NewLoc, &NewLoc, 0xC );

	this->ProcessEvent ( pFnSetFlashLocation, &SetFlashLocation_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.ClearFlashCount
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )

void AUTWeaponPawn::ClearFlashCount ( class AWeapon* Who )
{
	static UFunction* pFnClearFlashCount = NULL;

	if ( ! pFnClearFlashCount )
		pFnClearFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 40623 ];

	AUTWeaponPawn_execClearFlashCount_Parms ClearFlashCount_Parms;
	ClearFlashCount_Parms.Who = Who;

	this->ProcessEvent ( pFnClearFlashCount, &ClearFlashCount_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.IncrementFlashCount
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Who                            ( CPF_Parm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

void AUTWeaponPawn::IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum )
{
	static UFunction* pFnIncrementFlashCount = NULL;

	if ( ! pFnIncrementFlashCount )
		pFnIncrementFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 40620 ];

	AUTWeaponPawn_execIncrementFlashCount_Parms IncrementFlashCount_Parms;
	IncrementFlashCount_Parms.Who = Who;
	IncrementFlashCount_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnIncrementFlashCount, &IncrementFlashCount_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.SetFiringMode
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 Weap                           ( CPF_Parm )
// unsigned char                  FiringModeNum                  ( CPF_Parm )

void AUTWeaponPawn::SetFiringMode ( class AWeapon* Weap, unsigned char FiringModeNum )
{
	static UFunction* pFnSetFiringMode = NULL;

	if ( ! pFnSetFiringMode )
		pFnSetFiringMode = (UFunction*) UObject::GObjObjects()->Data[ 40617 ];

	AUTWeaponPawn_execSetFiringMode_Parms SetFiringMode_Parms;
	SetFiringMode_Parms.Weap = Weap;
	SetFiringMode_Parms.FiringModeNum = FiringModeNum;

	this->ProcessEvent ( pFnSetFiringMode, &SetFiringMode_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.ProcessViewRotation
// [0x00420102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void AUTWeaponPawn::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 40610 ];

	AUTWeaponPawn_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GridVehicle.UTWeaponPawn.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AUTWeaponPawn::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 40603 ];

	AUTWeaponPawn_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTWeaponPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 40601 ];

	AUTWeaponPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GridVehicle.UTWeaponPawn.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AUTWeaponPawn::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 40596 ];

	AUTWeaponPawn_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GridVehicle.UTWeaponPawn.GetVehicleDrivingStatName
// [0x00020002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName AUTWeaponPawn::GetVehicleDrivingStatName ( )
{
	static UFunction* pFnGetVehicleDrivingStatName = NULL;

	if ( ! pFnGetVehicleDrivingStatName )
		pFnGetVehicleDrivingStatName = (UFunction*) UObject::GObjObjects()->Data[ 40593 ];

	AUTWeaponPawn_execGetVehicleDrivingStatName_Parms GetVehicleDrivingStatName_Parms;

	this->ProcessEvent ( pFnGetVehicleDrivingStatName, &GetVehicleDrivingStatName_Parms, NULL );

	return GetVehicleDrivingStatName_Parms.ReturnValue;
};

// Function GridVehicle.UTWeaponPawn.GetTargetLocation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRequestAlternateLoc           ( CPF_OptionalParm | CPF_Parm )

struct FVector AUTWeaponPawn::GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc )
{
	static UFunction* pFnGetTargetLocation = NULL;

	if ( ! pFnGetTargetLocation )
		pFnGetTargetLocation = (UFunction*) UObject::GObjObjects()->Data[ 40589 ];

	AUTWeaponPawn_execGetTargetLocation_Parms GetTargetLocation_Parms;
	GetTargetLocation_Parms.RequestedBy = RequestedBy;
	GetTargetLocation_Parms.bRequestAlternateLoc = bRequestAlternateLoc;

	pFnGetTargetLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetLocation, &GetTargetLocation_Parms, NULL );

	pFnGetTargetLocation->FunctionFlags |= 0x400;

	return GetTargetLocation_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.ServerSetZoom
// [0x002200C2] 
// Parameters infos:
// unsigned long                  bNowZoomed                     ( CPF_Parm )

void AUTVehicleWeapon::ServerSetZoom ( unsigned long bNowZoomed )
{
	static UFunction* pFnServerSetZoom = NULL;

	if ( ! pFnServerSetZoom )
		pFnServerSetZoom = (UFunction*) UObject::GObjObjects()->Data[ 40587 ];

	AUTVehicleWeapon_execServerSetZoom_Parms ServerSetZoom_Parms;
	ServerSetZoom_Parms.bNowZoomed = bNowZoomed;

	this->ProcessEvent ( pFnServerSetZoom, &ServerSetZoom_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.WeaponPlaySound
// [0x00824102] 
// Parameters infos:
// class USoundCue*               Sound                          ( CPF_Parm )
// float                          NoiseLoudness                  ( CPF_OptionalParm | CPF_Parm )

void AUTVehicleWeapon::WeaponPlaySound ( class USoundCue* Sound, float NoiseLoudness )
{
	static UFunction* pFnWeaponPlaySound = NULL;

	if ( ! pFnWeaponPlaySound )
		pFnWeaponPlaySound = (UFunction*) UObject::GObjObjects()->Data[ 40580 ];

	AUTVehicleWeapon_execWeaponPlaySound_Parms WeaponPlaySound_Parms;
	WeaponPlaySound_Parms.Sound = Sound;
	WeaponPlaySound_Parms.NoiseLoudness = NoiseLoudness;

	this->ProcessEvent ( pFnWeaponPlaySound, &WeaponPlaySound_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.GetMaxFinalAimAdjustment
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUTVehicleWeapon::GetMaxFinalAimAdjustment ( )
{
	static UFunction* pFnGetMaxFinalAimAdjustment = NULL;

	if ( ! pFnGetMaxFinalAimAdjustment )
		pFnGetMaxFinalAimAdjustment = (UFunction*) UObject::GObjObjects()->Data[ 39663 ];

	AUTVehicleWeapon_execGetMaxFinalAimAdjustment_Parms GetMaxFinalAimAdjustment_Parms;

	this->ProcessEvent ( pFnGetMaxFinalAimAdjustment, &GetMaxFinalAimAdjustment_Parms, NULL );

	return GetMaxFinalAimAdjustment_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.GetTraceOwner
// [0x00020102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* AUTVehicleWeapon::GetTraceOwner ( )
{
	static UFunction* pFnGetTraceOwner = NULL;

	if ( ! pFnGetTraceOwner )
		pFnGetTraceOwner = (UFunction*) UObject::GObjObjects()->Data[ 40578 ];

	AUTVehicleWeapon_execGetTraceOwner_Parms GetTraceOwner_Parms;

	this->ProcessEvent ( pFnGetTraceOwner, &GetTraceOwner_Parms, NULL );

	return GetTraceOwner_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.InstantFireEndTrace
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 StartTrace                     ( CPF_Parm )

struct FVector AUTVehicleWeapon::InstantFireEndTrace ( struct FVector StartTrace )
{
	static UFunction* pFnInstantFireEndTrace = NULL;

	if ( ! pFnInstantFireEndTrace )
		pFnInstantFireEndTrace = (UFunction*) UObject::GObjObjects()->Data[ 40575 ];

	AUTVehicleWeapon_execInstantFireEndTrace_Parms InstantFireEndTrace_Parms;
	memcpy ( &InstantFireEndTrace_Parms.StartTrace, &StartTrace, 0xC );

	this->ProcessEvent ( pFnInstantFireEndTrace, &InstantFireEndTrace_Parms, NULL );

	return InstantFireEndTrace_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.InstantFireStartTrace
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AUTVehicleWeapon::InstantFireStartTrace ( )
{
	static UFunction* pFnInstantFireStartTrace = NULL;

	if ( ! pFnInstantFireStartTrace )
		pFnInstantFireStartTrace = (UFunction*) UObject::GObjObjects()->Data[ 40573 ];

	AUTVehicleWeapon_execInstantFireStartTrace_Parms InstantFireStartTrace_Parms;

	this->ProcessEvent ( pFnInstantFireStartTrace, &InstantFireStartTrace_Parms, NULL );

	return InstantFireStartTrace_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.ProjectileFire
// [0x00020102] 
// Parameters infos:
// class AProjectile*             ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AProjectile* AUTVehicleWeapon::ProjectileFire ( )
{
	static UFunction* pFnProjectileFire = NULL;

	if ( ! pFnProjectileFire )
		pFnProjectileFire = (UFunction*) UObject::GObjObjects()->Data[ 40570 ];

	AUTVehicleWeapon_execProjectileFire_Parms ProjectileFire_Parms;

	this->ProcessEvent ( pFnProjectileFire, &ProjectileFire_Parms, NULL );

	return ProjectileFire_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.EndFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void AUTVehicleWeapon::EndFire ( unsigned char FireModeNum )
{
	static UFunction* pFnEndFire = NULL;

	if ( ! pFnEndFire )
		pFnEndFire = (UFunction*) UObject::GObjObjects()->Data[ 40567 ];

	AUTVehicleWeapon_execEndFire_Parms EndFire_Parms;
	EndFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnEndFire, &EndFire_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.BeginFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void AUTVehicleWeapon::BeginFire ( unsigned char FireModeNum )
{
	static UFunction* pFnBeginFire = NULL;

	if ( ! pFnBeginFire )
		pFnBeginFire = (UFunction*) UObject::GObjObjects()->Data[ 40564 ];

	AUTVehicleWeapon_execBeginFire_Parms BeginFire_Parms;
	BeginFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnBeginFire, &BeginFire_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.GetPhysicalFireStartLoc
// [0x00024102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AimDir                         ( CPF_OptionalParm | CPF_Parm )

struct FVector AUTVehicleWeapon::GetPhysicalFireStartLoc ( struct FVector AimDir )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 40561 ];

	AUTVehicleWeapon_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	memcpy ( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.PutDownWeapon
// [0x00020102] 
// Parameters infos:

void AUTVehicleWeapon::PutDownWeapon ( )
{
	static UFunction* pFnPutDownWeapon = NULL;

	if ( ! pFnPutDownWeapon )
		pFnPutDownWeapon = (UFunction*) UObject::GObjObjects()->Data[ 40560 ];

	AUTVehicleWeapon_execPutDownWeapon_Parms PutDownWeapon_Parms;

	this->ProcessEvent ( pFnPutDownWeapon, &PutDownWeapon_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.Activate
// [0x00020102] 
// Parameters infos:

void AUTVehicleWeapon::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 40559 ];

	AUTVehicleWeapon_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.DetachWeapon
// [0x00020100] 
// Parameters infos:

void AUTVehicleWeapon::DetachWeapon ( )
{
	static UFunction* pFnDetachWeapon = NULL;

	if ( ! pFnDetachWeapon )
		pFnDetachWeapon = (UFunction*) UObject::GObjObjects()->Data[ 40558 ];

	AUTVehicleWeapon_execDetachWeapon_Parms DetachWeapon_Parms;

	this->ProcessEvent ( pFnDetachWeapon, &DetachWeapon_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.AttachWeaponTo
// [0x00024100] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )
// struct FName                   SocketName                     ( CPF_OptionalParm | CPF_Parm )

void AUTVehicleWeapon::AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 40555 ];

	AUTVehicleWeapon_execAttachWeaponTo_Parms AttachWeaponTo_Parms;
	AttachWeaponTo_Parms.MeshCpnt = MeshCpnt;
	memcpy ( &AttachWeaponTo_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.GetFireInterval
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

float AUTVehicleWeapon::GetFireInterval ( unsigned char FireModeNum )
{
	static UFunction* pFnGetFireInterval = NULL;

	if ( ! pFnGetFireInterval )
		pFnGetFireInterval = (UFunction*) UObject::GObjObjects()->Data[ 40552 ];

	AUTVehicleWeapon_execGetFireInterval_Parms GetFireInterval_Parms;
	GetFireInterval_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnGetFireInterval, &GetFireInterval_Parms, NULL );

	return GetFireInterval_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.GetFireTriggerTag
// [0x00022102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BarrelIndex                    ( CPF_Parm )
// int                            FireMode                       ( CPF_Parm )

struct FName AUTVehicleWeapon::GetFireTriggerTag ( int BarrelIndex, int FireMode )
{
	static UFunction* pFnGetFireTriggerTag = NULL;

	if ( ! pFnGetFireTriggerTag )
		pFnGetFireTriggerTag = (UFunction*) UObject::GObjObjects()->Data[ 39993 ];

	AUTVehicleWeapon_execGetFireTriggerTag_Parms GetFireTriggerTag_Parms;
	GetFireTriggerTag_Parms.BarrelIndex = BarrelIndex;
	GetFireTriggerTag_Parms.FireMode = FireMode;

	this->ProcessEvent ( pFnGetFireTriggerTag, &GetFireTriggerTag_Parms, NULL );

	return GetFireTriggerTag_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.IsAimCorrect
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUTVehicleWeapon::eventIsAimCorrect ( )
{
	static UFunction* pFnIsAimCorrect = NULL;

	if ( ! pFnIsAimCorrect )
		pFnIsAimCorrect = (UFunction*) UObject::GObjObjects()->Data[ 39103 ];

	AUTVehicleWeapon_eventIsAimCorrect_Parms IsAimCorrect_Parms;

	this->ProcessEvent ( pFnIsAimCorrect, &IsAimCorrect_Parms, NULL );

	return IsAimCorrect_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.GetFireStartLocationAndRotation
// [0x00420102] 
// Parameters infos:
// struct FVector                 StartLocation                  ( CPF_Parm | CPF_OutParm )
// struct FRotator                StartRotation                  ( CPF_Parm | CPF_OutParm )

void AUTVehicleWeapon::GetFireStartLocationAndRotation ( struct FVector* StartLocation, struct FRotator* StartRotation )
{
	static UFunction* pFnGetFireStartLocationAndRotation = NULL;

	if ( ! pFnGetFireStartLocationAndRotation )
		pFnGetFireStartLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 40543 ];

	AUTVehicleWeapon_execGetFireStartLocationAndRotation_Parms GetFireStartLocationAndRotation_Parms;

	this->ProcessEvent ( pFnGetFireStartLocationAndRotation, &GetFireStartLocationAndRotation_Parms, NULL );

	if ( StartLocation )
		memcpy ( StartLocation, &GetFireStartLocationAndRotation_Parms.StartLocation, 0xC );

	if ( StartRotation )
		memcpy ( StartRotation, &GetFireStartLocationAndRotation_Parms.StartRotation, 0xC );
};

// Function GridVehicle.UTVehicleWeapon.GetDesiredAimPoint
// [0x00C24902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TargetActor                    ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

struct FVector AUTVehicleWeapon::eventGetDesiredAimPoint ( class AActor** TargetActor )
{
	static UFunction* pFnGetDesiredAimPoint = NULL;

	if ( ! pFnGetDesiredAimPoint )
		pFnGetDesiredAimPoint = (UFunction*) UObject::GObjObjects()->Data[ 40533 ];

	AUTVehicleWeapon_eventGetDesiredAimPoint_Parms GetDesiredAimPoint_Parms;

	this->ProcessEvent ( pFnGetDesiredAimPoint, &GetDesiredAimPoint_Parms, NULL );

	if ( TargetActor )
		*TargetActor = GetDesiredAimPoint_Parms.TargetActor;

	return GetDesiredAimPoint_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.GetCrosshairScaling
// [0x00020102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void AUTVehicleWeapon::GetCrosshairScaling ( class AHUD* HUD )
{
	static UFunction* pFnGetCrosshairScaling = NULL;

	if ( ! pFnGetCrosshairScaling )
		pFnGetCrosshairScaling = (UFunction*) UObject::GObjObjects()->Data[ 40531 ];

	AUTVehicleWeapon_execGetCrosshairScaling_Parms GetCrosshairScaling_Parms;
	GetCrosshairScaling_Parms.HUD = HUD;

	this->ProcessEvent ( pFnGetCrosshairScaling, &GetCrosshairScaling_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.DrawKillIcon
// [0x00022102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          ScreenX                        ( CPF_Parm )
// float                          ScreenY                        ( CPF_Parm )
// float                          HUDScaleX                      ( CPF_Parm )
// float                          HUDScaleY                      ( CPF_Parm )

void AUTVehicleWeapon::DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY )
{
	static UFunction* pFnDrawKillIcon = NULL;

	if ( ! pFnDrawKillIcon )
		pFnDrawKillIcon = (UFunction*) UObject::GObjObjects()->Data[ 40525 ];

	AUTVehicleWeapon_execDrawKillIcon_Parms DrawKillIcon_Parms;
	DrawKillIcon_Parms.Canvas = Canvas;
	DrawKillIcon_Parms.ScreenX = ScreenX;
	DrawKillIcon_Parms.ScreenY = ScreenY;
	DrawKillIcon_Parms.HUDScaleX = HUDScaleX;
	DrawKillIcon_Parms.HUDScaleY = HUDScaleY;

	this->ProcessEvent ( pFnDrawKillIcon, &DrawKillIcon_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.CanHitDesiredTarget
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 SocketLocation                 ( CPF_Parm )
// struct FRotator                SocketRotation                 ( CPF_Parm )
// struct FVector                 DesiredAimPoint                ( CPF_Parm )
// class AActor*                  TargetActor                    ( CPF_Parm )
// struct FVector                 RealAimPoint                   ( CPF_Parm | CPF_OutParm )

bool AUTVehicleWeapon::CanHitDesiredTarget ( struct FVector SocketLocation, struct FRotator SocketRotation, struct FVector DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint )
{
	static UFunction* pFnCanHitDesiredTarget = NULL;

	if ( ! pFnCanHitDesiredTarget )
		pFnCanHitDesiredTarget = (UFunction*) UObject::GObjObjects()->Data[ 40511 ];

	AUTVehicleWeapon_execCanHitDesiredTarget_Parms CanHitDesiredTarget_Parms;
	memcpy ( &CanHitDesiredTarget_Parms.SocketLocation, &SocketLocation, 0xC );
	memcpy ( &CanHitDesiredTarget_Parms.SocketRotation, &SocketRotation, 0xC );
	memcpy ( &CanHitDesiredTarget_Parms.DesiredAimPoint, &DesiredAimPoint, 0xC );
	CanHitDesiredTarget_Parms.TargetActor = TargetActor;

	this->ProcessEvent ( pFnCanHitDesiredTarget, &CanHitDesiredTarget_Parms, NULL );

	if ( RealAimPoint )
		memcpy ( RealAimPoint, &CanHitDesiredTarget_Parms.RealAimPoint, 0xC );

	return CanHitDesiredTarget_Parms.ReturnValue;
};

// Function GridVehicle.UTVehicleWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUTVehicleWeapon::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 40509 ];

	AUTVehicleWeapon_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GridVehicle.UTVehicleWeapon.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUTVehicleWeapon::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 40508 ];

	AUTVehicleWeapon_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GridVehicle.UTVehicleWheel.OldEffectFinished
// [0x00020002] 
// Parameters infos:
// class UParticleSystemComponent* PSystem                        ( CPF_Parm | CPF_EditInline )

void UUTVehicleWheel::OldEffectFinished ( class UParticleSystemComponent* PSystem )
{
	static UFunction* pFnOldEffectFinished = NULL;

	if ( ! pFnOldEffectFinished )
		pFnOldEffectFinished = (UFunction*) UObject::GObjObjects()->Data[ 40346 ];

	UUTVehicleWheel_execOldEffectFinished_Parms OldEffectFinished_Parms;
	OldEffectFinished_Parms.PSystem = PSystem;

	this->ProcessEvent ( pFnOldEffectFinished, &OldEffectFinished_Parms, NULL );
};

// Function GridVehicle.UTVehicleWheel.SetParticleEffect
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AUTVehicle*              OwnerVehicle                   ( CPF_Parm )
// class UParticleSystem*         NewTemplate                    ( CPF_Parm )

void UUTVehicleWheel::eventSetParticleEffect ( class AUTVehicle* OwnerVehicle, class UParticleSystem* NewTemplate )
{
	static UFunction* pFnSetParticleEffect = NULL;

	if ( ! pFnSetParticleEffect )
		pFnSetParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 40343 ];

	UUTVehicleWheel_eventSetParticleEffect_Parms SetParticleEffect_Parms;
	SetParticleEffect_Parms.OwnerVehicle = OwnerVehicle;
	SetParticleEffect_Parms.NewTemplate = NewTemplate;

	this->ProcessEvent ( pFnSetParticleEffect, &SetParticleEffect_Parms, NULL );
};

// Function GridVehicle.UTSeqAct_EnterVehicle.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUTSeqAct_EnterVehicle::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 40352 ];

	UUTSeqAct_EnterVehicle_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif