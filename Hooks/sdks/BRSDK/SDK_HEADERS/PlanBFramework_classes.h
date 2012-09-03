/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlanBFramework_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_MAXLINES                                           21

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum PlanBFramework.PBBasePawn.EAnimBlendRagdoll_Child
/*enum EAnimBlendRagdoll_Child
{
	EPBAnim_FallForward                                = 0,
	EPBAnim_FallBackward                               = 1,
	EPBAnim_StandupForward                             = 2,
	EPBAnim_StandupBackward                            = 3,
	EPBAnim_MAX                                        = 4
};*/

// Enum PlanBFramework.PBBasePawn.ESpecialDeath
/*enum ESpecialDeath
{
	SD_Standard                                        = 0,
	SD_Headshot                                        = 1,
	SD_Fell                                            = 2,
	SD_Mortar                                          = 3,
	SD_Turret                                          = 4,
	SD_PPlane                                          = 5,
	SD_HeadCrab                                        = 6,
	SD_Barrel                                          = 7,
	SD_Exploding                                       = 8,
	SD_Suicide                                         = 9,
	SD_MAX                                             = 10
};*/

// Enum PlanBFramework.PBPhysicsSynchronizer.EPBPhysicsDebugFlag
/*enum EPBPhysicsDebugFlag
{
	EPBPhysicsDebug_Undefined                          = 0,
	EPBPhysicsDebug_ShowPhysicsActors                  = 1,
	EPBPhysicsDebug_ShowPBKActors                      = 2,
	EPBPhysicsDebug_Undefined1                         = 3,
	EPBPhysicsDebug_Undefined2                         = 4,
	EPBPhysicsDebug_Undefined3                         = 5,
	EPBPhysicsDebug_Undefined4                         = 6,
	EPBPhysicsDebug_Undefined5                         = 7,
	EPBPhysicsDebug_Undefined6                         = 8,
	EPBPhysicsDebug_Undefined7                         = 9,
	EPBPhysicsDebug_MAX                                = 10
};*/

// Enum PlanBFramework.PBPhysicsSynchronizer.EPBLineCheckDebugFlag
/*enum EPBLineCheckDebugFlag
{
	EPBLineCheckDebug_Undefined                        = 0,
	EPBLineCheckDebug_ShowCheckResults                 = 1,
	EPBLineCheckDebug_Undefined1                       = 2,
	EPBLineCheckDebug_Undefined2                       = 3,
	EPBLineCheckDebug_Undefined3                       = 4,
	EPBLineCheckDebug_Undefined4                       = 5,
	EPBLineCheckDebug_Undefined5                       = 6,
	EPBLineCheckDebug_Undefined6                       = 7,
	EPBLineCheckDebug_Undefined7                       = 8,
	EPBLineCheckDebug_MAX                              = 9
};*/

// Enum PlanBFramework.PBPhysicsSynchronizer.EPhysicsSynchMode
/*enum EPhysicsSynchMode
{
	EPhysicsSynchMode_U3                               = 0,
	EPhysicsSynchMode_Skip                             = 1,
	EPhysicsSynchMode_Direct                           = 2,
	EPhysicsSynchMode_Scripted                         = 3,
	EPhysicsSynchMode_Approximate                      = 4,
	EPhysicsSynchMode_Prototype                        = 5,
	EPhysicsSynchMode_NotGameRelevant                  = 6,
	EPhysicsSynchMode_MAX                              = 7
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class PlanBFramework.PBActorFactoryAirCraftPathNode
// 0x0000 (0x005C - 0x005C)
class UPBActorFactoryAirCraftPathNode : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1334 ];

		return pClassPointer;
	};

};

UClass* UPBActorFactoryAirCraftPathNode::pClassPointer = NULL;

// Class PlanBFramework.PBBaseFlock
// 0x0000 (0x0240 - 0x0240)
class APBBaseFlock : public AInterpActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1335 ];

		return pClassPointer;
	};

	void eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType );
};

UClass* APBBaseFlock::pClassPointer = NULL;

// Class PlanBFramework.PBBaseGameReplicationInfo
// 0x0000 (0x0234 - 0x0234)
class APBBaseGameReplicationInfo : public AGameReplicationInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1336 ];

		return pClassPointer;
	};

	void SetNoStreamWorldTextureForFrames ( int NumFrames );
	void PostBeginPlay ( );
};

UClass* APBBaseGameReplicationInfo::pClassPointer = NULL;

// Class PlanBFramework.PBBasePawn
// 0x0160 (0x0604 - 0x04A4)
class APBBasePawn : public APawn
{
public:
	struct FName                                       BoneName_Pelvis;                                  		// 0x04A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName_Head;                                    		// 0x04AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName_FootLeft;                                		// 0x04B4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName_FootRight;                               		// 0x04BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName_RightWeapon;                             		// 0x04C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName_LeftWeapon;                              		// 0x04CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName_TwistFire;                               		// 0x04D4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             BoneNames_LowerBody;                              		// 0x04DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       BoneName_DeathAnimSpring;                         		// 0x04E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkipDeathAnim : 1;                               		// 0x04F0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bExecutePostRenderFor : 1;                        		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bExecuteLogDebug : 1;                             		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWhentIntoRagdollNextFrame : 1;                   		// 0x04F0 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bHasCustomRagdoll : 1;                            		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bJumped : 1;                                      		// 0x04F0 (0x0004) [0x0000000000002020] [0x00000020] ( CPF_Net | CPF_Transient )
	unsigned long                                      bBlendOutTakeHitPhysics : 1;                      		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bNotifyPhysicsChange : 1;                         		// 0x04F0 (0x0004) [0x0000000000000000] [0x00000080] 
	class UClass*                                      MGoIntoRagdollNextFrame_DamageType;               		// 0x04F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FTraceHitInfo                               MGoIntoRagdollNextFrame_HitInfo;                  		// 0x04F8 (0x001C) [0x0000000000082000]              ( CPF_Transient | CPF_Component )
	float                                              fPhysicsWeightBlendToAnimatedWeight;              		// 0x0514 (0x0004) [0x0000000000000000]              
	float                                              fPeriod_HavingRagdollWithoutPhysicsWeight;        		// 0x0518 (0x0004) [0x0000000000000000]              
	float                                              fPeriod_FullyRagdolled;                           		// 0x051C (0x0004) [0x0000000000000000]              
	int                                                nLandingSpeedClamp;                               		// 0x0520 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                nLandingSpeedTime;                                		// 0x0524 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                nLandingAccelerationClamp;                        		// 0x0528 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                nLandingAccelerationTime;                         		// 0x052C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	struct FTakeHitInfo                                LastTakeHitInfo;                                  		// 0x0530 (0x0040) [0x0000000000000020]              ( CPF_Net )
	float                                              LastTakeHitTimeout;                               		// 0x0570 (0x0004) [0x0000000000000000]              
	float                                              TakeHitPhysicsBlendOutSpeed;                      		// 0x0574 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             TakeHitPhysicsFixedBones;                         		// 0x0578 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             NoDriveBodies;                                    		// 0x0584 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DeathHipLinSpring;                                		// 0x0590 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathHipLinDamp;                                  		// 0x0594 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathHipAngSpring;                                		// 0x0598 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathHipAngDamp;                                  		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RagdollBlendTime;                                 		// 0x05A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkelControlLimb*                            IKBoneCtrl_RightHand;                             		// 0x05A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkelControlLimb*                            IKBoneCtrl_LeftHand;                              		// 0x05A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkelControlSingleBone*                      IKBoneRotCtrl_RightHand;                          		// 0x05AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkelControlSingleBone*                      IKBoneRotCtrl_LeftHand;                           		// 0x05B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fCameraFixedHeightOffsetZ;                        		// 0x05B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FCameraSetupData                            CameraSetup;                                      		// 0x05B8 (0x0044) [0x0000000000000001]              ( CPF_Edit )
	struct FFootStepSoundData                          FootStepSetup;                                    		// 0x05FC (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1337 ];

		return pClassPointer;
	};

	bool IsFullBodyAnimPlaying ( );
	float PlayFullBodyAnim ( struct FName AnimName, unsigned long Cycle, float AnimRate, unsigned long bPauseAtEnd );
	void PlayFullRagDoll ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void OnTimer_SwitchOffMotors ( );
	void eventOnPhysicsChanged ( unsigned char oldPhysics );
	bool IsUpperBoneName ( struct FName InName );
	bool IsLowerBoneName ( struct FName InName );
	void SetUpperBonesFixed ( unsigned long bFixed );
	void SetLowerBonesFixed ( unsigned long bFixed );
	void SetAllBonesFixed ( unsigned long bFixed );
	bool HasFixedBones ( );
	void TerminateCustomRagdoll ( );
	void InitCustomRagdoll ( unsigned char targetPhysics );
	void TerminateRagdoll ( );
	bool IsNetworkAuthorityPawn ( );
	bool CanRender ( );
	void RecoverFromRagdoll ( );
	void eventTakeHitBlendedOut ( );
	void PlayTakeHitEffects ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventOnVirtualPhysicsWeightChanged ( );
	void eventOnPhysicsWeightChanged ( );
	void OnPawnCommand ( class APBBasePlayerController* playerCtrl, struct FString strCommand );
	void eventOnBlendRagdollChildAnimEnd ( unsigned char eChild );
	void ServerSlideDown ( unsigned long bSlide );
	void OnDuck ( unsigned long bDucked );
	void TeleportToSpot ( class ANavigationPoint* Spot, unsigned long bUpdateRotation );
	bool StopWeaponFiring ( );
	void PostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void GetLowerBoneNames ( TArray< struct FName >* lowerBodyBoneNames );
	bool IsFirstPerson ( );
	bool GetHeadLocAndRot ( struct FVector* HeadLoc, struct FRotator* headRot );
	bool eventGetHeadLocation ( struct FVector* out_vHeadLocation );
	float eventTickCameraEyeHeight_Smoothing ( float DeltaTime );
	void eventTickCameraEyePlane_Smoothing ( float DeltaTime );
	float Tick_SmoothValue ( float DeltaTime, float fSmoothingFactor, float fCurrentValue, float fTargetValue );
	bool IsAlive ( );
	void TraceTest ( );
	struct FTakeHitInfo GetHitInfo ( );
	void UpdatePawnViewLocation ( );
	struct FVector GetPawnViewLocation ( );
	void SetUpdateSkelWhenNotRendered ( unsigned long bValue );
	void GetDebugStringArray ( TArray< struct FString >* DebugInfo );
	class APBBasePlayerController* GetBasePlayerController ( );
	void FreezeRagDoll ( unsigned long bFreeze );
	void eventEncroachedBy ( class AActor* Other );
	void DrawStaticDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void PlayBleedEffects ( );
	void PlayRagDoll ( );
	void Suicide ( );
	void SetHandIKEnabled ( unsigned long bEnabled );
	void ResetCharPhysState ( );
	void SetPawnRBChannels ( unsigned long bRagdollMode );
	void StopAndResetAllAnimations ( );
	void StopAllAnimations ( );
	void GoIntoRagdoll ( class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void GoIntoRagdollNextFrame ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	bool CanGrabLadder ( );
	void Bleed ( struct FTakeHitInfo* HitInfo );
	void eventReplicatedEvent ( struct FName VarName );
	struct FName GetWeaponInHandBoneName ( );
	bool TestSkeletonOverlap ( );
	bool HasRagdoll ( );
	bool IsLayingOnBack ( );
	float GetPhysicsWeight ( );
	void RestorePreRagdollCollisionComponent ( );
};

UClass* APBBasePawn::pClassPointer = NULL;

// Class PlanBFramework.PBBasePlayerController
// 0x008C (0x066C - 0x05E0)
class APBBasePlayerController : public APlayerController
{
public:
	unsigned long                                      bAcuteHearing : 1;                                		// 0x05E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLogCameraModeChanges : 1;                        		// 0x05E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      SoundOcclusionUsingLowPassFilter : 1;             		// 0x05E0 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	struct FRotator                                    CameraRotation;                                   		// 0x05E4 (0x000C) [0x0000000000000000]              
	struct FVector                                     ShakeOffset;                                      		// 0x05F0 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ShakeRot;                                         		// 0x05FC (0x000C) [0x0000000000000000]              
	struct FName                                       CameraStyle;                                      		// 0x0608 (0x0008) [0x0000000000000000]              
	struct FCameraTransitionInfo                       CameraTransition;                                 		// 0x0610 (0x0020) [0x0000000000000000]              
	class ANavigationPoint*                            navPointTest;                                     		// 0x0630 (0x0004) [0x0000000000000000]              
	float                                              SndDuplicateFadeoutTime;                          		// 0x0634 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              SoundOcclusionVolumeMultiplier;                   		// 0x0638 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SoundOcclusionHighFrequencyGain;                  		// 0x063C (0x0004) [0x0000000000004000]              ( CPF_Config )
	class APBCameraActionManager*                      CameraManager;                                    		// 0x0640 (0x0004) [0x0000000000000000]              
	class AActor*                                      CalcViewActor;                                    		// 0x0644 (0x0004) [0x0000000000000000]              
	struct FVector                                     CalcViewActorLocation;                            		// 0x0648 (0x000C) [0x0000000000000000]              
	struct FVector                                     CalcViewLocation;                                 		// 0x0654 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CalcViewRotation;                                 		// 0x0660 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1338 ];

		return pClassPointer;
	};

	void UpdateWeaponRotation ( float DeltaTime );
	void UpdateCameraModeBlendFactor ( float fDeltaTime );
	void GetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation );
	void TestNavigation ( );
	void SetCameraMode ( struct FName NewCamMode );
	void SetBehindView ( unsigned long bNewBehindView );
	void ServerSuicide ( );
	void ServerSetCameraMode ( struct FName NewCamMode );
	void OnCameraTransitionFinished ( );
	void OnCameraModeChanged ( struct FName NewCamMode );
	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* damageTyp );
	bool IsFreeCamera ( );
	bool IsSecurityCamera ( );
	bool IsThirdPerson ( );
	bool IsFirstPerson ( );
	void eventResetCameraMode ( );
	bool ShouldInterpolateWeaponRotation ( );
	class APBCameraAction* SetCameraAction ( class APBCameraAction* pAction );
	class APBCameraActionManager* GetCameraManager ( );
	void ClientSetCameraMode ( struct FName NewCamMode );
	void ClientStopActorSoundComponent ( class USoundCue* ASound, class AActor* SourceActor, float FadeOutTime );
	void eventClientHearSound ( class USoundCue* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded );
	bool CalculateDeltaTime ( float* fDeltaTime );
	bool IsDeveloperInstallation ( );
	float GetViewRayDot ( struct FVector vLocation );
	void MapCheck ( struct FString strCommandline );
	void eventPostBeginPlay ( );
	void ShowMapCheckDlg ( );
	void NotifyCameraActionUninstalled ( );
	float GetAppSeconds ( );
};

UClass* APBBasePlayerController::pClassPointer = NULL;

// Class PlanBFramework.PBBaseStrategicMapCell
// 0x0000 (0x01D8 - 0x01D8)
class APBBaseStrategicMapCell : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1339 ];

		return pClassPointer;
	};

};

UClass* APBBaseStrategicMapCell::pClassPointer = NULL;

// Class PlanBFramework.PBCharAttachment
// 0x0000 (0x01D8 - 0x01D8)
class APBCharAttachment : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1340 ];

		return pClassPointer;
	};

};

UClass* APBCharAttachment::pClassPointer = NULL;

// Class PlanBFramework.PBDebugWindow
// 0x0118 (0x0154 - 0x003C)
class UPBDebugWindow : public UObject
{
public:
	int                                                Handle;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_posX;                                           		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_posY;                                           		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_width;                                          		// 0x0048 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_height;                                         		// 0x004C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                first;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                last;                                             		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FString                                     lines[ 0x15 ];                                    		// 0x0058 (0x00FC) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1341 ];

		return pClassPointer;
	};

	void Render ( );
	void Scroll ( );
	void SetText ( struct FString Text );
	void Close ( );
	void Text ( int X, int Y, struct FString txt );
	void Clear ( );
	void Open ( int PosX, int PosY, int Width, int Height, struct FString Title );
};

UClass* UPBDebugWindow::pClassPointer = NULL;

// Class PlanBFramework.PBExplosionLight
// 0x001C (0x0234 - 0x0218)
class UPBExplosionLight : public UPointLightComponent
{
public:
	unsigned long                                      bCheckFrameRate : 1;                              		// 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              HighDetailFrameTime;                              		// 0x021C (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0220 (0x0004) [0x0000000000000000]              
	int                                                TimeShiftIndex;                                   		// 0x0224 (0x0004) [0x0000000000000000]              
	TArray< struct FLightValues >                      TimeShift;                                        		// 0x0228 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1342 ];

		return pClassPointer;
	};

	void ValidateLightSetting ( );
	void ResetLight ( );
};

UClass* UPBExplosionLight::pClassPointer = NULL;

// Class PlanBFramework.PBLevelCheckCommandlet
// 0x0000 (0x007C - 0x007C)
class UPBLevelCheckCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1343 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UPBLevelCheckCommandlet::pClassPointer = NULL;

// Class PlanBFramework.PBNCampaignMap
// 0x0000 (0x01D8 - 0x01D8)
class APBNCampaignMap : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1344 ];

		return pClassPointer;
	};

};

UClass* APBNCampaignMap::pClassPointer = NULL;

// Class PlanBFramework.PBPhysicsEffectGenerator
// 0x0017 (0x006C - 0x0055)
class UPBPhysicsEffectGenerator : public UActorComponent
{
public:
	int                                                AudioComponents;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FInterpCurveFloat                           SndVelocityVolumeCurve;                           		// 0x005C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1345 ];

		return pClassPointer;
	};

	class AEmitter* SpawnExplosionEffects ( struct FVector Location, struct FExplosionInfo* expInfo );
	void SetSoundMode ( struct FName SoundModeName, struct FVector Location, float fMaxDistance );
	class UPBExplosionLight* CreateExplosionLight ( class AActor* attachTo, struct FVector Location, struct FExplosionInfo* expInfo );
	bool ShouldSpawnExplosionLight ( struct FVector Location );
	void SpawnSoundIndicator ( class UAudioComponent* AC );
	bool RecurseSoundNodes ( class USoundNode* sndNode );
	bool IsSoundCueValid ( class USoundCue* sndCue );
	class UAudioComponent* CreateActorAudioComponentAt ( class USoundCue* ASound, struct FVector SourceLocation );
	float GetVelocityVolumeMultiplier ( float fVelocityKmh );
};

UClass* UPBPhysicsEffectGenerator::pClassPointer = NULL;

// Class PlanBFramework.PBReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UPBReplaceActorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1346 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UPBReplaceActorCommandlet::pClassPointer = NULL;

// Class PlanBFramework.PBAirCraftPathNode
// 0x0004 (0x02BC - 0x02B8)
class APBAirCraftPathNode : public AVolumePathNode
{
public:
	unsigned long                                      bBuildAirCraftPath : 1;                           		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1347 ];

		return pClassPointer;
	};

};

UClass* APBAirCraftPathNode::pClassPointer = NULL;

// Class PlanBFramework.PBVehicleAutoPilotController
// 0x0014 (0x03CC - 0x03B8)
class APBVehicleAutoPilotController : public AAIController
{
public:
	class UClass*                                      NavigationPointClass;                             		// 0x03B8 (0x0004) [0x0000000000000000]              
	struct FVector                                     AutoPilotDestination;                             		// 0x03BC (0x000C) [0x0000000000000000]              
	class AActor*                                      RandomTarget;                                     		// 0x03C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1348 ];

		return pClassPointer;
	};

	void ResetPawnControls ( );
	class ANavigationPoint* FindRandomNavigationPointXXX ( );
	class ANavigationPoint* FindRandomNavigationPoint ( );
	class ANavigationPoint* FindNextNavigationPoint ( );
	void DrawDebug ( class APlayerController* PC, class UCanvas* Canvas );
};

UClass* APBVehicleAutoPilotController::pClassPointer = NULL;

// Class PlanBFramework.PBVehicleAutoPilotController_Aircraft
// 0x0000 (0x03CC - 0x03CC)
class APBVehicleAutoPilotController_Aircraft : public APBVehicleAutoPilotController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1349 ];

		return pClassPointer;
	};

	void ResetPawnControls ( );
};

UClass* APBVehicleAutoPilotController_Aircraft::pClassPointer = NULL;

// Class PlanBFramework.PBKActor
// 0x004C (0x0314 - 0x02C8)
class APBKActor : public AKActor
{
public:
	unsigned char                                      nRemoveEffectsTrigger;                            		// 0x02C8 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      nRemoveEffectsTrigger_Local;                      		// 0x02C9 (0x0001) [0x0000000000000000]              
	unsigned char                                      nStaticMeshShift;                                 		// 0x02CA (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      PreAttachPhysics;                                 		// 0x02CB (0x0001) [0x0000000000000000]              
	class UPBPhysicsSynchronizer*                      PhysicsSynchronizer;                              		// 0x02CC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPBPhysicsEffectGenerator*                   PhysicsEffectGenerator;                           		// 0x02D0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      CrushedDamageType;                                		// 0x02D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsAwake : 1;                                     		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCollisionWarningDone : 1;                        		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWakeupEffectPlayed : 1;                          		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRestOnGroundEffectPlayed : 1;                    		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNeedsReset : 1;                                  		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCreatePhysicsCollisionGeometry : 1;              		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bIsPushable : 1;                                  		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bUseEncrouchOn : 1;                               		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bUndestructible : 1;                              		// 0x02D8 (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	class UParticleSystemComponent*                    emitter_WakeupEffect;                             		// 0x02DC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    emitter_RestOnGroundEffect;                       		// 0x02E0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                PhysicsActivationDamageThreshold;                 		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VelocityDamage;                                   		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDamageVelocityKmH;                             		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDamageVelocityKmH;                             		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CumulativeDamage;                                 		// 0x02F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      ExplosionLightClass;                              		// 0x02F8 (0x0004) [0x0000000000000000]              
	TArray< struct FStaticMeshShiftDesc >              MeshShiftInfo;                                    		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UStaticMesh*                                 BaseStaticMesh;                                   		// 0x0308 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   BaseStaticMeshMaterial;                           		// 0x030C (0x0004) [0x0000000000000000]              
	int                                                nAttachedCount;                                   		// 0x0310 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1350 ];

		return pClassPointer;
	};

	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ShiftToStaticMesh ( class UStaticMesh* NewMesh, unsigned long bNoCollision, class UMaterial* Material );
	void ShiftStaticMesh ( );
	void RemoveEffects ( );
	void Reset ( );
	void eventDestroyed ( );
	void BehindReset ( );
	void eventReplicatedEvent ( struct FName VarName );
	void PostBeginPlay ( );
	class UParticleSystemComponent* eventPlayRestOnGroundEffect ( );
	class UParticleSystemComponent* eventPlayWakeupEffect ( );
	void OnWakeRigidBody ( class UPBSeqAct_WakeRigidBody* seqAction );
	void eventOnBecomeStationary ( );
	void OnClientReset ( );
	void GetDebugStringArray ( TArray< struct FString >* DebugInfo );
	bool EncroachingOn_Prototype ( class AActor* Other );
	bool EncroachingOn ( class AActor* Other );
	void DrawDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	bool ShouldDrawDebug ( class APBBasePlayerController* localPlayerCtrl, float* fDistance, float* fViewRayDot );
	void DrawStaticDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	void DebugCommand ( class APBBasePlayerController* playerCtrl, struct FString strCommand );
	float ModifyRadiusDamage ( class AActor* Victim, struct FVector HurtOrigin, float fRadius, float fBaseDamage );
	bool AGHurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void Detach ( class AActor* Other );
	void Attach ( class AActor* Other );
	class UPBExplosionLight* CreateExplosionLight ( class AActor* attachTo );
	class UAudioComponent* CreateAudioComponentAt ( class USoundCue* ASound, struct FVector SourceLocation );
	bool CheckForErrors ( );
	void SetMaximumAngularVelocity ( float MaxVelocity );
	void WakeRigidBody ( struct FVector InitialLinearVelocity, struct FVector InitialAngularVelocity );
	void ResetPhysics ( );
	void PutToSleep ( );
	float GetRBMass ( int nBodyIndex );
	class UPhysicalMaterial* GetPhysicalMaterial ( );
};

UClass* APBKActor::pClassPointer = NULL;

// Class PlanBFramework.PBPhysicalMaterialPropertyExtension
// 0x0003 (0x0058 - 0x0055)
class UPBPhysicalMaterialPropertyExtension : public UActorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1351 ];

		return pClassPointer;
	};

};

UClass* UPBPhysicalMaterialPropertyExtension::pClassPointer = NULL;

// Class PlanBFramework.PBFrictionProperties
// 0x0000 (0x0058 - 0x0058)
class UPBFrictionProperties : public UPBPhysicalMaterialPropertyExtension
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1352 ];

		return pClassPointer;
	};

};

UClass* UPBFrictionProperties::pClassPointer = NULL;

// Class PlanBFramework.PBPhysicsAssetSynchronized
// 0x0000 (0x01E8 - 0x01E8)
class APBPhysicsAssetSynchronized : public AKAsset
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1353 ];

		return pClassPointer;
	};

};

UClass* APBPhysicsAssetSynchronized::pClassPointer = NULL;

// Class PlanBFramework.PBPhysicsBasePawn
// 0x0000 (0x04A4 - 0x04A4)
class APBPhysicsBasePawn : public APawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1354 ];

		return pClassPointer;
	};

	void PlayTakeHitEffects_U3 ( );
	void PlayHit_U3 ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool IsUpperBoneName ( struct FName InName );
	bool IsLowerBoneName ( struct FName InName );
	void GetLowerBoneNames ( TArray< struct FName >* lowerBodyBoneNames );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* APBPhysicsBasePawn::pClassPointer = NULL;

// Class PlanBFramework.PBPhysicsSynchronizer
// 0x00BB (0x0110 - 0x0055)
class UPBPhysicsSynchronizer : public UActorComponent
{
public:
	int                                                nCurrentSendBodyIndex;                            		// 0x0058 (0x0004) [0x0000000000000000]              
	unsigned long                                      bServerHasSendData : 1;                           		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSendContinuous : 1;                              		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLogNetwork_Client : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bLogNetwork_ClientDisplacement : 1;               		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bLogNetwork_Server : 1;                           		// 0x005C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bShowPhysicsDebug : 1;                            		// 0x005C (0x0004) [0x0000000000000000] [0x00000020] 
	TArray< struct FRigidBodyStateDifference >         RigidBodyNetworkState;                            		// 0x0060 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FRigidBodyState >                   InitialRigidBodyState;                            		// 0x006C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0078 (0x0008) MISSED OFFSET
	struct FRigidBodyStateStats                        StateStats;                                       		// 0x0080 (0x0050) [0x0000000000000002]              ( CPF_Const )
	float                                              fUPDATE_LINEAR_THRESHOLD_SQR;                     		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_LINEAR_AMOUNT;                            		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_LINEAR_RECIPFIXTIME;                      		// 0x00D8 (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_LINEAR_VEL_THRESHOLD_SQR;                 		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_ANGULAR_THRESHOLD;                        		// 0x00E0 (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_ANGULAR_SNAP_THRESHOLD;                   		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_ANGULAR_AMOUNT;                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_ANGULAR_RECIPFIXTIME;                     		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              fUPDATE_ANGULAR_ACCUM_ERROR_THRESHOLD;            		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned char                                      PhysicsSynchMode_SingleBody;                      		// 0x00F4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PhysicsSynchMode_MultiBody;                       		// 0x00F5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FActorResetInformation                      resetInformation;                                 		// 0x00F8 (0x0018) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1355 ];

		return pClassPointer;
	};

	void GetDebugInfo ( TArray< struct FString >* DebugInfo );
	void DrawDebug_ResetInformation ( class AActor* invoker );
	void StoreResetInformation ( struct FVector InLocation, struct FRotator InRotation );
	void ResetToInitialPhysicsState ( );
	void ResetLastReceivedSendData ( );
	void OnRigidBodyStateReplication ( struct FRigidBodyState* RBState );
	float MeterToUT ( float fMeter );
	float KmhToUTs ( float fKmH );
	float GetRBMass ( int nBodyIndex );
	float UTToMeter ( float fU3 );
	float UTsToKmh ( float fU3Velocity );
	struct FVector GetKmh ( struct FVector vU3Velocity );
	void InitialPhysicsStateSnapshot ( );
	class UPhysicalMaterial* GetCorrectPhysicalMaterialForStaticMesh ( class UStaticMeshComponent* SMC );
	void DrawPhysicsDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	void DrawDebugPoint ( struct FVector vPosition, unsigned char R, unsigned char G, unsigned char B );
	void DrawDebugLine ( struct FVector vStart, struct FVector vEnd, unsigned long bDrawPoints );
	void DrawDebugTraceLine ( struct FVector vStart, struct FVector vEnd, struct FVector vHitLocation );
	void DrawDebugDiamond ( struct FVector Position, float Radius, unsigned char R, unsigned char G, unsigned char B, unsigned long bAddPointMarker );
	void DrawDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	bool HasPhysicsDebugFlag ( unsigned char eDebugFlag );
	void TogglePhysicsDebugFlag ( unsigned char eDebugFlag );
	bool HasLineCheckDebugFlag ( unsigned char eDebugFlag );
	void ToggleLineCheckDebugFlag ( unsigned char eDebugFlag );
	void EnableOnRigidBodyCollision ( unsigned long bValue );
};

UClass* UPBPhysicsSynchronizer::pClassPointer = NULL;

// Class PlanBFramework.PBSkeletalMeshExtension
// 0x0007 (0x005C - 0x0055)
class UPBSkeletalMeshExtension : public UActorComponent
{
public:
	struct FPointer                                    pAgSkeletalMesh;                                  		// 0x0058 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1356 ];

		return pClassPointer;
	};

	void GetDebugInfo ( TArray< struct FString >* DebugInfo );
	bool HasSocket ( struct FName SocketName );
	bool HasBone ( struct FName skelBoneName );
	class USkeletalMesh* GetSkeletalMesh ( );
	bool GetNamedMeshLocationAndRotation ( struct FName refName, struct FVector* vLocation, struct FRotator* rRotation );
	bool GetNamedMeshLocation ( struct FName refName, struct FVector* vLocation );
	int GetMatchingBoneIndex ( struct FName skelBoneName );
	bool GetCLODBoneName ( struct FName skelBoneNamePattern, struct FName* skelBoneName );
	bool GetBoneName ( int BoneIndex, struct FName* skelBoneName );
	struct FVector GetBoneLocation ( int BoneIndex );
	int GetBoneIndex ( struct FName skelBoneName );
	bool IsStringInName ( struct FString Str, struct FName testName );
};

UClass* UPBSkeletalMeshExtension::pClassPointer = NULL;

// Class PlanBFramework.PBSkeletalBoneStatesBase
// 0x0000 (0x005C - 0x005C)
class UPBSkeletalBoneStatesBase : public UPBSkeletalMeshExtension
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1357 ];

		return pClassPointer;
	};

};

UClass* UPBSkeletalBoneStatesBase::pClassPointer = NULL;

// Class PlanBFramework.PBParticleModuleEventReceiverSound
// 0x000C (0x0060 - 0x0054)
class UPBParticleModuleEventReceiverSound : public UParticleModuleEventReceiverBase
{
public:
	class USoundCue*                                   CollisionSound;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathSound;                                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SpawnSound;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1358 ];

		return pClassPointer;
	};

};

UClass* UPBParticleModuleEventReceiverSound::pClassPointer = NULL;

// Class PlanBFramework.PBBaseDamageType
// 0x0074 (0x00D8 - 0x0064)
class UPBBaseDamageType : public UDamageType
{
public:
	struct FName                                       DeathAnim;                                        		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathAnimRate;                                    		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAnimateHipsForDeathAnim : 1;                     		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCausesTemporaryRagDoll : 1;                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDirectDamage : 1;                                		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSeversHead : 1;                                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MotorDecayTime;                                   		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StopAnimAfterDamageInterval;                      		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhysicsTakeHitMomentumThreshold;                  		// 0x007C (0x0004) [0x0000000000000000]              
	struct FName                                       BoneNames_RightLeg[ 0x4 ];                        		// 0x0080 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneNames_LeftLeg[ 0x4 ];                         		// 0x00A0 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneNames_Stomach[ 0x3 ];                         		// 0x00C0 (0x0018) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36798 ];

		return pClassPointer;
	};

	struct FName GetCorrectDeathAnimationFromHitLoc ( struct FName BoneName, unsigned long bBehind );
	float GetHitEffectDuration ( class APawn* P, float Damage );
	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UPBBaseDamageType::pClassPointer = NULL;

// Class PlanBFramework.PBCameraActionManager
// 0x002C (0x0204 - 0x01D8)
class APBCameraActionManager : public AActor
{
public:
	struct FVector                                     LastLocation;                                     		// 0x01D8 (0x000C) [0x0000000000000000]              
	struct FRotator                                    lastRotation;                                     		// 0x01E4 (0x000C) [0x0000000000000000]              
	class APlayerController*                           pCtrl;                                            		// 0x01F0 (0x0004) [0x0000000000000000]              
	class APBCameraAction*                             pCurrentAction;                                   		// 0x01F4 (0x0004) [0x0000000000000000]              
	TArray< class APBCameraAction* >                   pCameraActionStack;                               		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37158 ];

		return pClassPointer;
	};

	void SetCameraPosAndRot ( class APBBasePawn* pPawn, struct FVector vPosition, struct FRotator rRotation );
	bool UpdateCamera ( float fDeltaTime, class AActor* Target, struct FVector* OutCamLoc, struct FRotator* OutCamRot, float* OutFOV );
	bool GetWeaponRotation ( struct FRotator* weaponRotator );
	class APlayerController* GetPlayerController ( );
	void DrawPostProcessEffect ( class UCanvas* Canvas );
	void DrawHUD ( class UCanvas* Canvas );
	class APBCameraAction* InstallCameraAction ( class APBCameraAction* pCA );
	class APBCameraAction* InstallCameraActionClass ( class UClass* pCameraClass );
	bool ShouldInterpolateWeaponRotation ( );
	void UninstallCameraAction ( class APBCameraAction* pCA );
	void ActivateHighestPriorityAction ( );
	int FindCameraActionIndex ( class APBCameraAction* pAction );
	bool IsCameraAction ( class UClass* pCameraActionClass );
	void ClearAllCameraActions ( );
	void RemoveActionFromStack ( class APBCameraAction* pToRemove );
	void AddActionToStack ( class APBCameraAction* pToAdd );
	void PostBeginPlay ( );
};

UClass* APBCameraActionManager::pClassPointer = NULL;

// Class PlanBFramework.PBCameraAction
// 0x0034 (0x020C - 0x01D8)
class APBCameraAction : public AActor
{
public:
	class UMaterial*                                   pPostProcessMaterial;                             		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoDeactivate : 1;                              		// 0x01DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldInterpolateWeaponRotation : 1;             		// 0x01DC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              fTimeToLive;                                      		// 0x01E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPriority;                                        		// 0x01E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstanceConstant*                   pPostOverlay;                                     		// 0x01E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APBCameraActionManager*                      pMyManager;                                       		// 0x01EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastLocation;                                     		// 0x01F0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    lastRotation;                                     		// 0x01FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              lastFOV;                                          		// 0x0208 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37212 ];

		return pClassPointer;
	};

	void SetCameraPosAndRot ( class APBBasePawn* pPawn, struct FVector vPosition, struct FRotator rRotation, float fFOV );
	void UpdateWeaponPosAndRot ( float fDeltaTime, class APlayerController* PC, struct FVector* OutCamLoc, struct FRotator* OutCamRot );
	bool UpdateCamera ( float fDeltaTime, class AActor* Target, struct FVector* OutCamLoc, struct FRotator* OutCamRot, float* OutFOV );
	bool IsDeactivationPossible ( );
	void DrawPostProcessEffect ( class UCanvas* Canvas );
	void DrawHUD ( class UCanvas* Canvas );
	bool GetWeaponRotation ( struct FRotator* weaponRotator );
	float GetActionPriority ( );
	void DeactivateAction ( );
	void ActivateAction ( class APBCameraActionManager* pManager );
};

UClass* APBCameraAction::pClassPointer = NULL;

// Class PlanBFramework.PBDebugActor
// 0x000C (0x01E4 - 0x01D8)
class APBDebugActor : public AActor
{
public:
	TArray< struct FString >                           DebugInfo;                                        		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37358 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	class APBDebugActor* SpawnStatic ( class AActor* creator, struct FVector vLocation, unsigned long bPersistent );
	bool ShouldDrawDebug ( class APBBasePlayerController* localPlayerCtrl, float* fDistance, float* fViewRayDot );
	void DrawDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	void DrawStaticDebug ( class APBBasePlayerController* localPlayerCtrl, class UCanvas* Canvas );
	void AddInfo ( struct FString Info );
};

UClass* APBDebugActor::pClassPointer = NULL;

// Class PlanBFramework.PBFlockable
// 0x0000 (0x01D8 - 0x01D8)
class APBFlockable : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37428 ];

		return pClassPointer;
	};

	struct FVector GetAvoidance ( );
	void AddAvoidance ( struct FVector V );
	void ResetAvoidance ( );
	void SetTarget ( struct FVector* pos );
	void SetVelocity ( float _speed );
	void SetVelocityRange ( struct FRange* _range );
	void SetScaleRange ( struct FRange* _range );
	void SetFlock ( class AActor* flock );
	void SetAvoidanceRadius ( float _radius );
	float GetAvoidanceRadius ( );
	void Animate ( struct FName movementType );
	void Reset ( );
};

UClass* APBFlockable::pClassPointer = NULL;

// Class PlanBFramework.PBFlockVolume
// 0x0000 (0x0214 - 0x0214)
class APBFlockVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37455 ];

		return pClassPointer;
	};

};

UClass* APBFlockVolume::pClassPointer = NULL;

// Class PlanBFramework.PBHugeExplosionLight
// 0x0000 (0x0234 - 0x0234)
class UPBHugeExplosionLight : public UPBExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37458 ];

		return pClassPointer;
	};

};

UClass* UPBHugeExplosionLight::pClassPointer = NULL;

// Class PlanBFramework.PBRocketLight
// 0x0000 (0x0234 - 0x0234)
class UPBRocketLight : public UPBExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37873 ];

		return pClassPointer;
	};

};

UClass* UPBRocketLight::pClassPointer = NULL;

// Class PlanBFramework.PBSkeletalMeshPhysicsExtension
// 0x0000 (0x005C - 0x005C)
class UPBSkeletalMeshPhysicsExtension : public UPBSkeletalMeshExtension
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37917 ];

		return pClassPointer;
	};

};

UClass* UPBSkeletalMeshPhysicsExtension::pClassPointer = NULL;

// Class PlanBFramework.PBTexSwitchComponent
// 0x000F (0x0064 - 0x0055)
class UPBTexSwitchComponent : public UActorComponent
{
public:
	class UMaterialInstanceConstant*                   m_CntMaterialInstance;                            		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sHealthConstant;                                		// 0x005C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37919 ];

		return pClassPointer;
	};

	void ApplyOffset ( class UMeshComponent* Comp, int iMaxHealth, int iCurrHealth );
	bool Initialize ( class UMeshComponent* Comp );
	void Reset ( );
};

UClass* UPBTexSwitchComponent::pClassPointer = NULL;

// Class PlanBFramework.PBTextSingleSwitchComponent
// 0x0004 (0x0068 - 0x0064)
class UPBTextSingleSwitchComponent : public UPBTexSwitchComponent
{
public:
	int                                                TexturesShiftCount;                               		// 0x0064 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37933 ];

		return pClassPointer;
	};

	void ApplyOffset ( class UMeshComponent* Comp, int iMaxHealth, int iCurrHealth );
};

UClass* UPBTextSingleSwitchComponent::pClassPointer = NULL;

// Class PlanBFramework.PBStaticMeshDestructible
// 0x0030 (0x0210 - 0x01E0)
class APBStaticMeshDestructible : public AStaticMeshActor
{
public:
	unsigned long                                      m_bKismetShift : 1;                               		// 0x01E0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      m_bKismetOnly : 1;                                		// 0x01E0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bRemoveCollisionsWhenDead : 1;                  		// 0x01E0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	int                                                m_iCurrHealth;                                    		// 0x01E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UPBTextSingleSwitchComponent*                m_TexSwitcher;                                    		// 0x01E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                m_iHealth;                                        		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_DamageThreshold;                                		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 m_BaseStaticMesh;                                 		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   m_BaseStaticMeshMaterial;                         		// 0x01F8 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_nStaticMeshShift;                               		// 0x01FC (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UMaterialInterface*                          m_pReplicatedMaterial;                            		// 0x0200 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< struct FStaticMeshShiftDesc >              MeshShiftInfo;                                    		// 0x0204 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37941 ];

		return pClassPointer;
	};

	void ShiftToStaticMesh ( class UStaticMesh* NewMesh, unsigned long bNoCollision, class UMaterial* Material );
	void ShiftStaticMesh ( );
	void StopPhysicsTimer ( );
	void eventReplicatedEvent ( struct FName VarName );
	void OnSetMaterial ( class USeqAct_SetMaterial* Action );
	void OnTriggerDestructible ( class UPBSeqAct_TriggerDestructible* seqAction );
	void ClientTakeDamage ( );
	void ReliableHit ( class AController* EventInstigator, struct FVector Position, struct FVector Momentum, class UClass* DamageType );
	void NonReliableHit ( class AController* EventInstigator, struct FVector Position, struct FVector Momentum, class UClass* DamageType );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ClientReset ( );
	void Reset ( );
};

UClass* APBStaticMeshDestructible::pClassPointer = NULL;

// Class PlanBFramework.PBWeaponRecoil
// 0x0000 (0x003C - 0x003C)
class UPBWeaponRecoil : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38022 ];

		return pClassPointer;
	};

};

UClass* UPBWeaponRecoil::pClassPointer = NULL;

// Class PlanBFramework.PBWeaponSpreadBase
// 0x0000 (0x003C - 0x003C)
class UPBWeaponSpreadBase : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38024 ];

		return pClassPointer;
	};

};

UClass* UPBWeaponSpreadBase::pClassPointer = NULL;

// Class PlanBFramework.SeqEvent_HearNoise
// 0x0000 (0x0114 - 0x0114)
class USeqEvent_HearNoise : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38026 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_HearNoise::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif