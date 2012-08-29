/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlanBFramework_functions.h
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

// Function PlanBFramework.PBBaseFlock.HearNoise
// [0x00024900] ( FUNC_Event )
// Parameters infos:
// float                          Loudness                       ( CPF_Parm )
// class AActor*                  NoiseMaker                     ( CPF_Parm )
// struct FName                   NoiseType                      ( CPF_OptionalParm | CPF_Parm )

void APBBaseFlock::eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType )
{
	static UFunction* pFnHearNoise = NULL;

	if ( ! pFnHearNoise )
		pFnHearNoise = (UFunction*) UObject::GObjObjects()->Data[ 36666 ];

	APBBaseFlock_eventHearNoise_Parms HearNoise_Parms;
	HearNoise_Parms.Loudness = Loudness;
	HearNoise_Parms.NoiseMaker = NoiseMaker;
	memcpy ( &HearNoise_Parms.NoiseType, &NoiseType, 0x8 );

	this->ProcessEvent ( pFnHearNoise, &HearNoise_Parms, NULL );
};

// Function PlanBFramework.PBBaseGameReplicationInfo.SetNoStreamWorldTextureForFrames
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            NumFrames                      ( CPF_Parm )

void APBBaseGameReplicationInfo::SetNoStreamWorldTextureForFrames ( int NumFrames )
{
	static UFunction* pFnSetNoStreamWorldTextureForFrames = NULL;

	if ( ! pFnSetNoStreamWorldTextureForFrames )
		pFnSetNoStreamWorldTextureForFrames = (UFunction*) UObject::GObjObjects()->Data[ 36674 ];

	APBBaseGameReplicationInfo_execSetNoStreamWorldTextureForFrames_Parms SetNoStreamWorldTextureForFrames_Parms;
	SetNoStreamWorldTextureForFrames_Parms.NumFrames = NumFrames;

	pFnSetNoStreamWorldTextureForFrames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNoStreamWorldTextureForFrames, &SetNoStreamWorldTextureForFrames_Parms, NULL );

	pFnSetNoStreamWorldTextureForFrames->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBBaseGameReplicationInfo.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void APBBaseGameReplicationInfo::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36672 ];

	APBBaseGameReplicationInfo_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.IsFullBodyAnimPlaying
// [0x00020100] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::IsFullBodyAnimPlaying ( )
{
	static UFunction* pFnIsFullBodyAnimPlaying = NULL;

	if ( ! pFnIsFullBodyAnimPlaying )
		pFnIsFullBodyAnimPlaying = (UFunction*) UObject::GObjObjects()->Data[ 36951 ];

	APBBasePawn_execIsFullBodyAnimPlaying_Parms IsFullBodyAnimPlaying_Parms;

	this->ProcessEvent ( pFnIsFullBodyAnimPlaying, &IsFullBodyAnimPlaying_Parms, NULL );

	return IsFullBodyAnimPlaying_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.PlayFullBodyAnim
// [0x00024100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   AnimName                       ( CPF_Parm )
// unsigned long                  Cycle                          ( CPF_OptionalParm | CPF_Parm )
// float                          AnimRate                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bPauseAtEnd                    ( CPF_OptionalParm | CPF_Parm )

float APBBasePawn::PlayFullBodyAnim ( struct FName AnimName, unsigned long Cycle, float AnimRate, unsigned long bPauseAtEnd )
{
	static UFunction* pFnPlayFullBodyAnim = NULL;

	if ( ! pFnPlayFullBodyAnim )
		pFnPlayFullBodyAnim = (UFunction*) UObject::GObjObjects()->Data[ 36945 ];

	APBBasePawn_execPlayFullBodyAnim_Parms PlayFullBodyAnim_Parms;
	memcpy ( &PlayFullBodyAnim_Parms.AnimName, &AnimName, 0x8 );
	PlayFullBodyAnim_Parms.Cycle = Cycle;
	PlayFullBodyAnim_Parms.AnimRate = AnimRate;
	PlayFullBodyAnim_Parms.bPauseAtEnd = bPauseAtEnd;

	this->ProcessEvent ( pFnPlayFullBodyAnim, &PlayFullBodyAnim_Parms, NULL );

	return PlayFullBodyAnim_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.PlayFullRagDoll
// [0x00020100] 
// Parameters infos:

void APBBasePawn::PlayFullRagDoll ( )
{
	static UFunction* pFnPlayFullRagDoll = NULL;

	if ( ! pFnPlayFullRagDoll )
		pFnPlayFullRagDoll = (UFunction*) UObject::GObjObjects()->Data[ 36944 ];

	APBBasePawn_execPlayFullRagDoll_Parms PlayFullRagDoll_Parms;

	this->ProcessEvent ( pFnPlayFullRagDoll, &PlayFullRagDoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     HitComponent                   ( CPF_Parm | CPF_EditInline )
// class UPrimitiveComponent*     OtherComponent                 ( CPF_Parm | CPF_EditInline )
// int                            ContactIndex                   ( CPF_Parm )
// struct FCollisionImpactData    RigidCollisionData             ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APBBasePawn::eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData )
{
	static UFunction* pFnRigidBodyCollision = NULL;

	if ( ! pFnRigidBodyCollision )
		pFnRigidBodyCollision = (UFunction*) UObject::GObjObjects()->Data[ 36923 ];

	APBBasePawn_eventRigidBodyCollision_Parms RigidBodyCollision_Parms;
	RigidBodyCollision_Parms.HitComponent = HitComponent;
	RigidBodyCollision_Parms.OtherComponent = OtherComponent;
	RigidBodyCollision_Parms.ContactIndex = ContactIndex;

	this->ProcessEvent ( pFnRigidBodyCollision, &RigidBodyCollision_Parms, NULL );

	if ( RigidCollisionData )
		memcpy ( RigidCollisionData, &RigidBodyCollision_Parms.RigidCollisionData, 0x24 );
};

// Function PlanBFramework.PBBasePawn.OnTimer_SwitchOffMotors
// [0x00020100] 
// Parameters infos:

void APBBasePawn::OnTimer_SwitchOffMotors ( )
{
	static UFunction* pFnOnTimer_SwitchOffMotors = NULL;

	if ( ! pFnOnTimer_SwitchOffMotors )
		pFnOnTimer_SwitchOffMotors = (UFunction*) UObject::GObjObjects()->Data[ 36922 ];

	APBBasePawn_execOnTimer_SwitchOffMotors_Parms OnTimer_SwitchOffMotors_Parms;

	this->ProcessEvent ( pFnOnTimer_SwitchOffMotors, &OnTimer_SwitchOffMotors_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.OnPhysicsChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  oldPhysics                     ( CPF_Parm )

void APBBasePawn::eventOnPhysicsChanged ( unsigned char oldPhysics )
{
	static UFunction* pFnOnPhysicsChanged = NULL;

	if ( ! pFnOnPhysicsChanged )
		pFnOnPhysicsChanged = (UFunction*) UObject::GObjObjects()->Data[ 36920 ];

	APBBasePawn_eventOnPhysicsChanged_Parms OnPhysicsChanged_Parms;
	OnPhysicsChanged_Parms.oldPhysics = oldPhysics;

	this->ProcessEvent ( pFnOnPhysicsChanged, &OnPhysicsChanged_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.IsUpperBoneName
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InName                         ( CPF_Parm )

bool APBBasePawn::IsUpperBoneName ( struct FName InName )
{
	static UFunction* pFnIsUpperBoneName = NULL;

	if ( ! pFnIsUpperBoneName )
		pFnIsUpperBoneName = (UFunction*) UObject::GObjObjects()->Data[ 36912 ];

	APBBasePawn_execIsUpperBoneName_Parms IsUpperBoneName_Parms;
	memcpy ( &IsUpperBoneName_Parms.InName, &InName, 0x8 );

	this->ProcessEvent ( pFnIsUpperBoneName, &IsUpperBoneName_Parms, NULL );

	return IsUpperBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.IsLowerBoneName
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InName                         ( CPF_Parm )

bool APBBasePawn::IsLowerBoneName ( struct FName InName )
{
	static UFunction* pFnIsLowerBoneName = NULL;

	if ( ! pFnIsLowerBoneName )
		pFnIsLowerBoneName = (UFunction*) UObject::GObjObjects()->Data[ 36906 ];

	APBBasePawn_execIsLowerBoneName_Parms IsLowerBoneName_Parms;
	memcpy ( &IsLowerBoneName_Parms.InName, &InName, 0x8 );

	this->ProcessEvent ( pFnIsLowerBoneName, &IsLowerBoneName_Parms, NULL );

	return IsLowerBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.SetUpperBonesFixed
// [0x00020102] 
// Parameters infos:
// unsigned long                  bFixed                         ( CPF_Parm )

void APBBasePawn::SetUpperBonesFixed ( unsigned long bFixed )
{
	static UFunction* pFnSetUpperBonesFixed = NULL;

	if ( ! pFnSetUpperBonesFixed )
		pFnSetUpperBonesFixed = (UFunction*) UObject::GObjObjects()->Data[ 36907 ];

	APBBasePawn_execSetUpperBonesFixed_Parms SetUpperBonesFixed_Parms;
	SetUpperBonesFixed_Parms.bFixed = bFixed;

	this->ProcessEvent ( pFnSetUpperBonesFixed, &SetUpperBonesFixed_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.SetLowerBonesFixed
// [0x00020102] 
// Parameters infos:
// unsigned long                  bFixed                         ( CPF_Parm )

void APBBasePawn::SetLowerBonesFixed ( unsigned long bFixed )
{
	static UFunction* pFnSetLowerBonesFixed = NULL;

	if ( ! pFnSetLowerBonesFixed )
		pFnSetLowerBonesFixed = (UFunction*) UObject::GObjObjects()->Data[ 36901 ];

	APBBasePawn_execSetLowerBonesFixed_Parms SetLowerBonesFixed_Parms;
	SetLowerBonesFixed_Parms.bFixed = bFixed;

	this->ProcessEvent ( pFnSetLowerBonesFixed, &SetLowerBonesFixed_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.SetAllBonesFixed
// [0x00020102] 
// Parameters infos:
// unsigned long                  bFixed                         ( CPF_Parm )

void APBBasePawn::SetAllBonesFixed ( unsigned long bFixed )
{
	static UFunction* pFnSetAllBonesFixed = NULL;

	if ( ! pFnSetAllBonesFixed )
		pFnSetAllBonesFixed = (UFunction*) UObject::GObjObjects()->Data[ 36897 ];

	APBBasePawn_execSetAllBonesFixed_Parms SetAllBonesFixed_Parms;
	SetAllBonesFixed_Parms.bFixed = bFixed;

	this->ProcessEvent ( pFnSetAllBonesFixed, &SetAllBonesFixed_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.HasFixedBones
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::HasFixedBones ( )
{
	static UFunction* pFnHasFixedBones = NULL;

	if ( ! pFnHasFixedBones )
		pFnHasFixedBones = (UFunction*) UObject::GObjObjects()->Data[ 36892 ];

	APBBasePawn_execHasFixedBones_Parms HasFixedBones_Parms;

	this->ProcessEvent ( pFnHasFixedBones, &HasFixedBones_Parms, NULL );

	return HasFixedBones_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.TerminateCustomRagdoll
// [0x00020102] 
// Parameters infos:

void APBBasePawn::TerminateCustomRagdoll ( )
{
	static UFunction* pFnTerminateCustomRagdoll = NULL;

	if ( ! pFnTerminateCustomRagdoll )
		pFnTerminateCustomRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 36891 ];

	APBBasePawn_execTerminateCustomRagdoll_Parms TerminateCustomRagdoll_Parms;

	this->ProcessEvent ( pFnTerminateCustomRagdoll, &TerminateCustomRagdoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.InitCustomRagdoll
// [0x00020100] 
// Parameters infos:
// unsigned char                  targetPhysics                  ( CPF_Parm )

void APBBasePawn::InitCustomRagdoll ( unsigned char targetPhysics )
{
	static UFunction* pFnInitCustomRagdoll = NULL;

	if ( ! pFnInitCustomRagdoll )
		pFnInitCustomRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 36889 ];

	APBBasePawn_execInitCustomRagdoll_Parms InitCustomRagdoll_Parms;
	InitCustomRagdoll_Parms.targetPhysics = targetPhysics;

	this->ProcessEvent ( pFnInitCustomRagdoll, &InitCustomRagdoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.TerminateRagdoll
// [0x00020103] ( FUNC_Final )
// Parameters infos:

void APBBasePawn::TerminateRagdoll ( )
{
	static UFunction* pFnTerminateRagdoll = NULL;

	if ( ! pFnTerminateRagdoll )
		pFnTerminateRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 36888 ];

	APBBasePawn_execTerminateRagdoll_Parms TerminateRagdoll_Parms;

	this->ProcessEvent ( pFnTerminateRagdoll, &TerminateRagdoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.IsNetworkAuthorityPawn
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::IsNetworkAuthorityPawn ( )
{
	static UFunction* pFnIsNetworkAuthorityPawn = NULL;

	if ( ! pFnIsNetworkAuthorityPawn )
		pFnIsNetworkAuthorityPawn = (UFunction*) UObject::GObjObjects()->Data[ 36885 ];

	APBBasePawn_execIsNetworkAuthorityPawn_Parms IsNetworkAuthorityPawn_Parms;

	this->ProcessEvent ( pFnIsNetworkAuthorityPawn, &IsNetworkAuthorityPawn_Parms, NULL );

	return IsNetworkAuthorityPawn_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.CanRender
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::CanRender ( )
{
	static UFunction* pFnCanRender = NULL;

	if ( ! pFnCanRender )
		pFnCanRender = (UFunction*) UObject::GObjObjects()->Data[ 36882 ];

	APBBasePawn_execCanRender_Parms CanRender_Parms;

	this->ProcessEvent ( pFnCanRender, &CanRender_Parms, NULL );

	return CanRender_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.RecoverFromRagdoll
// [0x00020102] 
// Parameters infos:

void APBBasePawn::RecoverFromRagdoll ( )
{
	static UFunction* pFnRecoverFromRagdoll = NULL;

	if ( ! pFnRecoverFromRagdoll )
		pFnRecoverFromRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 36880 ];

	APBBasePawn_execRecoverFromRagdoll_Parms RecoverFromRagdoll_Parms;

	this->ProcessEvent ( pFnRecoverFromRagdoll, &RecoverFromRagdoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.TakeHitBlendedOut
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APBBasePawn::eventTakeHitBlendedOut ( )
{
	static UFunction* pFnTakeHitBlendedOut = NULL;

	if ( ! pFnTakeHitBlendedOut )
		pFnTakeHitBlendedOut = (UFunction*) UObject::GObjObjects()->Data[ 36879 ];

	APBBasePawn_eventTakeHitBlendedOut_Parms TakeHitBlendedOut_Parms;

	this->ProcessEvent ( pFnTakeHitBlendedOut, &TakeHitBlendedOut_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.PlayTakeHitEffects
// [0x00020102] 
// Parameters infos:

void APBBasePawn::PlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 36876 ];

	APBBasePawn_execPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.PlayHit
// [0x00024002] 
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void APBBasePawn::PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnPlayHit = NULL;

	if ( ! pFnPlayHit )
		pFnPlayHit = (UFunction*) UObject::GObjObjects()->Data[ 36864 ];

	APBBasePawn_execPlayHit_Parms PlayHit_Parms;
	PlayHit_Parms.Damage = Damage;
	PlayHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &PlayHit_Parms.HitLocation, &HitLocation, 0xC );
	PlayHit_Parms.DamageType = DamageType;
	memcpy ( &PlayHit_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayHit_Parms.HitInfo, &HitInfo, 0x1C );
	PlayHit_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnPlayHit, &PlayHit_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.OnVirtualPhysicsWeightChanged
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void APBBasePawn::eventOnVirtualPhysicsWeightChanged ( )
{
	static UFunction* pFnOnVirtualPhysicsWeightChanged = NULL;

	if ( ! pFnOnVirtualPhysicsWeightChanged )
		pFnOnVirtualPhysicsWeightChanged = (UFunction*) UObject::GObjObjects()->Data[ 36863 ];

	APBBasePawn_eventOnVirtualPhysicsWeightChanged_Parms OnVirtualPhysicsWeightChanged_Parms;

	this->ProcessEvent ( pFnOnVirtualPhysicsWeightChanged, &OnVirtualPhysicsWeightChanged_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.OnPhysicsWeightChanged
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APBBasePawn::eventOnPhysicsWeightChanged ( )
{
	static UFunction* pFnOnPhysicsWeightChanged = NULL;

	if ( ! pFnOnPhysicsWeightChanged )
		pFnOnPhysicsWeightChanged = (UFunction*) UObject::GObjObjects()->Data[ 36862 ];

	APBBasePawn_eventOnPhysicsWeightChanged_Parms OnPhysicsWeightChanged_Parms;

	this->ProcessEvent ( pFnOnPhysicsWeightChanged, &OnPhysicsWeightChanged_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.OnPawnCommand
// [0x00022002] 
// Parameters infos:
// class APBBasePlayerController* playerCtrl                     ( CPF_Parm )
// struct FString                 strCommand                     ( CPF_Parm | CPF_NeedCtorLink )

void APBBasePawn::OnPawnCommand ( class APBBasePlayerController* playerCtrl, struct FString strCommand )
{
	static UFunction* pFnOnPawnCommand = NULL;

	if ( ! pFnOnPawnCommand )
		pFnOnPawnCommand = (UFunction*) UObject::GObjObjects()->Data[ 36857 ];

	APBBasePawn_execOnPawnCommand_Parms OnPawnCommand_Parms;
	OnPawnCommand_Parms.playerCtrl = playerCtrl;
	memcpy ( &OnPawnCommand_Parms.strCommand, &strCommand, 0xC );

	this->ProcessEvent ( pFnOnPawnCommand, &OnPawnCommand_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.OnBlendRagdollChildAnimEnd
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned char                  eChild                         ( CPF_Parm )

void APBBasePawn::eventOnBlendRagdollChildAnimEnd ( unsigned char eChild )
{
	static UFunction* pFnOnBlendRagdollChildAnimEnd = NULL;

	if ( ! pFnOnBlendRagdollChildAnimEnd )
		pFnOnBlendRagdollChildAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 36855 ];

	APBBasePawn_eventOnBlendRagdollChildAnimEnd_Parms OnBlendRagdollChildAnimEnd_Parms;
	OnBlendRagdollChildAnimEnd_Parms.eChild = eChild;

	this->ProcessEvent ( pFnOnBlendRagdollChildAnimEnd, &OnBlendRagdollChildAnimEnd_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.ServerSlideDown
// [0x002200C2] 
// Parameters infos:
// unsigned long                  bSlide                         ( CPF_Parm )

void APBBasePawn::ServerSlideDown ( unsigned long bSlide )
{
	static UFunction* pFnServerSlideDown = NULL;

	if ( ! pFnServerSlideDown )
		pFnServerSlideDown = (UFunction*) UObject::GObjObjects()->Data[ 36853 ];

	APBBasePawn_execServerSlideDown_Parms ServerSlideDown_Parms;
	ServerSlideDown_Parms.bSlide = bSlide;

	this->ProcessEvent ( pFnServerSlideDown, &ServerSlideDown_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.OnDuck
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// unsigned long                  bDucked                        ( CPF_Parm )

void APBBasePawn::OnDuck ( unsigned long bDucked )
{
	static UFunction* pFnOnDuck = NULL;

	if ( ! pFnOnDuck )
		pFnOnDuck = (UFunction*) UObject::GObjObjects()->Data[ 36851 ];

	APBBasePawn_execOnDuck_Parms OnDuck_Parms;
	OnDuck_Parms.bDucked = bDucked;

	this->ProcessEvent ( pFnOnDuck, &OnDuck_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.TeleportToSpot
// [0x00020102] 
// Parameters infos:
// class ANavigationPoint*        Spot                           ( CPF_Parm )
// unsigned long                  bUpdateRotation                ( CPF_Parm )

void APBBasePawn::TeleportToSpot ( class ANavigationPoint* Spot, unsigned long bUpdateRotation )
{
	static UFunction* pFnTeleportToSpot = NULL;

	if ( ! pFnTeleportToSpot )
		pFnTeleportToSpot = (UFunction*) UObject::GObjObjects()->Data[ 36848 ];

	APBBasePawn_execTeleportToSpot_Parms TeleportToSpot_Parms;
	TeleportToSpot_Parms.Spot = Spot;
	TeleportToSpot_Parms.bUpdateRotation = bUpdateRotation;

	this->ProcessEvent ( pFnTeleportToSpot, &TeleportToSpot_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.StopWeaponFiring
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::StopWeaponFiring ( )
{
	static UFunction* pFnStopWeaponFiring = NULL;

	if ( ! pFnStopWeaponFiring )
		pFnStopWeaponFiring = (UFunction*) UObject::GObjObjects()->Data[ 36846 ];

	APBBasePawn_execStopWeaponFiring_Parms StopWeaponFiring_Parms;

	this->ProcessEvent ( pFnStopWeaponFiring, &StopWeaponFiring_Parms, NULL );

	return StopWeaponFiring_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.PostRenderFor
// [0x00020100] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void APBBasePawn::PostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 36841 ];

	APBBasePawn_execPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.GetLowerBoneNames
// [0x00420102] 
// Parameters infos:
// TArray< struct FName >         lowerBodyBoneNames             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APBBasePawn::GetLowerBoneNames ( TArray< struct FName >* lowerBodyBoneNames )
{
	static UFunction* pFnGetLowerBoneNames = NULL;

	if ( ! pFnGetLowerBoneNames )
		pFnGetLowerBoneNames = (UFunction*) UObject::GObjObjects()->Data[ 36837 ];

	APBBasePawn_execGetLowerBoneNames_Parms GetLowerBoneNames_Parms;

	this->ProcessEvent ( pFnGetLowerBoneNames, &GetLowerBoneNames_Parms, NULL );

	if ( lowerBodyBoneNames )
		memcpy ( lowerBodyBoneNames, &GetLowerBoneNames_Parms.lowerBodyBoneNames, 0xC );
};

// Function PlanBFramework.PBBasePawn.IsFirstPerson
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::IsFirstPerson ( )
{
	static UFunction* pFnIsFirstPerson = NULL;

	if ( ! pFnIsFirstPerson )
		pFnIsFirstPerson = (UFunction*) UObject::GObjObjects()->Data[ 36832 ];

	APBBasePawn_execIsFirstPerson_Parms IsFirstPerson_Parms;

	this->ProcessEvent ( pFnIsFirstPerson, &IsFirstPerson_Parms, NULL );

	return IsFirstPerson_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.GetHeadLocAndRot
// [0x00C20103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 HeadLoc                        ( CPF_Parm | CPF_OutParm )
// struct FRotator                headRot                        ( CPF_Parm | CPF_OutParm )

bool APBBasePawn::GetHeadLocAndRot ( struct FVector* HeadLoc, struct FRotator* headRot )
{
	static UFunction* pFnGetHeadLocAndRot = NULL;

	if ( ! pFnGetHeadLocAndRot )
		pFnGetHeadLocAndRot = (UFunction*) UObject::GObjObjects()->Data[ 36826 ];

	APBBasePawn_execGetHeadLocAndRot_Parms GetHeadLocAndRot_Parms;

	this->ProcessEvent ( pFnGetHeadLocAndRot, &GetHeadLocAndRot_Parms, NULL );

	if ( HeadLoc )
		memcpy ( HeadLoc, &GetHeadLocAndRot_Parms.HeadLoc, 0xC );

	if ( headRot )
		memcpy ( headRot, &GetHeadLocAndRot_Parms.headRot, 0xC );

	return GetHeadLocAndRot_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.GetHeadLocation
// [0x00C20903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 out_vHeadLocation              ( CPF_Parm | CPF_OutParm )

bool APBBasePawn::eventGetHeadLocation ( struct FVector* out_vHeadLocation )
{
	static UFunction* pFnGetHeadLocation = NULL;

	if ( ! pFnGetHeadLocation )
		pFnGetHeadLocation = (UFunction*) UObject::GObjObjects()->Data[ 36793 ];

	APBBasePawn_eventGetHeadLocation_Parms GetHeadLocation_Parms;

	this->ProcessEvent ( pFnGetHeadLocation, &GetHeadLocation_Parms, NULL );

	if ( out_vHeadLocation )
		memcpy ( out_vHeadLocation, &GetHeadLocation_Parms.out_vHeadLocation, 0xC );

	return GetHeadLocation_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.TickCameraEyeHeight_Smoothing
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )

float APBBasePawn::eventTickCameraEyeHeight_Smoothing ( float DeltaTime )
{
	static UFunction* pFnTickCameraEyeHeight_Smoothing = NULL;

	if ( ! pFnTickCameraEyeHeight_Smoothing )
		pFnTickCameraEyeHeight_Smoothing = (UFunction*) UObject::GObjObjects()->Data[ 36818 ];

	APBBasePawn_eventTickCameraEyeHeight_Smoothing_Parms TickCameraEyeHeight_Smoothing_Parms;
	TickCameraEyeHeight_Smoothing_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCameraEyeHeight_Smoothing, &TickCameraEyeHeight_Smoothing_Parms, NULL );

	return TickCameraEyeHeight_Smoothing_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.TickCameraEyePlane_Smoothing
// [0x00020903] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void APBBasePawn::eventTickCameraEyePlane_Smoothing ( float DeltaTime )
{
	static UFunction* pFnTickCameraEyePlane_Smoothing = NULL;

	if ( ! pFnTickCameraEyePlane_Smoothing )
		pFnTickCameraEyePlane_Smoothing = (UFunction*) UObject::GObjObjects()->Data[ 36815 ];

	APBBasePawn_eventTickCameraEyePlane_Smoothing_Parms TickCameraEyePlane_Smoothing_Parms;
	TickCameraEyePlane_Smoothing_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickCameraEyePlane_Smoothing, &TickCameraEyePlane_Smoothing_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.Tick_SmoothValue
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          fSmoothingFactor               ( CPF_Parm )
// float                          fCurrentValue                  ( CPF_Parm )
// float                          fTargetValue                   ( CPF_Parm )

float APBBasePawn::Tick_SmoothValue ( float DeltaTime, float fSmoothingFactor, float fCurrentValue, float fTargetValue )
{
	static UFunction* pFnTick_SmoothValue = NULL;

	if ( ! pFnTick_SmoothValue )
		pFnTick_SmoothValue = (UFunction*) UObject::GObjObjects()->Data[ 36807 ];

	APBBasePawn_execTick_SmoothValue_Parms Tick_SmoothValue_Parms;
	Tick_SmoothValue_Parms.DeltaTime = DeltaTime;
	Tick_SmoothValue_Parms.fSmoothingFactor = fSmoothingFactor;
	Tick_SmoothValue_Parms.fCurrentValue = fCurrentValue;
	Tick_SmoothValue_Parms.fTargetValue = fTargetValue;

	this->ProcessEvent ( pFnTick_SmoothValue, &Tick_SmoothValue_Parms, NULL );

	return Tick_SmoothValue_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.IsAlive
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::IsAlive ( )
{
	static UFunction* pFnIsAlive = NULL;

	if ( ! pFnIsAlive )
		pFnIsAlive = (UFunction*) UObject::GObjObjects()->Data[ 36805 ];

	APBBasePawn_execIsAlive_Parms IsAlive_Parms;

	pFnIsAlive->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsAlive, &IsAlive_Parms, NULL );

	pFnIsAlive->FunctionFlags |= 0x400;

	return IsAlive_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.TraceTest
// [0x00820102] 
// Parameters infos:

void APBBasePawn::TraceTest ( )
{
	static UFunction* pFnTraceTest = NULL;

	if ( ! pFnTraceTest )
		pFnTraceTest = (UFunction*) UObject::GObjObjects()->Data[ 36796 ];

	APBBasePawn_execTraceTest_Parms TraceTest_Parms;

	this->ProcessEvent ( pFnTraceTest, &TraceTest_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.GetHitInfo
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// struct FTakeHitInfo            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FTakeHitInfo APBBasePawn::GetHitInfo ( )
{
	static UFunction* pFnGetHitInfo = NULL;

	if ( ! pFnGetHitInfo )
		pFnGetHitInfo = (UFunction*) UObject::GObjObjects()->Data[ 36794 ];

	APBBasePawn_execGetHitInfo_Parms GetHitInfo_Parms;

	this->ProcessEvent ( pFnGetHitInfo, &GetHitInfo_Parms, NULL );

	return GetHitInfo_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.UpdatePawnViewLocation
// [0x00820102] 
// Parameters infos:

void APBBasePawn::UpdatePawnViewLocation ( )
{
	static UFunction* pFnUpdatePawnViewLocation = NULL;

	if ( ! pFnUpdatePawnViewLocation )
		pFnUpdatePawnViewLocation = (UFunction*) UObject::GObjObjects()->Data[ 36790 ];

	APBBasePawn_execUpdatePawnViewLocation_Parms UpdatePawnViewLocation_Parms;

	this->ProcessEvent ( pFnUpdatePawnViewLocation, &UpdatePawnViewLocation_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.GetPawnViewLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector APBBasePawn::GetPawnViewLocation ( )
{
	static UFunction* pFnGetPawnViewLocation = NULL;

	if ( ! pFnGetPawnViewLocation )
		pFnGetPawnViewLocation = (UFunction*) UObject::GObjObjects()->Data[ 36787 ];

	APBBasePawn_execGetPawnViewLocation_Parms GetPawnViewLocation_Parms;

	this->ProcessEvent ( pFnGetPawnViewLocation, &GetPawnViewLocation_Parms, NULL );

	return GetPawnViewLocation_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.SetUpdateSkelWhenNotRendered
// [0x00024100] 
// Parameters infos:
// unsigned long                  bValue                         ( CPF_OptionalParm | CPF_Parm )

void APBBasePawn::SetUpdateSkelWhenNotRendered ( unsigned long bValue )
{
	static UFunction* pFnSetUpdateSkelWhenNotRendered = NULL;

	if ( ! pFnSetUpdateSkelWhenNotRendered )
		pFnSetUpdateSkelWhenNotRendered = (UFunction*) UObject::GObjObjects()->Data[ 36785 ];

	APBBasePawn_execSetUpdateSkelWhenNotRendered_Parms SetUpdateSkelWhenNotRendered_Parms;
	SetUpdateSkelWhenNotRendered_Parms.bValue = bValue;

	this->ProcessEvent ( pFnSetUpdateSkelWhenNotRendered, &SetUpdateSkelWhenNotRendered_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.GetDebugStringArray
// [0x00420100] 
// Parameters infos:
// TArray< struct FString >       DebugInfo                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APBBasePawn::GetDebugStringArray ( TArray< struct FString >* DebugInfo )
{
	static UFunction* pFnGetDebugStringArray = NULL;

	if ( ! pFnGetDebugStringArray )
		pFnGetDebugStringArray = (UFunction*) UObject::GObjObjects()->Data[ 36782 ];

	APBBasePawn_execGetDebugStringArray_Parms GetDebugStringArray_Parms;

	this->ProcessEvent ( pFnGetDebugStringArray, &GetDebugStringArray_Parms, NULL );

	if ( DebugInfo )
		memcpy ( DebugInfo, &GetDebugStringArray_Parms.DebugInfo, 0xC );
};

// Function PlanBFramework.PBBasePawn.GetBasePlayerController
// [0x00020102] 
// Parameters infos:
// class APBBasePlayerController* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APBBasePlayerController* APBBasePawn::GetBasePlayerController ( )
{
	static UFunction* pFnGetBasePlayerController = NULL;

	if ( ! pFnGetBasePlayerController )
		pFnGetBasePlayerController = (UFunction*) UObject::GObjObjects()->Data[ 36780 ];

	APBBasePawn_execGetBasePlayerController_Parms GetBasePlayerController_Parms;

	this->ProcessEvent ( pFnGetBasePlayerController, &GetBasePlayerController_Parms, NULL );

	return GetBasePlayerController_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.FreezeRagDoll
// [0x00020100] 
// Parameters infos:
// unsigned long                  bFreeze                        ( CPF_Parm )

void APBBasePawn::FreezeRagDoll ( unsigned long bFreeze )
{
	static UFunction* pFnFreezeRagDoll = NULL;

	if ( ! pFnFreezeRagDoll )
		pFnFreezeRagDoll = (UFunction*) UObject::GObjObjects()->Data[ 36778 ];

	APBBasePawn_execFreezeRagDoll_Parms FreezeRagDoll_Parms;
	FreezeRagDoll_Parms.bFreeze = bFreeze;

	this->ProcessEvent ( pFnFreezeRagDoll, &FreezeRagDoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.EncroachedBy
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void APBBasePawn::eventEncroachedBy ( class AActor* Other )
{
	static UFunction* pFnEncroachedBy = NULL;

	if ( ! pFnEncroachedBy )
		pFnEncroachedBy = (UFunction*) UObject::GObjObjects()->Data[ 36775 ];

	APBBasePawn_eventEncroachedBy_Parms EncroachedBy_Parms;
	EncroachedBy_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachedBy, &EncroachedBy_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.DrawStaticDebug
// [0x00822002] 
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBBasePawn::DrawStaticDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawStaticDebug = NULL;

	if ( ! pFnDrawStaticDebug )
		pFnDrawStaticDebug = (UFunction*) UObject::GObjObjects()->Data[ 36765 ];

	APBBasePawn_execDrawStaticDebug_Parms DrawStaticDebug_Parms;
	DrawStaticDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawStaticDebug_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawStaticDebug, &DrawStaticDebug_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.AddVelocity
// [0x00024000] 
// Parameters infos:
// struct FVector                 NewVelocity                    ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )

void APBBasePawn::AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnAddVelocity = NULL;

	if ( ! pFnAddVelocity )
		pFnAddVelocity = (UFunction*) UObject::GObjObjects()->Data[ 36760 ];

	APBBasePawn_execAddVelocity_Parms AddVelocity_Parms;
	memcpy ( &AddVelocity_Parms.NewVelocity, &NewVelocity, 0xC );
	memcpy ( &AddVelocity_Parms.HitLocation, &HitLocation, 0xC );
	AddVelocity_Parms.DamageType = DamageType;
	memcpy ( &AddVelocity_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnAddVelocity, &AddVelocity_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.PlayBleedEffects
// [0x00020102] 
// Parameters infos:

void APBBasePawn::PlayBleedEffects ( )
{
	static UFunction* pFnPlayBleedEffects = NULL;

	if ( ! pFnPlayBleedEffects )
		pFnPlayBleedEffects = (UFunction*) UObject::GObjObjects()->Data[ 36758 ];

	APBBasePawn_execPlayBleedEffects_Parms PlayBleedEffects_Parms;

	this->ProcessEvent ( pFnPlayBleedEffects, &PlayBleedEffects_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.PlayRagDoll
// [0x00820102] 
// Parameters infos:

void APBBasePawn::PlayRagDoll ( )
{
	static UFunction* pFnPlayRagDoll = NULL;

	if ( ! pFnPlayRagDoll )
		pFnPlayRagDoll = (UFunction*) UObject::GObjObjects()->Data[ 36756 ];

	APBBasePawn_execPlayRagDoll_Parms PlayRagDoll_Parms;

	this->ProcessEvent ( pFnPlayRagDoll, &PlayRagDoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.Suicide
// [0x00020002] 
// Parameters infos:

void APBBasePawn::Suicide ( )
{
	static UFunction* pFnSuicide = NULL;

	if ( ! pFnSuicide )
		pFnSuicide = (UFunction*) UObject::GObjObjects()->Data[ 36755 ];

	APBBasePawn_execSuicide_Parms Suicide_Parms;

	this->ProcessEvent ( pFnSuicide, &Suicide_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.SetHandIKEnabled
// [0x00020100] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void APBBasePawn::SetHandIKEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetHandIKEnabled = NULL;

	if ( ! pFnSetHandIKEnabled )
		pFnSetHandIKEnabled = (UFunction*) UObject::GObjObjects()->Data[ 36753 ];

	APBBasePawn_execSetHandIKEnabled_Parms SetHandIKEnabled_Parms;
	SetHandIKEnabled_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetHandIKEnabled, &SetHandIKEnabled_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.ResetCharPhysState
// [0x00020102] 
// Parameters infos:

void APBBasePawn::ResetCharPhysState ( )
{
	static UFunction* pFnResetCharPhysState = NULL;

	if ( ! pFnResetCharPhysState )
		pFnResetCharPhysState = (UFunction*) UObject::GObjObjects()->Data[ 36752 ];

	APBBasePawn_execResetCharPhysState_Parms ResetCharPhysState_Parms;

	this->ProcessEvent ( pFnResetCharPhysState, &ResetCharPhysState_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.SetPawnRBChannels
// [0x00020102] 
// Parameters infos:
// unsigned long                  bRagdollMode                   ( CPF_Parm )

void APBBasePawn::SetPawnRBChannels ( unsigned long bRagdollMode )
{
	static UFunction* pFnSetPawnRBChannels = NULL;

	if ( ! pFnSetPawnRBChannels )
		pFnSetPawnRBChannels = (UFunction*) UObject::GObjObjects()->Data[ 36750 ];

	APBBasePawn_execSetPawnRBChannels_Parms SetPawnRBChannels_Parms;
	SetPawnRBChannels_Parms.bRagdollMode = bRagdollMode;

	this->ProcessEvent ( pFnSetPawnRBChannels, &SetPawnRBChannels_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.StopAllAnimations
// [0x00020102] 
// Parameters infos:

void APBBasePawn::StopAllAnimations ( )
{
	static UFunction* pFnStopAllAnimations = NULL;

	if ( ! pFnStopAllAnimations )
		pFnStopAllAnimations = (UFunction*) UObject::GObjObjects()->Data[ 36748 ];

	APBBasePawn_execStopAllAnimations_Parms StopAllAnimations_Parms;

	this->ProcessEvent ( pFnStopAllAnimations, &StopAllAnimations_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.GoIntoRagdoll
// [0x00820102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void APBBasePawn::GoIntoRagdoll ( class UClass* DamageType, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnGoIntoRagdoll = NULL;

	if ( ! pFnGoIntoRagdoll )
		pFnGoIntoRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 36742 ];

	APBBasePawn_execGoIntoRagdoll_Parms GoIntoRagdoll_Parms;
	GoIntoRagdoll_Parms.DamageType = DamageType;
	memcpy ( &GoIntoRagdoll_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnGoIntoRagdoll, &GoIntoRagdoll_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.PlayDying
// [0x00820102] 
// Parameters infos:
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLoc                         ( CPF_Parm )

void APBBasePawn::PlayDying ( class UClass* DamageType, struct FVector HitLoc )
{
	static UFunction* pFnPlayDying = NULL;

	if ( ! pFnPlayDying )
		pFnPlayDying = (UFunction*) UObject::GObjObjects()->Data[ 36722 ];

	APBBasePawn_execPlayDying_Parms PlayDying_Parms;
	PlayDying_Parms.DamageType = DamageType;
	memcpy ( &PlayDying_Parms.HitLoc, &HitLoc, 0xC );

	this->ProcessEvent ( pFnPlayDying, &PlayDying_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.CanGrabLadder
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::CanGrabLadder ( )
{
	static UFunction* pFnCanGrabLadder = NULL;

	if ( ! pFnCanGrabLadder )
		pFnCanGrabLadder = (UFunction*) UObject::GObjObjects()->Data[ 36717 ];

	APBBasePawn_execCanGrabLadder_Parms CanGrabLadder_Parms;

	this->ProcessEvent ( pFnCanGrabLadder, &CanGrabLadder_Parms, NULL );

	return CanGrabLadder_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.Bleed
// [0x00420100] 
// Parameters infos:
// struct FTakeHitInfo            HitInfo                        ( CPF_Parm | CPF_OutParm )

void APBBasePawn::Bleed ( struct FTakeHitInfo* HitInfo )
{
	static UFunction* pFnBleed = NULL;

	if ( ! pFnBleed )
		pFnBleed = (UFunction*) UObject::GObjObjects()->Data[ 36715 ];

	APBBasePawn_execBleed_Parms Bleed_Parms;

	this->ProcessEvent ( pFnBleed, &Bleed_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &Bleed_Parms.HitInfo, 0x40 );
};

// Function PlanBFramework.PBBasePawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void APBBasePawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 36713 ];

	APBBasePawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function PlanBFramework.PBBasePawn.GetWeaponInHandBoneName
// [0x00020102] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName APBBasePawn::GetWeaponInHandBoneName ( )
{
	static UFunction* pFnGetWeaponInHandBoneName = NULL;

	if ( ! pFnGetWeaponInHandBoneName )
		pFnGetWeaponInHandBoneName = (UFunction*) UObject::GObjObjects()->Data[ 36710 ];

	APBBasePawn_execGetWeaponInHandBoneName_Parms GetWeaponInHandBoneName_Parms;

	this->ProcessEvent ( pFnGetWeaponInHandBoneName, &GetWeaponInHandBoneName_Parms, NULL );

	return GetWeaponInHandBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.HasRagdoll
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::HasRagdoll ( )
{
	static UFunction* pFnHasRagdoll = NULL;

	if ( ! pFnHasRagdoll )
		pFnHasRagdoll = (UFunction*) UObject::GObjObjects()->Data[ 36708 ];

	APBBasePawn_execHasRagdoll_Parms HasRagdoll_Parms;

	pFnHasRagdoll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasRagdoll, &HasRagdoll_Parms, NULL );

	pFnHasRagdoll->FunctionFlags |= 0x400;

	return HasRagdoll_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.IsLayingOnBack
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePawn::IsLayingOnBack ( )
{
	static UFunction* pFnIsLayingOnBack = NULL;

	if ( ! pFnIsLayingOnBack )
		pFnIsLayingOnBack = (UFunction*) UObject::GObjObjects()->Data[ 36706 ];

	APBBasePawn_execIsLayingOnBack_Parms IsLayingOnBack_Parms;

	pFnIsLayingOnBack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLayingOnBack, &IsLayingOnBack_Parms, NULL );

	pFnIsLayingOnBack->FunctionFlags |= 0x400;

	return IsLayingOnBack_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.GetPhysicsWeight
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float APBBasePawn::GetPhysicsWeight ( )
{
	static UFunction* pFnGetPhysicsWeight = NULL;

	if ( ! pFnGetPhysicsWeight )
		pFnGetPhysicsWeight = (UFunction*) UObject::GObjObjects()->Data[ 36704 ];

	APBBasePawn_execGetPhysicsWeight_Parms GetPhysicsWeight_Parms;

	pFnGetPhysicsWeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPhysicsWeight, &GetPhysicsWeight_Parms, NULL );

	pFnGetPhysicsWeight->FunctionFlags |= 0x400;

	return GetPhysicsWeight_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePawn.RestorePreRagdollCollisionComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void APBBasePawn::RestorePreRagdollCollisionComponent ( )
{
	static UFunction* pFnRestorePreRagdollCollisionComponent = NULL;

	if ( ! pFnRestorePreRagdollCollisionComponent )
		pFnRestorePreRagdollCollisionComponent = (UFunction*) UObject::GObjObjects()->Data[ 36703 ];

	APBBasePawn_execRestorePreRagdollCollisionComponent_Parms RestorePreRagdollCollisionComponent_Parms;

	pFnRestorePreRagdollCollisionComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRestorePreRagdollCollisionComponent, &RestorePreRagdollCollisionComponent_Parms, NULL );

	pFnRestorePreRagdollCollisionComponent->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBBasePlayerController.UpdateWeaponRotation
// [0x00020100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void APBBasePlayerController::UpdateWeaponRotation ( float DeltaTime )
{
	static UFunction* pFnUpdateWeaponRotation = NULL;

	if ( ! pFnUpdateWeaponRotation )
		pFnUpdateWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 37088 ];

	APBBasePlayerController_execUpdateWeaponRotation_Parms UpdateWeaponRotation_Parms;
	UpdateWeaponRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateWeaponRotation, &UpdateWeaponRotation_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.UpdateCameraModeBlendFactor
// [0x00020102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void APBBasePlayerController::UpdateCameraModeBlendFactor ( float fDeltaTime )
{
	static UFunction* pFnUpdateCameraModeBlendFactor = NULL;

	if ( ! pFnUpdateCameraModeBlendFactor )
		pFnUpdateCameraModeBlendFactor = (UFunction*) UObject::GObjObjects()->Data[ 37080 ];

	APBBasePlayerController_execUpdateCameraModeBlendFactor_Parms UpdateCameraModeBlendFactor_Parms;
	UpdateCameraModeBlendFactor_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnUpdateCameraModeBlendFactor, &UpdateCameraModeBlendFactor_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.GetPlayerViewPoint
// [0x00420102] 
// Parameters infos:
// struct FVector                 POVLocation                    ( CPF_Parm | CPF_OutParm )
// struct FRotator                POVRotation                    ( CPF_Parm | CPF_OutParm )

void APBBasePlayerController::GetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation )
{
	static UFunction* pFnGetPlayerViewPoint = NULL;

	if ( ! pFnGetPlayerViewPoint )
		pFnGetPlayerViewPoint = (UFunction*) UObject::GObjObjects()->Data[ 37077 ];

	APBBasePlayerController_execGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

	this->ProcessEvent ( pFnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

	if ( POVLocation )
		memcpy ( POVLocation, &GetPlayerViewPoint_Parms.POVLocation, 0xC );

	if ( POVRotation )
		memcpy ( POVRotation, &GetPlayerViewPoint_Parms.POVRotation, 0xC );
};

// Function PlanBFramework.PBBasePlayerController.TestNavigation
// [0x00020102] 
// Parameters infos:

void APBBasePlayerController::TestNavigation ( )
{
	static UFunction* pFnTestNavigation = NULL;

	if ( ! pFnTestNavigation )
		pFnTestNavigation = (UFunction*) UObject::GObjObjects()->Data[ 37074 ];

	APBBasePlayerController_execTestNavigation_Parms TestNavigation_Parms;

	this->ProcessEvent ( pFnTestNavigation, &TestNavigation_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.SetCameraMode
// [0x00020002] 
// Parameters infos:
// struct FName                   NewCamMode                     ( CPF_Parm )

void APBBasePlayerController::SetCameraMode ( struct FName NewCamMode )
{
	static UFunction* pFnSetCameraMode = NULL;

	if ( ! pFnSetCameraMode )
		pFnSetCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37071 ];

	APBBasePlayerController_execSetCameraMode_Parms SetCameraMode_Parms;
	memcpy ( &SetCameraMode_Parms.NewCamMode, &NewCamMode, 0x8 );

	this->ProcessEvent ( pFnSetCameraMode, &SetCameraMode_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.SetBehindView
// [0x00020102] 
// Parameters infos:
// unsigned long                  bNewBehindView                 ( CPF_Parm )

void APBBasePlayerController::SetBehindView ( unsigned long bNewBehindView )
{
	static UFunction* pFnSetBehindView = NULL;

	if ( ! pFnSetBehindView )
		pFnSetBehindView = (UFunction*) UObject::GObjObjects()->Data[ 37069 ];

	APBBasePlayerController_execSetBehindView_Parms SetBehindView_Parms;
	SetBehindView_Parms.bNewBehindView = bNewBehindView;

	this->ProcessEvent ( pFnSetBehindView, &SetBehindView_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.ServerSuicide
// [0x002200C2] 
// Parameters infos:

void APBBasePlayerController::ServerSuicide ( )
{
	static UFunction* pFnServerSuicide = NULL;

	if ( ! pFnServerSuicide )
		pFnServerSuicide = (UFunction*) UObject::GObjObjects()->Data[ 37068 ];

	APBBasePlayerController_execServerSuicide_Parms ServerSuicide_Parms;

	this->ProcessEvent ( pFnServerSuicide, &ServerSuicide_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.ServerSetCameraMode
// [0x002200C2] 
// Parameters infos:
// struct FName                   NewCamMode                     ( CPF_Parm )

void APBBasePlayerController::ServerSetCameraMode ( struct FName NewCamMode )
{
	static UFunction* pFnServerSetCameraMode = NULL;

	if ( ! pFnServerSetCameraMode )
		pFnServerSetCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37066 ];

	APBBasePlayerController_execServerSetCameraMode_Parms ServerSetCameraMode_Parms;
	memcpy ( &ServerSetCameraMode_Parms.NewCamMode, &NewCamMode, 0x8 );

	this->ProcessEvent ( pFnServerSetCameraMode, &ServerSetCameraMode_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.OnCameraTransitionFinished
// [0x00020100] 
// Parameters infos:

void APBBasePlayerController::OnCameraTransitionFinished ( )
{
	static UFunction* pFnOnCameraTransitionFinished = NULL;

	if ( ! pFnOnCameraTransitionFinished )
		pFnOnCameraTransitionFinished = (UFunction*) UObject::GObjObjects()->Data[ 37065 ];

	APBBasePlayerController_execOnCameraTransitionFinished_Parms OnCameraTransitionFinished_Parms;

	this->ProcessEvent ( pFnOnCameraTransitionFinished, &OnCameraTransitionFinished_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.OnCameraModeChanged
// [0x00020102] 
// Parameters infos:
// struct FName                   NewCamMode                     ( CPF_Parm )

void APBBasePlayerController::OnCameraModeChanged ( struct FName NewCamMode )
{
	static UFunction* pFnOnCameraModeChanged = NULL;

	if ( ! pFnOnCameraModeChanged )
		pFnOnCameraModeChanged = (UFunction*) UObject::GObjObjects()->Data[ 37062 ];

	APBBasePlayerController_execOnCameraModeChanged_Parms OnCameraModeChanged_Parms;
	memcpy ( &OnCameraModeChanged_Parms.NewCamMode, &NewCamMode, 0x8 );

	this->ProcessEvent ( pFnOnCameraModeChanged, &OnCameraModeChanged_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.NotifyKilled
// [0x00020002] 
// Parameters infos:
// class AController*             Killer                         ( CPF_Parm )
// class AController*             Killed                         ( CPF_Parm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class UClass*                  damageTyp                      ( CPF_Parm )

void APBBasePlayerController::NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* damageTyp )
{
	static UFunction* pFnNotifyKilled = NULL;

	if ( ! pFnNotifyKilled )
		pFnNotifyKilled = (UFunction*) UObject::GObjObjects()->Data[ 37057 ];

	APBBasePlayerController_execNotifyKilled_Parms NotifyKilled_Parms;
	NotifyKilled_Parms.Killer = Killer;
	NotifyKilled_Parms.Killed = Killed;
	NotifyKilled_Parms.KilledPawn = KilledPawn;
	NotifyKilled_Parms.damageTyp = damageTyp;

	this->ProcessEvent ( pFnNotifyKilled, &NotifyKilled_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.IsFreeCamera
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePlayerController::IsFreeCamera ( )
{
	static UFunction* pFnIsFreeCamera = NULL;

	if ( ! pFnIsFreeCamera )
		pFnIsFreeCamera = (UFunction*) UObject::GObjObjects()->Data[ 37055 ];

	APBBasePlayerController_execIsFreeCamera_Parms IsFreeCamera_Parms;

	this->ProcessEvent ( pFnIsFreeCamera, &IsFreeCamera_Parms, NULL );

	return IsFreeCamera_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.IsSecurityCamera
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePlayerController::IsSecurityCamera ( )
{
	static UFunction* pFnIsSecurityCamera = NULL;

	if ( ! pFnIsSecurityCamera )
		pFnIsSecurityCamera = (UFunction*) UObject::GObjObjects()->Data[ 37053 ];

	APBBasePlayerController_execIsSecurityCamera_Parms IsSecurityCamera_Parms;

	this->ProcessEvent ( pFnIsSecurityCamera, &IsSecurityCamera_Parms, NULL );

	return IsSecurityCamera_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.IsThirdPerson
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePlayerController::IsThirdPerson ( )
{
	static UFunction* pFnIsThirdPerson = NULL;

	if ( ! pFnIsThirdPerson )
		pFnIsThirdPerson = (UFunction*) UObject::GObjObjects()->Data[ 37051 ];

	APBBasePlayerController_execIsThirdPerson_Parms IsThirdPerson_Parms;

	this->ProcessEvent ( pFnIsThirdPerson, &IsThirdPerson_Parms, NULL );

	return IsThirdPerson_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.IsFirstPerson
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePlayerController::IsFirstPerson ( )
{
	static UFunction* pFnIsFirstPerson = NULL;

	if ( ! pFnIsFirstPerson )
		pFnIsFirstPerson = (UFunction*) UObject::GObjObjects()->Data[ 36835 ];

	APBBasePlayerController_execIsFirstPerson_Parms IsFirstPerson_Parms;

	this->ProcessEvent ( pFnIsFirstPerson, &IsFirstPerson_Parms, NULL );

	return IsFirstPerson_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.ResetCameraMode
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void APBBasePlayerController::eventResetCameraMode ( )
{
	static UFunction* pFnResetCameraMode = NULL;

	if ( ! pFnResetCameraMode )
		pFnResetCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37050 ];

	APBBasePlayerController_eventResetCameraMode_Parms ResetCameraMode_Parms;

	this->ProcessEvent ( pFnResetCameraMode, &ResetCameraMode_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.ShouldInterpolateWeaponRotation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePlayerController::ShouldInterpolateWeaponRotation ( )
{
	static UFunction* pFnShouldInterpolateWeaponRotation = NULL;

	if ( ! pFnShouldInterpolateWeaponRotation )
		pFnShouldInterpolateWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 37046 ];

	APBBasePlayerController_execShouldInterpolateWeaponRotation_Parms ShouldInterpolateWeaponRotation_Parms;

	this->ProcessEvent ( pFnShouldInterpolateWeaponRotation, &ShouldInterpolateWeaponRotation_Parms, NULL );

	return ShouldInterpolateWeaponRotation_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.SetCameraAction
// [0x00020102] 
// Parameters infos:
// class APBCameraAction*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APBCameraAction*         pAction                        ( CPF_Parm )

class APBCameraAction* APBBasePlayerController::SetCameraAction ( class APBCameraAction* pAction )
{
	static UFunction* pFnSetCameraAction = NULL;

	if ( ! pFnSetCameraAction )
		pFnSetCameraAction = (UFunction*) UObject::GObjObjects()->Data[ 37040 ];

	APBBasePlayerController_execSetCameraAction_Parms SetCameraAction_Parms;
	SetCameraAction_Parms.pAction = pAction;

	this->ProcessEvent ( pFnSetCameraAction, &SetCameraAction_Parms, NULL );

	return SetCameraAction_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.GetCameraManager
// [0x00020102] 
// Parameters infos:
// class APBCameraActionManager*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APBCameraActionManager* APBBasePlayerController::GetCameraManager ( )
{
	static UFunction* pFnGetCameraManager = NULL;

	if ( ! pFnGetCameraManager )
		pFnGetCameraManager = (UFunction*) UObject::GObjObjects()->Data[ 37038 ];

	APBBasePlayerController_execGetCameraManager_Parms GetCameraManager_Parms;

	this->ProcessEvent ( pFnGetCameraManager, &GetCameraManager_Parms, NULL );

	return GetCameraManager_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.ClientSetCameraMode
// [0x010201C2] 
// Parameters infos:
// struct FName                   NewCamMode                     ( CPF_Parm )

void APBBasePlayerController::ClientSetCameraMode ( struct FName NewCamMode )
{
	static UFunction* pFnClientSetCameraMode = NULL;

	if ( ! pFnClientSetCameraMode )
		pFnClientSetCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37036 ];

	APBBasePlayerController_execClientSetCameraMode_Parms ClientSetCameraMode_Parms;
	memcpy ( &ClientSetCameraMode_Parms.NewCamMode, &NewCamMode, 0x8 );

	this->ProcessEvent ( pFnClientSetCameraMode, &ClientSetCameraMode_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.ClientStopActorSoundComponent
// [0x00020102] 
// Parameters infos:
// class USoundCue*               ASound                         ( CPF_Parm )
// class AActor*                  SourceActor                    ( CPF_Parm )
// float                          FadeOutTime                    ( CPF_Parm )

void APBBasePlayerController::ClientStopActorSoundComponent ( class USoundCue* ASound, class AActor* SourceActor, float FadeOutTime )
{
	static UFunction* pFnClientStopActorSoundComponent = NULL;

	if ( ! pFnClientStopActorSoundComponent )
		pFnClientStopActorSoundComponent = (UFunction*) UObject::GObjObjects()->Data[ 37030 ];

	APBBasePlayerController_execClientStopActorSoundComponent_Parms ClientStopActorSoundComponent_Parms;
	ClientStopActorSoundComponent_Parms.ASound = ASound;
	ClientStopActorSoundComponent_Parms.SourceActor = SourceActor;
	ClientStopActorSoundComponent_Parms.FadeOutTime = FadeOutTime;

	this->ProcessEvent ( pFnClientStopActorSoundComponent, &ClientStopActorSoundComponent_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.ClientHearSound
// [0x01024942] ( FUNC_Event )
// Parameters infos:
// class USoundCue*               ASound                         ( CPF_Parm )
// class AActor*                  SourceActor                    ( CPF_Parm )
// struct FVector                 SourceLocation                 ( CPF_Parm )
// unsigned long                  bStopWhenOwnerDestroyed        ( CPF_Parm )
// unsigned long                  bIsOccluded                    ( CPF_OptionalParm | CPF_Parm )

void APBBasePlayerController::eventClientHearSound ( class USoundCue* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded )
{
	static UFunction* pFnClientHearSound = NULL;

	if ( ! pFnClientHearSound )
		pFnClientHearSound = (UFunction*) UObject::GObjObjects()->Data[ 37021 ];

	APBBasePlayerController_eventClientHearSound_Parms ClientHearSound_Parms;
	ClientHearSound_Parms.ASound = ASound;
	ClientHearSound_Parms.SourceActor = SourceActor;
	memcpy ( &ClientHearSound_Parms.SourceLocation, &SourceLocation, 0xC );
	ClientHearSound_Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
	ClientHearSound_Parms.bIsOccluded = bIsOccluded;

	this->ProcessEvent ( pFnClientHearSound, &ClientHearSound_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.CalculateDeltaTime
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm | CPF_OutParm )

bool APBBasePlayerController::CalculateDeltaTime ( float* fDeltaTime )
{
	static UFunction* pFnCalculateDeltaTime = NULL;

	if ( ! pFnCalculateDeltaTime )
		pFnCalculateDeltaTime = (UFunction*) UObject::GObjObjects()->Data[ 37017 ];

	APBBasePlayerController_execCalculateDeltaTime_Parms CalculateDeltaTime_Parms;

	this->ProcessEvent ( pFnCalculateDeltaTime, &CalculateDeltaTime_Parms, NULL );

	if ( fDeltaTime )
		*fDeltaTime = CalculateDeltaTime_Parms.fDeltaTime;

	return CalculateDeltaTime_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.IsDeveloperInstallation
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBBasePlayerController::IsDeveloperInstallation ( )
{
	static UFunction* pFnIsDeveloperInstallation = NULL;

	if ( ! pFnIsDeveloperInstallation )
		pFnIsDeveloperInstallation = (UFunction*) UObject::GObjObjects()->Data[ 36942 ];

	APBBasePlayerController_execIsDeveloperInstallation_Parms IsDeveloperInstallation_Parms;

	pFnIsDeveloperInstallation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDeveloperInstallation, &IsDeveloperInstallation_Parms, NULL );

	pFnIsDeveloperInstallation->FunctionFlags |= 0x400;

	return IsDeveloperInstallation_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.GetViewRayDot
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vLocation                      ( CPF_Parm )

float APBBasePlayerController::GetViewRayDot ( struct FVector vLocation )
{
	static UFunction* pFnGetViewRayDot = NULL;

	if ( ! pFnGetViewRayDot )
		pFnGetViewRayDot = (UFunction*) UObject::GObjObjects()->Data[ 37014 ];

	APBBasePlayerController_execGetViewRayDot_Parms GetViewRayDot_Parms;
	memcpy ( &GetViewRayDot_Parms.vLocation, &vLocation, 0xC );

	pFnGetViewRayDot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetViewRayDot, &GetViewRayDot_Parms, NULL );

	pFnGetViewRayDot->FunctionFlags |= 0x400;

	return GetViewRayDot_Parms.ReturnValue;
};

// Function PlanBFramework.PBBasePlayerController.MapCheck
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 strCommandline                 ( CPF_Parm | CPF_NeedCtorLink )

void APBBasePlayerController::MapCheck ( struct FString strCommandline )
{
	static UFunction* pFnMapCheck = NULL;

	if ( ! pFnMapCheck )
		pFnMapCheck = (UFunction*) UObject::GObjObjects()->Data[ 37012 ];

	APBBasePlayerController_execMapCheck_Parms MapCheck_Parms;
	memcpy ( &MapCheck_Parms.strCommandline, &strCommandline, 0xC );

	this->ProcessEvent ( pFnMapCheck, &MapCheck_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APBBasePlayerController::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37011 ];

	APBBasePlayerController_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.ShowMapCheckDlg
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APBBasePlayerController::ShowMapCheckDlg ( )
{
	static UFunction* pFnShowMapCheckDlg = NULL;

	if ( ! pFnShowMapCheckDlg )
		pFnShowMapCheckDlg = (UFunction*) UObject::GObjObjects()->Data[ 37010 ];

	APBBasePlayerController_execShowMapCheckDlg_Parms ShowMapCheckDlg_Parms;

	pFnShowMapCheckDlg->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowMapCheckDlg, &ShowMapCheckDlg_Parms, NULL );

	pFnShowMapCheckDlg->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBBasePlayerController.NotifyCameraActionUninstalled
// [0x00020100] 
// Parameters infos:

void APBBasePlayerController::NotifyCameraActionUninstalled ( )
{
	static UFunction* pFnNotifyCameraActionUninstalled = NULL;

	if ( ! pFnNotifyCameraActionUninstalled )
		pFnNotifyCameraActionUninstalled = (UFunction*) UObject::GObjObjects()->Data[ 37009 ];

	APBBasePlayerController_execNotifyCameraActionUninstalled_Parms NotifyCameraActionUninstalled_Parms;

	this->ProcessEvent ( pFnNotifyCameraActionUninstalled, &NotifyCameraActionUninstalled_Parms, NULL );
};

// Function PlanBFramework.PBBasePlayerController.GetAppSeconds
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float APBBasePlayerController::GetAppSeconds ( )
{
	static UFunction* pFnGetAppSeconds = NULL;

	if ( ! pFnGetAppSeconds )
		pFnGetAppSeconds = (UFunction*) UObject::GObjObjects()->Data[ 37007 ];

	APBBasePlayerController_execGetAppSeconds_Parms GetAppSeconds_Parms;

	pFnGetAppSeconds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAppSeconds, &GetAppSeconds_Parms, NULL );

	pFnGetAppSeconds->FunctionFlags |= 0x400;

	return GetAppSeconds_Parms.ReturnValue;
};

// Function PlanBFramework.PBDebugWindow.Render
// [0x00020102] 
// Parameters infos:

void UPBDebugWindow::Render ( )
{
	static UFunction* pFnRender = NULL;

	if ( ! pFnRender )
		pFnRender = (UFunction*) UObject::GObjObjects()->Data[ 37242 ];

	UPBDebugWindow_execRender_Parms Render_Parms;

	this->ProcessEvent ( pFnRender, &Render_Parms, NULL );
};

// Function PlanBFramework.PBDebugWindow.Scroll
// [0x00020102] 
// Parameters infos:

void UPBDebugWindow::Scroll ( )
{
	static UFunction* pFnScroll = NULL;

	if ( ! pFnScroll )
		pFnScroll = (UFunction*) UObject::GObjObjects()->Data[ 37241 ];

	UPBDebugWindow_execScroll_Parms Scroll_Parms;

	this->ProcessEvent ( pFnScroll, &Scroll_Parms, NULL );
};

// Function PlanBFramework.PBDebugWindow.SetText
// [0x00020102] 
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void UPBDebugWindow::SetText ( struct FString Text )
{
	static UFunction* pFnSetText = NULL;

	if ( ! pFnSetText )
		pFnSetText = (UFunction*) UObject::GObjObjects()->Data[ 37239 ];

	UPBDebugWindow_execSetText_Parms SetText_Parms;
	memcpy ( &SetText_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnSetText, &SetText_Parms, NULL );
};

// Function PlanBFramework.PBDebugWindow.Close
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPBDebugWindow::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 37238 ];

	UPBDebugWindow_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBDebugWindow.Text
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// struct FString                 txt                            ( CPF_Parm | CPF_NeedCtorLink )

void UPBDebugWindow::Text ( int X, int Y, struct FString txt )
{
	static UFunction* pFnText = NULL;

	if ( ! pFnText )
		pFnText = (UFunction*) UObject::GObjObjects()->Data[ 37234 ];

	UPBDebugWindow_execText_Parms Text_Parms;
	Text_Parms.X = X;
	Text_Parms.Y = Y;
	memcpy ( &Text_Parms.txt, &txt, 0xC );

	pFnText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnText, &Text_Parms, NULL );

	pFnText->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBDebugWindow.Clear
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPBDebugWindow::Clear ( )
{
	static UFunction* pFnClear = NULL;

	if ( ! pFnClear )
		pFnClear = (UFunction*) UObject::GObjObjects()->Data[ 37233 ];

	UPBDebugWindow_execClear_Parms Clear_Parms;

	pFnClear->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClear, &Clear_Parms, NULL );

	pFnClear->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBDebugWindow.Open
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            PosX                           ( CPF_Parm )
// int                            PosY                           ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )

void UPBDebugWindow::Open ( int PosX, int PosY, int Width, int Height, struct FString Title )
{
	static UFunction* pFnOpen = NULL;

	if ( ! pFnOpen )
		pFnOpen = (UFunction*) UObject::GObjObjects()->Data[ 37227 ];

	UPBDebugWindow_execOpen_Parms Open_Parms;
	Open_Parms.PosX = PosX;
	Open_Parms.PosY = PosY;
	Open_Parms.Width = Width;
	Open_Parms.Height = Height;
	memcpy ( &Open_Parms.Title, &Title, 0xC );

	pFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpen, &Open_Parms, NULL );

	pFnOpen->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBExplosionLight.ValidateLightSetting
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPBExplosionLight::ValidateLightSetting ( )
{
	static UFunction* pFnValidateLightSetting = NULL;

	if ( ! pFnValidateLightSetting )
		pFnValidateLightSetting = (UFunction*) UObject::GObjObjects()->Data[ 37257 ];

	UPBExplosionLight_execValidateLightSetting_Parms ValidateLightSetting_Parms;

	pFnValidateLightSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnValidateLightSetting, &ValidateLightSetting_Parms, NULL );

	pFnValidateLightSetting->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBExplosionLight.ResetLight
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPBExplosionLight::ResetLight ( )
{
	static UFunction* pFnResetLight = NULL;

	if ( ! pFnResetLight )
		pFnResetLight = (UFunction*) UObject::GObjObjects()->Data[ 37256 ];

	UPBExplosionLight_execResetLight_Parms ResetLight_Parms;

	pFnResetLight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetLight, &ResetLight_Parms, NULL );

	pFnResetLight->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBLevelCheckCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UPBLevelCheckCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = (UFunction*) UObject::GObjObjects()->Data[ 37633 ];

	UPBLevelCheckCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.SpawnExplosionEffects
// [0x00420102] 
// Parameters infos:
// class AEmitter*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Location                       ( CPF_Parm )
// struct FExplosionInfo          expInfo                        ( CPF_Parm | CPF_OutParm )

class AEmitter* UPBPhysicsEffectGenerator::SpawnExplosionEffects ( struct FVector Location, struct FExplosionInfo* expInfo )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 37452 ];

	UPBPhysicsEffectGenerator_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.Location, &Location, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );

	if ( expInfo )
		memcpy ( expInfo, &SpawnExplosionEffects_Parms.expInfo, 0x20 );

	return SpawnExplosionEffects_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.SetSoundMode
// [0x00020102] 
// Parameters infos:
// struct FName                   SoundModeName                  ( CPF_Parm )
// struct FVector                 Location                       ( CPF_Parm )
// float                          fMaxDistance                   ( CPF_Parm )

void UPBPhysicsEffectGenerator::SetSoundMode ( struct FName SoundModeName, struct FVector Location, float fMaxDistance )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 37446 ];

	UPBPhysicsEffectGenerator_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy ( &SetSoundMode_Parms.SoundModeName, &SoundModeName, 0x8 );
	memcpy ( &SetSoundMode_Parms.Location, &Location, 0xC );
	SetSoundMode_Parms.fMaxDistance = fMaxDistance;

	this->ProcessEvent ( pFnSetSoundMode, &SetSoundMode_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsEffectGenerator.CreateExplosionLight
// [0x00420102] 
// Parameters infos:
// class UPBExplosionLight*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class AActor*                  attachTo                       ( CPF_Parm )
// struct FVector                 Location                       ( CPF_Parm )
// struct FExplosionInfo          expInfo                        ( CPF_Parm | CPF_OutParm )

class UPBExplosionLight* UPBPhysicsEffectGenerator::CreateExplosionLight ( class AActor* attachTo, struct FVector Location, struct FExplosionInfo* expInfo )
{
	static UFunction* pFnCreateExplosionLight = NULL;

	if ( ! pFnCreateExplosionLight )
		pFnCreateExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 37438 ];

	UPBPhysicsEffectGenerator_execCreateExplosionLight_Parms CreateExplosionLight_Parms;
	CreateExplosionLight_Parms.attachTo = attachTo;
	memcpy ( &CreateExplosionLight_Parms.Location, &Location, 0xC );

	this->ProcessEvent ( pFnCreateExplosionLight, &CreateExplosionLight_Parms, NULL );

	if ( expInfo )
		memcpy ( expInfo, &CreateExplosionLight_Parms.expInfo, 0x20 );

	return CreateExplosionLight_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.ShouldSpawnExplosionLight
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Location                       ( CPF_Parm )

bool UPBPhysicsEffectGenerator::ShouldSpawnExplosionLight ( struct FVector Location )
{
	static UFunction* pFnShouldSpawnExplosionLight = NULL;

	if ( ! pFnShouldSpawnExplosionLight )
		pFnShouldSpawnExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 37434 ];

	UPBPhysicsEffectGenerator_execShouldSpawnExplosionLight_Parms ShouldSpawnExplosionLight_Parms;
	memcpy ( &ShouldSpawnExplosionLight_Parms.Location, &Location, 0xC );

	this->ProcessEvent ( pFnShouldSpawnExplosionLight, &ShouldSpawnExplosionLight_Parms, NULL );

	return ShouldSpawnExplosionLight_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.SpawnSoundIndicator
// [0x00020100] 
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )

void UPBPhysicsEffectGenerator::SpawnSoundIndicator ( class UAudioComponent* AC )
{
	static UFunction* pFnSpawnSoundIndicator = NULL;

	if ( ! pFnSpawnSoundIndicator )
		pFnSpawnSoundIndicator = (UFunction*) UObject::GObjObjects()->Data[ 37432 ];

	UPBPhysicsEffectGenerator_execSpawnSoundIndicator_Parms SpawnSoundIndicator_Parms;
	SpawnSoundIndicator_Parms.AC = AC;

	this->ProcessEvent ( pFnSpawnSoundIndicator, &SpawnSoundIndicator_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsEffectGenerator.RecurseSoundNodes
// [0x00022102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USoundNode*              sndNode                        ( CPF_Parm )

bool UPBPhysicsEffectGenerator::RecurseSoundNodes ( class USoundNode* sndNode )
{
	static UFunction* pFnRecurseSoundNodes = NULL;

	if ( ! pFnRecurseSoundNodes )
		pFnRecurseSoundNodes = (UFunction*) UObject::GObjObjects()->Data[ 37425 ];

	UPBPhysicsEffectGenerator_execRecurseSoundNodes_Parms RecurseSoundNodes_Parms;
	RecurseSoundNodes_Parms.sndNode = sndNode;

	this->ProcessEvent ( pFnRecurseSoundNodes, &RecurseSoundNodes_Parms, NULL );

	return RecurseSoundNodes_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.IsSoundCueValid
// [0x00022102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class USoundCue*               sndCue                         ( CPF_Parm )

bool UPBPhysicsEffectGenerator::IsSoundCueValid ( class USoundCue* sndCue )
{
	static UFunction* pFnIsSoundCueValid = NULL;

	if ( ! pFnIsSoundCueValid )
		pFnIsSoundCueValid = (UFunction*) UObject::GObjObjects()->Data[ 37422 ];

	UPBPhysicsEffectGenerator_execIsSoundCueValid_Parms IsSoundCueValid_Parms;
	IsSoundCueValid_Parms.sndCue = sndCue;

	this->ProcessEvent ( pFnIsSoundCueValid, &IsSoundCueValid_Parms, NULL );

	return IsSoundCueValid_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.CreateActorAudioComponentAt
// [0x00820102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               ASound                         ( CPF_Parm )
// struct FVector                 SourceLocation                 ( CPF_Parm )

class UAudioComponent* UPBPhysicsEffectGenerator::CreateActorAudioComponentAt ( class USoundCue* ASound, struct FVector SourceLocation )
{
	static UFunction* pFnCreateActorAudioComponentAt = NULL;

	if ( ! pFnCreateActorAudioComponentAt )
		pFnCreateActorAudioComponentAt = (UFunction*) UObject::GObjObjects()->Data[ 37412 ];

	UPBPhysicsEffectGenerator_execCreateActorAudioComponentAt_Parms CreateActorAudioComponentAt_Parms;
	CreateActorAudioComponentAt_Parms.ASound = ASound;
	memcpy ( &CreateActorAudioComponentAt_Parms.SourceLocation, &SourceLocation, 0xC );

	this->ProcessEvent ( pFnCreateActorAudioComponentAt, &CreateActorAudioComponentAt_Parms, NULL );

	return CreateActorAudioComponentAt_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsEffectGenerator.GetVelocityVolumeMultiplier
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fVelocityKmh                   ( CPF_Parm )

float UPBPhysicsEffectGenerator::GetVelocityVolumeMultiplier ( float fVelocityKmh )
{
	static UFunction* pFnGetVelocityVolumeMultiplier = NULL;

	if ( ! pFnGetVelocityVolumeMultiplier )
		pFnGetVelocityVolumeMultiplier = (UFunction*) UObject::GObjObjects()->Data[ 37409 ];

	UPBPhysicsEffectGenerator_execGetVelocityVolumeMultiplier_Parms GetVelocityVolumeMultiplier_Parms;
	GetVelocityVolumeMultiplier_Parms.fVelocityKmh = fVelocityKmh;

	pFnGetVelocityVolumeMultiplier->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVelocityVolumeMultiplier, &GetVelocityVolumeMultiplier_Parms, NULL );

	pFnGetVelocityVolumeMultiplier->FunctionFlags |= 0x400;

	return GetVelocityVolumeMultiplier_Parms.ReturnValue;
};

// Function PlanBFramework.PBReplaceActorCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UPBReplaceActorCommandlet::eventMain ( struct FString Params )
{
	static UFunction* pFnMain = NULL;

	if ( ! pFnMain )
		pFnMain = (UFunction*) UObject::GObjObjects()->Data[ 37700 ];

	UPBReplaceActorCommandlet_eventMain_Parms Main_Parms;
	memcpy ( &Main_Parms.Params, &Params, 0xC );

	pFnMain->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMain, &Main_Parms, NULL );

	pFnMain->FunctionFlags |= 0x400;

	return Main_Parms.ReturnValue;
};

// Function PlanBFramework.PBVehicleAutoPilotController.ResetPawnControls
// [0x00020000] 
// Parameters infos:

void APBVehicleAutoPilotController::ResetPawnControls ( )
{
	static UFunction* pFnResetPawnControls = NULL;

	if ( ! pFnResetPawnControls )
		pFnResetPawnControls = (UFunction*) UObject::GObjObjects()->Data[ 37849 ];

	APBVehicleAutoPilotController_execResetPawnControls_Parms ResetPawnControls_Parms;

	this->ProcessEvent ( pFnResetPawnControls, &ResetPawnControls_Parms, NULL );
};

// Function PlanBFramework.PBVehicleAutoPilotController.FindRandomNavigationPointXXX
// [0x00020102] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ANavigationPoint* APBVehicleAutoPilotController::FindRandomNavigationPointXXX ( )
{
	static UFunction* pFnFindRandomNavigationPointXXX = NULL;

	if ( ! pFnFindRandomNavigationPointXXX )
		pFnFindRandomNavigationPointXXX = (UFunction*) UObject::GObjObjects()->Data[ 37844 ];

	APBVehicleAutoPilotController_execFindRandomNavigationPointXXX_Parms FindRandomNavigationPointXXX_Parms;

	this->ProcessEvent ( pFnFindRandomNavigationPointXXX, &FindRandomNavigationPointXXX_Parms, NULL );

	return FindRandomNavigationPointXXX_Parms.ReturnValue;
};

// Function PlanBFramework.PBVehicleAutoPilotController.FindRandomNavigationPoint
// [0x00020102] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ANavigationPoint* APBVehicleAutoPilotController::FindRandomNavigationPoint ( )
{
	static UFunction* pFnFindRandomNavigationPoint = NULL;

	if ( ! pFnFindRandomNavigationPoint )
		pFnFindRandomNavigationPoint = (UFunction*) UObject::GObjObjects()->Data[ 37837 ];

	APBVehicleAutoPilotController_execFindRandomNavigationPoint_Parms FindRandomNavigationPoint_Parms;

	this->ProcessEvent ( pFnFindRandomNavigationPoint, &FindRandomNavigationPoint_Parms, NULL );

	return FindRandomNavigationPoint_Parms.ReturnValue;
};

// Function PlanBFramework.PBVehicleAutoPilotController.FindNextNavigationPoint
// [0x00020102] 
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ANavigationPoint* APBVehicleAutoPilotController::FindNextNavigationPoint ( )
{
	static UFunction* pFnFindNextNavigationPoint = NULL;

	if ( ! pFnFindNextNavigationPoint )
		pFnFindNextNavigationPoint = (UFunction*) UObject::GObjObjects()->Data[ 37834 ];

	APBVehicleAutoPilotController_execFindNextNavigationPoint_Parms FindNextNavigationPoint_Parms;

	this->ProcessEvent ( pFnFindNextNavigationPoint, &FindNextNavigationPoint_Parms, NULL );

	return FindNextNavigationPoint_Parms.ReturnValue;
};

// Function PlanBFramework.PBVehicleAutoPilotController.DrawDebug
// [0x00020100] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBVehicleAutoPilotController::DrawDebug ( class APlayerController* PC, class UCanvas* Canvas )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37831 ];

	APBVehicleAutoPilotController_execDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.PC = PC;
	DrawDebug_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function PlanBFramework.PBVehicleAutoPilotController_Aircraft.ResetPawnControls
// [0x00020002] 
// Parameters infos:

void APBVehicleAutoPilotController_Aircraft::ResetPawnControls ( )
{
	static UFunction* pFnResetPawnControls = NULL;

	if ( ! pFnResetPawnControls )
		pFnResetPawnControls = (UFunction*) UObject::GObjObjects()->Data[ 37850 ];

	APBVehicleAutoPilotController_Aircraft_execResetPawnControls_Parms ResetPawnControls_Parms;

	this->ProcessEvent ( pFnResetPawnControls, &ResetPawnControls_Parms, NULL );
};

// Function PlanBFramework.PBKActor.TakeRadiusDamage
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

void APBKActor::TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent )
{
	static UFunction* pFnTakeRadiusDamage = NULL;

	if ( ! pFnTakeRadiusDamage )
		pFnTakeRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 37618 ];

	APBKActor_execTakeRadiusDamage_Parms TakeRadiusDamage_Parms;
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

// Function PlanBFramework.PBKActor.TakeDamage
// [0x00024002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void APBKActor::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 37608 ];

	APBKActor_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function PlanBFramework.PBKActor.ShiftToStaticMesh
// [0x00020102] 
// Parameters infos:
// class UStaticMesh*             NewMesh                        ( CPF_Parm )
// unsigned long                  bNoCollision                   ( CPF_Parm )
// class UMaterial*               Material                       ( CPF_Parm )

void APBKActor::ShiftToStaticMesh ( class UStaticMesh* NewMesh, unsigned long bNoCollision, class UMaterial* Material )
{
	static UFunction* pFnShiftToStaticMesh = NULL;

	if ( ! pFnShiftToStaticMesh )
		pFnShiftToStaticMesh = (UFunction*) UObject::GObjObjects()->Data[ 37601 ];

	APBKActor_execShiftToStaticMesh_Parms ShiftToStaticMesh_Parms;
	ShiftToStaticMesh_Parms.NewMesh = NewMesh;
	ShiftToStaticMesh_Parms.bNoCollision = bNoCollision;
	ShiftToStaticMesh_Parms.Material = Material;

	this->ProcessEvent ( pFnShiftToStaticMesh, &ShiftToStaticMesh_Parms, NULL );
};

// Function PlanBFramework.PBKActor.ShiftStaticMesh
// [0x00020102] 
// Parameters infos:

void APBKActor::ShiftStaticMesh ( )
{
	static UFunction* pFnShiftStaticMesh = NULL;

	if ( ! pFnShiftStaticMesh )
		pFnShiftStaticMesh = (UFunction*) UObject::GObjObjects()->Data[ 37596 ];

	APBKActor_execShiftStaticMesh_Parms ShiftStaticMesh_Parms;

	this->ProcessEvent ( pFnShiftStaticMesh, &ShiftStaticMesh_Parms, NULL );
};

// Function PlanBFramework.PBKActor.RemoveEffects
// [0x00020102] 
// Parameters infos:

void APBKActor::RemoveEffects ( )
{
	static UFunction* pFnRemoveEffects = NULL;

	if ( ! pFnRemoveEffects )
		pFnRemoveEffects = (UFunction*) UObject::GObjObjects()->Data[ 37595 ];

	APBKActor_execRemoveEffects_Parms RemoveEffects_Parms;

	this->ProcessEvent ( pFnRemoveEffects, &RemoveEffects_Parms, NULL );
};

// Function PlanBFramework.PBKActor.Reset
// [0x00020102] 
// Parameters infos:

void APBKActor::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 37594 ];

	APBKActor_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function PlanBFramework.PBKActor.Destroyed
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APBKActor::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 37593 ];

	APBKActor_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function PlanBFramework.PBKActor.BehindReset
// [0x00020002] 
// Parameters infos:

void APBKActor::BehindReset ( )
{
	static UFunction* pFnBehindReset = NULL;

	if ( ! pFnBehindReset )
		pFnBehindReset = (UFunction*) UObject::GObjObjects()->Data[ 37592 ];

	APBKActor_execBehindReset_Parms BehindReset_Parms;

	this->ProcessEvent ( pFnBehindReset, &BehindReset_Parms, NULL );
};

// Function PlanBFramework.PBKActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void APBKActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 37590 ];

	APBKActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function PlanBFramework.PBKActor.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void APBKActor::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37589 ];

	APBKActor_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlanBFramework.PBKActor.PlayRestOnGroundEffect
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UParticleSystemComponent* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UParticleSystemComponent* APBKActor::eventPlayRestOnGroundEffect ( )
{
	static UFunction* pFnPlayRestOnGroundEffect = NULL;

	if ( ! pFnPlayRestOnGroundEffect )
		pFnPlayRestOnGroundEffect = (UFunction*) UObject::GObjObjects()->Data[ 37586 ];

	APBKActor_eventPlayRestOnGroundEffect_Parms PlayRestOnGroundEffect_Parms;

	this->ProcessEvent ( pFnPlayRestOnGroundEffect, &PlayRestOnGroundEffect_Parms, NULL );

	return PlayRestOnGroundEffect_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.PlayWakeupEffect
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UParticleSystemComponent* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )

class UParticleSystemComponent* APBKActor::eventPlayWakeupEffect ( )
{
	static UFunction* pFnPlayWakeupEffect = NULL;

	if ( ! pFnPlayWakeupEffect )
		pFnPlayWakeupEffect = (UFunction*) UObject::GObjObjects()->Data[ 37583 ];

	APBKActor_eventPlayWakeupEffect_Parms PlayWakeupEffect_Parms;

	this->ProcessEvent ( pFnPlayWakeupEffect, &PlayWakeupEffect_Parms, NULL );

	return PlayWakeupEffect_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.OnWakeRigidBody
// [0x00820102] 
// Parameters infos:
// class UPBSeqAct_WakeRigidBody* seqAction                      ( CPF_Parm )

void APBKActor::OnWakeRigidBody ( class UPBSeqAct_WakeRigidBody* seqAction )
{
	static UFunction* pFnOnWakeRigidBody = NULL;

	if ( ! pFnOnWakeRigidBody )
		pFnOnWakeRigidBody = (UFunction*) UObject::GObjObjects()->Data[ 37578 ];

	APBKActor_execOnWakeRigidBody_Parms OnWakeRigidBody_Parms;
	OnWakeRigidBody_Parms.seqAction = seqAction;

	this->ProcessEvent ( pFnOnWakeRigidBody, &OnWakeRigidBody_Parms, NULL );
};

// Function PlanBFramework.PBKActor.OnBecomeStationary
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void APBKActor::eventOnBecomeStationary ( )
{
	static UFunction* pFnOnBecomeStationary = NULL;

	if ( ! pFnOnBecomeStationary )
		pFnOnBecomeStationary = (UFunction*) UObject::GObjObjects()->Data[ 37577 ];

	APBKActor_eventOnBecomeStationary_Parms OnBecomeStationary_Parms;

	this->ProcessEvent ( pFnOnBecomeStationary, &OnBecomeStationary_Parms, NULL );
};

// Function PlanBFramework.PBKActor.OnClientReset
// [0x010201C2] 
// Parameters infos:

void APBKActor::OnClientReset ( )
{
	static UFunction* pFnOnClientReset = NULL;

	if ( ! pFnOnClientReset )
		pFnOnClientReset = (UFunction*) UObject::GObjObjects()->Data[ 37576 ];

	APBKActor_execOnClientReset_Parms OnClientReset_Parms;

	this->ProcessEvent ( pFnOnClientReset, &OnClientReset_Parms, NULL );
};

// Function PlanBFramework.PBKActor.GetDebugStringArray
// [0x00420102] 
// Parameters infos:
// TArray< struct FString >       DebugInfo                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APBKActor::GetDebugStringArray ( TArray< struct FString >* DebugInfo )
{
	static UFunction* pFnGetDebugStringArray = NULL;

	if ( ! pFnGetDebugStringArray )
		pFnGetDebugStringArray = (UFunction*) UObject::GObjObjects()->Data[ 37572 ];

	APBKActor_execGetDebugStringArray_Parms GetDebugStringArray_Parms;

	this->ProcessEvent ( pFnGetDebugStringArray, &GetDebugStringArray_Parms, NULL );

	if ( DebugInfo )
		memcpy ( DebugInfo, &GetDebugStringArray_Parms.DebugInfo, 0xC );
};

// Function PlanBFramework.PBKActor.EncroachingOn_Prototype
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool APBKActor::EncroachingOn_Prototype ( class AActor* Other )
{
	static UFunction* pFnEncroachingOn_Prototype = NULL;

	if ( ! pFnEncroachingOn_Prototype )
		pFnEncroachingOn_Prototype = (UFunction*) UObject::GObjObjects()->Data[ 37564 ];

	APBKActor_execEncroachingOn_Prototype_Parms EncroachingOn_Prototype_Parms;
	EncroachingOn_Prototype_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachingOn_Prototype, &EncroachingOn_Prototype_Parms, NULL );

	return EncroachingOn_Prototype_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.EncroachingOn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool APBKActor::EncroachingOn ( class AActor* Other )
{
	static UFunction* pFnEncroachingOn = NULL;

	if ( ! pFnEncroachingOn )
		pFnEncroachingOn = (UFunction*) UObject::GObjObjects()->Data[ 37561 ];

	APBKActor_execEncroachingOn_Parms EncroachingOn_Parms;
	EncroachingOn_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachingOn, &EncroachingOn_Parms, NULL );

	return EncroachingOn_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.DrawDebug
// [0x00020102] 
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBKActor::DrawDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37556 ];

	APBKActor_execDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawDebug_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function PlanBFramework.PBKActor.ShouldDrawDebug
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// float                          fDistance                      ( CPF_Parm | CPF_OutParm )
// float                          fViewRayDot                    ( CPF_Parm | CPF_OutParm )

bool APBKActor::ShouldDrawDebug ( class APBBasePlayerController* localPlayerCtrl, float* fDistance, float* fViewRayDot )
{
	static UFunction* pFnShouldDrawDebug = NULL;

	if ( ! pFnShouldDrawDebug )
		pFnShouldDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37551 ];

	APBKActor_execShouldDrawDebug_Parms ShouldDrawDebug_Parms;
	ShouldDrawDebug_Parms.localPlayerCtrl = localPlayerCtrl;

	this->ProcessEvent ( pFnShouldDrawDebug, &ShouldDrawDebug_Parms, NULL );

	if ( fDistance )
		*fDistance = ShouldDrawDebug_Parms.fDistance;

	if ( fViewRayDot )
		*fViewRayDot = ShouldDrawDebug_Parms.fViewRayDot;

	return ShouldDrawDebug_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.DrawStaticDebug
// [0x00022002] 
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBKActor::DrawStaticDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawStaticDebug = NULL;

	if ( ! pFnDrawStaticDebug )
		pFnDrawStaticDebug = (UFunction*) UObject::GObjObjects()->Data[ 37545 ];

	APBKActor_execDrawStaticDebug_Parms DrawStaticDebug_Parms;
	DrawStaticDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawStaticDebug_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawStaticDebug, &DrawStaticDebug_Parms, NULL );
};

// Function PlanBFramework.PBKActor.DebugCommand
// [0x00822002] 
// Parameters infos:
// class APBBasePlayerController* playerCtrl                     ( CPF_Parm )
// struct FString                 strCommand                     ( CPF_Parm | CPF_NeedCtorLink )

void APBKActor::DebugCommand ( class APBBasePlayerController* playerCtrl, struct FString strCommand )
{
	static UFunction* pFnDebugCommand = NULL;

	if ( ! pFnDebugCommand )
		pFnDebugCommand = (UFunction*) UObject::GObjObjects()->Data[ 37536 ];

	APBKActor_execDebugCommand_Parms DebugCommand_Parms;
	DebugCommand_Parms.playerCtrl = playerCtrl;
	memcpy ( &DebugCommand_Parms.strCommand, &strCommand, 0xC );

	this->ProcessEvent ( pFnDebugCommand, &DebugCommand_Parms, NULL );
};

// Function PlanBFramework.PBKActor.ModifyRadiusDamage
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// float                          fRadius                        ( CPF_Parm )
// float                          fBaseDamage                    ( CPF_Parm )

float APBKActor::ModifyRadiusDamage ( class AActor* Victim, struct FVector HurtOrigin, float fRadius, float fBaseDamage )
{
	static UFunction* pFnModifyRadiusDamage = NULL;

	if ( ! pFnModifyRadiusDamage )
		pFnModifyRadiusDamage = (UFunction*) UObject::GObjObjects()->Data[ 37530 ];

	APBKActor_execModifyRadiusDamage_Parms ModifyRadiusDamage_Parms;
	ModifyRadiusDamage_Parms.Victim = Victim;
	memcpy ( &ModifyRadiusDamage_Parms.HurtOrigin, &HurtOrigin, 0xC );
	ModifyRadiusDamage_Parms.fRadius = fRadius;
	ModifyRadiusDamage_Parms.fBaseDamage = fBaseDamage;

	this->ProcessEvent ( pFnModifyRadiusDamage, &ModifyRadiusDamage_Parms, NULL );

	return ModifyRadiusDamage_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.AGHurtRadius
// [0x00024102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          Momentum                       ( CPF_Parm )
// struct FVector                 HurtOrigin                     ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_OptionalParm | CPF_Parm )
// class AController*             InstigatedByController         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_OptionalParm | CPF_Parm )

bool APBKActor::AGHurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnAGHurtRadius = NULL;

	if ( ! pFnAGHurtRadius )
		pFnAGHurtRadius = (UFunction*) UObject::GObjObjects()->Data[ 37517 ];

	APBKActor_execAGHurtRadius_Parms AGHurtRadius_Parms;
	AGHurtRadius_Parms.BaseDamage = BaseDamage;
	AGHurtRadius_Parms.DamageRadius = DamageRadius;
	AGHurtRadius_Parms.DamageType = DamageType;
	AGHurtRadius_Parms.Momentum = Momentum;
	memcpy ( &AGHurtRadius_Parms.HurtOrigin, &HurtOrigin, 0xC );
	AGHurtRadius_Parms.IgnoredActor = IgnoredActor;
	AGHurtRadius_Parms.InstigatedByController = InstigatedByController;
	AGHurtRadius_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnAGHurtRadius, &AGHurtRadius_Parms, NULL );

	return AGHurtRadius_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.Detach
// [0x00020002] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void APBKActor::Detach ( class AActor* Other )
{
	static UFunction* pFnDetach = NULL;

	if ( ! pFnDetach )
		pFnDetach = (UFunction*) UObject::GObjObjects()->Data[ 37515 ];

	APBKActor_execDetach_Parms Detach_Parms;
	Detach_Parms.Other = Other;

	this->ProcessEvent ( pFnDetach, &Detach_Parms, NULL );
};

// Function PlanBFramework.PBKActor.Attach
// [0x00020002] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void APBKActor::Attach ( class AActor* Other )
{
	static UFunction* pFnAttach = NULL;

	if ( ! pFnAttach )
		pFnAttach = (UFunction*) UObject::GObjObjects()->Data[ 37512 ];

	APBKActor_execAttach_Parms Attach_Parms;
	Attach_Parms.Other = Other;

	this->ProcessEvent ( pFnAttach, &Attach_Parms, NULL );
};

// Function PlanBFramework.PBKActor.CreateExplosionLight
// [0x00024102] 
// Parameters infos:
// class UPBExplosionLight*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class AActor*                  attachTo                       ( CPF_OptionalParm | CPF_Parm )

class UPBExplosionLight* APBKActor::CreateExplosionLight ( class AActor* attachTo )
{
	static UFunction* pFnCreateExplosionLight = NULL;

	if ( ! pFnCreateExplosionLight )
		pFnCreateExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 37508 ];

	APBKActor_execCreateExplosionLight_Parms CreateExplosionLight_Parms;
	CreateExplosionLight_Parms.attachTo = attachTo;

	this->ProcessEvent ( pFnCreateExplosionLight, &CreateExplosionLight_Parms, NULL );

	return CreateExplosionLight_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.CreateAudioComponentAt
// [0x00020102] 
// Parameters infos:
// class UAudioComponent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class USoundCue*               ASound                         ( CPF_Parm )
// struct FVector                 SourceLocation                 ( CPF_Parm )

class UAudioComponent* APBKActor::CreateAudioComponentAt ( class USoundCue* ASound, struct FVector SourceLocation )
{
	static UFunction* pFnCreateAudioComponentAt = NULL;

	if ( ! pFnCreateAudioComponentAt )
		pFnCreateAudioComponentAt = (UFunction*) UObject::GObjObjects()->Data[ 37503 ];

	APBKActor_execCreateAudioComponentAt_Parms CreateAudioComponentAt_Parms;
	CreateAudioComponentAt_Parms.ASound = ASound;
	memcpy ( &CreateAudioComponentAt_Parms.SourceLocation, &SourceLocation, 0xC );

	this->ProcessEvent ( pFnCreateAudioComponentAt, &CreateAudioComponentAt_Parms, NULL );

	return CreateAudioComponentAt_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.CheckForErrors
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBKActor::CheckForErrors ( )
{
	static UFunction* pFnCheckForErrors = NULL;

	if ( ! pFnCheckForErrors )
		pFnCheckForErrors = (UFunction*) UObject::GObjObjects()->Data[ 37500 ];

	APBKActor_execCheckForErrors_Parms CheckForErrors_Parms;

	this->ProcessEvent ( pFnCheckForErrors, &CheckForErrors_Parms, NULL );

	return CheckForErrors_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.SetMaximumAngularVelocity
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          MaxVelocity                    ( CPF_Parm )

void APBKActor::SetMaximumAngularVelocity ( float MaxVelocity )
{
	static UFunction* pFnSetMaximumAngularVelocity = NULL;

	if ( ! pFnSetMaximumAngularVelocity )
		pFnSetMaximumAngularVelocity = (UFunction*) UObject::GObjObjects()->Data[ 37498 ];

	APBKActor_execSetMaximumAngularVelocity_Parms SetMaximumAngularVelocity_Parms;
	SetMaximumAngularVelocity_Parms.MaxVelocity = MaxVelocity;

	pFnSetMaximumAngularVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaximumAngularVelocity, &SetMaximumAngularVelocity_Parms, NULL );

	pFnSetMaximumAngularVelocity->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBKActor.WakeRigidBody
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 InitialLinearVelocity          ( CPF_Parm )
// struct FVector                 InitialAngularVelocity         ( CPF_Parm )

void APBKActor::WakeRigidBody ( struct FVector InitialLinearVelocity, struct FVector InitialAngularVelocity )
{
	static UFunction* pFnWakeRigidBody = NULL;

	if ( ! pFnWakeRigidBody )
		pFnWakeRigidBody = (UFunction*) UObject::GObjObjects()->Data[ 37495 ];

	APBKActor_execWakeRigidBody_Parms WakeRigidBody_Parms;
	memcpy ( &WakeRigidBody_Parms.InitialLinearVelocity, &InitialLinearVelocity, 0xC );
	memcpy ( &WakeRigidBody_Parms.InitialAngularVelocity, &InitialAngularVelocity, 0xC );

	pFnWakeRigidBody->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWakeRigidBody, &WakeRigidBody_Parms, NULL );

	pFnWakeRigidBody->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBKActor.ResetPhysics
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APBKActor::ResetPhysics ( )
{
	static UFunction* pFnResetPhysics = NULL;

	if ( ! pFnResetPhysics )
		pFnResetPhysics = (UFunction*) UObject::GObjObjects()->Data[ 37494 ];

	APBKActor_execResetPhysics_Parms ResetPhysics_Parms;

	pFnResetPhysics->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetPhysics, &ResetPhysics_Parms, NULL );

	pFnResetPhysics->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBKActor.PutToSleep
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void APBKActor::PutToSleep ( )
{
	static UFunction* pFnPutToSleep = NULL;

	if ( ! pFnPutToSleep )
		pFnPutToSleep = (UFunction*) UObject::GObjObjects()->Data[ 37493 ];

	APBKActor_execPutToSleep_Parms PutToSleep_Parms;

	pFnPutToSleep->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPutToSleep, &PutToSleep_Parms, NULL );

	pFnPutToSleep->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBKActor.GetRBMass
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nBodyIndex                     ( CPF_Parm )

float APBKActor::GetRBMass ( int nBodyIndex )
{
	static UFunction* pFnGetRBMass = NULL;

	if ( ! pFnGetRBMass )
		pFnGetRBMass = (UFunction*) UObject::GObjObjects()->Data[ 37490 ];

	APBKActor_execGetRBMass_Parms GetRBMass_Parms;
	GetRBMass_Parms.nBodyIndex = nBodyIndex;

	pFnGetRBMass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRBMass, &GetRBMass_Parms, NULL );

	pFnGetRBMass->FunctionFlags |= 0x400;

	return GetRBMass_Parms.ReturnValue;
};

// Function PlanBFramework.PBKActor.GetPhysicalMaterial
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPhysicalMaterial* APBKActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 37488 ];

	APBKActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	pFnGetPhysicalMaterial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );

	pFnGetPhysicalMaterial->FunctionFlags |= 0x400;

	return GetPhysicalMaterial_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsBasePawn.PlayTakeHitEffects_U3
// [0x00020100] 
// Parameters infos:

void APBPhysicsBasePawn::PlayTakeHitEffects_U3 ( )
{
	static UFunction* pFnPlayTakeHitEffects_U3 = NULL;

	if ( ! pFnPlayTakeHitEffects_U3 )
		pFnPlayTakeHitEffects_U3 = (UFunction*) UObject::GObjObjects()->Data[ 37698 ];

	APBPhysicsBasePawn_execPlayTakeHitEffects_U3_Parms PlayTakeHitEffects_U3_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects_U3, &PlayTakeHitEffects_U3_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsBasePawn.PlayHit_U3
// [0x00020000] 
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )

void APBPhysicsBasePawn::PlayHit_U3 ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo )
{
	static UFunction* pFnPlayHit_U3 = NULL;

	if ( ! pFnPlayHit_U3 )
		pFnPlayHit_U3 = (UFunction*) UObject::GObjObjects()->Data[ 37691 ];

	APBPhysicsBasePawn_execPlayHit_U3_Parms PlayHit_U3_Parms;
	PlayHit_U3_Parms.Damage = Damage;
	PlayHit_U3_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &PlayHit_U3_Parms.HitLocation, &HitLocation, 0xC );
	PlayHit_U3_Parms.DamageType = DamageType;
	memcpy ( &PlayHit_U3_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayHit_U3_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnPlayHit_U3, &PlayHit_U3_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsBasePawn.PlayHit
// [0x00024002] 
// Parameters infos:
// float                          Damage                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void APBPhysicsBasePawn::PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnPlayHit = NULL;

	if ( ! pFnPlayHit )
		pFnPlayHit = (UFunction*) UObject::GObjObjects()->Data[ 37683 ];

	APBPhysicsBasePawn_execPlayHit_Parms PlayHit_Parms;
	PlayHit_Parms.Damage = Damage;
	PlayHit_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &PlayHit_Parms.HitLocation, &HitLocation, 0xC );
	PlayHit_Parms.DamageType = DamageType;
	memcpy ( &PlayHit_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &PlayHit_Parms.HitInfo, &HitInfo, 0x1C );
	PlayHit_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnPlayHit, &PlayHit_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsBasePawn.IsUpperBoneName
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InName                         ( CPF_Parm )

bool APBPhysicsBasePawn::IsUpperBoneName ( struct FName InName )
{
	static UFunction* pFnIsUpperBoneName = NULL;

	if ( ! pFnIsUpperBoneName )
		pFnIsUpperBoneName = (UFunction*) UObject::GObjObjects()->Data[ 37680 ];

	APBPhysicsBasePawn_execIsUpperBoneName_Parms IsUpperBoneName_Parms;
	memcpy ( &IsUpperBoneName_Parms.InName, &InName, 0x8 );

	this->ProcessEvent ( pFnIsUpperBoneName, &IsUpperBoneName_Parms, NULL );

	return IsUpperBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsBasePawn.IsLowerBoneName
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   InName                         ( CPF_Parm )

bool APBPhysicsBasePawn::IsLowerBoneName ( struct FName InName )
{
	static UFunction* pFnIsLowerBoneName = NULL;

	if ( ! pFnIsLowerBoneName )
		pFnIsLowerBoneName = (UFunction*) UObject::GObjObjects()->Data[ 37674 ];

	APBPhysicsBasePawn_execIsLowerBoneName_Parms IsLowerBoneName_Parms;
	memcpy ( &IsLowerBoneName_Parms.InName, &InName, 0x8 );

	this->ProcessEvent ( pFnIsLowerBoneName, &IsLowerBoneName_Parms, NULL );

	return IsLowerBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsBasePawn.GetLowerBoneNames
// [0x00420100] 
// Parameters infos:
// TArray< struct FName >         lowerBodyBoneNames             ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APBPhysicsBasePawn::GetLowerBoneNames ( TArray< struct FName >* lowerBodyBoneNames )
{
	static UFunction* pFnGetLowerBoneNames = NULL;

	if ( ! pFnGetLowerBoneNames )
		pFnGetLowerBoneNames = (UFunction*) UObject::GObjObjects()->Data[ 37671 ];

	APBPhysicsBasePawn_execGetLowerBoneNames_Parms GetLowerBoneNames_Parms;

	this->ProcessEvent ( pFnGetLowerBoneNames, &GetLowerBoneNames_Parms, NULL );

	if ( lowerBodyBoneNames )
		memcpy ( lowerBodyBoneNames, &GetLowerBoneNames_Parms.lowerBodyBoneNames, 0xC );
};

// Function PlanBFramework.PBPhysicsBasePawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void APBPhysicsBasePawn::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 37669 ];

	APBPhysicsBasePawn_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetDebugInfo
// [0x00420102] 
// Parameters infos:
// TArray< struct FString >       DebugInfo                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBPhysicsSynchronizer::GetDebugInfo ( TArray< struct FString >* DebugInfo )
{
	static UFunction* pFnGetDebugInfo = NULL;

	if ( ! pFnGetDebugInfo )
		pFnGetDebugInfo = (UFunction*) UObject::GObjObjects()->Data[ 37358 ];

	UPBPhysicsSynchronizer_execGetDebugInfo_Parms GetDebugInfo_Parms;

	this->ProcessEvent ( pFnGetDebugInfo, &GetDebugInfo_Parms, NULL );

	if ( DebugInfo )
		memcpy ( DebugInfo, &GetDebugInfo_Parms.DebugInfo, 0xC );
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebug_ResetInformation
// [0x00020102] 
// Parameters infos:
// class AActor*                  invoker                        ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawDebug_ResetInformation ( class AActor* invoker )
{
	static UFunction* pFnDrawDebug_ResetInformation = NULL;

	if ( ! pFnDrawDebug_ResetInformation )
		pFnDrawDebug_ResetInformation = (UFunction*) UObject::GObjObjects()->Data[ 37352 ];

	UPBPhysicsSynchronizer_execDrawDebug_ResetInformation_Parms DrawDebug_ResetInformation_Parms;
	DrawDebug_ResetInformation_Parms.invoker = invoker;

	this->ProcessEvent ( pFnDrawDebug_ResetInformation, &DrawDebug_ResetInformation_Parms, NULL );
};

// Function PlanBFramework.PBPhysicsSynchronizer.StoreResetInformation
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 InLocation                     ( CPF_Parm )
// struct FRotator                InRotation                     ( CPF_Parm )

void UPBPhysicsSynchronizer::StoreResetInformation ( struct FVector InLocation, struct FRotator InRotation )
{
	static UFunction* pFnStoreResetInformation = NULL;

	if ( ! pFnStoreResetInformation )
		pFnStoreResetInformation = (UFunction*) UObject::GObjObjects()->Data[ 37349 ];

	UPBPhysicsSynchronizer_execStoreResetInformation_Parms StoreResetInformation_Parms;
	memcpy ( &StoreResetInformation_Parms.InLocation, &InLocation, 0xC );
	memcpy ( &StoreResetInformation_Parms.InRotation, &InRotation, 0xC );

	pFnStoreResetInformation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStoreResetInformation, &StoreResetInformation_Parms, NULL );

	pFnStoreResetInformation->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.ResetToInitialPhysicsState
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPBPhysicsSynchronizer::ResetToInitialPhysicsState ( )
{
	static UFunction* pFnResetToInitialPhysicsState = NULL;

	if ( ! pFnResetToInitialPhysicsState )
		pFnResetToInitialPhysicsState = (UFunction*) UObject::GObjObjects()->Data[ 37348 ];

	UPBPhysicsSynchronizer_execResetToInitialPhysicsState_Parms ResetToInitialPhysicsState_Parms;

	pFnResetToInitialPhysicsState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetToInitialPhysicsState, &ResetToInitialPhysicsState_Parms, NULL );

	pFnResetToInitialPhysicsState->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.ResetLastReceivedSendData
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPBPhysicsSynchronizer::ResetLastReceivedSendData ( )
{
	static UFunction* pFnResetLastReceivedSendData = NULL;

	if ( ! pFnResetLastReceivedSendData )
		pFnResetLastReceivedSendData = (UFunction*) UObject::GObjObjects()->Data[ 37347 ];

	UPBPhysicsSynchronizer_execResetLastReceivedSendData_Parms ResetLastReceivedSendData_Parms;

	pFnResetLastReceivedSendData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetLastReceivedSendData, &ResetLastReceivedSendData_Parms, NULL );

	pFnResetLastReceivedSendData->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.OnRigidBodyStateReplication
// [0x00420501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRigidBodyState         RBState                        ( CPF_Parm | CPF_OutParm )

void UPBPhysicsSynchronizer::OnRigidBodyStateReplication ( struct FRigidBodyState* RBState )
{
	static UFunction* pFnOnRigidBodyStateReplication = NULL;

	if ( ! pFnOnRigidBodyStateReplication )
		pFnOnRigidBodyStateReplication = (UFunction*) UObject::GObjObjects()->Data[ 37345 ];

	UPBPhysicsSynchronizer_execOnRigidBodyStateReplication_Parms OnRigidBodyStateReplication_Parms;

	pFnOnRigidBodyStateReplication->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRigidBodyStateReplication, &OnRigidBodyStateReplication_Parms, NULL );

	pFnOnRigidBodyStateReplication->FunctionFlags |= 0x400;

	if ( RBState )
		memcpy ( RBState, &OnRigidBodyStateReplication_Parms.RBState, 0x40 );
};

// Function PlanBFramework.PBPhysicsSynchronizer.MeterToUT
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fMeter                         ( CPF_Parm )

float UPBPhysicsSynchronizer::MeterToUT ( float fMeter )
{
	static UFunction* pFnMeterToUT = NULL;

	if ( ! pFnMeterToUT )
		pFnMeterToUT = (UFunction*) UObject::GObjObjects()->Data[ 37342 ];

	UPBPhysicsSynchronizer_execMeterToUT_Parms MeterToUT_Parms;
	MeterToUT_Parms.fMeter = fMeter;

	pFnMeterToUT->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMeterToUT, &MeterToUT_Parms, NULL );

	pFnMeterToUT->FunctionFlags |= 0x400;

	return MeterToUT_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.KmhToUTs
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fKmH                           ( CPF_Parm )

float UPBPhysicsSynchronizer::KmhToUTs ( float fKmH )
{
	static UFunction* pFnKmhToUTs = NULL;

	if ( ! pFnKmhToUTs )
		pFnKmhToUTs = (UFunction*) UObject::GObjObjects()->Data[ 37339 ];

	UPBPhysicsSynchronizer_execKmhToUTs_Parms KmhToUTs_Parms;
	KmhToUTs_Parms.fKmH = fKmH;

	pFnKmhToUTs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKmhToUTs, &KmhToUTs_Parms, NULL );

	pFnKmhToUTs->FunctionFlags |= 0x400;

	return KmhToUTs_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetRBMass
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nBodyIndex                     ( CPF_Parm )

float UPBPhysicsSynchronizer::GetRBMass ( int nBodyIndex )
{
	static UFunction* pFnGetRBMass = NULL;

	if ( ! pFnGetRBMass )
		pFnGetRBMass = (UFunction*) UObject::GObjObjects()->Data[ 37336 ];

	UPBPhysicsSynchronizer_execGetRBMass_Parms GetRBMass_Parms;
	GetRBMass_Parms.nBodyIndex = nBodyIndex;

	pFnGetRBMass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRBMass, &GetRBMass_Parms, NULL );

	pFnGetRBMass->FunctionFlags |= 0x400;

	return GetRBMass_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.UTToMeter
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fU3                            ( CPF_Parm )

float UPBPhysicsSynchronizer::UTToMeter ( float fU3 )
{
	static UFunction* pFnUTToMeter = NULL;

	if ( ! pFnUTToMeter )
		pFnUTToMeter = (UFunction*) UObject::GObjObjects()->Data[ 37207 ];

	UPBPhysicsSynchronizer_execUTToMeter_Parms UTToMeter_Parms;
	UTToMeter_Parms.fU3 = fU3;

	pFnUTToMeter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUTToMeter, &UTToMeter_Parms, NULL );

	pFnUTToMeter->FunctionFlags |= 0x400;

	return UTToMeter_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.UTsToKmh
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fU3Velocity                    ( CPF_Parm )

float UPBPhysicsSynchronizer::UTsToKmh ( float fU3Velocity )
{
	static UFunction* pFnUTsToKmh = NULL;

	if ( ! pFnUTsToKmh )
		pFnUTsToKmh = (UFunction*) UObject::GObjObjects()->Data[ 36720 ];

	UPBPhysicsSynchronizer_execUTsToKmh_Parms UTsToKmh_Parms;
	UTsToKmh_Parms.fU3Velocity = fU3Velocity;

	pFnUTsToKmh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUTsToKmh, &UTsToKmh_Parms, NULL );

	pFnUTsToKmh->FunctionFlags |= 0x400;

	return UTsToKmh_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetKmh
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 vU3Velocity                    ( CPF_Parm )

struct FVector UPBPhysicsSynchronizer::GetKmh ( struct FVector vU3Velocity )
{
	static UFunction* pFnGetKmh = NULL;

	if ( ! pFnGetKmh )
		pFnGetKmh = (UFunction*) UObject::GObjObjects()->Data[ 37331 ];

	UPBPhysicsSynchronizer_execGetKmh_Parms GetKmh_Parms;
	memcpy ( &GetKmh_Parms.vU3Velocity, &vU3Velocity, 0xC );

	pFnGetKmh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetKmh, &GetKmh_Parms, NULL );

	pFnGetKmh->FunctionFlags |= 0x400;

	return GetKmh_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.InitialPhysicsStateSnapshot
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UPBPhysicsSynchronizer::InitialPhysicsStateSnapshot ( )
{
	static UFunction* pFnInitialPhysicsStateSnapshot = NULL;

	if ( ! pFnInitialPhysicsStateSnapshot )
		pFnInitialPhysicsStateSnapshot = (UFunction*) UObject::GObjObjects()->Data[ 37330 ];

	UPBPhysicsSynchronizer_execInitialPhysicsStateSnapshot_Parms InitialPhysicsStateSnapshot_Parms;

	pFnInitialPhysicsStateSnapshot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitialPhysicsStateSnapshot, &InitialPhysicsStateSnapshot_Parms, NULL );

	pFnInitialPhysicsStateSnapshot->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetCorrectPhysicalMaterialForStaticMesh
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UStaticMeshComponent*    SMC                            ( CPF_Parm | CPF_EditInline )

class UPhysicalMaterial* UPBPhysicsSynchronizer::GetCorrectPhysicalMaterialForStaticMesh ( class UStaticMeshComponent* SMC )
{
	static UFunction* pFnGetCorrectPhysicalMaterialForStaticMesh = NULL;

	if ( ! pFnGetCorrectPhysicalMaterialForStaticMesh )
		pFnGetCorrectPhysicalMaterialForStaticMesh = (UFunction*) UObject::GObjObjects()->Data[ 37327 ];

	UPBPhysicsSynchronizer_execGetCorrectPhysicalMaterialForStaticMesh_Parms GetCorrectPhysicalMaterialForStaticMesh_Parms;
	GetCorrectPhysicalMaterialForStaticMesh_Parms.SMC = SMC;

	pFnGetCorrectPhysicalMaterialForStaticMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCorrectPhysicalMaterialForStaticMesh, &GetCorrectPhysicalMaterialForStaticMesh_Parms, NULL );

	pFnGetCorrectPhysicalMaterialForStaticMesh->FunctionFlags |= 0x400;

	return GetCorrectPhysicalMaterialForStaticMesh_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawPhysicsDebug
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawPhysicsDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawPhysicsDebug = NULL;

	if ( ! pFnDrawPhysicsDebug )
		pFnDrawPhysicsDebug = (UFunction*) UObject::GObjObjects()->Data[ 37324 ];

	UPBPhysicsSynchronizer_execDrawPhysicsDebug_Parms DrawPhysicsDebug_Parms;
	DrawPhysicsDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawPhysicsDebug_Parms.Canvas = Canvas;

	pFnDrawPhysicsDebug->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawPhysicsDebug, &DrawPhysicsDebug_Parms, NULL );

	pFnDrawPhysicsDebug->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugPoint
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 vPosition                      ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawDebugPoint ( struct FVector vPosition, unsigned char R, unsigned char G, unsigned char B )
{
	static UFunction* pFnDrawDebugPoint = NULL;

	if ( ! pFnDrawDebugPoint )
		pFnDrawDebugPoint = (UFunction*) UObject::GObjObjects()->Data[ 37319 ];

	UPBPhysicsSynchronizer_execDrawDebugPoint_Parms DrawDebugPoint_Parms;
	memcpy ( &DrawDebugPoint_Parms.vPosition, &vPosition, 0xC );
	DrawDebugPoint_Parms.R = R;
	DrawDebugPoint_Parms.G = G;
	DrawDebugPoint_Parms.B = B;

	pFnDrawDebugPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugPoint, &DrawDebugPoint_Parms, NULL );

	pFnDrawDebugPoint->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugLine
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 vStart                         ( CPF_Parm )
// struct FVector                 vEnd                           ( CPF_Parm )
// unsigned long                  bDrawPoints                    ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawDebugLine ( struct FVector vStart, struct FVector vEnd, unsigned long bDrawPoints )
{
	static UFunction* pFnDrawDebugLine = NULL;

	if ( ! pFnDrawDebugLine )
		pFnDrawDebugLine = (UFunction*) UObject::GObjObjects()->Data[ 36803 ];

	UPBPhysicsSynchronizer_execDrawDebugLine_Parms DrawDebugLine_Parms;
	memcpy ( &DrawDebugLine_Parms.vStart, &vStart, 0xC );
	memcpy ( &DrawDebugLine_Parms.vEnd, &vEnd, 0xC );
	DrawDebugLine_Parms.bDrawPoints = bDrawPoints;

	pFnDrawDebugLine->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugLine, &DrawDebugLine_Parms, NULL );

	pFnDrawDebugLine->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugTraceLine
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 vStart                         ( CPF_Parm )
// struct FVector                 vEnd                           ( CPF_Parm )
// struct FVector                 vHitLocation                   ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawDebugTraceLine ( struct FVector vStart, struct FVector vEnd, struct FVector vHitLocation )
{
	static UFunction* pFnDrawDebugTraceLine = NULL;

	if ( ! pFnDrawDebugTraceLine )
		pFnDrawDebugTraceLine = (UFunction*) UObject::GObjObjects()->Data[ 37312 ];

	UPBPhysicsSynchronizer_execDrawDebugTraceLine_Parms DrawDebugTraceLine_Parms;
	memcpy ( &DrawDebugTraceLine_Parms.vStart, &vStart, 0xC );
	memcpy ( &DrawDebugTraceLine_Parms.vEnd, &vEnd, 0xC );
	memcpy ( &DrawDebugTraceLine_Parms.vHitLocation, &vHitLocation, 0xC );

	pFnDrawDebugTraceLine->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugTraceLine, &DrawDebugTraceLine_Parms, NULL );

	pFnDrawDebugTraceLine->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugDiamond
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 Position                       ( CPF_Parm )
// float                          Radius                         ( CPF_Parm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned long                  bAddPointMarker                ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawDebugDiamond ( struct FVector Position, float Radius, unsigned char R, unsigned char G, unsigned char B, unsigned long bAddPointMarker )
{
	static UFunction* pFnDrawDebugDiamond = NULL;

	if ( ! pFnDrawDebugDiamond )
		pFnDrawDebugDiamond = (UFunction*) UObject::GObjObjects()->Data[ 36804 ];

	UPBPhysicsSynchronizer_execDrawDebugDiamond_Parms DrawDebugDiamond_Parms;
	memcpy ( &DrawDebugDiamond_Parms.Position, &Position, 0xC );
	DrawDebugDiamond_Parms.Radius = Radius;
	DrawDebugDiamond_Parms.R = R;
	DrawDebugDiamond_Parms.G = G;
	DrawDebugDiamond_Parms.B = B;
	DrawDebugDiamond_Parms.bAddPointMarker = bAddPointMarker;

	pFnDrawDebugDiamond->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebugDiamond, &DrawDebugDiamond_Parms, NULL );

	pFnDrawDebugDiamond->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebug
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void UPBPhysicsSynchronizer::DrawDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37303 ];

	UPBPhysicsSynchronizer_execDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawDebug_Parms.Canvas = Canvas;

	pFnDrawDebug->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );

	pFnDrawDebug->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.HasPhysicsDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eDebugFlag                     ( CPF_Parm )

bool UPBPhysicsSynchronizer::HasPhysicsDebugFlag ( unsigned char eDebugFlag )
{
	static UFunction* pFnHasPhysicsDebugFlag = NULL;

	if ( ! pFnHasPhysicsDebugFlag )
		pFnHasPhysicsDebugFlag = (UFunction*) UObject::GObjObjects()->Data[ 37300 ];

	UPBPhysicsSynchronizer_execHasPhysicsDebugFlag_Parms HasPhysicsDebugFlag_Parms;
	HasPhysicsDebugFlag_Parms.eDebugFlag = eDebugFlag;

	pFnHasPhysicsDebugFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasPhysicsDebugFlag, &HasPhysicsDebugFlag_Parms, NULL );

	pFnHasPhysicsDebugFlag->FunctionFlags |= 0x400;

	return HasPhysicsDebugFlag_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.TogglePhysicsDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eDebugFlag                     ( CPF_Parm )

void UPBPhysicsSynchronizer::TogglePhysicsDebugFlag ( unsigned char eDebugFlag )
{
	static UFunction* pFnTogglePhysicsDebugFlag = NULL;

	if ( ! pFnTogglePhysicsDebugFlag )
		pFnTogglePhysicsDebugFlag = (UFunction*) UObject::GObjObjects()->Data[ 37298 ];

	UPBPhysicsSynchronizer_execTogglePhysicsDebugFlag_Parms TogglePhysicsDebugFlag_Parms;
	TogglePhysicsDebugFlag_Parms.eDebugFlag = eDebugFlag;

	pFnTogglePhysicsDebugFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTogglePhysicsDebugFlag, &TogglePhysicsDebugFlag_Parms, NULL );

	pFnTogglePhysicsDebugFlag->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.HasLineCheckDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eDebugFlag                     ( CPF_Parm )

bool UPBPhysicsSynchronizer::HasLineCheckDebugFlag ( unsigned char eDebugFlag )
{
	static UFunction* pFnHasLineCheckDebugFlag = NULL;

	if ( ! pFnHasLineCheckDebugFlag )
		pFnHasLineCheckDebugFlag = (UFunction*) UObject::GObjObjects()->Data[ 37295 ];

	UPBPhysicsSynchronizer_execHasLineCheckDebugFlag_Parms HasLineCheckDebugFlag_Parms;
	HasLineCheckDebugFlag_Parms.eDebugFlag = eDebugFlag;

	pFnHasLineCheckDebugFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLineCheckDebugFlag, &HasLineCheckDebugFlag_Parms, NULL );

	pFnHasLineCheckDebugFlag->FunctionFlags |= 0x400;

	return HasLineCheckDebugFlag_Parms.ReturnValue;
};

// Function PlanBFramework.PBPhysicsSynchronizer.ToggleLineCheckDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eDebugFlag                     ( CPF_Parm )

void UPBPhysicsSynchronizer::ToggleLineCheckDebugFlag ( unsigned char eDebugFlag )
{
	static UFunction* pFnToggleLineCheckDebugFlag = NULL;

	if ( ! pFnToggleLineCheckDebugFlag )
		pFnToggleLineCheckDebugFlag = (UFunction*) UObject::GObjObjects()->Data[ 36802 ];

	UPBPhysicsSynchronizer_execToggleLineCheckDebugFlag_Parms ToggleLineCheckDebugFlag_Parms;
	ToggleLineCheckDebugFlag_Parms.eDebugFlag = eDebugFlag;

	pFnToggleLineCheckDebugFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleLineCheckDebugFlag, &ToggleLineCheckDebugFlag_Parms, NULL );

	pFnToggleLineCheckDebugFlag->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBPhysicsSynchronizer.EnableOnRigidBodyCollision
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bValue                         ( CPF_Parm )

void UPBPhysicsSynchronizer::EnableOnRigidBodyCollision ( unsigned long bValue )
{
	static UFunction* pFnEnableOnRigidBodyCollision = NULL;

	if ( ! pFnEnableOnRigidBodyCollision )
		pFnEnableOnRigidBodyCollision = (UFunction*) UObject::GObjObjects()->Data[ 36673 ];

	UPBPhysicsSynchronizer_execEnableOnRigidBodyCollision_Parms EnableOnRigidBodyCollision_Parms;
	EnableOnRigidBodyCollision_Parms.bValue = bValue;

	pFnEnableOnRigidBodyCollision->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableOnRigidBodyCollision, &EnableOnRigidBodyCollision_Parms, NULL );

	pFnEnableOnRigidBodyCollision->FunctionFlags |= 0x400;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetDebugInfo
// [0x00420100] 
// Parameters infos:
// TArray< struct FString >       DebugInfo                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPBSkeletalMeshExtension::GetDebugInfo ( TArray< struct FString >* DebugInfo )
{
	static UFunction* pFnGetDebugInfo = NULL;

	if ( ! pFnGetDebugInfo )
		pFnGetDebugInfo = (UFunction*) UObject::GObjObjects()->Data[ 37744 ];

	UPBSkeletalMeshExtension_execGetDebugInfo_Parms GetDebugInfo_Parms;

	this->ProcessEvent ( pFnGetDebugInfo, &GetDebugInfo_Parms, NULL );

	if ( DebugInfo )
		memcpy ( DebugInfo, &GetDebugInfo_Parms.DebugInfo, 0xC );
};

// Function PlanBFramework.PBSkeletalMeshExtension.HasSocket
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SocketName                     ( CPF_Parm )

bool UPBSkeletalMeshExtension::HasSocket ( struct FName SocketName )
{
	static UFunction* pFnHasSocket = NULL;

	if ( ! pFnHasSocket )
		pFnHasSocket = (UFunction*) UObject::GObjObjects()->Data[ 37741 ];

	UPBSkeletalMeshExtension_execHasSocket_Parms HasSocket_Parms;
	memcpy ( &HasSocket_Parms.SocketName, &SocketName, 0x8 );

	pFnHasSocket->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasSocket, &HasSocket_Parms, NULL );

	pFnHasSocket->FunctionFlags |= 0x400;

	return HasSocket_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.HasBone
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   skelBoneName                   ( CPF_Parm )

bool UPBSkeletalMeshExtension::HasBone ( struct FName skelBoneName )
{
	static UFunction* pFnHasBone = NULL;

	if ( ! pFnHasBone )
		pFnHasBone = (UFunction*) UObject::GObjObjects()->Data[ 37738 ];

	UPBSkeletalMeshExtension_execHasBone_Parms HasBone_Parms;
	memcpy ( &HasBone_Parms.skelBoneName, &skelBoneName, 0x8 );

	pFnHasBone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasBone, &HasBone_Parms, NULL );

	pFnHasBone->FunctionFlags |= 0x400;

	return HasBone_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetSkeletalMesh
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class USkeletalMesh*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class USkeletalMesh* UPBSkeletalMeshExtension::GetSkeletalMesh ( )
{
	static UFunction* pFnGetSkeletalMesh = NULL;

	if ( ! pFnGetSkeletalMesh )
		pFnGetSkeletalMesh = (UFunction*) UObject::GObjObjects()->Data[ 37736 ];

	UPBSkeletalMeshExtension_execGetSkeletalMesh_Parms GetSkeletalMesh_Parms;

	pFnGetSkeletalMesh->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSkeletalMesh, &GetSkeletalMesh_Parms, NULL );

	pFnGetSkeletalMesh->FunctionFlags |= 0x400;

	return GetSkeletalMesh_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetNamedMeshLocationAndRotation
// [0x00420501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   refName                        ( CPF_Parm )
// struct FVector                 vLocation                      ( CPF_Parm | CPF_OutParm )
// struct FRotator                rRotation                      ( CPF_Parm | CPF_OutParm )

bool UPBSkeletalMeshExtension::GetNamedMeshLocationAndRotation ( struct FName refName, struct FVector* vLocation, struct FRotator* rRotation )
{
	static UFunction* pFnGetNamedMeshLocationAndRotation = NULL;

	if ( ! pFnGetNamedMeshLocationAndRotation )
		pFnGetNamedMeshLocationAndRotation = (UFunction*) UObject::GObjObjects()->Data[ 37731 ];

	UPBSkeletalMeshExtension_execGetNamedMeshLocationAndRotation_Parms GetNamedMeshLocationAndRotation_Parms;
	memcpy ( &GetNamedMeshLocationAndRotation_Parms.refName, &refName, 0x8 );

	pFnGetNamedMeshLocationAndRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNamedMeshLocationAndRotation, &GetNamedMeshLocationAndRotation_Parms, NULL );

	pFnGetNamedMeshLocationAndRotation->FunctionFlags |= 0x400;

	if ( vLocation )
		memcpy ( vLocation, &GetNamedMeshLocationAndRotation_Parms.vLocation, 0xC );

	if ( rRotation )
		memcpy ( rRotation, &GetNamedMeshLocationAndRotation_Parms.rRotation, 0xC );

	return GetNamedMeshLocationAndRotation_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetNamedMeshLocation
// [0x00420501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   refName                        ( CPF_Parm )
// struct FVector                 vLocation                      ( CPF_Parm | CPF_OutParm )

bool UPBSkeletalMeshExtension::GetNamedMeshLocation ( struct FName refName, struct FVector* vLocation )
{
	static UFunction* pFnGetNamedMeshLocation = NULL;

	if ( ! pFnGetNamedMeshLocation )
		pFnGetNamedMeshLocation = (UFunction*) UObject::GObjObjects()->Data[ 37727 ];

	UPBSkeletalMeshExtension_execGetNamedMeshLocation_Parms GetNamedMeshLocation_Parms;
	memcpy ( &GetNamedMeshLocation_Parms.refName, &refName, 0x8 );

	pFnGetNamedMeshLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNamedMeshLocation, &GetNamedMeshLocation_Parms, NULL );

	pFnGetNamedMeshLocation->FunctionFlags |= 0x400;

	if ( vLocation )
		memcpy ( vLocation, &GetNamedMeshLocation_Parms.vLocation, 0xC );

	return GetNamedMeshLocation_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetMatchingBoneIndex
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   skelBoneName                   ( CPF_Parm )

int UPBSkeletalMeshExtension::GetMatchingBoneIndex ( struct FName skelBoneName )
{
	static UFunction* pFnGetMatchingBoneIndex = NULL;

	if ( ! pFnGetMatchingBoneIndex )
		pFnGetMatchingBoneIndex = (UFunction*) UObject::GObjObjects()->Data[ 37724 ];

	UPBSkeletalMeshExtension_execGetMatchingBoneIndex_Parms GetMatchingBoneIndex_Parms;
	memcpy ( &GetMatchingBoneIndex_Parms.skelBoneName, &skelBoneName, 0x8 );

	pFnGetMatchingBoneIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMatchingBoneIndex, &GetMatchingBoneIndex_Parms, NULL );

	pFnGetMatchingBoneIndex->FunctionFlags |= 0x400;

	return GetMatchingBoneIndex_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetCLODBoneName
// [0x00420501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   skelBoneNamePattern            ( CPF_Parm )
// struct FName                   skelBoneName                   ( CPF_Parm | CPF_OutParm )

bool UPBSkeletalMeshExtension::GetCLODBoneName ( struct FName skelBoneNamePattern, struct FName* skelBoneName )
{
	static UFunction* pFnGetCLODBoneName = NULL;

	if ( ! pFnGetCLODBoneName )
		pFnGetCLODBoneName = (UFunction*) UObject::GObjObjects()->Data[ 37720 ];

	UPBSkeletalMeshExtension_execGetCLODBoneName_Parms GetCLODBoneName_Parms;
	memcpy ( &GetCLODBoneName_Parms.skelBoneNamePattern, &skelBoneNamePattern, 0x8 );

	pFnGetCLODBoneName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCLODBoneName, &GetCLODBoneName_Parms, NULL );

	pFnGetCLODBoneName->FunctionFlags |= 0x400;

	if ( skelBoneName )
		memcpy ( skelBoneName, &GetCLODBoneName_Parms.skelBoneName, 0x8 );

	return GetCLODBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetBoneName
// [0x00420501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BoneIndex                      ( CPF_Parm )
// struct FName                   skelBoneName                   ( CPF_Parm | CPF_OutParm )

bool UPBSkeletalMeshExtension::GetBoneName ( int BoneIndex, struct FName* skelBoneName )
{
	static UFunction* pFnGetBoneName = NULL;

	if ( ! pFnGetBoneName )
		pFnGetBoneName = (UFunction*) UObject::GObjObjects()->Data[ 37716 ];

	UPBSkeletalMeshExtension_execGetBoneName_Parms GetBoneName_Parms;
	GetBoneName_Parms.BoneIndex = BoneIndex;

	pFnGetBoneName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoneName, &GetBoneName_Parms, NULL );

	pFnGetBoneName->FunctionFlags |= 0x400;

	if ( skelBoneName )
		memcpy ( skelBoneName, &GetBoneName_Parms.skelBoneName, 0x8 );

	return GetBoneName_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetBoneLocation
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BoneIndex                      ( CPF_Parm )

struct FVector UPBSkeletalMeshExtension::GetBoneLocation ( int BoneIndex )
{
	static UFunction* pFnGetBoneLocation = NULL;

	if ( ! pFnGetBoneLocation )
		pFnGetBoneLocation = (UFunction*) UObject::GObjObjects()->Data[ 37713 ];

	UPBSkeletalMeshExtension_execGetBoneLocation_Parms GetBoneLocation_Parms;
	GetBoneLocation_Parms.BoneIndex = BoneIndex;

	pFnGetBoneLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoneLocation, &GetBoneLocation_Parms, NULL );

	pFnGetBoneLocation->FunctionFlags |= 0x400;

	return GetBoneLocation_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetBoneIndex
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   skelBoneName                   ( CPF_Parm )

int UPBSkeletalMeshExtension::GetBoneIndex ( struct FName skelBoneName )
{
	static UFunction* pFnGetBoneIndex = NULL;

	if ( ! pFnGetBoneIndex )
		pFnGetBoneIndex = (UFunction*) UObject::GObjObjects()->Data[ 37710 ];

	UPBSkeletalMeshExtension_execGetBoneIndex_Parms GetBoneIndex_Parms;
	memcpy ( &GetBoneIndex_Parms.skelBoneName, &skelBoneName, 0x8 );

	pFnGetBoneIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoneIndex, &GetBoneIndex_Parms, NULL );

	pFnGetBoneIndex->FunctionFlags |= 0x400;

	return GetBoneIndex_Parms.ReturnValue;
};

// Function PlanBFramework.PBSkeletalMeshExtension.IsStringInName
// [0x00020501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FName                   testName                       ( CPF_Parm )

bool UPBSkeletalMeshExtension::IsStringInName ( struct FString Str, struct FName testName )
{
	static UFunction* pFnIsStringInName = NULL;

	if ( ! pFnIsStringInName )
		pFnIsStringInName = (UFunction*) UObject::GObjObjects()->Data[ 37706 ];

	UPBSkeletalMeshExtension_execIsStringInName_Parms IsStringInName_Parms;
	memcpy ( &IsStringInName_Parms.Str, &Str, 0xC );
	memcpy ( &IsStringInName_Parms.testName, &testName, 0x8 );

	pFnIsStringInName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsStringInName, &IsStringInName_Parms, NULL );

	pFnIsStringInName->FunctionFlags |= 0x400;

	return IsStringInName_Parms.ReturnValue;
};

// Function PlanBFramework.PBBaseDamageType.GetCorrectDeathAnimationFromHitLoc
// [0x00022002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   BoneName                       ( CPF_Parm )
// unsigned long                  bBehind                        ( CPF_Parm )

struct FName UPBBaseDamageType::GetCorrectDeathAnimationFromHitLoc ( struct FName BoneName, unsigned long bBehind )
{
	static UFunction* pFnGetCorrectDeathAnimationFromHitLoc = NULL;

	if ( ! pFnGetCorrectDeathAnimationFromHitLoc )
		pFnGetCorrectDeathAnimationFromHitLoc = (UFunction*) UObject::GObjObjects()->Data[ 36659 ];

	UPBBaseDamageType_execGetCorrectDeathAnimationFromHitLoc_Parms GetCorrectDeathAnimationFromHitLoc_Parms;
	memcpy ( &GetCorrectDeathAnimationFromHitLoc_Parms.BoneName, &BoneName, 0x8 );
	GetCorrectDeathAnimationFromHitLoc_Parms.bBehind = bBehind;

	this->ProcessEvent ( pFnGetCorrectDeathAnimationFromHitLoc, &GetCorrectDeathAnimationFromHitLoc_Parms, NULL );

	return GetCorrectDeathAnimationFromHitLoc_Parms.ReturnValue;
};

// Function PlanBFramework.PBBaseDamageType.GetHitEffectDuration
// [0x00022002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )

float UPBBaseDamageType::GetHitEffectDuration ( class APawn* P, float Damage )
{
	static UFunction* pFnGetHitEffectDuration = NULL;

	if ( ! pFnGetHitEffectDuration )
		pFnGetHitEffectDuration = (UFunction*) UObject::GObjObjects()->Data[ 36655 ];

	UPBBaseDamageType_execGetHitEffectDuration_Parms GetHitEffectDuration_Parms;
	GetHitEffectDuration_Parms.P = P;
	GetHitEffectDuration_Parms.Damage = Damage;

	this->ProcessEvent ( pFnGetHitEffectDuration, &GetHitEffectDuration_Parms, NULL );

	return GetHitEffectDuration_Parms.ReturnValue;
};

// Function PlanBFramework.PBBaseDamageType.SpawnHitEffect
// [0x00022000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// struct FName                   BoneName                       ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

void UPBBaseDamageType::SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation )
{
	static UFunction* pFnSpawnHitEffect = NULL;

	if ( ! pFnSpawnHitEffect )
		pFnSpawnHitEffect = (UFunction*) UObject::GObjObjects()->Data[ 36649 ];

	UPBBaseDamageType_execSpawnHitEffect_Parms SpawnHitEffect_Parms;
	SpawnHitEffect_Parms.P = P;
	SpawnHitEffect_Parms.Damage = Damage;
	memcpy ( &SpawnHitEffect_Parms.Momentum, &Momentum, 0xC );
	memcpy ( &SpawnHitEffect_Parms.BoneName, &BoneName, 0x8 );
	memcpy ( &SpawnHitEffect_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnSpawnHitEffect, &SpawnHitEffect_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.SetCameraPosAndRot
// [0x00020102] 
// Parameters infos:
// class APBBasePawn*             pPawn                          ( CPF_Parm )
// struct FVector                 vPosition                      ( CPF_Parm )
// struct FRotator                rRotation                      ( CPF_Parm )

void APBCameraActionManager::SetCameraPosAndRot ( class APBBasePawn* pPawn, struct FVector vPosition, struct FRotator rRotation )
{
	static UFunction* pFnSetCameraPosAndRot = NULL;

	if ( ! pFnSetCameraPosAndRot )
		pFnSetCameraPosAndRot = (UFunction*) UObject::GObjObjects()->Data[ 37183 ];

	APBCameraActionManager_execSetCameraPosAndRot_Parms SetCameraPosAndRot_Parms;
	SetCameraPosAndRot_Parms.pPawn = pPawn;
	memcpy ( &SetCameraPosAndRot_Parms.vPosition, &vPosition, 0xC );
	memcpy ( &SetCameraPosAndRot_Parms.rRotation, &rRotation, 0xC );

	this->ProcessEvent ( pFnSetCameraPosAndRot, &SetCameraPosAndRot_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.UpdateCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FVector                 OutCamLoc                      ( CPF_Parm | CPF_OutParm )
// struct FRotator                OutCamRot                      ( CPF_Parm | CPF_OutParm )
// float                          OutFOV                         ( CPF_Parm | CPF_OutParm )

bool APBCameraActionManager::UpdateCamera ( float fDeltaTime, class AActor* Target, struct FVector* OutCamLoc, struct FRotator* OutCamRot, float* OutFOV )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37176 ];

	APBCameraActionManager_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.fDeltaTime = fDeltaTime;
	UpdateCamera_Parms.Target = Target;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutCamLoc )
		memcpy ( OutCamLoc, &UpdateCamera_Parms.OutCamLoc, 0xC );

	if ( OutCamRot )
		memcpy ( OutCamRot, &UpdateCamera_Parms.OutCamRot, 0xC );

	if ( OutFOV )
		*OutFOV = UpdateCamera_Parms.OutFOV;

	return UpdateCamera_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.GetWeaponRotation
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                weaponRotator                  ( CPF_Parm | CPF_OutParm )

bool APBCameraActionManager::GetWeaponRotation ( struct FRotator* weaponRotator )
{
	static UFunction* pFnGetWeaponRotation = NULL;

	if ( ! pFnGetWeaponRotation )
		pFnGetWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 37173 ];

	APBCameraActionManager_execGetWeaponRotation_Parms GetWeaponRotation_Parms;

	this->ProcessEvent ( pFnGetWeaponRotation, &GetWeaponRotation_Parms, NULL );

	if ( weaponRotator )
		memcpy ( weaponRotator, &GetWeaponRotation_Parms.weaponRotator, 0xC );

	return GetWeaponRotation_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.GetPlayerController
// [0x00020102] 
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APlayerController* APBCameraActionManager::GetPlayerController ( )
{
	static UFunction* pFnGetPlayerController = NULL;

	if ( ! pFnGetPlayerController )
		pFnGetPlayerController = (UFunction*) UObject::GObjObjects()->Data[ 37171 ];

	APBCameraActionManager_execGetPlayerController_Parms GetPlayerController_Parms;

	this->ProcessEvent ( pFnGetPlayerController, &GetPlayerController_Parms, NULL );

	return GetPlayerController_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.DrawPostProcessEffect
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBCameraActionManager::DrawPostProcessEffect ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawPostProcessEffect = NULL;

	if ( ! pFnDrawPostProcessEffect )
		pFnDrawPostProcessEffect = (UFunction*) UObject::GObjObjects()->Data[ 37169 ];

	APBCameraActionManager_execDrawPostProcessEffect_Parms DrawPostProcessEffect_Parms;
	DrawPostProcessEffect_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawPostProcessEffect, &DrawPostProcessEffect_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.DrawHUD
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBCameraActionManager::DrawHUD ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 37167 ];

	APBCameraActionManager_execDrawHUD_Parms DrawHUD_Parms;
	DrawHUD_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.InstallCameraAction
// [0x00020102] 
// Parameters infos:
// class APBCameraAction*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APBCameraAction*         pCA                            ( CPF_Parm )

class APBCameraAction* APBCameraActionManager::InstallCameraAction ( class APBCameraAction* pCA )
{
	static UFunction* pFnInstallCameraAction = NULL;

	if ( ! pFnInstallCameraAction )
		pFnInstallCameraAction = (UFunction*) UObject::GObjObjects()->Data[ 37044 ];

	APBCameraActionManager_execInstallCameraAction_Parms InstallCameraAction_Parms;
	InstallCameraAction_Parms.pCA = pCA;

	this->ProcessEvent ( pFnInstallCameraAction, &InstallCameraAction_Parms, NULL );

	return InstallCameraAction_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.InstallCameraActionClass
// [0x00020102] 
// Parameters infos:
// class APBCameraAction*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  pCameraClass                   ( CPF_Parm )

class APBCameraAction* APBCameraActionManager::InstallCameraActionClass ( class UClass* pCameraClass )
{
	static UFunction* pFnInstallCameraActionClass = NULL;

	if ( ! pFnInstallCameraActionClass )
		pFnInstallCameraActionClass = (UFunction*) UObject::GObjObjects()->Data[ 37161 ];

	APBCameraActionManager_execInstallCameraActionClass_Parms InstallCameraActionClass_Parms;
	InstallCameraActionClass_Parms.pCameraClass = pCameraClass;

	this->ProcessEvent ( pFnInstallCameraActionClass, &InstallCameraActionClass_Parms, NULL );

	return InstallCameraActionClass_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.ShouldInterpolateWeaponRotation
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBCameraActionManager::ShouldInterpolateWeaponRotation ( )
{
	static UFunction* pFnShouldInterpolateWeaponRotation = NULL;

	if ( ! pFnShouldInterpolateWeaponRotation )
		pFnShouldInterpolateWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 37048 ];

	APBCameraActionManager_execShouldInterpolateWeaponRotation_Parms ShouldInterpolateWeaponRotation_Parms;

	this->ProcessEvent ( pFnShouldInterpolateWeaponRotation, &ShouldInterpolateWeaponRotation_Parms, NULL );

	return ShouldInterpolateWeaponRotation_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.UninstallCameraAction
// [0x00024102] 
// Parameters infos:
// class APBCameraAction*         pCA                            ( CPF_OptionalParm | CPF_Parm )

void APBCameraActionManager::UninstallCameraAction ( class APBCameraAction* pCA )
{
	static UFunction* pFnUninstallCameraAction = NULL;

	if ( ! pFnUninstallCameraAction )
		pFnUninstallCameraAction = (UFunction*) UObject::GObjObjects()->Data[ 37159 ];

	APBCameraActionManager_execUninstallCameraAction_Parms UninstallCameraAction_Parms;
	UninstallCameraAction_Parms.pCA = pCA;

	this->ProcessEvent ( pFnUninstallCameraAction, &UninstallCameraAction_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.ActivateHighestPriorityAction
// [0x00020102] 
// Parameters infos:

void APBCameraActionManager::ActivateHighestPriorityAction ( )
{
	static UFunction* pFnActivateHighestPriorityAction = NULL;

	if ( ! pFnActivateHighestPriorityAction )
		pFnActivateHighestPriorityAction = (UFunction*) UObject::GObjObjects()->Data[ 37155 ];

	APBCameraActionManager_execActivateHighestPriorityAction_Parms ActivateHighestPriorityAction_Parms;

	this->ProcessEvent ( pFnActivateHighestPriorityAction, &ActivateHighestPriorityAction_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.FindCameraActionIndex
// [0x00020102] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APBCameraAction*         pAction                        ( CPF_Parm )

int APBCameraActionManager::FindCameraActionIndex ( class APBCameraAction* pAction )
{
	static UFunction* pFnFindCameraActionIndex = NULL;

	if ( ! pFnFindCameraActionIndex )
		pFnFindCameraActionIndex = (UFunction*) UObject::GObjObjects()->Data[ 37151 ];

	APBCameraActionManager_execFindCameraActionIndex_Parms FindCameraActionIndex_Parms;
	FindCameraActionIndex_Parms.pAction = pAction;

	this->ProcessEvent ( pFnFindCameraActionIndex, &FindCameraActionIndex_Parms, NULL );

	return FindCameraActionIndex_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.IsCameraAction
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  pCameraActionClass             ( CPF_Parm )

bool APBCameraActionManager::IsCameraAction ( class UClass* pCameraActionClass )
{
	static UFunction* pFnIsCameraAction = NULL;

	if ( ! pFnIsCameraAction )
		pFnIsCameraAction = (UFunction*) UObject::GObjObjects()->Data[ 37148 ];

	APBCameraActionManager_execIsCameraAction_Parms IsCameraAction_Parms;
	IsCameraAction_Parms.pCameraActionClass = pCameraActionClass;

	this->ProcessEvent ( pFnIsCameraAction, &IsCameraAction_Parms, NULL );

	return IsCameraAction_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraActionManager.ClearAllCameraActions
// [0x00020102] 
// Parameters infos:

void APBCameraActionManager::ClearAllCameraActions ( )
{
	static UFunction* pFnClearAllCameraActions = NULL;

	if ( ! pFnClearAllCameraActions )
		pFnClearAllCameraActions = (UFunction*) UObject::GObjObjects()->Data[ 37147 ];

	APBCameraActionManager_execClearAllCameraActions_Parms ClearAllCameraActions_Parms;

	this->ProcessEvent ( pFnClearAllCameraActions, &ClearAllCameraActions_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.RemoveActionFromStack
// [0x00020102] 
// Parameters infos:
// class APBCameraAction*         pToRemove                      ( CPF_Parm )

void APBCameraActionManager::RemoveActionFromStack ( class APBCameraAction* pToRemove )
{
	static UFunction* pFnRemoveActionFromStack = NULL;

	if ( ! pFnRemoveActionFromStack )
		pFnRemoveActionFromStack = (UFunction*) UObject::GObjObjects()->Data[ 37144 ];

	APBCameraActionManager_execRemoveActionFromStack_Parms RemoveActionFromStack_Parms;
	RemoveActionFromStack_Parms.pToRemove = pToRemove;

	this->ProcessEvent ( pFnRemoveActionFromStack, &RemoveActionFromStack_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.AddActionToStack
// [0x00020102] 
// Parameters infos:
// class APBCameraAction*         pToAdd                         ( CPF_Parm )

void APBCameraActionManager::AddActionToStack ( class APBCameraAction* pToAdd )
{
	static UFunction* pFnAddActionToStack = NULL;

	if ( ! pFnAddActionToStack )
		pFnAddActionToStack = (UFunction*) UObject::GObjObjects()->Data[ 37140 ];

	APBCameraActionManager_execAddActionToStack_Parms AddActionToStack_Parms;
	AddActionToStack_Parms.pToAdd = pToAdd;

	this->ProcessEvent ( pFnAddActionToStack, &AddActionToStack_Parms, NULL );
};

// Function PlanBFramework.PBCameraActionManager.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void APBCameraActionManager::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 37139 ];

	APBCameraActionManager_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function PlanBFramework.PBCameraAction.SetCameraPosAndRot
// [0x00020102] 
// Parameters infos:
// class APBBasePawn*             pPawn                          ( CPF_Parm )
// struct FVector                 vPosition                      ( CPF_Parm )
// struct FRotator                rRotation                      ( CPF_Parm )
// float                          fFOV                           ( CPF_Parm )

void APBCameraAction::SetCameraPosAndRot ( class APBBasePawn* pPawn, struct FVector vPosition, struct FRotator rRotation, float fFOV )
{
	static UFunction* pFnSetCameraPosAndRot = NULL;

	if ( ! pFnSetCameraPosAndRot )
		pFnSetCameraPosAndRot = (UFunction*) UObject::GObjObjects()->Data[ 37127 ];

	APBCameraAction_execSetCameraPosAndRot_Parms SetCameraPosAndRot_Parms;
	SetCameraPosAndRot_Parms.pPawn = pPawn;
	memcpy ( &SetCameraPosAndRot_Parms.vPosition, &vPosition, 0xC );
	memcpy ( &SetCameraPosAndRot_Parms.rRotation, &rRotation, 0xC );
	SetCameraPosAndRot_Parms.fFOV = fFOV;

	this->ProcessEvent ( pFnSetCameraPosAndRot, &SetCameraPosAndRot_Parms, NULL );
};

// Function PlanBFramework.PBCameraAction.UpdateWeaponPosAndRot
// [0x00420102] 
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )
// struct FVector                 OutCamLoc                      ( CPF_Parm | CPF_OutParm )
// struct FRotator                OutCamRot                      ( CPF_Parm | CPF_OutParm )

void APBCameraAction::UpdateWeaponPosAndRot ( float fDeltaTime, class APlayerController* PC, struct FVector* OutCamLoc, struct FRotator* OutCamRot )
{
	static UFunction* pFnUpdateWeaponPosAndRot = NULL;

	if ( ! pFnUpdateWeaponPosAndRot )
		pFnUpdateWeaponPosAndRot = (UFunction*) UObject::GObjObjects()->Data[ 37122 ];

	APBCameraAction_execUpdateWeaponPosAndRot_Parms UpdateWeaponPosAndRot_Parms;
	UpdateWeaponPosAndRot_Parms.fDeltaTime = fDeltaTime;
	UpdateWeaponPosAndRot_Parms.PC = PC;

	this->ProcessEvent ( pFnUpdateWeaponPosAndRot, &UpdateWeaponPosAndRot_Parms, NULL );

	if ( OutCamLoc )
		memcpy ( OutCamLoc, &UpdateWeaponPosAndRot_Parms.OutCamLoc, 0xC );

	if ( OutCamRot )
		memcpy ( OutCamRot, &UpdateWeaponPosAndRot_Parms.OutCamRot, 0xC );
};

// Function PlanBFramework.PBCameraAction.UpdateCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// class AActor*                  Target                         ( CPF_Parm )
// struct FVector                 OutCamLoc                      ( CPF_Parm | CPF_OutParm )
// struct FRotator                OutCamRot                      ( CPF_Parm | CPF_OutParm )
// float                          OutFOV                         ( CPF_Parm | CPF_OutParm )

bool APBCameraAction::UpdateCamera ( float fDeltaTime, class AActor* Target, struct FVector* OutCamLoc, struct FRotator* OutCamRot, float* OutFOV )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37115 ];

	APBCameraAction_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.fDeltaTime = fDeltaTime;
	UpdateCamera_Parms.Target = Target;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutCamLoc )
		memcpy ( OutCamLoc, &UpdateCamera_Parms.OutCamLoc, 0xC );

	if ( OutCamRot )
		memcpy ( OutCamRot, &UpdateCamera_Parms.OutCamRot, 0xC );

	if ( OutFOV )
		*OutFOV = UpdateCamera_Parms.OutFOV;

	return UpdateCamera_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraAction.IsDeactivationPossible
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool APBCameraAction::IsDeactivationPossible ( )
{
	static UFunction* pFnIsDeactivationPossible = NULL;

	if ( ! pFnIsDeactivationPossible )
		pFnIsDeactivationPossible = (UFunction*) UObject::GObjObjects()->Data[ 37113 ];

	APBCameraAction_execIsDeactivationPossible_Parms IsDeactivationPossible_Parms;

	this->ProcessEvent ( pFnIsDeactivationPossible, &IsDeactivationPossible_Parms, NULL );

	return IsDeactivationPossible_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraAction.DrawPostProcessEffect
// [0x00020102] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBCameraAction::DrawPostProcessEffect ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawPostProcessEffect = NULL;

	if ( ! pFnDrawPostProcessEffect )
		pFnDrawPostProcessEffect = (UFunction*) UObject::GObjObjects()->Data[ 37111 ];

	APBCameraAction_execDrawPostProcessEffect_Parms DrawPostProcessEffect_Parms;
	DrawPostProcessEffect_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawPostProcessEffect, &DrawPostProcessEffect_Parms, NULL );
};

// Function PlanBFramework.PBCameraAction.DrawHUD
// [0x00020100] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBCameraAction::DrawHUD ( class UCanvas* Canvas )
{
	static UFunction* pFnDrawHUD = NULL;

	if ( ! pFnDrawHUD )
		pFnDrawHUD = (UFunction*) UObject::GObjObjects()->Data[ 37109 ];

	APBCameraAction_execDrawHUD_Parms DrawHUD_Parms;
	DrawHUD_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawHUD, &DrawHUD_Parms, NULL );
};

// Function PlanBFramework.PBCameraAction.GetWeaponRotation
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                weaponRotator                  ( CPF_Parm | CPF_OutParm )

bool APBCameraAction::GetWeaponRotation ( struct FRotator* weaponRotator )
{
	static UFunction* pFnGetWeaponRotation = NULL;

	if ( ! pFnGetWeaponRotation )
		pFnGetWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 37106 ];

	APBCameraAction_execGetWeaponRotation_Parms GetWeaponRotation_Parms;

	this->ProcessEvent ( pFnGetWeaponRotation, &GetWeaponRotation_Parms, NULL );

	if ( weaponRotator )
		memcpy ( weaponRotator, &GetWeaponRotation_Parms.weaponRotator, 0xC );

	return GetWeaponRotation_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraAction.GetActionPriority
// [0x00020102] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float APBCameraAction::GetActionPriority ( )
{
	static UFunction* pFnGetActionPriority = NULL;

	if ( ! pFnGetActionPriority )
		pFnGetActionPriority = (UFunction*) UObject::GObjObjects()->Data[ 37104 ];

	APBCameraAction_execGetActionPriority_Parms GetActionPriority_Parms;

	this->ProcessEvent ( pFnGetActionPriority, &GetActionPriority_Parms, NULL );

	return GetActionPriority_Parms.ReturnValue;
};

// Function PlanBFramework.PBCameraAction.DeactivateAction
// [0x00020102] 
// Parameters infos:

void APBCameraAction::DeactivateAction ( )
{
	static UFunction* pFnDeactivateAction = NULL;

	if ( ! pFnDeactivateAction )
		pFnDeactivateAction = (UFunction*) UObject::GObjObjects()->Data[ 37103 ];

	APBCameraAction_execDeactivateAction_Parms DeactivateAction_Parms;

	this->ProcessEvent ( pFnDeactivateAction, &DeactivateAction_Parms, NULL );
};

// Function PlanBFramework.PBCameraAction.ActivateAction
// [0x00020102] 
// Parameters infos:
// class APBCameraActionManager*  pManager                       ( CPF_Parm )

void APBCameraAction::ActivateAction ( class APBCameraActionManager* pManager )
{
	static UFunction* pFnActivateAction = NULL;

	if ( ! pFnActivateAction )
		pFnActivateAction = (UFunction*) UObject::GObjObjects()->Data[ 37101 ];

	APBCameraAction_execActivateAction_Parms ActivateAction_Parms;
	ActivateAction_Parms.pManager = pManager;

	this->ProcessEvent ( pFnActivateAction, &ActivateAction_Parms, NULL );
};

// Function PlanBFramework.PBDebugActor.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void APBDebugActor::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 37215 ];

	APBDebugActor_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function PlanBFramework.PBDebugActor.SpawnStatic
// [0x00026102] 
// Parameters infos:
// class APBDebugActor*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  creator                        ( CPF_Parm )
// struct FVector                 vLocation                      ( CPF_Parm )
// unsigned long                  bPersistent                    ( CPF_OptionalParm | CPF_Parm )

class APBDebugActor* APBDebugActor::SpawnStatic ( class AActor* creator, struct FVector vLocation, unsigned long bPersistent )
{
	static UFunction* pFnSpawnStatic = NULL;

	if ( ! pFnSpawnStatic )
		pFnSpawnStatic = (UFunction*) UObject::GObjObjects()->Data[ 37209 ];

	APBDebugActor_execSpawnStatic_Parms SpawnStatic_Parms;
	SpawnStatic_Parms.creator = creator;
	memcpy ( &SpawnStatic_Parms.vLocation, &vLocation, 0xC );
	SpawnStatic_Parms.bPersistent = bPersistent;

	this->ProcessEvent ( pFnSpawnStatic, &SpawnStatic_Parms, NULL );

	return SpawnStatic_Parms.ReturnValue;
};

// Function PlanBFramework.PBDebugActor.ShouldDrawDebug
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// float                          fDistance                      ( CPF_Parm | CPF_OutParm )
// float                          fViewRayDot                    ( CPF_Parm | CPF_OutParm )

bool APBDebugActor::ShouldDrawDebug ( class APBBasePlayerController* localPlayerCtrl, float* fDistance, float* fViewRayDot )
{
	static UFunction* pFnShouldDrawDebug = NULL;

	if ( ! pFnShouldDrawDebug )
		pFnShouldDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37199 ];

	APBDebugActor_execShouldDrawDebug_Parms ShouldDrawDebug_Parms;
	ShouldDrawDebug_Parms.localPlayerCtrl = localPlayerCtrl;

	this->ProcessEvent ( pFnShouldDrawDebug, &ShouldDrawDebug_Parms, NULL );

	if ( fDistance )
		*fDistance = ShouldDrawDebug_Parms.fDistance;

	if ( fViewRayDot )
		*fViewRayDot = ShouldDrawDebug_Parms.fViewRayDot;

	return ShouldDrawDebug_Parms.ReturnValue;
};

// Function PlanBFramework.PBDebugActor.DrawDebug
// [0x00020100] 
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBDebugActor::DrawDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 37201 ];

	APBDebugActor_execDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawDebug_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function PlanBFramework.PBDebugActor.DrawStaticDebug
// [0x00022002] 
// Parameters infos:
// class APBBasePlayerController* localPlayerCtrl                ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )

void APBDebugActor::DrawStaticDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas )
{
	static UFunction* pFnDrawStaticDebug = NULL;

	if ( ! pFnDrawStaticDebug )
		pFnDrawStaticDebug = (UFunction*) UObject::GObjObjects()->Data[ 37193 ];

	APBDebugActor_execDrawStaticDebug_Parms DrawStaticDebug_Parms;
	DrawStaticDebug_Parms.localPlayerCtrl = localPlayerCtrl;
	DrawStaticDebug_Parms.Canvas = Canvas;

	this->ProcessEvent ( pFnDrawStaticDebug, &DrawStaticDebug_Parms, NULL );
};

// Function PlanBFramework.PBDebugActor.AddInfo
// [0x00020102] 
// Parameters infos:
// struct FString                 Info                           ( CPF_Parm | CPF_NeedCtorLink )

void APBDebugActor::AddInfo ( struct FString Info )
{
	static UFunction* pFnAddInfo = NULL;

	if ( ! pFnAddInfo )
		pFnAddInfo = (UFunction*) UObject::GObjObjects()->Data[ 37191 ];

	APBDebugActor_execAddInfo_Parms AddInfo_Parms;
	memcpy ( &AddInfo_Parms.Info, &Info, 0xC );

	this->ProcessEvent ( pFnAddInfo, &AddInfo_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.GetAvoidance
// [0x00020100] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector APBFlockable::GetAvoidance ( )
{
	static UFunction* pFnGetAvoidance = NULL;

	if ( ! pFnGetAvoidance )
		pFnGetAvoidance = (UFunction*) UObject::GObjObjects()->Data[ 37282 ];

	APBFlockable_execGetAvoidance_Parms GetAvoidance_Parms;

	this->ProcessEvent ( pFnGetAvoidance, &GetAvoidance_Parms, NULL );

	return GetAvoidance_Parms.ReturnValue;
};

// Function PlanBFramework.PBFlockable.AddAvoidance
// [0x00020100] 
// Parameters infos:
// struct FVector                 V                              ( CPF_Parm )

void APBFlockable::AddAvoidance ( struct FVector V )
{
	static UFunction* pFnAddAvoidance = NULL;

	if ( ! pFnAddAvoidance )
		pFnAddAvoidance = (UFunction*) UObject::GObjObjects()->Data[ 37280 ];

	APBFlockable_execAddAvoidance_Parms AddAvoidance_Parms;
	memcpy ( &AddAvoidance_Parms.V, &V, 0xC );

	this->ProcessEvent ( pFnAddAvoidance, &AddAvoidance_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.ResetAvoidance
// [0x00020100] 
// Parameters infos:

void APBFlockable::ResetAvoidance ( )
{
	static UFunction* pFnResetAvoidance = NULL;

	if ( ! pFnResetAvoidance )
		pFnResetAvoidance = (UFunction*) UObject::GObjObjects()->Data[ 37279 ];

	APBFlockable_execResetAvoidance_Parms ResetAvoidance_Parms;

	this->ProcessEvent ( pFnResetAvoidance, &ResetAvoidance_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.SetTarget
// [0x00420100] 
// Parameters infos:
// struct FVector                 pos                            ( CPF_Parm | CPF_OutParm )

void APBFlockable::SetTarget ( struct FVector* pos )
{
	static UFunction* pFnSetTarget = NULL;

	if ( ! pFnSetTarget )
		pFnSetTarget = (UFunction*) UObject::GObjObjects()->Data[ 37277 ];

	APBFlockable_execSetTarget_Parms SetTarget_Parms;

	this->ProcessEvent ( pFnSetTarget, &SetTarget_Parms, NULL );

	if ( pos )
		memcpy ( pos, &SetTarget_Parms.pos, 0xC );
};

// Function PlanBFramework.PBFlockable.SetVelocity
// [0x00020100] 
// Parameters infos:
// float                          _speed                         ( CPF_Parm )

void APBFlockable::SetVelocity ( float _speed )
{
	static UFunction* pFnSetVelocity = NULL;

	if ( ! pFnSetVelocity )
		pFnSetVelocity = (UFunction*) UObject::GObjObjects()->Data[ 37275 ];

	APBFlockable_execSetVelocity_Parms SetVelocity_Parms;
	SetVelocity_Parms._speed = _speed;

	this->ProcessEvent ( pFnSetVelocity, &SetVelocity_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.SetVelocityRange
// [0x00420100] 
// Parameters infos:
// struct FRange                  _range                         ( CPF_Parm | CPF_OutParm )

void APBFlockable::SetVelocityRange ( struct FRange* _range )
{
	static UFunction* pFnSetVelocityRange = NULL;

	if ( ! pFnSetVelocityRange )
		pFnSetVelocityRange = (UFunction*) UObject::GObjObjects()->Data[ 37273 ];

	APBFlockable_execSetVelocityRange_Parms SetVelocityRange_Parms;

	this->ProcessEvent ( pFnSetVelocityRange, &SetVelocityRange_Parms, NULL );

	if ( _range )
		memcpy ( _range, &SetVelocityRange_Parms._range, 0x8 );
};

// Function PlanBFramework.PBFlockable.SetScaleRange
// [0x00420100] 
// Parameters infos:
// struct FRange                  _range                         ( CPF_Parm | CPF_OutParm )

void APBFlockable::SetScaleRange ( struct FRange* _range )
{
	static UFunction* pFnSetScaleRange = NULL;

	if ( ! pFnSetScaleRange )
		pFnSetScaleRange = (UFunction*) UObject::GObjObjects()->Data[ 37271 ];

	APBFlockable_execSetScaleRange_Parms SetScaleRange_Parms;

	this->ProcessEvent ( pFnSetScaleRange, &SetScaleRange_Parms, NULL );

	if ( _range )
		memcpy ( _range, &SetScaleRange_Parms._range, 0x8 );
};

// Function PlanBFramework.PBFlockable.SetFlock
// [0x00020100] 
// Parameters infos:
// class AActor*                  flock                          ( CPF_Parm )

void APBFlockable::SetFlock ( class AActor* flock )
{
	static UFunction* pFnSetFlock = NULL;

	if ( ! pFnSetFlock )
		pFnSetFlock = (UFunction*) UObject::GObjObjects()->Data[ 37269 ];

	APBFlockable_execSetFlock_Parms SetFlock_Parms;
	SetFlock_Parms.flock = flock;

	this->ProcessEvent ( pFnSetFlock, &SetFlock_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.SetAvoidanceRadius
// [0x00020100] 
// Parameters infos:
// float                          _radius                        ( CPF_Parm )

void APBFlockable::SetAvoidanceRadius ( float _radius )
{
	static UFunction* pFnSetAvoidanceRadius = NULL;

	if ( ! pFnSetAvoidanceRadius )
		pFnSetAvoidanceRadius = (UFunction*) UObject::GObjObjects()->Data[ 37267 ];

	APBFlockable_execSetAvoidanceRadius_Parms SetAvoidanceRadius_Parms;
	SetAvoidanceRadius_Parms._radius = _radius;

	this->ProcessEvent ( pFnSetAvoidanceRadius, &SetAvoidanceRadius_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.GetAvoidanceRadius
// [0x00020100] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float APBFlockable::GetAvoidanceRadius ( )
{
	static UFunction* pFnGetAvoidanceRadius = NULL;

	if ( ! pFnGetAvoidanceRadius )
		pFnGetAvoidanceRadius = (UFunction*) UObject::GObjObjects()->Data[ 37265 ];

	APBFlockable_execGetAvoidanceRadius_Parms GetAvoidanceRadius_Parms;

	this->ProcessEvent ( pFnGetAvoidanceRadius, &GetAvoidanceRadius_Parms, NULL );

	return GetAvoidanceRadius_Parms.ReturnValue;
};

// Function PlanBFramework.PBFlockable.Animate
// [0x00020100] 
// Parameters infos:
// struct FName                   movementType                   ( CPF_Parm )

void APBFlockable::Animate ( struct FName movementType )
{
	static UFunction* pFnAnimate = NULL;

	if ( ! pFnAnimate )
		pFnAnimate = (UFunction*) UObject::GObjObjects()->Data[ 37263 ];

	APBFlockable_execAnimate_Parms Animate_Parms;
	memcpy ( &Animate_Parms.movementType, &movementType, 0x8 );

	this->ProcessEvent ( pFnAnimate, &Animate_Parms, NULL );
};

// Function PlanBFramework.PBFlockable.Reset
// [0x00020000] 
// Parameters infos:

void APBFlockable::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 37262 ];

	APBFlockable_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function PlanBFramework.PBTexSwitchComponent.ApplyOffset
// [0x010201C2] 
// Parameters infos:
// class UMeshComponent*          Comp                           ( CPF_Parm | CPF_EditInline )
// int                            iMaxHealth                     ( CPF_Parm )
// int                            iCurrHealth                    ( CPF_Parm )

void UPBTexSwitchComponent::ApplyOffset ( class UMeshComponent* Comp, int iMaxHealth, int iCurrHealth )
{
	static UFunction* pFnApplyOffset = NULL;

	if ( ! pFnApplyOffset )
		pFnApplyOffset = (UFunction*) UObject::GObjObjects()->Data[ 37757 ];

	UPBTexSwitchComponent_execApplyOffset_Parms ApplyOffset_Parms;
	ApplyOffset_Parms.Comp = Comp;
	ApplyOffset_Parms.iMaxHealth = iMaxHealth;
	ApplyOffset_Parms.iCurrHealth = iCurrHealth;

	this->ProcessEvent ( pFnApplyOffset, &ApplyOffset_Parms, NULL );
};

// Function PlanBFramework.PBTexSwitchComponent.Initialize
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMeshComponent*          Comp                           ( CPF_Parm | CPF_EditInline )

bool UPBTexSwitchComponent::Initialize ( class UMeshComponent* Comp )
{
	static UFunction* pFnInitialize = NULL;

	if ( ! pFnInitialize )
		pFnInitialize = (UFunction*) UObject::GObjObjects()->Data[ 37753 ];

	UPBTexSwitchComponent_execInitialize_Parms Initialize_Parms;
	Initialize_Parms.Comp = Comp;

	this->ProcessEvent ( pFnInitialize, &Initialize_Parms, NULL );

	return Initialize_Parms.ReturnValue;
};

// Function PlanBFramework.PBTexSwitchComponent.Reset
// [0x00020102] 
// Parameters infos:

void UPBTexSwitchComponent::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 37752 ];

	UPBTexSwitchComponent_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function PlanBFramework.PBTextSingleSwitchComponent.ApplyOffset
// [0x010201C2] 
// Parameters infos:
// class UMeshComponent*          Comp                           ( CPF_Parm | CPF_EditInline )
// int                            iMaxHealth                     ( CPF_Parm )
// int                            iCurrHealth                    ( CPF_Parm )

void UPBTextSingleSwitchComponent::ApplyOffset ( class UMeshComponent* Comp, int iMaxHealth, int iCurrHealth )
{
	static UFunction* pFnApplyOffset = NULL;

	if ( ! pFnApplyOffset )
		pFnApplyOffset = (UFunction*) UObject::GObjObjects()->Data[ 37765 ];

	UPBTextSingleSwitchComponent_execApplyOffset_Parms ApplyOffset_Parms;
	ApplyOffset_Parms.Comp = Comp;
	ApplyOffset_Parms.iMaxHealth = iMaxHealth;
	ApplyOffset_Parms.iCurrHealth = iCurrHealth;

	this->ProcessEvent ( pFnApplyOffset, &ApplyOffset_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.ShiftToStaticMesh
// [0x00020102] 
// Parameters infos:
// class UStaticMesh*             NewMesh                        ( CPF_Parm )
// unsigned long                  bNoCollision                   ( CPF_Parm )
// class UMaterial*               Material                       ( CPF_Parm )

void APBStaticMeshDestructible::ShiftToStaticMesh ( class UStaticMesh* NewMesh, unsigned long bNoCollision, class UMaterial* Material )
{
	static UFunction* pFnShiftToStaticMesh = NULL;

	if ( ! pFnShiftToStaticMesh )
		pFnShiftToStaticMesh = (UFunction*) UObject::GObjObjects()->Data[ 37820 ];

	APBStaticMeshDestructible_execShiftToStaticMesh_Parms ShiftToStaticMesh_Parms;
	ShiftToStaticMesh_Parms.NewMesh = NewMesh;
	ShiftToStaticMesh_Parms.bNoCollision = bNoCollision;
	ShiftToStaticMesh_Parms.Material = Material;

	this->ProcessEvent ( pFnShiftToStaticMesh, &ShiftToStaticMesh_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.ShiftStaticMesh
// [0x00020102] 
// Parameters infos:

void APBStaticMeshDestructible::ShiftStaticMesh ( )
{
	static UFunction* pFnShiftStaticMesh = NULL;

	if ( ! pFnShiftStaticMesh )
		pFnShiftStaticMesh = (UFunction*) UObject::GObjObjects()->Data[ 37815 ];

	APBStaticMeshDestructible_execShiftStaticMesh_Parms ShiftStaticMesh_Parms;

	this->ProcessEvent ( pFnShiftStaticMesh, &ShiftStaticMesh_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.StopPhysicsTimer
// [0x00020002] 
// Parameters infos:

void APBStaticMeshDestructible::StopPhysicsTimer ( )
{
	static UFunction* pFnStopPhysicsTimer = NULL;

	if ( ! pFnStopPhysicsTimer )
		pFnStopPhysicsTimer = (UFunction*) UObject::GObjObjects()->Data[ 37814 ];

	APBStaticMeshDestructible_execStopPhysicsTimer_Parms StopPhysicsTimer_Parms;

	this->ProcessEvent ( pFnStopPhysicsTimer, &StopPhysicsTimer_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void APBStaticMeshDestructible::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 37812 ];

	APBStaticMeshDestructible_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.OnSetMaterial
// [0x00020002] 
// Parameters infos:
// class USeqAct_SetMaterial*     Action                         ( CPF_Parm )

void APBStaticMeshDestructible::OnSetMaterial ( class USeqAct_SetMaterial* Action )
{
	static UFunction* pFnOnSetMaterial = NULL;

	if ( ! pFnOnSetMaterial )
		pFnOnSetMaterial = (UFunction*) UObject::GObjObjects()->Data[ 37810 ];

	APBStaticMeshDestructible_execOnSetMaterial_Parms OnSetMaterial_Parms;
	OnSetMaterial_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetMaterial, &OnSetMaterial_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.OnTriggerDestructible
// [0x00020102] 
// Parameters infos:
// class UPBSeqAct_TriggerDestructible* seqAction                      ( CPF_Parm )

void APBStaticMeshDestructible::OnTriggerDestructible ( class UPBSeqAct_TriggerDestructible* seqAction )
{
	static UFunction* pFnOnTriggerDestructible = NULL;

	if ( ! pFnOnTriggerDestructible )
		pFnOnTriggerDestructible = (UFunction*) UObject::GObjObjects()->Data[ 37808 ];

	APBStaticMeshDestructible_execOnTriggerDestructible_Parms OnTriggerDestructible_Parms;
	OnTriggerDestructible_Parms.seqAction = seqAction;

	this->ProcessEvent ( pFnOnTriggerDestructible, &OnTriggerDestructible_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.ClientTakeDamage
// [0x00020102] 
// Parameters infos:

void APBStaticMeshDestructible::ClientTakeDamage ( )
{
	static UFunction* pFnClientTakeDamage = NULL;

	if ( ! pFnClientTakeDamage )
		pFnClientTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 37807 ];

	APBStaticMeshDestructible_execClientTakeDamage_Parms ClientTakeDamage_Parms;

	this->ProcessEvent ( pFnClientTakeDamage, &ClientTakeDamage_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.ReliableHit
// [0x010201C2] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 Position                       ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void APBStaticMeshDestructible::ReliableHit ( class AController* EventInstigator, struct FVector Position, struct FVector Momentum, class UClass* DamageType )
{
	static UFunction* pFnReliableHit = NULL;

	if ( ! pFnReliableHit )
		pFnReliableHit = (UFunction*) UObject::GObjObjects()->Data[ 37802 ];

	APBStaticMeshDestructible_execReliableHit_Parms ReliableHit_Parms;
	ReliableHit_Parms.EventInstigator = EventInstigator;
	memcpy ( &ReliableHit_Parms.Position, &Position, 0xC );
	memcpy ( &ReliableHit_Parms.Momentum, &Momentum, 0xC );
	ReliableHit_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnReliableHit, &ReliableHit_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.NonReliableHit
// [0x01020142] 
// Parameters infos:
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 Position                       ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )

void APBStaticMeshDestructible::NonReliableHit ( class AController* EventInstigator, struct FVector Position, struct FVector Momentum, class UClass* DamageType )
{
	static UFunction* pFnNonReliableHit = NULL;

	if ( ! pFnNonReliableHit )
		pFnNonReliableHit = (UFunction*) UObject::GObjObjects()->Data[ 37797 ];

	APBStaticMeshDestructible_execNonReliableHit_Parms NonReliableHit_Parms;
	NonReliableHit_Parms.EventInstigator = EventInstigator;
	memcpy ( &NonReliableHit_Parms.Position, &Position, 0xC );
	memcpy ( &NonReliableHit_Parms.Momentum, &Momentum, 0xC );
	NonReliableHit_Parms.DamageType = DamageType;

	this->ProcessEvent ( pFnNonReliableHit, &NonReliableHit_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.TakeDamage
// [0x00024002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void APBStaticMeshDestructible::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 37787 ];

	APBStaticMeshDestructible_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.ClientReset
// [0x010201C2] 
// Parameters infos:

void APBStaticMeshDestructible::ClientReset ( )
{
	static UFunction* pFnClientReset = NULL;

	if ( ! pFnClientReset )
		pFnClientReset = (UFunction*) UObject::GObjObjects()->Data[ 37786 ];

	APBStaticMeshDestructible_execClientReset_Parms ClientReset_Parms;

	this->ProcessEvent ( pFnClientReset, &ClientReset_Parms, NULL );
};

// Function PlanBFramework.PBStaticMeshDestructible.Reset
// [0x00020002] 
// Parameters infos:

void APBStaticMeshDestructible::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 37785 ];

	APBStaticMeshDestructible_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif