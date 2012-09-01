/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function Grip.DESLightPawn.StateChanged
// [0x00020800] ( FUNC_Event )
struct ADESLightPawn_eventStateChanged_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      previousState;                                    		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.SendExtraRemovedEvent
// [0x00020802] ( FUNC_Event )
struct ADESLightPawn_eventSendExtraRemovedEvent_Parms
{
	class USequence*                                   levelSequence;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class USequenceObject* >                Events;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USeqEvent_ExtraRemovedFromLevel*          extraRemovedEvent;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Grip.DESLightPawn.SendExtraKilledEvent
// [0x00020802] ( FUNC_Event )
struct ADESLightPawn_eventSendExtraKilledEvent_Parms
{
	class USequence*                                   levelSequence;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class USequenceObject* >                Events;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USeqEvent_ExtraKilled*                    deathEvent;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Grip.DESLightPawn.EncroachedBy
// [0x00020800] ( FUNC_Event )
struct ADESLightPawn_eventEncroachedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.TakeDamage
// [0x00024000] 
struct ADESLightPawn_execTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function Grip.DESLightPawn.PlayHitEffect
// [0x00820002] 
struct ADESLightPawn_execPlayHitEffect_Parms
{
	// struct FVector                                  HitMomentum;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function Grip.DESLightPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ADESLightPawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// float                                           Rand;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           StartTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UAnimNodeSequence*                        AnimSeq;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function Grip.DESLightPawn.Kill
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execKill_Parms
{
	class AActor*                                      killerActor;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.PlayDeath
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execPlayDeath_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.DestroyBrain
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execDestroyBrain_Parms
{
	unsigned long                                      isDeath : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetSkelMesh
// [0x00020802] ( FUNC_Event )
struct ADESLightPawn_eventSetSkelMesh_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.ThrowDiscFct
// [0x00020800] ( FUNC_Event )
struct ADESLightPawn_eventThrowDiscFct_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetDiscTarget
// [0x00020800] ( FUNC_Event )
struct ADESLightPawn_eventSetDiscTarget_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ADESLightPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetActionStationTurn
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetActionStationTurn_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.DESLightPawn.StopCustomAnim
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execStopCustomAnim_Parms
{
	float                                              blendOut;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.PlayCustomAnim
// [0x00024400] ( FUNC_Native )
struct ADESLightPawn_execPlayCustomAnim_Parms
{
	struct FName                                       NodeName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              blendIn;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              blendOut;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      loop : 1;                                         		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.DESLightPawn.SetActionStation
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetActionStation_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetWalkBackwardCower
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetWalkBackwardCower_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetWalkBackward
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetWalkBackward_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetGenericReaction
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetGenericReaction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetCowerReaction
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetCowerReaction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetFleeReaction
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetFleeReaction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetFleeTurn
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetFleeTurn_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.DESLightPawn.SetShoulderAvoid
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetShoulderAvoid_Parms
{
	unsigned char                                      avoid;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetVelocity
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetVelocity_Parms
{
	unsigned char                                      velAnim;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetShootAimTarget
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetShootAimTarget_Parms
{
	float                                              Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.DESLightPawn.SetShootAim
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetShootAim_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetMuzzleFlash
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetMuzzleFlash_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetThrowDisc
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetThrowDisc_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetLookAtTarget
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetLookAtTarget_Parms
{
	struct FVector                                     Target;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetGuardLookAt
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetGuardLookAt_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.SetLookAt
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execSetLookAt_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.DESLightPawn.ResetAnim
// [0x00020400] ( FUNC_Native )
struct ADESLightPawn_execResetAnim_Parms
{
};

// Function Grip.DESSystem.SendDESReadyEvent
// [0x00020802] ( FUNC_Event )
struct ADESSystem_eventSendDESReadyEvent_Parms
{
	class USequence*                                   levelSequence;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< class USequenceObject* >                Events;                                           		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USeqEvent_DESReady*                       DESReadyEvent;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function Grip.MeatPuppet.SetActionStationTurn
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetActionStationTurn_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.MeatPuppet.StopCustomAnim
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execStopCustomAnim_Parms
{
	float                                              blendOut;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.MeatPuppet.PlayCustomAnim
// [0x00024400] ( FUNC_Native )
struct UMeatPuppet_execPlayCustomAnim_Parms
{
	struct FName                                       NodeName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              blendIn;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              blendOut;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      loop : 1;                                         		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.MeatPuppet.SetActionStation
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetActionStation_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetWalkBackwardCower
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetWalkBackwardCower_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetWalkBackward
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetWalkBackward_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetGenericReaction
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetGenericReaction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetCowerReaction
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetCowerReaction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetFleeReaction
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetFleeReaction_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetFleeTurn
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetFleeTurn_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.MeatPuppet.SetShoulderAvoid
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetShoulderAvoid_Parms
{
	unsigned char                                      avoid;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetVelocity
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetVelocity_Parms
{
	unsigned char                                      velAnim;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetShootAimTarget
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetShootAimTarget_Parms
{
	float                                              Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Pitch;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.MeatPuppet.SetThrowDisc
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetThrowDisc_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetShootAim
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetShootAim_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetMuzzleFlash
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetMuzzleFlash_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetLookAtTarget
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetLookAtTarget_Parms
{
	struct FVector                                     Target;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetGuardLookAt
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetGuardLookAt_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetLookAt
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execSetLookAt_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      instant : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function Grip.MeatPuppet.ResetAnim
// [0x00020400] ( FUNC_Native )
struct UMeatPuppet_execResetAnim_Parms
{
};

// Function Grip.MeatPuppet.ThrowDiscFct
// [0x00020800] ( FUNC_Event )
struct UMeatPuppet_eventThrowDiscFct_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.MeatPuppet.SetDiscTarget
// [0x00020800] ( FUNC_Event )
struct UMeatPuppet_eventSetDiscTarget_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif