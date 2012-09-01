/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct GridGame.InterpTrackCollision.CollisionTrackKey
// 0x0005
struct FCollisionTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      CollisionAction;                                  		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCriticallyDampedSpring_Float.SpringParameters
// 0x0004
struct FSpringParameters
{
	float                                              mSpringStiffness;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCriticallyDampedSpring_Float.IntegrationState
// 0x0008
struct FIntegrationState
{
	float                                              Position;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Velocity;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgCriticallyDampedSpring_Rotator.RotationSpringParameters
// 0x000C
struct FRotationSpringParameters
{
	struct FSpringParameters                           Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringParameters                           Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringParameters                           Roll;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgActorPlugInSetMaterial.SetMaterialInfo
// 0x0008
struct FSetMaterialInfo
{
	class UMaterialInstance*                           mMaterial;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMaterialIndex;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAIActionUseSmartObject.ScriptedSmartObjectUseInfo
// 0x0008
struct FScriptedSmartObjectUseInfo
{
	class APgSmartObject*                              mSmartObject;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mUseInfoIndex;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAIAwareness.AIAwarenessStateLevel
// 0x0008
struct FAIAwarenessStateLevel
{
	unsigned char                                      mState;                                           		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              mLevel;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAIAwareness.AIAwarenessStateImpulse
// 0x0008
struct FAIAwarenessStateImpulse
{
	unsigned char                                      mState;                                           		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              mImpulse;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAISenses.AISightCone
// 0x0021
struct FAISightCone
{
	float                                              mStartDistance;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mEndDistance;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStartRadius;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              mEndRadius;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FRotator                                    mDirection;                                       		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mConeAngle;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mAwareness;                                       		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAISenses.AISightRange
// 0x0009
struct FAISightRange
{
	float                                              mDistance;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPeripheralVision;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mAwareness;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAISenses.AINoiseFilter
// 0x000A
struct FAINoiseFilter
{
	struct FName                                       mName;                                            		// 0x0000 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned char                                      mAwareness;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mFriendlyAwareness;                               		// 0x0009 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAnimBehavior.DebugAnimBehaviorState
// 0x000C
struct FDebugAnimBehaviorState
{
	class UClass*                                      Class;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      Started : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Ended : 1;                                        		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct GridGame.PgAnimBehaviorApplyPhysicsAsset.FloatBlendValues
// 0x000C
struct FFloatBlendValues
{
	float                                              InitialValue;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              targetvalue;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndValue;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgAnimLocomotionSystem.TurnTransitionData
// 0x0014
struct FTurnTransitionData
{
	float                                              MinSpeed;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTurnAngle;                                     		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgAnimTreeInstance*                         AnimTreeInstance;                                 		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgAnimLocomotionSystem.PhaseTimingData
// 0x0008
struct FPhaseTimingData
{
	float                                              AnimTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PhaseValue;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgWeaponRepInfo
// 0x0008
struct FPgWeaponRepInfo
{
	struct FName                                       mWeaponArchetypePath;                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgPawnAnimNodes
// 0x0010
struct FPgPawnAnimNodes
{
	class UAnimNodeBlend*                              LocomotionBlend;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlend*                              LowerBodyBlend;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPgAnimNodeBlendListSubtree*                 ActionBlender;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	class UPgAnimNodeBlendByDriving*                   DrivingBlender;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgSpecialMoveManualLineupParams
// 0x0024
struct FPgSpecialMoveManualLineupParams
{
	struct FVector                                     mLineupDist;                                      		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mRotDelta;                                        		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mInitialLoc;                                      		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgPawn.PgSpecialMoveState
// 0x0020
struct FPgSpecialMoveState
{
	float                                              LineupTimeLeft;                                   		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LineupVelocity;                                   		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                LineupYawRotateRate;                              		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LineupPawnRotation;                               		// 0x0014 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgPawn.PgHitEffectReplicationInfo
// 0x0038
struct FPgHitEffectReplicationInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000100000]              
	struct FVector                                     Momentum;                                         		// 0x000C (0x000C) [0x0000000000100000]              
	int                                                DamageReaction;                                   		// 0x0018 (0x0004) [0x0000000000100000]              
	class UPgDamageParam*                              CauserDamageParam;                                		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                FaceYaw;                                          		// 0x0020 (0x0004) [0x0000000000100000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0024 (0x0004) [0x0000000000100000]              
	unsigned char                                      Mode;                                             		// 0x0028 (0x0001) [0x0000000000100000]              
	struct FVector                                     Location;                                         		// 0x002C (0x000C) [0x0000000000100000]              
};

// ScriptStruct GridGame.PgPawn.PgComboBranchInfo
// 0x0008
struct FPgComboBranchInfo
{
	unsigned char                                      BranchActions[ 0x8 ];                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPawn.PgComboSplitTimeWindow
// 0x000C
struct FPgComboSplitTimeWindow
{
	float                                              InputStartTime;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SplitStartTime;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SplitEndTime;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPawn.PgComboSplitArray
// 0x000C
struct FPgComboSplitArray
{
	TArray< struct FPgComboSplitTimeWindow >           Times;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgPawn.PgComboTimingInfo
// 0x0060
struct FPgComboTimingInfo
{
	struct FPgComboSplitArray                          Action[ 0x8 ];                                    		// 0x0000 (0x0060) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgPawn.PgLandRepParameters
// 0x0009
struct FPgLandRepParameters
{
	float                                              impactVelocity;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              horizontalVelocity;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      netDirty;                                         		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgDamageTracker
// 0x001C
struct FPgDamageTracker
{
	struct FName                                       mDamageCauserArchetypeName;                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       mDamageInstigatorArchetypeName;                   		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              mTime;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                mDamage;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                mInstigatorPlayerIndex;                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgWorldMobilityInfo
// 0x001C
struct FPgWorldMobilityInfo
{
	class UPgSpecialMoveAsset*                         mSpecialMoveAsset;                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mAbortOnHitAngle : 1;                             		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mAbortMinAngle;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAbortMaxAngle;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLineUpZOffset;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mUseHitInvNormalAsLineUpRot : 1;                  		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mCurrentlyPlaying : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mPostExecuteWaitTime;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgMovementBlockedInfo
// 0x0011
struct FPgMovementBlockedInfo
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              AngleTolerance;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Behavior;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPawn.PgVelocityForRagdoll
// 0x0030
struct FPgVelocityForRagdoll
{
	unsigned long                                      mFromVehicle : 1;                                 		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector                                     mVelocity;                                        		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                mUpdatesOutOfVehicle;                             		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mIsNormalValid : 1;                               		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector                                     mGroundNormal;                                    		// 0x0018 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mVehicleOrientation;                              		// 0x0024 (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgPawn.BikeVaultInfo
// 0x0028
struct FBikeVaultInfo
{
	unsigned long                                      mIsNormalValid : 1;                               		// 0x0000 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector                                     mGroundNormal;                                    		// 0x0004 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mVelocity;                                        		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mOrientation;                                     		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgGridTypes.PgSpecialMoveParams
// 0x0018
struct FPgSpecialMoveParams
{
	struct FVector                                     LineupLocation;                                   		// 0x0000 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LineupRotation;                                   		// 0x000C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgPawn.PgComboState
// 0x00A0
struct FPgComboState
{
	class UPgSpecialMoveAsset*                         Chain[ 0x8 ];                                     		// 0x0000 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	int                                                ChainLength;                                      		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentTime;                                      		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeToExecuteQueue;                               		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                PendingRandomBranchSeed;                          		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RandomBranchSeed;                                 		// 0x0030 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              RelativeAccelAngle;                               		// 0x0034 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              HeldButtonDuration;                               		// 0x0038 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SequenceListBranchIndex;                          		// 0x003C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      StartPhysics;                                     		// 0x003D (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FPgSpecialMoveParams                        LineupParams;                                     		// 0x0040 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FPgSpecialMoveManualLineupParams            DynamicLineupParams;                              		// 0x0058 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	struct FPgSpecialMoveState                         LineupState;                                      		// 0x007C (0x0020) [0x0000000000002000]              ( CPF_Transient )
	class UPgSpecialMoveAsset*                         QueuedMove;                                       		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgPawn.PgComboFrameState
// 0x0030
struct FPgComboFrameState
{
	struct FPgSpecialMoveParams                        LineupParams;                                     		// 0x0000 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	class UPgSpecialMoveAsset*                         QueuedMove;                                       		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeToExecuteQueue;                               		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                RandomBranchSeed;                                 		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              HeldButtonDuration;                               		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      SequenceListBranchIndex;                          		// 0x0028 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bQueueDirty : 1;                                  		// 0x002C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bHoldDirty : 1;                                   		// 0x002C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bSeqBranchDirty : 1;                              		// 0x002C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIsNewCombo : 1;                                  		// 0x002C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
};

// ScriptStruct GridGame.PgPawn.PgSpecialMoveByModeInfo
// 0x0008
struct FPgSpecialMoveByModeInfo
{
	unsigned char                                      mMode;                                            		// 0x0000 (0x0001) [0x0000000000120001]              ( CPF_Edit | CPF_EditConst )
	class UPgSpecialMoveAsset*                         mSpecialMove;                                     		// 0x0004 (0x0004) [0x0000000000100001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPawnDamageReaction.PgMoveModeReactionInfo
// 0x0018
struct FPgMoveModeReactionInfo
{
	unsigned char                                      mMode;                                            		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	unsigned long                                      mKnockdown : 1;                                   		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mSpecialMove;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mUseDamageOverride : 1;                           		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UPgDamageParam*                              mDamageParamOverride;                             		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageScale;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPawnDamageReaction.PgDamageReactionInfo
// 0x0018
struct FPgDamageReactionInfo
{
	struct FName                                       mCauserArchetypeName;                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mCauserDamageParam;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPgMoveModeReactionInfo >           mMoveModeReactionInfo;                            		// 0x000C (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgAnimNodeNoise.JointNoiseStruct
// 0x0068
struct FJointNoiseStruct
{
	struct FName                                       JointName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MinRotationNoise;                                 		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MaxRotationNoise;                                 		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinFrequencyToAddNoise;                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxFrequencyToAddNoise;                           		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeUntilNextNoise;                               		// 0x002C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FQuat                                       NoiseQuat;                                        		// 0x0030 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FQuat                                       NoiseOldQuat;                                     		// 0x0040 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FQuat                                       NoiseTargetQuat;                                  		// 0x0050 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlendWeight;                                      		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      PreviewMaxNoise : 1;                              		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GridGame.PgCameraBase.BlenderSettingsByCamera
// 0x000C
struct FBlenderSettingsByCamera
{
	struct FName                                       mPreviousCameraName;                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPgCameraBlenderSettings*                    mBlendSettings;                                   		// 0x0008 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GridGame.PgCameraBase.MeshSocketData
// 0x0009
struct FMeshSocketData
{
	struct FName                                       mSocket;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mSocketRetrievalType;                             		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCriticallyDampedSpring_Orbit.OrbitComponents
// 0x0010
struct FOrbitComponents
{
	struct FRotator                                    Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Magnitude;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCriticallyDampedSpring_Vector.VectorSpringParameters
// 0x000C
struct FVectorSpringParameters
{
	struct FSpringParameters                           X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringParameters                           Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringParameters                           Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCamera_PgOrbit_Behaviour_KeepTargetInView.PointOfInterest
// 0x0028
struct FPointOfInterest
{
	struct FName                                       mPawnName;                                        		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              mExistenceWeight;                                 		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mDistanceWeight;                                  		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mGameplayWeight;                                  		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTotalWeight;                                     		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mFoundToExist : 1;                                		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FVector                                     mLastPosition;                                    		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgMailmanNative.PgMailboxPtrNative
// 0x0004
struct FPgMailboxPtrNative
{
	struct FPointer                                    Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct GridGame.PgCamera_PgOrbit_Behaviour_WorldSpring.SpringSettings
// 0x0010
struct FSpringSettings
{
	float                                              mVelocityDampening;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStiffness;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxVelocity;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbEnabled : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GridGame.PgCamera_PgOrbit_Behaviour_WorldSpring.BiDirectionalSpringSettings
// 0x0020
struct FBiDirectionalSpringSettings
{
	struct FSpringSettings                             mPositive;                                        		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringSettings                             mNegative;                                        		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCamera_PgOrbit_Behaviour_WorldSpring.SpringState
// 0x0010
struct FSpringState
{
	struct FIntegrationState                           mState;                                           		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              mLastTargetVelocity;                              		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    mSettings;                                        		// 0x000C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct GridGame.PgCriticallyDampedSpring_Orbit.OrbitSpringParameters
// 0x0010
struct FOrbitSpringParameters
{
	struct FRotationSpringParameters                   Rotation;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringParameters                           Magnitude;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgCheatManagerBase.DebugDisplay3dInfo
// 0x0014
struct FDebugDisplay3dInfo
{
	struct FName                                       mClassName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             mDisplayPropertyList;                             		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgPedestrianSpawnManager.PgPedestrianSpawnInfo
// 0x0014
struct FPgPedestrianSpawnInfo
{
	class APawn*                                       mArchetypePawn;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                mSpawnFill;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                mSpawnMax;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                mSpawnNum;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                mSpawnTotal;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgRallyPoint.RallyPointInfo
// 0x001C
struct FRallyPointInfo
{
	class APawn*                                       mAttractPawn;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mTeam;                                            		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMaxPawns;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mAIState;                                         		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                mNumPawns;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgDamageParam.PgDamageParamInfo
// 0x0004
struct FPgDamageParamInfo
{
	class UPgDamageBehavior*                           mDamageBehavior;                                  		// 0x0000 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct GridGame.PgDamageParam.DamageFilterInfo
// 0x0010
struct FDamageFilterInfo
{
	struct FName                                       mArchetypeName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mDamageParam;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageMultiplier;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgDamageParam.TouchingDamageInfo
// 0x0010
struct FTouchingDamageInfo
{
	struct FName                                       mArchetypeName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamage;                                          		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mDamageType;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgInterpActor.PgScalarParamBlend
// 0x0018
struct FPgScalarParamBlend
{
	float                                              mCurrentBlend;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              mBaseBlend;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              mDesiredBlend;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              mBlendTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       mParamName;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgEnergyActor.PgEnergyActorTeamInfo
// 0x0010
struct FPgEnergyActorTeamInfo
{
	struct FName                                       mTeam;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mTeamColour;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgStatInfo.GameStatData
// 0x0014
struct FGameStatData
{
	struct FName                                       mName;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDefaultValue;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mResetCondition;                                  		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mValue;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgDLCUtils.DLCItem
// 0x0030
struct FDLCItem
{
	struct FName                                       DLCName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     DLCKey;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DLCContent;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LiveLicenseFlags;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           LiveContent;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgDropShadowComponent.PgDropShadowInfo
// 0x002C
struct FPgDropShadowInfo
{
	struct FName                                       mBoneName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             mShadowParticleSystem;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mShadowBlendDist;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mShadowBlendLoc;                                  		// 0x0010 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mShadowBlendRot;                                  		// 0x001C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class APgDynamicEmitter*                           mShadowParticleEmitter;                           		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct GridGame.PgEmitterPool.PooledActorInfo
// 0x0010
struct FPooledActorInfo
{
	class AActor*                                      mPooledActor;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              mTimeStamp;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              mCustomLifeSpan;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                mData;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgEmitterPool.LightWallMarkerInfo
// 0x0034
struct FLightWallMarkerInfo
{
	class APgDynamicSMActor*                           mArchetype;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 mOwnerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      mOwnerTeam;                                       		// 0x0008 (0x0001) [0x0000000000000000]              
	float                                              mCustomLifeSpan;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	struct FVector                                     mLocation;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    mRotation;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	unsigned long                                      mOverrideVehicleTeamCollisionChannel : 1;         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                mTeamCollisionChannel;                            		// 0x002C (0x0004) [0x0000000000000000]              
	class APgDynamicSMActor*                           mLightWall;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgEventTrackerInterface.TrackedEventInfo
// 0x000C
struct FTrackedEventInfo
{
	struct FVector                                     mHitNormal;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgOnlineEnumerations.QosScaleData
// 0x000C
struct FQosScaleData
{
	int                                                mMinUp_bps;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                mMinDown_bps;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                mMaxPlayers;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgOnlineEnumerations.UIProfile
// 0x0020
struct FUIProfile
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxMovie*                                   StatsScreen;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxMovie*                                   PreGameTips;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           HUDElements;                                      		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgOnlineEnumerations.MapData
// 0x0048
struct FMapData
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      UseVehicles : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsDLC : 1;                                        		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FName >                             Modes;                                            		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapImage;                                         		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgOnlineEnumerations.GameModeData
// 0x0058
struct FGameModeData
{
	struct FName                                       mName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     mTitle;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mShowInMenus : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     mDescription;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mClass_OnFoot;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mClass_Vehicles;                                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       mRuleSet;                                         		// 0x003C (0x0008) [0x0000000000000000]              
	struct FString                                     mUIProfile;                                       		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      mOnlineStatsWriteClass;                           		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned long                                      mIsTeamGame : 1;                                  		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GridGame.PgOnlineEnumerations.SeamlessData
// 0x0014
struct FSeamlessData
{
	struct FName                                       Map;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             Modes;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgOnlineEnumerations.RuleSetData
// 0x0008
struct FRuleSetData
{
	struct FName                                       mName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPlayerController.ServerSavedMove
// 0x0010
struct FServerSavedMove
{
	float                                              mTimeStamp;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     mRootMotionDelta;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgPlayerController.PgDifficultyInfo
// 0x0008
struct FPgDifficultyInfo
{
	float                                              mDifficultyDamageTakenScaling;                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDifficultyDamageCausedScaling;                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPlayerController.PgNetPendingCombo
// 0x0024
struct FPgNetPendingCombo
{
	class UPgSpecialMoveAsset*                         QueuedMove;                                       		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPgSpecialMoveParams                        LineupParams;                                     		// 0x0004 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeStamp;                                        		// 0x001C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsNewCombo : 1;                                  		// 0x0020 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct GridGame.PgPlayerController.EffectEntry
// 0x000C
struct FEffectEntry
{
	class AActor*                                      mEpicenter;                                       		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	class UPgSideEffect*                               mEffect;                                          		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	float                                              mTimeAlive;                                       		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct GridGame.PgSavedMove.PgSavedMoveRepParams
// 0x00CC
struct FPgSavedMoveRepParams
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     ScaledAcceleration;                               		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     EndLocation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                DesiredYaw;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      Flags;                                            		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsInCombo : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsFalling : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsPlayingTransition : 1;                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDontCorrect : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FPgComboState                               DebugComboState;                                  		// 0x002C (0x00A0) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgSavedMove.PgSavedMoveComboParams
// 0x002C
struct FPgSavedMoveComboParams
{
	float                                              TimeStamp;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              ComboButtonHoldTime;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      ComboSeqListBranch;                               		// 0x0008 (0x0001) [0x0000000000000000]              
	class UPgSpecialMoveAsset*                         StartComboChain[ 0x8 ];                           		// 0x000C (0x0020) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgMPLoadoutBuilder.MPPlayerLoadout
// 0x0024
struct FMPPlayerLoadout
{
	class UPgUnlockItemDisc*                           HeavyDisc;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPgUnlockItemDisc*                           StasisDisc;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	class UPgUnlockItemDisc*                           BombDisc;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	class UPgUnlockItemDisc*                           CorruptionDisc;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	class UPgUnlockItemDiscPower*                      Powers[ 0x2 ];                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	class UPgUnlockItemPerk*                           Perk;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	class UPgUnlockItemVehicle*                        Vehicle;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class UPgUnlockItemPlayerSkin*                     PlayerSkin;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgGameInfo.PlayerCollisionChannelInfo
// 0x0009
struct FPlayerCollisionChannelInfo
{
	int                                                mPlayerId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                mTeamId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      mCollisionChannel;                                		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgGameInfo.TeamData
// 0x0024
struct FTeamData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     LocalizedName;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           Colors;                                           		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgGameInfo.PlayerStartInfo
// 0x0008
struct FPlayerStartInfo
{
	class ANavigationPoint*                            mStart;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class AController*                                 mPlayer;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgFireController.AIFireControlTargetInfo
// 0x000C
struct FAIFireControlTargetInfo
{
	class AActor*                                      mTarget;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              mThreat;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      mHostile : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GridGame.PgFireControllerAI.AIMaxAttackersInfo
// 0x000C
struct FAIMaxAttackersInfo
{
	struct FName                                       mTeam;                                            		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                mMax;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgFireControllerAI.AIMaxTargetersInfo
// 0x000C
struct FAIMaxTargetersInfo
{
	struct FName                                       mTeam;                                            		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                mMax;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgInputLabels.PgInputLabel
// 0x002C
struct FPgInputLabel
{
	struct FName                                       mInputName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     mCombatLabel;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mVehicleLabel;                                    		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mTankLabel;                                       		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgInterface.PgComboItem
// 0x0028
struct FPgComboItem
{
	unsigned long                                      mIsHeading : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     mName;                                            		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mValue;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mDesc;                                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgInventory.PgLootInfo
// 0x0008
struct FPgLootInfo
{
	class APgInventoryPickup*                          mDroppedPickupArchetype;                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mDropRate;                                        		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgInventoryPower.PgPower
// 0x0014
struct FPgPower
{
	int                                                mEnergyCost;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mEnergyMin;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< class UPgPowerBehavior* >                  mPowerBehavior;                                   		// 0x0008 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GridGame.PgInventoryPower.PgPowerGroup
// 0x0018
struct FPgPowerGroup
{
	TArray< struct FName >                             mPowerUser;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPgPower >                          mPower;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgMailmanNative.PgMailingListPtrNative
// 0x0004
struct FPgMailingListPtrNative
{
	struct FPointer                                    Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct GridGame.PgRuleSet.UserConfigOption
// 0x0018
struct FUserConfigOption
{
	struct FName                                       mName;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    mValues;                                          		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mDefaultIndex;                                    		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgRuleSet.PlayerStartFactorInfo
// 0x0014
struct FPlayerStartFactorInfo
{
	float                                              mNotOccupiedFactor;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mNotLookedAtFactor;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mNearTeammatesFactor;                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mNearTeamBaseFactor;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mNotLastSpawnedAtFactor;                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgOnlineGameManager.GameOption
// 0x000C
struct FGameOption
{
	struct FName                                       mName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              mValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgOnlineLeaderboard.LeaderboardData
// 0x0018
struct FLeaderboardData
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	class UClass*                                      ReaderClass;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	class UClass*                                      WriterClass;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgOnlineLeaderboard.LeaderboardStatData
// 0x0028
struct FLeaderboardStatData
{
	struct FQWord                                      Rating;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                XpScore;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Points;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                GamesPlayed;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Disconnects;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      Updated : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GridGame.PgParticleModuleNotify.ParticleNotify
// 0x0010
struct FParticleNotify
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgParticleNotify*                           Notify;                                           		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       Comment;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPedestrianSpawnManager.PgPedestrianInfo
// 0x000C
struct FPgPedestrianInfo
{
	class APawn*                                       mArchetypePawn;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mSpawnFill;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mSpawnMax;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPhysMatEffect.ImpactSoundInfo
// 0x0014
struct FImpactSoundInfo
{
	class UAkEvent*                                    mAkEvent;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mSwitchGroup;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mSwitch;                                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPhysMatEffect.ImpactSystemInfo
// 0x0034
struct FImpactSystemInfo
{
	class UParticleSystem*                             mPSTemplate;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mTranslation;                                     		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mRotation;                                        		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mScale;                                           		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mParticleSystemTickGroup;                         		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mUseTeamColor : 1;                                		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       mVectorParameterName;                             		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mHiddenSceneCapture : 1;                          		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mHiddenSceneCaptureCube : 1;                      		// 0x0030 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct GridGame.PgPhysMatEffect.PhysMatEffectInfo
// 0x005C
struct FPhysMatEffectInfo
{
	struct FName                                       mPhysMaterialName;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FImpactSoundInfo                            mImpactSoundInfo;                                 		// 0x0008 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FImpactSystemInfo                           mImpactSystemInfo;                                		// 0x001C (0x0034) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInstance*                           mDecalMaterial;                                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDecalMinSize;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDecalMaxSize;                                    		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgPlayerInput.PgInputButton
// 0x0014
struct FPgInputButton
{
	struct FName                                       mButtonName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             mButtonHandler;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgRallyPoint.ControllerInRangeInfo
// 0x0008
struct FControllerInRangeInfo
{
	class APgAIController*                             mController;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              mDistSq;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgSceneCaptureEnablerVolume.SceneCaptureTriggerInfo
// 0x0014
struct FSceneCaptureTriggerInfo
{
	class ASceneCaptureActor*                          CaptureActor;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TouchState;                                       		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              TouchStateInterpDuration;                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnTouchState;                                     		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              UnTouchStateInterpDuration;                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgSeqEvent_ChapterPoint.LevelRecord
// 0x000C
struct FLevelRecord
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct GridGame.PgSmartObject.UseInfo
// 0x001C
struct FUseInfo
{
	struct FName                                       mPawnArchetypeName;                               		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UPgCondition*                                mPreconditionData;                                		// 0x0008 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UPgSpecialMoveAsset*                         mSpecialMoveAsset;                                		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      mLineUpType;                                      		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mUseAngleType;                                    		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUseMinAngle;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUseMaxAngle;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgSmartObject.PathInfo
// 0x0010
struct FPathInfo
{
	unsigned long                                      mGeneratePathNode : 1;                            		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FVector                                     mPathNodeOffset;                                  		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgSmartObject.EditorOnly_PreviewCachedSettings
// 0x0018
struct FEditorOnly_PreviewCachedSettings
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgSmartObject.SmartObjectLinkedListMirror
// 0x000C
struct FSmartObjectLinkedListMirror
{
	struct FPointer                                    Element;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Next;                                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    PrevLink;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct GridGame.PgTargetActor.PgTargetActorAudioTransInfo
// 0x0014
struct FPgTargetActorAudioTransInfo
{
	struct FName                                       mFromState;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mToState;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mAkEvent;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgTargetActor.TargetActorLinkedListMirror
// 0x000C
struct FTargetActorLinkedListMirror
{
	struct FPointer                                    Element;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Next;                                             		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    PrevLink;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct GridGame.PgTargetActor.PgTargetActorInterpActorInfo
// 0x0010
struct FPgTargetActorInterpActorInfo
{
	class AInterpActor*                                mInterpActor;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mHideInterpActor : 1;                             		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      mCollisionType;                                   		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          mMaterial;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgTargetActor.PgTargetActorStateInfo
// 0x0014
struct FPgTargetActorStateInfo
{
	struct FName                                       mState;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FPgTargetActorInterpActorInfo >     mInterpActorInfo;                                 		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GridGame.PgVehicle.KnockdownOnRBCollisionInfo
// 0x0020
struct FKnockdownOnRBCollisionInfo
{
	unsigned long                                      mEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                mDamageThreshold;                                 		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStrength;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mImpulse;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mBoneName;                                        		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgVehicleRetroTurn.RetroTurnEventInfo
// 0x000C
struct FRetroTurnEventInfo
{
	unsigned char                                      mDirection;                                       		// 0x0000 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FName                                       mTag;                                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridGame.PgVehicleWeapon.FireTypeInfo
// 0x0008
struct FFireTypeInfo
{
	unsigned char                                      mFireMode;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UPgWeaponFireType*                           mFireType;                                        		// 0x0004 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct GridGame.PgXPSystem.XPRank
// 0x001C
struct FXPRank
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                XPPointsRequired;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SkillPointsEarned;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              KillPointsMultiplier;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridGame.PgXPSystem.XPComboBonus
// 0x0008
struct FXPComboBonus
{
	int                                                HitMin;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Bonus;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif