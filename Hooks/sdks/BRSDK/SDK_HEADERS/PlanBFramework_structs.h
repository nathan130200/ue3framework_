/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlanBFramework_structs.h
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

// ScriptStruct PlanBFramework.PBBasePawn.TakeHitInfo
// 0x0040
struct FTakeHitInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FVector                                     vHitDirection;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	class AActor*                                      Originator;                                       		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBBasePawn.CameraSetupData
// 0x0044
struct FCameraSetupData
{
	struct FVector                                     vModelHeadPosition;                               		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vModelEyePosition;                                		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     vCameraPivot;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	float                                              fEyeHeight_Walk;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEyeHeight_Crouch;                                		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEyeHeight_Current;                               		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              fEyeHeight_Camera;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FVector                                     vSmoothCameraPlane;                               		// 0x0034 (0x000C) [0x0000000000000000]              
	unsigned long                                      bSmoothCameraHeight : 1;                          		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSmoothCameraPlane : 1;                           		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bValid : 1;                                       		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct PlanBFramework.PBBasePawn.FootStepSoundData
// 0x0008
struct FFootStepSoundData
{
	float                                              fMaxVelocityKmH_AlternateSound;                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxVelocityKmH_FullVolume;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBFramework.PBBasePlayerController.CameraTransitionInfo
// 0x0020
struct FCameraTransitionInfo
{
	float                                              SeatCameraScale;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CameraModeBlendFactor;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LastCamTime;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DeltaTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FRotator                                    LastCamRot;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	unsigned long                                      bCameraTransitionFinished : 1;                    		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PlanBFramework.PBExplosionLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBFramework.PBFlockable.Range
// 0x0008
struct FRange
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBFramework.PBPhysicsSynchronizer.StaticMeshShiftDesc
// 0x000C
struct FStaticMeshShiftDesc
{
	class UStaticMesh*                                 StaticMesh;                                       		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UMaterial*                                   Material;                                         		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      bNoCollision : 1;                                 		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct PlanBFramework.PBPhysicsSynchronizer.ActorResetInformation
// 0x0018
struct FActorResetInformation
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBPhysicsSynchronizer.RigidBodyStateStats
// 0x0050
struct FRigidBodyStateStats
{
	float                                              PositionDisplacement_Min;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PositionDisplacement_Max;                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Count_SendData;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Count_ReceiveData;                                		// 0x000C (0x0004) [0x0000000000000000]              
	struct FRigidBodyState                             LastReceivedSendState;                            		// 0x0010 (0x0040) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBPhysicsSynchronizer.RigidBodyStateDifference
// 0x0088
struct FRigidBodyStateDifference
{
	struct FRigidBodyState                             CurrentPhysicsState;                              		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FRigidBodyState                             LastReceivedSendState;                            		// 0x0040 (0x0040) [0x0000000000000000]              
	float                                              AngErrorAccumulator;                              		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              PositionDisplacement;                             		// 0x0084 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBPhysicsEffectGenerator.ExplosionInfo
// 0x0020
struct FExplosionInfo
{
	class UPBExplosionLight*                           ExplosionLight;                                   		// 0x0000 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bCreateExplosionLight : 1;                        		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UParticleSystem*                             ProjExplosionTemplate;                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExplosionSound;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsFlashBangFx : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       ExplosionSoundModeName;                           		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fExplosionSoundModeDistance;                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct PlanBFramework.PBPhysicsBasePawn.CustomRagdollConfig
// 0x0014
struct FCustomRagdollConfig
{
	float                                              BlendToPhysicsTime;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StayRagdolledPeriod;                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendToAnimatedTime;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PhysicsWeightScale;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VirtualPhysicsWeight;                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBPhysicsBasePawn.JumpPenaltyData
// 0x000D
struct FJumpPenaltyData
{
	float                                              fVelocityReductionFactor;                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fPenaltyTime;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsComputation : 1;                            		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      LastPhysics;                                      		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBPhysicsBasePawn.ServerSidePawnData
// 0x0024
struct FServerSidePawnData
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct PlanBFramework.PBPhysicsBasePawn.SSLCRecord
// 0x0030
struct FSSLCRecord
{
	float                                              TimeSeconds;                                      		// 0x0000 (0x0004) [0x0000000000100000]              
	float                                              RealTimeSeconds;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	struct FVector                                     Location;                                         		// 0x0008 (0x000C) [0x0000000000100000]              
	struct FVector                                     Velocity;                                         		// 0x0014 (0x000C) [0x0000000000100000]              
	struct FRotator                                    Rotation;                                         		// 0x0020 (0x000C) [0x0000000000100000]              
	unsigned long                                      bIsDead : 1;                                      		// 0x002C (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct PlanBFramework.PBPhysicsBasePawn.SSLCRecords
// 0x0668
struct FSSLCRecords
{
	int                                                nCurrIndex;                                       		// 0x0000 (0x0004) [0x0000000000100000]              
	struct FSSLCRecord                                 Records[ 0x20 ];                                  		// 0x0004 (0x0600) [0x0000000000100000]              
	struct FSSLCRecord                                 PreSSLCState;                                     		// 0x0604 (0x0030) [0x0000000000100000]              
	struct FSSLCRecord                                 InterpolatedSSLCState;                            		// 0x0634 (0x0030) [0x0000000000100000]              
	unsigned long                                      bNeedsRestore : 1;                                		// 0x0664 (0x0004) [0x0000000000100000] [0x00000001] 
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif