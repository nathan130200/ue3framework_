/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGshooter_functions.h
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

// Function SGshooter.SG_KeyPad.UnLock
// [0x00020002] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ASG_KeyPad::UnLock ( class AActor* Other )
{
	static UFunction* pFnUnLock = NULL;

	if ( ! pFnUnLock )
		pFnUnLock = (UFunction*) UObject::GObjObjects()->Data[ 41977 ];

	ASG_KeyPad_execUnLock_Parms UnLock_Parms;
	UnLock_Parms.Other = Other;

	this->ProcessEvent ( pFnUnLock, &UnLock_Parms, NULL );
};

// Function SGshooter.SG_KeyPad.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ASG_KeyPad::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 41974 ];

	ASG_KeyPad_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function SGshooter.SG_KeyPad.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASG_KeyPad::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 41965 ];

	ASG_KeyPad_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function SGshooter.SG_KeyPad.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASG_KeyPad::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41962 ];

	ASG_KeyPad_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SGshooter.SGLockDevice.DoAction
// [0x00020002] 
// Parameters infos:
// class APawn*                   Player                         ( CPF_Parm )

void ASGLockDevice::DoAction ( class APawn* Player )
{
	static UFunction* pFnDoAction = NULL;

	if ( ! pFnDoAction )
		pFnDoAction = (UFunction*) UObject::GObjObjects()->Data[ 46705 ];

	ASGLockDevice_execDoAction_Parms DoAction_Parms;
	DoAction_Parms.Player = Player;

	this->ProcessEvent ( pFnDoAction, &DoAction_Parms, NULL );
};

// Function SGshooter.SGLockDevice.IsInRange
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Player                         ( CPF_Parm )

bool ASGLockDevice::IsInRange ( class APawn* Player )
{
	static UFunction* pFnIsInRange = NULL;

	if ( ! pFnIsInRange )
		pFnIsInRange = (UFunction*) UObject::GObjObjects()->Data[ 46699 ];

	ASGLockDevice_execIsInRange_Parms IsInRange_Parms;
	IsInRange_Parms.Player = Player;

	this->ProcessEvent ( pFnIsInRange, &IsInRange_Parms, NULL );

	return IsInRange_Parms.ReturnValue;
};

// Function SGshooter.SGLockDevice.GetActType
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Player                         ( CPF_Parm )

int ASGLockDevice::GetActType ( class APawn* Player )
{
	static UFunction* pFnGetActType = NULL;

	if ( ! pFnGetActType )
		pFnGetActType = (UFunction*) UObject::GObjObjects()->Data[ 46695 ];

	ASGLockDevice_execGetActType_Parms GetActType_Parms;
	GetActType_Parms.Player = Player;

	this->ProcessEvent ( pFnGetActType, &GetActType_Parms, NULL );

	return GetActType_Parms.ReturnValue;
};

// Function SGshooter.SGSeqEvent_KeyPad.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqEvent_KeyPad::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48525 ];

	USGSeqEvent_KeyPad_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGDestructible.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASGDestructible::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43772 ];

	ASGDestructible_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function SGshooter.SGDestructible.OnExplosionLightFinished
// [0x00020002] 
// Parameters infos:
// class UUDKExplosionLight*      Light                          ( CPF_Parm | CPF_EditInline )

void ASGDestructible::OnExplosionLightFinished ( class UUDKExplosionLight* Light )
{
	static UFunction* pFnOnExplosionLightFinished = NULL;

	if ( ! pFnOnExplosionLightFinished )
		pFnOnExplosionLightFinished = (UFunction*) UObject::GObjObjects()->Data[ 43770 ];

	ASGDestructible_execOnExplosionLightFinished_Parms OnExplosionLightFinished_Parms;
	OnExplosionLightFinished_Parms.Light = Light;

	this->ProcessEvent ( pFnOnExplosionLightFinished, &OnExplosionLightFinished_Parms, NULL );
};

// Function SGshooter.SGDestructible.TakeRadiusDamage
// [0x00024102] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// unsigned long                  bFullDamage                    ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_Parm )
// float                          DamageFalloffExponent          ( CPF_OptionalParm | CPF_Parm )

void ASGDestructible::TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent )
{
	static UFunction* pFnTakeRadiusDamage = NULL;

	if ( ! pFnTakeRadiusDamage )
		pFnTakeRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 43760 ];

	ASGDestructible_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
	TakeRadiusDamage_Parms.InstigatedBy = InstigatedBy;
	TakeRadiusDamage_Parms.BaseDamage = BaseDamage;
	TakeRadiusDamage_Parms.DamageRadius = DamageRadius;
	TakeRadiusDamage_Parms.DamageType = DamageType;
	TakeRadiusDamage_Parms.Momentum = Momentum;
	memcpy ( &TakeRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
	TakeRadiusDamage_Parms.bFullDamage = bFullDamage;
	TakeRadiusDamage_Parms.DamageCauser = DamageCauser;
	TakeRadiusDamage_Parms.DamageFalloffExponent = DamageFalloffExponent;

	this->ProcessEvent ( pFnTakeRadiusDamage, &TakeRadiusDamage_Parms, NULL );
};

// Function SGshooter.SGDestructible.Projectiles_Update
// [0x00020002] 
// Parameters infos:

void ASGDestructible::Projectiles_Update ( )
{
	static UFunction* pFnProjectiles_Update = NULL;

	if ( ! pFnProjectiles_Update )
		pFnProjectiles_Update = (UFunction*) UObject::GObjObjects()->Data[ 43757 ];

	ASGDestructible_execProjectiles_Update_Parms Projectiles_Update_Parms;

	this->ProcessEvent ( pFnProjectiles_Update, &Projectiles_Update_Parms, NULL );
};

// Function SGshooter.SGDestructible.DoExplosionDamage
// [0x00020102] 
// Parameters infos:

void ASGDestructible::DoExplosionDamage ( )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 43752 ];

	ASGDestructible_execDoExplosionDamage_Parms DoExplosionDamage_Parms;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function SGshooter.SGDestructible.DestroyActors
// [0x00020102] 
// Parameters infos:

void ASGDestructible::DestroyActors ( )
{
	static UFunction* pFnDestroyActors = NULL;

	if ( ! pFnDestroyActors )
		pFnDestroyActors = (UFunction*) UObject::GObjObjects()->Data[ 43749 ];

	ASGDestructible_execDestroyActors_Parms DestroyActors_Parms;

	this->ProcessEvent ( pFnDestroyActors, &DestroyActors_Parms, NULL );
};

// Function SGshooter.SGDestructible.TimedProjectiles
// [0x00820002] 
// Parameters infos:

void ASGDestructible::TimedProjectiles ( )
{
	static UFunction* pFnTimedProjectiles = NULL;

	if ( ! pFnTimedProjectiles )
		pFnTimedProjectiles = (UFunction*) UObject::GObjObjects()->Data[ 43745 ];

	ASGDestructible_execTimedProjectiles_Parms TimedProjectiles_Parms;

	this->ProcessEvent ( pFnTimedProjectiles, &TimedProjectiles_Parms, NULL );
};

// Function SGshooter.SGDestructible.OnDestructed_SpawnDecals
// [0x00820002] 
// Parameters infos:

void ASGDestructible::OnDestructed_SpawnDecals ( )
{
	static UFunction* pFnOnDestructed_SpawnDecals = NULL;

	if ( ! pFnOnDestructed_SpawnDecals )
		pFnOnDestructed_SpawnDecals = (UFunction*) UObject::GObjObjects()->Data[ 43741 ];

	ASGDestructible_execOnDestructed_SpawnDecals_Parms OnDestructed_SpawnDecals_Parms;

	this->ProcessEvent ( pFnOnDestructed_SpawnDecals, &OnDestructed_SpawnDecals_Parms, NULL );
};

// Function SGshooter.SGDestructible.OnDestructed_ChangeMesh
// [0x00020002] 
// Parameters infos:

void ASGDestructible::OnDestructed_ChangeMesh ( )
{
	static UFunction* pFnOnDestructed_ChangeMesh = NULL;

	if ( ! pFnOnDestructed_ChangeMesh )
		pFnOnDestructed_ChangeMesh = (UFunction*) UObject::GObjObjects()->Data[ 43740 ];

	ASGDestructible_execOnDestructed_ChangeMesh_Parms OnDestructed_ChangeMesh_Parms;

	this->ProcessEvent ( pFnOnDestructed_ChangeMesh, &OnDestructed_ChangeMesh_Parms, NULL );
};

// Function SGshooter.SGAnimNodeTurnInPlace.TickAnim
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USGAnimNodeTurnInPlace::eventTickAnim ( float DeltaSeconds )
{
	static UFunction* pFnTickAnim = NULL;

	if ( ! pFnTickAnim )
		pFnTickAnim = (UFunction*) UObject::GObjObjects()->Data[ 41993 ];

	USGAnimNodeTurnInPlace_eventTickAnim_Parms TickAnim_Parms;
	TickAnim_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnTickAnim, &TickAnim_Parms, NULL );
};

// Function SGshooter.SGAnimNotify_Damage.Notify
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Owner                          ( CPF_Parm )
// class UAnimNodeSequence*       AnimSeqInstigator              ( CPF_Parm )

void USGAnimNotify_Damage::eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator )
{
	static UFunction* pFnNotify = NULL;

	if ( ! pFnNotify )
		pFnNotify = (UFunction*) UObject::GObjObjects()->Data[ 42012 ];

	USGAnimNotify_Damage_eventNotify_Parms Notify_Parms;
	Notify_Parms.Owner = Owner;
	Notify_Parms.AnimSeqInstigator = AnimSeqInstigator;

	this->ProcessEvent ( pFnNotify, &Notify_Parms, NULL );
};

// Function SGshooter.SGAutoTurret.RotateTimer
// [0x00020002] 
// Parameters infos:

void ASGAutoTurret::RotateTimer ( )
{
	static UFunction* pFnRotateTimer = NULL;

	if ( ! pFnRotateTimer )
		pFnRotateTimer = (UFunction*) UObject::GObjObjects()->Data[ 42168 ];

	ASGAutoTurret_execRotateTimer_Parms RotateTimer_Parms;

	this->ProcessEvent ( pFnRotateTimer, &RotateTimer_Parms, NULL );
};

// Function SGshooter.SGAutoTurret.DoRotation
// [0x00020002] 
// Parameters infos:
// struct FRotator                NewRotation                    ( CPF_Parm )
// float                          InterpTime                     ( CPF_Parm )

void ASGAutoTurret::DoRotation ( struct FRotator NewRotation, float InterpTime )
{
	static UFunction* pFnDoRotation = NULL;

	if ( ! pFnDoRotation )
		pFnDoRotation = (UFunction*) UObject::GObjObjects()->Data[ 42165 ];

	ASGAutoTurret_execDoRotation_Parms DoRotation_Parms;
	memcpy ( &DoRotation_Parms.NewRotation, &NewRotation, 0xC );
	DoRotation_Parms.InterpTime = InterpTime;

	this->ProcessEvent ( pFnDoRotation, &DoRotation_Parms, NULL );
};

// Function SGshooter.SGAutoTurret.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ASGAutoTurret::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 42157 ];

	ASGAutoTurret_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function SGshooter.SGAutoTurret.Tick
// [0x00020002] 
// Parameters infos:
// float                          Delta                          ( CPF_Parm )

void ASGAutoTurret::Tick ( float Delta )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42109 ];

	ASGAutoTurret_execTick_Parms Tick_Parms;
	Tick_Parms.Delta = Delta;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SGshooter.SGAutoTurret.PostBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASGAutoTurret::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42091 ];

	ASGAutoTurret_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SGshooter.SGPawn.ServerPlayCustomAnim
// [0x002200C2] 
// Parameters infos:
// struct FName                   AnimName                       ( CPF_Parm )

void ASGPawn::ServerPlayCustomAnim ( struct FName AnimName )
{
	static UFunction* pFnServerPlayCustomAnim = NULL;

	if ( ! pFnServerPlayCustomAnim )
		pFnServerPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 48064 ];

	ASGPawn_execServerPlayCustomAnim_Parms ServerPlayCustomAnim_Parms;
	memcpy ( &ServerPlayCustomAnim_Parms.AnimName, &AnimName, 0x8 );

	this->ProcessEvent ( pFnServerPlayCustomAnim, &ServerPlayCustomAnim_Parms, NULL );
};

// Function SGshooter.SGPawn.SetHandIKEnabled
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void ASGPawn::SetHandIKEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetHandIKEnabled = NULL;

	if ( ! pFnSetHandIKEnabled )
		pFnSetHandIKEnabled = (UFunction*) UObject::GObjObjects()->Data[ 48062 ];

	ASGPawn_execSetHandIKEnabled_Parms SetHandIKEnabled_Parms;
	SetHandIKEnabled_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetHandIKEnabled, &SetHandIKEnabled_Parms, NULL );
};

// Function SGshooter.SGPawn.ServerStopRunning
// [0x002200C2] 
// Parameters infos:

void ASGPawn::ServerStopRunning ( )
{
	static UFunction* pFnServerStopRunning = NULL;

	if ( ! pFnServerStopRunning )
		pFnServerStopRunning = (UFunction*) UObject::GObjObjects()->Data[ 48061 ];

	ASGPawn_execServerStopRunning_Parms ServerStopRunning_Parms;

	this->ProcessEvent ( pFnServerStopRunning, &ServerStopRunning_Parms, NULL );
};

// Function SGshooter.SGPawn.ServerRun
// [0x002200C2] 
// Parameters infos:

void ASGPawn::ServerRun ( )
{
	static UFunction* pFnServerRun = NULL;

	if ( ! pFnServerRun )
		pFnServerRun = (UFunction*) UObject::GObjObjects()->Data[ 48060 ];

	ASGPawn_execServerRun_Parms ServerRun_Parms;

	this->ProcessEvent ( pFnServerRun, &ServerRun_Parms, NULL );
};

// Function SGshooter.SGPawn.IsRunning
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::IsRunning ( )
{
	static UFunction* pFnIsRunning = NULL;

	if ( ! pFnIsRunning )
		pFnIsRunning = (UFunction*) UObject::GObjObjects()->Data[ 48058 ];

	ASGPawn_execIsRunning_Parms IsRunning_Parms;

	this->ProcessEvent ( pFnIsRunning, &IsRunning_Parms, NULL );

	return IsRunning_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.ProcessViewRotation
// [0x00420102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void ASGPawn::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 48054 ];

	ASGPawn_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function SGshooter.SGPawn.GetViewRotation
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FRotator ASGPawn::eventGetViewRotation ( )
{
	static UFunction* pFnGetViewRotation = NULL;

	if ( ! pFnGetViewRotation )
		pFnGetViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 48052 ];

	ASGPawn_eventGetViewRotation_Parms GetViewRotation_Parms;

	this->ProcessEvent ( pFnGetViewRotation, &GetViewRotation_Parms, NULL );

	return GetViewRotation_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.AddAimKick
// [0x00820102] 
// Parameters infos:
// struct FRotator                AimKick                        ( CPF_Parm )

void ASGPawn::AddAimKick ( struct FRotator AimKick )
{
	static UFunction* pFnAddAimKick = NULL;

	if ( ! pFnAddAimKick )
		pFnAddAimKick = (UFunction*) UObject::GObjObjects()->Data[ 48049 ];

	ASGPawn_execAddAimKick_Parms AddAimKick_Parms;
	memcpy ( &AddAimKick_Parms.AimKick, &AimKick, 0xC );

	this->ProcessEvent ( pFnAddAimKick, &AddAimKick_Parms, NULL );
};

// Function SGshooter.SGPawn.GetPawnViewLocation
// [0x00820102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASGPawn::GetPawnViewLocation ( )
{
	static UFunction* pFnGetPawnViewLocation = NULL;

	if ( ! pFnGetPawnViewLocation )
		pFnGetPawnViewLocation = (UFunction*) UObject::GObjObjects()->Data[ 48042 ];

	ASGPawn_execGetPawnViewLocation_Parms GetPawnViewLocation_Parms;

	this->ProcessEvent ( pFnGetPawnViewLocation, &GetPawnViewLocation_Parms, NULL );

	return GetPawnViewLocation_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.IsShotOnHead
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 RayDir                         ( CPF_Parm )

bool ASGPawn::IsShotOnHead ( struct FVector HitLocation, struct FVector RayDir )
{
	static UFunction* pFnIsShotOnHead = NULL;

	if ( ! pFnIsShotOnHead )
		pFnIsShotOnHead = (UFunction*) UObject::GObjObjects()->Data[ 48036 ];

	ASGPawn_execIsShotOnHead_Parms IsShotOnHead_Parms;
	memcpy ( &IsShotOnHead_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &IsShotOnHead_Parms.RayDir, &RayDir, 0xC );

	this->ProcessEvent ( pFnIsShotOnHead, &IsShotOnHead_Parms, NULL );

	return IsShotOnHead_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.TakeDamage
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ASGPawn::eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 48022 ];

	ASGPawn_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function SGshooter.SGPawn.IsAnimMirrorEnabled
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::IsAnimMirrorEnabled ( )
{
	static UFunction* pFnIsAnimMirrorEnabled = NULL;

	if ( ! pFnIsAnimMirrorEnabled )
		pFnIsAnimMirrorEnabled = (UFunction*) UObject::GObjObjects()->Data[ 48020 ];

	ASGPawn_execIsAnimMirrorEnabled_Parms IsAnimMirrorEnabled_Parms;

	this->ProcessEvent ( pFnIsAnimMirrorEnabled, &IsAnimMirrorEnabled_Parms, NULL );

	return IsAnimMirrorEnabled_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.SetAnimationMirror
// [0x00020002] 
// Parameters infos:
// unsigned long                  bEnableMirror                  ( CPF_Parm )

void ASGPawn::SetAnimationMirror ( unsigned long bEnableMirror )
{
	static UFunction* pFnSetAnimationMirror = NULL;

	if ( ! pFnSetAnimationMirror )
		pFnSetAnimationMirror = (UFunction*) UObject::GObjObjects()->Data[ 48018 ];

	ASGPawn_execSetAnimationMirror_Parms SetAnimationMirror_Parms;
	SetAnimationMirror_Parms.bEnableMirror = bEnableMirror;

	this->ProcessEvent ( pFnSetAnimationMirror, &SetAnimationMirror_Parms, NULL );
};

// Function SGshooter.SGPawn.SetWeapAnimType
// [0x00020102] 
// Parameters infos:
// unsigned char                  AnimType                       ( CPF_Parm )

void ASGPawn::SetWeapAnimType ( unsigned char AnimType )
{
	static UFunction* pFnSetWeapAnimType = NULL;

	if ( ! pFnSetWeapAnimType )
		pFnSetWeapAnimType = (UFunction*) UObject::GObjObjects()->Data[ 48015 ];

	ASGPawn_execSetWeapAnimType_Parms SetWeapAnimType_Parms;
	SetWeapAnimType_Parms.AnimType = AnimType;

	this->ProcessEvent ( pFnSetWeapAnimType, &SetWeapAnimType_Parms, NULL );
};

// Function SGshooter.SGPawn.Tick
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// float                          ElapsedTime                    ( CPF_Parm )

void ASGPawn::eventTick ( float ElapsedTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 48005 ];

	ASGPawn_eventTick_Parms Tick_Parms;
	Tick_Parms.ElapsedTime = ElapsedTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SGshooter.SGPawn.GetCloakValue
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASGPawn::GetCloakValue ( )
{
	static UFunction* pFnGetCloakValue = NULL;

	if ( ! pFnGetCloakValue )
		pFnGetCloakValue = (UFunction*) UObject::GObjObjects()->Data[ 48003 ];

	ASGPawn_execGetCloakValue_Parms GetCloakValue_Parms;

	this->ProcessEvent ( pFnGetCloakValue, &GetCloakValue_Parms, NULL );

	return GetCloakValue_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.HealMeh
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ASGPawn::HealMeh ( )
{
	static UFunction* pFnHealMeh = NULL;

	if ( ! pFnHealMeh )
		pFnHealMeh = (UFunction*) UObject::GObjObjects()->Data[ 48002 ];

	ASGPawn_execHealMeh_Parms HealMeh_Parms;

	this->ProcessEvent ( pFnHealMeh, &HealMeh_Parms, NULL );
};

// Function SGshooter.SGPawn.IsDino
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::IsDino ( )
{
	static UFunction* pFnIsDino = NULL;

	if ( ! pFnIsDino )
		pFnIsDino = (UFunction*) UObject::GObjObjects()->Data[ 44184 ];

	ASGPawn_execIsDino_Parms IsDino_Parms;

	this->ProcessEvent ( pFnIsDino, &IsDino_Parms, NULL );

	return IsDino_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void ASGPawn::eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 47999 ];

	ASGPawn_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function SGshooter.SGPawn.SetCharacterMeshInfo
// [0x00020102] 
// Parameters infos:
// class USkeletalMesh*           SkelMesh                       ( CPF_Parm )
// class UMaterialInterface*      HeadMaterial                   ( CPF_Parm )
// class UMaterialInterface*      BodyMaterial                   ( CPF_Parm )

void ASGPawn::SetCharacterMeshInfo ( class USkeletalMesh* SkelMesh, class UMaterialInterface* HeadMaterial, class UMaterialInterface* BodyMaterial )
{
	static UFunction* pFnSetCharacterMeshInfo = NULL;

	if ( ! pFnSetCharacterMeshInfo )
		pFnSetCharacterMeshInfo = (UFunction*) UObject::GObjObjects()->Data[ 47995 ];

	ASGPawn_execSetCharacterMeshInfo_Parms SetCharacterMeshInfo_Parms;
	SetCharacterMeshInfo_Parms.SkelMesh = SkelMesh;
	SetCharacterMeshInfo_Parms.HeadMaterial = HeadMaterial;
	SetCharacterMeshInfo_Parms.BodyMaterial = BodyMaterial;

	this->ProcessEvent ( pFnSetCharacterMeshInfo, &SetCharacterMeshInfo_Parms, NULL );
};

// Function SGshooter.SGPawn.VerifyBodyMaterialInstance
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::VerifyBodyMaterialInstance ( )
{
	static UFunction* pFnVerifyBodyMaterialInstance = NULL;

	if ( ! pFnVerifyBodyMaterialInstance )
		pFnVerifyBodyMaterialInstance = (UFunction*) UObject::GObjObjects()->Data[ 47992 ];

	ASGPawn_execVerifyBodyMaterialInstance_Parms VerifyBodyMaterialInstance_Parms;

	this->ProcessEvent ( pFnVerifyBodyMaterialInstance, &VerifyBodyMaterialInstance_Parms, NULL );

	return VerifyBodyMaterialInstance_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.SetTeamColor
// [0x00020100] 
// Parameters infos:

void ASGPawn::SetTeamColor ( )
{
	static UFunction* pFnSetTeamColor = NULL;

	if ( ! pFnSetTeamColor )
		pFnSetTeamColor = (UFunction*) UObject::GObjObjects()->Data[ 47991 ];

	ASGPawn_execSetTeamColor_Parms SetTeamColor_Parms;

	this->ProcessEvent ( pFnSetTeamColor, &SetTeamColor_Parms, NULL );
};

// Function SGshooter.SGPawn.SetCharacterClassFromInfo
// [0x00020102] 
// Parameters infos:
// class UClass*                  Info                           ( CPF_Parm )

void ASGPawn::SetCharacterClassFromInfo ( class UClass* Info )
{
	static UFunction* pFnSetCharacterClassFromInfo = NULL;

	if ( ! pFnSetCharacterClassFromInfo )
		pFnSetCharacterClassFromInfo = (UFunction*) UObject::GObjObjects()->Data[ 47987 ];

	ASGPawn_execSetCharacterClassFromInfo_Parms SetCharacterClassFromInfo_Parms;
	SetCharacterClassFromInfo_Parms.Info = Info;

	this->ProcessEvent ( pFnSetCharacterClassFromInfo, &SetCharacterClassFromInfo_Parms, NULL );
};

// Function SGshooter.SGPawn.AddDefaultInventory
// [0x00020000] 
// Parameters infos:

void ASGPawn::AddDefaultInventory ( )
{
	static UFunction* pFnAddDefaultInventory = NULL;

	if ( ! pFnAddDefaultInventory )
		pFnAddDefaultInventory = (UFunction*) UObject::GObjObjects()->Data[ 47986 ];

	ASGPawn_execAddDefaultInventory_Parms AddDefaultInventory_Parms;

	this->ProcessEvent ( pFnAddDefaultInventory, &AddDefaultInventory_Parms, NULL );
};

// Function SGshooter.SGPawn.HandleMomentum
// [0x00024000] 
// Parameters infos:
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )

void ASGPawn::HandleMomentum ( struct FVector Momentum, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnHandleMomentum = NULL;

	if ( ! pFnHandleMomentum )
		pFnHandleMomentum = (UFunction*) UObject::GObjObjects()->Data[ 47981 ];

	ASGPawn_execHandleMomentum_Parms HandleMomentum_Parms;
	memcpy ( &HandleMomentum_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &HandleMomentum_Parms.HitLocation, &HitLocation, 0xC );
	HandleMomentum_Parms.DamageType = DamageType;
	memcpy ( &HandleMomentum_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnHandleMomentum, &HandleMomentum_Parms, NULL );
};

// Function SGshooter.SGPawn.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// int                            FootDown                       ( CPF_Parm )

void ASGPawn::eventPlayFootStepSound ( int FootDown )
{
	static UFunction* pFnPlayFootStepSound = NULL;

	if ( ! pFnPlayFootStepSound )
		pFnPlayFootStepSound = (UFunction*) UObject::GObjObjects()->Data[ 47979 ];

	ASGPawn_eventPlayFootStepSound_Parms PlayFootStepSound_Parms;
	PlayFootStepSound_Parms.FootDown = FootDown;

	this->ProcessEvent ( pFnPlayFootStepSound, &PlayFootStepSound_Parms, NULL );
};

// Function SGshooter.SGPawn.OnHearSound
// [0x00020002] 
// Parameters infos:
// class ASGPawn*                 NoiseMaker                     ( CPF_Parm )
// float                          Loudness                       ( CPF_Parm )
// struct FName                   SoundType                      ( CPF_Parm )

void ASGPawn::OnHearSound ( class ASGPawn* NoiseMaker, float Loudness, struct FName SoundType )
{
	static UFunction* pFnOnHearSound = NULL;

	if ( ! pFnOnHearSound )
		pFnOnHearSound = (UFunction*) UObject::GObjObjects()->Data[ 47975 ];

	ASGPawn_execOnHearSound_Parms OnHearSound_Parms;
	OnHearSound_Parms.NoiseMaker = NoiseMaker;
	OnHearSound_Parms.Loudness = Loudness;
	memcpy ( &OnHearSound_Parms.SoundType, &SoundType, 0x8 );

	this->ProcessEvent ( pFnOnHearSound, &OnHearSound_Parms, NULL );
};

// Function SGshooter.SGPawn.Make_Noise
// [0x00024002] 
// Parameters infos:
// float                          SoundRadius                    ( CPF_Parm )
// struct FName                   SoundType                      ( CPF_OptionalParm | CPF_Parm )

void ASGPawn::Make_Noise ( float SoundRadius, struct FName SoundType )
{
	static UFunction* pFnMake_Noise = NULL;

	if ( ! pFnMake_Noise )
		pFnMake_Noise = (UFunction*) UObject::GObjObjects()->Data[ 47971 ];

	ASGPawn_execMake_Noise_Parms Make_Noise_Parms;
	Make_Noise_Parms.SoundRadius = SoundRadius;
	memcpy ( &Make_Noise_Parms.SoundType, &SoundType, 0x8 );

	this->ProcessEvent ( pFnMake_Noise, &Make_Noise_Parms, NULL );
};

// Function SGshooter.SGPawn.ThrowWeaponOnDeath
// [0x00020002] 
// Parameters infos:

void ASGPawn::ThrowWeaponOnDeath ( )
{
	static UFunction* pFnThrowWeaponOnDeath = NULL;

	if ( ! pFnThrowWeaponOnDeath )
		pFnThrowWeaponOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 47970 ];

	ASGPawn_execThrowWeaponOnDeath_Parms ThrowWeaponOnDeath_Parms;

	this->ProcessEvent ( pFnThrowWeaponOnDeath, &ThrowWeaponOnDeath_Parms, NULL );
};

// Function SGshooter.SGPawn.LostEnemies
// [0x00020002] 
// Parameters infos:

void ASGPawn::LostEnemies ( )
{
	static UFunction* pFnLostEnemies = NULL;

	if ( ! pFnLostEnemies )
		pFnLostEnemies = (UFunction*) UObject::GObjObjects()->Data[ 47969 ];

	ASGPawn_execLostEnemies_Parms LostEnemies_Parms;

	this->ProcessEvent ( pFnLostEnemies, &LostEnemies_Parms, NULL );
};

// Function SGshooter.SGPawn.EnemySeesMe
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::EnemySeesMe ( )
{
	static UFunction* pFnEnemySeesMe = NULL;

	if ( ! pFnEnemySeesMe )
		pFnEnemySeesMe = (UFunction*) UObject::GObjObjects()->Data[ 47967 ];

	ASGPawn_execEnemySeesMe_Parms EnemySeesMe_Parms;

	this->ProcessEvent ( pFnEnemySeesMe, &EnemySeesMe_Parms, NULL );

	return EnemySeesMe_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.PlayTakeHitEffects
// [0x00820102] 
// Parameters infos:

void ASGPawn::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 47962 ];

	ASGPawn_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function SGshooter.SGPawn.LeaveABloodSplatterDecal
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLoc                         ( CPF_Parm )
// struct FVector                 HitNorm                        ( CPF_Parm )

void ASGPawn::LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm )
{
	static UFunction* pFnLeaveABloodSplatterDecal = NULL;

	if ( ! pFnLeaveABloodSplatterDecal )
		pFnLeaveABloodSplatterDecal = (UFunction*) UObject::GObjObjects()->Data[ 47951 ];

	ASGPawn_execLeaveABloodSplatterDecal_Parms LeaveABloodSplatterDecal_Parms;
	memcpy ( &LeaveABloodSplatterDecal_Parms.HitLoc, &HitLoc, 0xC );
	memcpy ( &LeaveABloodSplatterDecal_Parms.HitNorm, &HitNorm, 0xC );

	this->ProcessEvent ( pFnLeaveABloodSplatterDecal, &LeaveABloodSplatterDecal_Parms, NULL );
};

// Function SGshooter.SGPawn.DoDinoAttackJump
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::DoDinoAttackJump ( )
{
	static UFunction* pFnDoDinoAttackJump = NULL;

	if ( ! pFnDoDinoAttackJump )
		pFnDoDinoAttackJump = (UFunction*) UObject::GObjObjects()->Data[ 47937 ];

	ASGPawn_execDoDinoAttackJump_Parms DoDinoAttackJump_Parms;

	this->ProcessEvent ( pFnDoDinoAttackJump, &DoDinoAttackJump_Parms, NULL );

	return DoDinoAttackJump_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.TriggerHealingEffect
// [0x00020002] 
// Parameters infos:

void ASGPawn::TriggerHealingEffect ( )
{
	static UFunction* pFnTriggerHealingEffect = NULL;

	if ( ! pFnTriggerHealingEffect )
		pFnTriggerHealingEffect = (UFunction*) UObject::GObjObjects()->Data[ 47936 ];

	ASGPawn_execTriggerHealingEffect_Parms TriggerHealingEffect_Parms;

	this->ProcessEvent ( pFnTriggerHealingEffect, &TriggerHealingEffect_Parms, NULL );
};

// Function SGshooter.SGPawn.IsJetPacking
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::IsJetPacking ( )
{
	static UFunction* pFnIsJetPacking = NULL;

	if ( ! pFnIsJetPacking )
		pFnIsJetPacking = (UFunction*) UObject::GObjObjects()->Data[ 47934 ];

	ASGPawn_execIsJetPacking_Parms IsJetPacking_Parms;

	this->ProcessEvent ( pFnIsJetPacking, &IsJetPacking_Parms, NULL );

	return IsJetPacking_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.IsCloaked
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::IsCloaked ( )
{
	static UFunction* pFnIsCloaked = NULL;

	if ( ! pFnIsCloaked )
		pFnIsCloaked = (UFunction*) UObject::GObjObjects()->Data[ 47932 ];

	ASGPawn_execIsCloaked_Parms IsCloaked_Parms;

	this->ProcessEvent ( pFnIsCloaked, &IsCloaked_Parms, NULL );

	return IsCloaked_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.ShouldCloak
// [0x00020100] 
// Parameters infos:

void ASGPawn::ShouldCloak ( )
{
	static UFunction* pFnShouldCloak = NULL;

	if ( ! pFnShouldCloak )
		pFnShouldCloak = (UFunction*) UObject::GObjObjects()->Data[ 47931 ];

	ASGPawn_execShouldCloak_Parms ShouldCloak_Parms;

	this->ProcessEvent ( pFnShouldCloak, &ShouldCloak_Parms, NULL );
};

// Function SGshooter.SGPawn.TimeToDie
// [0x00020102] 
// Parameters infos:

void ASGPawn::TimeToDie ( )
{
	static UFunction* pFnTimeToDie = NULL;

	if ( ! pFnTimeToDie )
		pFnTimeToDie = (UFunction*) UObject::GObjObjects()->Data[ 47930 ];

	ASGPawn_execTimeToDie_Parms TimeToDie_Parms;

	this->ProcessEvent ( pFnTimeToDie, &TimeToDie_Parms, NULL );
};

// Function SGshooter.SGPawn.IsRolling
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGPawn::IsRolling ( )
{
	static UFunction* pFnIsRolling = NULL;

	if ( ! pFnIsRolling )
		pFnIsRolling = (UFunction*) UObject::GObjObjects()->Data[ 47891 ];

	ASGPawn_execIsRolling_Parms IsRolling_Parms;

	this->ProcessEvent ( pFnIsRolling, &IsRolling_Parms, NULL );

	return IsRolling_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.ReleaseMe
// [0x00820102] 
// Parameters infos:

void ASGPawn::ReleaseMe ( )
{
	static UFunction* pFnReleaseMe = NULL;

	if ( ! pFnReleaseMe )
		pFnReleaseMe = (UFunction*) UObject::GObjObjects()->Data[ 47889 ];

	ASGPawn_execReleaseMe_Parms ReleaseMe_Parms;

	this->ProcessEvent ( pFnReleaseMe, &ReleaseMe_Parms, NULL );
};

// Function SGshooter.SGPawn.TurnIntoRagdoll
// [0x00020102] 
// Parameters infos:

void ASGPawn::TurnIntoRagdoll ( )
{
	static UFunction* pFnTurnIntoRagdoll = NULL;

	if ( ! pFnTurnIntoRagdoll )
		pFnTurnIntoRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 47888 ];

	ASGPawn_execTurnIntoRagdoll_Parms TurnIntoRagdoll_Parms;

	this->ProcessEvent ( pFnTurnIntoRagdoll, &TurnIntoRagdoll_Parms, NULL );
};

// Function SGshooter.SGPawn.FinishMe
// [0x00020102] 
// Parameters infos:

void ASGPawn::FinishMe ( )
{
	static UFunction* pFnFinishMe = NULL;

	if ( ! pFnFinishMe )
		pFnFinishMe = (UFunction*) UObject::GObjObjects()->Data[ 47885 ];

	ASGPawn_execFinishMe_Parms FinishMe_Parms;

	this->ProcessEvent ( pFnFinishMe, &FinishMe_Parms, NULL );
};

// Function SGshooter.SGPawn.TossMe
// [0x00020100] 
// Parameters infos:

void ASGPawn::TossMe ( )
{
	static UFunction* pFnTossMe = NULL;

	if ( ! pFnTossMe )
		pFnTossMe = (UFunction*) UObject::GObjObjects()->Data[ 47884 ];

	ASGPawn_execTossMe_Parms TossMe_Parms;

	this->ProcessEvent ( pFnTossMe, &TossMe_Parms, NULL );
};

// Function SGshooter.SGPawn.GetPlayerReplicationInfoClass
// [0x00020102] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* ASGPawn::GetPlayerReplicationInfoClass ( )
{
	static UFunction* pFnGetPlayerReplicationInfoClass = NULL;

	if ( ! pFnGetPlayerReplicationInfoClass )
		pFnGetPlayerReplicationInfoClass = (UFunction*) UObject::GObjObjects()->Data[ 47882 ];

	ASGPawn_execGetPlayerReplicationInfoClass_Parms GetPlayerReplicationInfoClass_Parms;

	this->ProcessEvent ( pFnGetPlayerReplicationInfoClass, &GetPlayerReplicationInfoClass_Parms, NULL );

	return GetPlayerReplicationInfoClass_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.GrabMe
// [0x00020100] 
// Parameters infos:

void ASGPawn::GrabMe ( )
{
	static UFunction* pFnGrabMe = NULL;

	if ( ! pFnGrabMe )
		pFnGrabMe = (UFunction*) UObject::GObjObjects()->Data[ 47866 ];

	ASGPawn_execGrabMe_Parms GrabMe_Parms;

	this->ProcessEvent ( pFnGrabMe, &GrabMe_Parms, NULL );
};

// Function SGshooter.SGPawn.PlayCustomAnim
// [0x00024100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   AnimName                       ( CPF_Parm )
// float                          Rate                           ( CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          BlendOutTime                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLooping                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )
// float                          StartTime                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bHalfSlot                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRoar                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverrideAnim                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLegs                          ( CPF_OptionalParm | CPF_Parm )

float ASGPawn::PlayCustomAnim ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, float StartTime, unsigned long bHalfSlot, unsigned long bRoar, unsigned long bOverrideAnim, unsigned long bLegs )
{
	static UFunction* pFnPlayCustomAnim = NULL;

	if ( ! pFnPlayCustomAnim )
		pFnPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 47853 ];

	ASGPawn_execPlayCustomAnim_Parms PlayCustomAnim_Parms;
	memcpy ( &PlayCustomAnim_Parms.AnimName, &AnimName, 0x8 );
	PlayCustomAnim_Parms.Rate = Rate;
	PlayCustomAnim_Parms.BlendInTime = BlendInTime;
	PlayCustomAnim_Parms.BlendOutTime = BlendOutTime;
	PlayCustomAnim_Parms.bLooping = bLooping;
	PlayCustomAnim_Parms.bOverride = bOverride;
	PlayCustomAnim_Parms.StartTime = StartTime;
	PlayCustomAnim_Parms.bHalfSlot = bHalfSlot;
	PlayCustomAnim_Parms.bRoar = bRoar;
	PlayCustomAnim_Parms.bOverrideAnim = bOverrideAnim;
	PlayCustomAnim_Parms.bLegs = bLegs;

	this->ProcessEvent ( pFnPlayCustomAnim, &PlayCustomAnim_Parms, NULL );

	return PlayCustomAnim_Parms.ReturnValue;
};

// Function SGshooter.SGPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ASGPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 47851 ];

	ASGPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function SGshooter.SGCheckPoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASGCheckPoint::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 42191 ];

	ASGCheckPoint_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function SGshooter.SGgame.Sig
// [0x00022002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int ASGgame::Sig ( float A )
{
	static UFunction* pFnSig = NULL;

	if ( ! pFnSig )
		pFnSig = (UFunction*) UObject::GObjObjects()->Data[ 45361 ];

	ASGgame_execSig_Parms Sig_Parms;
	Sig_Parms.A = A;

	this->ProcessEvent ( pFnSig, &Sig_Parms, NULL );

	return Sig_Parms.ReturnValue;
};

// Function SGshooter.SGgame.Vec3
// [0x00822002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Z                              ( CPF_Parm )

struct FVector ASGgame::Vec3 ( float X, float Y, float Z )
{
	static UFunction* pFnVec3 = NULL;

	if ( ! pFnVec3 )
		pFnVec3 = (UFunction*) UObject::GObjObjects()->Data[ 42255 ];

	ASGgame_execVec3_Parms Vec3_Parms;
	Vec3_Parms.X = X;
	Vec3_Parms.Y = Y;
	Vec3_Parms.Z = Z;

	this->ProcessEvent ( pFnVec3, &Vec3_Parms, NULL );

	return Vec3_Parms.ReturnValue;
};

// Function SGshooter.SGgame.Step
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          V                              ( CPF_Parm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float ASGgame::Step ( float V, float A, float B )
{
	static UFunction* pFnStep = NULL;

	if ( ! pFnStep )
		pFnStep = (UFunction*) UObject::GObjObjects()->Data[ 45352 ];

	ASGgame_execStep_Parms Step_Parms;
	Step_Parms.V = V;
	Step_Parms.A = A;
	Step_Parms.B = B;

	this->ProcessEvent ( pFnStep, &Step_Parms, NULL );

	return Step_Parms.ReturnValue;
};

// Function SGshooter.SGgame.SmoothStep
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          V                              ( CPF_Parm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          C                              ( CPF_Parm )
// float                          D                              ( CPF_Parm )

float ASGgame::SmoothStep ( float V, float A, float B, float C, float D )
{
	static UFunction* pFnSmoothStep = NULL;

	if ( ! pFnSmoothStep )
		pFnSmoothStep = (UFunction*) UObject::GObjObjects()->Data[ 45345 ];

	ASGgame_execSmoothStep_Parms SmoothStep_Parms;
	SmoothStep_Parms.V = V;
	SmoothStep_Parms.A = A;
	SmoothStep_Parms.B = B;
	SmoothStep_Parms.C = C;
	SmoothStep_Parms.D = D;

	this->ProcessEvent ( pFnSmoothStep, &SmoothStep_Parms, NULL );

	return SmoothStep_Parms.ReturnValue;
};

// Function SGshooter.SGgame.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void ASGgame::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 45343 ];

	ASGgame_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function SGshooter.SGgame.ForceRespawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGgame::ForceRespawn ( )
{
	static UFunction* pFnForceRespawn = NULL;

	if ( ! pFnForceRespawn )
		pFnForceRespawn = (UFunction*) UObject::GObjObjects()->Data[ 45341 ];

	ASGgame_execForceRespawn_Parms ForceRespawn_Parms;

	this->ProcessEvent ( pFnForceRespawn, &ForceRespawn_Parms, NULL );

	return ForceRespawn_Parms.ReturnValue;
};

// Function SGshooter.SGgame.NotifySpree
// [0x00020000] 
// Parameters infos:
// class AUTPlayerReplicationInfo* Other                          ( CPF_Parm )
// int                            Num                            ( CPF_Parm )

void ASGgame::NotifySpree ( class AUTPlayerReplicationInfo* Other, int Num )
{
	static UFunction* pFnNotifySpree = NULL;

	if ( ! pFnNotifySpree )
		pFnNotifySpree = (UFunction*) UObject::GObjObjects()->Data[ 45338 ];

	ASGgame_execNotifySpree_Parms NotifySpree_Parms;
	NotifySpree_Parms.Other = Other;
	NotifySpree_Parms.Num = Num;

	this->ProcessEvent ( pFnNotifySpree, &NotifySpree_Parms, NULL );
};

// Function SGshooter.SGgame.RestartPlayer
// [0x00020002] 
// Parameters infos:
// class AController*             NewPlayer                      ( CPF_Parm )

void ASGgame::RestartPlayer ( class AController* NewPlayer )
{
	static UFunction* pFnRestartPlayer = NULL;

	if ( ! pFnRestartPlayer )
		pFnRestartPlayer = (UFunction*) UObject::GObjObjects()->Data[ 45336 ];

	ASGgame_execRestartPlayer_Parms RestartPlayer_Parms;
	RestartPlayer_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnRestartPlayer, &RestartPlayer_Parms, NULL );
};

// Function SGshooter.SGgame.CanSpawnTrex
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGgame::CanSpawnTrex ( )
{
	static UFunction* pFnCanSpawnTrex = NULL;

	if ( ! pFnCanSpawnTrex )
		pFnCanSpawnTrex = (UFunction*) UObject::GObjObjects()->Data[ 45334 ];

	ASGgame_execCanSpawnTrex_Parms CanSpawnTrex_Parms;

	this->ProcessEvent ( pFnCanSpawnTrex, &CanSpawnTrex_Parms, NULL );

	return CanSpawnTrex_Parms.ReturnValue;
};

// Function SGshooter.SGgame.PreBeginPlay
// [0x00020102] 
// Parameters infos:

void ASGgame::PreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45333 ];

	ASGgame_execPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function SGshooter.SGgame.SquadLeaderDied
// [0x00020000] 
// Parameters infos:
// class ASGController_Bot*       dino                           ( CPF_Parm )

void ASGgame::SquadLeaderDied ( class ASGController_Bot* dino )
{
	static UFunction* pFnSquadLeaderDied = NULL;

	if ( ! pFnSquadLeaderDied )
		pFnSquadLeaderDied = (UFunction*) UObject::GObjObjects()->Data[ 45331 ];

	ASGgame_execSquadLeaderDied_Parms SquadLeaderDied_Parms;
	SquadLeaderDied_Parms.dino = dino;

	this->ProcessEvent ( pFnSquadLeaderDied, &SquadLeaderDied_Parms, NULL );
};

// Function SGshooter.SGgame.CreateSquad
// [0x00020000] 
// Parameters infos:
// class ASGController_Bot*       dino                           ( CPF_Parm )
// int                            Id                             ( CPF_Parm )

void ASGgame::CreateSquad ( class ASGController_Bot* dino, int Id )
{
	static UFunction* pFnCreateSquad = NULL;

	if ( ! pFnCreateSquad )
		pFnCreateSquad = (UFunction*) UObject::GObjObjects()->Data[ 45328 ];

	ASGgame_execCreateSquad_Parms CreateSquad_Parms;
	CreateSquad_Parms.dino = dino;
	CreateSquad_Parms.Id = Id;

	this->ProcessEvent ( pFnCreateSquad, &CreateSquad_Parms, NULL );
};

// Function SGshooter.SGgame.AddToSquad
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ASGController_Bot*       dino                           ( CPF_Parm )
// int                            Id                             ( CPF_Parm )

bool ASGgame::AddToSquad ( class ASGController_Bot* dino, int Id )
{
	static UFunction* pFnAddToSquad = NULL;

	if ( ! pFnAddToSquad )
		pFnAddToSquad = (UFunction*) UObject::GObjObjects()->Data[ 42264 ];

	ASGgame_execAddToSquad_Parms AddToSquad_Parms;
	AddToSquad_Parms.dino = dino;
	AddToSquad_Parms.Id = Id;

	this->ProcessEvent ( pFnAddToSquad, &AddToSquad_Parms, NULL );

	return AddToSquad_Parms.ReturnValue;
};

// Function SGshooter.SGgame.InitPawn
// [0x00020002] 
// Parameters infos:
// class APawn*                   Pawn                           ( CPF_Parm )

void ASGgame::InitPawn ( class APawn* Pawn )
{
	static UFunction* pFnInitPawn = NULL;

	if ( ! pFnInitPawn )
		pFnInitPawn = (UFunction*) UObject::GObjObjects()->Data[ 45324 ];

	ASGgame_execInitPawn_Parms InitPawn_Parms;
	InitPawn_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnInitPawn, &InitPawn_Parms, NULL );
};

// Function SGshooter.SGgame.CanDinoSpawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGgame::CanDinoSpawn ( )
{
	static UFunction* pFnCanDinoSpawn = NULL;

	if ( ! pFnCanDinoSpawn )
		pFnCanDinoSpawn = (UFunction*) UObject::GObjObjects()->Data[ 45322 ];

	ASGgame_execCanDinoSpawn_Parms CanDinoSpawn_Parms;

	this->ProcessEvent ( pFnCanDinoSpawn, &CanDinoSpawn_Parms, NULL );

	return CanDinoSpawn_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.ReEvaluatePath
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGController_Bot::ReEvaluatePath ( )
{
	static UFunction* pFnReEvaluatePath = NULL;

	if ( ! pFnReEvaluatePath )
		pFnReEvaluatePath = (UFunction*) UObject::GObjObjects()->Data[ 42282 ];

	ASGController_Bot_execReEvaluatePath_Parms ReEvaluatePath_Parms;

	this->ProcessEvent ( pFnReEvaluatePath, &ReEvaluatePath_Parms, NULL );

	return ReEvaluatePath_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.HandlePathObstruction
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  BlockedBy                      ( CPF_Parm )

bool ASGController_Bot::HandlePathObstruction ( class AActor* BlockedBy )
{
	static UFunction* pFnHandlePathObstruction = NULL;

	if ( ! pFnHandlePathObstruction )
		pFnHandlePathObstruction = (UFunction*) UObject::GObjObjects()->Data[ 42266 ];

	ASGController_Bot_execHandlePathObstruction_Parms HandlePathObstruction_Parms;
	HandlePathObstruction_Parms.BlockedBy = BlockedBy;

	this->ProcessEvent ( pFnHandlePathObstruction, &HandlePathObstruction_Parms, NULL );

	return HandlePathObstruction_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.PutInSquad
// [0x00020002] 
// Parameters infos:
// int                            Id                             ( CPF_Parm )

void ASGController_Bot::PutInSquad ( int Id )
{
	static UFunction* pFnPutInSquad = NULL;

	if ( ! pFnPutInSquad )
		pFnPutInSquad = (UFunction*) UObject::GObjObjects()->Data[ 42262 ];

	ASGController_Bot_execPutInSquad_Parms PutInSquad_Parms;
	PutInSquad_Parms.Id = Id;

	this->ProcessEvent ( pFnPutInSquad, &PutInSquad_Parms, NULL );
};

// Function SGshooter.SGController_Bot.GetViewTarget
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASGController_Bot::GetViewTarget ( )
{
	static UFunction* pFnGetViewTarget = NULL;

	if ( ! pFnGetViewTarget )
		pFnGetViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 42260 ];

	ASGController_Bot_execGetViewTarget_Parms GetViewTarget_Parms;

	this->ProcessEvent ( pFnGetViewTarget, &GetViewTarget_Parms, NULL );

	return GetViewTarget_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.CheckTarget
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Target                         ( CPF_Parm )

bool ASGController_Bot::CheckTarget ( struct FVector Target )
{
	static UFunction* pFnCheckTarget = NULL;

	if ( ! pFnCheckTarget )
		pFnCheckTarget = (UFunction*) UObject::GObjObjects()->Data[ 42257 ];

	ASGController_Bot_execCheckTarget_Parms CheckTarget_Parms;
	memcpy ( &CheckTarget_Parms.Target, &Target, 0xC );

	this->ProcessEvent ( pFnCheckTarget, &CheckTarget_Parms, NULL );

	return CheckTarget_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.GetEyesLoc
// [0x00020002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASGController_Bot::GetEyesLoc ( )
{
	static UFunction* pFnGetEyesLoc = NULL;

	if ( ! pFnGetEyesLoc )
		pFnGetEyesLoc = (UFunction*) UObject::GObjObjects()->Data[ 42253 ];

	ASGController_Bot_execGetEyesLoc_Parms GetEyesLoc_Parms;

	this->ProcessEvent ( pFnGetEyesLoc, &GetEyesLoc_Parms, NULL );

	return GetEyesLoc_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.Tick
// [0x00020102] 
// Parameters infos:
// float                          ElapsedTime                    ( CPF_Parm )

void ASGController_Bot::Tick ( float ElapsedTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 42251 ];

	ASGController_Bot_execTick_Parms Tick_Parms;
	Tick_Parms.ElapsedTime = ElapsedTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SGshooter.SGController_Bot.AngleBetween
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Yaw1                           ( CPF_Parm )
// float                          Yaw2                           ( CPF_Parm )
// unsigned long                  Absolute                       ( CPF_OptionalParm | CPF_Parm )

float ASGController_Bot::AngleBetween ( float Yaw1, float Yaw2, unsigned long Absolute )
{
	static UFunction* pFnAngleBetween = NULL;

	if ( ! pFnAngleBetween )
		pFnAngleBetween = (UFunction*) UObject::GObjObjects()->Data[ 42246 ];

	ASGController_Bot_execAngleBetween_Parms AngleBetween_Parms;
	AngleBetween_Parms.Yaw1 = Yaw1;
	AngleBetween_Parms.Yaw2 = Yaw2;
	AngleBetween_Parms.Absolute = Absolute;

	this->ProcessEvent ( pFnAngleBetween, &AngleBetween_Parms, NULL );

	return AngleBetween_Parms.ReturnValue;
};

// Function SGshooter.SGController_Bot.MoveToActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  Dest                           ( CPF_Parm )
// class AActor*                  FocusTarget                    ( CPF_OptionalParm | CPF_Parm )
// float                          DestOffset                     ( CPF_OptionalParm | CPF_Parm )

void ASGController_Bot::MoveToActor ( class AActor* Dest, class AActor* FocusTarget, float DestOffset )
{
	static UFunction* pFnMoveToActor = NULL;

	if ( ! pFnMoveToActor )
		pFnMoveToActor = (UFunction*) UObject::GObjObjects()->Data[ 42242 ];

	ASGController_Bot_execMoveToActor_Parms MoveToActor_Parms;
	MoveToActor_Parms.Dest = Dest;
	MoveToActor_Parms.FocusTarget = FocusTarget;
	MoveToActor_Parms.DestOffset = DestOffset;

	this->ProcessEvent ( pFnMoveToActor, &MoveToActor_Parms, NULL );
};

// Function SGshooter.SGController_Bot.MoveToPoint
// [0x00024002] 
// Parameters infos:
// struct FVector                 Point                          ( CPF_Parm )
// class AActor*                  FocusTarget                    ( CPF_OptionalParm | CPF_Parm )
// float                          DestOffset                     ( CPF_OptionalParm | CPF_Parm )

void ASGController_Bot::MoveToPoint ( struct FVector Point, class AActor* FocusTarget, float DestOffset )
{
	static UFunction* pFnMoveToPoint = NULL;

	if ( ! pFnMoveToPoint )
		pFnMoveToPoint = (UFunction*) UObject::GObjObjects()->Data[ 42238 ];

	ASGController_Bot_execMoveToPoint_Parms MoveToPoint_Parms;
	memcpy ( &MoveToPoint_Parms.Point, &Point, 0xC );
	MoveToPoint_Parms.FocusTarget = FocusTarget;
	MoveToPoint_Parms.DestOffset = DestOffset;

	this->ProcessEvent ( pFnMoveToPoint, &MoveToPoint_Parms, NULL );
};

// Function SGshooter.SGController_Bot.DisableLookAt
// [0x00020002] 
// Parameters infos:

void ASGController_Bot::DisableLookAt ( )
{
	static UFunction* pFnDisableLookAt = NULL;

	if ( ! pFnDisableLookAt )
		pFnDisableLookAt = (UFunction*) UObject::GObjObjects()->Data[ 42237 ];

	ASGController_Bot_execDisableLookAt_Parms DisableLookAt_Parms;

	this->ProcessEvent ( pFnDisableLookAt, &DisableLookAt_Parms, NULL );
};

// Function SGshooter.SGController_Bot.LookAtPoint
// [0x00020002] 
// Parameters infos:
// struct FVector                 Point                          ( CPF_Parm )

void ASGController_Bot::LookAtPoint ( struct FVector Point )
{
	static UFunction* pFnLookAtPoint = NULL;

	if ( ! pFnLookAtPoint )
		pFnLookAtPoint = (UFunction*) UObject::GObjObjects()->Data[ 42235 ];

	ASGController_Bot_execLookAtPoint_Parms LookAtPoint_Parms;
	memcpy ( &LookAtPoint_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnLookAtPoint, &LookAtPoint_Parms, NULL );
};

// Function SGshooter.SGController_Bot.LookAtActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  PFocus                         ( CPF_Parm )

void ASGController_Bot::LookAtActor ( class AActor* PFocus )
{
	static UFunction* pFnLookAtActor = NULL;

	if ( ! pFnLookAtActor )
		pFnLookAtActor = (UFunction*) UObject::GObjObjects()->Data[ 42233 ];

	ASGController_Bot_execLookAtActor_Parms LookAtActor_Parms;
	LookAtActor_Parms.PFocus = PFocus;

	this->ProcessEvent ( pFnLookAtActor, &LookAtActor_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.CanDoubleJump
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Other                          ( CPF_Parm )

bool ASGController_BotBase::CanDoubleJump ( class APawn* Other )
{
	static UFunction* pFnCanDoubleJump = NULL;

	if ( ! pFnCanDoubleJump )
		pFnCanDoubleJump = (UFunction*) UObject::GObjObjects()->Data[ 42442 ];

	ASGController_BotBase_execCanDoubleJump_Parms CanDoubleJump_Parms;
	CanDoubleJump_Parms.Other = Other;

	this->ProcessEvent ( pFnCanDoubleJump, &CanDoubleJump_Parms, NULL );

	return CanDoubleJump_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.Initialize
// [0x00020000] 
// Parameters infos:

void ASGController_BotBase::Initialize ( )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 42441 ];

	ASGController_BotBase_execInitialize_Parms Initialize_Parms;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.AddDangerZone
// [0x00824002] 
// Parameters infos:
// struct FVector                 Loc                            ( CPF_Parm )
// float                          InnerRadius                    ( CPF_Parm )
// float                          Danger                         ( CPF_Parm )
// float                          ValidTime                      ( CPF_Parm )
// float                          FadeOutLength                  ( CPF_OptionalParm | CPF_Parm )

void ASGController_BotBase::AddDangerZone ( struct FVector Loc, float InnerRadius, float Danger, float ValidTime, float FadeOutLength )
{
	static UFunction* pFnAddDangerZone = NULL;

	if ( ! pFnAddDangerZone )
		pFnAddDangerZone = (UFunction*) UObject::GObjObjects()->Data[ 42434 ];

	ASGController_BotBase_execAddDangerZone_Parms AddDangerZone_Parms;
	memcpy ( &AddDangerZone_Parms.Loc, &Loc, 0xC );
	AddDangerZone_Parms.InnerRadius = InnerRadius;
	AddDangerZone_Parms.Danger = Danger;
	AddDangerZone_Parms.ValidTime = ValidTime;
	AddDangerZone_Parms.FadeOutLength = FadeOutLength;

	this->ProcessEvent ( pFnAddDangerZone, &AddDangerZone_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.GetDangerFromDangerZones
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )

float ASGController_BotBase::GetDangerFromDangerZones ( struct FVector Point )
{
	static UFunction* pFnGetDangerFromDangerZones = NULL;

	if ( ! pFnGetDangerFromDangerZones )
		pFnGetDangerFromDangerZones = (UFunction*) UObject::GObjObjects()->Data[ 42427 ];

	ASGController_BotBase_execGetDangerFromDangerZones_Parms GetDangerFromDangerZones_Parms;
	memcpy ( &GetDangerFromDangerZones_Parms.Point, &Point, 0xC );

	this->ProcessEvent ( pFnGetDangerFromDangerZones, &GetDangerFromDangerZones_Parms, NULL );

	return GetDangerFromDangerZones_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.OnAIMoveToActor
// [0x00020002] 
// Parameters infos:
// class USeqAct_AIMoveToActor*   Action                         ( CPF_Parm )

void ASGController_BotBase::OnAIMoveToActor ( class USeqAct_AIMoveToActor* Action )
{
	static UFunction* pFnOnAIMoveToActor = NULL;

	if ( ! pFnOnAIMoveToActor )
		pFnOnAIMoveToActor = (UFunction*) UObject::GObjObjects()->Data[ 42424 ];

	ASGController_BotBase_execOnAIMoveToActor_Parms OnAIMoveToActor_Parms;
	OnAIMoveToActor_Parms.Action = Action;

	this->ProcessEvent ( pFnOnAIMoveToActor, &OnAIMoveToActor_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.ScriptedMove_RethinkPath
// [0x00020002] 
// Parameters infos:

void ASGController_BotBase::ScriptedMove_RethinkPath ( )
{
	static UFunction* pFnScriptedMove_RethinkPath = NULL;

	if ( ! pFnScriptedMove_RethinkPath )
		pFnScriptedMove_RethinkPath = (UFunction*) UObject::GObjObjects()->Data[ 42421 ];

	ASGController_BotBase_execScriptedMove_RethinkPath_Parms ScriptedMove_RethinkPath_Parms;

	this->ProcessEvent ( pFnScriptedMove_RethinkPath, &ScriptedMove_RethinkPath_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.ScriptedMove_TooMuchTime
// [0x00020002] 
// Parameters infos:

void ASGController_BotBase::ScriptedMove_TooMuchTime ( )
{
	static UFunction* pFnScriptedMove_TooMuchTime = NULL;

	if ( ! pFnScriptedMove_TooMuchTime )
		pFnScriptedMove_TooMuchTime = (UFunction*) UObject::GObjObjects()->Data[ 42420 ];

	ASGController_BotBase_execScriptedMove_TooMuchTime_Parms ScriptedMove_TooMuchTime_Parms;

	this->ProcessEvent ( pFnScriptedMove_TooMuchTime, &ScriptedMove_TooMuchTime_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.MoveToPoint
// [0x00024002] 
// Parameters infos:
// struct FVector                 Point                          ( CPF_Parm )
// class AActor*                  FocusTarget                    ( CPF_OptionalParm | CPF_Parm )
// float                          DestOffset                     ( CPF_OptionalParm | CPF_Parm )

void ASGController_BotBase::MoveToPoint ( struct FVector Point, class AActor* FocusTarget, float DestOffset )
{
	static UFunction* pFnMoveToPoint = NULL;

	if ( ! pFnMoveToPoint )
		pFnMoveToPoint = (UFunction*) UObject::GObjObjects()->Data[ 42416 ];

	ASGController_BotBase_execMoveToPoint_Parms MoveToPoint_Parms;
	memcpy ( &MoveToPoint_Parms.Point, &Point, 0xC );
	MoveToPoint_Parms.FocusTarget = FocusTarget;
	MoveToPoint_Parms.DestOffset = DestOffset;

	this->ProcessEvent ( pFnMoveToPoint, &MoveToPoint_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.MoveToActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )
// class AActor*                  FocusTarget                    ( CPF_OptionalParm | CPF_Parm )
// float                          DestOffset                     ( CPF_OptionalParm | CPF_Parm )

void ASGController_BotBase::MoveToActor ( class AActor* Actor, class AActor* FocusTarget, float DestOffset )
{
	static UFunction* pFnMoveToActor = NULL;

	if ( ! pFnMoveToActor )
		pFnMoveToActor = (UFunction*) UObject::GObjObjects()->Data[ 42412 ];

	ASGController_BotBase_execMoveToActor_Parms MoveToActor_Parms;
	MoveToActor_Parms.Actor = Actor;
	MoveToActor_Parms.FocusTarget = FocusTarget;
	MoveToActor_Parms.DestOffset = DestOffset;

	this->ProcessEvent ( pFnMoveToActor, &MoveToActor_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.FindAValidPosition
// [0x00424002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxOffset                      ( CPF_Parm )
// unsigned long                  bReachableFromStart            ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 vTarget                        ( CPF_Parm | CPF_OutParm )

bool ASGController_BotBase::FindAValidPosition ( float MaxOffset, unsigned long bReachableFromStart, struct FVector* vTarget )
{
	static UFunction* pFnFindAValidPosition = NULL;

	if ( ! pFnFindAValidPosition )
		pFnFindAValidPosition = (UFunction*) UObject::GObjObjects()->Data[ 42404 ];

	ASGController_BotBase_execFindAValidPosition_Parms FindAValidPosition_Parms;
	FindAValidPosition_Parms.MaxOffset = MaxOffset;
	FindAValidPosition_Parms.bReachableFromStart = bReachableFromStart;

	this->ProcessEvent ( pFnFindAValidPosition, &FindAValidPosition_Parms, NULL );

	if ( vTarget )
		memcpy ( vTarget, &FindAValidPosition_Parms.vTarget, 0xC );

	return FindAValidPosition_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.NotifyHitWall
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )

bool ASGController_BotBase::eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall )
{
	static UFunction* pFnNotifyHitWall = NULL;

	if ( ! pFnNotifyHitWall )
		pFnNotifyHitWall = (UFunction*) UObject::GObjObjects()->Data[ 42400 ];

	ASGController_BotBase_eventNotifyHitWall_Parms NotifyHitWall_Parms;
	memcpy ( &NotifyHitWall_Parms.HitNormal, &HitNormal, 0xC );
	NotifyHitWall_Parms.Wall = Wall;

	this->ProcessEvent ( pFnNotifyHitWall, &NotifyHitWall_Parms, NULL );

	return NotifyHitWall_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.NotifyBump
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

bool ASGController_BotBase::eventNotifyBump ( class AActor* Other, struct FVector HitNormal )
{
	static UFunction* pFnNotifyBump = NULL;

	if ( ! pFnNotifyBump )
		pFnNotifyBump = (UFunction*) UObject::GObjObjects()->Data[ 42395 ];

	ASGController_BotBase_eventNotifyBump_Parms NotifyBump_Parms;
	NotifyBump_Parms.Other = Other;
	memcpy ( &NotifyBump_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnNotifyBump, &NotifyBump_Parms, NULL );

	return NotifyBump_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.ReceiveProjectileWarning
// [0x00020002] 
// Parameters infos:
// class AProjectile*             Proj                           ( CPF_Parm )

void ASGController_BotBase::ReceiveProjectileWarning ( class AProjectile* Proj )
{
	static UFunction* pFnReceiveProjectileWarning = NULL;

	if ( ! pFnReceiveProjectileWarning )
		pFnReceiveProjectileWarning = (UFunction*) UObject::GObjObjects()->Data[ 42393 ];

	ASGController_BotBase_execReceiveProjectileWarning_Parms ReceiveProjectileWarning_Parms;
	ReceiveProjectileWarning_Parms.Proj = Proj;

	this->ProcessEvent ( pFnReceiveProjectileWarning, &ReceiveProjectileWarning_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.ReceiveWarning
// [0x00020002] 
// Parameters infos:
// class APawn*                   shooter                        ( CPF_Parm )
// float                          projSpeed                      ( CPF_Parm )
// struct FVector                 FireDir                        ( CPF_Parm )

void ASGController_BotBase::ReceiveWarning ( class APawn* shooter, float projSpeed, struct FVector FireDir )
{
	static UFunction* pFnReceiveWarning = NULL;

	if ( ! pFnReceiveWarning )
		pFnReceiveWarning = (UFunction*) UObject::GObjObjects()->Data[ 42389 ];

	ASGController_BotBase_execReceiveWarning_Parms ReceiveWarning_Parms;
	ReceiveWarning_Parms.shooter = shooter;
	ReceiveWarning_Parms.projSpeed = projSpeed;
	memcpy ( &ReceiveWarning_Parms.FireDir, &FireDir, 0xC );

	this->ProcessEvent ( pFnReceiveWarning, &ReceiveWarning_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.InstantWarnTarget
// [0x00020002] 
// Parameters infos:
// class AActor*                  InTarget                       ( CPF_Parm )
// class AWeapon*                 FiredWeapon                    ( CPF_Parm )
// struct FVector                 FireDir                        ( CPF_Parm )

void ASGController_BotBase::InstantWarnTarget ( class AActor* InTarget, class AWeapon* FiredWeapon, struct FVector FireDir )
{
	static UFunction* pFnInstantWarnTarget = NULL;

	if ( ! pFnInstantWarnTarget )
		pFnInstantWarnTarget = (UFunction*) UObject::GObjObjects()->Data[ 42385 ];

	ASGController_BotBase_execInstantWarnTarget_Parms InstantWarnTarget_Parms;
	InstantWarnTarget_Parms.InTarget = InTarget;
	InstantWarnTarget_Parms.FiredWeapon = FiredWeapon;
	memcpy ( &InstantWarnTarget_Parms.FireDir, &FireDir, 0xC );

	this->ProcessEvent ( pFnInstantWarnTarget, &InstantWarnTarget_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.EnemyNotVisible
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASGController_BotBase::eventEnemyNotVisible ( )
{
	static UFunction* pFnEnemyNotVisible = NULL;

	if ( ! pFnEnemyNotVisible )
		pFnEnemyNotVisible = (UFunction*) UObject::GObjObjects()->Data[ 42384 ];

	ASGController_BotBase_eventEnemyNotVisible_Parms EnemyNotVisible_Parms;

	this->ProcessEvent ( pFnEnemyNotVisible, &EnemyNotVisible_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.SeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   SeenPlayer                     ( CPF_Parm )

void ASGController_BotBase::eventSeePlayer ( class APawn* SeenPlayer )
{
	static UFunction* pFnSeePlayer = NULL;

	if ( ! pFnSeePlayer )
		pFnSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 42381 ];

	ASGController_BotBase_eventSeePlayer_Parms SeePlayer_Parms;
	SeePlayer_Parms.SeenPlayer = SeenPlayer;

	this->ProcessEvent ( pFnSeePlayer, &SeePlayer_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.GetPossibleEnemyLocation
// [0x00820002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASGController_BotBase::GetPossibleEnemyLocation ( )
{
	static UFunction* pFnGetPossibleEnemyLocation = NULL;

	if ( ! pFnGetPossibleEnemyLocation )
		pFnGetPossibleEnemyLocation = (UFunction*) UObject::GObjObjects()->Data[ 42374 ];

	ASGController_BotBase_execGetPossibleEnemyLocation_Parms GetPossibleEnemyLocation_Parms;

	this->ProcessEvent ( pFnGetPossibleEnemyLocation, &GetPossibleEnemyLocation_Parms, NULL );

	return GetPossibleEnemyLocation_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.IsInAttackRange
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGController_BotBase::IsInAttackRange ( )
{
	static UFunction* pFnIsInAttackRange = NULL;

	if ( ! pFnIsInAttackRange )
		pFnIsInAttackRange = (UFunction*) UObject::GObjObjects()->Data[ 42371 ];

	ASGController_BotBase_execIsInAttackRange_Parms IsInAttackRange_Parms;

	this->ProcessEvent ( pFnIsInAttackRange, &IsInAttackRange_Parms, NULL );

	return IsInAttackRange_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.FireAt
// [0x00024002] 
// Parameters infos:
// class APawn*                   Target                         ( CPF_OptionalParm | CPF_Parm )
// int                            nShots                         ( CPF_OptionalParm | CPF_Parm )
// float                          AccuracySpreadPct              ( CPF_OptionalParm | CPF_Parm )

void ASGController_BotBase::FireAt ( class APawn* Target, int nShots, float AccuracySpreadPct )
{
	static UFunction* pFnFireAt = NULL;

	if ( ! pFnFireAt )
		pFnFireAt = (UFunction*) UObject::GObjObjects()->Data[ 42367 ];

	ASGController_BotBase_execFireAt_Parms FireAt_Parms;
	FireAt_Parms.Target = Target;
	FireAt_Parms.nShots = nShots;
	FireAt_Parms.AccuracySpreadPct = AccuracySpreadPct;

	this->ProcessEvent ( pFnFireAt, &FireAt_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.IsChangingPawnViewLocation
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 ViewLoc                        ( CPF_Parm | CPF_OutParm )

bool ASGController_BotBase::IsChangingPawnViewLocation ( struct FVector* ViewLoc )
{
	static UFunction* pFnIsChangingPawnViewLocation = NULL;

	if ( ! pFnIsChangingPawnViewLocation )
		pFnIsChangingPawnViewLocation = (UFunction*) UObject::GObjObjects()->Data[ 42364 ];

	ASGController_BotBase_execIsChangingPawnViewLocation_Parms IsChangingPawnViewLocation_Parms;

	this->ProcessEvent ( pFnIsChangingPawnViewLocation, &IsChangingPawnViewLocation_Parms, NULL );

	if ( ViewLoc )
		memcpy ( ViewLoc, &IsChangingPawnViewLocation_Parms.ViewLoc, 0xC );

	return IsChangingPawnViewLocation_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.LostContact
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxTime                        ( CPF_Parm )

bool ASGController_BotBase::LostContact ( float MaxTime )
{
	static UFunction* pFnLostContact = NULL;

	if ( ! pFnLostContact )
		pFnLostContact = (UFunction*) UObject::GObjObjects()->Data[ 42361 ];

	ASGController_BotBase_execLostContact_Parms LostContact_Parms;
	LostContact_Parms.MaxTime = MaxTime;

	this->ProcessEvent ( pFnLostContact, &LostContact_Parms, NULL );

	return LostContact_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.SetAlertness
// [0x00020002] 
// Parameters infos:
// float                          NewAlertness                   ( CPF_Parm )

void ASGController_BotBase::SetAlertness ( float NewAlertness )
{
	static UFunction* pFnSetAlertness = NULL;

	if ( ! pFnSetAlertness )
		pFnSetAlertness = (UFunction*) UObject::GObjObjects()->Data[ 42359 ];

	ASGController_BotBase_execSetAlertness_Parms SetAlertness_Parms;
	SetAlertness_Parms.NewAlertness = NewAlertness;

	this->ProcessEvent ( pFnSetAlertness, &SetAlertness_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.NotifyTakeHit
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ASGController_BotBase::eventNotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 42353 ];

	ASGController_BotBase_eventNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.OnUnderFire
// [0x00020000] 
// Parameters infos:
// struct FVector                 FireDir                        ( CPF_Parm )

void ASGController_BotBase::OnUnderFire ( struct FVector FireDir )
{
	static UFunction* pFnOnUnderFire = NULL;

	if ( ! pFnOnUnderFire )
		pFnOnUnderFire = (UFunction*) UObject::GObjObjects()->Data[ 42351 ];

	ASGController_BotBase_execOnUnderFire_Parms OnUnderFire_Parms;
	memcpy ( &OnUnderFire_Parms.FireDir, &FireDir, 0xC );

	this->ProcessEvent ( pFnOnUnderFire, &OnUnderFire_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.OnHearSound
// [0x00020000] 
// Parameters infos:
// class ASGPawn*                 NoiseMaker                     ( CPF_Parm )
// float                          Loudness                       ( CPF_Parm )
// struct FName                   SoundType                      ( CPF_Parm )

void ASGController_BotBase::OnHearSound ( class ASGPawn* NoiseMaker, float Loudness, struct FName SoundType )
{
	static UFunction* pFnOnHearSound = NULL;

	if ( ! pFnOnHearSound )
		pFnOnHearSound = (UFunction*) UObject::GObjObjects()->Data[ 42347 ];

	ASGController_BotBase_execOnHearSound_Parms OnHearSound_Parms;
	OnHearSound_Parms.NoiseMaker = NoiseMaker;
	OnHearSound_Parms.Loudness = Loudness;
	memcpy ( &OnHearSound_Parms.SoundType, &SoundType, 0x8 );

	this->ProcessEvent ( pFnOnHearSound, &OnHearSound_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.OnStopSeeingEnemy
// [0x00020000] 
// Parameters infos:

void ASGController_BotBase::OnStopSeeingEnemy ( )
{
	static UFunction* pFnOnStopSeeingEnemy = NULL;

	if ( ! pFnOnStopSeeingEnemy )
		pFnOnStopSeeingEnemy = (UFunction*) UObject::GObjObjects()->Data[ 42346 ];

	ASGController_BotBase_execOnStopSeeingEnemy_Parms OnStopSeeingEnemy_Parms;

	this->ProcessEvent ( pFnOnStopSeeingEnemy, &OnStopSeeingEnemy_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.OnStartSeeingEnemy
// [0x00020000] 
// Parameters infos:

void ASGController_BotBase::OnStartSeeingEnemy ( )
{
	static UFunction* pFnOnStartSeeingEnemy = NULL;

	if ( ! pFnOnStartSeeingEnemy )
		pFnOnStartSeeingEnemy = (UFunction*) UObject::GObjObjects()->Data[ 42345 ];

	ASGController_BotBase_execOnStartSeeingEnemy_Parms OnStartSeeingEnemy_Parms;

	this->ProcessEvent ( pFnOnStartSeeingEnemy, &OnStartSeeingEnemy_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.Rand_Range
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSGRange                Range                          ( CPF_Parm )

float ASGController_BotBase::Rand_Range ( struct FSGRange Range )
{
	static UFunction* pFnRand_Range = NULL;

	if ( ! pFnRand_Range )
		pFnRand_Range = (UFunction*) UObject::GObjObjects()->Data[ 42342 ];

	ASGController_BotBase_execRand_Range_Parms Rand_Range_Parms;
	memcpy ( &Rand_Range_Parms.Range, &Range, 0x8 );

	this->ProcessEvent ( pFnRand_Range, &Rand_Range_Parms, NULL );

	return Rand_Range_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.GetMainPlayer
// [0x00020002] 
// Parameters infos:
// class ASGPawn*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ASGPawn* ASGController_BotBase::GetMainPlayer ( )
{
	static UFunction* pFnGetMainPlayer = NULL;

	if ( ! pFnGetMainPlayer )
		pFnGetMainPlayer = (UFunction*) UObject::GObjObjects()->Data[ 42338 ];

	ASGController_BotBase_execGetMainPlayer_Parms GetMainPlayer_Parms;

	this->ProcessEvent ( pFnGetMainPlayer, &GetMainPlayer_Parms, NULL );

	return GetMainPlayer_Parms.ReturnValue;
};

// Function SGshooter.SGController_BotBase.UpdatePawnRotation
// [0x00020000] 
// Parameters infos:

void ASGController_BotBase::UpdatePawnRotation ( )
{
	static UFunction* pFnUpdatePawnRotation = NULL;

	if ( ! pFnUpdatePawnRotation )
		pFnUpdatePawnRotation = (UFunction*) UObject::GObjObjects()->Data[ 42337 ];

	ASGController_BotBase_execUpdatePawnRotation_Parms UpdatePawnRotation_Parms;

	this->ProcessEvent ( pFnUpdatePawnRotation, &UpdatePawnRotation_Parms, NULL );
};

// Function SGshooter.SGController_BotBase.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ASGController_BotBase::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 42334 ];

	ASGController_BotBase_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function SGshooter.SGController_Player.ServerUseKismetEvent
// [0x002200C2] 
// Parameters infos:
// struct FName                   CurrentToolTipName             ( CPF_Parm )

void ASGController_Player::ServerUseKismetEvent ( struct FName CurrentToolTipName )
{
	static UFunction* pFnServerUseKismetEvent = NULL;

	if ( ! pFnServerUseKismetEvent )
		pFnServerUseKismetEvent = (UFunction*) UObject::GObjObjects()->Data[ 43592 ];

	ASGController_Player_execServerUseKismetEvent_Parms ServerUseKismetEvent_Parms;
	memcpy ( &ServerUseKismetEvent_Parms.CurrentToolTipName, &CurrentToolTipName, 0x8 );

	this->ProcessEvent ( pFnServerUseKismetEvent, &ServerUseKismetEvent_Parms, NULL );
};

// Function SGshooter.SGController_Player.PrevWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ASGController_Player::PrevWeapon ( )
{
	static UFunction* pFnPrevWeapon = NULL;

	if ( ! pFnPrevWeapon )
		pFnPrevWeapon = (UFunction*) UObject::GObjObjects()->Data[ 43584 ];

	ASGController_Player_execPrevWeapon_Parms PrevWeapon_Parms;

	this->ProcessEvent ( pFnPrevWeapon, &PrevWeapon_Parms, NULL );
};

// Function SGshooter.SGController_Player.NextWeapon
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ASGController_Player::NextWeapon ( )
{
	static UFunction* pFnNextWeapon = NULL;

	if ( ! pFnNextWeapon )
		pFnNextWeapon = (UFunction*) UObject::GObjObjects()->Data[ 43575 ];

	ASGController_Player_execNextWeapon_Parms NextWeapon_Parms;

	this->ProcessEvent ( pFnNextWeapon, &NextWeapon_Parms, NULL );
};

// Function SGshooter.SGController_Player.CustomAction_PlayRandomAnim
// [0x00020002] 
// Parameters infos:

void ASGController_Player::CustomAction_PlayRandomAnim ( )
{
	static UFunction* pFnCustomAction_PlayRandomAnim = NULL;

	if ( ! pFnCustomAction_PlayRandomAnim )
		pFnCustomAction_PlayRandomAnim = (UFunction*) UObject::GObjObjects()->Data[ 43529 ];

	ASGController_Player_execCustomAction_PlayRandomAnim_Parms CustomAction_PlayRandomAnim_Parms;

	this->ProcessEvent ( pFnCustomAction_PlayRandomAnim, &CustomAction_PlayRandomAnim_Parms, NULL );
};

// Function SGshooter.SGController_Player.StopCustomAction
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ASGController_Player::StopCustomAction ( )
{
	static UFunction* pFnStopCustomAction = NULL;

	if ( ! pFnStopCustomAction )
		pFnStopCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 43528 ];

	ASGController_Player_execStopCustomAction_Parms StopCustomAction_Parms;

	this->ProcessEvent ( pFnStopCustomAction, &StopCustomAction_Parms, NULL );
};

// Function SGshooter.SGController_Player.StartCustomAction
// [0x00024002] 
// Parameters infos:
// class ASplineActor*            Spline                         ( CPF_Parm )
// struct FName                   StartAnim                      ( CPF_Parm )
// TArray< struct FName >         aRandomAnims                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   EndAnim                        ( CPF_Parm )
// float                          Damage                         ( CPF_OptionalParm | CPF_Parm )
// struct FName                   SocketName                     ( CPF_OptionalParm | CPF_Parm )

void ASGController_Player::StartCustomAction ( class ASplineActor* Spline, struct FName StartAnim, TArray< struct FName > aRandomAnims, struct FName EndAnim, float Damage, struct FName SocketName )
{
	static UFunction* pFnStartCustomAction = NULL;

	if ( ! pFnStartCustomAction )
		pFnStartCustomAction = (UFunction*) UObject::GObjObjects()->Data[ 43520 ];

	ASGController_Player_execStartCustomAction_Parms StartCustomAction_Parms;
	StartCustomAction_Parms.Spline = Spline;
	memcpy ( &StartCustomAction_Parms.StartAnim, &StartAnim, 0x8 );
	memcpy ( &StartCustomAction_Parms.aRandomAnims, &aRandomAnims, 0xC );
	memcpy ( &StartCustomAction_Parms.EndAnim, &EndAnim, 0x8 );
	StartCustomAction_Parms.Damage = Damage;
	memcpy ( &StartCustomAction_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnStartCustomAction, &StartCustomAction_Parms, NULL );
};

// Function SGshooter.SGController_Player.NotifyTakeHit
// [0x00020002] 
// Parameters infos:
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void ASGController_Player::NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum )
{
	static UFunction* pFnNotifyTakeHit = NULL;

	if ( ! pFnNotifyTakeHit )
		pFnNotifyTakeHit = (UFunction*) UObject::GObjObjects()->Data[ 43514 ];

	ASGController_Player_execNotifyTakeHit_Parms NotifyTakeHit_Parms;
	NotifyTakeHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &NotifyTakeHit_Parms.HitLocation, &HitLocation, 0xC );
	NotifyTakeHit_Parms.Damage = Damage;
	NotifyTakeHit_Parms.DamageType = DamageType;
	memcpy ( &NotifyTakeHit_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnNotifyTakeHit, &NotifyTakeHit_Parms, NULL );
};

// Function SGshooter.SGController_Player.TryUpdateHud
// [0x00020002] 
// Parameters infos:

void ASGController_Player::TryUpdateHud ( )
{
	static UFunction* pFnTryUpdateHud = NULL;

	if ( ! pFnTryUpdateHud )
		pFnTryUpdateHud = (UFunction*) UObject::GObjObjects()->Data[ 43511 ];

	ASGController_Player_execTryUpdateHud_Parms TryUpdateHud_Parms;

	this->ProcessEvent ( pFnTryUpdateHud, &TryUpdateHud_Parms, NULL );
};

// Function SGshooter.SGController_Player.ClientUpdateHud
// [0x010201C2] 
// Parameters infos:

void ASGController_Player::ClientUpdateHud ( )
{
	static UFunction* pFnClientUpdateHud = NULL;

	if ( ! pFnClientUpdateHud )
		pFnClientUpdateHud = (UFunction*) UObject::GObjObjects()->Data[ 43510 ];

	ASGController_Player_execClientUpdateHud_Parms ClientUpdateHud_Parms;

	this->ProcessEvent ( pFnClientUpdateHud, &ClientUpdateHud_Parms, NULL );
};

// Function SGshooter.SGController_Player.ClientSetFlashMovie
// [0x010201C2] 
// Parameters infos:
// class UClass*                  FlashMovieClass                ( CPF_Parm )

void ASGController_Player::ClientSetFlashMovie ( class UClass* FlashMovieClass )
{
	static UFunction* pFnClientSetFlashMovie = NULL;

	if ( ! pFnClientSetFlashMovie )
		pFnClientSetFlashMovie = (UFunction*) UObject::GObjObjects()->Data[ 43508 ];

	ASGController_Player_execClientSetFlashMovie_Parms ClientSetFlashMovie_Parms;
	ClientSetFlashMovie_Parms.FlashMovieClass = FlashMovieClass;

	this->ProcessEvent ( pFnClientSetFlashMovie, &ClientSetFlashMovie_Parms, NULL );
};

// Function SGshooter.SGController_Player.GiveDefaultInventory
// [0x00020102] 
// Parameters infos:
// TArray< class UClass* >        InitialItems                   ( CPF_Parm | CPF_NeedCtorLink )

void ASGController_Player::GiveDefaultInventory ( TArray< class UClass* > InitialItems )
{
	static UFunction* pFnGiveDefaultInventory = NULL;

	if ( ! pFnGiveDefaultInventory )
		pFnGiveDefaultInventory = (UFunction*) UObject::GObjObjects()->Data[ 43504 ];

	ASGController_Player_execGiveDefaultInventory_Parms GiveDefaultInventory_Parms;
	memcpy ( &GiveDefaultInventory_Parms.InitialItems, &InitialItems, 0xC );

	this->ProcessEvent ( pFnGiveDefaultInventory, &GiveDefaultInventory_Parms, NULL );
};

// Function SGshooter.SGController_Player.Possess
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   inPawn                         ( CPF_Parm )
// unsigned long                  bVehicleTransition             ( CPF_Parm )

void ASGController_Player::eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition )
{
	static UFunction* pFnPossess = NULL;

	if ( ! pFnPossess )
		pFnPossess = (UFunction*) UObject::GObjObjects()->Data[ 43492 ];

	ASGController_Player_eventPossess_Parms Possess_Parms;
	Possess_Parms.inPawn = inPawn;
	Possess_Parms.bVehicleTransition = bVehicleTransition;

	this->ProcessEvent ( pFnPossess, &Possess_Parms, NULL );
};

// Function SGshooter.SGFamilyInfo.GetTeamMaterials
// [0x00422002] 
// Parameters infos:
// int                            TeamNum                        ( CPF_Parm )
// class UMaterialInterface*      TeamMaterialHead               ( CPF_Parm | CPF_OutParm )
// class UMaterialInterface*      TeamMaterialBody               ( CPF_Parm | CPF_OutParm )

void USGFamilyInfo::GetTeamMaterials ( int TeamNum, class UMaterialInterface** TeamMaterialHead, class UMaterialInterface** TeamMaterialBody )
{
	static UFunction* pFnGetTeamMaterials = NULL;

	if ( ! pFnGetTeamMaterials )
		pFnGetTeamMaterials = (UFunction*) UObject::GObjObjects()->Data[ 44351 ];

	USGFamilyInfo_execGetTeamMaterials_Parms GetTeamMaterials_Parms;
	GetTeamMaterials_Parms.TeamNum = TeamNum;

	this->ProcessEvent ( pFnGetTeamMaterials, &GetTeamMaterials_Parms, NULL );

	if ( TeamMaterialHead )
		*TeamMaterialHead = GetTeamMaterials_Parms.TeamMaterialHead;

	if ( TeamMaterialBody )
		*TeamMaterialBody = GetTeamMaterials_Parms.TeamMaterialBody;
};

// Function SGshooter.SGHUD.SetShowScores
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bEnableShowScores              ( CPF_Parm )

void ASGHUD::SetShowScores ( unsigned long bEnableShowScores )
{
	static UFunction* pFnSetShowScores = NULL;

	if ( ! pFnSetShowScores )
		pFnSetShowScores = (UFunction*) UObject::GObjObjects()->Data[ 46664 ];

	ASGHUD_execSetShowScores_Parms SetShowScores_Parms;
	SetShowScores_Parms.bEnableShowScores = bEnableShowScores;

	this->ProcessEvent ( pFnSetShowScores, &SetShowScores_Parms, NULL );
};

// Function SGshooter.SGHUD.CheckCrosshairOnEnemy
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGHUD::CheckCrosshairOnEnemy ( )
{
	static UFunction* pFnCheckCrosshairOnEnemy = NULL;

	if ( ! pFnCheckCrosshairOnEnemy )
		pFnCheckCrosshairOnEnemy = (UFunction*) UObject::GObjObjects()->Data[ 46655 ];

	ASGHUD_execCheckCrosshairOnEnemy_Parms CheckCrosshairOnEnemy_Parms;

	this->ProcessEvent ( pFnCheckCrosshairOnEnemy, &CheckCrosshairOnEnemy_Parms, NULL );

	return CheckCrosshairOnEnemy_Parms.ReturnValue;
};

// Function SGshooter.SGHUD.Destroyed
// [0x00020822] ( FUNC_Event )
// Parameters infos:

void ASGHUD::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 46654 ];

	ASGHUD_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function SGshooter.SGHUD.OldDrawHUD
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void ASGHUD::eventOldDrawHUD ( )
{
	static UFunction* pFnOldDrawHUD = NULL;

	if ( ! pFnOldDrawHUD )
		pFnOldDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 46648 ];

	ASGHUD_eventOldDrawHUD_Parms OldDrawHUD_Parms;

	this->ProcessEvent ( pFnOldDrawHUD, &OldDrawHUD_Parms, NULL );
};

// Function SGshooter.SGHUD.SetScopeTex
// [0x00020002] 
// Parameters infos:
// class UTexture*                Tex                            ( CPF_Parm )

void ASGHUD::SetScopeTex ( class UTexture* Tex )
{
	static UFunction* pFnSetScopeTex = NULL;

	if ( ! pFnSetScopeTex )
		pFnSetScopeTex = (UFunction*) UObject::GObjObjects()->Data[ 46646 ];

	ASGHUD_execSetScopeTex_Parms SetScopeTex_Parms;
	SetScopeTex_Parms.Tex = Tex;

	this->ProcessEvent ( pFnSetScopeTex, &SetScopeTex_Parms, NULL );
};

// Function SGshooter.SGHUD.PostRender
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASGHUD::eventPostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 46645 ];

	ASGHUD_eventPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function SGshooter.SGHUD.ParseExpression
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Expression                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString ASGHUD::ParseExpression ( struct FString Expression )
{
	static UFunction* pFnParseExpression = NULL;

	if ( ! pFnParseExpression )
		pFnParseExpression = (UFunction*) UObject::GObjObjects()->Data[ 46640 ];

	ASGHUD_execParseExpression_Parms ParseExpression_Parms;
	memcpy ( &ParseExpression_Parms.Expression, &Expression, 0xC );

	this->ProcessEvent ( pFnParseExpression, &ParseExpression_Parms, NULL );

	return ParseExpression_Parms.ReturnValue;
};

// Function SGshooter.SGHUD.SetFlashMovie
// [0x00020002] 
// Parameters infos:
// class UClass*                  FlashMovieClass                ( CPF_Parm )

void ASGHUD::SetFlashMovie ( class UClass* FlashMovieClass )
{
	static UFunction* pFnSetFlashMovie = NULL;

	if ( ! pFnSetFlashMovie )
		pFnSetFlashMovie = (UFunction*) UObject::GObjObjects()->Data[ 46638 ];

	ASGHUD_execSetFlashMovie_Parms SetFlashMovie_Parms;
	SetFlashMovie_Parms.FlashMovieClass = FlashMovieClass;

	this->ProcessEvent ( pFnSetFlashMovie, &SetFlashMovie_Parms, NULL );
};

// Function SGshooter.SGHUD.DrawGameHud
// [0x00820002] 
// Parameters infos:

void ASGHUD::DrawGameHud ( )
{
	static UFunction* pFnDrawGameHud = NULL;

	if ( ! pFnDrawGameHud )
		pFnDrawGameHud = (UFunction*) UObject::GObjObjects()->Data[ 46634 ];

	ASGHUD_execDrawGameHud_Parms DrawGameHud_Parms;

	this->ProcessEvent ( pFnDrawGameHud, &DrawGameHud_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayClock
// [0x00820002] 
// Parameters infos:

void ASGHUD::DisplayClock ( )
{
	static UFunction* pFnDisplayClock = NULL;

	if ( ! pFnDisplayClock )
		pFnDisplayClock = (UFunction*) UObject::GObjObjects()->Data[ 46631 ];

	ASGHUD_execDisplayClock_Parms DisplayClock_Parms;

	this->ProcessEvent ( pFnDisplayClock, &DisplayClock_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayConsoleMessages
// [0x00020002] 
// Parameters infos:

void ASGHUD::DisplayConsoleMessages ( )
{
	static UFunction* pFnDisplayConsoleMessages = NULL;

	if ( ! pFnDisplayConsoleMessages )
		pFnDisplayConsoleMessages = (UFunction*) UObject::GObjObjects()->Data[ 46625 ];

	ASGHUD_execDisplayConsoleMessages_Parms DisplayConsoleMessages_Parms;

	this->ProcessEvent ( pFnDisplayConsoleMessages, &DisplayConsoleMessages_Parms, NULL );
};

// Function SGshooter.SGHUD.DrawLivingHud
// [0x00020002] 
// Parameters infos:

void ASGHUD::DrawLivingHud ( )
{
	static UFunction* pFnDrawLivingHud = NULL;

	if ( ! pFnDrawLivingHud )
		pFnDrawLivingHud = (UFunction*) UObject::GObjObjects()->Data[ 46622 ];

	ASGHUD_execDrawLivingHud_Parms DrawLivingHud_Parms;

	this->ProcessEvent ( pFnDrawLivingHud, &DrawLivingHud_Parms, NULL );
};

// Function SGshooter.SGHUD.AddActor
// [0x00020102] 
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )

void ASGHUD::AddActor ( class AActor* A )
{
	static UFunction* pFnAddActor = NULL;

	if ( ! pFnAddActor )
		pFnAddActor = (UFunction*) UObject::GObjObjects()->Data[ 46620 ];

	ASGHUD_execAddActor_Parms AddActor_Parms;
	AddActor_Parms.A = A;

	this->ProcessEvent ( pFnAddActor, &AddActor_Parms, NULL );
};

// Function SGshooter.SGHUD.SGSDrawToolTip
// [0x00024100] 
// Parameters infos:
// class UCanvas*                 Cvs                            ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          U                              ( CPF_Parm )
// float                          V                              ( CPF_Parm )
// float                          UL                             ( CPF_Parm )
// float                          VL                             ( CPF_Parm )
// float                          ResScale                       ( CPF_Parm )
// class UTexture2D*              IconTexture                    ( CPF_OptionalParm | CPF_Parm )
// float                          Alpha                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGenerator                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPickup                        ( CPF_OptionalParm | CPF_Parm )

void ASGHUD::SGSDrawToolTip ( class UCanvas* Cvs, class APlayerController* PC, struct FString Command, float X, float Y, float U, float V, float UL, float VL, float ResScale, class UTexture2D* IconTexture, float Alpha, unsigned long bGenerator, unsigned long bPickup )
{
	static UFunction* pFnSGSDrawToolTip = NULL;

	if ( ! pFnSGSDrawToolTip )
		pFnSGSDrawToolTip = (UFunction*) UObject::GObjObjects()->Data[ 46605 ];

	ASGHUD_execSGSDrawToolTip_Parms SGSDrawToolTip_Parms;
	SGSDrawToolTip_Parms.Cvs = Cvs;
	SGSDrawToolTip_Parms.PC = PC;
	memcpy ( &SGSDrawToolTip_Parms.Command, &Command, 0xC );
	SGSDrawToolTip_Parms.X = X;
	SGSDrawToolTip_Parms.Y = Y;
	SGSDrawToolTip_Parms.U = U;
	SGSDrawToolTip_Parms.V = V;
	SGSDrawToolTip_Parms.UL = UL;
	SGSDrawToolTip_Parms.VL = VL;
	SGSDrawToolTip_Parms.ResScale = ResScale;
	SGSDrawToolTip_Parms.IconTexture = IconTexture;
	SGSDrawToolTip_Parms.Alpha = Alpha;
	SGSDrawToolTip_Parms.bGenerator = bGenerator;
	SGSDrawToolTip_Parms.bPickup = bPickup;

	this->ProcessEvent ( pFnSGSDrawToolTip, &SGSDrawToolTip_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayLeaderBoard
// [0x00020000] 
// Parameters infos:
// struct FVector2D               pos                            ( CPF_Parm )

void ASGHUD::DisplayLeaderBoard ( struct FVector2D pos )
{
	static UFunction* pFnDisplayLeaderBoard = NULL;

	if ( ! pFnDisplayLeaderBoard )
		pFnDisplayLeaderBoard = (UFunction*) UObject::GObjObjects()->Data[ 46603 ];

	ASGHUD_execDisplayLeaderBoard_Parms DisplayLeaderBoard_Parms;
	memcpy ( &DisplayLeaderBoard_Parms.pos, &pos, 0x8 );

	this->ProcessEvent ( pFnDisplayLeaderBoard, &DisplayLeaderBoard_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayFragCount
// [0x00020000] 
// Parameters infos:
// struct FVector2D               pos                            ( CPF_Parm )

void ASGHUD::DisplayFragCount ( struct FVector2D pos )
{
	static UFunction* pFnDisplayFragCount = NULL;

	if ( ! pFnDisplayFragCount )
		pFnDisplayFragCount = (UFunction*) UObject::GObjObjects()->Data[ 46601 ];

	ASGHUD_execDisplayFragCount_Parms DisplayFragCount_Parms;
	memcpy ( &DisplayFragCount_Parms.pos, &pos, 0x8 );

	this->ProcessEvent ( pFnDisplayFragCount, &DisplayFragCount_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayPowerups
// [0x00020000] 
// Parameters infos:

void ASGHUD::DisplayPowerups ( )
{
	static UFunction* pFnDisplayPowerups = NULL;

	if ( ! pFnDisplayPowerups )
		pFnDisplayPowerups = (UFunction*) UObject::GObjObjects()->Data[ 46600 ];

	ASGHUD_execDisplayPowerups_Parms DisplayPowerups_Parms;

	this->ProcessEvent ( pFnDisplayPowerups, &DisplayPowerups_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayAmmo
// [0x00020000] 
// Parameters infos:
// class AUTWeapon*               Weapon                         ( CPF_Parm )

void ASGHUD::DisplayAmmo ( class AUTWeapon* Weapon )
{
	static UFunction* pFnDisplayAmmo = NULL;

	if ( ! pFnDisplayAmmo )
		pFnDisplayAmmo = (UFunction*) UObject::GObjObjects()->Data[ 46598 ];

	ASGHUD_execDisplayAmmo_Parms DisplayAmmo_Parms;
	DisplayAmmo_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnDisplayAmmo, &DisplayAmmo_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayPawnDoll
// [0x00020000] 
// Parameters infos:

void ASGHUD::DisplayPawnDoll ( )
{
	static UFunction* pFnDisplayPawnDoll = NULL;

	if ( ! pFnDisplayPawnDoll )
		pFnDisplayPawnDoll = (UFunction*) UObject::GObjObjects()->Data[ 46597 ];

	ASGHUD_execDisplayPawnDoll_Parms DisplayPawnDoll_Parms;

	this->ProcessEvent ( pFnDisplayPawnDoll, &DisplayPawnDoll_Parms, NULL );
};

// Function SGshooter.SGHUD.DisplayPortrait
// [0x00020100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASGHUD::DisplayPortrait ( float DeltaTime )
{
	static UFunction* pFnDisplayPortrait = NULL;

	if ( ! pFnDisplayPortrait )
		pFnDisplayPortrait = (UFunction*) UObject::GObjObjects()->Data[ 46595 ];

	ASGHUD_execDisplayPortrait_Parms DisplayPortrait_Parms;
	DisplayPortrait_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnDisplayPortrait, &DisplayPortrait_Parms, NULL );
};

// Function SGshooter.SGHUD.ShowPortrait
// [0x00024100] 
// Parameters infos:
// class AUTPlayerReplicationInfo* ShowPRI                        ( CPF_Parm )
// float                          PortraitDuration               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverrideCurrentSpeaker        ( CPF_OptionalParm | CPF_Parm )

void ASGHUD::ShowPortrait ( class AUTPlayerReplicationInfo* ShowPRI, float PortraitDuration, unsigned long bOverrideCurrentSpeaker )
{
	static UFunction* pFnShowPortrait = NULL;

	if ( ! pFnShowPortrait )
		pFnShowPortrait = (UFunction*) UObject::GObjObjects()->Data[ 46591 ];

	ASGHUD_execShowPortrait_Parms ShowPortrait_Parms;
	ShowPortrait_Parms.ShowPRI = ShowPRI;
	ShowPortrait_Parms.PortraitDuration = PortraitDuration;
	ShowPortrait_Parms.bOverrideCurrentSpeaker = bOverrideCurrentSpeaker;

	this->ProcessEvent ( pFnShowPortrait, &ShowPortrait_Parms, NULL );
};

// Function SGshooter.SGHUD.DrawHealth
// [0x00026100] 
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// float                          MaxWidth                       ( CPF_Parm )
// float                          Height                         ( CPF_Parm )
// class UCanvas*                 DrawCanvas                     ( CPF_Parm )
// unsigned char                  Alpha                          ( CPF_OptionalParm | CPF_Parm )

void ASGHUD::DrawHealth ( float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas, unsigned char Alpha )
{
	static UFunction* pFnDrawHealth = NULL;

	if ( ! pFnDrawHealth )
		pFnDrawHealth = (UFunction*) UObject::GObjObjects()->Data[ 46583 ];

	ASGHUD_execDrawHealth_Parms DrawHealth_Parms;
	DrawHealth_Parms.X = X;
	DrawHealth_Parms.Y = Y;
	DrawHealth_Parms.Width = Width;
	DrawHealth_Parms.MaxWidth = MaxWidth;
	DrawHealth_Parms.Height = Height;
	DrawHealth_Parms.DrawCanvas = DrawCanvas;
	DrawHealth_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnDrawHealth, &DrawHealth_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Weapon_UpdateFiringMode
// [0x00020000] 
// Parameters infos:
// class ASGWeapon*               Weapon                         ( CPF_Parm )

void USGGfxHud::Weapon_UpdateFiringMode ( class ASGWeapon* Weapon )
{
	static UFunction* pFnWeapon_UpdateFiringMode = NULL;

	if ( ! pFnWeapon_UpdateFiringMode )
		pFnWeapon_UpdateFiringMode = (UFunction*) UObject::GObjObjects()->Data[ 45615 ];

	USGGfxHud_execWeapon_UpdateFiringMode_Parms Weapon_UpdateFiringMode_Parms;
	Weapon_UpdateFiringMode_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnWeapon_UpdateFiringMode, &Weapon_UpdateFiringMode_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Update_WeaponIcons
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGfxHud::Update_WeaponIcons ( )
{
	static UFunction* pFnUpdate_WeaponIcons = NULL;

	if ( ! pFnUpdate_WeaponIcons )
		pFnUpdate_WeaponIcons = (UFunction*) UObject::GObjObjects()->Data[ 45613 ];

	USGGfxHud_execUpdate_WeaponIcons_Parms Update_WeaponIcons_Parms;

	this->ProcessEvent ( pFnUpdate_WeaponIcons, &Update_WeaponIcons_Parms, NULL );

	return Update_WeaponIcons_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.UpdatePosture
// [0x00020000] 
// Parameters infos:
// unsigned char                  PlayerPosture                  ( CPF_Parm )

void USGGfxHud::UpdatePosture ( unsigned char PlayerPosture )
{
	static UFunction* pFnUpdatePosture = NULL;

	if ( ! pFnUpdatePosture )
		pFnUpdatePosture = (UFunction*) UObject::GObjObjects()->Data[ 45611 ];

	USGGfxHud_execUpdatePosture_Parms UpdatePosture_Parms;
	UpdatePosture_Parms.PlayerPosture = PlayerPosture;

	this->ProcessEvent ( pFnUpdatePosture, &UpdatePosture_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Update_TypeGrenade
// [0x00024000] 
// Parameters infos:
// unsigned long                  bGrenade1                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bGrenade2                      ( CPF_OptionalParm | CPF_Parm )

void USGGfxHud::Update_TypeGrenade ( unsigned long bGrenade1, unsigned long bGrenade2 )
{
	static UFunction* pFnUpdate_TypeGrenade = NULL;

	if ( ! pFnUpdate_TypeGrenade )
		pFnUpdate_TypeGrenade = (UFunction*) UObject::GObjObjects()->Data[ 45608 ];

	USGGfxHud_execUpdate_TypeGrenade_Parms Update_TypeGrenade_Parms;
	Update_TypeGrenade_Parms.bGrenade1 = bGrenade1;
	Update_TypeGrenade_Parms.bGrenade2 = bGrenade2;

	this->ProcessEvent ( pFnUpdate_TypeGrenade, &Update_TypeGrenade_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Update_CantGrenade
// [0x00020000] 
// Parameters infos:

void USGGfxHud::Update_CantGrenade ( )
{
	static UFunction* pFnUpdate_CantGrenade = NULL;

	if ( ! pFnUpdate_CantGrenade )
		pFnUpdate_CantGrenade = (UFunction*) UObject::GObjObjects()->Data[ 45607 ];

	USGGfxHud_execUpdate_CantGrenade_Parms Update_CantGrenade_Parms;

	this->ProcessEvent ( pFnUpdate_CantGrenade, &Update_CantGrenade_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UpdateHealing
// [0x00020000] 
// Parameters infos:
// float                          HealingAmmount                 ( CPF_Parm )

void USGGfxHud::UpdateHealing ( float HealingAmmount )
{
	static UFunction* pFnUpdateHealing = NULL;

	if ( ! pFnUpdateHealing )
		pFnUpdateHealing = (UFunction*) UObject::GObjObjects()->Data[ 45605 ];

	USGGfxHud_execUpdateHealing_Parms UpdateHealing_Parms;
	UpdateHealing_Parms.HealingAmmount = HealingAmmount;

	this->ProcessEvent ( pFnUpdateHealing, &UpdateHealing_Parms, NULL );
};

// Function SGshooter.SGGfxHud.HideScoreBoard
// [0x00020000] 
// Parameters infos:

void USGGfxHud::HideScoreBoard ( )
{
	static UFunction* pFnHideScoreBoard = NULL;

	if ( ! pFnHideScoreBoard )
		pFnHideScoreBoard = (UFunction*) UObject::GObjObjects()->Data[ 45604 ];

	USGGfxHud_execHideScoreBoard_Parms HideScoreBoard_Parms;

	this->ProcessEvent ( pFnHideScoreBoard, &HideScoreBoard_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ShowScoreboard
// [0x00020000] 
// Parameters infos:

void USGGfxHud::ShowScoreboard ( )
{
	static UFunction* pFnShowScoreboard = NULL;

	if ( ! pFnShowScoreboard )
		pFnShowScoreboard = (UFunction*) UObject::GObjObjects()->Data[ 45603 ];

	USGGfxHud_execShowScoreboard_Parms ShowScoreboard_Parms;

	this->ProcessEvent ( pFnShowScoreboard, &ShowScoreboard_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Pause_OnQuit
// [0x00020000] 
// Parameters infos:

void USGGfxHud::Pause_OnQuit ( )
{
	static UFunction* pFnPause_OnQuit = NULL;

	if ( ! pFnPause_OnQuit )
		pFnPause_OnQuit = (UFunction*) UObject::GObjObjects()->Data[ 45602 ];

	USGGfxHud_execPause_OnQuit_Parms Pause_OnQuit_Parms;

	this->ProcessEvent ( pFnPause_OnQuit, &Pause_OnQuit_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Pause_OnOptions
// [0x00020000] 
// Parameters infos:

void USGGfxHud::Pause_OnOptions ( )
{
	static UFunction* pFnPause_OnOptions = NULL;

	if ( ! pFnPause_OnOptions )
		pFnPause_OnOptions = (UFunction*) UObject::GObjObjects()->Data[ 45601 ];

	USGGfxHud_execPause_OnOptions_Parms Pause_OnOptions_Parms;

	this->ProcessEvent ( pFnPause_OnOptions, &Pause_OnOptions_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Pause_Off
// [0x00020002] 
// Parameters infos:

void USGGfxHud::Pause_Off ( )
{
	static UFunction* pFnPause_Off = NULL;

	if ( ! pFnPause_Off )
		pFnPause_Off = (UFunction*) UObject::GObjObjects()->Data[ 45600 ];

	USGGfxHud_execPause_Off_Parms Pause_Off_Parms;

	this->ProcessEvent ( pFnPause_Off, &Pause_Off_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Pause_On
// [0x00020002] 
// Parameters infos:

void USGGfxHud::Pause_On ( )
{
	static UFunction* pFnPause_On = NULL;

	if ( ! pFnPause_On )
		pFnPause_On = (UFunction*) UObject::GObjObjects()->Data[ 45599 ];

	USGGfxHud_execPause_On_Parms Pause_On_Parms;

	this->ProcessEvent ( pFnPause_On, &Pause_On_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Game_OnActionKeyPress
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGfxHud::Game_OnActionKeyPress ( )
{
	static UFunction* pFnGame_OnActionKeyPress = NULL;

	if ( ! pFnGame_OnActionKeyPress )
		pFnGame_OnActionKeyPress = (UFunction*) UObject::GObjObjects()->Data[ 45597 ];

	USGGfxHud_execGame_OnActionKeyPress_Parms Game_OnActionKeyPress_Parms;

	this->ProcessEvent ( pFnGame_OnActionKeyPress, &Game_OnActionKeyPress_Parms, NULL );

	return Game_OnActionKeyPress_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.Grenade_Update
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USGGfxHud::Grenade_Update ( class UCanvas* Canvas )
{
	static UFunction* pFnGrenade_Update = NULL;

	if ( ! pFnGrenade_Update )
		pFnGrenade_Update = (UFunction*) UObject::GObjObjects()->Data[ 45585 ];

	USGGfxHud_execGrenade_Update_Parms Grenade_Update_Parms;
	Grenade_Update_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnGrenade_Update, &Grenade_Update_Parms, NULL );
};

// Function SGshooter.SGGfxHud.RemoveGrenade
// [0x00820002] 
// Parameters infos:
// class ASGProj_Grenade*         Grenade                        ( CPF_Parm )

void USGGfxHud::RemoveGrenade ( class ASGProj_Grenade* Grenade )
{
	static UFunction* pFnRemoveGrenade = NULL;

	if ( ! pFnRemoveGrenade )
		pFnRemoveGrenade = (UFunction*) UObject::GObjObjects()->Data[ 45582 ];

	USGGfxHud_execRemoveGrenade_Parms RemoveGrenade_Parms;
	RemoveGrenade_Parms.Grenade = Grenade;

	this->ProcessEvent ( pFnRemoveGrenade, &RemoveGrenade_Parms, NULL );
};

// Function SGshooter.SGGfxHud.AddGrenade
// [0x00820002] 
// Parameters infos:
// class ASGProj_Grenade*         Grenade                        ( CPF_Parm )

void USGGfxHud::AddGrenade ( class ASGProj_Grenade* Grenade )
{
	static UFunction* pFnAddGrenade = NULL;

	if ( ! pFnAddGrenade )
		pFnAddGrenade = (UFunction*) UObject::GObjObjects()->Data[ 45575 ];

	USGGfxHud_execAddGrenade_Parms AddGrenade_Parms;
	AddGrenade_Parms.Grenade = Grenade;

	this->ProcessEvent ( pFnAddGrenade, &AddGrenade_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Objetive_UpdatePos
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USGGfxHud::Objetive_UpdatePos ( class UCanvas* Canvas )
{
	static UFunction* pFnObjetive_UpdatePos = NULL;

	if ( ! pFnObjetive_UpdatePos )
		pFnObjetive_UpdatePos = (UFunction*) UObject::GObjObjects()->Data[ 45569 ];

	USGGfxHud_execObjetive_UpdatePos_Parms Objetive_UpdatePos_Parms;
	Objetive_UpdatePos_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnObjetive_UpdatePos, &Objetive_UpdatePos_Parms, NULL );
};

// Function SGshooter.SGGfxHud.RemoveObjective
// [0x00820002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )

void USGGfxHud::RemoveObjective ( class AActor* Actor )
{
	static UFunction* pFnRemoveObjective = NULL;

	if ( ! pFnRemoveObjective )
		pFnRemoveObjective = (UFunction*) UObject::GObjObjects()->Data[ 45566 ];

	USGGfxHud_execRemoveObjective_Parms RemoveObjective_Parms;
	RemoveObjective_Parms.Actor = Actor;

	this->ProcessEvent ( pFnRemoveObjective, &RemoveObjective_Parms, NULL );
};

// Function SGshooter.SGGfxHud.AddObjetive
// [0x00820002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )
// struct FString                 Caption                        ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::AddObjetive ( class AActor* Actor, struct FString Caption )
{
	static UFunction* pFnAddObjetive = NULL;

	if ( ! pFnAddObjetive )
		pFnAddObjetive = (UFunction*) UObject::GObjObjects()->Data[ 45559 ];

	USGGfxHud_execAddObjetive_Parms AddObjetive_Parms;
	AddObjetive_Parms.Actor = Actor;
	memcpy ( &AddObjetive_Parms.Caption, &Caption, 0xC );

	this->ProcessEvent ( pFnAddObjetive, &AddObjetive_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ToolTip_UpdatePos
// [0x00820002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USGGfxHud::ToolTip_UpdatePos ( class UCanvas* Canvas )
{
	static UFunction* pFnToolTip_UpdatePos = NULL;

	if ( ! pFnToolTip_UpdatePos )
		pFnToolTip_UpdatePos = (UFunction*) UObject::GObjObjects()->Data[ 45553 ];

	USGGfxHud_execToolTip_UpdatePos_Parms ToolTip_UpdatePos_Parms;
	ToolTip_UpdatePos_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnToolTip_UpdatePos, &ToolTip_UpdatePos_Parms, NULL );
};

// Function SGshooter.SGGfxHud.HideToolTip
// [0x00020002] 
// Parameters infos:

void USGGfxHud::HideToolTip ( )
{
	static UFunction* pFnHideToolTip = NULL;

	if ( ! pFnHideToolTip )
		pFnHideToolTip = (UFunction*) UObject::GObjObjects()->Data[ 45550 ];

	USGGfxHud_execHideToolTip_Parms HideToolTip_Parms;

	this->ProcessEvent ( pFnHideToolTip, &HideToolTip_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ShowToolTip
// [0x00820002] 
// Parameters infos:

void USGGfxHud::ShowToolTip ( )
{
	static UFunction* pFnShowToolTip = NULL;

	if ( ! pFnShowToolTip )
		pFnShowToolTip = (UFunction*) UObject::GObjObjects()->Data[ 45544 ];

	USGGfxHud_execShowToolTip_Parms ShowToolTip_Parms;

	this->ProcessEvent ( pFnShowToolTip, &ShowToolTip_Parms, NULL );
};

// Function SGshooter.SGGfxHud.FindClosestToolTip
// [0x00820002] 
// Parameters infos:

void USGGfxHud::FindClosestToolTip ( )
{
	static UFunction* pFnFindClosestToolTip = NULL;

	if ( ! pFnFindClosestToolTip )
		pFnFindClosestToolTip = (UFunction*) UObject::GObjObjects()->Data[ 45530 ];

	USGGfxHud_execFindClosestToolTip_Parms FindClosestToolTip_Parms;

	this->ProcessEvent ( pFnFindClosestToolTip, &FindClosestToolTip_Parms, NULL );
};

// Function SGshooter.SGGfxHud.AddMSG
// [0x00820002] 
// Parameters infos:
// struct FString                 Param1                         ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::AddMSG ( struct FString Param1 )
{
	static UFunction* pFnAddMSG = NULL;

	if ( ! pFnAddMSG )
		pFnAddMSG = (UFunction*) UObject::GObjObjects()->Data[ 45525 ];

	USGGfxHud_execAddMSG_Parms AddMSG_Parms;
	memcpy ( &AddMSG_Parms.Param1, &Param1, 0xC );

	this->ProcessEvent ( pFnAddMSG, &AddMSG_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Hide_Act_MSG
// [0x00020002] 
// Parameters infos:

void USGGfxHud::Hide_Act_MSG ( )
{
	static UFunction* pFnHide_Act_MSG = NULL;

	if ( ! pFnHide_Act_MSG )
		pFnHide_Act_MSG = (UFunction*) UObject::GObjObjects()->Data[ 45524 ];

	USGGfxHud_execHide_Act_MSG_Parms Hide_Act_MSG_Parms;

	this->ProcessEvent ( pFnHide_Act_MSG, &Hide_Act_MSG_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Show_Act_MSG
// [0x00020002] 
// Parameters infos:
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::Show_Act_MSG ( struct FString msg )
{
	static UFunction* pFnShow_Act_MSG = NULL;

	if ( ! pFnShow_Act_MSG )
		pFnShow_Act_MSG = (UFunction*) UObject::GObjObjects()->Data[ 45521 ];

	USGGfxHud_execShow_Act_MSG_Parms Show_Act_MSG_Parms;
	memcpy ( &Show_Act_MSG_Parms.msg, &msg, 0xC );

	this->ProcessEvent ( pFnShow_Act_MSG, &Show_Act_MSG_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UnRegisterInMiniMap
// [0x00020002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )

void USGGfxHud::UnRegisterInMiniMap ( class AActor* Actor )
{
	static UFunction* pFnUnRegisterInMiniMap = NULL;

	if ( ! pFnUnRegisterInMiniMap )
		pFnUnRegisterInMiniMap = (UFunction*) UObject::GObjObjects()->Data[ 45519 ];

	USGGfxHud_execUnRegisterInMiniMap_Parms UnRegisterInMiniMap_Parms;
	UnRegisterInMiniMap_Parms.Actor = Actor;

	this->ProcessEvent ( pFnUnRegisterInMiniMap, &UnRegisterInMiniMap_Parms, NULL );
};

// Function SGshooter.SGGfxHud.RegisterInMiniMap
// [0x00020002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )
// struct FString                 Thubnail                       ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::RegisterInMiniMap ( class AActor* Actor, struct FString Thubnail )
{
	static UFunction* pFnRegisterInMiniMap = NULL;

	if ( ! pFnRegisterInMiniMap )
		pFnRegisterInMiniMap = (UFunction*) UObject::GObjObjects()->Data[ 45516 ];

	USGGfxHud_execRegisterInMiniMap_Parms RegisterInMiniMap_Parms;
	RegisterInMiniMap_Parms.Actor = Actor;
	memcpy ( &RegisterInMiniMap_Parms.Thubnail, &Thubnail, 0xC );

	this->ProcessEvent ( pFnRegisterInMiniMap, &RegisterInMiniMap_Parms, NULL );
};

// Function SGshooter.SGGfxHud.RemoveTimer
// [0x00020000] 
// Parameters infos:
// struct FTimerSlot              Slot                           ( CPF_Parm )

void USGGfxHud::RemoveTimer ( struct FTimerSlot Slot )
{
	static UFunction* pFnRemoveTimer = NULL;

	if ( ! pFnRemoveTimer )
		pFnRemoveTimer = (UFunction*) UObject::GObjObjects()->Data[ 45514 ];

	USGGfxHud_execRemoveTimer_Parms RemoveTimer_Parms;
	memcpy ( &RemoveTimer_Parms.Slot, &Slot, 0xC );

	this->ProcessEvent ( pFnRemoveTimer, &RemoveTimer_Parms, NULL );
};

// Function SGshooter.SGGfxHud.GetTimer
// [0x00020000] 
// Parameters infos:
// struct FTimerSlot              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Type                           ( CPF_Parm )

struct FTimerSlot USGGfxHud::GetTimer ( unsigned char Type )
{
	static UFunction* pFnGetTimer = NULL;

	if ( ! pFnGetTimer )
		pFnGetTimer = (UFunction*) UObject::GObjObjects()->Data[ 45508 ];

	USGGfxHud_execGetTimer_Parms GetTimer_Parms;
	GetTimer_Parms.Type = Type;

	this->ProcessEvent ( pFnGetTimer, &GetTimer_Parms, NULL );

	return GetTimer_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.UpdateHealth
// [0x00020000] 
// Parameters infos:

void USGGfxHud::UpdateHealth ( )
{
	static UFunction* pFnUpdateHealth = NULL;

	if ( ! pFnUpdateHealth )
		pFnUpdateHealth = (UFunction*) UObject::GObjObjects()->Data[ 45507 ];

	USGGfxHud_execUpdateHealth_Parms UpdateHealth_Parms;

	this->ProcessEvent ( pFnUpdateHealth, &UpdateHealth_Parms, NULL );
};

// Function SGshooter.SGGfxHud.TickProgressBar
// [0x00020002] 
// Parameters infos:

void USGGfxHud::TickProgressBar ( )
{
	static UFunction* pFnTickProgressBar = NULL;

	if ( ! pFnTickProgressBar )
		pFnTickProgressBar = (UFunction*) UObject::GObjObjects()->Data[ 45504 ];

	USGGfxHud_execTickProgressBar_Parms TickProgressBar_Parms;

	this->ProcessEvent ( pFnTickProgressBar, &TickProgressBar_Parms, NULL );
};

// Function SGshooter.SGGfxHud.HideProgressBar
// [0x00020002] 
// Parameters infos:

void USGGfxHud::HideProgressBar ( )
{
	static UFunction* pFnHideProgressBar = NULL;

	if ( ! pFnHideProgressBar )
		pFnHideProgressBar = (UFunction*) UObject::GObjObjects()->Data[ 45503 ];

	USGGfxHud_execHideProgressBar_Parms HideProgressBar_Parms;

	this->ProcessEvent ( pFnHideProgressBar, &HideProgressBar_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ShowProgressBar
// [0x00024002] 
// Parameters infos:
// float                          Time                           ( CPF_Parm )
// class USGSeqAct_ToggleProgressBar* Act_PB                         ( CPF_OptionalParm | CPF_Parm )

void USGGfxHud::ShowProgressBar ( float Time, class USGSeqAct_ToggleProgressBar* Act_PB )
{
	static UFunction* pFnShowProgressBar = NULL;

	if ( ! pFnShowProgressBar )
		pFnShowProgressBar = (UFunction*) UObject::GObjObjects()->Data[ 45491 ];

	USGGfxHud_execShowProgressBar_Parms ShowProgressBar_Parms;
	ShowProgressBar_Parms.Time = Time;
	ShowProgressBar_Parms.Act_PB = Act_PB;

	this->ProcessEvent ( pFnShowProgressBar, &ShowProgressBar_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UpdateHitDamage
// [0x00020000] 
// Parameters infos:

void USGGfxHud::UpdateHitDamage ( )
{
	static UFunction* pFnUpdateHitDamage = NULL;

	if ( ! pFnUpdateHitDamage )
		pFnUpdateHitDamage = (UFunction*) UObject::GObjObjects()->Data[ 45490 ];

	USGGfxHud_execUpdateHitDamage_Parms UpdateHitDamage_Parms;

	this->ProcessEvent ( pFnUpdateHitDamage, &UpdateHitDamage_Parms, NULL );
};

// Function SGshooter.SGGfxHud.RemoveHitDamage
// [0x00820002] 
// Parameters infos:
// struct FString                 nameMC                         ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::RemoveHitDamage ( struct FString nameMC )
{
	static UFunction* pFnRemoveHitDamage = NULL;

	if ( ! pFnRemoveHitDamage )
		pFnRemoveHitDamage = (UFunction*) UObject::GObjObjects()->Data[ 45487 ];

	USGGfxHud_execRemoveHitDamage_Parms RemoveHitDamage_Parms;
	memcpy ( &RemoveHitDamage_Parms.nameMC, &nameMC, 0xC );

	this->ProcessEvent ( pFnRemoveHitDamage, &RemoveHitDamage_Parms, NULL );
};

// Function SGshooter.SGGfxHud.AddHitDamage
// [0x00820002] 
// Parameters infos:
// struct FVector                 ShotDirection                  ( CPF_Parm )

void USGGfxHud::AddHitDamage ( struct FVector ShotDirection )
{
	static UFunction* pFnAddHitDamage = NULL;

	if ( ! pFnAddHitDamage )
		pFnAddHitDamage = (UFunction*) UObject::GObjObjects()->Data[ 45477 ];

	USGGfxHud_execAddHitDamage_Parms AddHitDamage_Parms;
	memcpy ( &AddHitDamage_Parms.ShotDirection, &ShotDirection, 0xC );

	this->ProcessEvent ( pFnAddHitDamage, &AddHitDamage_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ShowCrossHair
// [0x00020002] 
// Parameters infos:
// struct FString                 CrossHairName                  ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::ShowCrossHair ( struct FString CrossHairName )
{
	static UFunction* pFnShowCrossHair = NULL;

	if ( ! pFnShowCrossHair )
		pFnShowCrossHair = (UFunction*) UObject::GObjObjects()->Data[ 45475 ];

	USGGfxHud_execShowCrossHair_Parms ShowCrossHair_Parms;
	memcpy ( &ShowCrossHair_Parms.CrossHairName, &CrossHairName, 0xC );

	this->ProcessEvent ( pFnShowCrossHair, &ShowCrossHair_Parms, NULL );
};

// Function SGshooter.SGGfxHud.HideScope
// [0x00020000] 
// Parameters infos:

void USGGfxHud::HideScope ( )
{
	static UFunction* pFnHideScope = NULL;

	if ( ! pFnHideScope )
		pFnHideScope = (UFunction*) UObject::GObjObjects()->Data[ 45474 ];

	USGGfxHud_execHideScope_Parms HideScope_Parms;

	this->ProcessEvent ( pFnHideScope, &HideScope_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ShowScope
// [0x00020000] 
// Parameters infos:

void USGGfxHud::ShowScope ( )
{
	static UFunction* pFnShowScope = NULL;

	if ( ! pFnShowScope )
		pFnShowScope = (UFunction*) UObject::GObjObjects()->Data[ 45473 ];

	USGGfxHud_execShowScope_Parms ShowScope_Parms;

	this->ProcessEvent ( pFnShowScope, &ShowScope_Parms, NULL );
};

// Function SGshooter.SGGfxHud.SetCrossHairHidden
// [0x00020000] 
// Parameters infos:
// unsigned long                  Hidden                         ( CPF_Parm )

void USGGfxHud::SetCrossHairHidden ( unsigned long Hidden )
{
	static UFunction* pFnSetCrossHairHidden = NULL;

	if ( ! pFnSetCrossHairHidden )
		pFnSetCrossHairHidden = (UFunction*) UObject::GObjObjects()->Data[ 45471 ];

	USGGfxHud_execSetCrossHairHidden_Parms SetCrossHairHidden_Parms;
	SetCrossHairHidden_Parms.Hidden = Hidden;

	this->ProcessEvent ( pFnSetCrossHairHidden, &SetCrossHairHidden_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Update_AmmoCount
// [0x00020000] 
// Parameters infos:

void USGGfxHud::Update_AmmoCount ( )
{
	static UFunction* pFnUpdate_AmmoCount = NULL;

	if ( ! pFnUpdate_AmmoCount )
		pFnUpdate_AmmoCount = (UFunction*) UObject::GObjObjects()->Data[ 45470 ];

	USGGfxHud_execUpdate_AmmoCount_Parms Update_AmmoCount_Parms;

	this->ProcessEvent ( pFnUpdate_AmmoCount, &Update_AmmoCount_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Weapon_SetSelected
// [0x00020000] 
// Parameters infos:
// class ASGWeapon*               Weapon                         ( CPF_Parm )

void USGGfxHud::Weapon_SetSelected ( class ASGWeapon* Weapon )
{
	static UFunction* pFnWeapon_SetSelected = NULL;

	if ( ! pFnWeapon_SetSelected )
		pFnWeapon_SetSelected = (UFunction*) UObject::GObjObjects()->Data[ 45468 ];

	USGGfxHud_execWeapon_SetSelected_Parms Weapon_SetSelected_Parms;
	Weapon_SetSelected_Parms.Weapon = Weapon;

	this->ProcessEvent ( pFnWeapon_SetSelected, &Weapon_SetSelected_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UpdateWeapon
// [0x00020000] 
// Parameters infos:

void USGGfxHud::UpdateWeapon ( )
{
	static UFunction* pFnUpdateWeapon = NULL;

	if ( ! pFnUpdateWeapon )
		pFnUpdateWeapon = (UFunction*) UObject::GObjObjects()->Data[ 45467 ];

	USGGfxHud_execUpdateWeapon_Parms UpdateWeapon_Parms;

	this->ProcessEvent ( pFnUpdateWeapon, &UpdateWeapon_Parms, NULL );
};

// Function SGshooter.SGGfxHud.getPRI
// [0x00020002] 
// Parameters infos:
// class AUTPlayerReplicationInfo* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AUTPlayerReplicationInfo* USGGfxHud::getPRI ( )
{
	static UFunction* pFngetPRI = NULL;

	if ( ! pFngetPRI )
		pFngetPRI = (UFunction*) UObject::GObjObjects()->Data[ 45465 ];

	USGGfxHud_execgetPRI_Parms getPRI_Parms;

	this->ProcessEvent ( pFngetPRI, &getPRI_Parms, NULL );

	return getPRI_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.GetGRI
// [0x00020002] 
// Parameters infos:
// class AUTGameReplicationInfo*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AUTGameReplicationInfo* USGGfxHud::GetGRI ( )
{
	static UFunction* pFnGetGRI = NULL;

	if ( ! pFnGetGRI )
		pFnGetGRI = (UFunction*) UObject::GObjObjects()->Data[ 45463 ];

	USGGfxHud_execGetGRI_Parms GetGRI_Parms;

	this->ProcessEvent ( pFnGetGRI, &GetGRI_Parms, NULL );

	return GetGRI_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.GetWorldInfo
// [0x00020002] 
// Parameters infos:
// class AWorldInfo*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AWorldInfo* USGGfxHud::GetWorldInfo ( )
{
	static UFunction* pFnGetWorldInfo = NULL;

	if ( ! pFnGetWorldInfo )
		pFnGetWorldInfo = (UFunction*) UObject::GObjObjects()->Data[ 45461 ];

	USGGfxHud_execGetWorldInfo_Parms GetWorldInfo_Parms;

	this->ProcessEvent ( pFnGetWorldInfo, &GetWorldInfo_Parms, NULL );

	return GetWorldInfo_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.GetHud
// [0x00020002] 
// Parameters infos:
// class ASGHUD*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ASGHUD* USGGfxHud::GetHud ( )
{
	static UFunction* pFnGetHud = NULL;

	if ( ! pFnGetHud )
		pFnGetHud = (UFunction*) UObject::GObjObjects()->Data[ 45459 ];

	USGGfxHud_execGetHud_Parms GetHud_Parms;

	this->ProcessEvent ( pFnGetHud, &GetHud_Parms, NULL );

	return GetHud_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.GetPawn
// [0x00020002] 
// Parameters infos:
// class ASGPawn*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ASGPawn* USGGfxHud::GetPawn ( )
{
	static UFunction* pFnGetPawn = NULL;

	if ( ! pFnGetPawn )
		pFnGetPawn = (UFunction*) UObject::GObjObjects()->Data[ 45457 ];

	USGGfxHud_execGetPawn_Parms GetPawn_Parms;

	this->ProcessEvent ( pFnGetPawn, &GetPawn_Parms, NULL );

	return GetPawn_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.ExistPawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGfxHud::ExistPawn ( )
{
	static UFunction* pFnExistPawn = NULL;

	if ( ! pFnExistPawn )
		pFnExistPawn = (UFunction*) UObject::GObjObjects()->Data[ 45455 ];

	USGGfxHud_execExistPawn_Parms ExistPawn_Parms;

	this->ProcessEvent ( pFnExistPawn, &ExistPawn_Parms, NULL );

	return ExistPawn_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.IsVisible
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxObject*              Obj                            ( CPF_Parm )

bool USGGfxHud::IsVisible ( class UGFxObject* Obj )
{
	static UFunction* pFnIsVisible = NULL;

	if ( ! pFnIsVisible )
		pFnIsVisible = (UFunction*) UObject::GObjObjects()->Data[ 45452 ];

	USGGfxHud_execIsVisible_Parms IsVisible_Parms;
	IsVisible_Parms.Obj = Obj;

	this->ProcessEvent ( pFnIsVisible, &IsVisible_Parms, NULL );

	return IsVisible_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.RemoveAttachedObject
// [0x00820002] 
// Parameters infos:
// class UGFxObject*              Obj                            ( CPF_Parm )

void USGGfxHud::RemoveAttachedObject ( class UGFxObject* Obj )
{
	static UFunction* pFnRemoveAttachedObject = NULL;

	if ( ! pFnRemoveAttachedObject )
		pFnRemoveAttachedObject = (UFunction*) UObject::GObjObjects()->Data[ 45447 ];

	USGGfxHud_execRemoveAttachedObject_Parms RemoveAttachedObject_Parms;
	RemoveAttachedObject_Parms.Obj = Obj;

	this->ProcessEvent ( pFnRemoveAttachedObject, &RemoveAttachedObject_Parms, NULL );
};

// Function SGshooter.SGGfxHud.FormatTime
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Seconds                        ( CPF_Parm )

struct FString USGGfxHud::FormatTime ( int Seconds )
{
	static UFunction* pFnFormatTime = NULL;

	if ( ! pFnFormatTime )
		pFnFormatTime = (UFunction*) UObject::GObjObjects()->Data[ 45441 ];

	USGGfxHud_execFormatTime_Parms FormatTime_Parms;
	FormatTime_Parms.Seconds = Seconds;

	this->ProcessEvent ( pFnFormatTime, &FormatTime_Parms, NULL );

	return FormatTime_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.AngleDiff
// [0x00024002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Angle1                         ( CPF_Parm )
// float                          Angle2                         ( CPF_Parm )
// float                          HalfBase                       ( CPF_OptionalParm | CPF_Parm )

float USGGfxHud::AngleDiff ( float Angle1, float Angle2, float HalfBase )
{
	static UFunction* pFnAngleDiff = NULL;

	if ( ! pFnAngleDiff )
		pFnAngleDiff = (UFunction*) UObject::GObjObjects()->Data[ 45435 ];

	USGGfxHud_execAngleDiff_Parms AngleDiff_Parms;
	AngleDiff_Parms.Angle1 = Angle1;
	AngleDiff_Parms.Angle2 = Angle2;
	AngleDiff_Parms.HalfBase = HalfBase;

	this->ProcessEvent ( pFnAngleDiff, &AngleDiff_Parms, NULL );

	return AngleDiff_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.GetHitAngle
// [0x00820002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 ShotDirection                  ( CPF_Parm )

float USGGfxHud::GetHitAngle ( struct FVector ShotDirection )
{
	static UFunction* pFnGetHitAngle = NULL;

	if ( ! pFnGetHitAngle )
		pFnGetHitAngle = (UFunction*) UObject::GObjObjects()->Data[ 45424 ];

	USGGfxHud_execGetHitAngle_Parms GetHitAngle_Parms;
	memcpy ( &GetHitAngle_Parms.ShotDirection, &ShotDirection, 0xC );

	this->ProcessEvent ( pFnGetHitAngle, &GetHitAngle_Parms, NULL );

	return GetHitAngle_Parms.ReturnValue;
};

// Function SGshooter.SGGfxHud.UnRegisterHudActor
// [0x00020000] 
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )

void USGGfxHud::UnRegisterHudActor ( class AActor* A )
{
	static UFunction* pFnUnRegisterHudActor = NULL;

	if ( ! pFnUnRegisterHudActor )
		pFnUnRegisterHudActor = (UFunction*) UObject::GObjObjects()->Data[ 45422 ];

	USGGfxHud_execUnRegisterHudActor_Parms UnRegisterHudActor_Parms;
	UnRegisterHudActor_Parms.A = A;

	this->ProcessEvent ( pFnUnRegisterHudActor, &UnRegisterHudActor_Parms, NULL );
};

// Function SGshooter.SGGfxHud.RegisterHudActor
// [0x00020000] 
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )
// struct FString                 Type                           ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHud::RegisterHudActor ( class AActor* A, struct FString Type )
{
	static UFunction* pFnRegisterHudActor = NULL;

	if ( ! pFnRegisterHudActor )
		pFnRegisterHudActor = (UFunction*) UObject::GObjObjects()->Data[ 45419 ];

	USGGfxHud_execRegisterHudActor_Parms RegisterHudActor_Parms;
	RegisterHudActor_Parms.A = A;
	memcpy ( &RegisterHudActor_Parms.Type, &Type, 0xC );

	this->ProcessEvent ( pFnRegisterHudActor, &RegisterHudActor_Parms, NULL );
};

// Function SGshooter.SGGfxHud.ShowTeamSelection
// [0x00020000] 
// Parameters infos:

void USGGfxHud::ShowTeamSelection ( )
{
	static UFunction* pFnShowTeamSelection = NULL;

	if ( ! pFnShowTeamSelection )
		pFnShowTeamSelection = (UFunction*) UObject::GObjObjects()->Data[ 45418 ];

	USGGfxHud_execShowTeamSelection_Parms ShowTeamSelection_Parms;

	this->ProcessEvent ( pFnShowTeamSelection, &ShowTeamSelection_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UpdateFreezeCam
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USGGfxHud::UpdateFreezeCam ( class UCanvas* Canvas )
{
	static UFunction* pFnUpdateFreezeCam = NULL;

	if ( ! pFnUpdateFreezeCam )
		pFnUpdateFreezeCam = (UFunction*) UObject::GObjObjects()->Data[ 45416 ];

	USGGfxHud_execUpdateFreezeCam_Parms UpdateFreezeCam_Parms;
	UpdateFreezeCam_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnUpdateFreezeCam, &UpdateFreezeCam_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UpdatePlayerIcons
// [0x00020000] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USGGfxHud::UpdatePlayerIcons ( class UCanvas* Canvas )
{
	static UFunction* pFnUpdatePlayerIcons = NULL;

	if ( ! pFnUpdatePlayerIcons )
		pFnUpdatePlayerIcons = (UFunction*) UObject::GObjObjects()->Data[ 45414 ];

	USGGfxHud_execUpdatePlayerIcons_Parms UpdatePlayerIcons_Parms;
	UpdatePlayerIcons_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnUpdatePlayerIcons, &UpdatePlayerIcons_Parms, NULL );
};

// Function SGshooter.SGGfxHud.TickHud
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void USGGfxHud::TickHud ( class UCanvas* Canvas )
{
	static UFunction* pFnTickHud = NULL;

	if ( ! pFnTickHud )
		pFnTickHud = (UFunction*) UObject::GObjObjects()->Data[ 45411 ];

	USGGfxHud_execTickHud_Parms TickHud_Parms;
	TickHud_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnTickHud, &TickHud_Parms, NULL );
};

// Function SGshooter.SGGfxHud.Hud_TurnOn
// [0x00024002] 
// Parameters infos:
// unsigned long                  bTurnOn                        ( CPF_Parm )
// unsigned long                  bFull                          ( CPF_OptionalParm | CPF_Parm )

void USGGfxHud::Hud_TurnOn ( unsigned long bTurnOn, unsigned long bFull )
{
	static UFunction* pFnHud_TurnOn = NULL;

	if ( ! pFnHud_TurnOn )
		pFnHud_TurnOn = (UFunction*) UObject::GObjObjects()->Data[ 45408 ];

	USGGfxHud_execHud_TurnOn_Parms Hud_TurnOn_Parms;
	Hud_TurnOn_Parms.bTurnOn = bTurnOn;
	Hud_TurnOn_Parms.bFull = bFull;

	this->ProcessEvent ( pFnHud_TurnOn, &Hud_TurnOn_Parms, NULL );
};

// Function SGshooter.SGGfxHud.UpdateHUD
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGfxHud::UpdateHUD ( )
{
	static UFunction* pFnUpdateHUD = NULL;

	if ( ! pFnUpdateHUD )
		pFnUpdateHUD = (UFunction*) UObject::GObjObjects()->Data[ 43512 ];

	USGGfxHud_execUpdateHUD_Parms UpdateHUD_Parms;

	this->ProcessEvent ( pFnUpdateHUD, &UpdateHUD_Parms, NULL );

	return UpdateHUD_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.ProcessInstantHit
// [0x00824102] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// struct FImpactInfo             Impact                         ( CPF_Parm )
// int                            NumHits                        ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits )
{
	static UFunction* pFnProcessInstantHit = NULL;

	if ( ! pFnProcessInstantHit )
		pFnProcessInstantHit = (UFunction*) UObject::GObjObjects()->Data[ 49457 ];

	ASGWeapon_execProcessInstantHit_Parms ProcessInstantHit_Parms;
	ProcessInstantHit_Parms.FiringMode = FiringMode;
	memcpy ( &ProcessInstantHit_Parms.Impact, &Impact, 0x50 );
	ProcessInstantHit_Parms.NumHits = NumHits;

	this->ProcessEvent ( pFnProcessInstantHit, &ProcessInstantHit_Parms, NULL );
};

// Function SGshooter.SGWeapon.GetFireInterval
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FireModeNum                    ( CPF_Parm )

float ASGWeapon::GetFireInterval ( unsigned char FireModeNum )
{
	static UFunction* pFnGetFireInterval = NULL;

	if ( ! pFnGetFireInterval )
		pFnGetFireInterval = (UFunction*) UObject::GObjObjects()->Data[ 49454 ];

	ASGWeapon_execGetFireInterval_Parms GetFireInterval_Parms;
	GetFireInterval_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnGetFireInterval, &GetFireInterval_Parms, NULL );

	return GetFireInterval_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.CalcInventoryWeight
// [0x00020102] 
// Parameters infos:

void ASGWeapon::CalcInventoryWeight ( )
{
	static UFunction* pFnCalcInventoryWeight = NULL;

	if ( ! pFnCalcInventoryWeight )
		pFnCalcInventoryWeight = (UFunction*) UObject::GObjObjects()->Data[ 49453 ];

	ASGWeapon_execCalcInventoryWeight_Parms CalcInventoryWeight_Parms;

	this->ProcessEvent ( pFnCalcInventoryWeight, &CalcInventoryWeight_Parms, NULL );
};

// Function SGshooter.SGWeapon.AttachWeaponTo
// [0x00024102] 
// Parameters infos:
// class USkeletalMeshComponent*  MeshCpnt                       ( CPF_Parm | CPF_EditInline )
// struct FName                   SocketName                     ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName )
{
	static UFunction* pFnAttachWeaponTo = NULL;

	if ( ! pFnAttachWeaponTo )
		pFnAttachWeaponTo = (UFunction*) UObject::GObjObjects()->Data[ 49449 ];

	ASGWeapon_execAttachWeaponTo_Parms AttachWeaponTo_Parms;
	AttachWeaponTo_Parms.MeshCpnt = MeshCpnt;
	memcpy ( &AttachWeaponTo_Parms.SocketName, &SocketName, 0x8 );

	this->ProcessEvent ( pFnAttachWeaponTo, &AttachWeaponTo_Parms, NULL );
};

// Function SGshooter.SGWeapon.SetupArmsAnim
// [0x00020102] 
// Parameters infos:

void ASGWeapon::SetupArmsAnim ( )
{
	static UFunction* pFnSetupArmsAnim = NULL;

	if ( ! pFnSetupArmsAnim )
		pFnSetupArmsAnim = (UFunction*) UObject::GObjObjects()->Data[ 49447 ];

	ASGWeapon_execSetupArmsAnim_Parms SetupArmsAnim_Parms;

	this->ProcessEvent ( pFnSetupArmsAnim, &SetupArmsAnim_Parms, NULL );
};

// Function SGshooter.SGWeapon.PlayArmAnimation
// [0x00024102] 
// Parameters infos:
// struct FName                   Sequence                       ( CPF_Parm )
// float                          fDesiredDuration               ( CPF_Parm )
// unsigned long                  OffHand                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// class USkeletalMeshComponent*  SkelMesh                       ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )

void ASGWeapon::PlayArmAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long OffHand, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh )
{
	static UFunction* pFnPlayArmAnimation = NULL;

	if ( ! pFnPlayArmAnimation )
		pFnPlayArmAnimation = (UFunction*) UObject::GObjObjects()->Data[ 49441 ];

	ASGWeapon_execPlayArmAnimation_Parms PlayArmAnimation_Parms;
	memcpy ( &PlayArmAnimation_Parms.Sequence, &Sequence, 0x8 );
	PlayArmAnimation_Parms.fDesiredDuration = fDesiredDuration;
	PlayArmAnimation_Parms.OffHand = OffHand;
	PlayArmAnimation_Parms.bLoop = bLoop;
	PlayArmAnimation_Parms.SkelMesh = SkelMesh;

	this->ProcessEvent ( pFnPlayArmAnimation, &PlayArmAnimation_Parms, NULL );
};

// Function SGshooter.SGWeapon.PlayWeaponAnimation
// [0x00024102] 
// Parameters infos:
// struct FName                   Sequence                       ( CPF_Parm )
// float                          fDesiredDuration               ( CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// class USkeletalMeshComponent*  SkelMesh                       ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )

void ASGWeapon::PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh )
{
	static UFunction* pFnPlayWeaponAnimation = NULL;

	if ( ! pFnPlayWeaponAnimation )
		pFnPlayWeaponAnimation = (UFunction*) UObject::GObjObjects()->Data[ 49436 ];

	ASGWeapon_execPlayWeaponAnimation_Parms PlayWeaponAnimation_Parms;
	memcpy ( &PlayWeaponAnimation_Parms.Sequence, &Sequence, 0x8 );
	PlayWeaponAnimation_Parms.fDesiredDuration = fDesiredDuration;
	PlayWeaponAnimation_Parms.bLoop = bLoop;
	PlayWeaponAnimation_Parms.SkelMesh = SkelMesh;

	this->ProcessEvent ( pFnPlayWeaponAnimation, &PlayWeaponAnimation_Parms, NULL );
};

// Function SGshooter.SGWeapon.GetWeaponCurrentAnimLength
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float ASGWeapon::GetWeaponCurrentAnimLength ( )
{
	static UFunction* pFnGetWeaponCurrentAnimLength = NULL;

	if ( ! pFnGetWeaponCurrentAnimLength )
		pFnGetWeaponCurrentAnimLength = (UFunction*) UObject::GObjObjects()->Data[ 49433 ];

	ASGWeapon_execGetWeaponCurrentAnimLength_Parms GetWeaponCurrentAnimLength_Parms;

	this->ProcessEvent ( pFnGetWeaponCurrentAnimLength, &GetWeaponCurrentAnimLength_Parms, NULL );

	return GetWeaponCurrentAnimLength_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.GetArmAnimNodeSeq
// [0x00020102] 
// Parameters infos:
// class UAnimNodeSequence*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UAnimNodeSequence* ASGWeapon::GetArmAnimNodeSeq ( )
{
	static UFunction* pFnGetArmAnimNodeSeq = NULL;

	if ( ! pFnGetArmAnimNodeSeq )
		pFnGetArmAnimNodeSeq = (UFunction*) UObject::GObjObjects()->Data[ 49431 ];

	ASGWeapon_execGetArmAnimNodeSeq_Parms GetArmAnimNodeSeq_Parms;

	this->ProcessEvent ( pFnGetArmAnimNodeSeq, &GetArmAnimNodeSeq_Parms, NULL );

	return GetArmAnimNodeSeq_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.GetWeaponAnimNodeSeq
// [0x00020102] 
// Parameters infos:
// class UAnimNodeSequence*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UAnimNodeSequence* ASGWeapon::GetWeaponAnimNodeSeq ( )
{
	static UFunction* pFnGetWeaponAnimNodeSeq = NULL;

	if ( ! pFnGetWeaponAnimNodeSeq )
		pFnGetWeaponAnimNodeSeq = (UFunction*) UObject::GObjObjects()->Data[ 49429 ];

	ASGWeapon_execGetWeaponAnimNodeSeq_Parms GetWeaponAnimNodeSeq_Parms;

	this->ProcessEvent ( pFnGetWeaponAnimNodeSeq, &GetWeaponAnimNodeSeq_Parms, NULL );

	return GetWeaponAnimNodeSeq_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.PlayAnim
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Anim                           ( CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          Rate                           ( CPF_OptionalParm | CPF_Parm )

float ASGWeapon::PlayAnim ( struct FName Anim, unsigned long bLoop, float BlendInTime, float Rate )
{
	static UFunction* pFnPlayAnim = NULL;

	if ( ! pFnPlayAnim )
		pFnPlayAnim = (UFunction*) UObject::GObjObjects()->Data[ 49423 ];

	ASGWeapon_execPlayAnim_Parms PlayAnim_Parms;
	memcpy ( &PlayAnim_Parms.Anim, &Anim, 0x8 );
	PlayAnim_Parms.bLoop = bLoop;
	PlayAnim_Parms.BlendInTime = BlendInTime;
	PlayAnim_Parms.Rate = Rate;

	this->ProcessEvent ( pFnPlayAnim, &PlayAnim_Parms, NULL );

	return PlayAnim_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.Loaded
// [0x00024102] 
// Parameters infos:
// unsigned long                  bUseWeaponMax                  ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::Loaded ( unsigned long bUseWeaponMax )
{
	static UFunction* pFnLoaded = NULL;

	if ( ! pFnLoaded )
		pFnLoaded = (UFunction*) UObject::GObjObjects()->Data[ 49421 ];

	ASGWeapon_execLoaded_Parms Loaded_Parms;
	Loaded_Parms.bUseWeaponMax = bUseWeaponMax;

	this->ProcessEvent ( pFnLoaded, &Loaded_Parms, NULL );
};

// Function SGshooter.SGWeapon.PlayThirdPersonAnim
// [0x00024102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Anim                           ( CPF_Parm )
// unsigned long                  bLoop                          ( CPF_OptionalParm | CPF_Parm )
// float                          BlendInTime                    ( CPF_OptionalParm | CPF_Parm )
// float                          Rate                           ( CPF_OptionalParm | CPF_Parm )

float ASGWeapon::PlayThirdPersonAnim ( struct FName Anim, unsigned long bLoop, float BlendInTime, float Rate )
{
	static UFunction* pFnPlayThirdPersonAnim = NULL;

	if ( ! pFnPlayThirdPersonAnim )
		pFnPlayThirdPersonAnim = (UFunction*) UObject::GObjObjects()->Data[ 49415 ];

	ASGWeapon_execPlayThirdPersonAnim_Parms PlayThirdPersonAnim_Parms;
	memcpy ( &PlayThirdPersonAnim_Parms.Anim, &Anim, 0x8 );
	PlayThirdPersonAnim_Parms.bLoop = bLoop;
	PlayThirdPersonAnim_Parms.BlendInTime = BlendInTime;
	PlayThirdPersonAnim_Parms.Rate = Rate;

	this->ProcessEvent ( pFnPlayThirdPersonAnim, &PlayThirdPersonAnim_Parms, NULL );

	return PlayThirdPersonAnim_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.UpdateAnimCrossFaderNodes
// [0x00020102] 
// Parameters infos:

void ASGWeapon::UpdateAnimCrossFaderNodes ( )
{
	static UFunction* pFnUpdateAnimCrossFaderNodes = NULL;

	if ( ! pFnUpdateAnimCrossFaderNodes )
		pFnUpdateAnimCrossFaderNodes = (UFunction*) UObject::GObjObjects()->Data[ 49414 ];

	ASGWeapon_execUpdateAnimCrossFaderNodes_Parms UpdateAnimCrossFaderNodes_Parms;

	this->ProcessEvent ( pFnUpdateAnimCrossFaderNodes, &UpdateAnimCrossFaderNodes_Parms, NULL );
};

// Function SGshooter.SGWeapon.FireModeUpdated
// [0x00020102] 
// Parameters infos:
// unsigned char                  FiringMode                     ( CPF_Parm )
// unsigned long                  bViaReplication                ( CPF_Parm )

void ASGWeapon::FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication )
{
	static UFunction* pFnFireModeUpdated = NULL;

	if ( ! pFnFireModeUpdated )
		pFnFireModeUpdated = (UFunction*) UObject::GObjObjects()->Data[ 49408 ];

	ASGWeapon_execFireModeUpdated_Parms FireModeUpdated_Parms;
	FireModeUpdated_Parms.FiringMode = FiringMode;
	FireModeUpdated_Parms.bViaReplication = bViaReplication;

	this->ProcessEvent ( pFnFireModeUpdated, &FireModeUpdated_Parms, NULL );
};

// Function SGshooter.SGWeapon.ApplyMeleeDamage
// [0x00820102] 
// Parameters infos:

void ASGWeapon::ApplyMeleeDamage ( )
{
	static UFunction* pFnApplyMeleeDamage = NULL;

	if ( ! pFnApplyMeleeDamage )
		pFnApplyMeleeDamage = (UFunction*) UObject::GObjObjects()->Data[ 49400 ];

	ASGWeapon_execApplyMeleeDamage_Parms ApplyMeleeDamage_Parms;

	this->ProcessEvent ( pFnApplyMeleeDamage, &ApplyMeleeDamage_Parms, NULL );
};

// Function SGshooter.SGWeapon.StopFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ASGWeapon::StopFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStopFire = NULL;

	if ( ! pFnStopFire )
		pFnStopFire = (UFunction*) UObject::GObjObjects()->Data[ 49388 ];

	ASGWeapon_execStopFire_Parms StopFire_Parms;
	StopFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStopFire, &StopFire_Parms, NULL );
};

// Function SGshooter.SGWeapon.StartFire
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ASGWeapon::StartFire ( unsigned char FireModeNum )
{
	static UFunction* pFnStartFire = NULL;

	if ( ! pFnStartFire )
		pFnStartFire = (UFunction*) UObject::GObjObjects()->Data[ 49386 ];

	ASGWeapon_execStartFire_Parms StartFire_Parms;
	StartFire_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnStartFire, &StartFire_Parms, NULL );
};

// Function SGshooter.SGWeapon.FlagFix
// [0x00020002] 
// Parameters infos:

void ASGWeapon::FlagFix ( )
{
	static UFunction* pFnFlagFix = NULL;

	if ( ! pFnFlagFix )
		pFnFlagFix = (UFunction*) UObject::GObjObjects()->Data[ 49377 ];

	ASGWeapon_execFlagFix_Parms FlagFix_Parms;

	this->ProcessEvent ( pFnFlagFix, &FlagFix_Parms, NULL );
};

// Function SGshooter.SGWeapon.ClientDoMelee
// [0x010201C2] 
// Parameters infos:

void ASGWeapon::ClientDoMelee ( )
{
	static UFunction* pFnClientDoMelee = NULL;

	if ( ! pFnClientDoMelee )
		pFnClientDoMelee = (UFunction*) UObject::GObjObjects()->Data[ 49372 ];

	ASGWeapon_execClientDoMelee_Parms ClientDoMelee_Parms;

	this->ProcessEvent ( pFnClientDoMelee, &ClientDoMelee_Parms, NULL );
};

// Function SGshooter.SGWeapon.DoMelee
// [0x002200C2] 
// Parameters infos:

void ASGWeapon::DoMelee ( )
{
	static UFunction* pFnDoMelee = NULL;

	if ( ! pFnDoMelee )
		pFnDoMelee = (UFunction*) UObject::GObjObjects()->Data[ 49371 ];

	ASGWeapon_execDoMelee_Parms DoMelee_Parms;

	this->ProcessEvent ( pFnDoMelee, &DoMelee_Parms, NULL );
};

// Function SGshooter.SGWeapon.IsInFirstPersonView
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGWeapon::IsInFirstPersonView ( )
{
	static UFunction* pFnIsInFirstPersonView = NULL;

	if ( ! pFnIsInFirstPersonView )
		pFnIsInFirstPersonView = (UFunction*) UObject::GObjObjects()->Data[ 49369 ];

	ASGWeapon_execIsInFirstPersonView_Parms IsInFirstPersonView_Parms;

	this->ProcessEvent ( pFnIsInFirstPersonView, &IsInFirstPersonView_Parms, NULL );

	return IsInFirstPersonView_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.UpdateViewPosition
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASGWeapon::UpdateViewPosition ( float DeltaTime )
{
	static UFunction* pFnUpdateViewPosition = NULL;

	if ( ! pFnUpdateViewPosition )
		pFnUpdateViewPosition = (UFunction*) UObject::GObjObjects()->Data[ 49367 ];

	ASGWeapon_execUpdateViewPosition_Parms UpdateViewPosition_Parms;
	UpdateViewPosition_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateViewPosition, &UpdateViewPosition_Parms, NULL );
};

// Function SGshooter.SGWeapon.UpdateHealEffects
// [0x00020102] 
// Parameters infos:

void ASGWeapon::UpdateHealEffects ( )
{
	static UFunction* pFnUpdateHealEffects = NULL;

	if ( ! pFnUpdateHealEffects )
		pFnUpdateHealEffects = (UFunction*) UObject::GObjObjects()->Data[ 49361 ];

	ASGWeapon_execUpdateHealEffects_Parms UpdateHealEffects_Parms;

	this->ProcessEvent ( pFnUpdateHealEffects, &UpdateHealEffects_Parms, NULL );
};

// Function SGshooter.SGWeapon.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASGWeapon::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 49359 ];

	ASGWeapon_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SGshooter.SGWeapon.SetPosition
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class AUDKPawn*                Holder                         ( CPF_Parm )

void ASGWeapon::eventSetPosition ( class AUDKPawn* Holder )
{
	static UFunction* pFnSetPosition = NULL;

	if ( ! pFnSetPosition )
		pFnSetPosition = (UFunction*) UObject::GObjObjects()->Data[ 49341 ];

	ASGWeapon_eventSetPosition_Parms SetPosition_Parms;
	SetPosition_Parms.Holder = Holder;

	this->ProcessEvent ( pFnSetPosition, &SetPosition_Parms, NULL );
};

// Function SGshooter.SGWeapon.UpdateAimSpread
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASGWeapon::UpdateAimSpread ( float DeltaTime )
{
	static UFunction* pFnUpdateAimSpread = NULL;

	if ( ! pFnUpdateAimSpread )
		pFnUpdateAimSpread = (UFunction*) UObject::GObjObjects()->Data[ 49337 ];

	ASGWeapon_execUpdateAimSpread_Parms UpdateAimSpread_Parms;
	UpdateAimSpread_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateAimSpread, &UpdateAimSpread_Parms, NULL );
};

// Function SGshooter.SGWeapon.PlayIdleAnim
// [0x00024102] 
// Parameters infos:
// struct FName                   OverrideAnim                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverrideLoop                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bQuickAnim                     ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::PlayIdleAnim ( struct FName OverrideAnim, unsigned long bOverrideLoop, unsigned long bQuickAnim )
{
	static UFunction* pFnPlayIdleAnim = NULL;

	if ( ! pFnPlayIdleAnim )
		pFnPlayIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 49331 ];

	ASGWeapon_execPlayIdleAnim_Parms PlayIdleAnim_Parms;
	memcpy ( &PlayIdleAnim_Parms.OverrideAnim, &OverrideAnim, 0x8 );
	PlayIdleAnim_Parms.bOverrideLoop = bOverrideLoop;
	PlayIdleAnim_Parms.bQuickAnim = bQuickAnim;

	this->ProcessEvent ( pFnPlayIdleAnim, &PlayIdleAnim_Parms, NULL );
};

// Function SGshooter.SGWeapon.PlayThirdPersonIdleAnim
// [0x00024102] 
// Parameters infos:
// struct FName                   OverrideAnim                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverrideLoop                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bQuickAnim                     ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::PlayThirdPersonIdleAnim ( struct FName OverrideAnim, unsigned long bOverrideLoop, unsigned long bQuickAnim )
{
	static UFunction* pFnPlayThirdPersonIdleAnim = NULL;

	if ( ! pFnPlayThirdPersonIdleAnim )
		pFnPlayThirdPersonIdleAnim = (UFunction*) UObject::GObjObjects()->Data[ 49324 ];

	ASGWeapon_execPlayThirdPersonIdleAnim_Parms PlayThirdPersonIdleAnim_Parms;
	memcpy ( &PlayThirdPersonIdleAnim_Parms.OverrideAnim, &OverrideAnim, 0x8 );
	PlayThirdPersonIdleAnim_Parms.bOverrideLoop = bOverrideLoop;
	PlayThirdPersonIdleAnim_Parms.bQuickAnim = bQuickAnim;

	this->ProcessEvent ( pFnPlayThirdPersonIdleAnim, &PlayThirdPersonIdleAnim_Parms, NULL );
};

// Function SGshooter.SGWeapon.PlayFiringSound
// [0x00020102] 
// Parameters infos:

void ASGWeapon::PlayFiringSound ( )
{
	static UFunction* pFnPlayFiringSound = NULL;

	if ( ! pFnPlayFiringSound )
		pFnPlayFiringSound = (UFunction*) UObject::GObjObjects()->Data[ 49323 ];

	ASGWeapon_execPlayFiringSound_Parms PlayFiringSound_Parms;

	this->ProcessEvent ( pFnPlayFiringSound, &PlayFiringSound_Parms, NULL );
};

// Function SGshooter.SGWeapon.StopAiming
// [0x00024102] 
// Parameters infos:
// unsigned long                  bPlayAnim                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPlaySound                     ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::StopAiming ( unsigned long bPlayAnim, unsigned long bPlaySound )
{
	static UFunction* pFnStopAiming = NULL;

	if ( ! pFnStopAiming )
		pFnStopAiming = (UFunction*) UObject::GObjObjects()->Data[ 49320 ];

	ASGWeapon_execStopAiming_Parms StopAiming_Parms;
	StopAiming_Parms.bPlayAnim = bPlayAnim;
	StopAiming_Parms.bPlaySound = bPlaySound;

	this->ProcessEvent ( pFnStopAiming, &StopAiming_Parms, NULL );
};

// Function SGshooter.SGWeapon.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASGWeapon::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 49319 ];

	ASGWeapon_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SGshooter.SGWeapon.StartAiming
// [0x00024102] 
// Parameters infos:
// unsigned long                  bPlayAnim                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPlaySound                     ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::StartAiming ( unsigned long bPlayAnim, unsigned long bPlaySound )
{
	static UFunction* pFnStartAiming = NULL;

	if ( ! pFnStartAiming )
		pFnStartAiming = (UFunction*) UObject::GObjObjects()->Data[ 49316 ];

	ASGWeapon_execStartAiming_Parms StartAiming_Parms;
	StartAiming_Parms.bPlayAnim = bPlayAnim;
	StartAiming_Parms.bPlaySound = bPlaySound;

	this->ProcessEvent ( pFnStartAiming, &StartAiming_Parms, NULL );
};

// Function SGshooter.SGWeapon.ServerStopAiming
// [0x002200C2] 
// Parameters infos:

void ASGWeapon::ServerStopAiming ( )
{
	static UFunction* pFnServerStopAiming = NULL;

	if ( ! pFnServerStopAiming )
		pFnServerStopAiming = (UFunction*) UObject::GObjObjects()->Data[ 49315 ];

	ASGWeapon_execServerStopAiming_Parms ServerStopAiming_Parms;

	this->ProcessEvent ( pFnServerStopAiming, &ServerStopAiming_Parms, NULL );
};

// Function SGshooter.SGWeapon.ServerStartAiming
// [0x002200C2] 
// Parameters infos:

void ASGWeapon::ServerStartAiming ( )
{
	static UFunction* pFnServerStartAiming = NULL;

	if ( ! pFnServerStartAiming )
		pFnServerStartAiming = (UFunction*) UObject::GObjObjects()->Data[ 49314 ];

	ASGWeapon_execServerStartAiming_Parms ServerStartAiming_Parms;

	this->ProcessEvent ( pFnServerStartAiming, &ServerStartAiming_Parms, NULL );
};

// Function SGshooter.SGWeapon.HideWeapon
// [0x00020102] 
// Parameters infos:

void ASGWeapon::HideWeapon ( )
{
	static UFunction* pFnHideWeapon = NULL;

	if ( ! pFnHideWeapon )
		pFnHideWeapon = (UFunction*) UObject::GObjObjects()->Data[ 49313 ];

	ASGWeapon_execHideWeapon_Parms HideWeapon_Parms;

	this->ProcessEvent ( pFnHideWeapon, &HideWeapon_Parms, NULL );
};

// Function SGshooter.SGWeapon.PutDownWeapon
// [0x00020102] 
// Parameters infos:

void ASGWeapon::PutDownWeapon ( )
{
	static UFunction* pFnPutDownWeapon = NULL;

	if ( ! pFnPutDownWeapon )
		pFnPutDownWeapon = (UFunction*) UObject::GObjObjects()->Data[ 49312 ];

	ASGWeapon_execPutDownWeapon_Parms PutDownWeapon_Parms;

	this->ProcessEvent ( pFnPutDownWeapon, &PutDownWeapon_Parms, NULL );
};

// Function SGshooter.SGWeapon.Activate
// [0x00020102] 
// Parameters infos:

void ASGWeapon::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 49309 ];

	ASGWeapon_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function SGshooter.SGWeapon.AddSpread
// [0x00820102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                BaseAim                        ( CPF_Parm )

struct FRotator ASGWeapon::AddSpread ( struct FRotator BaseAim )
{
	static UFunction* pFnAddSpread = NULL;

	if ( ! pFnAddSpread )
		pFnAddSpread = (UFunction*) UObject::GObjObjects()->Data[ 49298 ];

	ASGWeapon_execAddSpread_Parms AddSpread_Parms;
	memcpy ( &AddSpread_Parms.BaseAim, &BaseAim, 0xC );

	this->ProcessEvent ( pFnAddSpread, &AddSpread_Parms, NULL );

	return AddSpread_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.ClientReload
// [0x010201C2] 
// Parameters infos:

void ASGWeapon::ClientReload ( )
{
	static UFunction* pFnClientReload = NULL;

	if ( ! pFnClientReload )
		pFnClientReload = (UFunction*) UObject::GObjObjects()->Data[ 49297 ];

	ASGWeapon_execClientReload_Parms ClientReload_Parms;

	this->ProcessEvent ( pFnClientReload, &ClientReload_Parms, NULL );
};

// Function SGshooter.SGWeapon.ReloadAmmo
// [0x002200C2] 
// Parameters infos:

void ASGWeapon::ReloadAmmo ( )
{
	static UFunction* pFnReloadAmmo = NULL;

	if ( ! pFnReloadAmmo )
		pFnReloadAmmo = (UFunction*) UObject::GObjObjects()->Data[ 49296 ];

	ASGWeapon_execReloadAmmo_Parms ReloadAmmo_Parms;

	this->ProcessEvent ( pFnReloadAmmo, &ReloadAmmo_Parms, NULL );
};

// Function SGshooter.SGWeapon.SetFOV
// [0x00024102] 
// Parameters infos:
// float                          TargetFOV                      ( CPF_Parm )
// float                          TransitionTime                 ( CPF_Parm )
// unsigned long                  bPlaySound                     ( CPF_OptionalParm | CPF_Parm )

void ASGWeapon::SetFOV ( float TargetFOV, float TransitionTime, unsigned long bPlaySound )
{
	static UFunction* pFnSetFOV = NULL;

	if ( ! pFnSetFOV )
		pFnSetFOV = (UFunction*) UObject::GObjObjects()->Data[ 49291 ];

	ASGWeapon_execSetFOV_Parms SetFOV_Parms;
	SetFOV_Parms.TargetFOV = TargetFOV;
	SetFOV_Parms.TransitionTime = TransitionTime;
	SetFOV_Parms.bPlaySound = bPlaySound;

	this->ProcessEvent ( pFnSetFOV, &SetFOV_Parms, NULL );
};

// Function SGshooter.SGWeapon.HandleFinishedFiring
// [0x00020102] 
// Parameters infos:

void ASGWeapon::HandleFinishedFiring ( )
{
	static UFunction* pFnHandleFinishedFiring = NULL;

	if ( ! pFnHandleFinishedFiring )
		pFnHandleFinishedFiring = (UFunction*) UObject::GObjObjects()->Data[ 49290 ];

	ASGWeapon_execHandleFinishedFiring_Parms HandleFinishedFiring_Parms;

	this->ProcessEvent ( pFnHandleFinishedFiring, &HandleFinishedFiring_Parms, NULL );
};

// Function SGshooter.SGWeapon.ShouldRefire
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGWeapon::ShouldRefire ( )
{
	static UFunction* pFnShouldRefire = NULL;

	if ( ! pFnShouldRefire )
		pFnShouldRefire = (UFunction*) UObject::GObjObjects()->Data[ 49288 ];

	ASGWeapon_execShouldRefire_Parms ShouldRefire_Parms;

	this->ProcessEvent ( pFnShouldRefire, &ShouldRefire_Parms, NULL );

	return ShouldRefire_Parms.ReturnValue;
};

// Function SGshooter.SGWeapon.ConsumeAmmo
// [0x00020002] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ASGWeapon::ConsumeAmmo ( unsigned char FireModeNum )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 49286 ];

	ASGWeapon_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function SGshooter.SGWeapon.FireAmmunition
// [0x00020102] 
// Parameters infos:

void ASGWeapon::FireAmmunition ( )
{
	static UFunction* pFnFireAmmunition = NULL;

	if ( ! pFnFireAmmunition )
		pFnFireAmmunition = (UFunction*) UObject::GObjObjects()->Data[ 49284 ];

	ASGWeapon_execFireAmmunition_Parms FireAmmunition_Parms;

	this->ProcessEvent ( pFnFireAmmunition, &FireAmmunition_Parms, NULL );
};

// Function SGshooter.SGWeapon.SetMuzzleFlashParams
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ASGWeapon::SetMuzzleFlashParams ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetMuzzleFlashParams = NULL;

	if ( ! pFnSetMuzzleFlashParams )
		pFnSetMuzzleFlashParams = (UFunction*) UObject::GObjObjects()->Data[ 49282 ];

	ASGWeapon_execSetMuzzleFlashParams_Parms SetMuzzleFlashParams_Parms;
	SetMuzzleFlashParams_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetMuzzleFlashParams, &SetMuzzleFlashParams_Parms, NULL );
};

// Function SGshooter.SGWeapon.DrawWeaponCrosshair
// [0x00020100] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )

void ASGWeapon::DrawWeaponCrosshair ( class AHUD* HUD )
{
	static UFunction* pFnDrawWeaponCrosshair = NULL;

	if ( ! pFnDrawWeaponCrosshair )
		pFnDrawWeaponCrosshair = (UFunction*) UObject::GObjObjects()->Data[ 49280 ];

	ASGWeapon_execDrawWeaponCrosshair_Parms DrawWeaponCrosshair_Parms;
	DrawWeaponCrosshair_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDrawWeaponCrosshair, &DrawWeaponCrosshair_Parms, NULL );
};

// Function SGshooter.SGWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ASGWeapon::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 49278 ];

	ASGWeapon_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function SGshooter.SGSeqEvent_ToolTipOnShow.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqEvent_ToolTipOnShow::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48532 ];

	USGSeqEvent_ToolTipOnShow_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGPlayerInput.ToggleBehindView
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::ToggleBehindView ( )
{
	static UFunction* pFnToggleBehindView = NULL;

	if ( ! pFnToggleBehindView )
		pFnToggleBehindView = (UFunction*) UObject::GObjObjects()->Data[ 48094 ];

	USGPlayerInput_execToggleBehindView_Parms ToggleBehindView_Parms;

	this->ProcessEvent ( pFnToggleBehindView, &ToggleBehindView_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.CheckForDoubleClickMove
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

unsigned char USGPlayerInput::CheckForDoubleClickMove ( float DeltaTime )
{
	static UFunction* pFnCheckForDoubleClickMove = NULL;

	if ( ! pFnCheckForDoubleClickMove )
		pFnCheckForDoubleClickMove = (UFunction*) UObject::GObjObjects()->Data[ 48091 ];

	USGPlayerInput_execCheckForDoubleClickMove_Parms CheckForDoubleClickMove_Parms;
	CheckForDoubleClickMove_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnCheckForDoubleClickMove, &CheckForDoubleClickMove_Parms, NULL );

	return CheckForDoubleClickMove_Parms.ReturnValue;
};

// Function SGshooter.SGPlayerInput.ReleaseBar
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::ReleaseBar ( )
{
	static UFunction* pFnReleaseBar = NULL;

	if ( ! pFnReleaseBar )
		pFnReleaseBar = (UFunction*) UObject::GObjObjects()->Data[ 48090 ];

	USGPlayerInput_execReleaseBar_Parms ReleaseBar_Parms;

	this->ProcessEvent ( pFnReleaseBar, &ReleaseBar_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::Jump ( )
{
	static UFunction* pFnJump = NULL;

	if ( ! pFnJump )
		pFnJump = (UFunction*) UObject::GObjObjects()->Data[ 48089 ];

	USGPlayerInput_execJump_Parms Jump_Parms;

	this->ProcessEvent ( pFnJump, &Jump_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.ToggleDuck
// [0x00020302] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::ToggleDuck ( )
{
	static UFunction* pFnToggleDuck = NULL;

	if ( ! pFnToggleDuck )
		pFnToggleDuck = (UFunction*) UObject::GObjObjects()->Data[ 48088 ];

	USGPlayerInput_execToggleDuck_Parms ToggleDuck_Parms;

	this->ProcessEvent ( pFnToggleDuck, &ToggleDuck_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.UnDuck
// [0x00020302] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::UnDuck ( )
{
	static UFunction* pFnUnDuck = NULL;

	if ( ! pFnUnDuck )
		pFnUnDuck = (UFunction*) UObject::GObjObjects()->Data[ 48087 ];

	USGPlayerInput_execUnDuck_Parms UnDuck_Parms;

	this->ProcessEvent ( pFnUnDuck, &UnDuck_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.Duck
// [0x00020302] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::Duck ( )
{
	static UFunction* pFnDuck = NULL;

	if ( ! pFnDuck )
		pFnDuck = (UFunction*) UObject::GObjObjects()->Data[ 48086 ];

	USGPlayerInput_execDuck_Parms Duck_Parms;

	this->ProcessEvent ( pFnDuck, &Duck_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.StopRunning
// [0x00020300] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::StopRunning ( )
{
	static UFunction* pFnStopRunning = NULL;

	if ( ! pFnStopRunning )
		pFnStopRunning = (UFunction*) UObject::GObjObjects()->Data[ 48085 ];

	USGPlayerInput_execStopRunning_Parms StopRunning_Parms;

	this->ProcessEvent ( pFnStopRunning, &StopRunning_Parms, NULL );
};

// Function SGshooter.SGPlayerInput.Run
// [0x00020300] ( FUNC_Exec )
// Parameters infos:

void USGPlayerInput::Run ( )
{
	static UFunction* pFnRun = NULL;

	if ( ! pFnRun )
		pFnRun = (UFunction*) UObject::GObjObjects()->Data[ 48084 ];

	USGPlayerInput_execRun_Parms Run_Parms;

	this->ProcessEvent ( pFnRun, &Run_Parms, NULL );
};

// Function SGshooter.SGDB_LevelRecord.ResetCheckPointList
// [0x00020002] 
// Parameters infos:

void USGDB_LevelRecord::ResetCheckPointList ( )
{
	static UFunction* pFnResetCheckPointList = NULL;

	if ( ! pFnResetCheckPointList )
		pFnResetCheckPointList = (UFunction*) UObject::GObjObjects()->Data[ 43644 ];

	USGDB_LevelRecord_execResetCheckPointList_Parms ResetCheckPointList_Parms;

	this->ProcessEvent ( pFnResetCheckPointList, &ResetCheckPointList_Parms, NULL );
};

// Function SGshooter.SGDB_LevelRecord.GetLastPlayedTime
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USGDB_LevelRecord::GetLastPlayedTime ( )
{
	static UFunction* pFnGetLastPlayedTime = NULL;

	if ( ! pFnGetLastPlayedTime )
		pFnGetLastPlayedTime = (UFunction*) UObject::GObjObjects()->Data[ 43642 ];

	USGDB_LevelRecord_execGetLastPlayedTime_Parms GetLastPlayedTime_Parms;

	this->ProcessEvent ( pFnGetLastPlayedTime, &GetLastPlayedTime_Parms, NULL );

	return GetLastPlayedTime_Parms.ReturnValue;
};

// Function SGshooter.SGDB_LevelRecord.GetLastPlayedCheckPoint
// [0x00020002] 
// Parameters infos:
// struct USGDB_LevelRecord_FCheckpointRecord ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct USGDB_LevelRecord_FCheckpointRecord USGDB_LevelRecord::GetLastPlayedCheckPoint ( )
{
	static UFunction* pFnGetLastPlayedCheckPoint = NULL;

	if ( ! pFnGetLastPlayedCheckPoint )
		pFnGetLastPlayedCheckPoint = (UFunction*) UObject::GObjObjects()->Data[ 43640 ];

	USGDB_LevelRecord_execGetLastPlayedCheckPoint_Parms GetLastPlayedCheckPoint_Parms;

	this->ProcessEvent ( pFnGetLastPlayedCheckPoint, &GetLastPlayedCheckPoint_Parms, NULL );

	return GetLastPlayedCheckPoint_Parms.ReturnValue;
};

// Function SGshooter.SGDB_LevelRecord.AddCheckPoint
// [0x00820002] 
// Parameters infos:
// struct FString                 Desc                           ( CPF_Parm | CPF_NeedCtorLink )
// class APawn*                   Pawn                           ( CPF_Parm )
// struct FName                   CheckPointName                 ( CPF_Parm )

void USGDB_LevelRecord::AddCheckPoint ( struct FString Desc, class APawn* Pawn, struct FName CheckPointName )
{
	static UFunction* pFnAddCheckPoint = NULL;

	if ( ! pFnAddCheckPoint )
		pFnAddCheckPoint = (UFunction*) UObject::GObjObjects()->Data[ 43628 ];

	USGDB_LevelRecord_execAddCheckPoint_Parms AddCheckPoint_Parms;
	memcpy ( &AddCheckPoint_Parms.Desc, &Desc, 0xC );
	AddCheckPoint_Parms.Pawn = Pawn;
	memcpy ( &AddCheckPoint_Parms.CheckPointName, &CheckPointName, 0x8 );

	this->ProcessEvent ( pFnAddCheckPoint, &AddCheckPoint_Parms, NULL );
};

// Function SGshooter.SGDmgType_Grenade.SuicideMessage
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  Victim                         ( CPF_Parm )

struct FString USGDmgType_Grenade::SuicideMessage ( class APlayerReplicationInfo* Victim )
{
	static UFunction* pFnSuicideMessage = NULL;

	if ( ! pFnSuicideMessage )
		pFnSuicideMessage = (UFunction*) UObject::GObjObjects()->Data[ 44123 ];

	USGDmgType_Grenade_execSuicideMessage_Parms SuicideMessage_Parms;
	SuicideMessage_Parms.Victim = Victim;

	this->ProcessEvent ( pFnSuicideMessage, &SuicideMessage_Parms, NULL );

	return SuicideMessage_Parms.ReturnValue;
};

// Function SGshooter.SGDmgType_Grenade.DeathMessage
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  Killer                         ( CPF_Parm )
// class APlayerReplicationInfo*  Victim                         ( CPF_Parm )

struct FString USGDmgType_Grenade::DeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim )
{
	static UFunction* pFnDeathMessage = NULL;

	if ( ! pFnDeathMessage )
		pFnDeathMessage = (UFunction*) UObject::GObjObjects()->Data[ 44119 ];

	USGDmgType_Grenade_execDeathMessage_Parms DeathMessage_Parms;
	DeathMessage_Parms.Killer = Killer;
	DeathMessage_Parms.Victim = Victim;

	this->ProcessEvent ( pFnDeathMessage, &DeathMessage_Parms, NULL );

	return DeathMessage_Parms.ReturnValue;
};

// Function SGshooter.SGDmgType_Melee.DeathMessage
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class APlayerReplicationInfo*  Killer                         ( CPF_Parm )
// class APlayerReplicationInfo*  Victim                         ( CPF_Parm )

struct FString USGDmgType_Melee::DeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim )
{
	static UFunction* pFnDeathMessage = NULL;

	if ( ! pFnDeathMessage )
		pFnDeathMessage = (UFunction*) UObject::GObjObjects()->Data[ 44130 ];

	USGDmgType_Melee_execDeathMessage_Parms DeathMessage_Parms;
	DeathMessage_Parms.Killer = Killer;
	DeathMessage_Parms.Victim = Victim;

	this->ProcessEvent ( pFnDeathMessage, &DeathMessage_Parms, NULL );

	return DeathMessage_Parms.ReturnValue;
};

// Function SGshooter.SGDroppedPickup.SetPickupMesh
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     NewPickupMesh                  ( CPF_Parm | CPF_EditInline )

void ASGDroppedPickup::eventSetPickupMesh ( class UPrimitiveComponent* NewPickupMesh )
{
	static UFunction* pFnSetPickupMesh = NULL;

	if ( ! pFnSetPickupMesh )
		pFnSetPickupMesh = (UFunction*) UObject::GObjObjects()->Data[ 44206 ];

	ASGDroppedPickup_eventSetPickupMesh_Parms SetPickupMesh_Parms;
	SetPickupMesh_Parms.NewPickupMesh = NewPickupMesh;

	this->ProcessEvent ( pFnSetPickupMesh, &SetPickupMesh_Parms, NULL );
};

// Function SGshooter.SGDroppedPickup.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void ASGDroppedPickup::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 44199 ];

	ASGDroppedPickup_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function SGshooter.SGDroppedPickup.Register
// [0x00020102] 
// Parameters infos:

void ASGDroppedPickup::Register ( )
{
	static UFunction* pFnRegister = NULL;

	if ( ! pFnRegister )
		pFnRegister = (UFunction*) UObject::GObjObjects()->Data[ 44197 ];

	ASGDroppedPickup_execRegister_Parms Register_Parms;

	this->ProcessEvent ( pFnRegister, &Register_Parms, NULL );
};

// Function SGshooter.SGDroppedPickup.FixLocation
// [0x00020002] 
// Parameters infos:

void ASGDroppedPickup::FixLocation ( )
{
	static UFunction* pFnFixLocation = NULL;

	if ( ! pFnFixLocation )
		pFnFixLocation = (UFunction*) UObject::GObjObjects()->Data[ 44196 ];

	ASGDroppedPickup_execFixLocation_Parms FixLocation_Parms;

	this->ProcessEvent ( pFnFixLocation, &FixLocation_Parms, NULL );
};

// Function SGshooter.SGDroppedPickup.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void ASGDroppedPickup::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 44195 ];

	ASGDroppedPickup_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SGshooter.SGDroppedPickup.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ASGDroppedPickup::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 44171 ];

	ASGDroppedPickup_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function SGshooter.SGWeaponAttachment.PlayImpactEffects
// [0x00820102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ASGWeaponAttachment::PlayImpactEffects ( struct FVector HitLocation )
{
	static UFunction* pFnPlayImpactEffects = NULL;

	if ( ! pFnPlayImpactEffects )
		pFnPlayImpactEffects = (UFunction*) UObject::GObjObjects()->Data[ 49669 ];

	ASGWeaponAttachment_execPlayImpactEffects_Parms PlayImpactEffects_Parms;
	memcpy ( &PlayImpactEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPlayImpactEffects, &PlayImpactEffects_Parms, NULL );
};

// Function SGshooter.SGWeaponAttachment.ThirdPersonFireEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )

void ASGWeaponAttachment::ThirdPersonFireEffects ( struct FVector HitLocation )
{
	static UFunction* pFnThirdPersonFireEffects = NULL;

	if ( ! pFnThirdPersonFireEffects )
		pFnThirdPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 49666 ];

	ASGWeaponAttachment_execThirdPersonFireEffects_Parms ThirdPersonFireEffects_Parms;
	memcpy ( &ThirdPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnThirdPersonFireEffects, &ThirdPersonFireEffects_Parms, NULL );
};

// Function SGshooter.SGWeaponAttachment.SetMuzzleFlashParams
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void ASGWeaponAttachment::SetMuzzleFlashParams ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnSetMuzzleFlashParams = NULL;

	if ( ! pFnSetMuzzleFlashParams )
		pFnSetMuzzleFlashParams = (UFunction*) UObject::GObjObjects()->Data[ 49664 ];

	ASGWeaponAttachment_execSetMuzzleFlashParams_Parms SetMuzzleFlashParams_Parms;
	SetMuzzleFlashParams_Parms.PSC = PSC;

	this->ProcessEvent ( pFnSetMuzzleFlashParams, &SetMuzzleFlashParams_Parms, NULL );
};

// Function SGshooter.SGWeaponAttachment.FirstPersonFireEffects
// [0x00020102] 
// Parameters infos:
// class AWeapon*                 PawnWeapon                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ASGWeaponAttachment::FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation )
{
	static UFunction* pFnFirstPersonFireEffects = NULL;

	if ( ! pFnFirstPersonFireEffects )
		pFnFirstPersonFireEffects = (UFunction*) UObject::GObjObjects()->Data[ 49661 ];

	ASGWeaponAttachment_execFirstPersonFireEffects_Parms FirstPersonFireEffects_Parms;
	FirstPersonFireEffects_Parms.PawnWeapon = PawnWeapon;
	memcpy ( &FirstPersonFireEffects_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnFirstPersonFireEffects, &FirstPersonFireEffects_Parms, NULL );
};

// Function SGshooter.SGWeaponAttachment.SpawnTracerTrail
// [0x00820102] 
// Parameters infos:
// struct FVector                 EffectLocation                 ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ASGWeaponAttachment::SpawnTracerTrail ( struct FVector EffectLocation, struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracerTrail = NULL;

	if ( ! pFnSpawnTracerTrail )
		pFnSpawnTracerTrail = (UFunction*) UObject::GObjObjects()->Data[ 49657 ];

	ASGWeaponAttachment_execSpawnTracerTrail_Parms SpawnTracerTrail_Parms;
	memcpy ( &SpawnTracerTrail_Parms.EffectLocation, &EffectLocation, 0xC );
	memcpy ( &SpawnTracerTrail_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracerTrail, &SpawnTracerTrail_Parms, NULL );
};

// Function SGshooter.SGWeaponAttachment.SpawnTracer
// [0x00820102] 
// Parameters infos:
// struct FVector                 EffectLocation                 ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void ASGWeaponAttachment::SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation )
{
	static UFunction* pFnSpawnTracer = NULL;

	if ( ! pFnSpawnTracer )
		pFnSpawnTracer = (UFunction*) UObject::GObjObjects()->Data[ 49653 ];

	ASGWeaponAttachment_execSpawnTracer_Parms SpawnTracer_Parms;
	memcpy ( &SpawnTracer_Parms.EffectLocation, &EffectLocation, 0xC );
	memcpy ( &SpawnTracer_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnTracer, &SpawnTracer_Parms, NULL );
};

// Function SGshooter.SGSaveSystem.AllLevels_ResetCheckPointList
// [0x00020002] 
// Parameters infos:

void USGSaveSystem::AllLevels_ResetCheckPointList ( )
{
	static UFunction* pFnAllLevels_ResetCheckPointList = NULL;

	if ( ! pFnAllLevels_ResetCheckPointList )
		pFnAllLevels_ResetCheckPointList = (UFunction*) UObject::GObjObjects()->Data[ 48426 ];

	USGSaveSystem_execAllLevels_ResetCheckPointList_Parms AllLevels_ResetCheckPointList_Parms;

	this->ProcessEvent ( pFnAllLevels_ResetCheckPointList, &AllLevels_ResetCheckPointList_Parms, NULL );
};

// Function SGshooter.SGSaveSystem.Level_ResetCheckPointList
// [0x00020002] 
// Parameters infos:
// int                            Idx                            ( CPF_Parm )

void USGSaveSystem::Level_ResetCheckPointList ( int Idx )
{
	static UFunction* pFnLevel_ResetCheckPointList = NULL;

	if ( ! pFnLevel_ResetCheckPointList )
		pFnLevel_ResetCheckPointList = (UFunction*) UObject::GObjObjects()->Data[ 48424 ];

	USGSaveSystem_execLevel_ResetCheckPointList_Parms Level_ResetCheckPointList_Parms;
	Level_ResetCheckPointList_Parms.Idx = Idx;

	this->ProcessEvent ( pFnLevel_ResetCheckPointList, &Level_ResetCheckPointList_Parms, NULL );
};

// Function SGshooter.SGSaveSystem.CreateChekPointRecord
// [0x00020002] 
// Parameters infos:
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   CheckPointName                 ( CPF_Parm )

void USGSaveSystem::CreateChekPointRecord ( struct FString Description, struct FName CheckPointName )
{
	static UFunction* pFnCreateChekPointRecord = NULL;

	if ( ! pFnCreateChekPointRecord )
		pFnCreateChekPointRecord = (UFunction*) UObject::GObjObjects()->Data[ 48418 ];

	USGSaveSystem_execCreateChekPointRecord_Parms CreateChekPointRecord_Parms;
	memcpy ( &CreateChekPointRecord_Parms.Description, &Description, 0xC );
	memcpy ( &CreateChekPointRecord_Parms.CheckPointName, &CheckPointName, 0x8 );

	this->ProcessEvent ( pFnCreateChekPointRecord, &CreateChekPointRecord_Parms, NULL );
};

// Function SGshooter.SGSaveSystem.GetLevelRecord
// [0x00020002] 
// Parameters infos:
// class USGDB_LevelRecord*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Idx                            ( CPF_Parm )

class USGDB_LevelRecord* USGSaveSystem::GetLevelRecord ( int Idx )
{
	static UFunction* pFnGetLevelRecord = NULL;

	if ( ! pFnGetLevelRecord )
		pFnGetLevelRecord = (UFunction*) UObject::GObjObjects()->Data[ 48415 ];

	USGSaveSystem_execGetLevelRecord_Parms GetLevelRecord_Parms;
	GetLevelRecord_Parms.Idx = Idx;

	this->ProcessEvent ( pFnGetLevelRecord, &GetLevelRecord_Parms, NULL );

	return GetLevelRecord_Parms.ReturnValue;
};

// Function SGshooter.SGSaveSystem.GetCurrentLevelRecord
// [0x00020002] 
// Parameters infos:
// class USGDB_LevelRecord*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USGDB_LevelRecord* USGSaveSystem::GetCurrentLevelRecord ( )
{
	static UFunction* pFnGetCurrentLevelRecord = NULL;

	if ( ! pFnGetCurrentLevelRecord )
		pFnGetCurrentLevelRecord = (UFunction*) UObject::GObjObjects()->Data[ 48413 ];

	USGSaveSystem_execGetCurrentLevelRecord_Parms GetCurrentLevelRecord_Parms;

	this->ProcessEvent ( pFnGetCurrentLevelRecord, &GetCurrentLevelRecord_Parms, NULL );

	return GetCurrentLevelRecord_Parms.ReturnValue;
};

// Function SGshooter.SGSaveSystem.SaveLastPlayedLevel
// [0x00020002] 
// Parameters infos:

void USGSaveSystem::SaveLastPlayedLevel ( )
{
	static UFunction* pFnSaveLastPlayedLevel = NULL;

	if ( ! pFnSaveLastPlayedLevel )
		pFnSaveLastPlayedLevel = (UFunction*) UObject::GObjObjects()->Data[ 48412 ];

	USGSaveSystem_execSaveLastPlayedLevel_Parms SaveLastPlayedLevel_Parms;

	this->ProcessEvent ( pFnSaveLastPlayedLevel, &SaveLastPlayedLevel_Parms, NULL );
};

// Function SGshooter.SGSaveSystem.LoadCurrentLevelRecords
// [0x00020002] 
// Parameters infos:
// class USGDB_LevelRecord*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USGDB_LevelRecord* USGSaveSystem::LoadCurrentLevelRecords ( )
{
	static UFunction* pFnLoadCurrentLevelRecords = NULL;

	if ( ! pFnLoadCurrentLevelRecords )
		pFnLoadCurrentLevelRecords = (UFunction*) UObject::GObjObjects()->Data[ 48405 ];

	USGSaveSystem_execLoadCurrentLevelRecords_Parms LoadCurrentLevelRecords_Parms;

	this->ProcessEvent ( pFnLoadCurrentLevelRecords, &LoadCurrentLevelRecords_Parms, NULL );

	return LoadCurrentLevelRecords_Parms.ReturnValue;
};

// Function SGshooter.SGSaveSystem.LoadLevelRecords
// [0x00020002] 
// Parameters infos:

void USGSaveSystem::LoadLevelRecords ( )
{
	static UFunction* pFnLoadLevelRecords = NULL;

	if ( ! pFnLoadLevelRecords )
		pFnLoadLevelRecords = (UFunction*) UObject::GObjObjects()->Data[ 48399 ];

	USGSaveSystem_execLoadLevelRecords_Parms LoadLevelRecords_Parms;

	this->ProcessEvent ( pFnLoadLevelRecords, &LoadLevelRecords_Parms, NULL );
};

// Function SGshooter.SGGameMenu.PostLogin
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       NewPlayer                      ( CPF_Parm )

void ASGGameMenu::eventPostLogin ( class APlayerController* NewPlayer )
{
	static UFunction* pFnPostLogin = NULL;

	if ( ! pFnPostLogin )
		pFnPostLogin = (UFunction*) UObject::GObjObjects()->Data[ 45370 ];

	ASGGameMenu_eventPostLogin_Parms PostLogin_Parms;
	PostLogin_Parms.NewPlayer = NewPlayer;

	this->ProcessEvent ( pFnPostLogin, &PostLogin_Parms, NULL );
};

// Function SGshooter.SGGameMenu.PreBeginPlay
// [0x00020102] 
// Parameters infos:

void ASGGameMenu::PreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 45368 ];

	ASGGameMenu_execPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function SGshooter.SGHudToolTip.OnToggleHidden
// [0x00020102] 
// Parameters infos:
// class USeqAct_ToggleHidden*    Action                         ( CPF_Parm )

void ASGHudToolTip::OnToggleHidden ( class USeqAct_ToggleHidden* Action )
{
	static UFunction* pFnOnToggleHidden = NULL;

	if ( ! pFnOnToggleHidden )
		pFnOnToggleHidden = (UFunction*) UObject::GObjObjects()->Data[ 46688 ];

	ASGHudToolTip_execOnToggleHidden_Parms OnToggleHidden_Parms;
	OnToggleHidden_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggleHidden, &OnToggleHidden_Parms, NULL );
};

// Function SGshooter.SGHudToolTip.GetTitle
// [0x00020102] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString ASGHudToolTip::GetTitle ( )
{
	static UFunction* pFnGetTitle = NULL;

	if ( ! pFnGetTitle )
		pFnGetTitle = (UFunction*) UObject::GObjObjects()->Data[ 45548 ];

	ASGHudToolTip_execGetTitle_Parms GetTitle_Parms;

	this->ProcessEvent ( pFnGetTitle, &GetTitle_Parms, NULL );

	return GetTitle_Parms.ReturnValue;
};

// Function SGshooter.SGHudToolTip.TeamCheck
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Pawn                           ( CPF_Parm )

bool ASGHudToolTip::TeamCheck ( class APawn* Pawn )
{
	static UFunction* pFnTeamCheck = NULL;

	if ( ! pFnTeamCheck )
		pFnTeamCheck = (UFunction*) UObject::GObjObjects()->Data[ 45538 ];

	ASGHudToolTip_execTeamCheck_Parms TeamCheck_Parms;
	TeamCheck_Parms.Pawn = Pawn;

	this->ProcessEvent ( pFnTeamCheck, &TeamCheck_Parms, NULL );

	return TeamCheck_Parms.ReturnValue;
};

// Function SGshooter.SGHudToolTip.DirectionalCheck
// [0x00820102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 PlayerLocation                 ( CPF_Parm )

bool ASGHudToolTip::DirectionalCheck ( struct FVector PlayerLocation )
{
	static UFunction* pFnDirectionalCheck = NULL;

	if ( ! pFnDirectionalCheck )
		pFnDirectionalCheck = (UFunction*) UObject::GObjObjects()->Data[ 45540 ];

	ASGHudToolTip_execDirectionalCheck_Parms DirectionalCheck_Parms;
	memcpy ( &DirectionalCheck_Parms.PlayerLocation, &PlayerLocation, 0xC );

	this->ProcessEvent ( pFnDirectionalCheck, &DirectionalCheck_Parms, NULL );

	return DirectionalCheck_Parms.ReturnValue;
};

// Function SGshooter.SGHudToolTip.CheckActionRange
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 PlayerLocation                 ( CPF_Parm )

bool ASGHudToolTip::CheckActionRange ( struct FVector PlayerLocation )
{
	static UFunction* pFnCheckActionRange = NULL;

	if ( ! pFnCheckActionRange )
		pFnCheckActionRange = (UFunction*) UObject::GObjObjects()->Data[ 45556 ];

	ASGHudToolTip_execCheckActionRange_Parms CheckActionRange_Parms;
	memcpy ( &CheckActionRange_Parms.PlayerLocation, &PlayerLocation, 0xC );

	this->ProcessEvent ( pFnCheckActionRange, &CheckActionRange_Parms, NULL );

	return CheckActionRange_Parms.ReturnValue;
};

// Function SGshooter.SGHudToolTip.OnStopUse
// [0x00120000] 
// Parameters infos:

void ASGHudToolTip::OnStopUse ( )
{
	static UFunction* pFnOnStopUse = NULL;

	if ( ! pFnOnStopUse )
		pFnOnStopUse = (UFunction*) UObject::GObjObjects()->Data[ 46670 ];

	ASGHudToolTip_execOnStopUse_Parms OnStopUse_Parms;

	this->ProcessEvent ( pFnOnStopUse, &OnStopUse_Parms, NULL );
};

// Function SGshooter.SGHudToolTip.OnUse
// [0x00120000] 
// Parameters infos:

void ASGHudToolTip::OnUse ( )
{
	static UFunction* pFnOnUse = NULL;

	if ( ! pFnOnUse )
		pFnOnUse = (UFunction*) UObject::GObjObjects()->Data[ 46672 ];

	ASGHudToolTip_execOnUse_Parms OnUse_Parms;

	this->ProcessEvent ( pFnOnUse, &OnUse_Parms, NULL );
};

// Function SGshooter.SGGfxHudMiniMap.Update
// [0x00820002] 
// Parameters infos:
// float                          Scale                          ( CPF_Parm )

void USGGfxHudMiniMap::Update ( float Scale )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 45649 ];

	USGGfxHudMiniMap_execUpdate_Parms Update_Parms;
	Update_Parms.Scale = Scale;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );
};

// Function SGshooter.SGGfxHudMiniMap.UpdateThubNails
// [0x00820002] 
// Parameters infos:

void USGGfxHudMiniMap::UpdateThubNails ( )
{
	static UFunction* pFnUpdateThubNails = NULL;

	if ( ! pFnUpdateThubNails )
		pFnUpdateThubNails = (UFunction*) UObject::GObjObjects()->Data[ 45645 ];

	USGGfxHudMiniMap_execUpdateThubNails_Parms UpdateThubNails_Parms;

	this->ProcessEvent ( pFnUpdateThubNails, &UpdateThubNails_Parms, NULL );
};

// Function SGshooter.SGGfxHudMiniMap.UnRegisterInMiniMap
// [0x00820002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )

void USGGfxHudMiniMap::UnRegisterInMiniMap ( class AActor* Actor )
{
	static UFunction* pFnUnRegisterInMiniMap = NULL;

	if ( ! pFnUnRegisterInMiniMap )
		pFnUnRegisterInMiniMap = (UFunction*) UObject::GObjObjects()->Data[ 45642 ];

	USGGfxHudMiniMap_execUnRegisterInMiniMap_Parms UnRegisterInMiniMap_Parms;
	UnRegisterInMiniMap_Parms.Actor = Actor;

	this->ProcessEvent ( pFnUnRegisterInMiniMap, &UnRegisterInMiniMap_Parms, NULL );
};

// Function SGshooter.SGGfxHudMiniMap.RegisterInMiniMap
// [0x00820002] 
// Parameters infos:
// class AActor*                  Actor                          ( CPF_Parm )
// struct FString                 Thubnail                       ( CPF_Parm | CPF_NeedCtorLink )

void USGGfxHudMiniMap::RegisterInMiniMap ( class AActor* Actor, struct FString Thubnail )
{
	static UFunction* pFnRegisterInMiniMap = NULL;

	if ( ! pFnRegisterInMiniMap )
		pFnRegisterInMiniMap = (UFunction*) UObject::GObjObjects()->Data[ 45638 ];

	USGGfxHudMiniMap_execRegisterInMiniMap_Parms RegisterInMiniMap_Parms;
	RegisterInMiniMap_Parms.Actor = Actor;
	memcpy ( &RegisterInMiniMap_Parms.Thubnail, &Thubnail, 0xC );

	this->ProcessEvent ( pFnRegisterInMiniMap, &RegisterInMiniMap_Parms, NULL );
};

// Function SGshooter.SGGfxHudMiniMap.Init
// [0x00020002] 
// Parameters infos:
// class USGGfxHud*               HUD                            ( CPF_Parm )

void USGGfxHudMiniMap::Init ( class USGGfxHud* HUD )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 45632 ];

	USGGfxHudMiniMap_execInit_Parms Init_Parms;
	Init_Parms.HUD = HUD;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function SGshooter.SGSeqAct_ToggleProgressBar.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqAct_ToggleProgressBar::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48487 ];

	USGSeqAct_ToggleProgressBar_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGSeqAct_ToggleProgressBar.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USGSeqAct_ToggleProgressBar::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 48484 ];

	USGSeqAct_ToggleProgressBar_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SGshooter.SGSeqAct_ToggleProgressBar.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_ToggleProgressBar::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48481 ];

	USGSeqAct_ToggleProgressBar_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASGProj_Grenade::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 48259 ];

	ASGProj_Grenade_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  Wall                           ( CPF_Parm )
// class UPrimitiveComponent*     WallComp                       ( CPF_Parm | CPF_EditInline )

void ASGProj_Grenade::eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp )
{
	static UFunction* pFnHitWall = NULL;

	if ( ! pFnHitWall )
		pFnHitWall = (UFunction*) UObject::GObjObjects()->Data[ 48255 ];

	ASGProj_Grenade_eventHitWall_Parms HitWall_Parms;
	memcpy ( &HitWall_Parms.HitNormal, &HitNormal, 0xC );
	HitWall_Parms.Wall = Wall;
	HitWall_Parms.WallComp = WallComp;

	this->ProcessEvent ( pFnHitWall, &HitWall_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASGProj_Grenade::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 48252 ];

	ASGProj_Grenade_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.SetExplosionEffectParameters
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* ProjExplosion                  ( CPF_Parm | CPF_EditInline )

void ASGProj_Grenade::SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion )
{
	static UFunction* pFnSetExplosionEffectParameters = NULL;

	if ( ! pFnSetExplosionEffectParameters )
		pFnSetExplosionEffectParameters = (UFunction*) UObject::GObjObjects()->Data[ 48250 ];

	ASGProj_Grenade_execSetExplosionEffectParameters_Parms SetExplosionEffectParameters_Parms;
	SetExplosionEffectParameters_Parms.ProjExplosion = ProjExplosion;

	this->ProcessEvent ( pFnSetExplosionEffectParameters, &SetExplosionEffectParameters_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.CustomExplode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASGProj_Grenade::CustomExplode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnCustomExplode = NULL;

	if ( ! pFnCustomExplode )
		pFnCustomExplode = (UFunction*) UObject::GObjObjects()->Data[ 48247 ];

	ASGProj_Grenade_execCustomExplode_Parms CustomExplode_Parms;
	memcpy ( &CustomExplode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &CustomExplode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnCustomExplode, &CustomExplode_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.SpawnExplosionEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void ASGProj_Grenade::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 48240 ];

	ASGProj_Grenade_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.SetExplodeTime
// [0x00020002] 
// Parameters infos:
// float                          TimerTime                      ( CPF_Parm )

void ASGProj_Grenade::SetExplodeTime ( float TimerTime )
{
	static UFunction* pFnSetExplodeTime = NULL;

	if ( ! pFnSetExplodeTime )
		pFnSetExplodeTime = (UFunction*) UObject::GObjObjects()->Data[ 48238 ];

	ASGProj_Grenade_execSetExplodeTime_Parms SetExplodeTime_Parms;
	SetExplodeTime_Parms.TimerTime = TimerTime;

	this->ProcessEvent ( pFnSetExplodeTime, &SetExplodeTime_Parms, NULL );
};

// Function SGshooter.SGProj_Grenade.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASGProj_Grenade::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 48237 ];

	ASGProj_Grenade_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_DataProvider.SetGameMode
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// int                            SelectedIndex                  ( CPF_Parm )

void USGGfxMenu_DataProvider::SetGameMode ( int SelectedIndex )
{
	static UFunction* pFnSetGameMode = NULL;

	if ( ! pFnSetGameMode )
		pFnSetGameMode = (UFunction*) UObject::GObjObjects()->Data[ 45712 ];

	USGGfxMenu_DataProvider_execSetGameMode_Parms SetGameMode_Parms;
	SetGameMode_Parms.SelectedIndex = SelectedIndex;

	this->ProcessEvent ( pFnSetGameMode, &SetGameMode_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_DataProvider.GetGameModeFriendlyString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 InGameMode                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString USGGfxMenu_DataProvider::GetGameModeFriendlyString ( struct FString InGameMode )
{
	static UFunction* pFnGetGameModeFriendlyString = NULL;

	if ( ! pFnGetGameModeFriendlyString )
		pFnGetGameModeFriendlyString = (UFunction*) UObject::GObjObjects()->Data[ 45708 ];

	USGGfxMenu_DataProvider_execGetGameModeFriendlyString_Parms GetGameModeFriendlyString_Parms;
	memcpy ( &GetGameModeFriendlyString_Parms.InGameMode, &InGameMode, 0xC );

	this->ProcessEvent ( pFnGetGameModeFriendlyString, &GetGameModeFriendlyString_Parms, NULL );

	return GetGameModeFriendlyString_Parms.ReturnValue;
};

// Function SGshooter.SGGfxMenu_DataProvider.GetGameModes
// [0x00420002] 
// Parameters infos:
// TArray< struct FString >       aGameModes                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USGGfxMenu_DataProvider::GetGameModes ( TArray< struct FString >* aGameModes )
{
	static UFunction* pFnGetGameModes = NULL;

	if ( ! pFnGetGameModes )
		pFnGetGameModes = (UFunction*) UObject::GObjObjects()->Data[ 45702 ];

	USGGfxMenu_DataProvider_execGetGameModes_Parms GetGameModes_Parms;

	this->ProcessEvent ( pFnGetGameModes, &GetGameModes_Parms, NULL );

	if ( aGameModes )
		memcpy ( aGameModes, &GetGameModes_Parms.aGameModes, 0xC );
};

// Function SGshooter.SGGfxMenu_DataProvider.GetMapList
// [0x00420002] 
// Parameters infos:
// TArray< struct FString >       MapList                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void USGGfxMenu_DataProvider::GetMapList ( TArray< struct FString >* MapList )
{
	static UFunction* pFnGetMapList = NULL;

	if ( ! pFnGetMapList )
		pFnGetMapList = (UFunction*) UObject::GObjObjects()->Data[ 45691 ];

	USGGfxMenu_DataProvider_execGetMapList_Parms GetMapList_Parms;

	this->ProcessEvent ( pFnGetMapList, &GetMapList_Parms, NULL );

	if ( MapList )
		memcpy ( MapList, &GetMapList_Parms.MapList, 0xC );
};

// Function SGshooter.SGGfxMenu_DataProvider.GetMapFriendlyName
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// TArray< class UUTUIDataProvider_MapInfo* > MapList                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Map                            ( CPF_Parm | CPF_NeedCtorLink )

struct FString USGGfxMenu_DataProvider::GetMapFriendlyName ( TArray< class UUTUIDataProvider_MapInfo* > MapList, struct FString Map )
{
	static UFunction* pFnGetMapFriendlyName = NULL;

	if ( ! pFnGetMapFriendlyName )
		pFnGetMapFriendlyName = (UFunction*) UObject::GObjObjects()->Data[ 45679 ];

	USGGfxMenu_DataProvider_execGetMapFriendlyName_Parms GetMapFriendlyName_Parms;
	memcpy ( &GetMapFriendlyName_Parms.MapList, &MapList, 0xC );
	memcpy ( &GetMapFriendlyName_Parms.Map, &Map, 0xC );

	this->ProcessEvent ( pFnGetMapFriendlyName, &GetMapFriendlyName_Parms, NULL );

	return GetMapFriendlyName_Parms.ReturnValue;
};

// Function SGshooter.SGGfxMenu_DataProvider.SupportedByCurrentGameMode
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapPrefix                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

bool USGGfxMenu_DataProvider::SupportedByCurrentGameMode ( struct FString MapPrefix, struct FString MapName )
{
	static UFunction* pFnSupportedByCurrentGameMode = NULL;

	if ( ! pFnSupportedByCurrentGameMode )
		pFnSupportedByCurrentGameMode = (UFunction*) UObject::GObjObjects()->Data[ 45673 ];

	USGGfxMenu_DataProvider_execSupportedByCurrentGameMode_Parms SupportedByCurrentGameMode_Parms;
	memcpy ( &SupportedByCurrentGameMode_Parms.MapPrefix, &MapPrefix, 0xC );
	memcpy ( &SupportedByCurrentGameMode_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnSupportedByCurrentGameMode, &SupportedByCurrentGameMode_Parms, NULL );

	return SupportedByCurrentGameMode_Parms.ReturnValue;
};

// Function SGshooter.SGGfxMenu_DataProvider.Init
// [0x00020002] 
// Parameters infos:

void USGGfxMenu_DataProvider::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 45668 ];

	USGGfxMenu_DataProvider_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.OnJoinGameComplete
// [0x00020002] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bSuccessful                    ( CPF_Parm )

void USGGfxMenu_JoinGame::OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful )
{
	static UFunction* pFnOnJoinGameComplete = NULL;

	if ( ! pFnOnJoinGameComplete )
		pFnOnJoinGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 45889 ];

	USGGfxMenu_JoinGame_execOnJoinGameComplete_Parms OnJoinGameComplete_Parms;
	memcpy ( &OnJoinGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinGameComplete_Parms.bSuccessful = bSuccessful;

	this->ProcessEvent ( pFnOnJoinGameComplete, &OnJoinGameComplete_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.ProcessJoin
// [0x00820002] 
// Parameters infos:
// int                            CurrentSelection               ( CPF_Parm )

void USGGfxMenu_JoinGame::ProcessJoin ( int CurrentSelection )
{
	static UFunction* pFnProcessJoin = NULL;

	if ( ! pFnProcessJoin )
		pFnProcessJoin = (UFunction*) UObject::GObjObjects()->Data[ 45885 ];

	USGGfxMenu_JoinGame_execProcessJoin_Parms ProcessJoin_Parms;
	ProcessJoin_Parms.CurrentSelection = CurrentSelection;

	this->ProcessEvent ( pFnProcessJoin, &ProcessJoin_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.BuildJoinURL
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ResolvedConnectionURL          ( CPF_Parm | CPF_NeedCtorLink )

struct FString USGGfxMenu_JoinGame::BuildJoinURL ( struct FString ResolvedConnectionURL )
{
	static UFunction* pFnBuildJoinURL = NULL;

	if ( ! pFnBuildJoinURL )
		pFnBuildJoinURL = (UFunction*) UObject::GObjObjects()->Data[ 45881 ];

	USGGfxMenu_JoinGame_execBuildJoinURL_Parms BuildJoinURL_Parms;
	memcpy ( &BuildJoinURL_Parms.ResolvedConnectionURL, &ResolvedConnectionURL, 0xC );

	this->ProcessEvent ( pFnBuildJoinURL, &BuildJoinURL_Parms, NULL );

	return BuildJoinURL_Parms.ReturnValue;
};

// Function SGshooter.SGGfxMenu_JoinGame.UpdateListDataProvider
// [0x00820002] 
// Parameters infos:

void USGGfxMenu_JoinGame::UpdateListDataProvider ( )
{
	static UFunction* pFnUpdateListDataProvider = NULL;

	if ( ! pFnUpdateListDataProvider )
		pFnUpdateListDataProvider = (UFunction*) UObject::GObjObjects()->Data[ 45872 ];

	USGGfxMenu_JoinGame_execUpdateListDataProvider_Parms UpdateListDataProvider_Parms;

	this->ProcessEvent ( pFnUpdateListDataProvider, &UpdateListDataProvider_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.GetDesiredMatchType
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGGfxMenu_JoinGame::GetDesiredMatchType ( )
{
	static UFunction* pFnGetDesiredMatchType = NULL;

	if ( ! pFnGetDesiredMatchType )
		pFnGetDesiredMatchType = (UFunction*) UObject::GObjObjects()->Data[ 45870 ];

	USGGfxMenu_JoinGame_execGetDesiredMatchType_Parms GetDesiredMatchType_Parms;

	this->ProcessEvent ( pFnGetDesiredMatchType, &GetDesiredMatchType_Parms, NULL );

	return GetDesiredMatchType_Parms.ReturnValue;
};

// Function SGshooter.SGGfxMenu_JoinGame.OnFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void USGGfxMenu_JoinGame::OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnOnFindOnlineGamesCompleteDelegate )
		pFnOnFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 45867 ];

	USGGfxMenu_JoinGame_execOnFindOnlineGamesCompleteDelegate_Parms OnFindOnlineGamesCompleteDelegate_Parms;
	OnFindOnlineGamesCompleteDelegate_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesCompleteDelegate, &OnFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.SubmitServerListQuery
// [0x00020002] 
// Parameters infos:
// int                            PlayerIndex                    ( CPF_Parm )

void USGGfxMenu_JoinGame::SubmitServerListQuery ( int PlayerIndex )
{
	static UFunction* pFnSubmitServerListQuery = NULL;

	if ( ! pFnSubmitServerListQuery )
		pFnSubmitServerListQuery = (UFunction*) UObject::GObjObjects()->Data[ 45865 ];

	USGGfxMenu_JoinGame_execSubmitServerListQuery_Parms SubmitServerListQuery_Parms;
	SubmitServerListQuery_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnSubmitServerListQuery, &SubmitServerListQuery_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.RefreshServerList
// [0x00024002] 
// Parameters infos:
// int                            InPlayerIndex                  ( CPF_Parm )
// int                            MaxResults                     ( CPF_OptionalParm | CPF_Parm )

void USGGfxMenu_JoinGame::RefreshServerList ( int InPlayerIndex, int MaxResults )
{
	static UFunction* pFnRefreshServerList = NULL;

	if ( ! pFnRefreshServerList )
		pFnRefreshServerList = (UFunction*) UObject::GObjObjects()->Data[ 45860 ];

	USGGfxMenu_JoinGame_execRefreshServerList_Parms RefreshServerList_Parms;
	RefreshServerList_Parms.InPlayerIndex = InPlayerIndex;
	RefreshServerList_Parms.MaxResults = MaxResults;

	this->ProcessEvent ( pFnRefreshServerList, &RefreshServerList_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.UseLANMode
// [0x00020000] 
// Parameters infos:

void USGGfxMenu_JoinGame::UseLANMode ( )
{
	static UFunction* pFnUseLANMode = NULL;

	if ( ! pFnUseLANMode )
		pFnUseLANMode = (UFunction*) UObject::GObjObjects()->Data[ 45859 ];

	USGGfxMenu_JoinGame_execUseLANMode_Parms UseLANMode_Parms;

	this->ProcessEvent ( pFnUseLANMode, &UseLANMode_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.ValidateServerType
// [0x00020002] 
// Parameters infos:

void USGGfxMenu_JoinGame::ValidateServerType ( )
{
	static UFunction* pFnValidateServerType = NULL;

	if ( ! pFnValidateServerType )
		pFnValidateServerType = (UFunction*) UObject::GObjObjects()->Data[ 45856 ];

	USGGfxMenu_JoinGame_execValidateServerType_Parms ValidateServerType_Parms;

	this->ProcessEvent ( pFnValidateServerType, &ValidateServerType_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.Cleanup
// [0x00020002] 
// Parameters infos:

void USGGfxMenu_JoinGame::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 45855 ];

	USGGfxMenu_JoinGame_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.Refresh
// [0x00020002] 
// Parameters infos:

void USGGfxMenu_JoinGame::Refresh ( )
{
	static UFunction* pFnRefresh = NULL;

	if ( ! pFnRefresh )
		pFnRefresh = (UFunction*) UObject::GObjObjects()->Data[ 45854 ];

	USGGfxMenu_JoinGame_execRefresh_Parms Refresh_Parms;

	this->ProcessEvent ( pFnRefresh, &Refresh_Parms, NULL );
};

// Function SGshooter.SGGfxMenu_JoinGame.GetPlayerName
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString USGGfxMenu_JoinGame::GetPlayerName ( )
{
	static UFunction* pFnGetPlayerName = NULL;

	if ( ! pFnGetPlayerName )
		pFnGetPlayerName = (UFunction*) UObject::GObjObjects()->Data[ 45852 ];

	USGGfxMenu_JoinGame_execGetPlayerName_Parms GetPlayerName_Parms;

	this->ProcessEvent ( pFnGetPlayerName, &GetPlayerName_Parms, NULL );

	return GetPlayerName_Parms.ReturnValue;
};

// Function SGshooter.SGGfxMenu_JoinGame.Init
// [0x00020002] 
// Parameters infos:
// class UGFxObject*              ListMC                         ( CPF_Parm )
// class UGFxMoviePlayer*         Owner                          ( CPF_Parm )

void USGGfxMenu_JoinGame::Init ( class UGFxObject* ListMC, class UGFxMoviePlayer* Owner )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 45848 ];

	USGGfxMenu_JoinGame_execInit_Parms Init_Parms;
	Init_Parms.ListMC = ListMC;
	Init_Parms.Owner = Owner;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function SGshooter.SGGoal.HasFailed
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGoal::HasFailed ( )
{
	static UFunction* pFnHasFailed = NULL;

	if ( ! pFnHasFailed )
		pFnHasFailed = (UFunction*) UObject::GObjObjects()->Data[ 45915 ];

	USGGoal_execHasFailed_Parms HasFailed_Parms;

	this->ProcessEvent ( pFnHasFailed, &HasFailed_Parms, NULL );

	return HasFailed_Parms.ReturnValue;
};

// Function SGshooter.SGGoal.IsComplete
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGoal::IsComplete ( )
{
	static UFunction* pFnIsComplete = NULL;

	if ( ! pFnIsComplete )
		pFnIsComplete = (UFunction*) UObject::GObjObjects()->Data[ 45913 ];

	USGGoal_execIsComplete_Parms IsComplete_Parms;

	this->ProcessEvent ( pFnIsComplete, &IsComplete_Parms, NULL );

	return IsComplete_Parms.ReturnValue;
};

// Function SGshooter.SGGoal.IsInactive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGoal::IsInactive ( )
{
	static UFunction* pFnIsInactive = NULL;

	if ( ! pFnIsInactive )
		pFnIsInactive = (UFunction*) UObject::GObjObjects()->Data[ 45911 ];

	USGGoal_execIsInactive_Parms IsInactive_Parms;

	this->ProcessEvent ( pFnIsInactive, &IsInactive_Parms, NULL );

	return IsInactive_Parms.ReturnValue;
};

// Function SGshooter.SGGoal.IsActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool USGGoal::IsActive ( )
{
	static UFunction* pFnIsActive = NULL;

	if ( ! pFnIsActive )
		pFnIsActive = (UFunction*) UObject::GObjObjects()->Data[ 45909 ];

	USGGoal_execIsActive_Parms IsActive_Parms;

	this->ProcessEvent ( pFnIsActive, &IsActive_Parms, NULL );

	return IsActive_Parms.ReturnValue;
};

// Function SGshooter.SGGoal.SetOwner
// [0x00020002] 
// Parameters infos:
// class APawn*                   pPawn                          ( CPF_Parm )

void USGGoal::SetOwner ( class APawn* pPawn )
{
	static UFunction* pFnSetOwner = NULL;

	if ( ! pFnSetOwner )
		pFnSetOwner = (UFunction*) UObject::GObjObjects()->Data[ 45907 ];

	USGGoal_execSetOwner_Parms SetOwner_Parms;
	SetOwner_Parms.pPawn = pPawn;

	this->ProcessEvent ( pFnSetOwner, &SetOwner_Parms, NULL );
};

// Function SGshooter.SGGoal.Terminate
// [0x00020002] 
// Parameters infos:

void USGGoal::Terminate ( )
{
	static UFunction* pFnTerminate = NULL;

	if ( ! pFnTerminate )
		pFnTerminate = (UFunction*) UObject::GObjObjects()->Data[ 45906 ];

	USGGoal_execTerminate_Parms Terminate_Parms;

	this->ProcessEvent ( pFnTerminate, &Terminate_Parms, NULL );
};

// Function SGshooter.SGGoal.Think
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USGGoal::Think ( )
{
	static UFunction* pFnThink = NULL;

	if ( ! pFnThink )
		pFnThink = (UFunction*) UObject::GObjObjects()->Data[ 45904 ];

	USGGoal_execThink_Parms Think_Parms;

	this->ProcessEvent ( pFnThink, &Think_Parms, NULL );

	return Think_Parms.ReturnValue;
};

// Function SGshooter.SGGoal.Activate
// [0x00020000] 
// Parameters infos:

void USGGoal::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 45903 ];

	USGGoal_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function SGshooter.SGGoal.Evaluate
// [0x00120000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USGGoal*                 Self                           ( CPF_Parm )
// class APawn*                   OwnerPawn                      ( CPF_Parm )

float USGGoal::Evaluate ( class USGGoal* Self, class APawn* OwnerPawn )
{
	static UFunction* pFnEvaluate = NULL;

	if ( ! pFnEvaluate )
		pFnEvaluate = (UFunction*) UObject::GObjObjects()->Data[ 45897 ];

	USGGoal_execEvaluate_Parms Evaluate_Parms;
	Evaluate_Parms.Self = Self;
	Evaluate_Parms.OwnerPawn = OwnerPawn;

	this->ProcessEvent ( pFnEvaluate, &Evaluate_Parms, NULL );

	return Evaluate_Parms.ReturnValue;
};

// Function SGshooter.SGGoal_List.AddSubGoal
// [0x00024002] 
// Parameters infos:
// class USGGoal*                 Goal                           ( CPF_Parm )
// unsigned long                  bInsertAtEnd                   ( CPF_OptionalParm | CPF_Parm )

void USGGoal_List::AddSubGoal ( class USGGoal* Goal, unsigned long bInsertAtEnd )
{
	static UFunction* pFnAddSubGoal = NULL;

	if ( ! pFnAddSubGoal )
		pFnAddSubGoal = (UFunction*) UObject::GObjObjects()->Data[ 45925 ];

	USGGoal_List_execAddSubGoal_Parms AddSubGoal_Parms;
	AddSubGoal_Parms.Goal = Goal;
	AddSubGoal_Parms.bInsertAtEnd = bInsertAtEnd;

	this->ProcessEvent ( pFnAddSubGoal, &AddSubGoal_Parms, NULL );
};

// Function SGshooter.SGGoal_List.Terminate
// [0x00020002] 
// Parameters infos:

void USGGoal_List::Terminate ( )
{
	static UFunction* pFnTerminate = NULL;

	if ( ! pFnTerminate )
		pFnTerminate = (UFunction*) UObject::GObjObjects()->Data[ 45924 ];

	USGGoal_List_execTerminate_Parms Terminate_Parms;

	this->ProcessEvent ( pFnTerminate, &Terminate_Parms, NULL );
};

// Function SGshooter.SGGoal_List.Think
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char USGGoal_List::Think ( )
{
	static UFunction* pFnThink = NULL;

	if ( ! pFnThink )
		pFnThink = (UFunction*) UObject::GObjObjects()->Data[ 45922 ];

	USGGoal_List_execThink_Parms Think_Parms;

	this->ProcessEvent ( pFnThink, &Think_Parms, NULL );

	return Think_Parms.ReturnValue;
};

// Function SGshooter.SGGoal_List.Activate
// [0x00020002] 
// Parameters infos:

void USGGoal_List::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 45921 ];

	USGGoal_List_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function SGshooter.SGMusicManager.StartMusic
// [0x00020002] 
// Parameters infos:

void ASGMusicManager::StartMusic ( )
{
	static UFunction* pFnStartMusic = NULL;

	if ( ! pFnStartMusic )
		pFnStartMusic = (UFunction*) UObject::GObjObjects()->Data[ 46933 ];

	ASGMusicManager_execStartMusic_Parms StartMusic_Parms;

	this->ProcessEvent ( pFnStartMusic, &StartMusic_Parms, NULL );
};

// Function SGshooter.SGMusicManager.ChangeTrack
// [0x00020002] 
// Parameters infos:
// unsigned char                  NewState                       ( CPF_Parm )

void ASGMusicManager::ChangeTrack ( unsigned char NewState )
{
	static UFunction* pFnChangeTrack = NULL;

	if ( ! pFnChangeTrack )
		pFnChangeTrack = (UFunction*) UObject::GObjObjects()->Data[ 46930 ];

	ASGMusicManager_execChangeTrack_Parms ChangeTrack_Parms;
	ChangeTrack_Parms.NewState = NewState;

	this->ProcessEvent ( pFnChangeTrack, &ChangeTrack_Parms, NULL );
};

// Function SGshooter.SGMusicManager.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASGMusicManager::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 46925 ];

	ASGMusicManager_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function SGshooter.SGS_PawnSoundGroup_Raptor.PlayBulletImpact
// [0x00022000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void USGS_PawnSoundGroup_Raptor::PlayBulletImpact ( class APawn* P )
{
	static UFunction* pFnPlayBulletImpact = NULL;

	if ( ! pFnPlayBulletImpact )
		pFnPlayBulletImpact = (UFunction*) UObject::GObjObjects()->Data[ 48385 ];

	USGS_PawnSoundGroup_Raptor_execPlayBulletImpact_Parms PlayBulletImpact_Parms;
	PlayBulletImpact_Parms.P = P;

	this->ProcessEvent ( pFnPlayBulletImpact, &PlayBulletImpact_Parms, NULL );
};

// Function SGshooter.SGS_PawnSoundGroup_Raptor.PlayTakeHitSound
// [0x00022002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )

void USGS_PawnSoundGroup_Raptor::PlayTakeHitSound ( class APawn* P, int Damage )
{
	static UFunction* pFnPlayTakeHitSound = NULL;

	if ( ! pFnPlayTakeHitSound )
		pFnPlayTakeHitSound = (UFunction*) UObject::GObjObjects()->Data[ 48381 ];

	USGS_PawnSoundGroup_Raptor_execPlayTakeHitSound_Parms PlayTakeHitSound_Parms;
	PlayTakeHitSound_Parms.P = P;
	PlayTakeHitSound_Parms.Damage = Damage;

	this->ProcessEvent ( pFnPlayTakeHitSound, &PlayTakeHitSound_Parms, NULL );
};

// Function SGshooter.SGS_PawnSoundGroup_Raptor.PlayLandSound
// [0x00022000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void USGS_PawnSoundGroup_Raptor::PlayLandSound ( class APawn* P )
{
	static UFunction* pFnPlayLandSound = NULL;

	if ( ! pFnPlayLandSound )
		pFnPlayLandSound = (UFunction*) UObject::GObjObjects()->Data[ 48379 ];

	USGS_PawnSoundGroup_Raptor_execPlayLandSound_Parms PlayLandSound_Parms;
	PlayLandSound_Parms.P = P;

	this->ProcessEvent ( pFnPlayLandSound, &PlayLandSound_Parms, NULL );
};

// Function SGshooter.SGSeqAct_AddVector.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_AddVector::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48435 ];

	USGSeqAct_AddVector_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_CauseRadiusHurt.Activated
// [0x00020002] 
// Parameters infos:

void USGSeqAct_CauseRadiusHurt::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48445 ];

	USGSeqAct_CauseRadiusHurt_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_GetTimeInvisible.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_GetTimeInvisible::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48451 ];

	USGSeqAct_GetTimeInvisible_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_GotoState.Activated
// [0x00020002] 
// Parameters infos:

void USGSeqAct_GotoState::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48456 ];

	USGSeqAct_GotoState_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_ToggleCustomAction.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqAct_ToggleCustomAction::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48468 ];

	USGSeqAct_ToggleCustomAction_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGSeqAct_ToggleCustomAction.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_ToggleCustomAction::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48466 ];

	USGSeqAct_ToggleCustomAction_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_ToggleObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqAct_ToggleObjective::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48477 ];

	USGSeqAct_ToggleObjective_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGSeqAct_ToggleObjective.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_ToggleObjective::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48474 ];

	USGSeqAct_ToggleObjective_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_ToggleTimer.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqAct_ToggleTimer::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48513 ];

	USGSeqAct_ToggleTimer_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGSeqAct_ToggleTimer.Deactivated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_ToggleTimer::eventDeactivated ( )
{
	static UFunction* pFnDeactivated = NULL;

	if ( ! pFnDeactivated )
		pFnDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 48510 ];

	USGSeqAct_ToggleTimer_eventDeactivated_Parms Deactivated_Parms;

	this->ProcessEvent ( pFnDeactivated, &Deactivated_Parms, NULL );
};

// Function SGshooter.SGSeqAct_ToggleTimer.Update
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

bool USGSeqAct_ToggleTimer::eventUpdate ( float DeltaTime )
{
	static UFunction* pFnUpdate = NULL;

	if ( ! pFnUpdate )
		pFnUpdate = (UFunction*) UObject::GObjObjects()->Data[ 48505 ];

	USGSeqAct_ToggleTimer_eventUpdate_Parms Update_Parms;
	Update_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdate, &Update_Parms, NULL );

	return Update_Parms.ReturnValue;
};

// Function SGshooter.SGSeqAct_ToggleTimer.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqAct_ToggleTimer::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48498 ];

	USGSeqAct_ToggleTimer_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqCond_IsInTeam.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void USGSeqCond_IsInTeam::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 48519 ];

	USGSeqCond_IsInTeam_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function SGshooter.SGSeqEvent_KeyAction.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqEvent_KeyAction::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48522 ];

	USGSeqEvent_KeyAction_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGSeqEvent_LockDevice.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USGSeqEvent_LockDevice::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 48529 ];

	USGSeqEvent_LockDevice_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function SGshooter.SGSeqVar_MainPlayer.GetObjectValue
// [0x00020002] 
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UObject* USGSeqVar_MainPlayer::GetObjectValue ( )
{
	static UFunction* pFnGetObjectValue = NULL;

	if ( ! pFnGetObjectValue )
		pFnGetObjectValue = (UFunction*) UObject::GObjObjects()->Data[ 48536 ];

	USGSeqVar_MainPlayer_execGetObjectValue_Parms GetObjectValue_Parms;

	this->ProcessEvent ( pFnGetObjectValue, &GetObjectValue_Parms, NULL );

	return GetObjectValue_Parms.ReturnValue;
};

// Function SGshooter.SGSpawnFactory_Bot.GetMainPlayer
// [0x00020002] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* ASGSpawnFactory_Bot::GetMainPlayer ( )
{
	static UFunction* pFnGetMainPlayer = NULL;

	if ( ! pFnGetMainPlayer )
		pFnGetMainPlayer = (UFunction*) UObject::GObjObjects()->Data[ 48577 ];

	ASGSpawnFactory_Bot_execGetMainPlayer_Parms GetMainPlayer_Parms;

	this->ProcessEvent ( pFnGetMainPlayer, &GetMainPlayer_Parms, NULL );

	return GetMainPlayer_Parms.ReturnValue;
};

// Function SGshooter.SGSpawnFactory_Bot.KillInvalidBots
// [0x00020002] 
// Parameters infos:

void ASGSpawnFactory_Bot::KillInvalidBots ( )
{
	static UFunction* pFnKillInvalidBots = NULL;

	if ( ! pFnKillInvalidBots )
		pFnKillInvalidBots = (UFunction*) UObject::GObjObjects()->Data[ 48575 ];

	ASGSpawnFactory_Bot_execKillInvalidBots_Parms KillInvalidBots_Parms;

	this->ProcessEvent ( pFnKillInvalidBots, &KillInvalidBots_Parms, NULL );
};

// Function SGshooter.SGSpawnFactory_Bot.SpawnBot
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGSpawnFactory_Bot::SpawnBot ( )
{
	static UFunction* pFnSpawnBot = NULL;

	if ( ! pFnSpawnBot )
		pFnSpawnBot = (UFunction*) UObject::GObjObjects()->Data[ 48569 ];

	ASGSpawnFactory_Bot_execSpawnBot_Parms SpawnBot_Parms;

	this->ProcessEvent ( pFnSpawnBot, &SpawnBot_Parms, NULL );

	return SpawnBot_Parms.ReturnValue;
};

// Function SGshooter.SGSpawnFactory_Bot.CanSpawn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASGSpawnFactory_Bot::CanSpawn ( )
{
	static UFunction* pFnCanSpawn = NULL;

	if ( ! pFnCanSpawn )
		pFnCanSpawn = (UFunction*) UObject::GObjObjects()->Data[ 48565 ];

	ASGSpawnFactory_Bot_execCanSpawn_Parms CanSpawn_Parms;

	this->ProcessEvent ( pFnCanSpawn, &CanSpawn_Parms, NULL );

	return CanSpawn_Parms.ReturnValue;
};

// Function SGshooter.SGWeap_Grenade.AddSpread
// [0x00020102] 
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                BaseAim                        ( CPF_Parm )

struct FRotator ASGWeap_Grenade::AddSpread ( struct FRotator BaseAim )
{
	static UFunction* pFnAddSpread = NULL;

	if ( ! pFnAddSpread )
		pFnAddSpread = (UFunction*) UObject::GObjObjects()->Data[ 49512 ];

	ASGWeap_Grenade_execAddSpread_Parms AddSpread_Parms;
	memcpy ( &AddSpread_Parms.BaseAim, &BaseAim, 0xC );

	this->ProcessEvent ( pFnAddSpread, &AddSpread_Parms, NULL );

	return AddSpread_Parms.ReturnValue;
};

// Function SGshooter.SGWeap_Grenade.ConsumeAmmo
// [0x00020102] 
// Parameters infos:
// unsigned char                  FireModeNum                    ( CPF_Parm )

void ASGWeap_Grenade::ConsumeAmmo ( unsigned char FireModeNum )
{
	static UFunction* pFnConsumeAmmo = NULL;

	if ( ! pFnConsumeAmmo )
		pFnConsumeAmmo = (UFunction*) UObject::GObjObjects()->Data[ 49510 ];

	ASGWeap_Grenade_execConsumeAmmo_Parms ConsumeAmmo_Parms;
	ConsumeAmmo_Parms.FireModeNum = FireModeNum;

	this->ProcessEvent ( pFnConsumeAmmo, &ConsumeAmmo_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.IncrementFlashCount
// [0x00020100] 
// Parameters infos:

void ASGWeap_Grenade::IncrementFlashCount ( )
{
	static UFunction* pFnIncrementFlashCount = NULL;

	if ( ! pFnIncrementFlashCount )
		pFnIncrementFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 49509 ];

	ASGWeap_Grenade_execIncrementFlashCount_Parms IncrementFlashCount_Parms;

	this->ProcessEvent ( pFnIncrementFlashCount, &IncrementFlashCount_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.GetPhysicalFireStartLoc
// [0x00824102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 AimDir                         ( CPF_OptionalParm | CPF_Parm )

struct FVector ASGWeap_Grenade::GetPhysicalFireStartLoc ( struct FVector AimDir )
{
	static UFunction* pFnGetPhysicalFireStartLoc = NULL;

	if ( ! pFnGetPhysicalFireStartLoc )
		pFnGetPhysicalFireStartLoc = (UFunction*) UObject::GObjObjects()->Data[ 49505 ];

	ASGWeap_Grenade_execGetPhysicalFireStartLoc_Parms GetPhysicalFireStartLoc_Parms;
	memcpy ( &GetPhysicalFireStartLoc_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnGetPhysicalFireStartLoc, &GetPhysicalFireStartLoc_Parms, NULL );

	return GetPhysicalFireStartLoc_Parms.ReturnValue;
};

// Function SGshooter.SGWeap_Grenade.Loaded
// [0x00024102] 
// Parameters infos:
// unsigned long                  bUseWeaponMax                  ( CPF_OptionalParm | CPF_Parm )

void ASGWeap_Grenade::Loaded ( unsigned long bUseWeaponMax )
{
	static UFunction* pFnLoaded = NULL;

	if ( ! pFnLoaded )
		pFnLoaded = (UFunction*) UObject::GObjObjects()->Data[ 49503 ];

	ASGWeap_Grenade_execLoaded_Parms Loaded_Parms;
	Loaded_Parms.bUseWeaponMax = bUseWeaponMax;

	this->ProcessEvent ( pFnLoaded, &Loaded_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.PlayThirdPersonGrenadeThrow
// [0x00020100] 
// Parameters infos:

void ASGWeap_Grenade::PlayThirdPersonGrenadeThrow ( )
{
	static UFunction* pFnPlayThirdPersonGrenadeThrow = NULL;

	if ( ! pFnPlayThirdPersonGrenadeThrow )
		pFnPlayThirdPersonGrenadeThrow = (UFunction*) UObject::GObjObjects()->Data[ 49497 ];

	ASGWeap_Grenade_execPlayThirdPersonGrenadeThrow_Parms PlayThirdPersonGrenadeThrow_Parms;

	this->ProcessEvent ( pFnPlayThirdPersonGrenadeThrow, &PlayThirdPersonGrenadeThrow_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.ExplodeInHands
// [0x00020102] 
// Parameters infos:

void ASGWeap_Grenade::ExplodeInHands ( )
{
	static UFunction* pFnExplodeInHands = NULL;

	if ( ! pFnExplodeInHands )
		pFnExplodeInHands = (UFunction*) UObject::GObjObjects()->Data[ 49496 ];

	ASGWeap_Grenade_execExplodeInHands_Parms ExplodeInHands_Parms;

	this->ProcessEvent ( pFnExplodeInHands, &ExplodeInHands_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.Activate
// [0x00020102] 
// Parameters infos:

void ASGWeap_Grenade::Activate ( )
{
	static UFunction* pFnActivate = NULL;

	if ( ! pFnActivate )
		pFnActivate = (UFunction*) UObject::GObjObjects()->Data[ 49495 ];

	ASGWeap_Grenade_execActivate_Parms Activate_Parms;

	this->ProcessEvent ( pFnActivate, &Activate_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.ThrowGrenade
// [0x002200C2] 
// Parameters infos:

void ASGWeap_Grenade::ThrowGrenade ( )
{
	static UFunction* pFnThrowGrenade = NULL;

	if ( ! pFnThrowGrenade )
		pFnThrowGrenade = (UFunction*) UObject::GObjObjects()->Data[ 49494 ];

	ASGWeap_Grenade_execThrowGrenade_Parms ThrowGrenade_Parms;

	this->ProcessEvent ( pFnThrowGrenade, &ThrowGrenade_Parms, NULL );
};

// Function SGshooter.SGWeap_Grenade.ReloadAmmo
// [0x002200C0] 
// Parameters infos:

void ASGWeap_Grenade::ReloadAmmo ( )
{
	static UFunction* pFnReloadAmmo = NULL;

	if ( ! pFnReloadAmmo )
		pFnReloadAmmo = (UFunction*) UObject::GObjObjects()->Data[ 49493 ];

	ASGWeap_Grenade_execReloadAmmo_Parms ReloadAmmo_Parms;

	this->ProcessEvent ( pFnReloadAmmo, &ReloadAmmo_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif