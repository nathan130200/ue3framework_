/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlanBFramework_f_structs.h
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

// Function PlanBFramework.PBBaseFlock.HearNoise
// [0x00024900] ( FUNC_Event )
struct APBBaseFlock_eventHearNoise_Parms
{
	float                                              Loudness;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      NoiseMaker;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       NoiseType;                                        		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlanBFramework.PBBaseGameReplicationInfo.SetNoStreamWorldTextureForFrames
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APBBaseGameReplicationInfo_execSetNoStreamWorldTextureForFrames_Parms
{
	int                                                NumFrames;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBaseGameReplicationInfo.PostBeginPlay
// [0x00020102] 
struct APBBaseGameReplicationInfo_execPostBeginPlay_Parms
{
};

// Function PlanBFramework.PBBasePawn.IsFullBodyAnimPlaying
// [0x00020100] 
struct APBBasePawn_execIsFullBodyAnimPlaying_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.PlayFullBodyAnim
// [0x00024100] 
struct APBBasePawn_execPlayFullBodyAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Cycle : 1;                                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              AnimRate;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPauseAtEnd : 1;                                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.PlayFullRagDoll
// [0x00020100] 
struct APBBasePawn_execPlayFullRagDoll_Parms
{
};

// Function PlanBFramework.PBBasePawn.RigidBodyCollision
// [0x00420902] ( FUNC_Event )
struct APBBasePawn_eventRigidBodyCollision_Parms
{
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPrimitiveComponent*                         OtherComponent;                                   		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FCollisionImpactData                        RigidCollisionData;                               		// 0x0008 (0x0024) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ContactIndex;                                     		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.OnTimer_SwitchOffMotors
// [0x00020100] 
struct APBBasePawn_execOnTimer_SwitchOffMotors_Parms
{
};

// Function PlanBFramework.PBBasePawn.OnPhysicsChanged
// [0x00020802] ( FUNC_Event )
struct APBBasePawn_eventOnPhysicsChanged_Parms
{
	unsigned char                                      oldPhysics;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.IsUpperBoneName
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execIsUpperBoneName_Parms
{
	struct FName                                       InName;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.IsLowerBoneName
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execIsLowerBoneName_Parms
{
	struct FName                                       InName;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FName >                          lowerBodyBoneNames;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.SetUpperBonesFixed
// [0x00020102] 
struct APBBasePawn_execSetUpperBonesFixed_Parms
{
	unsigned long                                      bFixed : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class URB_BodyInstance*                         BodyInst;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class URB_BodySetup*                            BodySetup;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.SetLowerBonesFixed
// [0x00020102] 
struct APBBasePawn_execSetLowerBonesFixed_Parms
{
	unsigned long                                      bFixed : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class URB_BodyInstance*                         BodyInst;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class URB_BodySetup*                            BodySetup;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.SetAllBonesFixed
// [0x00020102] 
struct APBBasePawn_execSetAllBonesFixed_Parms
{
	unsigned long                                      bFixed : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class URB_BodyInstance*                         BodyInst;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.HasFixedBones
// [0x00020102] 
struct APBBasePawn_execHasFixedBones_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bFixed : 1;                                       		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class URB_BodyInstance*                         BodyInst;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.TerminateCustomRagdoll
// [0x00020102] 
struct APBBasePawn_execTerminateCustomRagdoll_Parms
{
};

// Function PlanBFramework.PBBasePawn.InitCustomRagdoll
// [0x00020100] 
struct APBBasePawn_execInitCustomRagdoll_Parms
{
	unsigned char                                      targetPhysics;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.TerminateRagdoll
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execTerminateRagdoll_Parms
{
};

// Function PlanBFramework.PBBasePawn.IsNetworkAuthorityPawn
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execIsNetworkAuthorityPawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bIsNetworkAuthorityPawn : 1;                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBBasePawn.CanRender
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execCanRender_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCanRender : 1;                                   		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBBasePawn.RecoverFromRagdoll
// [0x00020102] 
struct APBBasePawn_execRecoverFromRagdoll_Parms
{
};

// Function PlanBFramework.PBBasePawn.TakeHitBlendedOut
// [0x00020902] ( FUNC_Event )
struct APBBasePawn_eventTakeHitBlendedOut_Parms
{
};

// Function PlanBFramework.PBBasePawn.PlayTakeHitEffects
// [0x00020102] 
struct APBBasePawn_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   PBDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.PlayHit
// [0x00024002] 
struct APBBasePawn_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APBBasePlayerController*                  Listener;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	// class UClass*                                   PBDamageType;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.OnVirtualPhysicsWeightChanged
// [0x00020900] ( FUNC_Event )
struct APBBasePawn_eventOnVirtualPhysicsWeightChanged_Parms
{
};

// Function PlanBFramework.PBBasePawn.OnPhysicsWeightChanged
// [0x00020902] ( FUNC_Event )
struct APBBasePawn_eventOnPhysicsWeightChanged_Parms
{
};

// Function PlanBFramework.PBBasePawn.OnPawnCommand
// [0x00022002] 
struct APBBasePawn_execOnPawnCommand_Parms
{
	class APBBasePlayerController*                     playerCtrl;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strCommand;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APBBasePawn*                              PBBasePawn;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsKinematicCommand : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBBasePawn.OnBlendRagdollChildAnimEnd
// [0x00020902] ( FUNC_Event )
struct APBBasePawn_eventOnBlendRagdollChildAnimEnd_Parms
{
	unsigned char                                      eChild;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.ServerSlideDown
// [0x002200C2] 
struct APBBasePawn_execServerSlideDown_Parms
{
	unsigned long                                      bSlide : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.OnDuck
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execOnDuck_Parms
{
	unsigned long                                      bDucked : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.TeleportToSpot
// [0x00020102] 
struct APBBasePawn_execTeleportToSpot_Parms
{
	class ANavigationPoint*                            Spot;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUpdateRotation : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.StopWeaponFiring
// [0x00020000] 
struct APBBasePawn_execStopWeaponFiring_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.PostRenderFor
// [0x00020100] 
struct APBBasePawn_execPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.GetLowerBoneNames
// [0x00420102] 
struct APBBasePawn_execGetLowerBoneNames_Parms
{
	TArray< struct FName >                             lowerBodyBoneNames;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBBasePawn.IsFirstPerson
// [0x00020102] 
struct APBBasePawn_execIsFirstPerson_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APBBasePlayerController*                  PlayerController;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.GetHeadLocAndRot
// [0x00C20103] ( FUNC_Final )
struct APBBasePawn_execGetHeadLocAndRot_Parms
{
	struct FVector                                     HeadLoc;                                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    headRot;                                          		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  vHeadLoc;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FQuat                                    qHeadRot;                                         		// 0x0030 (0x0010) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.GetHeadLocation
// [0x00C20903] ( FUNC_Final | FUNC_Event )
struct APBBasePawn_eventGetHeadLocation_Parms
{
	struct FVector                                     out_vHeadLocation;                                		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HeadLoc;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.TickCameraEyeHeight_Smoothing
// [0x00020903] ( FUNC_Final | FUNC_Event )
struct APBBasePawn_eventTickCameraEyeHeight_Smoothing_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fSmoothingFactor;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.TickCameraEyePlane_Smoothing
// [0x00020903] ( FUNC_Final | FUNC_Event )
struct APBBasePawn_eventTickCameraEyePlane_Smoothing_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fSmoothingFactor;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.Tick_SmoothValue
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execTick_SmoothValue_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fSmoothingFactor;                                 		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fCurrentValue;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTargetValue;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fTargetDistance;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           fSmoothDelta;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.IsAlive
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APBBasePawn_execIsAlive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.TraceTest
// [0x00820102] 
struct APBBasePawn_execTraceTest_Parms
{
	// struct FVector                                  HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceEnd;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.GetHitInfo
// [0x00020103] ( FUNC_Final )
struct APBBasePawn_execGetHitInfo_Parms
{
	struct FTakeHitInfo                                ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.UpdatePawnViewLocation
// [0x00820102] 
struct APBBasePawn_execUpdatePawnViewLocation_Parms
{
	// struct FVector                                  vPivot;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.GetPawnViewLocation
// [0x00020102] 
struct APBBasePawn_execGetPawnViewLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.SetUpdateSkelWhenNotRendered
// [0x00024100] 
struct APBBasePawn_execSetUpdateSkelWhenNotRendered_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.GetDebugStringArray
// [0x00420100] 
struct APBBasePawn_execGetDebugStringArray_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBBasePawn.GetBasePlayerController
// [0x00020102] 
struct APBBasePawn_execGetBasePlayerController_Parms
{
	class APBBasePlayerController*                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.FreezeRagDoll
// [0x00020100] 
struct APBBasePawn_execFreezeRagDoll_Parms
{
	unsigned long                                      bFreeze : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.EncroachedBy
// [0x00020802] ( FUNC_Event )
struct APBBasePawn_eventEncroachedBy_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APBBasePawn*                              P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.DrawStaticDebug
// [0x00822002] 
struct APBBasePawn_execDrawStaticDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APBBasePawn*                              P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UFont*                                    PrevFont;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  ViewPoint;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x0028 (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.AddVelocity
// [0x00024000] 
struct APBBasePawn_execAddVelocity_Parms
{
	struct FVector                                     NewVelocity;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.PlayBleedEffects
// [0x00020102] 
struct APBBasePawn_execPlayBleedEffects_Parms
{
	// class APlayerController*                        LocalPlayerController;                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.PlayRagDoll
// [0x00820102] 
struct APBBasePawn_execPlayRagDoll_Parms
{
	// struct FVector                                  vDirection;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.Suicide
// [0x00020002] 
struct APBBasePawn_execSuicide_Parms
{
};

// Function PlanBFramework.PBBasePawn.SetHandIKEnabled
// [0x00020100] 
struct APBBasePawn_execSetHandIKEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.ResetCharPhysState
// [0x00020102] 
struct APBBasePawn_execResetCharPhysState_Parms
{
};

// Function PlanBFramework.PBBasePawn.SetPawnRBChannels
// [0x00020102] 
struct APBBasePawn_execSetPawnRBChannels_Parms
{
	unsigned long                                      bRagdollMode : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.StopAllAnimations
// [0x00020102] 
struct APBBasePawn_execStopAllAnimations_Parms
{
	// class UAnimNodeSequence*                        SeqNode;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.GoIntoRagdoll
// [0x00820102] 
struct APBBasePawn_execGoIntoRagdoll_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0004 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	// class URB_BodyInstance*                         HipBodyInst;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FMatrix                                  DummyMatrix;                                      		// 0x0030 (0x0040) [0x0000000000000000]              
	// struct FVector                                  ApplyImpulse;                                     		// 0x0070 (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.PlayDying
// [0x00820102] 
struct APBBasePawn_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ApplyImpulse;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ShotDir;                                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0028 (0x001C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bPlayersRagdoll : 1;                              		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UClass*                                   PBDamageType;                                     		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FName                                    DeathAnimName;                                    		// 0x0050 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vHitDirection;                                    		// 0x0058 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vRot;                                             		// 0x0064 (0x000C) [0x0000000000000000]              
	// float                                           dirDotHit;                                        		// 0x0070 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bBehindShot : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           TimeToBlendRangdoll;                              		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           fDeathAnimLength;                                 		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.CanGrabLadder
// [0x00020002] 
struct APBBasePawn_execCanGrabLadder_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fKmH_Z;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePawn.Bleed
// [0x00420100] 
struct APBBasePawn_execBleed_Parms
{
	struct FTakeHitInfo                                HitInfo;                                          		// 0x0000 (0x0040) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBBasePawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APBBasePawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePawn.GetWeaponInHandBoneName
// [0x00020102] 
struct APBBasePawn_execGetWeaponInHandBoneName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.HasRagdoll
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBBasePawn_execHasRagdoll_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.IsLayingOnBack
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBBasePawn_execIsLayingOnBack_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.GetPhysicsWeight
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBBasePawn_execGetPhysicsWeight_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePawn.RestorePreRagdollCollisionComponent
// [0x00020400] ( FUNC_Native )
struct APBBasePawn_execRestorePreRagdollCollisionComponent_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.UpdateWeaponRotation
// [0x00020100] 
struct APBBasePlayerController_execUpdateWeaponRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePlayerController.UpdateCameraModeBlendFactor
// [0x00020102] 
struct APBBasePlayerController_execUpdateCameraModeBlendFactor_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fCameraBlendModeVelocity;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fMultiplicator;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fLastCameraModeBlendFactor;                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePlayerController.GetPlayerViewPoint
// [0x00420102] 
struct APBBasePlayerController_execGetPlayerViewPoint_Parms
{
	struct FVector                                     POVLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    POVRotation;                                      		// 0x000C (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBBasePlayerController.TestNavigation
// [0x00020102] 
struct APBBasePlayerController_execTestNavigation_Parms
{
	// class ANavigationPoint*                         navPoint;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ANavigationPoint*                         nextNavPoint;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePlayerController.SetCameraMode
// [0x00020002] 
struct APBBasePlayerController_execSetCameraMode_Parms
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bCameraModeChanged : 1;                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBBasePlayerController.SetBehindView
// [0x00020102] 
struct APBBasePlayerController_execSetBehindView_Parms
{
	unsigned long                                      bNewBehindView : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBBasePlayerController.ServerSuicide
// [0x002200C2] 
struct APBBasePlayerController_execServerSuicide_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.ServerSetCameraMode
// [0x002200C2] 
struct APBBasePlayerController_execServerSetCameraMode_Parms
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePlayerController.OnCameraTransitionFinished
// [0x00020100] 
struct APBBasePlayerController_execOnCameraTransitionFinished_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.OnCameraModeChanged
// [0x00020102] 
struct APBBasePlayerController_execOnCameraModeChanged_Parms
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bIsServer : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBBasePlayerController.NotifyKilled
// [0x00020002] 
struct APBBasePlayerController_execNotifyKilled_Parms
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 Killed;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       KilledPawn;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      damageTyp;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePlayerController.IsFreeCamera
// [0x00020102] 
struct APBBasePlayerController_execIsFreeCamera_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.IsSecurityCamera
// [0x00020102] 
struct APBBasePlayerController_execIsSecurityCamera_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.IsThirdPerson
// [0x00020102] 
struct APBBasePlayerController_execIsThirdPerson_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.IsFirstPerson
// [0x00020103] ( FUNC_Final )
struct APBBasePlayerController_execIsFirstPerson_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.ResetCameraMode
// [0x00020802] ( FUNC_Event )
struct APBBasePlayerController_eventResetCameraMode_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.ShouldInterpolateWeaponRotation
// [0x00020102] 
struct APBBasePlayerController_execShouldInterpolateWeaponRotation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.SetCameraAction
// [0x00020102] 
struct APBBasePlayerController_execSetCameraAction_Parms
{
	class APBCameraAction*                             pAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APBCameraAction*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.GetCameraManager
// [0x00020102] 
struct APBBasePlayerController_execGetCameraManager_Parms
{
	class APBCameraActionManager*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.ClientSetCameraMode
// [0x010201C2] 
struct APBBasePlayerController_execClientSetCameraMode_Parms
{
	struct FName                                       NewCamMode;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBBasePlayerController.ClientStopActorSoundComponent
// [0x00020102] 
struct APBBasePlayerController_execClientStopActorSoundComponent_Parms
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      SourceActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeOutTime;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UAudioComponent*                          AC;                                               		// 0x000C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAudioComponent*                          CheckAC;                                          		// 0x0010 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function PlanBFramework.PBBasePlayerController.ClientHearSound
// [0x01024942] ( FUNC_Event )
struct APBBasePlayerController_eventClientHearSound_Parms
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      SourceActor;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SourceLocation;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bIsOccluded : 1;                                  		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class UAudioComponent*                          AC;                                               		// 0x001C (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// float                                           FadeOutTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class USoundNodeWave*                           SNW;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePlayerController.CalculateDeltaTime
// [0x00420102] 
struct APBBasePlayerController_execCalculateDeltaTime_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fLastTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBasePlayerController.IsDeveloperInstallation
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct APBBasePlayerController_execIsDeveloperInstallation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.GetViewRayDot
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBBasePlayerController_execGetViewRayDot_Parms
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBasePlayerController.MapCheck
// [0x00020202] ( FUNC_Exec )
struct APBBasePlayerController_execMapCheck_Parms
{
	struct FString                                     strCommandline;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBBasePlayerController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct APBBasePlayerController_eventPostBeginPlay_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.ShowMapCheckDlg
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBBasePlayerController_execShowMapCheckDlg_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.NotifyCameraActionUninstalled
// [0x00020100] 
struct APBBasePlayerController_execNotifyCameraActionUninstalled_Parms
{
};

// Function PlanBFramework.PBBasePlayerController.GetAppSeconds
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBBasePlayerController_execGetAppSeconds_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBDebugWindow.Render
// [0x00020102] 
struct UPBDebugWindow_execRender_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Num;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBDebugWindow.Scroll
// [0x00020102] 
struct UPBDebugWindow_execScroll_Parms
{
};

// Function PlanBFramework.PBDebugWindow.SetText
// [0x00020102] 
struct UPBDebugWindow_execSetText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBDebugWindow.Close
// [0x00020400] ( FUNC_Native )
struct UPBDebugWindow_execClose_Parms
{
};

// Function PlanBFramework.PBDebugWindow.Text
// [0x00020400] ( FUNC_Native )
struct UPBDebugWindow_execText_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     txt;                                              		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBDebugWindow.Clear
// [0x00020400] ( FUNC_Native )
struct UPBDebugWindow_execClear_Parms
{
};

// Function PlanBFramework.PBDebugWindow.Open
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBDebugWindow_execOpen_Parms
{
	int                                                PosX;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PosY;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBExplosionLight.ValidateLightSetting
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBExplosionLight_execValidateLightSetting_Parms
{
};

// Function PlanBFramework.PBExplosionLight.ResetLight
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBExplosionLight_execResetLight_Parms
{
};

// Function PlanBFramework.PBLevelCheckCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBLevelCheckCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsEffectGenerator.SpawnExplosionEffects
// [0x00420102] 
struct UPBPhysicsEffectGenerator_execSpawnExplosionEffects_Parms
{
	struct FExplosionInfo                              expInfo;                                          		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Location;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AEmitter*                                    ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AEmitter*                                 projExplosion;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	// class UAudioComponent*                          AC;                                               		// 0x0034 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class APlayerController*                        P;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBPhysicsEffectGenerator.SetSoundMode
// [0x00020102] 
struct UPBPhysicsEffectGenerator_execSetSoundMode_Parms
{
	struct FName                                       SoundModeName;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fMaxDistance;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UAudioDevice*                             Device;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        P;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBPhysicsEffectGenerator.CreateExplosionLight
// [0x00420102] 
struct UPBPhysicsEffectGenerator_execCreateExplosionLight_Parms
{
	struct FExplosionInfo                              expInfo;                                          		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class AActor*                                      attachTo;                                         		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Location;                                         		// 0x0024 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UPBExplosionLight*                           ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UPBExplosionLight*                        L;                                                		// 0x0034 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UPBExplosionLight*                        presetLight;                                      		// 0x0038 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UClass*                                   ExplosionLightClass;                              		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBPhysicsEffectGenerator.ShouldSpawnExplosionLight
// [0x00020102] 
struct UPBPhysicsEffectGenerator_execShouldSpawnExplosionLight_Parms
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBPhysicsEffectGenerator.SpawnSoundIndicator
// [0x00020100] 
struct UPBPhysicsEffectGenerator_execSpawnSoundIndicator_Parms
{
	class UAudioComponent*                             AC;                                               		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function PlanBFramework.PBPhysicsEffectGenerator.RecurseSoundNodes
// [0x00022102] 
struct UPBPhysicsEffectGenerator_execRecurseSoundNodes_Parms
{
	class USoundNode*                                  sndNode;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             nChildren;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class USoundNodeWave*                           sndNodeWave;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bValidSoundCue : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBPhysicsEffectGenerator.IsSoundCueValid
// [0x00022102] 
struct UPBPhysicsEffectGenerator_execIsSoundCueValid_Parms
{
	class USoundCue*                                   sndCue;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsEffectGenerator.CreateActorAudioComponentAt
// [0x00820102] 
struct UPBPhysicsEffectGenerator_execCreateActorAudioComponentAt_Parms
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SourceLocation;                                   		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UAudioComponent*                          AC;                                               		// 0x0014 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class AActor*                                   Instigator;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasNearAudioComponent : 1;                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// class UAudioComponent*                          actorAC;                                          		// 0x0020 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// struct FVector                                  vDistance;                                        		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBPhysicsEffectGenerator.GetVelocityVolumeMultiplier
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsEffectGenerator_execGetVelocityVolumeMultiplier_Parms
{
	float                                              fVelocityKmh;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBReplaceActorCommandlet.Main
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPBReplaceActorCommandlet_eventMain_Parms
{
	struct FString                                     Params;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBVehicleAutoPilotController.ResetPawnControls
// [0x00020000] 
struct APBVehicleAutoPilotController_execResetPawnControls_Parms
{
};

// Function PlanBFramework.PBVehicleAutoPilotController.FindRandomNavigationPointXXX
// [0x00020102] 
struct APBVehicleAutoPilotController_execFindRandomNavigationPointXXX_Parms
{
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         navPoint;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nMaxTry;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nTry;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBVehicleAutoPilotController.FindRandomNavigationPoint
// [0x00020102] 
struct APBVehicleAutoPilotController_execFindRandomNavigationPoint_Parms
{
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         navPoint;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AVolumePathNode*                          VolumePathNode;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             nNavigationPoints;                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             nRandOffset;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             nNavIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBVehicleAutoPilotController.FindNextNavigationPoint
// [0x00020102] 
struct APBVehicleAutoPilotController_execFindNextNavigationPoint_Parms
{
	class ANavigationPoint*                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         nextNavPoint;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBVehicleAutoPilotController.DrawDebug
// [0x00020100] 
struct APBVehicleAutoPilotController_execDrawDebug_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBVehicleAutoPilotController_Aircraft.ResetPawnControls
// [0x00020002] 
struct APBVehicleAutoPilotController_Aircraft_execResetPawnControls_Parms
{
	// class AVehicle*                                 V;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.TakeRadiusDamage
// [0x00024102] 
struct APBKActor_execTakeRadiusDamage_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullDamage : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExponent;                            		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   bCurrDamageAppliesImpulse : 1;                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBKActor.TakeDamage
// [0x00024002] 
struct APBKActor_execTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class APBDebugActor*                            dbgActor;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCurrDamageAppliesImpulse : 1;                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBKActor.ShiftToStaticMesh
// [0x00020102] 
struct APBKActor_execShiftToStaticMesh_Parms
{
	class UStaticMesh*                                 NewMesh;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNoCollision : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UMaterial*                                   Material;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bNewBlockActors : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUpdateMesh : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bUpdateMaterial : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBKActor.ShiftStaticMesh
// [0x00020102] 
struct APBKActor_execShiftStaticMesh_Parms
{
	// class UStaticMesh*                              NewMesh;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNoCollision : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UMaterial*                                NewMaterial;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       baseMaterialInstance;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.RemoveEffects
// [0x00020102] 
struct APBKActor_execRemoveEffects_Parms
{
};

// Function PlanBFramework.PBKActor.Reset
// [0x00020102] 
struct APBKActor_execReset_Parms
{
};

// Function PlanBFramework.PBKActor.Destroyed
// [0x00020902] ( FUNC_Event )
struct APBKActor_eventDestroyed_Parms
{
};

// Function PlanBFramework.PBKActor.BehindReset
// [0x00020002] 
struct APBKActor_execBehindReset_Parms
{
};

// Function PlanBFramework.PBKActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APBKActor_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBKActor.PostBeginPlay
// [0x00020102] 
struct APBKActor_execPostBeginPlay_Parms
{
};

// Function PlanBFramework.PBKActor.PlayRestOnGroundEffect
// [0x00020902] ( FUNC_Event )
struct APBKActor_eventPlayRestOnGroundEffect_Parms
{
	class UParticleSystemComponent*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UParticleSystemComponent*                 Emitter;                                          		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function PlanBFramework.PBKActor.PlayWakeupEffect
// [0x00020902] ( FUNC_Event )
struct APBKActor_eventPlayWakeupEffect_Parms
{
	class UParticleSystemComponent*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UParticleSystemComponent*                 Emitter;                                          		// 0x0004 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function PlanBFramework.PBKActor.OnWakeRigidBody
// [0x00820102] 
struct APBKActor_execOnWakeRigidBody_Parms
{
	class UPBSeqAct_WakeRigidBody*                     seqAction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  vLinearVel;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vAngularVel;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	// class APBKActor*                                PBKActor;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.OnBecomeStationary
// [0x00020902] ( FUNC_Event )
struct APBKActor_eventOnBecomeStationary_Parms
{
};

// Function PlanBFramework.PBKActor.OnClientReset
// [0x010201C2] 
struct APBKActor_execOnClientReset_Parms
{
};

// Function PlanBFramework.PBKActor.GetDebugStringArray
// [0x00420102] 
struct APBKActor_execGetDebugStringArray_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             Health;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.EncroachingOn_Prototype
// [0x00820002] 
struct APBKActor_execEncroachingOn_Prototype_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AController*                              InstigatorController;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vMomentum;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           fVelocityDamage;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vVelocityKmh;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           fVelocityKmh;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.EncroachingOn
// [0x00020002] 
struct APBKActor_execEncroachingOn_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBKActor.DrawDebug
// [0x00020102] 
struct APBKActor_execDrawDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// TArray< struct FString >                        DebugInfo;                                        		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function PlanBFramework.PBKActor.ShouldDrawDebug
// [0x00420102] 
struct APBKActor_execShouldDrawDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDistance;                                        		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              fViewRayDot;                                      		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBKActor.DrawStaticDebug
// [0x00022002] 
struct APBKActor_execDrawStaticDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APBKActor*                                PBKActor;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fViewRayDot;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.DebugCommand
// [0x00822002] 
struct APBKActor_execDebugCommand_Parms
{
	class APBBasePlayerController*                     playerCtrl;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strCommand;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class APBKActor*                                PBKActor;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bIsResetCommand : 1;                              		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bIsWakeCommand : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bIsPhysicsCommand : 1;                            		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  vLinearVelocity;                                  		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  vAngularVelocity;                                 		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.ModifyRadiusDamage
// [0x00020002] 
struct APBKActor_execModifyRadiusDamage_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fBaseDamage;                                      		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBKActor.AGHurtRadius
// [0x00024102] 
struct APBKActor_execAGHurtRadius_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fFinalDamage;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	// class AActor*                                   Victim;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCausedDamage : 1;                                		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBKActor.Detach
// [0x00020002] 
struct APBKActor_execDetach_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBKActor.Attach
// [0x00020002] 
struct APBKActor_execAttach_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APawn*                                    P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBKActor.CreateExplosionLight
// [0x00024102] 
struct APBKActor_execCreateExplosionLight_Parms
{
	class AActor*                                      attachTo;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UPBExplosionLight*                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UPBExplosionLight*                        L;                                                		// 0x0008 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function PlanBFramework.PBKActor.CreateAudioComponentAt
// [0x00020102] 
struct APBKActor_execCreateAudioComponentAt_Parms
{
	class USoundCue*                                   ASound;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SourceLocation;                                   		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UAudioComponent*                             ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// class UAudioComponent*                          AC;                                               		// 0x0014 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
};

// Function PlanBFramework.PBKActor.CheckForErrors
// [0x00020002] 
struct APBKActor_execCheckForErrors_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bErrors : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBKActor.SetMaximumAngularVelocity
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBKActor_execSetMaximumAngularVelocity_Parms
{
	float                                              MaxVelocity;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBKActor.WakeRigidBody
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBKActor_execWakeRigidBody_Parms
{
	struct FVector                                     InitialLinearVelocity;                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InitialAngularVelocity;                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBKActor.ResetPhysics
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct APBKActor_execResetPhysics_Parms
{
};

// Function PlanBFramework.PBKActor.PutToSleep
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBKActor_execPutToSleep_Parms
{
};

// Function PlanBFramework.PBKActor.GetRBMass
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct APBKActor_execGetRBMass_Parms
{
	int                                                nBodyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBKActor.GetPhysicalMaterial
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct APBKActor_execGetPhysicalMaterial_Parms
{
	class UPhysicalMaterial*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsBasePawn.PlayTakeHitEffects_U3
// [0x00020100] 
struct APBPhysicsBasePawn_execPlayTakeHitEffects_U3_Parms
{
};

// Function PlanBFramework.PBPhysicsBasePawn.PlayHit_U3
// [0x00020000] 
struct APBPhysicsBasePawn_execPlayHit_U3_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsBasePawn.PlayHit
// [0x00024002] 
struct APBPhysicsBasePawn_execPlayHit_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlanBFramework.PBPhysicsBasePawn.IsUpperBoneName
// [0x00020103] ( FUNC_Final )
struct APBPhysicsBasePawn_execIsUpperBoneName_Parms
{
	struct FName                                       InName;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsBasePawn.IsLowerBoneName
// [0x00020103] ( FUNC_Final )
struct APBPhysicsBasePawn_execIsLowerBoneName_Parms
{
	struct FName                                       InName;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FName >                          lowerBodyBoneNames;                               		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBPhysicsBasePawn.GetLowerBoneNames
// [0x00420100] 
struct APBPhysicsBasePawn_execGetLowerBoneNames_Parms
{
	TArray< struct FName >                             lowerBodyBoneNames;                               		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBPhysicsBasePawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APBPhysicsBasePawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetDebugInfo
// [0x00420102] 
struct UPBPhysicsSynchronizer_execGetDebugInfo_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebug_ResetInformation
// [0x00020102] 
struct UPBPhysicsSynchronizer_execDrawDebug_ResetInformation_Parms
{
	class AActor*                                      invoker;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.StoreResetInformation
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execStoreResetInformation_Parms
{
	struct FVector                                     InLocation;                                       		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    InRotation;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.ResetToInitialPhysicsState
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execResetToInitialPhysicsState_Parms
{
};

// Function PlanBFramework.PBPhysicsSynchronizer.ResetLastReceivedSendData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execResetLastReceivedSendData_Parms
{
};

// Function PlanBFramework.PBPhysicsSynchronizer.OnRigidBodyStateReplication
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execOnRigidBodyStateReplication_Parms
{
	struct FRigidBodyState                             RBState;                                          		// 0x0000 (0x0040) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.MeterToUT
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execMeterToUT_Parms
{
	float                                              fMeter;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.KmhToUTs
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execKmhToUTs_Parms
{
	float                                              fKmH;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetRBMass
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execGetRBMass_Parms
{
	int                                                nBodyIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.UTToMeter
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execUTToMeter_Parms
{
	float                                              fU3;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.UTsToKmh
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execUTsToKmh_Parms
{
	float                                              fU3Velocity;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetKmh
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execGetKmh_Parms
{
	struct FVector                                     vU3Velocity;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.InitialPhysicsStateSnapshot
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execInitialPhysicsStateSnapshot_Parms
{
};

// Function PlanBFramework.PBPhysicsSynchronizer.GetCorrectPhysicalMaterialForStaticMesh
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execGetCorrectPhysicalMaterialForStaticMesh_Parms
{
	class UStaticMeshComponent*                        SMC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	class UPhysicalMaterial*                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawPhysicsDebug
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execDrawPhysicsDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugPoint
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execDrawDebugPoint_Parms
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x000D (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x000E (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugLine
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execDrawDebugLine_Parms
{
	struct FVector                                     vStart;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vEnd;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDrawPoints : 1;                                  		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugTraceLine
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execDrawDebugTraceLine_Parms
{
	struct FVector                                     vStart;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vEnd;                                             		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vHitLocation;                                     		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebugDiamond
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execDrawDebugDiamond_Parms
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      R;                                                		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      G;                                                		// 0x0011 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B;                                                		// 0x0012 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAddPointMarker : 1;                              		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.DrawDebug
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execDrawDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.HasPhysicsDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execHasPhysicsDebugFlag_Parms
{
	unsigned char                                      eDebugFlag;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.TogglePhysicsDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execTogglePhysicsDebugFlag_Parms
{
	unsigned char                                      eDebugFlag;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.HasLineCheckDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execHasLineCheckDebugFlag_Parms
{
	unsigned char                                      eDebugFlag;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.ToggleLineCheckDebugFlag
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execToggleLineCheckDebugFlag_Parms
{
	unsigned char                                      eDebugFlag;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBPhysicsSynchronizer.EnableOnRigidBodyCollision
// [0x00022501] ( FUNC_Final | FUNC_Native )
struct UPBPhysicsSynchronizer_execEnableOnRigidBodyCollision_Parms
{
	unsigned long                                      bValue : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetDebugInfo
// [0x00420100] 
struct UPBSkeletalMeshExtension_execGetDebugInfo_Parms
{
	TArray< struct FString >                           DebugInfo;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBSkeletalMeshExtension.HasSocket
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execHasSocket_Parms
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.HasBone
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execHasBone_Parms
{
	struct FName                                       skelBoneName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetSkeletalMesh
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetSkeletalMesh_Parms
{
	class USkeletalMesh*                               ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetNamedMeshLocationAndRotation
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetNamedMeshLocationAndRotation_Parms
{
	struct FName                                       refName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vLocation;                                        		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    rRotation;                                        		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetNamedMeshLocation
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetNamedMeshLocation_Parms
{
	struct FName                                       refName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vLocation;                                        		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetMatchingBoneIndex
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetMatchingBoneIndex_Parms
{
	struct FName                                       skelBoneName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetCLODBoneName
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetCLODBoneName_Parms
{
	struct FName                                       skelBoneNamePattern;                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       skelBoneName;                                     		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetBoneName
// [0x00420501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetBoneName_Parms
{
	int                                                BoneIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       skelBoneName;                                     		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetBoneLocation
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetBoneLocation_Parms
{
	int                                                BoneIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.GetBoneIndex
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execGetBoneIndex_Parms
{
	struct FName                                       skelBoneName;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBSkeletalMeshExtension.IsStringInName
// [0x00020501] ( FUNC_Final | FUNC_Native )
struct UPBSkeletalMeshExtension_execIsStringInName_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       testName;                                         		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBaseDamageType.GetCorrectDeathAnimationFromHitLoc
// [0x00022002] 
struct UPBBaseDamageType_execGetCorrectDeathAnimationFromHitLoc_Parms
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBehind : 1;                                      		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// int                                             iRand;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBBaseDamageType.GetHitEffectDuration
// [0x00022002] 
struct UPBBaseDamageType_execGetHitEffectDuration_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBBaseDamageType.SpawnHitEffect
// [0x00022000] 
struct UPBBaseDamageType_execSpawnHitEffect_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       BoneName;                                         		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraActionManager.SetCameraPosAndRot
// [0x00020102] 
struct APBCameraActionManager_execSetCameraPosAndRot_Parms
{
	class APBBasePawn*                                 pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vPosition;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    rRotation;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraActionManager.UpdateCamera
// [0x00420102] 
struct APBCameraActionManager_execUpdateCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutCamLoc;                                        		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    OutCamRot;                                        		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              OutFOV;                                           		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraActionManager.GetWeaponRotation
// [0x00420102] 
struct APBCameraActionManager_execGetWeaponRotation_Parms
{
	struct FRotator                                    weaponRotator;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraActionManager.GetPlayerController
// [0x00020102] 
struct APBCameraActionManager_execGetPlayerController_Parms
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraActionManager.DrawPostProcessEffect
// [0x00020102] 
struct APBCameraActionManager_execDrawPostProcessEffect_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraActionManager.DrawHUD
// [0x00020102] 
struct APBCameraActionManager_execDrawHUD_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraActionManager.InstallCameraAction
// [0x00020102] 
struct APBCameraActionManager_execInstallCameraAction_Parms
{
	class APBCameraAction*                             pCA;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APBCameraAction*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APBCameraAction*                          pActionObject;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBCameraActionManager.InstallCameraActionClass
// [0x00020102] 
struct APBCameraActionManager_execInstallCameraActionClass_Parms
{
	class UClass*                                      pCameraClass;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APBCameraAction*                             ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APBCameraAction*                          pAction;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBCameraActionManager.ShouldInterpolateWeaponRotation
// [0x00020102] 
struct APBCameraActionManager_execShouldInterpolateWeaponRotation_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraActionManager.UninstallCameraAction
// [0x00024102] 
struct APBCameraActionManager_execUninstallCameraAction_Parms
{
	class APBCameraAction*                             pCA;                                              		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function PlanBFramework.PBCameraActionManager.ActivateHighestPriorityAction
// [0x00020102] 
struct APBCameraActionManager_execActivateHighestPriorityAction_Parms
{
	// class APBCameraAction*                          pHighestAction;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fHighestPriority;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBCameraActionManager.FindCameraActionIndex
// [0x00020102] 
struct APBCameraActionManager_execFindCameraActionIndex_Parms
{
	class APBCameraAction*                             pAction;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBCameraActionManager.IsCameraAction
// [0x00020102] 
struct APBCameraActionManager_execIsCameraAction_Parms
{
	class UClass*                                      pCameraActionClass;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraActionManager.ClearAllCameraActions
// [0x00020102] 
struct APBCameraActionManager_execClearAllCameraActions_Parms
{
};

// Function PlanBFramework.PBCameraActionManager.RemoveActionFromStack
// [0x00020102] 
struct APBCameraActionManager_execRemoveActionFromStack_Parms
{
	class APBCameraAction*                             pToRemove;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBCameraActionManager.AddActionToStack
// [0x00020102] 
struct APBCameraActionManager_execAddActionToStack_Parms
{
	class APBCameraAction*                             pToAdd;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           fCurPriority;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBCameraActionManager.PostBeginPlay
// [0x00020102] 
struct APBCameraActionManager_execPostBeginPlay_Parms
{
};

// Function PlanBFramework.PBCameraAction.SetCameraPosAndRot
// [0x00020102] 
struct APBCameraAction_execSetCameraPosAndRot_Parms
{
	class APBBasePawn*                                 pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vPosition;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    rRotation;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              fFOV;                                             		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraAction.UpdateWeaponPosAndRot
// [0x00420102] 
struct APBCameraAction_execUpdateWeaponPosAndRot_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutCamLoc;                                        		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    OutCamRot;                                        		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBCameraAction.UpdateCamera
// [0x00420102] 
struct APBCameraAction_execUpdateCamera_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Target;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     OutCamLoc;                                        		// 0x0008 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    OutCamRot;                                        		// 0x0014 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              OutFOV;                                           		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraAction.IsDeactivationPossible
// [0x00020102] 
struct APBCameraAction_execIsDeactivationPossible_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraAction.DrawPostProcessEffect
// [0x00020102] 
struct APBCameraAction_execDrawPostProcessEffect_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraAction.DrawHUD
// [0x00020100] 
struct APBCameraAction_execDrawHUD_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBCameraAction.GetWeaponRotation
// [0x00420102] 
struct APBCameraAction_execGetWeaponRotation_Parms
{
	struct FRotator                                    weaponRotator;                                    		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraAction.GetActionPriority
// [0x00020102] 
struct APBCameraAction_execGetActionPriority_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBCameraAction.DeactivateAction
// [0x00020102] 
struct APBCameraAction_execDeactivateAction_Parms
{
};

// Function PlanBFramework.PBCameraAction.ActivateAction
// [0x00020102] 
struct APBCameraAction_execActivateAction_Parms
{
	class APBCameraActionManager*                      pManager;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBDebugActor.Tick
// [0x00020902] ( FUNC_Event )
struct APBDebugActor_eventTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBDebugActor.SpawnStatic
// [0x00026102] 
struct APBDebugActor_execSpawnStatic_Parms
{
	class AActor*                                      creator;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vLocation;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPersistent : 1;                                  		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class APBDebugActor*                               ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APBDebugActor*                            pbDebugText;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBDebugActor.ShouldDrawDebug
// [0x00420102] 
struct APBDebugActor_execShouldDrawDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDistance;                                        		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              fViewRayDot;                                      		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBDebugActor.DrawDebug
// [0x00020100] 
struct APBDebugActor_execDrawDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBDebugActor.DrawStaticDebug
// [0x00022002] 
struct APBDebugActor_execDrawStaticDebug_Parms
{
	class APBBasePlayerController*                     localPlayerCtrl;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APBDebugActor*                            pbDebugText;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           fViewRayDot;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBDebugActor.AddInfo
// [0x00020102] 
struct APBDebugActor_execAddInfo_Parms
{
	struct FString                                     Info;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function PlanBFramework.PBFlockable.GetAvoidance
// [0x00020100] 
struct APBFlockable_execGetAvoidance_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBFlockable.AddAvoidance
// [0x00020100] 
struct APBFlockable_execAddAvoidance_Parms
{
	struct FVector                                     V;                                                		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBFlockable.ResetAvoidance
// [0x00020100] 
struct APBFlockable_execResetAvoidance_Parms
{
};

// Function PlanBFramework.PBFlockable.SetTarget
// [0x00420100] 
struct APBFlockable_execSetTarget_Parms
{
	struct FVector                                     pos;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBFlockable.SetVelocity
// [0x00020100] 
struct APBFlockable_execSetVelocity_Parms
{
	float                                              _speed;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBFlockable.SetVelocityRange
// [0x00420100] 
struct APBFlockable_execSetVelocityRange_Parms
{
	struct FRange                                      _range;                                           		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBFlockable.SetScaleRange
// [0x00420100] 
struct APBFlockable_execSetScaleRange_Parms
{
	struct FRange                                      _range;                                           		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function PlanBFramework.PBFlockable.SetFlock
// [0x00020100] 
struct APBFlockable_execSetFlock_Parms
{
	class AActor*                                      flock;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBFlockable.SetAvoidanceRadius
// [0x00020100] 
struct APBFlockable_execSetAvoidanceRadius_Parms
{
	float                                              _radius;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBFlockable.GetAvoidanceRadius
// [0x00020100] 
struct APBFlockable_execGetAvoidanceRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function PlanBFramework.PBFlockable.Animate
// [0x00020100] 
struct APBFlockable_execAnimate_Parms
{
	struct FName                                       movementType;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBFlockable.Reset
// [0x00020000] 
struct APBFlockable_execReset_Parms
{
};

// Function PlanBFramework.PBTexSwitchComponent.ApplyOffset
// [0x010201C2] 
struct UPBTexSwitchComponent_execApplyOffset_Parms
{
	class UMeshComponent*                              Comp;                                             		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	int                                                iMaxHealth;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iCurrHealth;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fShiftValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBTexSwitchComponent.Initialize
// [0x00020102] 
struct UPBTexSwitchComponent_execInitialize_Parms
{
	class UMeshComponent*                              Comp;                                             		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UMaterialInterface*                       ShiftMaterial;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBTexSwitchComponent.Reset
// [0x00020102] 
struct UPBTexSwitchComponent_execReset_Parms
{
};

// Function PlanBFramework.PBTextSingleSwitchComponent.ApplyOffset
// [0x010201C2] 
struct UPBTextSingleSwitchComponent_execApplyOffset_Parms
{
	class UMeshComponent*                              Comp;                                             		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	int                                                iMaxHealth;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                iCurrHealth;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           fShiftValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBStaticMeshDestructible.ShiftToStaticMesh
// [0x00020102] 
struct APBStaticMeshDestructible_execShiftToStaticMesh_Parms
{
	class UStaticMesh*                                 NewMesh;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bNoCollision : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	class UMaterial*                                   Material;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   bNewBlockActors : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function PlanBFramework.PBStaticMeshDestructible.ShiftStaticMesh
// [0x00020102] 
struct APBStaticMeshDestructible_execShiftStaticMesh_Parms
{
	// class UStaticMesh*                              NewMesh;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bNoCollision : 1;                                 		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// class UMaterial*                                NewMaterial;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UMaterialInterface*                       baseMaterialInstance;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBStaticMeshDestructible.StopPhysicsTimer
// [0x00020002] 
struct APBStaticMeshDestructible_execStopPhysicsTimer_Parms
{
};

// Function PlanBFramework.PBStaticMeshDestructible.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct APBStaticMeshDestructible_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBStaticMeshDestructible.OnSetMaterial
// [0x00020002] 
struct APBStaticMeshDestructible_execOnSetMaterial_Parms
{
	class USeqAct_SetMaterial*                         Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBStaticMeshDestructible.OnTriggerDestructible
// [0x00020102] 
struct APBStaticMeshDestructible_execOnTriggerDestructible_Parms
{
	class UPBSeqAct_TriggerDestructible*               seqAction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBStaticMeshDestructible.ClientTakeDamage
// [0x00020102] 
struct APBStaticMeshDestructible_execClientTakeDamage_Parms
{
};

// Function PlanBFramework.PBStaticMeshDestructible.ReliableHit
// [0x010201C2] 
struct APBStaticMeshDestructible_execReliableHit_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBStaticMeshDestructible.NonReliableHit
// [0x01020142] 
struct APBStaticMeshDestructible_execNonReliableHit_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function PlanBFramework.PBStaticMeshDestructible.TakeDamage
// [0x00024002] 
struct APBStaticMeshDestructible_execTakeDamage_Parms
{
	int                                                DamageAmount;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 EventInstigator;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             Idx;                                              		// 0x0044 (0x0004) [0x0000000000000000]              
	// class USeqEvent_TakeDamage*                     dmgEvent;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function PlanBFramework.PBStaticMeshDestructible.ClientReset
// [0x010201C2] 
struct APBStaticMeshDestructible_execClientReset_Parms
{
};

// Function PlanBFramework.PBStaticMeshDestructible.Reset
// [0x00020002] 
struct APBStaticMeshDestructible_execReset_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif