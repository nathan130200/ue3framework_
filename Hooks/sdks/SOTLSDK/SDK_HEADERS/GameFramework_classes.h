/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_classes.h
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

#define CONST_LOADING_MOVIE_PREFIX                               "Loading_"
#define CONST_LOADING_MOVIE                                      "LoadingMovie"
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameCrowdAgent.EConformType
/*enum EConformType
{
	CFM_NavMesh                                        = 0,
	CFM_BSP                                            = 1,
	CFM_World                                          = 2,
	CFM_None                                           = 3,
	CFM_MAX                                            = 4
};*/

// Enum GameFramework.GameTypes.EShakeParam
/*enum EShakeParam
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_MAX                                            = 2
};*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/

// Enum GameFramework.GameStateObject.GameSessionType
/*enum GameSessionType
{
	GT_SessionInvalid                                  = 0,
	GT_SinglePlayer                                    = 1,
	GT_Coop                                            = 2,
	GT_Multiplayer                                     = 3,
	GT_MAX                                             = 4
};*/

// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
/*enum ECameraViewportTypes
{
	CVT_16to9_Full                                     = 0,
	CVT_16to9_VertSplit                                = 1,
	CVT_16to9_HorizSplit                               = 2,
	CVT_4to3_Full                                      = 3,
	CVT_4to3_HorizSplit                                = 4,
	CVT_4to3_VertSplit                                 = 5,
	CVT_MAX                                            = 6
};*/

// Enum GameFramework.MobileInputZone.EZoneTouchEvent
/*enum EZoneTouchEvent
{
	ZoneEvent_Touch                                    = 0,
	ZoneEvent_Update                                   = 1,
	ZoneEvent_Stationary                               = 2,
	ZoneEvent_UnTouch                                  = 3,
	ZoneEvent_Cancelled                                = 4,
	ZoneEvent_MAX                                      = 5
};*/

// Enum GameFramework.MobileInputZone.EZoneState
/*enum EZoneState
{
	ZoneState_Inactive                                 = 0,
	ZoneState_Activating                               = 1,
	ZoneState_Active                                   = 2,
	ZoneState_Deactivating                             = 3,
	ZoneState_MAX                                      = 4
};*/

// Enum GameFramework.MobileInputZone.EZoneType
/*enum EZoneType
{
	ZoneType_Button                                    = 0,
	ZoneType_Joystick                                  = 1,
	ZoneType_Trackball                                 = 2,
	ZoneType_MAX                                       = 3
};*/

// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
/*enum MenuImageDrawStyle
{
	IDS_Normal                                         = 0,
	IDS_Stretched                                      = 1,
	IDS_Tile                                           = 2,
	IDS_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.FrameworkGame
// 0x000C (0x0398 - 0x038C)
class AFrameworkGame : public AGameInfo
{
public:
	TArray< struct FRequiredMobileInputConfig >        RequiredMobileInputConfigs;                       		// 0x038C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1245 ];

		return pClassPointer;
	};

};

UClass* AFrameworkGame::pClassPointer = NULL;

// Class GameFramework.GameAIController
// 0x0024 (0x03C4 - 0x03A0)
class AGameAIController : public AAIController
{
public:
	class UGameAICommand*                              CommandList;                                      		// 0x03A0 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      bHasRunawayCommandList : 1;                       		// 0x03A4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bAILogging : 1;                                   		// 0x03A4 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAILogToWindow : 1;                               		// 0x03A4 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFlushAILogEachLine : 1;                          		// 0x03A4 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bMapBasedLogName : 1;                             		// 0x03A4 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIDrawDebug : 1;                                 		// 0x03A4 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIBroken : 1;                                    		// 0x03A4 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	class AFileLog*                                    AILogFile;                                        		// 0x03A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             AILogFilter;                                      		// 0x03AC (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DemoActionString;                                 		// 0x03B8 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1246 ];

		return pClassPointer;
	};

	struct FString GetActionString ( );
	bool GeneratePathToLocation ( struct FVector Goal, float WithinDistance, unsigned long bAllowPartialPath );
	bool GeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath );
	void SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime );
	void AILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce );
	void RecordDemoAILog ( struct FString LogText );
	void Destroyed ( );
	class UGameAICommand* GetAICommandInStack ( class UClass* InClass );
	class UGameAICommand* FindCommandOfClass ( class UClass* SearchClass );
	void DumpCommandStack ( );
	void CheckCommandCount ( );
	class UGameAICommand* GetActiveCommand ( );
	bool AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass );
	void PopCommand ( class UGameAICommand* ToBePoppedCommand );
	void PushCommand ( class UGameAICommand* NewCommand );
};

UClass* AGameAIController::pClassPointer = NULL;

// Class GameFramework.GameAICommand
// 0x001C (0x0058 - 0x003C)
class UGameAICommand : public UObject
{
public:
	class UGameAICommand*                              ChildCommand;                                     		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       ChildStatus;                                      		// 0x0040 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class AGameAIController*                           GameAIOwner;                                      		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       Status;                                           		// 0x004C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bAllowNewSameClassInstance : 1;                   		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReplaceActiveSameClassInstance : 1;              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAborted : 1;                                     		// 0x0054 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIgnoreNotifies : 1;                              		// 0x0054 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPendingPop : 1;                                  		// 0x0054 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1247 ];

		return pClassPointer;
	};

	void GetDebugOverheadText ( class APlayerController* PC, TArray< struct FString >* OutText );
	void DrawDebug ( class AHUD* H, struct FName Category );
	struct FString GetDumpString ( );
	void Resumed ( struct FName OldCommandName );
	void Paused ( class UGameAICommand* NewCommand );
	void Popped ( );
	void Pushed ( );
	void PostPopped ( );
	void PrePushed ( class AGameAIController* AI );
	bool AllowStateTransitionTo ( struct FName StateName );
	bool AllowTransitionTo ( class UClass* AttemptCommand );
	void Tick ( float DeltaTime );
	bool ShouldIgnoreNotifies ( );
	void InternalTick ( float DeltaTime );
	void InternalResumed ( struct FName OldCommandName );
	void InternalPaused ( class UGameAICommand* NewCommand );
	void InternalPopped ( );
	void InternalPushed ( );
	void InternalPrePushed ( class AGameAIController* AI );
	bool InitCommand ( class AGameAIController* AI );
	bool InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor );
};

UClass* UGameAICommand::pClassPointer = NULL;

// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x0238 - 0x0238)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1248 ];

		return pClassPointer;
	};

};

UClass* AGameCameraBlockingVolume::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgent
// 0x01D0 (0x03C8 - 0x01F8)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	class UGameCrowdGroup*                             MyGroup;                                          		// 0x01F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     PreferredVelocity;                                		// 0x01FC (0x000C) [0x0000000000000000]              
	float                                              AvoidanceShare;                                   		// 0x0208 (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       CurrentDestination;                               		// 0x020C (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       BehaviorDestination;                              		// 0x0210 (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       PreviousDestination;                              		// 0x0214 (0x0004) [0x0000000000000000]              
	struct FVector                                     ExternalForce;                                    		// 0x0218 (0x000C) [0x0000000000000000]              
	float                                              InterpZTranslation;                               		// 0x0224 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeadBodyDuration;                                 		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0230 (0x0004) [0x00000000040A000A]              ( CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	int                                                ConformTraceFrameCount;                           		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                AwareUpdateFrameCount;                            		// 0x0238 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AActor* >                            NearbyDynamics;                                   		// 0x023C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class AGameCrowdForcePoint* >              RelevantAttractors;                               		// 0x0248 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bUniformScale : 1;                                		// 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCheckForObstacles : 1;                           		// 0x0254 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseNavMeshPathing : 1;                           		// 0x0254 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bWantsSeePlayerNotification : 1;                  		// 0x0254 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAllowPitching : 1;                               		// 0x0254 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bHitObstacle : 1;                                 		// 0x0254 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBadHitNormal : 1;                                		// 0x0254 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bSimulateThisTick : 1;                            		// 0x0254 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bClampMovementSpeed : 1;                          		// 0x0254 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bPotentialEncounter : 1;                          		// 0x0254 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bIsPanicked : 1;                                  		// 0x0254 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bWantsGroupIdle : 1;                              		// 0x0254 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bPreferVisibleDestination : 1;                    		// 0x0254 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bPreferVisibleDestinationOnSpawn : 1;             		// 0x0254 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bHasNotifiedSpawner : 1;                          		// 0x0254 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bIsInSpawnPool : 1;                               		// 0x0254 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bIsDamageByPlayerDisabled : 1;                    		// 0x0254 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned char                                      ConformType;                                      		// 0x0258 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConformTraceDist;                                 		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ConformTraceInterval;                             		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentConformTraceInterval;                      		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              LastGroundZ;                                      		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              AwareRadius;                                      		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AwareUpdateInterval;                              		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AvoidOtherStrength;                               		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AvoidPlayerStrength;                              		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AvoidOtherRadius;                                 		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GroupAttractionStrength;                          		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MatchVelStrength;                                 		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FollowPathStrength;                               		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelocityDamping;                                  		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotateToTargetSpeed;                              		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxYawRate;                                       		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshMinScale3D;                                   		// 0x0298 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MeshMaxScale3D;                                   		// 0x02A4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              EyeZOffset;                                       		// 0x02B0 (0x0004) [0x0000000000000000]              
	float                                              ProximityLODDist;                                 		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VisibleProximityLODDist;                          		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastKnownGoodPosition;                            		// 0x02BC (0x000C) [0x0000000000000000]              
	float                                              GroundOffset;                                     		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     IntermediatePoint;                                		// 0x02CC (0x000C) [0x0000000000000000]              
	struct FVector                                     SearchExtent;                                     		// 0x02D8 (0x000C) [0x0000000000000000]              
	int                                                ObstacleCheckCount;                               		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              WalkableFloorZ;                                   		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              LastPathingAttempt;                               		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              LastUpdateTime;                                   		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              NotVisibleLifeSpan;                               		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NotVisibleTickScalingFactor;                      		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdAgent*                             MyArchetype;                                      		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              MaxWalkingSpeed;                                  		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRunningSpeed;                                  		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x0308 (0x0004) [0x0000000000000000]              
	TArray< struct FRecentInteraction >                RecentInteractions;                               		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BeaconMaxDist;                                    		// 0x0318 (0x0004) [0x0000000000000000]              
	struct FVector                                     BeaconOffset;                                     		// 0x031C (0x000C) [0x0000000000000000]              
	class UTexture2D*                                  BeaconTexture;                                    		// 0x0328 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FLinearColor                                BeaconColor;                                      		// 0x032C (0x0010) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   AmbientSoundCue;                                  		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             AmbientSoundComponent;                            		// 0x0340 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UGameCrowdAgentBehavior*                     CurrentBehavior;                                  		// 0x0344 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    EncounterAgentBehaviors;                          		// 0x0348 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    SeePlayerBehaviors;                               		// 0x0354 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxSeePlayerDistSq;                               		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              SeePlayerInterval;                                		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBehaviorEntry >                    SpawnBehaviors;                                   		// 0x0368 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    PanicBehaviors;                                   		// 0x0374 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FBehaviorEntry >                    RandomBehaviors;                                  		// 0x0380 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RandomBehaviorInterval;                           		// 0x038C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ForceUpdateTime;                                  		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              ReachThreshold;                                   		// 0x0394 (0x0004) [0x0000000000000000]              
	TArray< struct FBehaviorEntry >                    GroupWaitingBehaviors;                            		// 0x0398 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DesiredGroupRadius;                               		// 0x03A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DesiredGroupRadiusSq;                             		// 0x03A8 (0x0004) [0x0000000000000000]              
	float                                              MaxLOSLifeDistanceSq;                             		// 0x03AC (0x0004) [0x0000000000000000]              
	class UGameCrowdSpawnerInterface*                  MySpawner;                                        		// 0x03B0 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x03B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FVector                                     SpawnOffset;                                      		// 0x03B8 (0x000C) [0x0000000000000000]              
	float                                              InitialLastRenderTime;                            		// 0x03C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1249 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	struct FString GetDestString ( );
	void PostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void OverlappedActorEvent ( class AActor* A );
	void TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void FireDeathEvent ( );
	void PlayDeath ( struct FVector KillMomentum );
	void UpdateIntermediatePoint ( class AActor* DestinationActor );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool IsIdle ( );
	void SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype );
	void StopBehavior ( );
	void ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject );
	void ActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype );
	void ResetSeePlayer ( );
	void TryRandomBehavior ( );
	void NotifySeePlayer ( class APlayerController* PC );
	void PlaySpawnBehavior ( );
	void HandlePotentialAgentEncounter ( );
	void StopIdleAnimation ( );
	void PlayIdleAnimation ( );
	void OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action );
	void InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, unsigned long bWarmupPosition, unsigned long bCheckWarmupVisibility );
	void SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void Destroyed ( );
	void ResetPooledAgent ( );
	void KillAgent ( );
	void PostBeginPlay ( );
	void SetMaxSpeed ( );
	void SetCurrentDestination ( class AGameCrowdDestination* NewDest );
	void WaitForGroupMembers ( );
	bool PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc );
	void SetPanic ( class AActor* PanicActor, unsigned long bNewPanic );
	bool IsPanicked ( );
	void FellOutOfWorld ( class UClass* dmgType );
};

UClass* AGameCrowdAgent::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentSkeletal
// 0x0080 (0x0448 - 0x03C8)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                            		// 0x03C8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeBlend*                              SpeedBlendNode;                                   		// 0x03CC (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               FullBodySlot;                                     		// 0x03D0 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           ActionSeqNode;                                    		// 0x03D4 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           WalkSeqNode;                                      		// 0x03D8 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RunSeqNode;                                       		// 0x03DC (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   AgentTree;                                        		// 0x03E0 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             WalkAnimNames;                                    		// 0x03E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             RunAnimNames;                                     		// 0x03F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             IdleAnimNames;                                    		// 0x03FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             DeathAnimNames;                                   		// 0x0408 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              SpeedBlendStart;                                  		// 0x0414 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedBlendEnd;                                    		// 0x0418 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimVelRate;                                      		// 0x041C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeedBlendChangeSpeed;                         		// 0x0420 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MoveSyncGroupName;                                		// 0x0424 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FGameCrowdAttachmentList >          Attachments;                                      		// 0x042C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MaxTargetAcquireTime;                             		// 0x0438 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotionVelocity : 1;                       		// 0x043C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsPlayingIdleAnimation : 1;                      		// 0x043C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsPlayingDeathAnimation : 1;                     		// 0x043C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAnimateThisTick : 1;                             		// 0x043C (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MaxAnimationDistance;                             		// 0x0440 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAnimationDistanceSq;                           		// 0x0444 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1250 ];

		return pClassPointer;
	};

	void CreateAttachments ( );
	void OnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopIdleAnimation ( );
	void PlayIdleAnimation ( );
	void ClearLatentAnimation ( );
	void OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action );
	void SetRootMotion ( unsigned long bRootMotionEnabled );
	void PlayDeath ( struct FVector KillMomentum );
	void SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows );
	void PostBeginPlay ( );
};

UClass* AGameCrowdAgentSkeletal::pClassPointer = NULL;

// Class GameFramework.GameCrowdAgentBehavior
// 0x0010 (0x004C - 0x003C)
class UGameCrowdAgentBehavior : public UObject
{
public:
	unsigned long                                      bIdleBehavior : 1;                                		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsViralBehavior : 1;                             		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsPanicked : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	class AActor*                                      ActionTarget;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              MaxPlayerDistance;                                		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdAgent*                             MyAgent;                                          		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1251 ];

		return pClassPointer;
	};

	bool AllowBehaviorAt ( class AGameCrowdDestination* Destination );
	bool AllowThisDestination ( class AGameCrowdDestination* Destination );
	void PropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent );
	void ActivatedBy ( class AActor* NewActionTarget );
	class AActor* GetDestinationActor ( );
	void ChangingDestination ( class AGameCrowdDestination* NewDest );
	struct FString GetBehaviorString ( );
	void OnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopBehavior ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
	bool HandleMovement ( );
	void FinishedTargetRotation ( );
	bool CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector CameraLoc );
	void Tick ( float DeltaTime );
	bool ShouldEndIdle ( );
};

UClass* UGameCrowdAgentBehavior::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_PlayAnimation
// 0x002C (0x0078 - 0x004C)
class UGameCrowdBehavior_PlayAnimation : public UGameCrowdAgentBehavior
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotion : 1;                               		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLookAtPlayer : 1;                                		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x0060 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class AActor*                                      CustomActionTarget;                               		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                LoopIndex;                                        		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopTime;                                         		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USeqAct_PlayAgentAnimation*                  AnimSequence;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                AnimationIndex;                                   		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1252 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	void StopBehavior ( );
	void PlayAgentAnimationNow ( );
	void OnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void SetSequenceOutput ( );
	void FinishedTargetRotation ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdBehavior_PlayAnimation::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_RunFromPanic
// 0x0004 (0x0050 - 0x004C)
class UGameCrowdBehavior_RunFromPanic : public UGameCrowdAgentBehavior
{
public:
	class AActor*                                      PanicFocus;                                       		// 0x004C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1253 ];

		return pClassPointer;
	};

	struct FString GetBehaviorString ( );
	bool AllowBehaviorAt ( class AGameCrowdDestination* Destination );
	bool AllowThisDestination ( class AGameCrowdDestination* Destination );
	void PropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent );
	void StopBehavior ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
	void ActivatedBy ( class AActor* NewActionTarget );
};

UClass* UGameCrowdBehavior_RunFromPanic::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_WaitForGroup
// 0x0000 (0x004C - 0x004C)
class UGameCrowdBehavior_WaitForGroup : public UGameCrowdAgentBehavior
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1254 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	bool ShouldEndIdle ( );
	struct FString GetBehaviorString ( );
	void InitBehavior ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdBehavior_WaitForGroup::pClassPointer = NULL;

// Class GameFramework.GameCrowdBehavior_WaitInQueue
// 0x0008 (0x0054 - 0x004C)
class UGameCrowdBehavior_WaitInQueue : public UGameCrowdAgentBehavior
{
public:
	unsigned long                                      bStoppingBehavior : 1;                            		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	class AGameCrowdDestinationQueuePoint*             QueuePosition;                                    		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1255 ];

		return pClassPointer;
	};

	void StopBehavior ( );
	bool ShouldEndIdle ( );
	struct FString GetBehaviorString ( );
	class AActor* GetDestinationActor ( );
	void ChangingDestination ( class AGameCrowdDestination* NewDest );
	bool HandleMovement ( );
};

UClass* UGameCrowdBehavior_WaitInQueue::pClassPointer = NULL;

// Class GameFramework.GameCrowdGroup
// 0x000C (0x0048 - 0x003C)
class UGameCrowdGroup : public UObject
{
public:
	TArray< class AGameCrowdAgent* >                   Members;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1256 ];

		return pClassPointer;
	};

	void UpdateDestinations ( class AGameCrowdDestination* NewDestination );
	void RemoveMember ( class AGameCrowdAgent* Agent );
	void AddMember ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdGroup::pClassPointer = NULL;

// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x0200 - 0x01F8)
class AGameCrowdInteractionPoint : public AActor
{
public:
	unsigned long                                      bIsEnabled : 1;                                   		// 0x01F8 (0x0004) [0x0000000000000021] [0x00000001] ( CPF_Edit | CPF_Net )
	class UCylinderComponent*                          CylinderComponent;                                		// 0x01FC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1257 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
};

UClass* AGameCrowdInteractionPoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdDestination
// 0x0084 (0x0284 - 0x0200)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;            		// 0x0200 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bKillWhenReached : 1;                             		// 0x0204 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowAsPreviousDestination : 1;                  		// 0x0204 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLastAllowableResult : 1;                         		// 0x0204 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAvoidWhenPanicked : 1;                           		// 0x0204 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSkipBehaviorIfPanicked : 1;                      		// 0x0204 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bFleeDestination : 1;                             		// 0x0204 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bMustReachExactly : 1;                            		// 0x0204 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bHasRestrictions : 1;                             		// 0x0204 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bAllowsSpawning : 1;                              		// 0x0204 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bLineSpawner : 1;                                 		// 0x0204 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bSpawnAtEdge : 1;                                 		// 0x0204 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bSoftPerimeter : 1;                               		// 0x0204 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bIsVisible : 1;                                   		// 0x0204 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bWillBeVisible : 1;                               		// 0x0204 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bCanSpawnHereNow : 1;                             		// 0x0204 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bIsBeyondSpawnDistance : 1;                       		// 0x0204 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bAdjacentToVisibleNode : 1;                       		// 0x0204 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bHasNavigationMesh : 1;                           		// 0x0204 (0x0004) [0x0000000000000000] [0x00020000] 
	TArray< class AGameCrowdDestination* >             NextDestinations;                                 		// 0x0208 (0x000C) [0x0000000000600001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                        		// 0x0214 (0x0004) [0x0000000000200001]              ( CPF_Edit )
	int                                                Capacity;                                         		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Frequency;                                        		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CustomerCount;                                    		// 0x0220 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            SupportedAgentClasses;                            		// 0x0224 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           SupportedArchetypes;                              		// 0x0230 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            RestrictedAgentClasses;                           		// 0x023C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           RestrictedArchetypes;                             		// 0x0248 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ExactReachTolerance;                              		// 0x0254 (0x0004) [0x0000000000000000]              
	struct FName                                       InteractionTag;                                   		// 0x0258 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InteractionDelay;                                 		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnRadius;                                      		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FBehaviorEntry >                    ReachedBehaviors;                                 		// 0x0268 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AGameCrowdAgent*                             AgentEnRoute;                                     		// 0x0274 (0x0004) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x0278 (0x0004) [0x0000000000000000]              
	float                                              LastSpawnTime;                                    		// 0x027C (0x0004) [0x0000000000000000]              
	class AGameCrowdPopulationManager*                 MyPopMgr;                                         		// 0x0280 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1258 ];

		return pClassPointer;
	};

	void GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot );
	bool AllowableDestinationFor ( class AGameCrowdAgent* Agent );
	bool AtCapacity ( );
	void IncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent );
	void DecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent );
	void PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions );
	void ReachedDestination ( class AGameCrowdAgent* Agent );
	void Destroyed ( );
	void PostBeginPlay ( );
	bool ReachedByAgent ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly );
};

UClass* AGameCrowdDestination::pClassPointer = NULL;

// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x001C (0x021C - 0x0200)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                                		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                            		// 0x0204 (0x0004) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueuedAgent;                                      		// 0x0208 (0x0004) [0x0000000000000000]              
	class AGameCrowdDestination*                       QueueDestination;                                 		// 0x020C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bClearingQueue : 1;                               		// 0x0210 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPendingAdvance : 1;                              		// 0x0210 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AverageReactionTime;                              		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      QueueBehaviorClass;                               		// 0x0218 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1259 ];

		return pClassPointer;
	};

	bool HasCustomer ( );
	void ClearQueue ( class AGameCrowdAgent* OldCustomer );
	void AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition );
	void ActuallyAdvance ( );
	void AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition );
	void ReachedDestination ( class AGameCrowdAgent* Agent );
	bool HasSpace ( );
	bool QueueReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition );
};

UClass* AGameCrowdDestinationQueuePoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdForcePoint
// 0x0000 (0x0200 - 0x0200)
class AGameCrowdForcePoint : public AGameCrowdInteractionPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1260 ];

		return pClassPointer;
	};

	struct FVector AppliedForce ( class AGameCrowdAgent* Agent );
	void UnTouch ( class AActor* Other );
	void Touch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AGameCrowdForcePoint::pClassPointer = NULL;

// Class GameFramework.GameCrowdAttractor
// 0x0008 (0x0208 - 0x0200)
class AGameCrowdAttractor : public AGameCrowdForcePoint
{
public:
	float                                              Attraction;                                       		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttractionFalloff : 1;                           		// 0x0204 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1261 ];

		return pClassPointer;
	};

	struct FVector AppliedForce ( class AGameCrowdAgent* Agent );
};

UClass* AGameCrowdAttractor::pClassPointer = NULL;

// Class GameFramework.GameCrowdRepulsor
// 0x0008 (0x0208 - 0x0200)
class AGameCrowdRepulsor : public AGameCrowdForcePoint
{
public:
	float                                              Repulsion;                                        		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAttractionFalloff : 1;                           		// 0x0204 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1262 ];

		return pClassPointer;
	};

	struct FVector AppliedForce ( class AGameCrowdAgent* Agent );
};

UClass* AGameCrowdRepulsor::pClassPointer = NULL;

// Class GameFramework.GameCrowdPopulationManager
// 0x008C (0x0284 - 0x01F8)
class AGameCrowdPopulationManager : public ACrowdPopulationManagerBase
{
public:
	unsigned long                                      bSpawningActive : 1;                              		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                 		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCastShadows : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bForceObstacleChecking : 1;                       		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bForceNavMeshPathing : 1;                         		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHaveInitialPopulation : 1;                       		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bWarmupPosition : 1;                              		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              SpawnRate;                                        		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                SpawnNum;                                         		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              SplitScreenNumReduction;                          		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              Remainder;                                        		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              AgentFrequencySum;                                		// 0x020C (0x0004) [0x0000000000000000]              
	TArray< struct FAgentArchetypeInfo >               AgentArchetypes;                                  		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AGameCrowdAgent* >                   AgentPool;                                        		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxAgentPoolSize;                                 		// 0x0228 (0x0004) [0x0000000000000000]              
	int                                                AgentCount;                                       		// 0x022C (0x0004) [0x0000000000000000]              
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x0230 (0x0004) [0x0000000000000000]              
	float                                              AgentWarmupTime;                                  		// 0x0234 (0x0004) [0x0000000000000000]              
	float                                              SpawnPrioritizationInterval;                      		// 0x0238 (0x0004) [0x0000000000000000]              
	int                                                PrioritizationIndex;                              		// 0x023C (0x0004) [0x0000000000000000]              
	int                                                PrioritizationUpdateIndex;                        		// 0x0240 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PrioritizedSpawnPoints;                           		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              PlayerPositionPredictionTime;                     		// 0x0250 (0x0004) [0x0000000000000000]              
	TArray< class AGameCrowdDestination* >             PotentialSpawnPoints;                             		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxSpawnDist;                                     		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDistSq;                                   		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              MinBehindSpawnDistSq;                             		// 0x0268 (0x0004) [0x0000000000000000]              
	int                                                SpawnedCount;                                     		// 0x026C (0x0004) [0x0000000000000000]              
	int                                                PoolCount;                                        		// 0x0270 (0x0004) [0x0000000000000000]              
	int                                                KilledCount;                                      		// 0x0274 (0x0004) [0x0000000000000000]              
	float                                              HeadVisibilityOffset;                             		// 0x0278 (0x0004) [0x0000000000000000]              
	float                                              InitialPopulationPct;                             		// 0x027C (0x0004) [0x0000000000000000]              
	class AGameCrowdAgent*                             QueryingAgent;                                    		// 0x0280 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1263 ];

		return pClassPointer;
	};

	class AGameCrowdAgent* CreateNewAgent ( class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup );
	class AGameCrowdAgent* SpawnAgent ( class AGameCrowdDestination* SpawnLoc );
	bool ValidateSpawnAt ( class AGameCrowdDestination* Candidate );
	void AddPrioritizedSpawnPoint ( class AGameCrowdDestination* GCD, struct FVector ViewLocation );
	void AnalyzeSpawnPoints ( int StartIndex, int StopIndex, struct FVector ViewLocation, struct FVector PredictionLocation );
	void PrioritizeSpawnPoints ( float DeltaSeconds );
	class AGameCrowdDestination* PickSpawnPoint ( );
	void Tick ( float DeltaSeconds );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	bool AddToAgentPool ( class AGameCrowdAgent* Agent );
	void AgentDestroyed ( class AGameCrowdAgent* Agent );
	void FlushAgents ( );
	void OnGameCrowdPopulationManagerToggle ( class USeqAct_GameCrowdPopulationManagerToggle* inAction );
	void RemoveSpawnPoint ( class AGameCrowdDestination* GCD );
	void AddSpawnPoint ( class AGameCrowdDestination* GCD );
	float GetMaxSpawnDist ( );
	void NotifyPathChanged ( );
	void PostBeginPlay ( );
};

UClass* AGameCrowdPopulationManager::pClassPointer = NULL;

// Class GameFramework.GameCrowdReplicationActor
// 0x000C (0x0204 - 0x01F8)
class AGameCrowdReplicationActor : public AActor
{
public:
	class USeqAct_GameCrowdSpawner*                    Spawner;                                          		// 0x01F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bSpawningActive : 1;                              		// 0x01FC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	int                                                DestroyAllCount;                                  		// 0x0200 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1264 ];

		return pClassPointer;
	};

	void ReplicatedEvent ( struct FName VarName );
};

UClass* AGameCrowdReplicationActor::pClassPointer = NULL;

// Class GameFramework.GameDamageType
// 0x003C (0x00C4 - 0x0088)
class UGameDamageType : public UDamageType
{
public:
	class UMaterialInterface*                          MI_DamageOverlay;                                 		// 0x0088 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class USoundCue*                                   ExtraSoundToPlayWhenDamaged;                      		// 0x008C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bEnvironmentalDamage : 1;                         		// 0x0090 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bHighKickDeathAnimation : 1;                      		// 0x0090 (0x0004) [0x0000000000004002] [0x00000002] ( CPF_Const | CPF_Config )
	unsigned long                                      bForceRagdollDeath : 1;                           		// 0x0090 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bSuppressImpactFX : 1;                            		// 0x0090 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bSuppressBloodDecals : 1;                         		// 0x0090 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bSuppressPlayExplosiveRadialDamageEffects : 1;    		// 0x0090 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      bAllowHeadShotGib : 1;                            		// 0x0090 (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	float                                              DistFromHitLocToGib;                              		// 0x0094 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	struct FCanvasIcon                                 KilledByIcon;                                     		// 0x0098 (0x0014) [0x0000000000000002]              ( CPF_Const )
	struct FCanvasIcon                                 HeadshotIcon;                                     		// 0x00AC (0x0014) [0x0000000000000002]              ( CPF_Const )
	float                                              IconScale;                                        		// 0x00C0 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1265 ];

		return pClassPointer;
	};

	void HandleDamageFX ( class AGamePawn* DamagedPawn, struct FTakeHitInfo* HitInfo );
	bool ShouldHeadShotGib ( class APawn* TestPawn, class APawn* Instigator );
	void PlayExtraDamageSound ( class APawn* VictimPawn );
	bool IsScriptedDamageType ( );
	bool ShouldPlayForceFeedback ( class APawn* DamagedPawn );
	void HandleDeadPlayer ( class AGamePlayerController* Player );
	void HandleKilledPawn ( class APawn* KilledPawn, class APawn* Instigator );
	void HandleDamagedPawn ( class APawn* DamagedPawn, class APawn* Instigator, int DamageAmt, struct FVector Momentum );
	void ModifyDamage ( class APawn* Victim, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* out_Damage, struct FVector* out_Momentum );
	bool ShouldGib ( class APawn* TestPawn, class APawn* Instigator );
};

UClass* UGameDamageType::pClassPointer = NULL;

// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x0200 - 0x0200)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1266 ];

		return pClassPointer;
	};

};

UClass* UGameDestinationConnRenderingComponent::pClassPointer = NULL;

// Class GameFramework.GameExplosion
// 0x00A8 (0x00E4 - 0x003C)
class UGameExplosion : public UObject
{
public:
	unsigned long                                      bDirectionalExplosion : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAllowTeammateCringes : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bFullDamageToAttachee : 1;                        		// 0x003C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;            		// 0x003C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCausesFracture : 1;                              		// 0x003C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAllowPerMaterialFX : 1;                          		// 0x003C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;		// 0x003C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bUseMapSpecificValues : 1;                        		// 0x003C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bUseOverlapCheck : 1;                             		// 0x003C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x003C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x003C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	float                                              DirectionalExplosionAngleDeg;                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageDelay;                                      		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFalloffExponent;                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActorToIgnoreForDamage;                           		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;        		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownRadius;                                  		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownStrength;                                		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CringeRadius;                                     		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CringeDuration;                                   		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumTransferScale;                            		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionEmitterScale;                            		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      HitActor;                                         		// 0x0084 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0088 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0094 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPointLightComponent*                        ExploLight;                                       		// 0x00A4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x00AC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExploRadialBlurMaxBlur;                           		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FractureMeshRadius;                               		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FracturePartVel;                                  		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraShake*                                CamShake;                                         		// 0x00C0 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Left;                                    		// 0x00C4 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Right;                                   		// 0x00C8 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UCameraShake*                                CamShake_Rear;                                    		// 0x00CC (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              CamShakeInnerRadius;                              		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamShakeOuterRadius;                              		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamShakeFalloff;                                  		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      CameraLensEffect;                                 		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraLensEffectRadius;                           		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1267 ];

		return pClassPointer;
	};

};

UClass* UGameExplosion::pClassPointer = NULL;

// Class GameFramework.GameExplosionActor
// 0x0058 (0x0250 - 0x01F8)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                 		// 0x01F8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bDrawDebug : 1;                                   		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	class UPointLightComponent*                        ExplosionLight;                                   		// 0x01FC (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              LightFadeTime;                                    		// 0x0200 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightFadeTimeRemaining;                           		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightInitialBrightness;                           		// 0x0208 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class URadialBlurComponent*                        ExplosionRadialBlur;                              		// 0x020C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              RadialBlurFadeTime;                               		// 0x0210 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurFadeTimeRemaining;                      		// 0x0214 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RadialBlurMaxBlurAmount;                          		// 0x0218 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x021C (0x0004) [0x0000000000000000]              
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x0220 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AController*                                 InstigatorController;                             		// 0x0224 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActorFromPhysMaterialTrace;                    		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocationFromPhysMaterialTrace;                 		// 0x022C (0x000C) [0x0000000000000000]              
	class AActor*                                      Attachee;                                         		// 0x0238 (0x0004) [0x0000000000000000]              
	class AController*                                 AttacheeController;                               		// 0x023C (0x0004) [0x0000000000000000]              
	float                                              DirectionalExplosionMinDot;                       		// 0x0240 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ExplosionDirection;                               		// 0x0244 (0x000C) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1268 ];

		return pClassPointer;
	};

	class UCameraShake* ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC );
	void SpawnCameraLensEffects ( );
	void DoExplosionCameraEffects ( );
	void Tick ( float DeltaTime );
	void DrawDebug ( );
	void DelayedExplosionDamage ( );
	void Explode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction );
	void SpawnExplosionFogVolume ( );
	void SpawnExplosionDecal ( );
	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
	void UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial );
	void SpecialPawnEffectsFor ( class AGamePawn* VictimPawn, float VictimDist );
	float GetEffectCheckRadius ( );
	void DoExplosionDamage ( unsigned long bCauseDamage, unsigned long bCauseEffects );
	float BoxDistanceToPoint ( struct FVector Start, struct FBox BBox );
	bool IsBehindExplosion ( class AActor* A );
	bool DoFullDamageToActor ( class AActor* Victim );
	class UPhysicalMaterial* GetPhysicalMaterial ( );
	void PreBeginPlay ( );
};

UClass* AGameExplosionActor::pClassPointer = NULL;

// Class GameFramework.GamePawn
// 0x0004 (0x0474 - 0x0470)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bLastHitWasHeadShot : 1;                          		// 0x0470 (0x0004) [0x0000000000002020] [0x00000001] ( CPF_Net | CPF_Transient )
	unsigned long                                      bRespondToExplosions : 1;                         		// 0x0470 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1269 ];

		return pClassPointer;
	};

	void ReattachMeshWithoutBeingSeen ( );
	void ReattachMesh ( );
	void UpdateShadowSettings ( unsigned long bInWantShadow );
};

UClass* AGamePawn::pClassPointer = NULL;

// Class GameFramework.GamePlayerController
// 0x0010 (0x05B0 - 0x05A0)
class AGamePlayerController : public APlayerController
{
public:
	unsigned long                                      bWarnCrowdMembers : 1;                            		// 0x05A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugCrowdAwareness : 1;                         		// 0x05A0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsWarmupPaused : 1;                              		// 0x05A0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              AgentAwareRadius;                                 		// 0x05A4 (0x0004) [0x0000000000000000]              
	struct FName                                       CurrentSoundMode;                                 		// 0x05A8 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1270 ];

		return pClassPointer;
	};

	void ClientColorFade ( struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime );
	void WarmupPause ( unsigned long bDesiredPauseState );
	bool CanUnpauseWarmup ( );
	void GetCurrentMovie ( struct FString* MovieName );
	void ClientStopMovie ( float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie );
	void ClientPlayMovie ( struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame );
	void KeepPlayingLoadingMovie ( );
	void ShowLoadingMovie ( unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays, struct FString PendingURL );
	struct FName GetCurrentSoundMode ( );
	void SetSoundMode ( struct FName InSoundModeName );
	void DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale );
	void NotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent );
	void NotifyCrowdAgentRefresh ( );
	void CrowdDebug ( unsigned long bEnabled );
	void CrowdToggle ( );
	void CrowdFocus ( );
	int GetUIPlayerIndex ( );
};

UClass* AGamePlayerController::pClassPointer = NULL;

// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1271 ];

		return pClassPointer;
	};

};

UClass* UGameTypes::pClassPointer = NULL;

// Class GameFramework.MobileHUD
// 0x0090 (0x0510 - 0x0480)
class AMobileHUD : public AHUD
{
public:
	unsigned long                                      bShowGameHud : 1;                                 		// 0x0480 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bShowMobileHud : 1;                               		// 0x0480 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bForceMobileHUD : 1;                              		// 0x0480 (0x0004) [0x0000000000044000] [0x00000004] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowMobileTilt : 1;                              		// 0x0480 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bDebugTouches : 1;                                		// 0x0480 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bDebugZones : 1;                                  		// 0x0480 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bDebugZonePresses : 1;                            		// 0x0480 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	class UTexture2D*                                  JoystickBackground;                               		// 0x0484 (0x0004) [0x0000000000000000]              
	struct FTextureUVs                                 JoystickBackgroundUVs;                            		// 0x0488 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  JoystickHat;                                      		// 0x0498 (0x0004) [0x0000000000000000]              
	struct FTextureUVs                                 JoystickHatUVs;                                   		// 0x049C (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  ButtonImages[ 0x2 ];                              		// 0x04AC (0x0008) [0x0000000000000000]              
	struct FTextureUVs                                 ButtonUVs[ 0x2 ];                                 		// 0x04B4 (0x0020) [0x0000000000000000]              
	class UFont*                                       ButtonFont;                                       		// 0x04D4 (0x0004) [0x0000000000000000]              
	struct FColor                                      ButtonCaptionColor;                               		// 0x04D8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  TrackballBackground;                              		// 0x04DC (0x0004) [0x0000000000000000]              
	struct FTextureUVs                                 TrackballBackgroundUVs;                           		// 0x04E0 (0x0010) [0x0000000000000000]              
	class UTexture2D*                                  TrackballTouchIndicator;                          		// 0x04F0 (0x0004) [0x0000000000000000]              
	struct FTextureUVs                                 TrackballTouchIndicatorUVs;                       		// 0x04F4 (0x0010) [0x0000000000000000]              
	float                                              MobileTiltX;                                      		// 0x0504 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MobileTiltY;                                      		// 0x0508 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MobileTiltSize;                                   		// 0x050C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1272 ];

		return pClassPointer;
	};

	void DrawMobileTilt ( class UMobilePlayerInput* MobileInput );
	void DrawMobileZone_Trackball ( class UMobileInputZone* Zone );
	void DrawMobileZone_Joystick ( class UMobileInputZone* Zone );
	void DrawMobileZone_Button ( class UMobileInputZone* Zone );
	void DrawInputZoneOverlays ( );
	void RenderMobileMenu ( );
	void PostRender ( );
	void PostBeginPlay ( );
};

UClass* AMobileHUD::pClassPointer = NULL;

// Class GameFramework.MobileInputZone
// 0x0120 (0x015C - 0x003C)
class UMobileInputZone : public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x003C (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      State;                                            		// 0x003D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Caption;                                          		// 0x0040 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FName                                       InputKey;                                         		// 0x004C (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FName                                       HorizontalInputKey;                               		// 0x0054 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FName                                       TapInputKey;                                      		// 0x005C (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FName                                       DoubleTapInputKey;                                		// 0x0064 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              VertMultiplier;                                   		// 0x006C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              HorizMultiplier;                                  		// 0x0070 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Acceleration;                                     		// 0x0074 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Smoothing;                                        		// 0x0078 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              EscapeVelocityStrength;                           		// 0x007C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bScalePawnMovement : 1;                           		// 0x0080 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeX : 1;                                   		// 0x0080 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeY : 1;                                   		// 0x0080 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeSizeX : 1;                               		// 0x0080 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRelativeSizeY : 1;                               		// 0x0080 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIsInvisible : 1;                                 		// 0x0080 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bQuickDoubleTap : 1;                              		// 0x0080 (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )
	unsigned long                                      bCenterOnTouch : 1;                               		// 0x0080 (0x0004) [0x0000000000004001] [0x00000080] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFloatingTiltZone : 1;                            		// 0x0080 (0x0004) [0x0000000000004001] [0x00000100] ( CPF_Edit | CPF_Config )
	unsigned long                                      bUseGentleTransitions : 1;                        		// 0x0080 (0x0004) [0x0000000000004001] [0x00000200] ( CPF_Edit | CPF_Config )
	unsigned long                                      bRenderGuides : 1;                                		// 0x0080 (0x0004) [0x0000000000004001] [0x00000400] ( CPF_Edit | CPF_Config )
	unsigned long                                      bIsDoubleTapAndHold : 1;                          		// 0x0080 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	float                                              X;                                                		// 0x0084 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Y;                                                		// 0x0088 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SizeX;                                            		// 0x008C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SizeY;                                            		// 0x0090 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ActiveSizeX;                                      		// 0x0094 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ActiveSizeY;                                      		// 0x0098 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              Border;                                           		// 0x009C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ActivateTime;                                     		// 0x00A0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              DeactivateTime;                                   		// 0x00A4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FColor                                      RenderColor;                                      		// 0x00A8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InactiveAlpha;                                    		// 0x00AC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              CaptionXAdjustment;                               		// 0x00B0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              CaptionYAdjustment;                               		// 0x00B4 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FVector2D                                   InitialLocation;                                  		// 0x00B8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CurrentLocation;                                  		// 0x00C0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CurrentCenter;                                    		// 0x00C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   PreviousLocations[ 0x6 ];                         		// 0x00D0 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	float                                              PreviousMoveDeltaTimes[ 0x6 ];                    		// 0x0100 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	int                                                PreviousLocationCount;                            		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InitialTouchTime;                                 		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTouchTime;                                    		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TouchDuration;                                    		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransitionTime;                                   		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   EscapeVelocity;                                   		// 0x0130 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FScriptDelegate                             __OnProcessInputDelegate__Delegate;               		// 0x0138 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTapDelegate__Delegate;                        		// 0x0144 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDoubleTapDelegate__Delegate;                  		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1273 ];

		return pClassPointer;
	};

	bool OnDoubleTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	bool OnTapDelegate ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation );
	bool OnProcessInputDelegate ( class UMobileInputZone* Zone, float DeltaTime, int Handle, unsigned char EventType, struct FVector2D TouchLocation );
	void DeactivateZone ( );
	void ActivateZone ( );
};

UClass* UMobileInputZone::pClassPointer = NULL;

// Class GameFramework.MobileMenuObject
// 0x0044 (0x0080 - 0x003C)
class UMobileMenuObject : public UObject
{
public:
	unsigned long                                      bHasBeenInitialized : 1;                          		// 0x003C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bRelativeLeft : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRelativeTop : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRelativeWidth : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bRelativeHeight : 1;                              		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bXOffsetIsActual : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bYOffsetIsActual : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bIsActive : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsHidden : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bIsTouched : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000200] 
	float                                              Left;                                             		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              Top;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              XOffset;                                          		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              YOffset;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              RenderBounds[ 0x4 ];                              		// 0x0058 (0x0010) [0x0000000000000000]              
	struct FString                                     Tag;                                              		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              Opacity;                                          		// 0x0078 (0x0004) [0x0000000000000000]              
	class UMobileMenuScene*                            OwnerScene;                                       		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1274 ];

		return pClassPointer;
	};

	void RenderObject ( class UCanvas* Canvas );
};

UClass* UMobileMenuObject::pClassPointer = NULL;

// Class GameFramework.MobileMenuButton
// 0x005C (0x00DC - 0x0080)
class UMobileMenuButton : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Images[ 0x2 ];                                    		// 0x0080 (0x0008) [0x0000000000000000]              
	struct FUVCoords                                   ImagesUVs[ 0x2 ];                                 		// 0x0088 (0x0028) [0x0000000000000000]              
	struct FLinearColor                                ImageColor;                                       		// 0x00B0 (0x0010) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                CaptionColor;                                     		// 0x00CC (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1275 ];

		return pClassPointer;
	};

	void RenderCaption ( class UCanvas* Canvas );
	void RenderObject ( class UCanvas* Canvas );
};

UClass* UMobileMenuButton::pClassPointer = NULL;

// Class GameFramework.MobileMenuImage
// 0x002C (0x00AC - 0x0080)
class UMobileMenuImage : public UMobileMenuObject
{
public:
	class UTexture2D*                                  Image;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	unsigned char                                      ImageDrawStyle;                                   		// 0x0084 (0x0001) [0x0000000000000000]              
	struct FUVCoords                                   ImageUVs;                                         		// 0x0088 (0x0014) [0x0000000000000000]              
	struct FLinearColor                                ImageColor;                                       		// 0x009C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1276 ];

		return pClassPointer;
	};

	void RenderObject ( class UCanvas* Canvas );
};

UClass* UMobileMenuImage::pClassPointer = NULL;

// Class GameFramework.MobileMenuScene
// 0x0020 (0x005C - 0x003C)
class UMobileMenuScene : public UObject
{
public:
	struct FString                                     MenuName;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMobileMenuObject* >                 MenuObjects;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UFont*                                       SceneCaptionFont;                                 		// 0x0054 (0x0004) [0x0000000000000000]              
	class UMobilePlayerInput*                          InputOwner;                                       		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1277 ];

		return pClassPointer;
	};

	bool MobileMenuCommand ( struct FString Command );
	class UMobileMenuObject* FindMenuObject ( struct FString Tag );
	void CleanUpScene ( );
	void Closed ( );
	bool Closing ( );
	void Opened ( struct FString Mode );
	void OnTouch ( class UMobileMenuObject* Sender, float TouchX, float TouchY );
	void RenderScene ( class UCanvas* Canvas, float RenderDelta );
};

UClass* UMobileMenuScene::pClassPointer = NULL;

// Class GameFramework.MobilePlayerInput
// 0x0134 (0x02B0 - 0x017C)
class UMobilePlayerInput : public UPlayerInput
{
public:
	struct FTouchData                                  Touches[ 0x5 ];                                   		// 0x017C (0x00B4) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMobileInputGroup >                 MobileInputGroups;                                		// 0x0230 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	int                                                CurrentMobileGroup;                               		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                UserMobileGroup;                                  		// 0x0240 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                AttractGroup;                                     		// 0x0244 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< class UMobileInputZone* >                  MobileInputZones;                                 		// 0x0248 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	int                                                MobileInputMask;                                  		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSupportsAccelerometer : 1;                       		// 0x0258 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bFakeMobileTouches : 1;                           		// 0x0258 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              MobilePitch;                                      		// 0x025C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobilePitchCenter;                                		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobilePitchMultiplier;                            		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobileYaw;                                        		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobileYawCenter;                                  		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobileYawMultiplier;                              		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MobilePitchDeadzoneSize;                          		// 0x0274 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileYawDeadzoneSize;                            		// 0x0278 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileDoubleTapTime;                              		// 0x027C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileMinHoldForTap;                              		// 0x0280 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              MobileTapRepeatTime;                              		// 0x0284 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< class UMobileMenuScene* >                  MobileMenuStack;                                  		// 0x0288 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   UITouchSound;                                     		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NativeDebugString;                                		// 0x0298 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMobileTilt__Delegate;                         		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1278 ];

		return pClassPointer;
	};

	void OpenMobileMenuMode ( struct FString MenuClassName, struct FString Mode );
	void OpenMobileMenu ( struct FString MenuClassName );
	void MobileMenuCommand ( struct FString MenuCommand );
	void PreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel );
	void RenderMenus ( class UCanvas* Canvas, float RenderDelta );
	void CloseMenuScene ( class UMobileMenuScene* SceneToClose );
	class UMobileMenuScene* OpenMenuScene ( class UClass* SceneClass, struct FString Mode );
	void InitializeMenuScene ( class UMobileMenuScene* Scene );
	void StopUseAttractModeInputConfig ( );
	void StartUseAttractModeInputConfig ( );
	void PrevUserMobileInputConfig ( );
	void NextUserMobileInputConfig ( );
	void SetUserMobileInputConfig ( int ConfigIndex );
	TArray< class UMobileInputZone* > GetCurrentZones ( );
	bool HasZones ( );
	class UMobileInputZone* FindorAddZone ( struct FString ZoneName );
	class UMobileInputZone* FindZone ( struct FString ZoneName );
	void InitializeInputZones ( );
	void InitInputSystem ( );
	void SendInputAxis ( struct FName Key, float Delta, float DeltaTime );
	void SendInputKey ( struct FName Key, unsigned char Event, float AmountDepressed );
	void NativeInitializeInputZones ( );
	void NativeInitializeInputSystem ( );
	void OnMobileTilt ( class UPlayerInput* PlayerInput, float DeltaPitch, float DeltaYaw );
};

UClass* UMobilePlayerInput::pClassPointer = NULL;

// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x0118 - 0x0104)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                        		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StartOfRenderingMovieFrame;                       		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndOfRenderingMovieFrame;                         		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1279 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ControlGameMovie::pClassPointer = NULL;

// Class GameFramework.SeqAct_GameCrowdPopulationManagerToggle
// 0x001C (0x0110 - 0x00F4)
class USeqAct_GameCrowdPopulationManagerToggle : public USequenceAction
{
public:
	float                                              WarmupPct;                                        		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bKillAgentsInstantly : 1;                         		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bClearOldArchetypes : 1;                          		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                 		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCastShadows : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                   		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAgents;                                        		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnRate;                                        		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSimulationDistance;                            		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      PopulationManagerClass;                           		// 0x010C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1280 ];

		return pClassPointer;
	};

	int GetObjClassVersion ( );
	void FindPopMgrTarget ( );
};

UClass* USeqAct_GameCrowdPopulationManagerToggle::pClassPointer = NULL;

// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0058 (0x015C - 0x0104)
class USeqAct_GameCrowdSpawner : public USeqAct_Latent
{
public:
	unsigned long                                      bSpawningActive : 1;                              		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCycleSpawnLocs : 1;                              		// 0x0104 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRespawnDeadAgents : 1;                           		// 0x0104 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bHasReducedNumberDueToSplitScreen : 1;            		// 0x0104 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                 		// 0x0104 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bForceObstacleChecking : 1;                       		// 0x0104 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bForceNavMeshPathing : 1;                         		// 0x0104 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bOnlySpawnHidden : 1;                             		// 0x0104 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bWarmupPosition : 1;                              		// 0x0104 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bCastShadows : 1;                                 		// 0x0104 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	int                                                NextDestinationIndex;                             		// 0x0108 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            SpawnLocs;                                        		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LastSpawnLocIndex;                                		// 0x0118 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SpawnRate;                                        		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnNum;                                         		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnRadius;                                      		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SplitScreenNumReduction;                          		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Remainder;                                        		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              AgentFrequencySum;                                		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                   		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FAgentArchetypeInfo >               AgentArchetypes;                                  		// 0x0138 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class AGameCrowdAgent* >                   SpawnedList;                                      		// 0x0144 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FLightingChannelContainer                   AgentLightingChannel;                             		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AGameCrowdReplicationActor*                  RepActor;                                         		// 0x0154 (0x0004) [0x0000000000000000]              
	float                                              AgentWarmupTime;                                  		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1281 ];

		return pClassPointer;
	};

	int GetObjClassVersion ( );
	class AGameCrowdAgent* CreateNewAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, unsigned long isDamageByPlayerDisabled );
	class AGameCrowdAgent* SpawnAgent ( class AActor* SpawnLoc, unsigned long isDamageByPlayerDisabled );
	void UpdateSpawning ( float DeltaSeconds );
	void KillAgents ( );
	void CacheSpawnerVars ( );
	void SpawnedAgent ( class AGameCrowdAgent* NewAgent );
};

UClass* USeqAct_GameCrowdSpawner::pClassPointer = NULL;

// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x0100 - 0x00F4)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray< struct FPropertyInfo >                     Properties;                                       		// 0x00F4 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1282 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ModifyProperty::pClassPointer = NULL;

// Class GameFramework.SeqAct_PlayAgentAnimation
// 0x0024 (0x0128 - 0x0104)
class USeqAct_PlayAgentAnimation : public USeqAct_Latent
{
public:
	TArray< struct FName >                             AnimationList;                                    		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseRootMotion : 1;                               		// 0x0118 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFaceActionTargetFirst : 1;                       		// 0x0118 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0118 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlendBetweenAnims : 1;                           		// 0x0118 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	int                                                LoopIndex;                                        		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopTime;                                         		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActionTarget;                                     		// 0x0124 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1283 ];

		return pClassPointer;
	};

	void SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent );
	int GetObjClassVersion ( );
};

UClass* USeqAct_PlayAgentAnimation::pClassPointer = NULL;

// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0110 - 0x0110)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1284 ];

		return pClassPointer;
	};

};

UClass* USeqEvent_CrowdAgentReachedDestination::pClassPointer = NULL;

// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x0138 - 0x00BC)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x00BC (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x00BC (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bApplyControl : 1;                                		// 0x00BC (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FRecoilDef                                  Recoil;                                           		// 0x00C0 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Aim;                                              		// 0x0130 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1285 ];

		return pClassPointer;
	};

};

UClass* UGameSkelCtrl_Recoil::pClassPointer = NULL;

// Class GameFramework.GameCameraBase
// 0x0008 (0x0044 - 0x003C)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                     		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bResetCameraInterpolation : 1;                    		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1286 ];

		return pClassPointer;
	};

	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void Init ( );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	void ResetInterpolation ( );
	void OnBecomeInActive ( class UGameCameraBase* NewCamera );
	void OnBecomeActive ( class UGameCameraBase* OldCamera );
};

UClass* UGameCameraBase::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCamera
// 0x0134 (0x0178 - 0x0044)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	struct FVector                                     LastActualCameraOrigin;                           		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              WorstLocBlockedPct;                               		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              WorstLocPenetrationExtentScale;                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlendOutTime;                          		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlendInTime;                           		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PenetrationBlockedPct;                            		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              PenetrationExtentScale;                           		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastActualOriginOffset;                           		// 0x0068 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastActualCameraOriginRot;                        		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              OriginOffsetInterpSpeed;                          		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastViewOffset;                                   		// 0x0084 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastCamFOV;                                       		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                            		// 0x0094 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UClass*                                      ThirdPersonCamDefaultClass;                       		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                   		// 0x009C (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	float                                              LastHeightAdjustment;                             		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastPitchAdjustment;                              		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastYawAdjustment;                                		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LeftoverPitchAdjustment;                          		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              Focus_BackOffStrength;                            		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Focus_StepHeightAdjustment;                       		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Focus_MaxTries;                                   		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Focus_FastAdjustKickInTime;                       		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastFocusChangeTime;                              		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     ActualFocusPointWorldLoc;                         		// 0x00C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastFocusPointLoc;                                		// 0x00D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FCamFocusPointParams                        FocusPoint;                                       		// 0x00DC (0x0034) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFocusPointSet : 1;                               		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFocusPointSuccessful : 1;                        		// 0x0110 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bDoingACameraTurn : 1;                            		// 0x0110 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTurnAlignTargetWhenFinished : 1;                 		// 0x0110 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDrawDebug : 1;                                   		// 0x0110 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDoingDirectLook : 1;                             		// 0x0110 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bDebugChangedCameraMode : 1;                      		// 0x0110 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              TurnCurTime;                                      		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                TurnStartAngle;                                   		// 0x0118 (0x0004) [0x0000000000000000]              
	int                                                TurnEndAngle;                                     		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              TurnTotalTime;                                    		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              TurnDelay;                                        		// 0x0124 (0x0004) [0x0000000000000000]              
	int                                                LastPostCamTurnYaw;                               		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                DirectLookYaw;                                    		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DirectLookInterpSpeed;                            		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WorstLocInterpSpeed;                              		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastWorstLocationLocal;                           		// 0x0138 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastPreModifierCameraLoc;                         		// 0x0144 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastPreModifierCameraRot;                         		// 0x0150 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPenetrationAvoidanceFeeler >       PenetrationAvoidanceFeelers;                      		// 0x015C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              OffsetAdjustmentInterpSpeed;                      		// 0x0168 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastOffsetAdjustment;                             		// 0x016C (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1287 ];

		return pClassPointer;
	};

	void ResetInterpolation ( );
	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void OnBecomeActive ( class UGameCameraBase* OldCamera );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void UpdateCameraMode ( class APawn* P );
	class UGameThirdPersonCameraMode* FindBestCameraMode ( class APawn* P );
	void AdjustFocusPointInterpolation ( struct FRotator Delta );
	struct FVector GetActualFocusLocation ( );
	void UpdateFocusPoint ( class APawn* P );
	void ClearFocusPoint ( unsigned long bLeaveCameraRotation );
	class AActor* GetFocusActor ( );
	void SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg );
	void SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg );
	void AdjustTurn ( int AngleOffset );
	void EndTurn ( );
	void BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished );
	void PlayerUpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
	float GetDesiredFOV ( class APawn* ViewedPawn );
	void Init ( );
	void Reset ( );
	class UGameThirdPersonCameraMode* CreateCameraMode ( class UClass* ModeClass );
};

UClass* UGameThirdPersonCamera::pClassPointer = NULL;

// Class GameFramework.GamePlayerCamera
// 0x0068 (0x05E0 - 0x0578)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                   		// 0x0578 (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	class UClass*                                      ThirdPersonCameraClass;                           		// 0x057C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGameCameraBase*                             FixedCam;                                         		// 0x0580 (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	class UClass*                                      FixedCameraClass;                                 		// 0x0584 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UGameCameraBase*                             CurrentCamera;                                    		// 0x0588 (0x0004) [0x0000000004002001]              ( CPF_Edit | CPF_Transient | CPF_EditInline )
	unsigned long                                      bUseForcedCamFOV : 1;                             		// 0x058C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bInterpolateCamChanges : 1;                       		// 0x058C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bResetInterp : 1;                                 		// 0x058C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              ForcedCamFOV;                                     		// 0x0590 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      LastViewTarget;                                   		// 0x0594 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SplitScreenShakeScale;                            		// 0x0598 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class AActor*                                      LastTargetBase;                                   		// 0x059C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMatrix                                     LastTargetBaseTM;                                 		// 0x05A0 (0x0040) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1288 ];

		return pClassPointer;
	};

	float AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ResetInterpolation ( );
	void SetColorScale ( struct FVector NewColorScale );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void UpdateCameraLensEffects ( struct FTViewTarget* OutVT );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	bool ShouldConstrainAspectRatio ( );
	class UGameCameraBase* FindBestCameraType ( class AActor* CameraTarget );
	void Reset ( );
	void PostBeginPlay ( );
	void CacheLastTargetBaseInfo ( class AActor* TargetBase );
	class UGameCameraBase* CreateCamera ( class UClass* CameraClass );
};

UClass* AGamePlayerCamera::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCameraMode
// 0x01F0 (0x022C - 0x003C)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                   		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FOVAngle;                                         		// 0x0040 (0x0004) [0x0000000000004003]              ( CPF_Edit | CPF_Const | CPF_Config )
	float                                              BlendTime;                                        		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bLockedToViewTarget : 1;                          		// 0x0048 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDirectLook : 1;                                  		// 0x0048 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	unsigned long                                      bFollowTarget : 1;                                		// 0x0048 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bInterpLocation : 1;                              		// 0x0048 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bUsePerAxisOriginLocInterp : 1;                   		// 0x0048 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bInterpRotation : 1;                              		// 0x0048 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bRotInterpSpeedConstant : 1;                      		// 0x0048 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bDoPredictiveAvoidance : 1;                       		// 0x0048 (0x0004) [0x0000000000000003] [0x00000080] ( CPF_Edit | CPF_Const )
	unsigned long                                      bValidateWorstLoc : 1;                            		// 0x0048 (0x0004) [0x0000000000000003] [0x00000100] ( CPF_Edit | CPF_Const )
	unsigned long                                      bSkipCameraCollision : 1;                         		// 0x0048 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bApplyDeltaViewOffset : 1;                        		// 0x0048 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bAdjustDOF : 1;                                   		// 0x0048 (0x0004) [0x0000000000000003] [0x00000800] ( CPF_Edit | CPF_Const )
	unsigned long                                      bDOFUpdated : 1;                                  		// 0x0048 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bInterpViewOffsetOnlyForCamTransition : 1;        		// 0x0048 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	float                                              FollowingInterpSpeed_Pitch;                       		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingInterpSpeed_Yaw;                         		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingInterpSpeed_Roll;                        		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FollowingCameraVelThreshold;                      		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              OriginLocInterpSpeed;                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PerAxisOriginLocInterpSpeed;                      		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              OriginRotInterpSpeed;                             		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     StrafeLeftAdjustment;                             		// 0x0070 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     StrafeRightAdjustment;                            		// 0x007C (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetScalingThreshold;                     		// 0x0088 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetInterpSpeedIn;                        		// 0x008C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StrafeOffsetInterpSpeedOut;                       		// 0x0090 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastStrafeOffset;                                 		// 0x0094 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     RunFwdAdjustment;                                 		// 0x00A0 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     RunBackAdjustment;                                		// 0x00AC (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetScalingThreshold;                        		// 0x00B8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetInterpSpeedIn;                           		// 0x00BC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              RunOffsetInterpSpeedOut;                          		// 0x00C0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     LastRunOffset;                                    		// 0x00C4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     WorstLocOffset;                                   		// 0x00D0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     TargetRelativeCameraOriginOffset;                 		// 0x00DC (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FViewOffsetData                             ViewOffset;                                       		// 0x00E8 (0x0024) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[ 0x6 ];            		// 0x010C (0x00D8) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_FalloffExponent;                              		// 0x01E4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_BlurKernelSize;                               		// 0x01E8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_FocusInnerRadius;                             		// 0x01EC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_MaxNearBlurAmount;                            		// 0x01F0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_MaxFarBlurAmount;                             		// 0x01F4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_CutDistance;                                  		// 0x01F8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LastDOFRadius;                                    		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastDOFDistance;                                  		// 0x0200 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DOFDistanceInterpSpeed;                           		// 0x0204 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     DOFTraceExtent;                                   		// 0x0208 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DOF_RadiusFalloff;                                		// 0x0214 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DOF_RadiusRange;                                  		// 0x0218 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   DOF_RadiusDistRange;                              		// 0x0220 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ViewOffsetInterp;                                 		// 0x0228 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1289 ];

		return pClassPointer;
	};

	void SetViewOffset ( struct FViewOffsetData* NewViewOffset );
	void ModifyPostProcessSettings ( struct FPostProcessSettings* PP );
	void UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT );
	struct FVector DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace );
	struct FVector GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace );
	void ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	bool SetFocusPoint ( class APawn* ViewedPawn );
	struct FVector GetCameraWorstCaseLoc ( class APawn* TargetPawn );
	float GetDesiredFOV ( class APawn* ViewedPawn );
	struct FVector AdjustViewOffset ( class APawn* P, struct FVector Offset );
	void OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode );
	void OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode );
	void Init ( );
};

UClass* UGameThirdPersonCameraMode::pClassPointer = NULL;

// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000C (0x0238 - 0x022C)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                            		// 0x022C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bTemporaryOriginRotInterp : 1;                    		// 0x0230 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              TemporaryOriginRotInterpSpeed;                    		// 0x0234 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1290 ];

		return pClassPointer;
	};

};

UClass* UGameThirdPersonCameraMode_Default::pClassPointer = NULL;

// Class GameFramework.GameDecal
// 0x0008 (0x0330 - 0x0328)
class UGameDecal : public UDecalComponent
{
public:
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                       		// 0x0328 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APawn*                                       Instigator;                                       		// 0x032C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1291 ];

		return pClassPointer;
	};

};

UClass* UGameDecal::pClassPointer = NULL;

// Class GameFramework.GameDecalManager
// 0x0004 (0x022C - 0x0228)
class AGameDecalManager : public ADecalManager
{
public:
	float                                              MinDecalDistanceSq;                               		// 0x0228 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1292 ];

		return pClassPointer;
	};

	class UGameDecal* SpawnDecalMinimal ( float InDecalLifeSpan, float InCanSpawnDistance, struct FVector* DecalLocation );
	bool IsTooCloseToActiveDecal ( float InCanSpawnDistance, struct FVector* DecalLocation );
};

UClass* AGameDecalManager::pClassPointer = NULL;

// Class GameFramework.GameSpecialMove
// 0x0040 (0x007C - 0x003C)
class UGameSpecialMove : public UObject
{
public:
	class AGamePawn*                                   PawnOwner;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	struct FName                                       Handle;                                           		// 0x0040 (0x0008) [0x0000000000000000]              
	float                                              LastCanDoSpecialMoveTime;                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLastCanDoSpecialMove : 1;                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReachPreciseDestination : 1;                     		// 0x004C (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bReachedPreciseDestination : 1;                   		// 0x004C (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bReachPreciseRotation : 1;                        		// 0x004C (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bReachedPreciseRotation : 1;                      		// 0x004C (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      bForcePrecisePosition : 1;                        		// 0x004C (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     PreciseDestination;                               		// 0x0050 (0x000C) [0x0000000000000002]              ( CPF_Const )
	class AActor*                                      PreciseDestBase;                                  		// 0x005C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FVector                                     PreciseDestRelOffset;                             		// 0x0060 (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              PreciseRotationInterpolationTime;                 		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    PreciseRotation;                                  		// 0x0070 (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1293 ];

		return pClassPointer;
	};

	struct FVector RelativeToWorldOffset ( struct FRotator InRotation, struct FVector RelativeSpaceOffset );
	struct FVector WorldToRelativeOffset ( struct FRotator InRotation, struct FVector WorldSpaceOffset );
	void ForcePawnRotation ( class APawn* P, struct FRotator NewRotation );
	bool MessageEvent ( struct FName EventName, class UObject* Sender );
	void ResetFacePreciseRotation ( );
	void ReachedPrecisePosition ( );
	void SetFacePreciseRotation ( struct FRotator RotationToFace, float InterpolationTime );
	void SetReachPreciseDestination ( struct FVector DestinationToReach, unsigned long bCancel );
	bool ShouldReplicate ( );
	void SpecialMoveFlagsUpdated ( );
	void Tick ( float DeltaTime );
	void SpecialMoveEnded ( struct FName PrevMove, struct FName NextMove );
	void SpecialMoveStarted ( unsigned long bForced, struct FName PrevMove );
	bool InternalCanDoSpecialMove ( );
	bool CanDoSpecialMove ( unsigned long bForceCheck );
	bool CanOverrideSpecialMove ( struct FName InMove );
	bool CanOverrideMoveWith ( struct FName NewMove );
	bool CanChainMove ( struct FName NextMove );
	void ExtractSpecialMoveFlags ( int Flags );
	void InitSpecialMoveFlags ( int* out_Flags );
	void InitSpecialMove ( class AGamePawn* inPawn, struct FName InHandle );
};

UClass* UGameSpecialMove::pClassPointer = NULL;

// Class GameFramework.GameStateObject
// 0x0024 (0x0060 - 0x003C)
class UGameStateObject : public UObject
{
public:
	struct FArray_Mirror                               TeamStates;                                       		// 0x003C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               PlayerStates;                                     		// 0x0048 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      SessionType;                                      		// 0x0054 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsMatchStarted : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsRoundStarted : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RoundNumber;                                      		// 0x005C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1294 ];

		return pClassPointer;
	};

	void Reset ( );
};

UClass* UGameStateObject::pClassPointer = NULL;

// Class GameFramework.GameStatsAggregator
// 0x0088 (0x01C0 - 0x0138)
class UGameStatsAggregator : public UGameplayEventsReader
{
public:
	class UGameStateObject*                            GameState;                                        		// 0x0138 (0x0004) [0x0000000000000000]              
	TArray< int >                                      EventsFound;                                      		// 0x013C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FMap_Mirror                                 GameAggregateEventMap;                            		// 0x0148 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FMap_Mirror                                 GameAggregateEventPairMap;                        		// 0x0184 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1295 ];

		return pClassPointer;
	};

	void AddEntryPairToDimension ( int Dimension, int SubDimension, int EventID, float EventValue );
	void AddEntryToDimension ( int Dimension, int EventID, float EventValue );
};

UClass* UGameStatsAggregator::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnerInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34385 ];

		return pClassPointer;
	};

	float GetMaxSpawnDist ( );
	bool AddToAgentPool ( class AGameCrowdAgent* Agent );
	void AgentDestroyed ( class AGameCrowdAgent* Agent );
};

UClass* UGameCrowdSpawnerInterface::pClassPointer = NULL;

// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x003C - 0x003C)
class UGameCrowdSpawnInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34562 ];

		return pClassPointer;
	};

	void GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot );
};

UClass* UGameCrowdSpawnInterface::pClassPointer = NULL;

// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x0284 - 0x0284)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34563 ];

		return pClassPointer;
	};

};

UClass* ADynamicGameCrowdDestination::pClassPointer = NULL;

// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x0048 - 0x003C)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	TArray< struct FAgentArchetypeInfo >               ListOfAgents;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34736 ];

		return pClassPointer;
	};

};

UClass* UGameCrowd_ListOfAgents::pClassPointer = NULL;

// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x0284 - 0x0284)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35137 ];

		return pClassPointer;
	};

};

UClass* AGameCrowdInteractionDestination::pClassPointer = NULL;

// Class GameFramework.GameExplosionContent
// 0x0048 (0x0084 - 0x003C)
class UGameExplosionContent : public UObject
{
public:
	unsigned long                                      bAutoControllerVibration : 1;                     		// 0x003C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bOrientCameraShakeTowardsEpicenter : 1;           		// 0x003C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class USoundCue*                                   ExplosionSound;                                   		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake;                                         		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Left;                                    		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Right;                                   		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UCameraShake*                                CamShake_Rear;                                    		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeInnerRadius;                              		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeOuterRadius;                              		// 0x0058 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CamShakeFalloff;                                  		// 0x005C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UClass*                                      CameraLensEffect;                                 		// 0x0060 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CameraLensEffectRadius;                           		// 0x0064 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPointLightComponent*                        ExploLight;                                       		// 0x0068 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class URadialBlurComponent*                        ExploRadialBlur;                                  		// 0x0070 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploRadialBlurFadeOutTime;                       		// 0x0074 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ExploRadialBlurMaxBlur;                           		// 0x0078 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x007C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class AFogVolumeSphericalDensityInfo*              FogVolumeArchetype;                               		// 0x0080 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35590 ];

		return pClassPointer;
	};

};

UClass* UGameExplosionContent::pClassPointer = NULL;

// Class GameFramework.GameFixedCamera
// 0x0004 (0x0048 - 0x0044)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                       		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35611 ];

		return pClassPointer;
	};

	void OnBecomeActive ( class UGameCameraBase* OldCamera );
	void UpdateCamera ( class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT );
};

UClass* UGameFixedCamera::pClassPointer = NULL;

// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x02E8 - 0x02E8)
class AGameKActorSpawnableEffect : public AKActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35622 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void FellOutOfWorld ( class UClass* dmgType );
	void PostBeginPlay ( );
};

UClass* AGameKActorSpawnableEffect::pClassPointer = NULL;

// Class GameFramework.GameWaveForms
// 0x0010 (0x004C - 0x003C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                           		// 0x003C (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                            		// 0x0040 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                               		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35722 ];

		return pClassPointer;
	};

};

UClass* UGameWaveForms::pClassPointer = NULL;

// Class GameFramework.MobileMenuGame
// 0x0004 (0x0390 - 0x038C)
class AMobileMenuGame : public AGameInfo
{
public:
	class UClass*                                      InitialSceneToDisplayClass;                       		// 0x038C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36360 ];

		return pClassPointer;
	};

	void RestartPlayer ( class AController* NewPlayer );
	void StartMatch ( );
	void PostLogin ( class APlayerController* NewPlayer );
};

UClass* AMobileMenuGame::pClassPointer = NULL;

// Class GameFramework.MobileMenuPlayerController
// 0x0000 (0x05B0 - 0x05B0)
class AMobileMenuPlayerController : public AGamePlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36365 ];

		return pClassPointer;
	};

};

UClass* AMobileMenuPlayerController::pClassPointer = NULL;

// Class GameFramework.MobileMenuLabel
// 0x0024 (0x00A4 - 0x0080)
class UMobileMenuLabel : public UMobileMenuObject
{
public:
	struct FString                                     Caption;                                          		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UFont*                                       TextFont;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	struct FColor                                      TextColor;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FColor                                      TouchedColor;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              TextXScale;                                       		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              TextYScale;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoSize : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36387 ];

		return pClassPointer;
	};

	void RenderObject ( class UCanvas* Canvas );
};

UClass* UMobileMenuLabel::pClassPointer = NULL;

// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x0040 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                    		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36523 ];

		return pClassPointer;
	};

};

UClass* UPMESTG_LeaveADecalBase::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif