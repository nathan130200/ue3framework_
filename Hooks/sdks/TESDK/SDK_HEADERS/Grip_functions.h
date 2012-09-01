/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_functions.h
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

// Function Grip.DESLightPawn.StateChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// unsigned char                  NewState                       ( CPF_Parm )
// unsigned char                  previousState                  ( CPF_Parm )

void ADESLightPawn::eventStateChanged ( unsigned char NewState, unsigned char previousState )
{
	static UFunction* pFnStateChanged = NULL;

	if ( ! pFnStateChanged )
		pFnStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 33013 ];

	ADESLightPawn_eventStateChanged_Parms StateChanged_Parms;
	StateChanged_Parms.NewState = NewState;
	StateChanged_Parms.previousState = previousState;

	this->ProcessEvent ( pFnStateChanged, &StateChanged_Parms, NULL );
};

// Function Grip.DESLightPawn.SendExtraRemovedEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class USequence*               levelSequence                  ( CPF_Parm )

void ADESLightPawn::eventSendExtraRemovedEvent ( class USequence* levelSequence )
{
	static UFunction* pFnSendExtraRemovedEvent = NULL;

	if ( ! pFnSendExtraRemovedEvent )
		pFnSendExtraRemovedEvent = (UFunction*) UObject::GObjObjects()->Data[ 33006 ];

	ADESLightPawn_eventSendExtraRemovedEvent_Parms SendExtraRemovedEvent_Parms;
	SendExtraRemovedEvent_Parms.levelSequence = levelSequence;

	this->ProcessEvent ( pFnSendExtraRemovedEvent, &SendExtraRemovedEvent_Parms, NULL );
};

// Function Grip.DESLightPawn.SendExtraKilledEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class USequence*               levelSequence                  ( CPF_Parm )

void ADESLightPawn::eventSendExtraKilledEvent ( class USequence* levelSequence )
{
	static UFunction* pFnSendExtraKilledEvent = NULL;

	if ( ! pFnSendExtraKilledEvent )
		pFnSendExtraKilledEvent = (UFunction*) UObject::GObjObjects()->Data[ 32999 ];

	ADESLightPawn_eventSendExtraKilledEvent_Parms SendExtraKilledEvent_Parms;
	SendExtraKilledEvent_Parms.levelSequence = levelSequence;

	this->ProcessEvent ( pFnSendExtraKilledEvent, &SendExtraKilledEvent_Parms, NULL );
};

// Function Grip.DESLightPawn.EncroachedBy
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void ADESLightPawn::eventEncroachedBy ( class AActor* Other )
{
	static UFunction* pFnEncroachedBy = NULL;

	if ( ! pFnEncroachedBy )
		pFnEncroachedBy = (UFunction*) UObject::GObjObjects()->Data[ 32997 ];

	ADESLightPawn_eventEncroachedBy_Parms EncroachedBy_Parms;
	EncroachedBy_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachedBy, &EncroachedBy_Parms, NULL );
};

// Function Grip.DESLightPawn.TakeDamage
// [0x00024000] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void ADESLightPawn::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 32989 ];

	ADESLightPawn_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function Grip.DESLightPawn.PlayHitEffect
// [0x00820002] 
// Parameters infos:

void ADESLightPawn::PlayHitEffect ( )
{
	static UFunction* pFnPlayHitEffect = NULL;

	if ( ! pFnPlayHitEffect )
		pFnPlayHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 32984 ];

	ADESLightPawn_execPlayHitEffect_Parms PlayHitEffect_Parms;

	this->ProcessEvent ( pFnPlayHitEffect, &PlayHitEffect_Parms, NULL );
};

// Function Grip.DESLightPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void ADESLightPawn::eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnPostInitAnimTree = NULL;

	if ( ! pFnPostInitAnimTree )
		pFnPostInitAnimTree = (UFunction*) UObject::GObjObjects()->Data[ 32979 ];

	ADESLightPawn_eventPostInitAnimTree_Parms PostInitAnimTree_Parms;
	PostInitAnimTree_Parms.SkelComp = SkelComp;

	this->ProcessEvent ( pFnPostInitAnimTree, &PostInitAnimTree_Parms, NULL );
};

// Function Grip.DESLightPawn.Kill
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  killerActor                    ( CPF_Parm )

void ADESLightPawn::Kill ( class AActor* killerActor )
{
	static UFunction* pFnKill = NULL;

	if ( ! pFnKill )
		pFnKill = (UFunction*) UObject::GObjObjects()->Data[ 32977 ];

	ADESLightPawn_execKill_Parms Kill_Parms;
	Kill_Parms.killerActor = killerActor;

	pFnKill->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKill, &Kill_Parms, NULL );

	pFnKill->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )

void ADESLightPawn::PlayDeath ( unsigned long Active )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 32975 ];

	ADESLightPawn_execPlayDeath_Parms PlayDeath_Parms;
	PlayDeath_Parms.Active = Active;

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.DestroyBrain
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  isDeath                        ( CPF_Parm )

void ADESLightPawn::DestroyBrain ( unsigned long isDeath )
{
	static UFunction* pFnDestroyBrain = NULL;

	if ( ! pFnDestroyBrain )
		pFnDestroyBrain = (UFunction*) UObject::GObjObjects()->Data[ 32973 ];

	ADESLightPawn_execDestroyBrain_Parms DestroyBrain_Parms;
	DestroyBrain_Parms.isDeath = isDeath;

	pFnDestroyBrain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyBrain, &DestroyBrain_Parms, NULL );

	pFnDestroyBrain->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetSkelMesh
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Index                          ( CPF_Parm )

void ADESLightPawn::eventSetSkelMesh ( int Index )
{
	static UFunction* pFnSetSkelMesh = NULL;

	if ( ! pFnSetSkelMesh )
		pFnSetSkelMesh = (UFunction*) UObject::GObjObjects()->Data[ 32970 ];

	ADESLightPawn_eventSetSkelMesh_Parms SetSkelMesh_Parms;
	SetSkelMesh_Parms.Index = Index;

	this->ProcessEvent ( pFnSetSkelMesh, &SetSkelMesh_Parms, NULL );
};

// Function Grip.DESLightPawn.ThrowDiscFct
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 AimDir                         ( CPF_Parm )

void ADESLightPawn::eventThrowDiscFct ( struct FVector AimDir )
{
	static UFunction* pFnThrowDiscFct = NULL;

	if ( ! pFnThrowDiscFct )
		pFnThrowDiscFct = (UFunction*) UObject::GObjObjects()->Data[ 32968 ];

	ADESLightPawn_eventThrowDiscFct_Parms ThrowDiscFct_Parms;
	memcpy ( &ThrowDiscFct_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnThrowDiscFct, &ThrowDiscFct_Parms, NULL );
};

// Function Grip.DESLightPawn.SetDiscTarget
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 AimDir                         ( CPF_Parm )

void ADESLightPawn::eventSetDiscTarget ( struct FVector AimDir )
{
	static UFunction* pFnSetDiscTarget = NULL;

	if ( ! pFnSetDiscTarget )
		pFnSetDiscTarget = (UFunction*) UObject::GObjObjects()->Data[ 32966 ];

	ADESLightPawn_eventSetDiscTarget_Parms SetDiscTarget_Parms;
	memcpy ( &SetDiscTarget_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnSetDiscTarget, &SetDiscTarget_Parms, NULL );
};

// Function Grip.DESLightPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void ADESLightPawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 32941 ];

	ADESLightPawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function Grip.DESLightPawn.SetActionStationTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  Active                         ( CPF_Parm )

float ADESLightPawn::SetActionStationTurn ( unsigned long Active )
{
	static UFunction* pFnSetActionStationTurn = NULL;

	if ( ! pFnSetActionStationTurn )
		pFnSetActionStationTurn = (UFunction*) UObject::GObjObjects()->Data[ 32938 ];

	ADESLightPawn_execSetActionStationTurn_Parms SetActionStationTurn_Parms;
	SetActionStationTurn_Parms.Active = Active;

	pFnSetActionStationTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActionStationTurn, &SetActionStationTurn_Parms, NULL );

	pFnSetActionStationTurn->FunctionFlags |= 0x400;

	return SetActionStationTurn_Parms.ReturnValue;
};

// Function Grip.DESLightPawn.StopCustomAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          blendOut                       ( CPF_Parm )

void ADESLightPawn::StopCustomAnim ( float blendOut )
{
	static UFunction* pFnStopCustomAnim = NULL;

	if ( ! pFnStopCustomAnim )
		pFnStopCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 32936 ];

	ADESLightPawn_execStopCustomAnim_Parms StopCustomAnim_Parms;
	StopCustomAnim_Parms.blendOut = blendOut;

	pFnStopCustomAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopCustomAnim, &StopCustomAnim_Parms, NULL );

	pFnStopCustomAnim->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.PlayCustomAnim
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NodeName                       ( CPF_Parm )
// float                          blendIn                        ( CPF_Parm )
// float                          blendOut                       ( CPF_Parm )
// unsigned long                  loop                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )

float ADESLightPawn::PlayCustomAnim ( struct FName NodeName, float blendIn, float blendOut, unsigned long loop, unsigned long bOverride )
{
	static UFunction* pFnPlayCustomAnim = NULL;

	if ( ! pFnPlayCustomAnim )
		pFnPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 32929 ];

	ADESLightPawn_execPlayCustomAnim_Parms PlayCustomAnim_Parms;
	memcpy ( &PlayCustomAnim_Parms.NodeName, &NodeName, 0x8 );
	PlayCustomAnim_Parms.blendIn = blendIn;
	PlayCustomAnim_Parms.blendOut = blendOut;
	PlayCustomAnim_Parms.loop = loop;
	PlayCustomAnim_Parms.bOverride = bOverride;

	pFnPlayCustomAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayCustomAnim, &PlayCustomAnim_Parms, NULL );

	pFnPlayCustomAnim->FunctionFlags |= 0x400;

	return PlayCustomAnim_Parms.ReturnValue;
};

// Function Grip.DESLightPawn.SetActionStation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetActionStation ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetActionStation = NULL;

	if ( ! pFnSetActionStation )
		pFnSetActionStation = (UFunction*) UObject::GObjObjects()->Data[ 32926 ];

	ADESLightPawn_execSetActionStation_Parms SetActionStation_Parms;
	SetActionStation_Parms.Active = Active;
	SetActionStation_Parms.instant = instant;

	pFnSetActionStation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActionStation, &SetActionStation_Parms, NULL );

	pFnSetActionStation->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetWalkBackwardCower
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetWalkBackwardCower ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetWalkBackwardCower = NULL;

	if ( ! pFnSetWalkBackwardCower )
		pFnSetWalkBackwardCower = (UFunction*) UObject::GObjObjects()->Data[ 32923 ];

	ADESLightPawn_execSetWalkBackwardCower_Parms SetWalkBackwardCower_Parms;
	SetWalkBackwardCower_Parms.Active = Active;
	SetWalkBackwardCower_Parms.instant = instant;

	pFnSetWalkBackwardCower->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWalkBackwardCower, &SetWalkBackwardCower_Parms, NULL );

	pFnSetWalkBackwardCower->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetWalkBackward
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetWalkBackward ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetWalkBackward = NULL;

	if ( ! pFnSetWalkBackward )
		pFnSetWalkBackward = (UFunction*) UObject::GObjObjects()->Data[ 32920 ];

	ADESLightPawn_execSetWalkBackward_Parms SetWalkBackward_Parms;
	SetWalkBackward_Parms.Active = Active;
	SetWalkBackward_Parms.instant = instant;

	pFnSetWalkBackward->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWalkBackward, &SetWalkBackward_Parms, NULL );

	pFnSetWalkBackward->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetGenericReaction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetGenericReaction ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetGenericReaction = NULL;

	if ( ! pFnSetGenericReaction )
		pFnSetGenericReaction = (UFunction*) UObject::GObjObjects()->Data[ 32917 ];

	ADESLightPawn_execSetGenericReaction_Parms SetGenericReaction_Parms;
	SetGenericReaction_Parms.Active = Active;
	SetGenericReaction_Parms.instant = instant;

	pFnSetGenericReaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGenericReaction, &SetGenericReaction_Parms, NULL );

	pFnSetGenericReaction->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetCowerReaction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetCowerReaction ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetCowerReaction = NULL;

	if ( ! pFnSetCowerReaction )
		pFnSetCowerReaction = (UFunction*) UObject::GObjObjects()->Data[ 32914 ];

	ADESLightPawn_execSetCowerReaction_Parms SetCowerReaction_Parms;
	SetCowerReaction_Parms.Active = Active;
	SetCowerReaction_Parms.instant = instant;

	pFnSetCowerReaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCowerReaction, &SetCowerReaction_Parms, NULL );

	pFnSetCowerReaction->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetFleeReaction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetFleeReaction ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetFleeReaction = NULL;

	if ( ! pFnSetFleeReaction )
		pFnSetFleeReaction = (UFunction*) UObject::GObjObjects()->Data[ 32911 ];

	ADESLightPawn_execSetFleeReaction_Parms SetFleeReaction_Parms;
	SetFleeReaction_Parms.Active = Active;
	SetFleeReaction_Parms.instant = instant;

	pFnSetFleeReaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFleeReaction, &SetFleeReaction_Parms, NULL );

	pFnSetFleeReaction->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetFleeTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  Active                         ( CPF_Parm )

float ADESLightPawn::SetFleeTurn ( unsigned long Active )
{
	static UFunction* pFnSetFleeTurn = NULL;

	if ( ! pFnSetFleeTurn )
		pFnSetFleeTurn = (UFunction*) UObject::GObjObjects()->Data[ 32908 ];

	ADESLightPawn_execSetFleeTurn_Parms SetFleeTurn_Parms;
	SetFleeTurn_Parms.Active = Active;

	pFnSetFleeTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFleeTurn, &SetFleeTurn_Parms, NULL );

	pFnSetFleeTurn->FunctionFlags |= 0x400;

	return SetFleeTurn_Parms.ReturnValue;
};

// Function Grip.DESLightPawn.SetShoulderAvoid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  avoid                          ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetShoulderAvoid ( unsigned char avoid, unsigned long instant )
{
	static UFunction* pFnSetShoulderAvoid = NULL;

	if ( ! pFnSetShoulderAvoid )
		pFnSetShoulderAvoid = (UFunction*) UObject::GObjObjects()->Data[ 32905 ];

	ADESLightPawn_execSetShoulderAvoid_Parms SetShoulderAvoid_Parms;
	SetShoulderAvoid_Parms.avoid = avoid;
	SetShoulderAvoid_Parms.instant = instant;

	pFnSetShoulderAvoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetShoulderAvoid, &SetShoulderAvoid_Parms, NULL );

	pFnSetShoulderAvoid->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetVelocity
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  velAnim                        ( CPF_Parm )

void ADESLightPawn::SetVelocity ( unsigned char velAnim )
{
	static UFunction* pFnSetVelocity = NULL;

	if ( ! pFnSetVelocity )
		pFnSetVelocity = (UFunction*) UObject::GObjObjects()->Data[ 32903 ];

	ADESLightPawn_execSetVelocity_Parms SetVelocity_Parms;
	SetVelocity_Parms.velAnim = velAnim;

	pFnSetVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVelocity, &SetVelocity_Parms, NULL );

	pFnSetVelocity->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetShootAimTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Yaw                            ( CPF_Parm )
// float                          Pitch                          ( CPF_Parm )

bool ADESLightPawn::SetShootAimTarget ( float Yaw, float Pitch )
{
	static UFunction* pFnSetShootAimTarget = NULL;

	if ( ! pFnSetShootAimTarget )
		pFnSetShootAimTarget = (UFunction*) UObject::GObjObjects()->Data[ 32899 ];

	ADESLightPawn_execSetShootAimTarget_Parms SetShootAimTarget_Parms;
	SetShootAimTarget_Parms.Yaw = Yaw;
	SetShootAimTarget_Parms.Pitch = Pitch;

	pFnSetShootAimTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetShootAimTarget, &SetShootAimTarget_Parms, NULL );

	pFnSetShootAimTarget->FunctionFlags |= 0x400;

	return SetShootAimTarget_Parms.ReturnValue;
};

// Function Grip.DESLightPawn.SetShootAim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetShootAim ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetShootAim = NULL;

	if ( ! pFnSetShootAim )
		pFnSetShootAim = (UFunction*) UObject::GObjObjects()->Data[ 32896 ];

	ADESLightPawn_execSetShootAim_Parms SetShootAim_Parms;
	SetShootAim_Parms.Active = Active;
	SetShootAim_Parms.instant = instant;

	pFnSetShootAim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetShootAim, &SetShootAim_Parms, NULL );

	pFnSetShootAim->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetMuzzleFlash
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )

void ADESLightPawn::SetMuzzleFlash ( unsigned long Active )
{
	static UFunction* pFnSetMuzzleFlash = NULL;

	if ( ! pFnSetMuzzleFlash )
		pFnSetMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 32894 ];

	ADESLightPawn_execSetMuzzleFlash_Parms SetMuzzleFlash_Parms;
	SetMuzzleFlash_Parms.Active = Active;

	pFnSetMuzzleFlash->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMuzzleFlash, &SetMuzzleFlash_Parms, NULL );

	pFnSetMuzzleFlash->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetThrowDisc
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )

void ADESLightPawn::SetThrowDisc ( unsigned long Active )
{
	static UFunction* pFnSetThrowDisc = NULL;

	if ( ! pFnSetThrowDisc )
		pFnSetThrowDisc = (UFunction*) UObject::GObjObjects()->Data[ 32892 ];

	ADESLightPawn_execSetThrowDisc_Parms SetThrowDisc_Parms;
	SetThrowDisc_Parms.Active = Active;

	pFnSetThrowDisc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetThrowDisc, &SetThrowDisc_Parms, NULL );

	pFnSetThrowDisc->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetLookAtTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 Target                         ( CPF_Parm )

void ADESLightPawn::SetLookAtTarget ( struct FVector Target )
{
	static UFunction* pFnSetLookAtTarget = NULL;

	if ( ! pFnSetLookAtTarget )
		pFnSetLookAtTarget = (UFunction*) UObject::GObjObjects()->Data[ 32890 ];

	ADESLightPawn_execSetLookAtTarget_Parms SetLookAtTarget_Parms;
	memcpy ( &SetLookAtTarget_Parms.Target, &Target, 0xC );

	pFnSetLookAtTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLookAtTarget, &SetLookAtTarget_Parms, NULL );

	pFnSetLookAtTarget->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetGuardLookAt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetGuardLookAt ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetGuardLookAt = NULL;

	if ( ! pFnSetGuardLookAt )
		pFnSetGuardLookAt = (UFunction*) UObject::GObjObjects()->Data[ 32887 ];

	ADESLightPawn_execSetGuardLookAt_Parms SetGuardLookAt_Parms;
	SetGuardLookAt_Parms.Active = Active;
	SetGuardLookAt_Parms.instant = instant;

	pFnSetGuardLookAt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGuardLookAt, &SetGuardLookAt_Parms, NULL );

	pFnSetGuardLookAt->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.SetLookAt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void ADESLightPawn::SetLookAt ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetLookAt = NULL;

	if ( ! pFnSetLookAt )
		pFnSetLookAt = (UFunction*) UObject::GObjObjects()->Data[ 32884 ];

	ADESLightPawn_execSetLookAt_Parms SetLookAt_Parms;
	SetLookAt_Parms.Active = Active;
	SetLookAt_Parms.instant = instant;

	pFnSetLookAt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLookAt, &SetLookAt_Parms, NULL );

	pFnSetLookAt->FunctionFlags |= 0x400;
};

// Function Grip.DESLightPawn.ResetAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void ADESLightPawn::ResetAnim ( )
{
	static UFunction* pFnResetAnim = NULL;

	if ( ! pFnResetAnim )
		pFnResetAnim = (UFunction*) UObject::GObjObjects()->Data[ 32882 ];

	ADESLightPawn_execResetAnim_Parms ResetAnim_Parms;

	pFnResetAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetAnim, &ResetAnim_Parms, NULL );

	pFnResetAnim->FunctionFlags |= 0x400;
};

// Function Grip.DESSystem.SendDESReadyEvent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class USequence*               levelSequence                  ( CPF_Parm )

void ADESSystem::eventSendDESReadyEvent ( class USequence* levelSequence )
{
	static UFunction* pFnSendDESReadyEvent = NULL;

	if ( ! pFnSendDESReadyEvent )
		pFnSendDESReadyEvent = (UFunction*) UObject::GObjObjects()->Data[ 33099 ];

	ADESSystem_eventSendDESReadyEvent_Parms SendDESReadyEvent_Parms;
	SendDESReadyEvent_Parms.levelSequence = levelSequence;

	this->ProcessEvent ( pFnSendDESReadyEvent, &SendDESReadyEvent_Parms, NULL );
};

// Function Grip.MeatPuppet.SetActionStationTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  Active                         ( CPF_Parm )

float UMeatPuppet::SetActionStationTurn ( unsigned long Active )
{
	static UFunction* pFnSetActionStationTurn = NULL;

	if ( ! pFnSetActionStationTurn )
		pFnSetActionStationTurn = (UFunction*) UObject::GObjObjects()->Data[ 32879 ];

	UMeatPuppet_execSetActionStationTurn_Parms SetActionStationTurn_Parms;
	SetActionStationTurn_Parms.Active = Active;

	pFnSetActionStationTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActionStationTurn, &SetActionStationTurn_Parms, NULL );

	pFnSetActionStationTurn->FunctionFlags |= 0x400;

	return SetActionStationTurn_Parms.ReturnValue;
};

// Function Grip.MeatPuppet.StopCustomAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          blendOut                       ( CPF_Parm )

void UMeatPuppet::StopCustomAnim ( float blendOut )
{
	static UFunction* pFnStopCustomAnim = NULL;

	if ( ! pFnStopCustomAnim )
		pFnStopCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 32877 ];

	UMeatPuppet_execStopCustomAnim_Parms StopCustomAnim_Parms;
	StopCustomAnim_Parms.blendOut = blendOut;

	pFnStopCustomAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopCustomAnim, &StopCustomAnim_Parms, NULL );

	pFnStopCustomAnim->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.PlayCustomAnim
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   NodeName                       ( CPF_Parm )
// float                          blendIn                        ( CPF_Parm )
// float                          blendOut                       ( CPF_Parm )
// unsigned long                  loop                           ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverride                      ( CPF_OptionalParm | CPF_Parm )

float UMeatPuppet::PlayCustomAnim ( struct FName NodeName, float blendIn, float blendOut, unsigned long loop, unsigned long bOverride )
{
	static UFunction* pFnPlayCustomAnim = NULL;

	if ( ! pFnPlayCustomAnim )
		pFnPlayCustomAnim = (UFunction*) UObject::GObjObjects()->Data[ 32870 ];

	UMeatPuppet_execPlayCustomAnim_Parms PlayCustomAnim_Parms;
	memcpy ( &PlayCustomAnim_Parms.NodeName, &NodeName, 0x8 );
	PlayCustomAnim_Parms.blendIn = blendIn;
	PlayCustomAnim_Parms.blendOut = blendOut;
	PlayCustomAnim_Parms.loop = loop;
	PlayCustomAnim_Parms.bOverride = bOverride;

	pFnPlayCustomAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayCustomAnim, &PlayCustomAnim_Parms, NULL );

	pFnPlayCustomAnim->FunctionFlags |= 0x400;

	return PlayCustomAnim_Parms.ReturnValue;
};

// Function Grip.MeatPuppet.SetActionStation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetActionStation ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetActionStation = NULL;

	if ( ! pFnSetActionStation )
		pFnSetActionStation = (UFunction*) UObject::GObjObjects()->Data[ 32867 ];

	UMeatPuppet_execSetActionStation_Parms SetActionStation_Parms;
	SetActionStation_Parms.Active = Active;
	SetActionStation_Parms.instant = instant;

	pFnSetActionStation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActionStation, &SetActionStation_Parms, NULL );

	pFnSetActionStation->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetWalkBackwardCower
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetWalkBackwardCower ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetWalkBackwardCower = NULL;

	if ( ! pFnSetWalkBackwardCower )
		pFnSetWalkBackwardCower = (UFunction*) UObject::GObjObjects()->Data[ 32864 ];

	UMeatPuppet_execSetWalkBackwardCower_Parms SetWalkBackwardCower_Parms;
	SetWalkBackwardCower_Parms.Active = Active;
	SetWalkBackwardCower_Parms.instant = instant;

	pFnSetWalkBackwardCower->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWalkBackwardCower, &SetWalkBackwardCower_Parms, NULL );

	pFnSetWalkBackwardCower->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetWalkBackward
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetWalkBackward ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetWalkBackward = NULL;

	if ( ! pFnSetWalkBackward )
		pFnSetWalkBackward = (UFunction*) UObject::GObjObjects()->Data[ 32861 ];

	UMeatPuppet_execSetWalkBackward_Parms SetWalkBackward_Parms;
	SetWalkBackward_Parms.Active = Active;
	SetWalkBackward_Parms.instant = instant;

	pFnSetWalkBackward->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWalkBackward, &SetWalkBackward_Parms, NULL );

	pFnSetWalkBackward->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetGenericReaction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetGenericReaction ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetGenericReaction = NULL;

	if ( ! pFnSetGenericReaction )
		pFnSetGenericReaction = (UFunction*) UObject::GObjObjects()->Data[ 32858 ];

	UMeatPuppet_execSetGenericReaction_Parms SetGenericReaction_Parms;
	SetGenericReaction_Parms.Active = Active;
	SetGenericReaction_Parms.instant = instant;

	pFnSetGenericReaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGenericReaction, &SetGenericReaction_Parms, NULL );

	pFnSetGenericReaction->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetCowerReaction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetCowerReaction ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetCowerReaction = NULL;

	if ( ! pFnSetCowerReaction )
		pFnSetCowerReaction = (UFunction*) UObject::GObjObjects()->Data[ 32855 ];

	UMeatPuppet_execSetCowerReaction_Parms SetCowerReaction_Parms;
	SetCowerReaction_Parms.Active = Active;
	SetCowerReaction_Parms.instant = instant;

	pFnSetCowerReaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCowerReaction, &SetCowerReaction_Parms, NULL );

	pFnSetCowerReaction->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetFleeReaction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetFleeReaction ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetFleeReaction = NULL;

	if ( ! pFnSetFleeReaction )
		pFnSetFleeReaction = (UFunction*) UObject::GObjObjects()->Data[ 32852 ];

	UMeatPuppet_execSetFleeReaction_Parms SetFleeReaction_Parms;
	SetFleeReaction_Parms.Active = Active;
	SetFleeReaction_Parms.instant = instant;

	pFnSetFleeReaction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFleeReaction, &SetFleeReaction_Parms, NULL );

	pFnSetFleeReaction->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetFleeTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  Active                         ( CPF_Parm )

float UMeatPuppet::SetFleeTurn ( unsigned long Active )
{
	static UFunction* pFnSetFleeTurn = NULL;

	if ( ! pFnSetFleeTurn )
		pFnSetFleeTurn = (UFunction*) UObject::GObjObjects()->Data[ 32849 ];

	UMeatPuppet_execSetFleeTurn_Parms SetFleeTurn_Parms;
	SetFleeTurn_Parms.Active = Active;

	pFnSetFleeTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFleeTurn, &SetFleeTurn_Parms, NULL );

	pFnSetFleeTurn->FunctionFlags |= 0x400;

	return SetFleeTurn_Parms.ReturnValue;
};

// Function Grip.MeatPuppet.SetShoulderAvoid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  avoid                          ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetShoulderAvoid ( unsigned char avoid, unsigned long instant )
{
	static UFunction* pFnSetShoulderAvoid = NULL;

	if ( ! pFnSetShoulderAvoid )
		pFnSetShoulderAvoid = (UFunction*) UObject::GObjObjects()->Data[ 32846 ];

	UMeatPuppet_execSetShoulderAvoid_Parms SetShoulderAvoid_Parms;
	SetShoulderAvoid_Parms.avoid = avoid;
	SetShoulderAvoid_Parms.instant = instant;

	pFnSetShoulderAvoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetShoulderAvoid, &SetShoulderAvoid_Parms, NULL );

	pFnSetShoulderAvoid->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetVelocity
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  velAnim                        ( CPF_Parm )

void UMeatPuppet::SetVelocity ( unsigned char velAnim )
{
	static UFunction* pFnSetVelocity = NULL;

	if ( ! pFnSetVelocity )
		pFnSetVelocity = (UFunction*) UObject::GObjObjects()->Data[ 32844 ];

	UMeatPuppet_execSetVelocity_Parms SetVelocity_Parms;
	SetVelocity_Parms.velAnim = velAnim;

	pFnSetVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVelocity, &SetVelocity_Parms, NULL );

	pFnSetVelocity->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetShootAimTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Yaw                            ( CPF_Parm )
// float                          Pitch                          ( CPF_Parm )

bool UMeatPuppet::SetShootAimTarget ( float Yaw, float Pitch )
{
	static UFunction* pFnSetShootAimTarget = NULL;

	if ( ! pFnSetShootAimTarget )
		pFnSetShootAimTarget = (UFunction*) UObject::GObjObjects()->Data[ 32840 ];

	UMeatPuppet_execSetShootAimTarget_Parms SetShootAimTarget_Parms;
	SetShootAimTarget_Parms.Yaw = Yaw;
	SetShootAimTarget_Parms.Pitch = Pitch;

	pFnSetShootAimTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetShootAimTarget, &SetShootAimTarget_Parms, NULL );

	pFnSetShootAimTarget->FunctionFlags |= 0x400;

	return SetShootAimTarget_Parms.ReturnValue;
};

// Function Grip.MeatPuppet.SetThrowDisc
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )

void UMeatPuppet::SetThrowDisc ( unsigned long Active )
{
	static UFunction* pFnSetThrowDisc = NULL;

	if ( ! pFnSetThrowDisc )
		pFnSetThrowDisc = (UFunction*) UObject::GObjObjects()->Data[ 32838 ];

	UMeatPuppet_execSetThrowDisc_Parms SetThrowDisc_Parms;
	SetThrowDisc_Parms.Active = Active;

	pFnSetThrowDisc->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetThrowDisc, &SetThrowDisc_Parms, NULL );

	pFnSetThrowDisc->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetShootAim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetShootAim ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetShootAim = NULL;

	if ( ! pFnSetShootAim )
		pFnSetShootAim = (UFunction*) UObject::GObjObjects()->Data[ 32835 ];

	UMeatPuppet_execSetShootAim_Parms SetShootAim_Parms;
	SetShootAim_Parms.Active = Active;
	SetShootAim_Parms.instant = instant;

	pFnSetShootAim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetShootAim, &SetShootAim_Parms, NULL );

	pFnSetShootAim->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetMuzzleFlash
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )

void UMeatPuppet::SetMuzzleFlash ( unsigned long Active )
{
	static UFunction* pFnSetMuzzleFlash = NULL;

	if ( ! pFnSetMuzzleFlash )
		pFnSetMuzzleFlash = (UFunction*) UObject::GObjObjects()->Data[ 32833 ];

	UMeatPuppet_execSetMuzzleFlash_Parms SetMuzzleFlash_Parms;
	SetMuzzleFlash_Parms.Active = Active;

	pFnSetMuzzleFlash->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMuzzleFlash, &SetMuzzleFlash_Parms, NULL );

	pFnSetMuzzleFlash->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetLookAtTarget
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 Target                         ( CPF_Parm )

void UMeatPuppet::SetLookAtTarget ( struct FVector Target )
{
	static UFunction* pFnSetLookAtTarget = NULL;

	if ( ! pFnSetLookAtTarget )
		pFnSetLookAtTarget = (UFunction*) UObject::GObjObjects()->Data[ 32831 ];

	UMeatPuppet_execSetLookAtTarget_Parms SetLookAtTarget_Parms;
	memcpy ( &SetLookAtTarget_Parms.Target, &Target, 0xC );

	pFnSetLookAtTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLookAtTarget, &SetLookAtTarget_Parms, NULL );

	pFnSetLookAtTarget->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetGuardLookAt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetGuardLookAt ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetGuardLookAt = NULL;

	if ( ! pFnSetGuardLookAt )
		pFnSetGuardLookAt = (UFunction*) UObject::GObjObjects()->Data[ 32828 ];

	UMeatPuppet_execSetGuardLookAt_Parms SetGuardLookAt_Parms;
	SetGuardLookAt_Parms.Active = Active;
	SetGuardLookAt_Parms.instant = instant;

	pFnSetGuardLookAt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGuardLookAt, &SetGuardLookAt_Parms, NULL );

	pFnSetGuardLookAt->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.SetLookAt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// unsigned long                  instant                        ( CPF_Parm )

void UMeatPuppet::SetLookAt ( unsigned long Active, unsigned long instant )
{
	static UFunction* pFnSetLookAt = NULL;

	if ( ! pFnSetLookAt )
		pFnSetLookAt = (UFunction*) UObject::GObjObjects()->Data[ 32825 ];

	UMeatPuppet_execSetLookAt_Parms SetLookAt_Parms;
	SetLookAt_Parms.Active = Active;
	SetLookAt_Parms.instant = instant;

	pFnSetLookAt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLookAt, &SetLookAt_Parms, NULL );

	pFnSetLookAt->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.ResetAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeatPuppet::ResetAnim ( )
{
	static UFunction* pFnResetAnim = NULL;

	if ( ! pFnResetAnim )
		pFnResetAnim = (UFunction*) UObject::GObjObjects()->Data[ 32824 ];

	UMeatPuppet_execResetAnim_Parms ResetAnim_Parms;

	pFnResetAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetAnim, &ResetAnim_Parms, NULL );

	pFnResetAnim->FunctionFlags |= 0x400;
};

// Function Grip.MeatPuppet.ThrowDiscFct
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 AimDir                         ( CPF_Parm )

void UMeatPuppet::eventThrowDiscFct ( struct FVector AimDir )
{
	static UFunction* pFnThrowDiscFct = NULL;

	if ( ! pFnThrowDiscFct )
		pFnThrowDiscFct = (UFunction*) UObject::GObjObjects()->Data[ 32822 ];

	UMeatPuppet_eventThrowDiscFct_Parms ThrowDiscFct_Parms;
	memcpy ( &ThrowDiscFct_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnThrowDiscFct, &ThrowDiscFct_Parms, NULL );
};

// Function Grip.MeatPuppet.SetDiscTarget
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 AimDir                         ( CPF_Parm )

void UMeatPuppet::eventSetDiscTarget ( struct FVector AimDir )
{
	static UFunction* pFnSetDiscTarget = NULL;

	if ( ! pFnSetDiscTarget )
		pFnSetDiscTarget = (UFunction*) UObject::GObjObjects()->Data[ 32820 ];

	UMeatPuppet_eventSetDiscTarget_Parms SetDiscTarget_Parms;
	memcpy ( &SetDiscTarget_Parms.AimDir, &AimDir, 0xC );

	this->ProcessEvent ( pFnSetDiscTarget, &SetDiscTarget_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif