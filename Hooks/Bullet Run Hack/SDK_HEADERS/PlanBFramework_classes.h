/*
#############################################################################################
# Bullet Run (Unknown) SDK
# ========================================================================================= #
# File: PlanBFramework_classes.h
# ========================================================================================= #
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
public:
};

// Class PlanBFramework.PBBaseFlock
// 0x0000 (0x0240 - 0x0240)
class APBBaseFlock : public AInterpActor
{
public:
public:
};

// Class PlanBFramework.PBBaseGameReplicationInfo
// 0x0000 (0x0234 - 0x0234)
class APBBaseGameReplicationInfo : public AGameReplicationInfo
{
public:
public:
};

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
public:
};

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
public:
};

// Class PlanBFramework.PBBaseStrategicMapCell
// 0x0000 (0x01D8 - 0x01D8)
class APBBaseStrategicMapCell : public AActor
{
public:
public:
};

// Class PlanBFramework.PBCharAttachment
// 0x0000 (0x01D8 - 0x01D8)
class APBCharAttachment : public AActor
{
public:
public:
};

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
public:
};

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
public:
};

// Class PlanBFramework.PBLevelCheckCommandlet
// 0x0000 (0x007C - 0x007C)
class UPBLevelCheckCommandlet : public UCommandlet
{
public:
public:
};

// Class PlanBFramework.PBNCampaignMap
// 0x0000 (0x01D8 - 0x01D8)
class APBNCampaignMap : public AActor
{
public:
public:
};

// Class PlanBFramework.PBPhysicsEffectGenerator
// 0x0017 (0x006C - 0x0055)
class UPBPhysicsEffectGenerator : public UActorComponent
{
public:
	int                                                AudioComponents;                                  		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FInterpCurveFloat                           SndVelocityVolumeCurve;                           		// 0x005C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class PlanBFramework.PBReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UPBReplaceActorCommandlet : public UCommandlet
{
public:
public:
};

// Class PlanBFramework.PBAirCraftPathNode
// 0x0004 (0x02BC - 0x02B8)
class APBAirCraftPathNode : public AVolumePathNode
{
public:
	unsigned long                                      bBuildAirCraftPath : 1;                           		// 0x02B8 (0x0004) [0x0000000000000000] [0x00000001] 
public:
};

// Class PlanBFramework.PBVehicleAutoPilotController
// 0x0014 (0x03CC - 0x03B8)
class APBVehicleAutoPilotController : public AAIController
{
public:
	class UClass*                                      NavigationPointClass;                             		// 0x03B8 (0x0004) [0x0000000000000000]              
	struct FVector                                     AutoPilotDestination;                             		// 0x03BC (0x000C) [0x0000000000000000]              
	class AActor*                                      RandomTarget;                                     		// 0x03C8 (0x0004) [0x0000000000000000]              
public:
};

// Class PlanBFramework.PBVehicleAutoPilotController_Aircraft
// 0x0000 (0x03CC - 0x03CC)
class APBVehicleAutoPilotController_Aircraft : public APBVehicleAutoPilotController
{
public:
public:
};

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
public:
};

// Class PlanBFramework.PBPhysicalMaterialPropertyExtension
// 0x0003 (0x0058 - 0x0055)
class UPBPhysicalMaterialPropertyExtension : public UActorComponent
{
public:
public:
};

// Class PlanBFramework.PBFrictionProperties
// 0x0000 (0x0058 - 0x0058)
class UPBFrictionProperties : public UPBPhysicalMaterialPropertyExtension
{
public:
public:
};

// Class PlanBFramework.PBPhysicsAssetSynchronized
// 0x0000 (0x01E8 - 0x01E8)
class APBPhysicsAssetSynchronized : public AKAsset
{
public:
public:
};

// Class PlanBFramework.PBPhysicsBasePawn
// 0x0000 (0x04A4 - 0x04A4)
class APBPhysicsBasePawn : public APawn
{
public:
public:
};

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
public:
};

// Class PlanBFramework.PBSkeletalMeshExtension
// 0x0007 (0x005C - 0x0055)
class UPBSkeletalMeshExtension : public UActorComponent
{
public:
	struct FPointer                                    pAgSkeletalMesh;                                  		// 0x0058 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
public:
};

// Class PlanBFramework.PBSkeletalBoneStatesBase
// 0x0000 (0x005C - 0x005C)
class UPBSkeletalBoneStatesBase : public UPBSkeletalMeshExtension
{
public:
public:
};

// Class PlanBFramework.PBParticleModuleEventReceiverSound
// 0x000C (0x0060 - 0x0054)
class UPBParticleModuleEventReceiverSound : public UParticleModuleEventReceiverBase
{
public:
	class USoundCue*                                   CollisionSound;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathSound;                                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SpawnSound;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
public:
};

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
public:
};

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
public:
};

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
public:
};

// Class PlanBFramework.PBDebugActor
// 0x000C (0x01E4 - 0x01D8)
class APBDebugActor : public AActor
{
public:
	TArray< struct FString >                           DebugInfo;                                        		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};

// Class PlanBFramework.PBFlockable
// 0x0000 (0x01D8 - 0x01D8)
class APBFlockable : public AActor
{
public:
public:
};

// Class PlanBFramework.PBFlockVolume
// 0x0000 (0x0214 - 0x0214)
class APBFlockVolume : public AVolume
{
public:
public:
};

// Class PlanBFramework.PBHugeExplosionLight
// 0x0000 (0x0234 - 0x0234)
class UPBHugeExplosionLight : public UPBExplosionLight
{
public:
public:
};

// Class PlanBFramework.PBRocketLight
// 0x0000 (0x0234 - 0x0234)
class UPBRocketLight : public UPBExplosionLight
{
public:
public:
};

// Class PlanBFramework.PBSkeletalMeshPhysicsExtension
// 0x0000 (0x005C - 0x005C)
class UPBSkeletalMeshPhysicsExtension : public UPBSkeletalMeshExtension
{
public:
public:
};

// Class PlanBFramework.PBTexSwitchComponent
// 0x000F (0x0064 - 0x0055)
class UPBTexSwitchComponent : public UActorComponent
{
public:
	class UMaterialInstanceConstant*                   m_CntMaterialInstance;                            		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FName                                       m_sHealthConstant;                                		// 0x005C (0x0008) [0x0000000000000000]              
public:
};

// Class PlanBFramework.PBTextSingleSwitchComponent
// 0x0004 (0x0068 - 0x0064)
class UPBTextSingleSwitchComponent : public UPBTexSwitchComponent
{
public:
	int                                                TexturesShiftCount;                               		// 0x0064 (0x0004) [0x0000000000000000]              
public:
};

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
public:
};

// Class PlanBFramework.PBWeaponRecoil
// 0x0000 (0x003C - 0x003C)
class UPBWeaponRecoil : public UObject
{
public:
public:
};

// Class PlanBFramework.PBWeaponSpreadBase
// 0x0000 (0x003C - 0x003C)
class UPBWeaponSpreadBase : public UObject
{
public:
public:
};

// Class PlanBFramework.SeqEvent_HearNoise
// 0x0000 (0x0114 - 0x0114)
class USeqEvent_HearNoise : public USequenceEvent
{
public:
public:
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif