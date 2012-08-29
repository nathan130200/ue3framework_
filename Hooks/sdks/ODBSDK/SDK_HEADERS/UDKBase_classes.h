/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UDKBase_classes.h
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

#define CONST_SABM_FIND_FIRST_BIND                               -2
#define CONST_INVALIDFIELD                                       -1

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum UDKBase.CastlePC.ETutorialStage
/*enum ETutorialStage
{
	ETS_None                                           = 0,
	ETS_Tap                                            = 1,
	ETS_Swipe                                          = 2,
	ETS_Sticks                                         = 3,
	ETS_Done                                           = 4,
	ETS_MAX                                            = 5
};*/

// Enum UDKBase.UDKAnimBlendByFall.EBlendFallTypes
/*enum EBlendFallTypes
{
	FBT_Up                                             = 0,
	FBT_Down                                           = 1,
	FBT_PreLand                                        = 2,
	FBT_Land                                           = 3,
	FBT_DblJumpUp                                      = 4,
	FBT_DblJumpDown                                    = 5,
	FBT_DblJumpPreLand                                 = 6,
	FBT_DblJumpLand                                    = 7,
	FBT_None                                           = 8,
	FBT_MAX                                            = 9
};*/

// Enum UDKBase.UDKAnimBlendByFlying.EFlyingState
/*enum EFlyingState
{
	Flying_NotFlying                                   = 0,
	Flying_OpeningWings                                = 1,
	Flying_Flying                                      = 2,
	Flying_ClosingWings                                = 3,
	Flying_MAX                                         = 4
};*/

// Enum UDKBase.UDKMapMusicInfo.ECrossfadeType
/*enum ECrossfadeType
{
	CFT_BeginningOfMeasure                             = 0,
	CFT_EndOfMeasure                                   = 1,
	CFT_MAX                                            = 2
};*/

// Enum UDKBase.UDKUIDataProvider_MenuOption.EUTOptionType
/*enum EUTOptionType
{
	UTOT_ComboReadOnly                                 = 0,
	UTOT_ComboNumeric                                  = 1,
	UTOT_CheckBox                                      = 2,
	UTOT_Slider                                        = 3,
	UTOT_Spinner                                       = 4,
	UTOT_EditBox                                       = 5,
	UTOT_CollectionCheckBox                            = 6,
	UTOT_MAX                                           = 7
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UDKBase.ParticleModuleTypeDataSnow
// 0x00B4 (0x00FC - 0x0048)
class UParticleModuleTypeDataSnow : public UParticleModuleTypeDataBase
{
public:
	struct FRawDistributionVector                      StartSize;                                        		// 0x0048 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      StartVelocity;                                    		// 0x0064 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      StartLocation;                                    		// 0x0080 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      ColorOverLife;                                    		// 0x009C (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       AlphaOverLife;                                    		// 0x00B8 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionFloat                       Lifetime;                                         		// 0x00D4 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              KillHeight;                                       		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeStart;                                        		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeStop;                                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1831 ];

		return pClassPointer;
	};

};

UClass* UParticleModuleTypeDataSnow::pClassPointer = NULL;

// Class UDKBase.SimpleGame
// 0x0000 (0x0380 - 0x0380)
class ASimpleGame : public AFrameworkGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1832 ];

		return pClassPointer;
	};

	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	struct FString StripPlayOnPrefix ( struct FString MapName );
};

UClass* ASimpleGame::pClassPointer = NULL;

// Class UDKBase.UDKGame
// 0x0000 (0x0380 - 0x0380)
class AUDKGame : public ASimpleGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1833 ];

		return pClassPointer;
	};

};

UClass* AUDKGame::pClassPointer = NULL;

// Class UDKBase.UDKAIDecisionComponent
// 0x0007 (0x005C - 0x0055)
class UUDKAIDecisionComponent : public UActorComponent
{
public:
	unsigned long                                      bTriggered : 1;                                   		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1834 ];

		return pClassPointer;
	};

};

UClass* UUDKAIDecisionComponent::pClassPointer = NULL;

// Class UDKBase.UDKBot
// 0x00C8 (0x042C - 0x0364)
class AUDKBot : public AAIController
{
public:
	class AUDKSquadAI*                                 Squad;                                            		// 0x0364 (0x0004) [0x0000000000000000]              
	class UUDKAIDecisionComponent*                     DecisionComponent;                                		// 0x0368 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      TemporaryFocus;                                   		// 0x036C (0x0004) [0x0000000000000000]              
	unsigned long                                      bExecutingWhatToDoNext : 1;                       		// 0x0370 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScriptSpecialJumpCost : 1;                       		// 0x0370 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceRefreshRoute : 1;                           		// 0x0370 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTargetAlternateLoc : 1;                          		// 0x0370 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bEnemyInfoValid : 1;                              		// 0x0370 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bEnemyIsVisible : 1;                              		// 0x0370 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bLeadTarget : 1;                                  		// 0x0370 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bJumpOverWall : 1;                                		// 0x0370 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPlannedJump : 1;                                 		// 0x0370 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bInDodgeMove : 1;                                 		// 0x0370 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bEnemyAcquired : 1;                               		// 0x0370 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bNeedDelayedLeaveVehicle : 1;                     		// 0x0370 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bAllowRouteReuse : 1;                             		// 0x0370 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bUsingSquadRoute : 1;                             		// 0x0370 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bUsePreviousSquadRoute : 1;                       		// 0x0370 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned char                                      ScriptedFireMode;                                 		// 0x0374 (0x0001) [0x0000000000000000]              
	float                                              EnemyVisibilityTime;                              		// 0x0378 (0x0004) [0x0000000000000000]              
	class APawn*                                       VisibleEnemy;                                     		// 0x037C (0x0004) [0x0000000000000000]              
	class AVehicle*                                    LastBlockingVehicle;                              		// 0x0380 (0x0004) [0x0000000000000000]              
	class APawn*                                       CurrentlyTrackedEnemy;                            		// 0x0384 (0x0004) [0x0000000000000000]              
	TArray< struct FEnemyPosition >                    SavedPositions;                                   		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     ImpactVelocity;                                   		// 0x0394 (0x000C) [0x0000000000000000]              
	int                                                AcquisitionYawRate;                               		// 0x03A0 (0x0004) [0x0000000000000000]              
	float                                              HearingThreshold;                                 		// 0x03A4 (0x0004) [0x0000000000000000]              
	float                                              RespawnPredictionTime;                            		// 0x03A8 (0x0004) [0x0000000000000000]              
	float                                              WarningDelay;                                     		// 0x03AC (0x0004) [0x0000000000000000]              
	class AProjectile*                                 WarningProjectile;                                		// 0x03B0 (0x0004) [0x0000000000000000]              
	struct FVector                                     MonitorStartLoc;                                  		// 0x03B4 (0x000C) [0x0000000000000000]              
	class APawn*                                       MonitoredPawn;                                    		// 0x03C0 (0x0004) [0x0000000000000000]              
	float                                              MonitorMaxDistSq;                                 		// 0x03C4 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastSeenPos;                                      		// 0x03C8 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastSeeingPos;                                    		// 0x03D4 (0x000C) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x03E0 (0x0004) [0x0000000000000000]              
	float                                              TrackingReactionTime;                             		// 0x03E4 (0x0004) [0x0000000000000000]              
	float                                              BaseTrackingReactionTime;                         		// 0x03E8 (0x0004) [0x0000000000000000]              
	struct FVector                                     TrackedVelocity;                                  		// 0x03EC (0x000C) [0x0000000000000000]              
	class ANavigationPoint*                            SquadRouteGoal;                                   		// 0x03F8 (0x0004) [0x0000000000000000]              
	class APawn*                                       BlockedAimTarget;                                 		// 0x03FC (0x0004) [0x0000000000000000]              
	float                                              LastIterativeCheck;                               		// 0x0400 (0x0004) [0x0000000000000000]              
	float                                              AimUpdateFrequency;                               		// 0x0404 (0x0004) [0x0000000000000000]              
	float                                              LastAimUpdateTime;                                		// 0x0408 (0x0004) [0x0000000000000000]              
	float                                              ErrorUpdateFrequency;                             		// 0x040C (0x0004) [0x0000000000000000]              
	float                                              LastErrorUpdateTime;                              		// 0x0410 (0x0004) [0x0000000000000000]              
	float                                              CurrentAimError;                                  		// 0x0414 (0x0004) [0x0000000000000000]              
	float                                              DodgeLandZ;                                       		// 0x0418 (0x0004) [0x0000000000000000]              
	class AActor*                                      FearSpots[ 0x2 ];                                 		// 0x041C (0x0008) [0x0000000000000000]              
	float                                              DodgeToGoalPct;                                   		// 0x0424 (0x0004) [0x0000000000000000]              
	float                                              MultiJumpZ;                                       		// 0x0428 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1835 ];

		return pClassPointer;
	};

	void eventDelayedLeaveVehicle ( );
	void eventDelayedWarning ( );
	void eventMissedDodge ( );
	float eventAdjustAimError ( float TargetDist, unsigned long bInstantProj );
	float eventSuperDesireability ( class APickupFactory* P );
	bool eventSpecialJumpCost ( float RequiredJumpZ, float* Cost );
	void eventMayDodgeToMoveTarget ( );
	void eventTimeDJReset ( );
	void eventMonitoredPawnAlert ( );
	void eventWhatToDoNext ( );
	class AActor* FindBestSuperPickup ( float MaxDist );
	void BuildSquadRoute ( );
	class AActor* FindPathToSquadRoute ( unsigned long bWeightDetours );
	class AActor* FindBestInventoryPath ( float* MinWeight );
	bool CanMakePathTo ( class AActor* A );
	void LatentWhatToDoNext ( );
	void WaitToSeeEnemy ( );
	void eventReceiveRunOverWarning ( class AUDKVehicle* V, float projSpeed, struct FVector VehicleDir );
	void eventExecuteWhatToDoNext ( );
	class AActor* FaceActor ( float StrafingModifier );
};

UClass* AUDKBot::pClassPointer = NULL;

// Class UDKBase.UDKCarriedObject
// 0x0038 (0x0200 - 0x01C8)
class AUDKCarriedObject : public AActor
{
public:
	class ATeamInfo*                                   Team;                                             		// 0x01C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ANavigationPoint*                            LastAnchor;                                       		// 0x01CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastValidAnchorTime;                              		// 0x01D0 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      SkelMesh;                                         		// 0x01D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bHome : 1;                                        		// 0x01D8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class AUDKGameObjective*                           HomeBase;                                         		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     HomeBaseOffset;                                   		// 0x01E0 (0x000C) [0x0000000000000000]              
	class AActor*                                      OldBase;                                          		// 0x01EC (0x0004) [0x0000000000000000]              
	class AActor*                                      OldBaseBase;                                      		// 0x01F0 (0x0004) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x01F4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1836 ];

		return pClassPointer;
	};

	unsigned char GetTeamNum ( );
	void eventOnBaseChainChanged ( );
	void eventNotReachableBy ( class APawn* P );
	void SetHUDLocation ( struct FVector NewHUDLocation );
};

UClass* AUDKCarriedObject::pClassPointer = NULL;

// Class UDKBase.UDKDataStore_GameSearchBase
// 0x0004 (0x0094 - 0x0090)
class UUDKDataStore_GameSearchBase : public UUIDataStore_OnlineGameSearch
{
public:
	class UUDKUIDataProvider_ServerDetails*            ServerDetailsProvider;                            		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1837 ];

		return pClassPointer;
	};

	bool HasExistingSearchResults ( );
	bool HasOutstandingQueries ( unsigned long bRestrictCheckToSelf );
	void OnSearchComplete ( unsigned long bWasSuccessful );
	bool eventSubmitGameSearch ( unsigned char ControllerIndex, unsigned long bInvalidateExistingSearchResults );
	void eventInit ( );
};

UClass* UUDKDataStore_GameSearchBase::pClassPointer = NULL;

// Class UDKBase.UDKEmitCameraEffect
// 0x0008 (0x01DC - 0x01D4)
class AUDKEmitCameraEffect : public AEmitter
{
public:
	float                                              DistFromCamera;                                   		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AUDKPlayerController*                        Cam;                                              		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1838 ];

		return pClassPointer;
	};

	void UpdateLocation ( float CamFOVDeg, struct FVector* CamLoc, struct FRotator* CamRot );
	void RegisterCamera ( class AUDKPlayerController* inCam );
	void Destroyed ( );
	void eventPostBeginPlay ( );
};

UClass* AUDKEmitCameraEffect::pClassPointer = NULL;

// Class UDKBase.UDKEmitterPool
// 0x000C (0x022C - 0x0220)
class AUDKEmitterPool : public AEmitterPool
{
public:
	TArray< struct FAttachedExplosionLight >           RelativeExplosionLights;                          		// 0x0220 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1839 ];

		return pClassPointer;
	};

	class UUDKExplosionLight* SpawnExplosionLight ( class UClass* LightClass, struct FVector SpawnLocation, class AActor* AttachToActor );
	void OnExplosionLightFinished ( class UUDKExplosionLight* Light );
	class UParticleSystemComponent* SpawnEmitter ( class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int MaxDLEPooledReuses, unsigned long bInheritScaleFromBase );
};

UClass* AUDKEmitterPool::pClassPointer = NULL;

// Class UDKBase.UDKExplosionLight
// 0x0028 (0x0220 - 0x01F8)
class UUDKExplosionLight : public UPointLightComponent
{
public:
	unsigned long                                      bCheckFrameRate : 1;                              		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HighDetailFrameTime;                              		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                TimeShiftIndex;                                   		// 0x0204 (0x0004) [0x0000000000000000]              
	TArray< struct FLightValues >                      TimeShift;                                        		// 0x0208 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLightFinished__Delegate;                      		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1840 ];

		return pClassPointer;
	};

	void OnLightFinished ( class UUDKExplosionLight* Light );
	void ResetLight ( );
};

UClass* UUDKExplosionLight::pClassPointer = NULL;

// Class UDKBase.UDKForcedDirectionVolume
// 0x0024 (0x0258 - 0x0234)
class AUDKForcedDirectionVolume : public APhysicsVolume
{
public:
	class UClass*                                      TypeToForce;                                      		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIgnoreHoverboards : 1;                           		// 0x0238 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDenyExit : 1;                                    		// 0x0238 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bBlockPawns : 1;                                  		// 0x0238 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlockSpectators : 1;                             		// 0x0238 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class UArrowComponent*                             Arrow;                                            		// 0x023C (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     ArrowDirection;                                   		// 0x0240 (0x000C) [0x0000000000000000]              
	TArray< class AUDKVehicle* >                       TouchingVehicles;                                 		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1841 ];

		return pClassPointer;
	};

	bool StopsProjectile ( class AProjectile* P );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventActorEnteredVolume ( class AActor* Other );
	void PostBeginPlay ( );
};

UClass* AUDKForcedDirectionVolume::pClassPointer = NULL;

// Class UDKBase.UDKGameInteraction
// 0x0004 (0x016C - 0x0168)
class UUDKGameInteraction : public UUIInteraction
{
public:
	int                                                BlockUIInputSemaphore;                            		// 0x0168 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1842 ];

		return pClassPointer;
	};

	void NotifyGameSessionEnded ( );
	void eventBlockUIInput ( unsigned long bBlock );
	void eventClearUIInputBlocks ( );
	bool ShouldProcessUIInput ( );
};

UClass* UUDKGameInteraction::pClassPointer = NULL;

// Class UDKBase.UDKGameObjective
// 0x0031 (0x02D1 - 0x02A0)
class AUDKGameObjective : public ANavigationPoint
{
public:
	TArray< class ANavigationPoint* >                  ShootSpots;                                       		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAllowOnlyShootable : 1;                          		// 0x02AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUnderAttack : 1;                                 		// 0x02AC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	struct FVector                                     HUDLocation;                                      		// 0x02B0 (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  IconHudTexture;                                   		// 0x02BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FTextureCoordinates                         IconCoords;                                       		// 0x02C0 (0x0010) [0x0000000000000000]              
	unsigned char                                      DefenderTeamIndex;                                		// 0x02D0 (0x0001) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1843 ];

		return pClassPointer;
	};

	unsigned char GetTeamNum ( );
	void DrawIcon ( class UCanvas* Canvas, struct FVector IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, struct FLinearColor DrawColor );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	void TriggerFlagEvent ( struct FName EventType, class AController* EventInstigator );
	bool BotNearObjective ( class AAIController* C );
	class AActor* eventGetBestViewTarget ( );
	void ObjectiveChanged ( );
};

UClass* AUDKGameObjective::pClassPointer = NULL;

// Class UDKBase.UDKGameSettingsCommon
// 0x0000 (0x00AC - 0x00AC)
class UUDKGameSettingsCommon : public UOnlineGameSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1844 ];

		return pClassPointer;
	};

	struct FString BlobToString ( struct FString* InBlob );
	bool StringToBlob ( struct FString* InString, struct FString* OutBlob );
};

UClass* UUDKGameSettingsCommon::pClassPointer = NULL;

// Class UDKBase.UDKGameViewportClient
// 0x000C (0x0134 - 0x0128)
class UUDKGameViewportClient : public UGameViewportClient
{
public:
	struct FString                                     HintLocFileName;                                  		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1845 ];

		return pClassPointer;
	};

	struct FString LoadRandomLocalizedHintMessage ( struct FString Category1Name, struct FString Category2Name );
};

UClass* UUDKGameViewportClient::pClassPointer = NULL;

// Class UDKBase.UDKHUD
// 0x0044 (0x0580 - 0x053C)
class AUDKHUD : public AMobileHUD
{
public:
	class UFont*                                       GlowFonts[ 0x2 ];                                 		// 0x053C (0x0008) [0x0000000000000000]              
	float                                              PulseDuration;                                    		// 0x0544 (0x0004) [0x0000000000000000]              
	float                                              PulseSplit;                                       		// 0x0548 (0x0004) [0x0000000000000000]              
	float                                              PulseMultiplier;                                  		// 0x054C (0x0004) [0x0000000000000000]              
	struct FFontRenderInfo                             TextRenderInfo;                                   		// 0x0550 (0x0028) [0x0000000000000000]              
	class UFont*                                       ConsoleIconFont;                                  		// 0x0578 (0x0004) [0x0000000000000000]              
	class UFont*                                       BindTextFont;                                     		// 0x057C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1846 ];

		return pClassPointer;
	};

	void TranslateBindToFont ( struct FString InBindStr, class UFont** DrawFont, struct FString* OutBindStr );
	void DrawGlowText ( struct FString Text, float X, float Y, float MaxHeightInPixels, float PulseTime, unsigned long bRightJustified );
};

UClass* AUDKHUD::pClassPointer = NULL;

// Class UDKBase.UDKJumpPad
// 0x0020 (0x02C0 - 0x02A0)
class AUDKJumpPad : public ANavigationPoint
{
public:
	struct FVector                                     JumpVelocity;                                     		// 0x02A0 (0x000C) [0x0000000000000000]              
	class APathNode*                                   JumpTarget;                                       		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   JumpSound;                                        		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpTime;                                         		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpAirControl;                                   		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             JumpAmbientSound;                                 		// 0x02BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1847 ];

		return pClassPointer;
	};

	bool eventSuggestMovePreparation ( class APawn* Other );
	void eventPostTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AUDKJumpPad::pClassPointer = NULL;

// Class UDKBase.UDKKActorBreakable
// 0x0038 (0x02F0 - 0x02B8)
class AUDKKActorBreakable : public AKActor
{
public:
	unsigned long                                      bHasHealth : 1;                                   		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDamageOnEncroachment : 1;                        		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bResetDOEWhenAsleep : 1;                          		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bTakeDamageOnEncroachment : 1;                    		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bBreakWhenCausingDamage : 1;                      		// 0x02B8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bBroken : 1;                                      		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                Health;                                           		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EncroachDamage_Other;                             		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EncroachDamage_Self;                              		// 0x02C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DmgTypeClass;                                     		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DOEResetThreshold;                                		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             BrokenTemplate;                                   		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 InstigatorController;                             		// 0x02D4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnBreakApart__Delegate;                         		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEncroach__Delegate;                           		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1848 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void BreakApart ( );
	bool EncroachingOn ( class AActor* Other );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool OnEncroach ( class AActor* Other );
	void OnBreakApart ( );
};

UClass* AUDKKActorBreakable::pClassPointer = NULL;

// Class UDKBase.UDKMapInfo
// 0x0004 (0x0040 - 0x003C)
class UUDKMapInfo : public UMapInfo
{
public:
	float                                              VisibilityModifier;                               		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1849 ];

		return pClassPointer;
	};

};

UClass* UUDKMapInfo::pClassPointer = NULL;

// Class UDKBase.UDKMapMusicInfo
// 0x00A0 (0x00DC - 0x003C)
class UUDKMapMusicInfo : public UObject
{
public:
	struct FMusicForAMap                               MapMusic;                                         		// 0x003C (0x0064) [0x0000000000000001]              ( CPF_Edit )
	struct FStingersForAMap                            MapStingers;                                      		// 0x00A0 (0x003C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1850 ];

		return pClassPointer;
	};

};

UClass* UUDKMapMusicInfo::pClassPointer = NULL;

// Class UDKBase.UDKParticleSystemComponent
// 0x0014 (0x0300 - 0x02EC)
class UUDKParticleSystemComponent : public UParticleSystemComponent
{
public:
	float                                              FOV;                                              		// 0x02EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bHasSavedScale3D : 1;                             		// 0x02F0 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FVector                                     SavedScale3D;                                     		// 0x02F4 (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1851 ];

		return pClassPointer;
	};

	void SetFOV ( float NewFOV );
};

UClass* UUDKParticleSystemComponent::pClassPointer = NULL;

// Class UDKBase.UDKPawn
// 0x01D0 (0x0624 - 0x0454)
class AUDKPawn : public AGamePawn
{
public:
	unsigned long                                      bReadyToDoubleJump : 1;                           		// 0x0454 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRequiresDoubleJump : 1;                          		// 0x0454 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanDoubleJump : 1;                               		// 0x0454 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNoJumpAdjust : 1;                                		// 0x0454 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsHoverboardAnimPawn : 1;                        		// 0x0454 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFeigningDeath : 1;                               		// 0x0454 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      bNotifyStopFalling : 1;                           		// 0x0454 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bIsInvisible : 1;                                 		// 0x0454 (0x0004) [0x0000000000000020] [0x00000080] ( CPF_Net )
	unsigned long                                      bSmoothNetUpdates : 1;                            		// 0x0454 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bPuttingDownWeapon : 1;                           		// 0x0454 (0x0004) [0x0000000000000020] [0x00000200] ( CPF_Net )
	unsigned long                                      bPlayingFeignDeathRecovery : 1;                   		// 0x0454 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bCanPlayFallingImpacts : 1;                       		// 0x0454 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bEnableFootPlacement : 1;                         		// 0x0454 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bPostRenderOtherTeam : 1;                         		// 0x0454 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bBlendOutTakeHitPhysics : 1;                      		// 0x0454 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bUpdateEyeheight : 1;                             		// 0x0454 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bTearOffGibs : 1;                                 		// 0x0454 (0x0004) [0x0000000000000020] [0x00010000] ( CPF_Net )
	float                                              MaxDoubleJumpHeight;                              		// 0x0458 (0x0004) [0x0000000000000000]              
	int                                                MultiJumpRemaining;                               		// 0x045C (0x0004) [0x0000000000000000]              
	int                                                MaxMultiJump;                                     		// 0x0460 (0x0004) [0x0000000000000000]              
	int                                                MultiJumpBoost;                                   		// 0x0464 (0x0004) [0x0000000000000000]              
	float                                              CustomGravityScaling;                             		// 0x0468 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FPlayEmoteInfo                              EmoteRepInfo;                                     		// 0x046C (0x0010) [0x0000000000000020]              ( CPF_Net )
	float                                              LastEmoteTime;                                    		// 0x047C (0x0004) [0x0000000000000000]              
	float                                              MinTimeBetweenEmotes;                             		// 0x0480 (0x0004) [0x0000000000000000]              
	unsigned char                                      BigTeleportCount;                                 		// 0x0484 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      WeaponOverlayFlags;                               		// 0x0485 (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct FUTTakeHitInfo                              LastTakeHitInfo;                                  		// 0x0488 (0x0028) [0x0000000000000020]              ( CPF_Net )
	float                                              LastTakeHitTimeout;                               		// 0x04B0 (0x0004) [0x0000000000000000]              
	float                                              FireRateMultiplier;                               		// 0x04B4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              HeadScale;                                        		// 0x04B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              MaxSmoothNetUpdateDist;                           		// 0x04BC (0x0004) [0x0000000000000000]              
	float                                              NoSmoothNetUpdateDist;                            		// 0x04C0 (0x0004) [0x0000000000000000]              
	float                                              SmoothNetUpdateTime;                              		// 0x04C4 (0x0004) [0x0000000000000000]              
	struct FVector                                     MeshTranslationOffset;                            		// 0x04C8 (0x000C) [0x0000000000000000]              
	float                                              OldZ;                                             		// 0x04D4 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             PawnAmbientSound;                                 		// 0x04D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   PawnAmbientSoundCue;                              		// 0x04DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FDrivenWeaponPawnInfo                       DrivenWeaponPawn;                                 		// 0x04E0 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class UAudioComponent*                             WeaponAmbientSound;                               		// 0x04EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   WeaponAmbientSoundCue;                            		// 0x04F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UMaterial*                                   ReplicatedBodyMaterial;                           		// 0x04F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class UMaterialInstanceConstant* >         BodyMaterialInstances;                            		// 0x04F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInterface*                          OverlayMaterialInstance;                          		// 0x0504 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USkelControlSingleBone*                      RootRotControl;                                   		// 0x0508 (0x0004) [0x0000000000000000]              
	class UAnimNodeAimOffset*                          AimNode;                                          		// 0x050C (0x0004) [0x0000000000000000]              
	class UGameSkelCtrl_Recoil*                        GunRecoilNode;                                    		// 0x0510 (0x0004) [0x0000000000000000]              
	class UGameSkelCtrl_Recoil*                        LeftRecoilNode;                                   		// 0x0514 (0x0004) [0x0000000000000000]              
	class UGameSkelCtrl_Recoil*                        RightRecoilNode;                                  		// 0x0518 (0x0004) [0x0000000000000000]              
	TArray< class AUDKBot* >                           Trackers;                                         		// 0x051C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BodyMatFadeDuration;                              		// 0x0528 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                CurrentBodyMatColor;                              		// 0x052C (0x0010) [0x0000000000000000]              
	float                                              RemainingBodyMatDuration;                         		// 0x053C (0x0004) [0x0000000000000000]              
	float                                              ClientBodyMatDuration;                            		// 0x0540 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FLinearColor                                BodyMatColor;                                     		// 0x0544 (0x0010) [0x0000000000000000]              
	struct FRotator                                    CompressedBodyMatColor;                           		// 0x0554 (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              StartFallImpactTime;                              		// 0x0560 (0x0004) [0x0000000000000000]              
	struct FName                                       TorsoBoneName;                                    		// 0x0564 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   FallImpactSound;                                  		// 0x056C (0x0004) [0x0000000000000000]              
	float                                              FallSpeedThreshold;                               		// 0x0570 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        BlobShadow;                                       		// 0x0574 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      OverlayMesh;                                      		// 0x0578 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       LeftFootBone;                                     		// 0x057C (0x0008) [0x0000000000000000]              
	struct FName                                       RightFootBone;                                    		// 0x0584 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftFootControlName;                              		// 0x058C (0x0008) [0x0000000000000000]              
	struct FName                                       RightFootControlName;                             		// 0x0594 (0x0008) [0x0000000000000000]              
	float                                              BaseTranslationOffset;                            		// 0x059C (0x0004) [0x0000000000000000]              
	float                                              CrouchTranslationOffset;                          		// 0x05A0 (0x0004) [0x0000000000000000]              
	float                                              OldLocationZ;                                     		// 0x05A4 (0x0004) [0x0000000000000000]              
	float                                              ZSmoothingRate;                                   		// 0x05A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxFootPlacementDistSquared;                      		// 0x05AC (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   LeftLegControl;                                   		// 0x05B0 (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   RightLegControl;                                  		// 0x05B4 (0x0004) [0x0000000000000000]              
	class USkelControlLimb*                            LeftHandIK;                                       		// 0x05B8 (0x0004) [0x0000000000000000]              
	class USkelControlLimb*                            RightHandIK;                                      		// 0x05BC (0x0004) [0x0000000000000000]              
	struct FName                                       DamageParameterName;                              		// 0x05C0 (0x0008) [0x0000000000000000]              
	struct FName                                       SaturationParameterName;                          		// 0x05C8 (0x0008) [0x0000000000000000]              
	float                                              LastPostRenderTraceTime;                          		// 0x05D0 (0x0004) [0x0000000000000000]              
	float                                              TeamBeaconMaxDist;                                		// 0x05D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartedFallingTime;                               		// 0x05D8 (0x0004) [0x0000000000000000]              
	float                                              SlopeBoostFriction;                               		// 0x05DC (0x0004) [0x0000000000000000]              
	class UAnimNodeAimOffset*                          FlyingDirOffset;                                  		// 0x05E0 (0x0004) [0x0000000000000000]              
	int                                                MaxLeanRoll;                                      		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              FeignDeathPhysicsBlendOutSpeed;                   		// 0x05E8 (0x0004) [0x0000000000000000]              
	float                                              SwimmingZOffset;                                  		// 0x05EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwimmingZOffsetSpeed;                             		// 0x05F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrouchMeshZOffset;                                		// 0x05F4 (0x0004) [0x0000000000000000]              
	float                                              TakeHitPhysicsBlendOutSpeed;                      		// 0x05F8 (0x0004) [0x0000000000000000]              
	class UUDKSkeletalMeshComponent*                   ArmsMesh[ 0x2 ];                                  		// 0x05FC (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                RootYaw;                                          		// 0x0604 (0x0004) [0x0000000000000000]              
	float                                              RootYawSpeed;                                     		// 0x0608 (0x0004) [0x0000000000000000]              
	int                                                MaxYawAim;                                        		// 0x060C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CurrentSkelAim;                                   		// 0x0610 (0x0008) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x0618 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1852 ];

		return pClassPointer;
	};

	void eventStuckFalling ( );
	void eventUpdateEyeHeight ( float DeltaTime );
	void eventTakeHitBlendedOut ( );
	void eventStartFeignDeathRecoveryAnim ( );
	void SetHandIKEnabled ( unsigned long bEnabled );
	void SetWeaponAttachmentVisibility ( unsigned long bAttachmentVisible );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	bool SuggestJumpVelocity ( struct FVector Destination, struct FVector Start, unsigned long bRequireFallLanding, struct FVector* JumpVelocity );
	void eventStartCrouch ( float HeightAdjust );
	void eventEndCrouch ( float HeightAdjust );
	void eventStoppedFalling ( );
	void eventHoldGameObject ( class AUDKCarriedObject* UDKGameObj );
	bool IsInvisible ( );
	struct FVector GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc );
	void EnsureOverlayComponentLast ( );
	void RestorePreRagdollCollisionComponent ( );
	void GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight );
};

UClass* AUDKPawn::pClassPointer = NULL;

// Class UDKBase.UDKPickupFactory
// 0x00A4 (0x0360 - 0x02BC)
class AUDKPickupFactory : public APickupFactory
{
public:
	unsigned long                                      bIsRespawning : 1;                                		// 0x02BC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bPulseBase : 1;                                   		// 0x02BC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bIsDisabled : 1;                                  		// 0x02BC (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bFloatingPickup : 1;                              		// 0x02BC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRandomStart : 1;                                 		// 0x02BC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bRotatingPickup : 1;                              		// 0x02BC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bUpdatingPickup : 1;                              		// 0x02BC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDoVisibilityFadeIn : 1;                          		// 0x02BC (0x0004) [0x0000000000000000] [0x00000080] 
	class UStaticMeshComponent*                        BaseMesh;                                         		// 0x02C0 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   BaseMaterialInstance;                             		// 0x02C4 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                BaseBrightEmissive;                               		// 0x02C8 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BaseDimEmissive;                                  		// 0x02D8 (0x0010) [0x0000000000000000]              
	float                                              BasePulseRate;                                    		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              BasePulseTime;                                    		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              PulseThreshold;                                   		// 0x02F0 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                BaseTargetEmissive;                               		// 0x02F4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                BaseEmissive;                                     		// 0x0304 (0x0010) [0x0000000000000000]              
	struct FName                                       BaseMaterialParamName;                            		// 0x0314 (0x0008) [0x0000000000000000]              
	float                                              BobTimer;                                         		// 0x031C (0x0004) [0x0000000000000000]              
	float                                              BobOffset;                                        		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              BobSpeed;                                         		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              BobBaseOffset;                                    		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              YawRotationRate;                                  		// 0x032C (0x0004) [0x0000000000000000]              
	struct FVector                                     PivotTranslation;                                 		// 0x0330 (0x000C) [0x0000000000000000]              
	struct FName                                       VisibilityParamName;                              		// 0x033C (0x0008) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_Visibility;                                   		// 0x0344 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_VisibilitySecondMaterial;                     		// 0x0348 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    Glow;                                             		// 0x034C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       GlowEmissiveParam;                                		// 0x0350 (0x0008) [0x0000000000000000]              
	class UPrimitiveComponent*                         Spinner;                                          		// 0x0358 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKParticleSystemComponent*                 SpinningParticleEffects;                          		// 0x035C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1853 ];

		return pClassPointer;
	};

	void SetPickupHidden ( );
	void SetPickupVisible ( );
};

UClass* AUDKPickupFactory::pClassPointer = NULL;

// Class UDKBase.UDKPlayerController
// 0x02E0 (0x0874 - 0x0594)
class AUDKPlayerController : public AGamePlayerController
{
public:
	class UCameraAnimInst*                             CameraAnimPlayer;                                 		// 0x0594 (0x0004) [0x0000000000000000]              
	class AUDKEmitCameraEffect*                        CameraEffect;                                     		// 0x0598 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDedicatedServerSpectator : 1;                    		// 0x059C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAcuteHearing : 1;                                		// 0x059C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bConsolePlayer : 1;                               		// 0x059C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bPulseTeamColor : 1;                              		// 0x059C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUsePhysicsRotation : 1;                          		// 0x059C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     ShakeOffset;                                      		// 0x05A0 (0x000C) [0x0000000000000000]              
	struct FRotator                                    ShakeRot;                                         		// 0x05AC (0x000C) [0x0000000000000000]              
	struct FPostProcessSettings                        CamOverridePostProcess;                           		// 0x05B8 (0x0154) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPostProcessSettings                        PostProcessModifier;                              		// 0x070C (0x0154) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            PotentiallyHiddenActors;                          		// 0x0860 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              VehicleCheckRadiusScaling;                        		// 0x086C (0x0004) [0x0000000000000000]              
	float                                              PulseTimer;                                       		// 0x0870 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1854 ];

		return pClassPointer;
	};

	class APawn* GetTargetAdhesionFrictionTarget ( float MaxDistance, struct FVector* CamLoc, struct FRotator* CamRot );
	void ClearCameraEffect ( );
	void ClientSpawnCameraEffect ( class UClass* CameraEffectClass );
	void RemoveCameraEffect ( class AUDKEmitCameraEffect* CamEmitter );
	bool IsMouseAvailable ( );
	bool IsKeyboardAvailable ( );
	void SetHardwarePhysicsEnabled ( unsigned long bEnabled );
	void SetSettingFloat ( int Index, float Value );
	void SetSettingInt ( int Index, int Value );
	void SetSettingBool ( int Index, unsigned long Value );
	struct FString GetResolutions ( );
	float GetSettingFloat ( int Index );
	int GetSettingInt ( int Index );
	bool GetSettingBool ( int Index );
	void SetGGamma ( float Gamma );
	float GetGGamma ( );
	void SetGamma ( float GammaValue );
};

UClass* AUDKPlayerController::pClassPointer = NULL;

// Class UDKBase.UDKPlayerInput
// 0x0000 (0x0498 - 0x0498)
class UUDKPlayerInput : public UMobilePlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1855 ];

		return pClassPointer;
	};

	struct FString GetUDKBindNameFromCommand ( struct FString BindCommand );
};

UClass* UUDKPlayerInput::pClassPointer = NULL;

// Class UDKBase.UDKProfileSettings
// 0x0000 (0x008C - 0x008C)
class UUDKProfileSettings : public UOnlineProfileSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1856 ];

		return pClassPointer;
	};

	void ResetKeysToDefault ( class ULocalPlayer* InPlayerOwner );
	void ResetToDefault ( int ProfileId );
};

UClass* UUDKProfileSettings::pClassPointer = NULL;

// Class UDKBase.UDKProjectile
// 0x003C (0x0240 - 0x0204)
class AUDKProjectile : public AProjectile
{
public:
	unsigned long                                      bWideCheck : 1;                                   		// 0x0204 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bShuttingDown : 1;                                		// 0x0204 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCheckProjectileLight : 1;                        		// 0x0204 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNotBlockedByShield : 1;                          		// 0x0204 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              CheckRadius;                                      		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              AccelRate;                                        		// 0x020C (0x0004) [0x0000000000000000]              
	class AActor*                                      SeekTarget;                                       		// 0x0210 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              BaseTrackingStrength;                             		// 0x0214 (0x0004) [0x0000000000000000]              
	float                                              HomingTrackingStrength;                           		// 0x0218 (0x0004) [0x0000000000000000]              
	struct FVector                                     InitialDir;                                       		// 0x021C (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              LastLockWarningTime;                              		// 0x0228 (0x0004) [0x0000000000000000]              
	float                                              LockWarningInterval;                              		// 0x022C (0x0004) [0x0000000000000000]              
	float                                              TerminalVelocity;                                 		// 0x0230 (0x0004) [0x0000000000000000]              
	float                                              Buoyancy;                                         		// 0x0234 (0x0004) [0x0000000000000000]              
	float                                              CustomGravityScaling;                             		// 0x0238 (0x0004) [0x0000000000000000]              
	class AVehicle*                                    InstigatorBaseVehicle;                            		// 0x023C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1857 ];

		return pClassPointer;
	};

	void eventCreateProjectileLight ( );
	float GetTerminalVelocity ( );
};

UClass* AUDKProjectile::pClassPointer = NULL;

// Class UDKBase.UDKScout
// 0x0014 (0x04F0 - 0x04DC)
class AUDKScout : public AScout
{
public:
	unsigned long                                      bRequiresDoubleJump : 1;                          		// 0x04DC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDoubleJumpHeight;                              		// 0x04E0 (0x0004) [0x0000000000000000]              
	class UClass*                                      PrototypePawnClass;                               		// 0x04E4 (0x0004) [0x0000000000000000]              
	struct FName                                       SizePersonFindName;                               		// 0x04E8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1858 ];

		return pClassPointer;
	};

	bool SuggestJumpVelocity ( struct FVector Destination, struct FVector Start, unsigned long bRequireFallLanding, struct FVector* JumpVelocity );
};

UClass* AUDKScout::pClassPointer = NULL;

// Class UDKBase.UDKScriptedNavigationPoint
// 0x0004 (0x02A4 - 0x02A0)
class AUDKScriptedNavigationPoint : public ANavigationPoint
{
public:
	unsigned long                                      bScriptSpecifyEndAnchor : 1;                      		// 0x02A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScriptNotifyAnchorFindingResult : 1;             		// 0x02A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAnchorMustBeReachable : 1;                       		// 0x02A0 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1859 ];

		return pClassPointer;
	};

	void eventNotifyAnchorFindingResult ( class ANavigationPoint* EndAnchor, class APawn* RouteFinder );
	class ANavigationPoint* eventSpecifyEndAnchor ( class APawn* RouteFinder );
};

UClass* AUDKScriptedNavigationPoint::pClassPointer = NULL;

// Class UDKBase.UDKSkeletalMeshComponent
// 0x000F (0x0604 - 0x05F5)
class UUDKSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              FOV;                                              		// 0x05F8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bForceLoadTextures : 1;                           		// 0x05FC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ClearStreamingTime;                               		// 0x0600 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1860 ];

		return pClassPointer;
	};

	void SetFOV ( float NewFOV );
	void eventPreloadTextures ( unsigned long bForcePreload, float ClearTime );
};

UClass* UUDKSkeletalMeshComponent::pClassPointer = NULL;

// Class UDKBase.UDKTeamOwnedInfo
// 0x0004 (0x01CC - 0x01C8)
class AUDKTeamOwnedInfo : public AReplicationInfo
{
public:
	class ATeamInfo*                                   Team;                                             		// 0x01C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1861 ];

		return pClassPointer;
	};

	unsigned char GetTeamNum ( );
};

UClass* AUDKTeamOwnedInfo::pClassPointer = NULL;

// Class UDKBase.UDKSquadAI
// 0x0038 (0x0204 - 0x01CC)
class AUDKSquadAI : public AUDKTeamOwnedInfo
{
public:
	class AUDKGameObjective*                           SquadObjective;                                   		// 0x01CC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ANavigationPoint*                            RouteObjective;                                   		// 0x01D0 (0x0004) [0x0000000000000000]              
	TArray< class ANavigationPoint* >                  ObjectiveRouteCache;                              		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ANavigationPoint* >                  PreviousObjectiveRouteCache;                      		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AUDKBot*                                     PendingSquadRouteMaker;                           		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                SquadRouteIteration;                              		// 0x01F0 (0x0004) [0x0000000000000000]              
	TArray< struct FAlternateRoute >                   SquadRoutes;                                      		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxSquadRoutes;                                   		// 0x0200 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1862 ];

		return pClassPointer;
	};

};

UClass* AUDKSquadAI::pClassPointer = NULL;

// Class UDKBase.UDKTeamPlayerStart
// 0x0010 (0x02C0 - 0x02B0)
class AUDKTeamPlayerStart : public APlayerStart
{
public:
	unsigned char                                      TeamNumber;                                       		// 0x02B0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UTexture2D* >                        TeamSprites;                                      		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1863 ];

		return pClassPointer;
	};

};

UClass* AUDKTeamPlayerStart::pClassPointer = NULL;

// Class UDKBase.UDKTeleporterBase
// 0x0028 (0x02F0 - 0x02C8)
class AUDKTeleporterBase : public ATeleporter
{
public:
	class USceneCaptureComponent*                      PortalCaptureComponent;                           		// 0x02C8 (0x0004) [0x00000000040A0009]              ( CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UTextureRenderTarget2D*                      TextureTarget;                                    		// 0x02CC (0x0004) [0x0000000000000000]              
	int                                                TextureResolutionX;                               		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextureResolutionY;                               		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      PortalViewTarget;                                 		// 0x02D8 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          PortalMaterial;                                   		// 0x02DC (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   PortalMaterialInstance;                           		// 0x02E0 (0x0004) [0x0000000000000000]              
	struct FName                                       PortalTextureParameter;                           		// 0x02E4 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   TeleportingSound;                                 		// 0x02EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1864 ];

		return pClassPointer;
	};

	bool eventAccept ( class AActor* Incoming, class AActor* Source );
	void InitializePortalEffect ( class AActor* Dest );
	void eventPostBeginPlay ( );
};

UClass* AUDKTeleporterBase::pClassPointer = NULL;

// Class UDKBase.UDKTrajectoryReachSpec
// 0x0000 (0x0090 - 0x0090)
class UUDKTrajectoryReachSpec : public UAdvancedReachSpec
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1865 ];

		return pClassPointer;
	};

};

UClass* UUDKTrajectoryReachSpec::pClassPointer = NULL;

// Class UDKBase.UDKJumpPadReachSpec
// 0x0000 (0x0090 - 0x0090)
class UUDKJumpPadReachSpec : public UUDKTrajectoryReachSpec
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1866 ];

		return pClassPointer;
	};

};

UClass* UUDKJumpPadReachSpec::pClassPointer = NULL;

// Class UDKBase.UDKUIDataProvider_SearchResult
// 0x002C (0x0094 - 0x0068)
class UUDKUIDataProvider_SearchResult : public UUIDataProvider_Settings
{
public:
	struct FName                                       PlayerRatioTag;                                   		// 0x0068 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       GameModeFriendlyNameTag;                          		// 0x0070 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       ServerFlagsTag;                                   		// 0x0078 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FName                                       MapNameTag;                                       		// 0x0080 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     IconFontPathName;                                 		// 0x0088 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1867 ];

		return pClassPointer;
	};

	bool IsPrivateServer ( );
};

UClass* UUDKUIDataProvider_SearchResult::pClassPointer = NULL;

// Class UDKBase.UDKUIDataProvider_SimpleElementProvider
// 0x0000 (0x0048 - 0x0048)
class UUDKUIDataProvider_SimpleElementProvider : public UUIDataProvider
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1868 ];

		return pClassPointer;
	};

};

UClass* UUDKUIDataProvider_SimpleElementProvider::pClassPointer = NULL;

// Class UDKBase.UDKUIDataProvider_ServerDetails
// 0x0004 (0x004C - 0x0048)
class UUDKUIDataProvider_ServerDetails : public UUDKUIDataProvider_SimpleElementProvider
{
public:
	int                                                SearchResultsRow;                                 		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1869 ];

		return pClassPointer;
	};

};

UClass* UUDKUIDataProvider_ServerDetails::pClassPointer = NULL;

// Class UDKBase.UDKUIDataProvider_StringArray
// 0x000C (0x0054 - 0x0048)
class UUDKUIDataProvider_StringArray : public UUDKUIDataProvider_SimpleElementProvider
{
public:
	TArray< struct FString >                           Strings;                                          		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1870 ];

		return pClassPointer;
	};

};

UClass* UUDKUIDataProvider_StringArray::pClassPointer = NULL;

// Class UDKBase.UDKUIDataStore_MenuItems
// 0x0028 (0x00D8 - 0x00B0)
class UUDKUIDataStore_MenuItems : public UUIDataStore_GameResource
{
public:
	class UClass*                                      MapInfoDataProviderClass;                         		// 0x00B0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      EnabledMutators;                                  		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MapCycle;                                         		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      WeaponPriority;                                   		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1871 ];

		return pClassPointer;
	};

	void AddListElementProvidersKey ( struct FName KeyName, class UUDKUIResourceDataProvider* Provider );
	void RemoveListElementProvidersKey ( struct FName KeyName );
	void eventInitializeListElementProviders ( );
	bool GetProviderSet ( struct FName ProviderFieldName, TArray< class UUDKUIResourceDataProvider* >* OutProviders );
	void GetAllResourceDataProviders ( class UClass* ProviderClass, TArray< class UUDKUIResourceDataProvider* >* Providers );
};

UClass* UUDKUIDataStore_MenuItems::pClassPointer = NULL;

// Class UDKBase.UDKUIDataStore_Options
// 0x0048 (0x00F8 - 0x00B0)
class UUDKUIDataStore_Options : public UUIDataStore_GameResource
{
public:
	struct FMultiMap_Mirror                            OptionProviders;                                  		// 0x00B0 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< class UUDKUIResourceDataProvider* >        DynamicProviders;                                 		// 0x00EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1872 ];

		return pClassPointer;
	};

};

UClass* UUDKUIDataStore_Options::pClassPointer = NULL;

// Class UDKBase.UDKUIDataStore_StringAliasBindingMap
// 0x004C (0x0100 - 0x00B4)
class UUDKUIDataStore_StringAliasBindingMap : public UUIDataStore_StringAliasMap
{
public:
	int                                                FakePlatform;                                     		// 0x00B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FMap_Mirror                                 CommandToBindNames;                               		// 0x00B8 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FControllerMap >                    ControllerMapArray;                               		// 0x00F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1873 ];

		return pClassPointer;
	};

	void ClearBoundKeyCache ( );
	void AddMappingToBoundKeyCache ( struct FString Command, struct FString MappingStr, int FieldIndex );
	bool FindMappingInBoundKeyCache ( struct FString Command, struct FString* MappingStr, int* FieldIndex );
	int GetBoundStringWithFieldName ( struct FString FieldName, struct FString* MappedString, int* StartIndex, struct FString* BindString );
	int GetStringWithFieldName ( struct FString FieldName, struct FString* MappedString );
};

UClass* UUDKUIDataStore_StringAliasBindingMap::pClassPointer = NULL;

// Class UDKBase.UDKUIDataStore_StringAliasMap
// 0x0004 (0x00B8 - 0x00B4)
class UUDKUIDataStore_StringAliasMap : public UUIDataStore_StringAliasMap
{
public:
	int                                                FakePlatform;                                     		// 0x00B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1874 ];

		return pClassPointer;
	};

	int GetStringWithFieldName ( struct FString FieldName, struct FString* MappedString );
};

UClass* UUDKUIDataStore_StringAliasMap::pClassPointer = NULL;

// Class UDKBase.UDKUIDataStore_StringList
// 0x000C (0x0074 - 0x0068)
class UUDKUIDataStore_StringList : public UUIDataStore_StringBase
{
public:
	TArray< struct FEStringListData >                  StringData;                                       		// 0x0068 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1875 ];

		return pClassPointer;
	};

	int eventNum ( struct FName FieldName );
	int eventSetCurrentValueIndex ( struct FName FieldName, int NewValueIndex );
	int eventGetCurrentValueIndex ( struct FName FieldName );
	bool eventGetCurrentValue ( struct FName FieldName, struct FString* out_Value );
	struct FString GetStr ( struct FName FieldName, int StrIndex );
	int FindStr ( struct FName FieldName, struct FString SearchString );
	void Empty ( struct FName FieldName, unsigned long bBatchOp );
	void RemoveStrByIndex ( struct FName FieldName, int Index, int Count, unsigned long bBatchOp );
	void RemoveStr ( struct FName FieldName, struct FString StringToRemove, unsigned long bBatchOp );
	int GetFieldIndex ( struct FName FieldName );
	void eventRegistered ( class ULocalPlayer* PlayerOwner );
};

UClass* UUDKUIDataStore_StringList::pClassPointer = NULL;

// Class UDKBase.UDKUIResourceDataProvider
// 0x001C (0x0080 - 0x0064)
class UUDKUIResourceDataProvider : public UUIResourceDataProvider
{
public:
	struct FString                                     FriendlyName;                                     		// 0x0064 (0x000C) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bSearchAllInis : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bRemoveOn360 : 1;                                 		// 0x0070 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bRemoveOnPC : 1;                                  		// 0x0070 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bRemoveOnPS3 : 1;                                 		// 0x0070 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	struct FString                                     IniName;                                          		// 0x0074 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1876 ];

		return pClassPointer;
	};

	bool eventShouldBeFiltered ( );
};

UClass* UUDKUIResourceDataProvider::pClassPointer = NULL;

// Class UDKBase.UDKUIDataProvider_MapInfo
// 0x0034 (0x00B4 - 0x0080)
class UUDKUIDataProvider_MapInfo : public UUDKUIResourceDataProvider
{
public:
	int                                                MapId;                                            		// 0x0080 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     MapName;                                          		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     NumPlayers;                                       		// 0x0090 (0x000C) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x009C (0x000C) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreviewImageMarkup;                               		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1877 ];

		return pClassPointer;
	};

};

UClass* UUDKUIDataProvider_MapInfo::pClassPointer = NULL;

// Class UDKBase.UDKUIDataProvider_MenuOption
// 0x0058 (0x00D8 - 0x0080)
class UUDKUIDataProvider_MenuOption : public UUDKUIResourceDataProvider
{
public:
	unsigned char                                      OptionType;                                       		// 0x0080 (0x0001) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FName >                             OptionSet;                                        		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DataStoreMarkup;                                  		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       RequiredGameMode;                                 		// 0x009C (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     CustomFriendlyName;                               		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x00B0 (0x000C) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      bEditableCombo : 1;                               		// 0x00BC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bNumericCombo : 1;                                		// 0x00BC (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bKeyboardOrMouseOption : 1;                       		// 0x00BC (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bOnlineOnly : 1;                                  		// 0x00BC (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bOfflineOnly : 1;                                 		// 0x00BC (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	int                                                EditBoxMaxLength;                                 		// 0x00C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FUIRangeData                                RangeData;                                        		// 0x00C4 (0x0014) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1878 ];

		return pClassPointer;
	};

};

UClass* UUDKUIDataProvider_MenuOption::pClassPointer = NULL;

// Class UDKBase.UDKVehicleBase
// 0x0004 (0x05EC - 0x05E8)
class AUDKVehicleBase : public ASVehicle
{
public:
	unsigned long                                      bShouldEject : 1;                                 		// 0x05E8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1879 ];

		return pClassPointer;
	};

	void HandleDeadVehicleDriver ( );
	void DriverLeft ( );
	void StopFiringWeapon ( );
	bool BotFire ( unsigned long bFinished );
	unsigned char ChooseFireMode ( );
	void DetachDriver ( class APawn* P );
	void EjectDriver ( );
	struct FName GetVehicleDrivingStatName ( );
	void ApplyWeaponEffects ( int OverlayFlags, int SeatIndex );
	bool DriverEnter ( class APawn* P );
	void DrivingStatusChanged ( );
	bool NeedToTurn ( struct FVector targ );
	float GetDamageScaling ( );
	void ServerChangeSeat ( int RequestedSeat );
	void ServerAdjacentSeat ( int Direction, class AController* C );
	void AdjacentSeat ( int Direction, class AController* C );
	void SwitchWeapon ( unsigned char NewGroup );
	void eventHoldGameObject ( class AUDKCarriedObject* GameObj );
};

UClass* AUDKVehicleBase::pClassPointer = NULL;

// Class UDKBase.UDKVehicle
// 0x01A8 (0x0794 - 0x05EC)
class AUDKVehicle : public AUDKVehicleBase
{
public:
	unsigned long                                      bEjectKilledBodies : 1;                           		// 0x05EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHomingTarget : 1;                                		// 0x05EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFrontalCollision : 1;                            		// 0x05EC (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bFrontalCollisionWithFixed : 1;                   		// 0x05EC (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bNoZDampingInAir : 1;                             		// 0x05EC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNoZDamping : 1;                                  		// 0x05EC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bIsDisabled : 1;                                  		// 0x05EC (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bIsBurning : 1;                                   		// 0x05EC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bEjectPassengersWhenFlipped : 1;                  		// 0x05EC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsScraping : 1;                                  		// 0x05EC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bTakeWaterDamageWhileDriving : 1;                 		// 0x05EC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bIsInDestroyablePenetration : 1;                  		// 0x05EC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDeadVehicle : 1;                                 		// 0x05EC (0x0004) [0x0000000000000020] [0x00001000] ( CPF_Net )
	unsigned long                                      bJostleWhileDriving : 1;                          		// 0x05EC (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bFloatWhenDriven : 1;                             		// 0x05EC (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bAllowedExit : 1;                                 		// 0x05EC (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bUseAlternatePaths : 1;                           		// 0x05EC (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bShowLocked : 1;                                  		// 0x05EC (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bTeamLocked : 1;                                  		// 0x05EC (0x0004) [0x0000000000000020] [0x00040000] ( CPF_Net )
	unsigned long                                      bDisableRepulsorsAtMaxFallSpeed : 1;              		// 0x05EC (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bTrickJumping : 1;                                		// 0x05EC (0x0004) [0x0000000000000020] [0x00100000] ( CPF_Net )
	unsigned long                                      bGrab1 : 1;                                       		// 0x05EC (0x0004) [0x0000000000000020] [0x00200000] ( CPF_Net )
	unsigned long                                      bGrab2 : 1;                                       		// 0x05EC (0x0004) [0x0000000000000020] [0x00400000] ( CPF_Net )
	unsigned long                                      bForceSpinWarmup : 1;                             		// 0x05EC (0x0004) [0x0000000000000020] [0x00800000] ( CPF_Net )
	float                                              RemainingBurn;                                    		// 0x05F0 (0x0004) [0x0000000000000000]              
	TArray< struct FBurnOutDatum >                     BurnOutMaterialInstances;                         		// 0x05F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAudioComponent*                             TireAudioComp;                                    		// 0x0600 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	TArray< struct FMaterialSoundEffect >              TireSoundList;                                    		// 0x0604 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       CurrentTireMaterial;                              		// 0x0610 (0x0008) [0x0000000000000000]              
	float                                              MaxWheelEffectDistSq;                             		// 0x0618 (0x0004) [0x0000000000000000]              
	TArray< struct FMaterialParticleEffect >           WheelParticleEffects;                             		// 0x061C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastCheckUpsideDownTime;                          		// 0x0628 (0x0004) [0x0000000000000000]              
	float                                              FlippedCount;                                     		// 0x062C (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             ScrapeSound;                                      		// 0x0630 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              FireDamageThreshold;                              		// 0x0634 (0x0004) [0x0000000000000000]              
	float                                              FireDamagePerSec;                                 		// 0x0638 (0x0004) [0x0000000000000000]              
	float                                              AccruedFireDamage;                                		// 0x063C (0x0004) [0x0000000000000000]              
	float                                              UpsideDownDamagePerSec;                           		// 0x0640 (0x0004) [0x0000000000000000]              
	float                                              OccupiedUpsideDownDamagePerSec;                   		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              WaterDamage;                                      		// 0x0648 (0x0004) [0x0000000000000000]              
	float                                              AccumulatedWaterDamage;                           		// 0x064C (0x0004) [0x0000000000000000]              
	TArray< int >                                      GroundEffectIndices;                              		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxGroundEffectDist;                              		// 0x065C (0x0004) [0x0000000000000000]              
	struct FName                                       GroundEffectDistParameterName;                    		// 0x0660 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             WaterGroundEffect;                                		// 0x0668 (0x0004) [0x0000000000000000]              
	struct FRotator                                    WeaponRotation;                                   		// 0x066C (0x000C) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FVehicleSeat >                      Seats;                                            		// 0x0678 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	int                                                SeatMask;                                         		// 0x0684 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FVehicleAnim >                      VehicleAnims;                                     		// 0x0688 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVehicleSound >                     VehicleSounds;                                    		// 0x0694 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FName                                       DrivingAnim;                                      		// 0x06A0 (0x0008) [0x0000000000000000]              
	float                                              DestroyOnPenetrationThreshold;                    		// 0x06A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DestroyOnPenetrationDuration;                     		// 0x06AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeInDestroyablePenetration;                     		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              LastDeathImpactTime;                              		// 0x06B4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LargeChunkImpactSound;                            		// 0x06B8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   MediumChunkImpactSound;                           		// 0x06BC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SmallChunkImpactSound;                            		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              CustomGravityScaling;                             		// 0x06C4 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	TArray< struct FDamageParamScales >                DamageParamScaleLevels;                           		// 0x06C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUDKSkelControl_Damage* >            DamageSkelControls;                               		// 0x06D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFDamageMorphTargets >              DamageMorphTargets;                               		// 0x06E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstanceConstant*                   DamageMaterialInstance[ 0x2 ];                    		// 0x06EC (0x0008) [0x0000000000000000]              
	struct FUTTakeHitInfo                              LastTakeHitInfo;                                  		// 0x06F4 (0x0028) [0x0000000000000020]              ( CPF_Net )
	float                                              LastTakeHitTimeout;                               		// 0x071C (0x0004) [0x0000000000000000]              
	TArray< struct FVehicleEffect >                    VehicleEffects;                                   		// 0x0720 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class AController*                                 KillerController;                                 		// 0x072C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastJumpOutCheck;                                 		// 0x0730 (0x0004) [0x0000000000000000]              
	struct FName                                       WaterEffectType;                                  		// 0x0734 (0x0008) [0x0000000000000000]              
	TArray< int >                                      ContrailEffectIndices;                            		// 0x073C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ContrailColorParameterName;                       		// 0x0748 (0x0008) [0x0000000000000000]              
	float                                              ObjectiveGetOutDist;                              		// 0x0750 (0x0004) [0x0000000000000000]              
	TArray< class AUDKBot* >                           Trackers;                                         		// 0x0754 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Team;                                             		// 0x0760 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              ExtraReachDownThreshold;                          		// 0x0764 (0x0004) [0x0000000000000000]              
	float                                              ResetTime;                                        		// 0x0768 (0x0004) [0x0000000000000000]              
	float                                              MinRunOverSpeed;                                  		// 0x076C (0x0004) [0x0000000000000000]              
	float                                              LastRunOverWarningTime;                           		// 0x0770 (0x0004) [0x0000000000000000]              
	float                                              MinRunOverWarningAim;                             		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              TeamBeaconMaxDist;                                		// 0x0778 (0x0004) [0x0000000000000000]              
	float                                              LastPostRenderTraceTime;                          		// 0x077C (0x0004) [0x0000000000000000]              
	float                                              ShowLockedMaxDist;                                		// 0x0780 (0x0004) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x0784 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    HoverboardDust;                                   		// 0x0790 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1880 ];

		return pClassPointer;
	};

	void eventUpdateHoverboardDustEffect ( float DustHeight );
	void eventPostInitRigidBody ( class UPrimitiveComponent* PrimComp );
	void eventTakeFireDamage ( );
	void eventCheckReset ( );
	void eventTakeWaterDamage ( );
	void eventRBPenetrationDestroy ( );
	void eventMorphTargetDestroyed ( int MorphNodeIndex );
	void ApplyMorphDamage ( struct FVector HitLocation, int Damage, struct FVector Momentum );
	void UpdateDamageMaterial ( );
	void InitDamageSkel ( );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	bool InUseableRange ( class AUDKPlayerController* PC, float Dist );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	unsigned char GetTeamNum ( );
	void eventSelfDestruct ( class AActor* ImpactedActor );
	bool CheckAutoDestruct ( class ATeamInfo* InstigatorTeam, float CheckRadius );
	float GetMaxRiseForce ( );
	void eventJumpOutCheck ( );
	void eventReceivedHealthChange ( );
	void eventPlayTakeHitEffects ( );
	bool OnTouchForcedDirVolume ( class AUDKForcedDirectionVolume* Vol );
	float GetGravityZ ( );
	void eventOnPropertyChange ( struct FName PropName );
	void eventLockOnWarning ( class AUDKProjectile* IncomingMissile );
	class UClass* GetRanOverDamageType ( );
	bool IsSeatControllerReplicationViewer ( int SeatIndex );
	int GetBarrelIndex ( int SeatIndex );
	struct FVector GetSeatPivotPoint ( int SeatIndex );
	void ForceWeaponRotation ( int SeatIndex, struct FRotator NewRotation );
	unsigned char SeatFiringMode ( int SeatIndex, unsigned char NewFireMode, unsigned long bReadValue );
	unsigned char SeatFlashCount ( int SeatIndex, unsigned char NewCount, unsigned long bReadValue );
	struct FVector SeatFlashLocation ( int SeatIndex, struct FVector NewLoc, unsigned long bReadValue );
	struct FRotator SeatWeaponRotation ( int SeatIndex, struct FRotator NewRot, unsigned long bReadValue );
};

UClass* AUDKVehicle::pClassPointer = NULL;

// Class UDKBase.UDKWeaponPawn
// 0x000C (0x05F8 - 0x05EC)
class AUDKWeaponPawn : public AUDKVehicleBase
{
public:
	class AUDKVehicle*                                 MyVehicle;                                        		// 0x05EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUDKWeapon*                                  MyVehicleWeapon;                                  		// 0x05F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MySeatIndex;                                      		// 0x05F4 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1881 ];

		return pClassPointer;
	};

	struct FVector GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc );
};

UClass* AUDKWeaponPawn::pClassPointer = NULL;

// Class UDKBase.UDKVehicleFactory
// 0x002C (0x02CC - 0x02A0)
class AUDKVehicleFactory : public ANavigationPoint
{
public:
	struct FString                                     VehicleClassPath;                                 		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasLockedVehicle : 1;                            		// 0x02AC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bReplicateChildVehicle : 1;                       		// 0x02AC (0x0004) [0x0000000000000000] [0x00000002] 
	class UClass*                                      VehicleClass;                                     		// 0x02B0 (0x0004) [0x0000000000000000]              
	class AUDKVehicle*                                 ChildVehicle;                                     		// 0x02B4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              RespawnProgress;                                  		// 0x02B8 (0x0004) [0x0000000000000000]              
	struct FVector                                     HUDLocation;                                      		// 0x02BC (0x000C) [0x0000000000000000]              
	int                                                TeamNum;                                          		// 0x02C8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1882 ];

		return pClassPointer;
	};

	unsigned char GetTeamNum ( );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	void eventSpawnVehicle ( );
};

UClass* AUDKVehicleFactory::pClassPointer = NULL;

// Class UDKBase.UDKVehicleMovementEffect
// 0x001C (0x01E4 - 0x01C8)
class AUDKVehicleMovementEffect : public AActor
{
public:
	class UStaticMeshComponent*                        AirEffect;                                        		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MinVelocityForAirEffect;                          		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              MaxVelocityForAirEffect;                          		// 0x01D0 (0x0004) [0x0000000000000000]              
	struct FName                                       AirEffectScalar;                                  		// 0x01D4 (0x0008) [0x0000000000000000]              
	float                                              AirMaxDelta;                                      		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              AirCurrentLevel;                                  		// 0x01E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1883 ];

		return pClassPointer;
	};

};

UClass* AUDKVehicleMovementEffect::pClassPointer = NULL;

// Class UDKBase.UDKVehicleSimCar
// 0x0078 (0x013C - 0x00C4)
class UUDKVehicleSimCar : public USVehicleSimCar
{
public:
	struct FInterpCurveFloat                           TorqueVSpeedCurve;                                		// 0x00C4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           EngineRPMCurve;                                   		// 0x00D4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LSDFactor;                                        		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrottleSpeed;                                    		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRPM;                                           		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              MaxRPM;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              ActualThrottle;                                   		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceThrottle : 1;                               		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasForcedThrottle : 1;                           		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDriverlessBraking : 1;                           		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAutoHandbrake : 1;                               		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              SteeringReductionFactor;                          		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SteeringReductionRampUpRate;                      		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentSteeringReduction;                         		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                NumWheelsForFullSteering;                         		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SteeringReductionSpeed;                           		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SteeringReductionMinSpeed;                        		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinHardTurnSpeed;                                 		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HardTurnMotorTorque;                              		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HandbrakeSpeed;                                   		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActualHandbrake;                                  		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              FrontalCollisionGripFactor;                       		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConsoleHardTurnGripFactor;                        		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedBasedTurnDamping;                            		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AirControlTurnTorque;                             		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InAirUprightTorqueFactor;                         		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InAirUprightMaxTorque;                            		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1884 ];

		return pClassPointer;
	};

};

UClass* UUDKVehicleSimCar::pClassPointer = NULL;

// Class UDKBase.UDKVehicleSimChopper
// 0x00A4 (0x0134 - 0x0090)
class UUDKVehicleSimChopper : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                   		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxReverseForce;                                  		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LongDamping;                                      		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxStrafeForce;                                   		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LatDamping;                                       		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DirectionChangeForce;                             		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRiseForce;                                     		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpDamping;                                        		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnTorqueFactor;                                 		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnTorqueMax;                                    		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnDamping;                                      		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxYawRate;                                       		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchTorqueFactor;                                		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchTorqueMax;                                   		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchDamping;                                     		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollTorqueTurnFactor;                             		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollTorqueStrafeFactor;                           		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollTorqueMax;                                    		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollDamping;                                      		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StopThreshold;                                    		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRandForce;                                     		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandForceInterval;                                		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowZThrust : 1;                                		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFullThrustOnDirectionChange : 1;                 		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldCutThrustMaxOnImpact : 1;                  		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bRecentlyHit : 1;                                 		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bStrafeAffectsTurnDamping : 1;                    		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHeadingInitialized : 1;                          		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bStabilizeStops : 1;                              		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              StrafeTurnDamping;                                		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              TargetHeading;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              TargetPitch;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              PitchViewCorrelation;                             		// 0x00F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     RandForce;                                        		// 0x00FC (0x000C) [0x0000000000000000]              
	struct FVector                                     RandTorque;                                       		// 0x0108 (0x000C) [0x0000000000000000]              
	float                                              AccumulatedTime;                                  		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              StabilizationForceMultiplier;                     		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentStabilizationMultiplier;                   		// 0x011C (0x0004) [0x0000000000000000]              
	struct FVector                                     OldVelocity;                                      		// 0x0120 (0x000C) [0x0000000000000000]              
	float                                              StoppedBrakeTorque;                               		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              HardLimitAirSpeedScale;                           		// 0x0130 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1885 ];

		return pClassPointer;
	};

};

UClass* UUDKVehicleSimChopper::pClassPointer = NULL;

// Class UDKBase.UDKVehicleSimHover
// 0x0004 (0x0138 - 0x0134)
class UUDKVehicleSimHover : public UUDKVehicleSimChopper
{
public:
	unsigned long                                      bDisableWheelsWhenOff : 1;                        		// 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRepulsorCollisionEnabled : 1;                    		// 0x0134 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanClimbSlopes : 1;                              		// 0x0134 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUnPoweredDriving : 1;                            		// 0x0134 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1886 ];

		return pClassPointer;
	};

};

UClass* UUDKVehicleSimHover::pClassPointer = NULL;

// Class UDKBase.UDKVehicleSimHoverboard
// 0x007C (0x010C - 0x0090)
class UUDKVehicleSimHoverboard : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                   		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxReverseForce;                                  		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxReverseVelocity;                               		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LongDamping;                                      		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxStrafeForce;                                   		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LatDamping;                                       		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRiseForce;                                     		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnTorqueFactor;                                 		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpinTurnTorqueScale;                              		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTurnTorque;                                    		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           TurnDampingSpeedFunc;                             		// 0x00B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bIsOverDeepWater : 1;                             		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInAJump : 1;                                     		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLeftGround : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              StopThreshold;                                    		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WaterCheckLevel;                                  		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   OverWaterSound;                                   		// 0x00D4 (0x0004) [0x0000000000000000]              
	struct FVector                                     GroundNormal;                                     		// 0x00D8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              TakeoffYaw;                                       		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              TrickJumpWarmup;                                  		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              SpinHeadingOffset;                                		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              AutoSpin;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              SpinSpeed;                                        		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LandedCountdown;                                  		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              CurrentSteerOffset;                               		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              HoverboardSlalomMaxAngle;                         		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlalomSpeed;                                      		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentLookYaw;                                   		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1887 ];

		return pClassPointer;
	};

	void UpdateLeanConstraint ( class URB_ConstraintInstance* LeanUprightConstraintInstance, struct FVector LeanY, struct FVector LeanZ );
	void InitWheels ( class AUDKVehicle* Vehicle );
};

UClass* UUDKVehicleSimHoverboard::pClassPointer = NULL;

// Class UDKBase.UDKVehicleWheel
// 0x000C (0x0120 - 0x0114)
class UUDKVehicleWheel : public USVehicleWheel
{
public:
	unsigned long                                      bUseMaterialSpecificEffects : 1;                  		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableWheelOnDeath : 1;                         		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystemComponent*                    OldWheelParticleComp;                             		// 0x0118 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EffectDesiredSpinDir;                             		// 0x011C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1888 ];

		return pClassPointer;
	};

	void OldEffectFinished ( class UParticleSystemComponent* PSystem );
	void eventSetParticleEffect ( class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate );
};

UClass* UUDKVehicleWheel::pClassPointer = NULL;

// Class UDKBase.UDKWeapon
// 0x0020 (0x02D8 - 0x02B8)
class AUDKWeapon : public AWeapon
{
public:
	class UMeshComponent*                              OverlayMesh;                                      		// 0x02B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bLeadTarget : 1;                                  		// 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bConsiderProjectileAcceleration : 1;              		// 0x02BC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                AmmoCount;                                        		// 0x02C0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      HitEnemy;                                         		// 0x02C4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              AimTraceRange;                                    		// 0x02C8 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            AimingTraceIgnoredActors;                         		// 0x02CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1889 ];

		return pClassPointer;
	};

	void eventSetPosition ( class AUDKPawn* Holder );
	void EnsureWeaponOverlayComponentLast ( );
	unsigned char BestMode ( );
	bool eventIsAimCorrect ( );
	void PostBeginPlay ( );
};

UClass* AUDKWeapon::pClassPointer = NULL;

// Class UDKBase.UDKWeaponShield
// 0x0004 (0x01CC - 0x01C8)
class AUDKWeaponShield : public AActor
{
public:
	unsigned long                                      bIgnoreFlaggedProjectiles : 1;                    		// 0x01C8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1890 ];

		return pClassPointer;
	};

};

UClass* AUDKWeaponShield::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendBase
// 0x0014 (0x0128 - 0x0114)
class UUDKAnimBlendBase : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                        		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    ChildBlendTimes;                                  		// 0x0118 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bTickAnimInScript : 1;                            		// 0x0124 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1891 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
	float GetAnimDuration ( int ChildIndex );
	float GetBlendTime ( int ChildIndex, unsigned long bGetDefault );
};

UClass* UUDKAnimBlendBase::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByFall
// 0x001C (0x0144 - 0x0128)
class UUDKAnimBlendByFall : public UUDKAnimBlendBase
{
public:
	unsigned long                                      bIgnoreDoubleJumps : 1;                           		// 0x0128 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDidDoubleJump : 1;                               		// 0x0128 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDodgeFall : 1;                                   		// 0x0128 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              PreLandTime;                                      		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PreLandStartUprightTime;                          		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ToDblJumpUprightTime;                             		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      FallState;                                        		// 0x0138 (0x0001) [0x0000000000000002]              ( CPF_Const )
	float                                              LastFallingVelocity;                              		// 0x013C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UUDKAnimNodeJumpLeanOffset*                  CachedLeanNode;                                   		// 0x0140 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1892 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByFall::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByHoverJump
// 0x0008 (0x014C - 0x0144)
class UUDKAnimBlendByHoverJump : public UUDKAnimBlendByFall
{
public:
	class APawn*                                       OwnerP;                                           		// 0x0144 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class AUDKVehicle*                                 OwnerHV;                                          		// 0x0148 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1893 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByHoverJump::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByFlying
// 0x0024 (0x014C - 0x0128)
class UUDKAnimBlendByFlying : public UUDKAnimBlendBase
{
public:
	unsigned char                                      FlyingState;                                      		// 0x0128 (0x0001) [0x0000000000000002]              ( CPF_Const )
	class AUDKPawn*                                    Pawn;                                             		// 0x012C (0x0004) [0x0000000000000000]              
	class UUDKAnimBlendBase*                           FlyingMode;                                       		// 0x0130 (0x0004) [0x0000000000000000]              
	class UAnimNodeAimOffset*                          FlyingDir;                                        		// 0x0134 (0x0004) [0x0000000000000000]              
	struct FName                                       StartingAnimName;                                 		// 0x0138 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHasStartingAnim : 1;                             		// 0x0140 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasEndingAnim : 1;                               		// 0x0140 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       EndingAnimName;                                   		// 0x0144 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1894 ];

		return pClassPointer;
	};

	void UpdateFlyingState ( );
};

UClass* UUDKAnimBlendByFlying::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByHoverboarding
// 0x000C (0x0134 - 0x0128)
class UUDKAnimBlendByHoverboarding : public UUDKAnimBlendBase
{
public:
	int                                                LastActiveChildIndex;                             		// 0x0128 (0x0004) [0x0000000000000000]              
	float                                              BoardLeanAmount;                                  		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              FallTimeBeforeAnim;                               		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1895 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByHoverboarding::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByIdle
// 0x0000 (0x0128 - 0x0128)
class UUDKAnimBlendByIdle : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1896 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByIdle::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByPhysics
// 0x0040 (0x0168 - 0x0128)
class UUDKAnimBlendByPhysics : public UUDKAnimBlendBase
{
public:
	int                                                PhysicsMap[ 0xC ];                                		// 0x0128 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastPhysics;                                      		// 0x0158 (0x0004) [0x0000000000000000]              
	float                                              LandBlendDelay;                                   		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PendingChildIndex;                                		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              PendingTimeToGo;                                  		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1897 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByPhysics::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByPhysicsVolume
// 0x0010 (0x0138 - 0x0128)
class UUDKAnimBlendByPhysicsVolume : public UUDKAnimBlendBase
{
public:
	TArray< struct FPhysicsVolumeParams >              PhysicsParamList;                                 		// 0x0128 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APhysicsVolume*                              LastPhysicsVolume;                                		// 0x0134 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1898 ];

		return pClassPointer;
	};

	void eventPhysicsVolumeChanged ( class APhysicsVolume* NewVolume );
};

UClass* UUDKAnimBlendByPhysicsVolume::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByPosture
// 0x0000 (0x0128 - 0x0128)
class UUDKAnimBlendByPosture : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1899 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByPosture::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByTurnInPlace
// 0x000C (0x0134 - 0x0128)
class UUDKAnimBlendByTurnInPlace : public UUDKAnimBlendBase
{
public:
	float                                              RootYawSpeedThresh;                               		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnInPlaceBlendSpeed;                            		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AUDKPawn*                                    OwnerUTP;                                         		// 0x0130 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1900 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByTurnInPlace::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByVehicle
// 0x0008 (0x0130 - 0x0128)
class UUDKAnimBlendByVehicle : public UUDKAnimBlendBase
{
public:
	unsigned long                                      bLastPawnDriving : 1;                             		// 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	class AVehicle*                                    LastVehicle;                                      		// 0x012C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1901 ];

		return pClassPointer;
	};

	void UpdateVehicleState ( );
};

UClass* UUDKAnimBlendByVehicle::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByDriving
// 0x0000 (0x0104 - 0x0104)
class UUDKAnimBlendByDriving : public UAnimNodeBlend
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1902 ];

		return pClassPointer;
	};

	void UpdateDrivingState ( );
};

UClass* UUDKAnimBlendByDriving::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByHoverboardTilt
// 0x0023 (0x0114 - 0x00F1)
class UUDKAnimBlendByHoverboardTilt : public UAnimNodeBlendBase
{
public:
	struct FVector                                     UpVector;                                         		// 0x00F4 (0x000C) [0x0000000000000000]              
	float                                              TiltScale;                                        		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TiltDeadZone;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TiltYScale;                                       		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UpperBodyName;                                    		// 0x010C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1903 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByHoverboardTilt::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByHoverboardTurn
// 0x000F (0x0100 - 0x00F1)
class UUDKAnimBlendByHoverboardTurn : public UAnimNodeBlendBase
{
public:
	float                                              TurnScale;                                        		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxBlendPerSec;                                   		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentAnimWeight;                                		// 0x00FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1904 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByHoverboardTurn::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendBySlotActive
// 0x0004 (0x0130 - 0x012C)
class UUDKAnimBlendBySlotActive : public UAnimNodeBlendPerBone
{
public:
	class UAnimNodeSlot*                               ChildSlot;                                        		// 0x012C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1905 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendBySlotActive::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendBySpeed
// 0x0008 (0x010C - 0x0104)
class UUDKAnimBlendBySpeed : public UAnimNodeBlend
{
public:
	float                                              MinSpeed;                                         		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1906 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendBySpeed::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByWeapon
// 0x0010 (0x013C - 0x012C)
class UUDKAnimBlendByWeapon : public UAnimNodeBlendPerBone
{
public:
	unsigned long                                      bLooping : 1;                                     		// 0x012C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       LoopingAnim;                                      		// 0x0130 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1907 ];

		return pClassPointer;
	};

	void eventAnimStopFire ( float SpecialBlendTime );
	void AnimFire ( struct FName FireSequence, unsigned long bAutoFire, float AnimRate, float SpecialBlendTime, struct FName LoopSequence );
};

UClass* UUDKAnimBlendByWeapon::pClassPointer = NULL;

// Class UDKBase.UDKAnimBlendByWeapType
// 0x0000 (0x012C - 0x012C)
class UUDKAnimBlendByWeapType : public UAnimNodeBlendPerBone
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1908 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimBlendByWeapType::pClassPointer = NULL;

// Class UDKBase.UDKAnimNodeCopyBoneTranslation
// 0x0057 (0x0148 - 0x00F1)
class UUDKAnimNodeCopyBoneTranslation : public UAnimNodeBlendBase
{
public:
	class UAnimNodeAimOffset*                          CachedAimNode;                                    		// 0x00F4 (0x0004) [0x0000000000000000]              
	struct FName                                       OldAimProfileName;                                		// 0x00F8 (0x0008) [0x0000000000000000]              
	TArray< struct FBoneCopyInfo >                     DefaultBoneCopyArray;                             		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBoneCopyInfo >                     DualWieldBoneCopyArray;                           		// 0x010C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBoneCopyInfo >                     ActiveBoneCopyArray;                              		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            RequiredBones;                                    		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUDKAnimNodeSeqWeap* >               SeqWeaps;                                         		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUDKAnimBlendByWeapType* >           WeapTypeBlends;                                   		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1909 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimNodeCopyBoneTranslation::pClassPointer = NULL;

// Class UDKBase.UDKAnimNodeFramePlayer
// 0x0000 (0x0140 - 0x0140)
class UUDKAnimNodeFramePlayer : public UAnimNodeSequence
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1910 ];

		return pClassPointer;
	};

	void SetAnimPosition ( float Perc );
	void SetAnimation ( struct FName Sequence, float RateScale );
};

UClass* UUDKAnimNodeFramePlayer::pClassPointer = NULL;

// Class UDKBase.UDKAnimNodeJumpLeanOffset
// 0x002C (0x0168 - 0x013C)
class UUDKAnimNodeJumpLeanOffset : public UAnimNodeAimOffset
{
public:
	float                                              JumpLeanStrength;                                 		// 0x013C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxLeanChangeSpeed;                               		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bMultiplyByZVelocity : 1;                         		// 0x0144 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDodging : 1;                                     		// 0x0144 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOldDodging : 1;                                  		// 0x0144 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDoubleJumping : 1;                               		// 0x0144 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bOldDoubleJumping : 1;                            		// 0x0144 (0x0004) [0x0000000000000000] [0x00000010] 
	class UAnimNodeAimOffset*                          CachedAimNode;                                    		// 0x0148 (0x0004) [0x0000000000000000]              
	struct FName                                       OldAimProfileName;                                		// 0x014C (0x0008) [0x0000000000000000]              
	struct FVector2D                                   PreBlendAim;                                      		// 0x0154 (0x0008) [0x0000000000000000]              
	float                                              LeanWeight;                                       		// 0x015C (0x0004) [0x0000000000000000]              
	float                                              LeanWeightTarget;                                 		// 0x0160 (0x0004) [0x0000000000000000]              
	float                                              BlendTimeToGo;                                    		// 0x0164 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1911 ];

		return pClassPointer;
	};

	void SetLeanWeight ( float WeightTarget, float BlendTime );
};

UClass* UUDKAnimNodeJumpLeanOffset::pClassPointer = NULL;

// Class UDKBase.UDKAnimNodeSequence
// 0x0010 (0x0150 - 0x0140)
class UUDKAnimNodeSequence : public UAnimNodeSequence
{
public:
	unsigned long                                      bAutoStart : 1;                                   		// 0x0140 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLoopLastSequence : 1;                            		// 0x0140 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FName >                             SeqStack;                                         		// 0x0144 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1912 ];

		return pClassPointer;
	};

	void eventOnInit ( );
	void PlayAnimationSet ( TArray< struct FName > Sequences, float SeqRate, unsigned long bLoopLast );
	void PlayAnimation ( struct FName Sequence, float SeqRate, unsigned long bSeqLoop );
};

UClass* UUDKAnimNodeSequence::pClassPointer = NULL;

// Class UDKBase.UDKAnimNodeSeqWeap
// 0x0028 (0x0178 - 0x0150)
class UUDKAnimNodeSeqWeap : public UUDKAnimNodeSequence
{
public:
	struct FName                                       DefaultAnim;                                      		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DualPistolAnim;                                   		// 0x0158 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SinglePistolAnim;                                 		// 0x0160 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShoulderRocketAnim;                               		// 0x0168 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StingerAnim;                                      		// 0x0170 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1913 ];

		return pClassPointer;
	};

};

UClass* UUDKAnimNodeSeqWeap::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_CantileverBeam
// 0x003C (0x0194 - 0x0158)
class UUDKSkelControl_CantileverBeam : public USkelControlLookAt
{
public:
	struct FVector                                     WorldSpaceGoal;                                   		// 0x0158 (0x000C) [0x0000000000000000]              
	struct FVector                                     InitialWorldSpaceGoalOffset;                      		// 0x0164 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Velocity;                                         		// 0x0170 (0x000C) [0x0000000000000000]              
	float                                              SpringStiffness;                                  		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringDamping;                                    		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PercentBeamVelocityTransfer;                      		// 0x0184 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __EntireBeamVelocity__Delegate;                   		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1914 ];

		return pClassPointer;
	};

	struct FVector EntireBeamVelocity ( );
};

UClass* UUDKSkelControl_CantileverBeam::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_Damage
// 0x008C (0x0178 - 0x00EC)
class UUDKSkelControl_Damage : public USkelControlSingleBone
{
public:
	unsigned long                                      bInitialized : 1;                                 		// 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOnDamageActive : 1;                              		// 0x00EC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bControlStrFollowsHealth : 1;                     		// 0x00EC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsBroken : 1;                                    		// 0x00EC (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bIsBreaking : 1;                                  		// 0x00EC (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bOnDeathActive : 1;                               		// 0x00EC (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bOnDeathUseForSecondaryExplosion : 1;             		// 0x00EC (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	class AUDKVehicle*                                 OwnerVehicle;                                     		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              HealthPerc;                                       		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              DamageBoneScale;                                  		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DamageMax;                                        		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActivationThreshold;                              		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 BreakMesh;                                        		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BreakThreshold;                                   		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BreakTime;                                        		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DefaultBreakDir;                                  		// 0x0110 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DamageScale;                                      		// 0x011C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DamageOnBreak;                                 		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DamageTrail;                                   		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BrokenBone;                                       		// 0x0130 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              BreakTimer;                                       		// 0x0138 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OwnerVehicleMaxHealth;                            		// 0x013C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     BreakSpeed;                                       		// 0x0140 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathPercentToActuallySpawn;                      		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathBoneScale;                                   		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 DeathStaticMesh;                                  		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DeathImpulseDir;                                  		// 0x0158 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DeathScale;                                       		// 0x0164 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DeathOnBreak;                                  		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DeathTrail;                                    		// 0x0174 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1915 ];

		return pClassPointer;
	};

	float eventRestorePart ( );
	void eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible );
	void eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible );
};

UClass* UUDKSkelControl_Damage::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_DamageHinge
// 0x0014 (0x018C - 0x0178)
class UUDKSkelControl_DamageHinge : public UUDKSkelControl_Damage
{
public:
	float                                              MaxAngle;                                         		// 0x0178 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      PivotAxis;                                        		// 0x017C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              AVModifier;                                       		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentAngle;                                     		// 0x0184 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SpringStiffness;                                  		// 0x0188 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1916 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_DamageHinge::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_DamageSpring
// 0x0048 (0x01C0 - 0x0178)
class UUDKSkelControl_DamageSpring : public UUDKSkelControl_Damage
{
public:
	struct FRotator                                    MaxAngle;                                         		// 0x0178 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MinAngle;                                         		// 0x0184 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Falloff;                                          		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringStiffness;                                  		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AVModifier;                                       		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    CurrentAngle;                                     		// 0x019C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              RandomPortion;                                    		// 0x01A8 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastHitMomentum;                                  		// 0x01AC (0x000C) [0x0000000000000000]              
	float                                              LastHitTime;                                      		// 0x01B8 (0x0004) [0x0000000000000000]              
	float                                              MomentumPortion;                                  		// 0x01BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1917 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_DamageSpring::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_HoverboardSuspension
// 0x0024 (0x0110 - 0x00EC)
class UUDKSkelControl_HoverboardSuspension : public USkelControlSingleBone
{
public:
	float                                              TransIgnore;                                      		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransScale;                                       		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransOffset;                                      		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTrans;                                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTrans;                                         		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotScale;                                         		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRot;                                           		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRotRate;                                       		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentRot;                                       		// 0x010C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1918 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_HoverboardSuspension::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_HoverboardSwing
// 0x0024 (0x0110 - 0x00EC)
class UUDKSkelControl_HoverboardSwing : public USkelControlSingleBone
{
public:
	int                                                SwingHistoryWindow;                               		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SwingHistorySlot;                                 		// 0x00F0 (0x0004) [0x0000000000000000]              
	TArray< float >                                    SwingHistory;                                     		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SwingScale;                                       		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSwing;                                         		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxUseVel;                                        		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentSwing;                                     		// 0x010C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1919 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_HoverboardSwing::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_HoverboardVibration
// 0x0014 (0x0100 - 0x00EC)
class UUDKSkelControl_HoverboardVibration : public USkelControlSingleBone
{
public:
	float                                              VibFrequency;                                     		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VibSpeedAmpScale;                                 		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VibTurnAmpScale;                                  		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VibMaxAmplitude;                                  		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VibInput;                                         		// 0x00FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1920 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_HoverboardVibration::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_HugGround
// 0x0024 (0x0110 - 0x00EC)
class UUDKSkelControl_HugGround : public USkelControlSingleBone
{
public:
	float                                              DesiredGroundDist;                                		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDist;                                          		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParentBone;                                       		// 0x00F4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOppositeFromParent : 1;                          		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              XYDistFromParentBone;                             		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZDistFromParentBone;                              		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxTranslationPerSec;                             		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastUpdateTime;                                   		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1921 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_HugGround::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_LockRotation
// 0x0028 (0x00E4 - 0x00BC)
class UUDKSkelControl_LockRotation : public USkelControlBase
{
public:
	unsigned long                                      bLockPitch : 1;                                   		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLockYaw : 1;                                     		// 0x00BC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLockRoll : 1;                                    		// 0x00BC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FRotator                                    LockRotation;                                     		// 0x00C0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MaxDelta;                                         		// 0x00CC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LockRotationSpace;                                		// 0x00D8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       RotationSpaceBoneName;                            		// 0x00DC (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1922 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_LockRotation::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_LookAt
// 0x0010 (0x0168 - 0x0158)
class UUDKSkelControl_LookAt : public USkelControlLookAt
{
public:
	unsigned long                                      bLimitYaw : 1;                                    		// 0x0158 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLimitPitch : 1;                                  		// 0x0158 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLimitRoll : 1;                                   		// 0x0158 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bShowPerAxisLimits : 1;                           		// 0x0158 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              YawLimit;                                         		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchLimit;                                       		// 0x0160 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollLimit;                                        		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1923 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_LookAt::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_MassBoneScaling
// 0x000C (0x00C8 - 0x00BC)
class UUDKSkelControl_MassBoneScaling : public USkelControlBase
{
public:
	TArray< float >                                    BoneScales;                                       		// 0x00BC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1924 ];

		return pClassPointer;
	};

	float GetBoneScale ( struct FName BoneName );
	void SetBoneScale ( struct FName BoneName, float Scale );
};

UClass* UUDKSkelControl_MassBoneScaling::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_PropellerBlade
// 0x0014 (0x0100 - 0x00EC)
class UUDKSkelControl_PropellerBlade : public USkelControlSingleBone
{
public:
	float                                              MaxRotationsPerSecond;                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpinUpTime;                                       		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCounterClockwise : 1;                            		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RotationsPerSecond;                               		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              DesiredRotationsPerSecond;                        		// 0x00FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1925 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_PropellerBlade::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_Rotate
// 0x0018 (0x0104 - 0x00EC)
class UUDKSkelControl_Rotate : public USkelControlSingleBone
{
public:
	struct FRotator                                    DesiredBoneRotation;                              		// 0x00EC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    DesiredBoneRotationRate;                          		// 0x00F8 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1926 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_Rotate::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_SpinControl
// 0x0010 (0x00FC - 0x00EC)
class UUDKSkelControl_SpinControl : public USkelControlSingleBone
{
public:
	float                                              DegreesPerSecond;                                 		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Axis;                                             		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1927 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_SpinControl::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_TurretConstrained
// 0x0058 (0x0144 - 0x00EC)
class UUDKSkelControl_TurretConstrained : public USkelControlSingleBone
{
public:
	unsigned long                                      bConstrainPitch : 1;                              		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConstrainYaw : 1;                                		// 0x00EC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bConstrainRoll : 1;                               		// 0x00EC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bInvertPitch : 1;                                 		// 0x00EC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bInvertYaw : 1;                                   		// 0x00EC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bInvertRoll : 1;                                  		// 0x00EC (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bFixedWhenFiring : 1;                             		// 0x00EC (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bResetWhenUnattended : 1;                         		// 0x00EC (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bIsInMotion : 1;                                  		// 0x00EC (0x0004) [0x0000000000000000] [0x00000100] 
	struct FTurretConstraintData                       MaxAngle;                                         		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretConstraintData                       MinAngle;                                         		// 0x00FC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTurretStepData >                   Steps;                                            		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LagDegreesPerSecond;                              		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchSpeedScale;                                  		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    DesiredBoneRotation;                              		// 0x011C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                AssociatedSeatIndex;                              		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    ConstrainedBoneRotation;                          		// 0x012C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnTurretStatusChange__Delegate;                 		// 0x0138 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1928 ];

		return pClassPointer;
	};

	bool WouldConstrainPitch ( int TestPitch, class USkeletalMeshComponent* SkelComp );
	void InitTurret ( struct FRotator InitRot, class USkeletalMeshComponent* SkelComp );
	void OnTurretStatusChange ( unsigned long bIsMoving );
};

UClass* UUDKSkelControl_TurretConstrained::pClassPointer = NULL;

// Class UDKBase.UDKSkelControl_VehicleFlap
// 0x0020 (0x010C - 0x00EC)
class UUDKSkelControl_VehicleFlap : public USkelControlSingleBone
{
public:
	float                                              maxPitch;                                         		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OldZPitch;                                        		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              MaxPitchTime;                                     		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              MaxPitchChange;                                   		// 0x00F8 (0x0004) [0x0000000000000000]              
	struct FName                                       RightFlapControl;                                 		// 0x00FC (0x0008) [0x0000000000000000]              
	struct FName                                       LeftFlapControl;                                  		// 0x0104 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1929 ];

		return pClassPointer;
	};

};

UClass* UUDKSkelControl_VehicleFlap::pClassPointer = NULL;

// Class UDKBase.SimplePawn
// 0x0040 (0x0494 - 0x0454)
class ASimplePawn : public AGamePawn
{
public:
	unsigned long                                      bFixedView : 1;                                   		// 0x0454 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FixedViewLoc;                                     		// 0x0458 (0x000C) [0x0000000000000000]              
	struct FRotator                                    FixedViewRot;                                     		// 0x0464 (0x000C) [0x0000000000000000]              
	float                                              Bob;                                              		// 0x0470 (0x0004) [0x0000000000000000]              
	float                                              AppliedBob;                                       		// 0x0474 (0x0004) [0x0000000000000000]              
	float                                              BobTime;                                          		// 0x0478 (0x0004) [0x0000000000000000]              
	struct FVector                                     WalkBob;                                          		// 0x047C (0x000C) [0x0000000000000000]              
	float                                              OldZ;                                             		// 0x0488 (0x0004) [0x0000000000000000]              
	float                                              CastlePawnSpeed;                                  		// 0x048C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CastlePawnAccel;                                  		// 0x0490 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39206 ];

		return pClassPointer;
	};

	struct FVector GetPawnViewLocation ( );
	void eventTickSpecial ( float DeltaTime );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void FixedView ( );
	void PostBeginPlay ( );
};

UClass* ASimplePawn::pClassPointer = NULL;

// Class UDKBase.SimplePC
// 0x00E0 (0x0674 - 0x0594)
class ASimplePC : public AGamePlayerController
{
public:
	float                                              AutoRotationAccelRate;                            		// 0x0594 (0x0004) [0x0000000000000000]              
	float                                              AutoRotationBrakeDecelRate;                       		// 0x0598 (0x0004) [0x0000000000000000]              
	float                                              MaxAutoRotationVelocity;                          		// 0x059C (0x0004) [0x0000000000000000]              
	float                                              BreathAutoRotationAccelRate;                      		// 0x05A0 (0x0004) [0x0000000000000000]              
	float                                              BreathAutoRotationBrakeDecelRate;                 		// 0x05A4 (0x0004) [0x0000000000000000]              
	float                                              MaxBreathAutoRotationVelocity;                    		// 0x05A8 (0x0004) [0x0000000000000000]              
	float                                              RangeBasedYawAccelStrength;                       		// 0x05AC (0x0004) [0x0000000000000000]              
	float                                              RangeBasedAccelMaxDistance;                       		// 0x05B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLookAtDestination : 1;                           		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCameraBreathing : 1;                             		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSmoothRotation : 1;                              		// 0x05B4 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bApplyBackTouchToViewOffset : 1;                  		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFingerIsDown : 1;                                		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     LookAtDestination;                                		// 0x05B8 (0x000C) [0x0000000000000000]              
	float                                              LookAtDestAutoPitchAmount;                        		// 0x05C4 (0x0004) [0x0000000000000000]              
	struct FVector                                     CameraBreathCenterLocation;                       		// 0x05C8 (0x000C) [0x0000000000000000]              
	struct FRotator                                    CameraBreathRotator;                              		// 0x05D4 (0x000C) [0x0000000000000000]              
	struct FVector                                     CameraBreathSampleLocation;                       		// 0x05E0 (0x000C) [0x0000000000000000]              
	float                                              LastCameraBreathDeltaSelectTime;                  		// 0x05EC (0x0004) [0x0000000000000000]              
	float                                              TimeBetweenCameraBreathChanges;                   		// 0x05F0 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   AutoRotationVelocity;                             		// 0x05F4 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   ViewportSize;                                     		// 0x05FC (0x0008) [0x0000000000000000]              
	TArray< class USoundCue* >                         FootstepSounds;                                   		// 0x0604 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DistanceUntilNextFootstepSound;                   		// 0x0610 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerCommandline;                                		// 0x0614 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              OldTurn;                                          		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              OldLookup;                                        		// 0x0624 (0x0004) [0x0000000000000000]              
	float                                              RotationSmoothingFactor;                          		// 0x0628 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultInputGroup;                                		// 0x062C (0x0004) [0x0000000000004000]              ( CPF_Config )
	class UMobilePlayerInput*                          MPI;                                              		// 0x0630 (0x0004) [0x0000000000000000]              
	class UMobileInputZone*                            SliderZone;                                       		// 0x0634 (0x0004) [0x0000000000000000]              
	class UMobileInputZone*                            StickMoveZone;                                    		// 0x0638 (0x0004) [0x0000000000000000]              
	class UMobileInputZone*                            StickLookZone;                                    		// 0x063C (0x0004) [0x0000000000000000]              
	class UMobileInputZone*                            FreeLookZone;                                     		// 0x0640 (0x0004) [0x0000000000000000]              
	int                                                NoTapToMoves;                                     		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              LastEnteredTapToMove;                             		// 0x0648 (0x0004) [0x0000000000000000]              
	float                                              TotalTimeInTapToMove;                             		// 0x064C (0x0004) [0x0000000000000000]              
	float                                              TimeOfLastUserViewChange;                         		// 0x0650 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   TouchCenter;                                      		// 0x0654 (0x0008) [0x0000000000000000]              
	struct FRotator                                    LastOffset;                                       		// 0x065C (0x000C) [0x0000000000000000]              
	struct FRotator                                    MatineeOffset;                                    		// 0x0668 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39207 ];

		return pClassPointer;
	};

	void SetFootstepsToSnow ( );
	void SetFootstepsToStone ( );
	void PlayerTick ( float DeltaTime );
	void eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation );
	void eventNotifyDirectorControl ( unsigned long bNowControlling, class USeqAct_Interp* CurrentMatinee );
	void OffsetMatineeTouch ( int Handle, unsigned char Type, struct FVector2D TouchLocation, float DeviceTimestamp, int TouchpadIndex );
	void ActivateControlGroup ( );
	void UpdateCameraBreathing ( );
	void CheckDistanceToDestination ( float DistToDestination );
	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation );
	void UpdateRotation ( float DeltaTime );
	void PlayerMove ( float DeltaTime );
	void SetNextFootstepDistance ( );
	bool IsStickMoveActive ( );
	void PostBeginPlay ( );
	void SetupZones ( );
	void ReceivedGameClass ( class UClass* GameClass );
	void OnConsoleCommand ( class USeqAct_ConsoleCommand* inAction );
	void eventInitInputSystem ( );
};

UClass* ASimplePC::pClassPointer = NULL;

// Class UDKBase.CastleGame
// 0x0004 (0x0384 - 0x0380)
class ACastleGame : public ASimpleGame
{
public:
	unsigned long                                      bAllowAttractMode : 1;                            		// 0x0380 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39208 ];

		return pClassPointer;
	};

	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	bool PreventDeath ( class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventOnEngineHasLoaded ( );
};

UClass* ACastleGame::pClassPointer = NULL;

// Class UDKBase.MobileHUDExt
// 0x0024 (0x0560 - 0x053C)
class AMobileHUDExt : public AMobileHUD
{
public:
	class UTexture2D*                                  TapToMoveTexture;                                 		// 0x053C (0x0004) [0x0000000000000000]              
	float                                              LastTapToMoveEffectTime;                          		// 0x0540 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   TapToMoveEffectPos;                               		// 0x0544 (0x0008) [0x0000000000000000]              
	struct FCachedLastTouch                            LastTouch;                                        		// 0x054C (0x000C) [0x0000000000000000]              
	unsigned long                                      bFlashJoysticks : 1;                              		// 0x0558 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashTime;                                        		// 0x055C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39223 ];

		return pClassPointer;
	};

	void FlashSticks ( );
	void DrawMobileZone_Joystick ( class UMobileInputZone* Zone );
	void DrawMobileZone_Slider ( class UMobileInputZone* Zone );
	void PostRender ( );
	bool ShowMobileHud ( );
	void ConditionallyDrawTapToMoveEffect ( );
	void StartTapToMoveEffect ( float X, float Y );
};

UClass* AMobileHUDExt::pClassPointer = NULL;

// Class UDKBase.CastlePC
// 0x0074 (0x06E8 - 0x0674)
class ACastlePC : public ASimplePC
{
public:
	unsigned long                                      bSuppressSplash : 1;                              		// 0x0674 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bSplashHasBeenShown : 1;                          		// 0x0674 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsInAttractMode : 1;                             		// 0x0674 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDoneInitialFade : 1;                             		// 0x0674 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPauseMenuOpen : 1;                               		// 0x0674 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAutoSlide : 1;                                   		// 0x0674 (0x0004) [0x0000000000000000] [0x00000020] 
	class UMobileMenuPause*                            PauseMenu;                                        		// 0x0678 (0x0004) [0x0000000000000000]              
	class UMobileMenuDebug*                            DebugMenu;                                        		// 0x067C (0x0004) [0x0000000000000000]              
	float                                              SliderStart;                                      		// 0x0680 (0x0004) [0x0000000000000000]              
	float                                              SliderEnd;                                        		// 0x0684 (0x0004) [0x0000000000000000]              
	float                                              SliderTravelTime;                                 		// 0x0688 (0x0004) [0x0000000000000000]              
	float                                              SliderTravelDuration;                             		// 0x068C (0x0004) [0x0000000000000000]              
	float                                              AutoAttractTime;                                  		// 0x0690 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   OpenMenuSound;                                    		// 0x0694 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CloseMenuSound;                                   		// 0x0698 (0x0004) [0x0000000000000000]              
	class UMobileMenuControls*                         TutMenu;                                          		// 0x069C (0x0004) [0x0000000000000000]              
	float                                              StuckThreshHold;                                  		// 0x06A0 (0x0004) [0x0000000000000000]              
	float                                              TapToMoveAutoPitchAmount;                         		// 0x06A4 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 TapToMoveVisualMesh;                              		// 0x06A8 (0x0004) [0x0000000000000000]              
	float                                              TapToMoveVisualMinDist;                           		// 0x06AC (0x0004) [0x0000000000000000]              
	float                                              TapToMoveVisualRotateSpeed;                       		// 0x06B0 (0x0004) [0x0000000000000000]              
	float                                              TapToMoveVisualAnimDuration;                      		// 0x06B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     TapToMoveDestination;                             		// 0x06B8 (0x000C) [0x0000000000000000]              
	float                                              LastDistToDestination;                            		// 0x06C4 (0x0004) [0x0000000000000000]              
	float                                              TapToMoveVisualEffectStartTime;                   		// 0x06C8 (0x0004) [0x0000000000000000]              
	float                                              TapToMoveVisualEffectEndTime;                     		// 0x06CC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TapToMoveSound;                                   		// 0x06D0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   InvalidTapToMoveSound;                            		// 0x06D4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   TapToMoveStopSound;                               		// 0x06D8 (0x0004) [0x0000000000000000]              
	class AKActorSpawnable*                            TapToMoveVisualActor;                             		// 0x06DC (0x0004) [0x0000000000000000]              
	unsigned char                                      TutorialStage;                                    		// 0x06E0 (0x0001) [0x0000000000000000]              
	class UMobileInputZone*                            TutorialLookZone;                                 		// 0x06E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39224 ];

		return pClassPointer;
	};

	void SetFootstepsToSnow ( );
	void SetFootstepsToStone ( );
	void StartTutorials ( );
	void FlashHelp ( float Duration );
	void ShowSplash ( );
	void PlayerTick ( float DeltaTime );
	bool ProcessMenuSlide ( class UMobileInputZone* Zone, unsigned char EventType, int SlideValue, struct FVector2D ViewportSizes );
	bool MenuSliderTap ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	void OpenMenu ( );
	void ResetMenu ( );
	void AutoSlide ( float Destination );
	bool ExitAttractTap ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	void ExitAttractMode ( );
	void EnterAttractMode ( );
	void eventNotifyDirectorControl ( unsigned long bNowControlling, class USeqAct_Interp* CurrentMatinee );
	void CheckDistanceToDestination ( float DistToDestination );
	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation );
	void PlayerLookAtDestination ( );
	void DoTapToMove ( struct FVector NewDestination, unsigned long bShouldLookAtDestination );
	bool TapToMoveTap ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	class AActor* TraceForTapToMove ( class APawn* TraceOwner, struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal );
	void CheckInactivity ( );
	void SaveControllerStats ( );
	void SetupZones ( );
	void eventOnEngineInitialTick ( );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* ACastlePC::pClassPointer = NULL;

// Class UDKBase.MobileMenuControls
// 0x001C (0x00B0 - 0x0094)
class UMobileMenuControls : public UMobileMenuScene
{
public:
	float                                              FadeTime;                                         		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              FadeDuration;                                     		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              AnimTime;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bFadeOut : 1;                                     		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAnimate : 1;                                     		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UMobileMenuImage*                            Icon;                                             		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UMobileMenuImage*                            msg;                                              		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x00AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39362 ];

		return pClassPointer;
	};

	void RenderScene ( class UCanvas* Canvas, float RenderDelta );
	void Setup ( unsigned long bTap );
	void FadeOut ( );
};

UClass* UMobileMenuControls::pClassPointer = NULL;

// Class UDKBase.MobileMenuBase
// 0x0024 (0x00B8 - 0x0094)
class UMobileMenuBase : public UMobileMenuScene
{
public:
	class UTexture2D*                                  iPadBackgroundTexture;                            		// 0x0094 (0x0004) [0x0000000000000000]              
	struct FUVCoords                                   iPadBackgroundCoords;                             		// 0x0098 (0x0014) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              FadeDuration;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFadeOut : 1;                                     		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCloseOnFadeOut : 1;                              		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39372 ];

		return pClassPointer;
	};

	void RenderScene ( class UCanvas* Canvas, float RenderDelta );
	void Fade ( unsigned long bIsFadeOut, float FadeDur );
};

UClass* UMobileMenuBase::pClassPointer = NULL;

// Class UDKBase.MobileMenuDebug
// 0x0000 (0x00B8 - 0x00B8)
class UMobileMenuDebug : public UMobileMenuBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39371 ];

		return pClassPointer;
	};

	void eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY );
};

UClass* UMobileMenuDebug::pClassPointer = NULL;

// Class UDKBase.MobileMenuPause
// 0x0020 (0x00B4 - 0x0094)
class UMobileMenuPause : public UMobileMenuScene
{
public:
	class UMobileMenuControls*                         FadingControlsMenu;                               		// 0x0094 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHelpFadingOut : 1;                               		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFlashHelp : 1;                                   		// 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HelpFadeTime;                                     		// 0x009C (0x0004) [0x0000000000000000]              
	float                                              HelpFadeDuration;                                 		// 0x00A0 (0x0004) [0x0000000000000000]              
	float                                              ShownSize;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              FlashDuration;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              FlashTime;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39374 ];

		return pClassPointer;
	};

	void ReleaseHelp ( );
	void FlashHelp ( float Duration );
	bool OnSceneTouch ( unsigned char EventType, float X, float Y, unsigned long bInside );
	void RenderScene ( class UCanvas* Canvas, float RenderDelta );
	void HackInactiveAlpha ( float NewValue );
	void OnResetMenu ( );
	void eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY );
	void eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
};

UClass* UMobileMenuPause::pClassPointer = NULL;

// Class UDKBase.MobileMenuSplash
// 0x0004 (0x0098 - 0x0094)
class UMobileMenuSplash : public UMobileMenuScene
{
public:
	float                                              HelpFlashDuration;                                		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39463 ];

		return pClassPointer;
	};

	void Closed ( );
	void eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY );
	void eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
};

UClass* UMobileMenuSplash::pClassPointer = NULL;

// Class UDKBase.CloudGame
// 0x0000 (0x0380 - 0x0380)
class ACloudGame : public ASimpleGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39491 ];

		return pClassPointer;
	};

};

UClass* ACloudGame::pClassPointer = NULL;

// Class UDKBase.CloudHUD
// 0x0000 (0x0580 - 0x0580)
class ACloudHUD : public AUDKHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39493 ];

		return pClassPointer;
	};

	void PostRender ( );
};

UClass* ACloudHUD::pClassPointer = NULL;

// Class UDKBase.CloudPC
// 0x0024 (0x0698 - 0x0674)
class ACloudPC : public ASimplePC
{
public:
	class UCloudSaveData*                              SaveData;                                         		// 0x0674 (0x0004) [0x0000000000000000]              
	int                                                Slot1DocIndex;                                    		// 0x0678 (0x0004) [0x0000000000000000]              
	int                                                Slot2DocIndex;                                    		// 0x067C (0x0004) [0x0000000000000000]              
	class UCloudStorageBase*                           Cloud;                                            		// 0x0680 (0x0004) [0x0000000000000000]              
	class UFacebookIntegration*                        Facebook;                                         		// 0x0684 (0x0004) [0x0000000000000000]              
	class UInGameAdManager*                            AdManager;                                        		// 0x0688 (0x0004) [0x0000000000000000]              
	class UMicroTransactionBase*                       MicroTrans;                                       		// 0x068C (0x0004) [0x0000000000000000]              
	class UTwitterIntegrationBase*                     Twitter;                                          		// 0x0690 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFBAuthenticating : 1;                          		// 0x0694 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAdHasBeenShown : 1;                              		// 0x0694 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39494 ];

		return pClassPointer;
	};

	void OnTwitterAuthorizeComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnTwitterRequestComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnTweetComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudGameTwitter ( );
	void CloudGameBuyConsumable ( );
	void MicroQueryProducts ( );
	void OnProductPurchaseComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnProductQueryComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudGameFacebook ( );
	void OnWebRequestComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnFBDialogComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnFBFriendsListComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnFBRequestComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnFBAuthComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void eventOnUserClosedAdvertisement ( struct FPlatformInterfaceDelegateResult* Result );
	void OnUserClickedAdvertisement ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudGameToggleAd ( );
	void CloudGetDocs ( );
	void CloudConflictDetected ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudReadDocument ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudGotDocuments ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudGetAndIncrement ( );
	void CloudIncrementValue ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudValueChanged ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudLogValue ( struct FPlatformInterfaceDelegateResult* Result );
	void CloudGameLoad ( int Slot );
	void CloudGameSave ( int Slot );
	void CloudGameFight ( );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* ACloudPC::pClassPointer = NULL;

// Class UDKBase.CloudSaveData
// 0x0008 (0x0044 - 0x003C)
class UCloudSaveData : public UObject
{
public:
	int                                                Exp;                                              		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39519 ];

		return pClassPointer;
	};

};

UClass* UCloudSaveData::pClassPointer = NULL;

// Class UDKBase.CloudMenuMicroTrans
// 0x0010 (0x00A4 - 0x0094)
class UCloudMenuMicroTrans : public UMobileMenuScene
{
public:
	class ACloudPC*                                    PC;                                               		// 0x0094 (0x0004) [0x0000000000000000]              
	class UMicroTransactionBase*                       MicroTrans;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	class UMobileMenuButton*                           ProductButtons[ 0x2 ];                            		// 0x009C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39526 ];

		return pClassPointer;
	};

	void OnProductPurchaseComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void OnProductQueryComplete ( struct FPlatformInterfaceDelegateResult* Result );
	void Closed ( );
	void eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY );
	void eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization );
};

UClass* UCloudMenuMicroTrans::pClassPointer = NULL;

// Class UDKBase.MobileGameCrowdAgent
// 0x0000 (0x0454 - 0x0454)
class AMobileGameCrowdAgent : public AGameCrowdAgentSkeletal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39634 ];

		return pClassPointer;
	};

	void OnSetMaterial ( class USeqAct_SetMaterial* Action );
	void PlayDeath ( struct FVector KillMomentum );
};

UClass* AMobileGameCrowdAgent::pClassPointer = NULL;

// Class UDKBase.MobilePlaceablePawn
// 0x0020 (0x0474 - 0x0454)
class AMobilePlaceablePawn : public AGamePawn
{
public:
	unsigned long                                      bFixedView : 1;                                   		// 0x0454 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FixedViewLoc;                                     		// 0x0458 (0x000C) [0x0000000000000000]              
	struct FRotator                                    FixedViewRot;                                     		// 0x0464 (0x000C) [0x0000000000000000]              
	class ULightEnvironmentComponent*                  LightEnvironment;                                 		// 0x0470 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39797 ];

		return pClassPointer;
	};

	struct FVector GetPawnViewLocation ( );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool eventRestoreAnimSetsToDefault ( );
	void FixedView ( );
};

UClass* AMobilePlaceablePawn::pClassPointer = NULL;

// Class UDKBase.MobileProjectile
// 0x0028 (0x022C - 0x0204)
class AMobileProjectile : public AProjectile
{
public:
	float                                              AccelRate;                                        		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShuttingDown : 1;                                		// 0x0208 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitOnSpawnWithRotation : 1;                     		// 0x0208 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSuppressExplosionFX : 1;                         		// 0x0208 (0x0004) [0x0000000000000000] [0x00000004] 
	class UParticleSystemComponent*                    ProjEffects;                                      		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ProjFlightTemplate;                               		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ProjExplosionTemplate;                            		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxEffectDistance;                                		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExplosionSound;                                   		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            ActorsToIgnoreWhenHit;                            		// 0x0220 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39817 ];

		return pClassPointer;
	};

	class APawn* GetPawnOwner ( );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC );
	void Destroyed ( );
	void HideProjectile ( );
	void eventTornOff ( );
	void ShutDown ( );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
	void SpawnFlightEffects ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void Init ( struct FVector Direction );
	void eventSetInitialState ( );
	void PostBeginPlay ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
};

UClass* AMobileProjectile::pClassPointer = NULL;

// Class UDKBase.SeqAct_MobileCrowdSpawner
// 0x0000 (0x013C - 0x013C)
class USeqAct_MobileCrowdSpawner : public USeqAct_GameCrowdSpawner
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39888 ];

		return pClassPointer;
	};

};

UClass* USeqAct_MobileCrowdSpawner::pClassPointer = NULL;

// Class UDKBase.UDKAnimNodeSequenceByBoneRotation
// 0x0018 (0x0158 - 0x0140)
class UUDKAnimNodeSequenceByBoneRotation : public UAnimNodeSequence
{
public:
	struct FName                                       BoneName;                                         		// 0x0140 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BoneAxis;                                         		// 0x0148 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAnimByRotation >                   AnimList;                                         		// 0x014C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40065 ];

		return pClassPointer;
	};

	void eventOnBecomeRelevant ( );
};

UClass* UUDKAnimNodeSequenceByBoneRotation::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif