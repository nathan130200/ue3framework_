/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGshooter_f_structs.h
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

// Function SGshooter.SG_KeyPad.UnLock
// [0x00020002] 
struct ASG_KeyPad_execUnLock_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SG_KeyPad.UnTouch
// [0x00020802] ( FUNC_Event )
struct ASG_KeyPad_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PlayerTeamIndex;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SG_KeyPad.Touch
// [0x00020802] ( FUNC_Event )
struct ASG_KeyPad_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// int                                             PlayerTeamIndex;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SG_KeyPad.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASG_KeyPad_eventPostBeginPlay_Parms
{
	// class ASGLockDevice*                            LockDevice;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGLockDevice.DoAction
// [0x00020002] 
struct ASGLockDevice_execDoAction_Parms
{
	class APawn*                                       Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGLockDevice.IsInRange
// [0x00820002] 
struct ASGLockDevice_execIsInRange_Parms
{
	class APawn*                                       Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Forward;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           PlayerFaceOf;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGLockDevice.GetActType
// [0x00020002] 
struct ASGLockDevice_execGetActType_Parms
{
	class APawn*                                       Player;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             PlayerTeamIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqEvent_KeyPad.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqEvent_KeyPad_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGDestructible.Destroyed
// [0x00020902] ( FUNC_Event )
struct ASGDestructible_eventDestroyed_Parms
{
};

// Function SGshooter.SGDestructible.OnExplosionLightFinished
// [0x00020002] 
struct ASGDestructible_execOnExplosionLightFinished_Parms
{
	class UUDKExplosionLight*                          Light;                                            		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGDestructible.TakeRadiusDamage
// [0x00024102] 
struct ASGDestructible_execTakeRadiusDamage_Parms
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
};

// Function SGshooter.SGDestructible.Projectiles_Update
// [0x00020002] 
struct ASGDestructible_execProjectiles_Update_Parms
{
	// class AKActor*                                  KProj;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGDestructible.DoExplosionDamage
// [0x00020102] 
struct ASGDestructible_execDoExplosionDamage_Parms
{
	// class AActor*                                   Victim;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           VictimDist;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	// unsigned char                                   WantPhysChunksAndParticles;                       		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function SGshooter.SGDestructible.DestroyActors
// [0x00020102] 
struct ASGDestructible_execDestroyActors_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AActor*                                   pActor;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGDestructible.TimedProjectiles
// [0x00820002] 
struct ASGDestructible_execTimedProjectiles_Parms
{
	// struct FMyProjectile                            Proj;                                             		// 0x0000 (0x0020) [0x0000000000000000]              
	// class AKActor*                                  KProj;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ProjLocation;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGDestructible.OnDestructed_SpawnDecals
// [0x00820002] 
struct ASGDestructible_execOnDestructed_SpawnDecals_Parms
{
	// struct FDecalInfo                               pDecal;                                           		// 0x0000 (0x0020) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           DecalRotation;                                    		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGDestructible.OnDestructed_ChangeMesh
// [0x00020002] 
struct ASGDestructible_execOnDestructed_ChangeMesh_Parms
{
};

// Function SGshooter.SGAnimNodeTurnInPlace.TickAnim
// [0x00020802] ( FUNC_Event )
struct USGAnimNodeTurnInPlace_eventTickAnim_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           MinTurnRate;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             NewIndex;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AUDKPawn*                                 pPawn;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGAnimNotify_Damage.Notify
// [0x00820802] ( FUNC_Event )
struct USGAnimNotify_Damage_eventNotify_Parms
{
	class AActor*                                      Owner;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UAnimNodeSequence*                           AnimSeqInstigator;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AActor*                                   Enemy;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  HurtLoc;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// class AUTPlayerController*                      PC;                                               		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGAutoTurret.RotateTimer
// [0x00020002] 
struct ASGAutoTurret_execRotateTimer_Parms
{
};

// Function SGshooter.SGAutoTurret.DoRotation
// [0x00020002] 
struct ASGAutoTurret_execDoRotation_Parms
{
	struct FRotator                                    NewRotation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGAutoTurret.TakeDamage
// [0x00024802] ( FUNC_Event )
struct ASGAutoTurret_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGAutoTurret.Tick
// [0x00020002] 
struct ASGAutoTurret_execTick_Parms
{
	float                                              Delta;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           currDot;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           thisDot;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGPawn*                                  P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasTarget : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGshooter.SGAutoTurret.PostBeginPlay
// [0x00020802] ( FUNC_Event )
struct ASGAutoTurret_eventPostBeginPlay_Parms
{
};

// Function SGshooter.SGPawn.ServerPlayCustomAnim
// [0x002200C2] 
struct ASGPawn_execServerPlayCustomAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGPawn.SetHandIKEnabled
// [0x00020102] 
struct ASGPawn_execSetHandIKEnabled_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGshooter.SGPawn.ServerStopRunning
// [0x002200C2] 
struct ASGPawn_execServerStopRunning_Parms
{
};

// Function SGshooter.SGPawn.ServerRun
// [0x002200C2] 
struct ASGPawn_execServerRun_Parms
{
};

// Function SGshooter.SGPawn.IsRunning
// [0x00020002] 
struct ASGPawn_execIsRunning_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.ProcessViewRotation
// [0x00420102] 
struct ASGPawn_execProcessViewRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    out_ViewRotation;                                 		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FRotator                                    out_DeltaRot;                                     		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SGshooter.SGPawn.GetViewRotation
// [0x00020902] ( FUNC_Event )
struct ASGPawn_eventGetViewRotation_Parms
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.AddAimKick
// [0x00820102] 
struct ASGPawn_execAddAimKick_Parms
{
	struct FRotator                                    AimKick;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 ViewR;                                            		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.GetPawnViewLocation
// [0x00820102] 
struct ASGPawn_execGetPawnViewLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  ViewLoc;                                          		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Right;                                            		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Forward;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Up;                                               		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Result;                                           		// 0x003C (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.IsShotOnHead
// [0x00820002] 
struct ASGPawn_execIsShotOnHead_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     RayDir;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HeadLocation;                                     		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.TakeDamage
// [0x00824802] ( FUNC_Event )
struct ASGPawn_eventTakeDamage_Parms
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedBy;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0024 (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      DamageCauser;                                     		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  AxisX;                                            		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisY;                                            		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisZ;                                            		// 0x005C (0x000C) [0x0000000000000000]              
	// struct FVector2D                                ADist;                                            		// 0x0068 (0x0008) [0x0000000000000000]              
	// struct FPostProcessSettings                     DamagePostProcess;                                		// 0x0070 (0x0154) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ASGController_Player*                     PC;                                               		// 0x01C4 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.IsAnimMirrorEnabled
// [0x00020002] 
struct ASGPawn_execIsAnimMirrorEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.SetAnimationMirror
// [0x00020002] 
struct ASGPawn_execSetAnimationMirror_Parms
{
	unsigned long                                      bEnableMirror : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGshooter.SGPawn.SetWeapAnimType
// [0x00020102] 
struct ASGPawn_execSetWeapAnimType_Parms
{
	unsigned char                                      AnimType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UAnimNodeAimOffset*                       AimN;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.Tick
// [0x00820902] ( FUNC_Event )
struct ASGPawn_eventTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector2D                                skelAim;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceConstant*                Mat;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UTexture*                                 T;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.GetCloakValue
// [0x00020102] 
struct ASGPawn_execGetCloakValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.HealMeh
// [0x00020202] ( FUNC_Exec )
struct ASGPawn_execHealMeh_Parms
{
};

// Function SGshooter.SGPawn.IsDino
// [0x00020102] 
struct ASGPawn_execIsDino_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.PostInitAnimTree
// [0x00020902] ( FUNC_Event )
struct ASGPawn_eventPostInitAnimTree_Parms
{
	class USkeletalMeshComponent*                      SkelComp;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	// class UAnimNodeAimOffset*                       AimN;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.SetCharacterMeshInfo
// [0x00020102] 
struct ASGPawn_execSetCharacterMeshInfo_Parms
{
	class USkeletalMesh*                               SkelMesh;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInterface*                          HeadMaterial;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInterface*                          BodyMaterial;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGPawn.VerifyBodyMaterialInstance
// [0x00020102] 
struct ASGPawn_execVerifyBodyMaterialInstance_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.SetTeamColor
// [0x00020100] 
struct ASGPawn_execSetTeamColor_Parms
{
};

// Function SGshooter.SGPawn.SetCharacterClassFromInfo
// [0x00020102] 
struct ASGPawn_execSetCharacterClassFromInfo_Parms
{
	class UClass*                                      Info;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UClass*                                   Family;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        P;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.AddDefaultInventory
// [0x00020000] 
struct ASGPawn_execAddDefaultInventory_Parms
{
};

// Function SGshooter.SGPawn.HandleMomentum
// [0x00024000] 
struct ASGPawn_execHandleMomentum_Parms
{
	struct FVector                                     Momentum;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x001C (0x001C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGPawn.PlayFootStepSound
// [0x00020902] ( FUNC_Event )
struct ASGPawn_eventPlayFootStepSound_Parms
{
	int                                                FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGPawn.OnHearSound
// [0x00020002] 
struct ASGPawn_execOnHearSound_Parms
{
	class ASGPawn*                                     NoiseMaker;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Loudness;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SoundType;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGPawn.Make_Noise
// [0x00024002] 
struct ASGPawn_execMake_Noise_Parms
{
	float                                              SoundRadius;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SoundType;                                        		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class ASGPawn*                                  pPawn;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.ThrowWeaponOnDeath
// [0x00020002] 
struct ASGPawn_execThrowWeaponOnDeath_Parms
{
};

// Function SGshooter.SGPawn.LostEnemies
// [0x00020002] 
struct ASGPawn_execLostEnemies_Parms
{
};

// Function SGshooter.SGPawn.EnemySeesMe
// [0x00020102] 
struct ASGPawn_execEnemySeesMe_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.PlayTakeHitEffects
// [0x00820102] 
struct ASGPawn_execPlayTakeHitEffects_Parms
{
	// class UClass*                                   UTDamage;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BloodMomentum;                                    		// 0x0004 (0x000C) [0x0000000000000000]              
	// class AUTEmit_HitEffect*                        HitEffect;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// class UParticleSystem*                          BloodTemplate;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.LeaveABloodSplatterDecal
// [0x00820102] 
struct ASGPawn_execLeaveABloodSplatterDecal_Parms
{
	struct FVector                                     HitLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNorm;                                          		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   TraceActor;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FVector                                  out_HitLocation;                                  		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  out_HitNormal;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceExtent;                                      		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0058 (0x001C) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.DoDinoAttackJump
// [0x00820002] 
struct ASGPawn_execDoDinoAttackJump_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           T1;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           t2;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           Z;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Vel;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           G;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.TriggerHealingEffect
// [0x00020002] 
struct ASGPawn_execTriggerHealingEffect_Parms
{
};

// Function SGshooter.SGPawn.IsJetPacking
// [0x00020102] 
struct ASGPawn_execIsJetPacking_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.IsCloaked
// [0x00020102] 
struct ASGPawn_execIsCloaked_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.ShouldCloak
// [0x00020100] 
struct ASGPawn_execShouldCloak_Parms
{
};

// Function SGshooter.SGPawn.TimeToDie
// [0x00020102] 
struct ASGPawn_execTimeToDie_Parms
{
};

// Function SGshooter.SGPawn.IsRolling
// [0x00020102] 
struct ASGPawn_execIsRolling_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.ReleaseMe
// [0x00820102] 
struct ASGPawn_execReleaseMe_Parms
{
	// struct FVector                                  Dir;                                              		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.TurnIntoRagdoll
// [0x00020102] 
struct ASGPawn_execTurnIntoRagdoll_Parms
{
};

// Function SGshooter.SGPawn.FinishMe
// [0x00020102] 
struct ASGPawn_execFinishMe_Parms
{
	// int                                             Yaw;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGPawn.TossMe
// [0x00020100] 
struct ASGPawn_execTossMe_Parms
{
};

// Function SGshooter.SGPawn.GetPlayerReplicationInfoClass
// [0x00020102] 
struct ASGPawn_execGetPlayerReplicationInfoClass_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.GrabMe
// [0x00020100] 
struct ASGPawn_execGrabMe_Parms
{
};

// Function SGshooter.SGPawn.PlayCustomAnim
// [0x00024100] 
struct ASGPawn_execPlayCustomAnim_Parms
{
	struct FName                                       AnimName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Rate;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendOutTime;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLooping : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverride : 1;                                    		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              StartTime;                                        		// 0x001C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bHalfSlot : 1;                                    		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRoar : 1;                                        		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverrideAnim : 1;                                		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLegs : 1;                                        		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPawn.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGPawn_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGCheckPoint.Touch
// [0x00020802] ( FUNC_Event )
struct ASGCheckPoint_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0004 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.Sig
// [0x00022002] 
struct ASGgame_execSig_Parms
{
	float                                              A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGgame.Vec3
// [0x00822002] 
struct ASGgame_execVec3_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  V;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGgame.Step
// [0x00022002] 
struct ASGgame_execStep_Parms
{
	float                                              V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              A;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGgame.SmoothStep
// [0x00022002] 
struct ASGgame_execSmoothStep_Parms
{
	float                                              V;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              A;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              C;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              D;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGgame.PostLogin
// [0x00020802] ( FUNC_Event )
struct ASGgame_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.ForceRespawn
// [0x00020002] 
struct ASGgame_execForceRespawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGgame.NotifySpree
// [0x00020000] 
struct ASGgame_execNotifySpree_Parms
{
	class AUTPlayerReplicationInfo*                    Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Num;                                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.RestartPlayer
// [0x00020002] 
struct ASGgame_execRestartPlayer_Parms
{
	class AController*                                 NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.CanSpawnTrex
// [0x00020002] 
struct ASGgame_execCanSpawnTrex_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGgame.PreBeginPlay
// [0x00020102] 
struct ASGgame_execPreBeginPlay_Parms
{
};

// Function SGshooter.SGgame.SquadLeaderDied
// [0x00020000] 
struct ASGgame_execSquadLeaderDied_Parms
{
	class ASGController_Bot*                           dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.CreateSquad
// [0x00020000] 
struct ASGgame_execCreateSquad_Parms
{
	class ASGController_Bot*                           dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.AddToSquad
// [0x00020000] 
struct ASGgame_execAddToSquad_Parms
{
	class ASGController_Bot*                           dino;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Id;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGgame.InitPawn
// [0x00020002] 
struct ASGgame_execInitPawn_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGgame.CanDinoSpawn
// [0x00020002] 
struct ASGgame_execCanDinoSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.ReEvaluatePath
// [0x00020002] 
struct ASGController_Bot_execReEvaluatePath_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.HandlePathObstruction
// [0x00020002] 
struct ASGController_Bot_execHandlePathObstruction_Parms
{
	class AActor*                                      BlockedBy;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.PutInSquad
// [0x00020002] 
struct ASGController_Bot_execPutInSquad_Parms
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_Bot.GetViewTarget
// [0x00020002] 
struct ASGController_Bot_execGetViewTarget_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.CheckTarget
// [0x00020002] 
struct ASGController_Bot_execCheckTarget_Parms
{
	struct FVector                                     Target;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.GetEyesLoc
// [0x00020002] 
struct ASGController_Bot_execGetEyesLoc_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.Tick
// [0x00020102] 
struct ASGController_Bot_execTick_Parms
{
	float                                              ElapsedTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_Bot.AngleBetween
// [0x00024002] 
struct ASGController_Bot_execAngleBetween_Parms
{
	float                                              Yaw1;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Yaw2;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Absolute : 1;                                     		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_Bot.MoveToActor
// [0x00024002] 
struct ASGController_Bot_execMoveToActor_Parms
{
	class AActor*                                      Dest;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FocusTarget;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              DestOffset;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGController_Bot.MoveToPoint
// [0x00024002] 
struct ASGController_Bot_execMoveToPoint_Parms
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FocusTarget;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              DestOffset;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGController_Bot.DisableLookAt
// [0x00020002] 
struct ASGController_Bot_execDisableLookAt_Parms
{
};

// Function SGshooter.SGController_Bot.LookAtPoint
// [0x00020002] 
struct ASGController_Bot_execLookAtPoint_Parms
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_Bot.LookAtActor
// [0x00020002] 
struct ASGController_Bot_execLookAtActor_Parms
{
	class AActor*                                      PFocus;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.CanDoubleJump
// [0x00020002] 
struct ASGController_BotBase_execCanDoubleJump_Parms
{
	class APawn*                                       Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_BotBase.Initialize
// [0x00020000] 
struct ASGController_BotBase_execInitialize_Parms
{
};

// Function SGshooter.SGController_BotBase.AddDangerZone
// [0x00824002] 
struct ASGController_BotBase_execAddDangerZone_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              InnerRadius;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Danger;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ValidTime;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeOutLength;                                    		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FSGDangerZone                            Zone;                                             		// 0x001C (0x0020) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.GetDangerFromDangerZones
// [0x00020002] 
struct ASGController_BotBase_execGetDangerFromDangerZones_Parms
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           MaxDanger;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           D;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           Danger;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.OnAIMoveToActor
// [0x00020002] 
struct ASGController_BotBase_execOnAIMoveToActor_Parms
{
	class USeqAct_AIMoveToActor*                       Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   destActor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.ScriptedMove_RethinkPath
// [0x00020002] 
struct ASGController_BotBase_execScriptedMove_RethinkPath_Parms
{
};

// Function SGshooter.SGController_BotBase.ScriptedMove_TooMuchTime
// [0x00020002] 
struct ASGController_BotBase_execScriptedMove_TooMuchTime_Parms
{
};

// Function SGshooter.SGController_BotBase.MoveToPoint
// [0x00024002] 
struct ASGController_BotBase_execMoveToPoint_Parms
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FocusTarget;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              DestOffset;                                       		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGController_BotBase.MoveToActor
// [0x00024002] 
struct ASGController_BotBase_execMoveToActor_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      FocusTarget;                                      		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              DestOffset;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGController_BotBase.FindAValidPosition
// [0x00424002] 
struct ASGController_BotBase_execFindAValidPosition_Parms
{
	struct FVector                                     vTarget;                                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              MaxOffset;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bReachableFromStart : 1;                          		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FVector >                        ValidPositions;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGController_BotBase.NotifyHitWall
// [0x00020802] ( FUNC_Event )
struct ASGController_BotBase_eventNotifyHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_BotBase.NotifyBump
// [0x00820802] ( FUNC_Event )
struct ASGController_BotBase_eventNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  VelDir;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.ReceiveProjectileWarning
// [0x00020002] 
struct ASGController_BotBase_execReceiveProjectileWarning_Parms
{
	class AProjectile*                                 Proj;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.ReceiveWarning
// [0x00020002] 
struct ASGController_BotBase_execReceiveWarning_Parms
{
	class APawn*                                       shooter;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              projSpeed;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireDir;                                          		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.InstantWarnTarget
// [0x00020002] 
struct ASGController_BotBase_execInstantWarnTarget_Parms
{
	class AActor*                                      InTarget;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AWeapon*                                     FiredWeapon;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     FireDir;                                          		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.EnemyNotVisible
// [0x00020802] ( FUNC_Event )
struct ASGController_BotBase_eventEnemyNotVisible_Parms
{
};

// Function SGshooter.SGController_BotBase.SeePlayer
// [0x00020802] ( FUNC_Event )
struct ASGController_BotBase_eventSeePlayer_Parms
{
	class APawn*                                       SeenPlayer;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.GetPossibleEnemyLocation
// [0x00820002] 
struct ASGController_BotBase_execGetPossibleEnemyLocation_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Spread;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           SpreadAngle;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           ElapsedTime;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	// class APawn*                                    pEnemy;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.IsInAttackRange
// [0x00020002] 
struct ASGController_BotBase_execIsInAttackRange_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           D;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.FireAt
// [0x00024002] 
struct ASGController_BotBase_execFireAt_Parms
{
	class APawn*                                       Target;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nShots;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              AccuracySpreadPct;                                		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGController_BotBase.IsChangingPawnViewLocation
// [0x00420002] 
struct ASGController_BotBase_execIsChangingPawnViewLocation_Parms
{
	struct FVector                                     ViewLoc;                                          		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_BotBase.LostContact
// [0x00020002] 
struct ASGController_BotBase_execLostContact_Parms
{
	float                                              MaxTime;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_BotBase.SetAlertness
// [0x00020002] 
struct ASGController_BotBase_execSetAlertness_Parms
{
	float                                              NewAlertness;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.NotifyTakeHit
// [0x00020800] ( FUNC_Event )
struct ASGController_BotBase_eventNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.OnUnderFire
// [0x00020000] 
struct ASGController_BotBase_execOnUnderFire_Parms
{
	struct FVector                                     FireDir;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.OnHearSound
// [0x00020000] 
struct ASGController_BotBase_execOnHearSound_Parms
{
	class ASGPawn*                                     NoiseMaker;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Loudness;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SoundType;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_BotBase.OnStopSeeingEnemy
// [0x00020000] 
struct ASGController_BotBase_execOnStopSeeingEnemy_Parms
{
};

// Function SGshooter.SGController_BotBase.OnStartSeeingEnemy
// [0x00020000] 
struct ASGController_BotBase_execOnStartSeeingEnemy_Parms
{
};

// Function SGshooter.SGController_BotBase.Rand_Range
// [0x00020002] 
struct ASGController_BotBase_execRand_Range_Parms
{
	struct FSGRange                                    Range;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGController_BotBase.GetMainPlayer
// [0x00020002] 
struct ASGController_BotBase_execGetMainPlayer_Parms
{
	class ASGPawn*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGController_Player*                     P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_BotBase.UpdatePawnRotation
// [0x00020000] 
struct ASGController_BotBase_execUpdatePawnRotation_Parms
{
};

// Function SGshooter.SGController_BotBase.Possess
// [0x00020802] ( FUNC_Event )
struct ASGController_BotBase_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGshooter.SGController_Player.ServerUseKismetEvent
// [0x002200C2] 
struct ASGController_Player_execServerUseKismetEvent_Parms
{
	struct FName                                       CurrentToolTipName;                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USequence*                                GameSeq;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USGSeqEvent_ToolTipOnShow*                ToolTipEvent;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	// class USeqVar_Object*                           Var_Object;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// TArray< int >                                   ActivateIndices;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGController_Player.PrevWeapon
// [0x00020202] ( FUNC_Exec )
struct ASGController_Player_execPrevWeapon_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   b1 : 1;                                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   b2 : 1;                                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   b3 : 1;                                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGController_Player.NextWeapon
// [0x00020202] ( FUNC_Exec )
struct ASGController_Player_execNextWeapon_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// unsigned long                                   b1 : 1;                                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   b2 : 1;                                           		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   b3 : 1;                                           		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// TArray< class AUTWeapon* >                      WeaponList;                                       		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGController_Player.CustomAction_PlayRandomAnim
// [0x00020002] 
struct ASGController_Player_execCustomAction_PlayRandomAnim_Parms
{
	// float                                           Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_Player.StopCustomAction
// [0x00020202] ( FUNC_Exec )
struct ASGController_Player_execStopCustomAction_Parms
{
};

// Function SGshooter.SGController_Player.StartCustomAction
// [0x00024002] 
struct ASGController_Player_execStartCustomAction_Parms
{
	class ASplineActor*                                Spline;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       StartAnim;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FName >                             aRandomAnims;                                     		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       EndAnim;                                          		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       SocketName;                                       		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGController_Player.NotifyTakeHit
// [0x00020002] 
struct ASGController_Player_execNotifyTakeHit_Parms
{
	class AController*                                 InstigatedBy;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_Player.TryUpdateHud
// [0x00020002] 
struct ASGController_Player_execTryUpdateHud_Parms
{
};

// Function SGshooter.SGController_Player.ClientUpdateHud
// [0x010201C2] 
struct ASGController_Player_execClientUpdateHud_Parms
{
};

// Function SGshooter.SGController_Player.ClientSetFlashMovie
// [0x010201C2] 
struct ASGController_Player_execClientSetFlashMovie_Parms
{
	class UClass*                                      FlashMovieClass;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGController_Player.GiveDefaultInventory
// [0x00020102] 
struct ASGController_Player_execGiveDefaultInventory_Parms
{
	TArray< class UClass* >                            InitialItems;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGController_Player.Possess
// [0x00020802] ( FUNC_Event )
struct ASGController_Player_eventPossess_Parms
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bVehicleTransition : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class UClass*                                   Family;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGFamilyInfo.GetTeamMaterials
// [0x00422002] 
struct USGFamilyInfo_execGetTeamMaterials_Parms
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UMaterialInterface*                          TeamMaterialHead;                                 		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UMaterialInterface*                          TeamMaterialBody;                                 		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SGshooter.SGHUD.SetShowScores
// [0x00020202] ( FUNC_Exec )
struct ASGHUD_execSetShowScores_Parms
{
	unsigned long                                      bEnableShowScores : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class APawn*                                    MyPawnOwner;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.CheckCrosshairOnEnemy
// [0x00820002] 
struct ASGHUD_execCheckCrosshairOnEnemy_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartTrace;                                       		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// class AUTWeapon*                                W;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// class APawn*                                    MyPawnOwner;                                      		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.Destroyed
// [0x00020822] ( FUNC_Event )
struct ASGHUD_eventDestroyed_Parms
{
};

// Function SGshooter.SGHUD.OldDrawHUD
// [0x00820802] ( FUNC_Event )
struct ASGHUD_eventOldDrawHUD_Parms
{
	// struct FVector                                  ViewPoint;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 ViewRotation;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           YPos;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.SetScopeTex
// [0x00020002] 
struct ASGHUD_execSetScopeTex_Parms
{
	class UTexture*                                    Tex;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct ASGHUD_eventPostRender_Parms
{
};

// Function SGshooter.SGHUD.ParseExpression
// [0x00020002] 
struct ASGHUD_execParseExpression_Parms
{
	struct FString                                     Expression;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  UseKey;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Res;                                              		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGHUD.SetFlashMovie
// [0x00020002] 
struct ASGHUD_execSetFlashMovie_Parms
{
	class UClass*                                      FlashMovieClass;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.DrawGameHud
// [0x00820002] 
struct ASGHUD_execDrawGameHud_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             Len;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             OtherPlayerNetId;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.DisplayClock
// [0x00820002] 
struct ASGHUD_execDisplayClock_Parms
{
	// struct FString                                  Time;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector2D                                pos;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.DisplayConsoleMessages
// [0x00020002] 
struct ASGHUD_execDisplayConsoleMessages_Parms
{
	// int                                             Idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             XPos;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             YPos;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	// float                                           XL;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           YL;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.DrawLivingHud
// [0x00020002] 
struct ASGHUD_execDrawLivingHud_Parms
{
	// class AUTWeapon*                                Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           Alpha;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHUD.AddActor
// [0x00020102] 
struct ASGHUD_execAddActor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.SGSDrawToolTip
// [0x00024100] 
struct ASGHUD_execSGSDrawToolTip_Parms
{
	class UCanvas*                                     Cvs;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerController*                           PC;                                               		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Command;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              X;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              U;                                                		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              V;                                                		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              UL;                                               		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              VL;                                               		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ResScale;                                         		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UTexture2D*                                  IconTexture;                                      		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Alpha;                                            		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bGenerator : 1;                                   		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPickup : 1;                                      		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGHUD.DisplayLeaderBoard
// [0x00020000] 
struct ASGHUD_execDisplayLeaderBoard_Parms
{
	struct FVector2D                                   pos;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.DisplayFragCount
// [0x00020000] 
struct ASGHUD_execDisplayFragCount_Parms
{
	struct FVector2D                                   pos;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.DisplayPowerups
// [0x00020000] 
struct ASGHUD_execDisplayPowerups_Parms
{
};

// Function SGshooter.SGHUD.DisplayAmmo
// [0x00020000] 
struct ASGHUD_execDisplayAmmo_Parms
{
	class AUTWeapon*                                   Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.DisplayPawnDoll
// [0x00020000] 
struct ASGHUD_execDisplayPawnDoll_Parms
{
};

// Function SGshooter.SGHUD.DisplayPortrait
// [0x00020100] 
struct ASGHUD_execDisplayPortrait_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGHUD.ShowPortrait
// [0x00024100] 
struct ASGHUD_execShowPortrait_Parms
{
	class AUTPlayerReplicationInfo*                    ShowPRI;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              PortraitDuration;                                 		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverrideCurrentSpeaker : 1;                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGHUD.DrawHealth
// [0x00026100] 
struct ASGHUD_execDrawHealth_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Width;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MaxWidth;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Height;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     DrawCanvas;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Alpha;                                            		// 0x0018 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGGfxHud.Weapon_UpdateFiringMode
// [0x00020000] 
struct USGGfxHud_execWeapon_UpdateFiringMode_Parms
{
	class ASGWeapon*                                   Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.Update_WeaponIcons
// [0x00020002] 
struct USGGfxHud_execUpdate_WeaponIcons_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.UpdatePosture
// [0x00020000] 
struct USGGfxHud_execUpdatePosture_Parms
{
	unsigned char                                      PlayerPosture;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.Update_TypeGrenade
// [0x00024000] 
struct USGGfxHud_execUpdate_TypeGrenade_Parms
{
	unsigned long                                      bGrenade1 : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bGrenade2 : 1;                                    		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGGfxHud.Update_CantGrenade
// [0x00020000] 
struct USGGfxHud_execUpdate_CantGrenade_Parms
{
};

// Function SGshooter.SGGfxHud.UpdateHealing
// [0x00020000] 
struct USGGfxHud_execUpdateHealing_Parms
{
	float                                              HealingAmmount;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.HideScoreBoard
// [0x00020000] 
struct USGGfxHud_execHideScoreBoard_Parms
{
};

// Function SGshooter.SGGfxHud.ShowScoreboard
// [0x00020000] 
struct USGGfxHud_execShowScoreboard_Parms
{
};

// Function SGshooter.SGGfxHud.Pause_OnQuit
// [0x00020000] 
struct USGGfxHud_execPause_OnQuit_Parms
{
};

// Function SGshooter.SGGfxHud.Pause_OnOptions
// [0x00020000] 
struct USGGfxHud_execPause_OnOptions_Parms
{
};

// Function SGshooter.SGGfxHud.Pause_Off
// [0x00020002] 
struct USGGfxHud_execPause_Off_Parms
{
};

// Function SGshooter.SGGfxHud.Pause_On
// [0x00020002] 
struct USGGfxHud_execPause_On_Parms
{
};

// Function SGshooter.SGGfxHud.Game_OnActionKeyPress
// [0x00020002] 
struct USGGfxHud_execGame_OnActionKeyPress_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.Grenade_Update
// [0x00820002] 
struct USGGfxHud_execGrenade_Update_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FGrenadeInfo                             Info;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FGrenadeInfo                             closestGrenade;                                   		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           MinDistance;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           X;                                                		// 0x001C (0x0004) [0x0000000000000000]              
	// float                                           Y;                                                		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           TimeToExplode;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0028 (0x002C) [0x0000000000000000]              
	// struct FASColorTransform                        cxform;                                           		// 0x0054 (0x0020) [0x0000000000000000]              
	// class UGFxObject*                               GFXobj;                                           		// 0x0074 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.RemoveGrenade
// [0x00820002] 
struct USGGfxHud_execRemoveGrenade_Parms
{
	class ASGProj_Grenade*                             Grenade;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FGrenadeInfo                             Item;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.AddGrenade
// [0x00820002] 
struct USGGfxHud_execAddGrenade_Parms
{
	class ASGProj_Grenade*                             Grenade;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FGrenadeInfo                             Info;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.Objetive_UpdatePos
// [0x00820002] 
struct USGGfxHud_execObjetive_UpdatePos_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FObjetiveInfo                            Info;                                             		// 0x0004 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  Forward;                                          		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Pt;                                               		// 0x0024 (0x000C) [0x0000000000000000]              
	// float                                           Radius;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.RemoveObjective
// [0x00820002] 
struct USGGfxHud_execRemoveObjective_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FObjetiveInfo                            Item;                                             		// 0x0004 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.AddObjetive
// [0x00820002] 
struct USGGfxHud_execAddObjetive_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Caption;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FObjetiveInfo                            Info;                                             		// 0x0010 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.ToolTip_UpdatePos
// [0x00820002] 
struct USGGfxHud_execToolTip_UpdatePos_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  ScreenLoc;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.HideToolTip
// [0x00020002] 
struct USGGfxHud_execHideToolTip_Parms
{
	// TArray< struct FASValue >                       args;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.ShowToolTip
// [0x00820002] 
struct USGGfxHud_execShowToolTip_Parms
{
	// TArray< struct FASValue >                       args;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x000C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.FindClosestToolTip
// [0x00820002] 
struct USGGfxHud_execFindClosestToolTip_Parms
{
	// class ASGHudToolTip*                            ToolTip;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGHudToolTip*                            closestToolTip;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Forward;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// float                                           Distance;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           PlayerFaceOf;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	// float                                           minPlayerFaceOf;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.AddMSG
// [0x00820002] 
struct USGGfxHud_execAddMSG_Parms
{
	struct FString                                     Param1;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x000C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       args;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.Hide_Act_MSG
// [0x00020002] 
struct USGGfxHud_execHide_Act_MSG_Parms
{
};

// Function SGshooter.SGGfxHud.Show_Act_MSG
// [0x00020002] 
struct USGGfxHud_execShow_Act_MSG_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  UseKey;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.UnRegisterInMiniMap
// [0x00020002] 
struct USGGfxHud_execUnRegisterInMiniMap_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.RegisterInMiniMap
// [0x00020002] 
struct USGGfxHud_execRegisterInMiniMap_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Thubnail;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.RemoveTimer
// [0x00020000] 
struct USGGfxHud_execRemoveTimer_Parms
{
	struct FTimerSlot                                  Slot;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.GetTimer
// [0x00020000] 
struct USGGfxHud_execGetTimer_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FTimerSlot                                  ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.UpdateHealth
// [0x00020000] 
struct USGGfxHud_execUpdateHealth_Parms
{
};

// Function SGshooter.SGGfxHud.TickProgressBar
// [0x00020002] 
struct USGGfxHud_execTickProgressBar_Parms
{
	// float                                           CurrentTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.HideProgressBar
// [0x00020002] 
struct USGGfxHud_execHideProgressBar_Parms
{
};

// Function SGshooter.SGGfxHud.ShowProgressBar
// [0x00024002] 
struct USGGfxHud_execShowProgressBar_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USGSeqAct_ToggleProgressBar*                 Act_PB;                                           		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGGfxHud.UpdateHitDamage
// [0x00020000] 
struct USGGfxHud_execUpdateHitDamage_Parms
{
};

// Function SGshooter.SGGfxHud.RemoveHitDamage
// [0x00820002] 
struct USGGfxHud_execRemoveHitDamage_Parms
{
	struct FString                                     nameMC;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FHitDamage                               Hit;                                              		// 0x000C (0x0014) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.AddHitDamage
// [0x00820002] 
struct USGGfxHud_execAddHitDamage_Parms
{
	struct FVector                                     ShotDirection;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Angle;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FHitDamage                               Hit;                                              		// 0x0010 (0x0014) [0x0000000000000000]              
	// struct FASDisplayInfo                           DI;                                               		// 0x0024 (0x002C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.ShowCrossHair
// [0x00020002] 
struct USGGfxHud_execShowCrossHair_Parms
{
	struct FString                                     CrossHairName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.HideScope
// [0x00020000] 
struct USGGfxHud_execHideScope_Parms
{
};

// Function SGshooter.SGGfxHud.ShowScope
// [0x00020000] 
struct USGGfxHud_execShowScope_Parms
{
};

// Function SGshooter.SGGfxHud.SetCrossHairHidden
// [0x00020000] 
struct USGGfxHud_execSetCrossHairHidden_Parms
{
	unsigned long                                      Hidden : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.Update_AmmoCount
// [0x00020000] 
struct USGGfxHud_execUpdate_AmmoCount_Parms
{
};

// Function SGshooter.SGGfxHud.Weapon_SetSelected
// [0x00020000] 
struct USGGfxHud_execWeapon_SetSelected_Parms
{
	class ASGWeapon*                                   Weapon;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.UpdateWeapon
// [0x00020000] 
struct USGGfxHud_execUpdateWeapon_Parms
{
};

// Function SGshooter.SGGfxHud.getPRI
// [0x00020002] 
struct USGGfxHud_execgetPRI_Parms
{
	class AUTPlayerReplicationInfo*                    ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.GetGRI
// [0x00020002] 
struct USGGfxHud_execGetGRI_Parms
{
	class AUTGameReplicationInfo*                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.GetWorldInfo
// [0x00020002] 
struct USGGfxHud_execGetWorldInfo_Parms
{
	class AWorldInfo*                                  ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.GetHud
// [0x00020002] 
struct USGGfxHud_execGetHud_Parms
{
	class ASGHUD*                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.GetPawn
// [0x00020002] 
struct USGGfxHud_execGetPawn_Parms
{
	class ASGPawn*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.ExistPawn
// [0x00020002] 
struct USGGfxHud_execExistPawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.IsVisible
// [0x00020002] 
struct USGGfxHud_execIsVisible_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxHud.RemoveAttachedObject
// [0x00820002] 
struct USGGfxHud_execRemoveAttachedObject_Parms
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FASValue                                 asval;                                            		// 0x0004 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< struct FASValue >                       args;                                             		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.FormatTime
// [0x00020002] 
struct USGGfxHud_execFormatTime_Parms
{
	int                                                Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             Hours;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Mins;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  NewTimeString;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.AngleDiff
// [0x00024002] 
struct USGGfxHud_execAngleDiff_Parms
{
	float                                              Angle1;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Angle2;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              HalfBase;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           Diff;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.GetHitAngle
// [0x00820002] 
struct USGGfxHud_execGetHitAngle_Parms
{
	struct FVector                                     ShotDirection;                                    		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rot;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
	// float                                           Angle;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  AxisX;                                            		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisY;                                            		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  AxisZ;                                            		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Loc;                                              		// 0x0044 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bIsInFront : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector2D                                AngularDist;                                      		// 0x0054 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.UnRegisterHudActor
// [0x00020000] 
struct USGGfxHud_execUnRegisterHudActor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.RegisterHudActor
// [0x00020000] 
struct USGGfxHud_execRegisterHudActor_Parms
{
	class AActor*                                      A;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Type;                                             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxHud.ShowTeamSelection
// [0x00020000] 
struct USGGfxHud_execShowTeamSelection_Parms
{
};

// Function SGshooter.SGGfxHud.UpdateFreezeCam
// [0x00020000] 
struct USGGfxHud_execUpdateFreezeCam_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.UpdatePlayerIcons
// [0x00020000] 
struct USGGfxHud_execUpdatePlayerIcons_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxHud.TickHud
// [0x00020002] 
struct USGGfxHud_execTickHud_Parms
{
	class UCanvas*                                     Canvas;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AUTVehicle*                               UTV;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHud.Hud_TurnOn
// [0x00024002] 
struct USGGfxHud_execHud_TurnOn_Parms
{
	unsigned long                                      bTurnOn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bFull : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGGfxHud.UpdateHUD
// [0x00020002] 
struct USGGfxHud_execUpdateHUD_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.ProcessInstantHit
// [0x00824102] 
struct ASGWeapon_execProcessInstantHit_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0004 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumHits;                                          		// 0x0054 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// unsigned long                                   bFixMomentum : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	// class AKActorFromStatic*                        NewKActor;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	// class UStaticMeshComponent*                     HitStaticMesh;                                    		// 0x0060 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// int                                             TotalDamage;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 HitDir;                                           		// 0x0068 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.GetFireInterval
// [0x00020102] 
struct ASGWeapon_execGetFireInterval_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.CalcInventoryWeight
// [0x00020102] 
struct ASGWeapon_execCalcInventoryWeight_Parms
{
};

// Function SGshooter.SGWeapon.AttachWeaponTo
// [0x00024102] 
struct ASGWeapon_execAttachWeaponTo_Parms
{
	class USkeletalMeshComponent*                      MeshCpnt;                                         		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       SocketName;                                       		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class AUTPawn*                                  UTP;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.SetupArmsAnim
// [0x00020102] 
struct ASGWeapon_execSetupArmsAnim_Parms
{
	// class AUTPawn*                                  UTP;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.PlayArmAnimation
// [0x00024102] 
struct ASGWeapon_execPlayArmAnimation_Parms
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDesiredDuration;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      OffHand : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      SkelMesh;                                         		// 0x0014 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGWeapon.PlayWeaponAnimation
// [0x00024102] 
struct ASGWeapon_execPlayWeaponAnimation_Parms
{
	struct FName                                       Sequence;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDesiredDuration;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	class USkeletalMeshComponent*                      SkelMesh;                                         		// 0x0010 (0x0004) [0x0000000004000090]              ( CPF_OptionalParm | CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGWeapon.GetWeaponCurrentAnimLength
// [0x00020102] 
struct ASGWeapon_execGetWeaponCurrentAnimLength_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UAnimNodeSequence*                        Seq;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.GetArmAnimNodeSeq
// [0x00020102] 
struct ASGWeapon_execGetArmAnimNodeSeq_Parms
{
	class UAnimNodeSequence*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.GetWeaponAnimNodeSeq
// [0x00020102] 
struct ASGWeapon_execGetWeaponAnimNodeSeq_Parms
{
	class UAnimNodeSequence*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.PlayAnim
// [0x00024102] 
struct ASGWeapon_execPlayAnim_Parms
{
	struct FName                                       Anim;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Rate;                                             		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.Loaded
// [0x00024102] 
struct ASGWeapon_execLoaded_Parms
{
	unsigned long                                      bUseWeaponMax : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGWeapon.PlayThirdPersonAnim
// [0x00024102] 
struct ASGWeapon_execPlayThirdPersonAnim_Parms
{
	struct FName                                       Anim;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bLoop : 1;                                        		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              BlendInTime;                                      		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Rate;                                             		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.UpdateAnimCrossFaderNodes
// [0x00020102] 
struct ASGWeapon_execUpdateAnimCrossFaderNodes_Parms
{
};

// Function SGshooter.SGWeapon.FireModeUpdated
// [0x00020102] 
struct ASGWeapon_execFireModeUpdated_Parms
{
	unsigned char                                      FiringMode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bViaReplication : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function SGshooter.SGWeapon.ApplyMeleeDamage
// [0x00820102] 
struct ASGWeapon_execApplyMeleeDamage_Parms
{
	// struct FVector                                  vEyes;                                            		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Target;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FRotator                                 vViewRot;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           Damage;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.StopFire
// [0x00020102] 
struct ASGWeapon_execStopFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeapon.StartFire
// [0x00020102] 
struct ASGWeapon_execStartFire_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeapon.FlagFix
// [0x00020002] 
struct ASGWeapon_execFlagFix_Parms
{
};

// Function SGshooter.SGWeapon.ClientDoMelee
// [0x010201C2] 
struct ASGWeapon_execClientDoMelee_Parms
{
};

// Function SGshooter.SGWeapon.DoMelee
// [0x002200C2] 
struct ASGWeapon_execDoMelee_Parms
{
};

// Function SGshooter.SGWeapon.IsInFirstPersonView
// [0x00020102] 
struct ASGWeapon_execIsInFirstPersonView_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.UpdateViewPosition
// [0x00020102] 
struct ASGWeapon_execUpdateViewPosition_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeapon.UpdateHealEffects
// [0x00020102] 
struct ASGWeapon_execUpdateHealEffects_Parms
{
	// class UMaterialInstanceConstant*                Mat;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             I;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UTexture*                                 T;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.Tick
// [0x00020102] 
struct ASGWeapon_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeapon.SetPosition
// [0x00820902] ( FUNC_Event )
struct ASGWeapon_eventSetPosition_Parms
{
	class AUDKPawn*                                    Holder;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  DrawOffset;                                       		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ViewOffset;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FinalSmallWeaponsOffset;                          		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  FinalLocation;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	// unsigned char                                   CurrentHand;                                      		// 0x0034 (0x0001) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 FinalRotation;                                    		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 SpecRotation;                                     		// 0x0050 (0x000C) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x005C (0x0004) [0x0000000000000000]              
	// struct FVector2D                                ViewportSize;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bIsWideScreen : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  SpecViewLoc;                                      		// 0x006C (0x000C) [0x0000000000000000]              
	// unsigned long                                   bPassenger : 1;                                   		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bInVehicle : 1;                                   		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	// unsigned long                                   bGrabbed : 1;                                     		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FRotator                                 R;                                                		// 0x0084 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.UpdateAimSpread
// [0x00020102] 
struct ASGWeapon_execUpdateAimSpread_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Delta;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Dif;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.PlayIdleAnim
// [0x00024102] 
struct ASGWeapon_execPlayIdleAnim_Parms
{
	struct FName                                       OverrideAnim;                                     		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverrideLoop : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bQuickAnim : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FName                                    SequenceName;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bLoop : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGshooter.SGWeapon.PlayThirdPersonIdleAnim
// [0x00024102] 
struct ASGWeapon_execPlayThirdPersonIdleAnim_Parms
{
	struct FName                                       OverrideAnim;                                     		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverrideLoop : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bQuickAnim : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FName                                    SequenceName;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bLoop : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           Len;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.PlayFiringSound
// [0x00020102] 
struct ASGWeapon_execPlayFiringSound_Parms
{
};

// Function SGshooter.SGWeapon.StopAiming
// [0x00024102] 
struct ASGWeapon_execStopAiming_Parms
{
	unsigned long                                      bPlayAnim : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGWeapon.PostBeginPlay
// [0x00020102] 
struct ASGWeapon_execPostBeginPlay_Parms
{
};

// Function SGshooter.SGWeapon.StartAiming
// [0x00024102] 
struct ASGWeapon_execStartAiming_Parms
{
	unsigned long                                      bPlayAnim : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGWeapon.ServerStopAiming
// [0x002200C2] 
struct ASGWeapon_execServerStopAiming_Parms
{
};

// Function SGshooter.SGWeapon.ServerStartAiming
// [0x002200C2] 
struct ASGWeapon_execServerStartAiming_Parms
{
};

// Function SGshooter.SGWeapon.HideWeapon
// [0x00020102] 
struct ASGWeapon_execHideWeapon_Parms
{
};

// Function SGshooter.SGWeapon.PutDownWeapon
// [0x00020102] 
struct ASGWeapon_execPutDownWeapon_Parms
{
};

// Function SGshooter.SGWeapon.Activate
// [0x00020102] 
struct ASGWeapon_execActivate_Parms
{
	// class USkeletalMeshComponent*                   pMesh;                                            		// 0x0000 (0x0004) [0x0000000004000000]              ( CPF_EditInline )
	// class UAnimSequence*                            Seq;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.AddSpread
// [0x00820102] 
struct ASGWeapon_execAddSpread_Parms
{
	struct FRotator                                    BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Aim;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
	// float                                           CurrentSpread;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	// class ASGController_BotBase*                    BotController;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// struct FVector                                  X;                                                		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x0044 (0x000C) [0x0000000000000000]              
	// float                                           RandY;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
	// float                                           RandZ;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.ClientReload
// [0x010201C2] 
struct ASGWeapon_execClientReload_Parms
{
};

// Function SGshooter.SGWeapon.ReloadAmmo
// [0x002200C2] 
struct ASGWeapon_execReloadAmmo_Parms
{
};

// Function SGshooter.SGWeapon.SetFOV
// [0x00024102] 
struct ASGWeapon_execSetFOV_Parms
{
	float                                              TargetFOV;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TransitionTime;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPlaySound : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// class AUTPlayerController*                      PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.HandleFinishedFiring
// [0x00020102] 
struct ASGWeapon_execHandleFinishedFiring_Parms
{
};

// Function SGshooter.SGWeapon.ShouldRefire
// [0x00020102] 
struct ASGWeapon_execShouldRefire_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeapon.ConsumeAmmo
// [0x00020002] 
struct ASGWeapon_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeapon.FireAmmunition
// [0x00020102] 
struct ASGWeapon_execFireAmmunition_Parms
{
	// float                                           RecoilKickPct;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeapon.SetMuzzleFlashParams
// [0x00020102] 
struct ASGWeapon_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGWeapon.DrawWeaponCrosshair
// [0x00020100] 
struct ASGWeapon_execDrawWeaponCrosshair_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeapon.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGWeapon_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGSeqEvent_ToolTipOnShow.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqEvent_ToolTipOnShow_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPlayerInput.ToggleBehindView
// [0x00020202] ( FUNC_Exec )
struct USGPlayerInput_execToggleBehindView_Parms
{
};

// Function SGshooter.SGPlayerInput.CheckForDoubleClickMove
// [0x00020002] 
struct USGPlayerInput_execCheckForDoubleClickMove_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGPlayerInput.ReleaseBar
// [0x00020200] ( FUNC_Exec )
struct USGPlayerInput_execReleaseBar_Parms
{
};

// Function SGshooter.SGPlayerInput.Jump
// [0x00020202] ( FUNC_Exec )
struct USGPlayerInput_execJump_Parms
{
};

// Function SGshooter.SGPlayerInput.ToggleDuck
// [0x00020302] ( FUNC_Exec )
struct USGPlayerInput_execToggleDuck_Parms
{
};

// Function SGshooter.SGPlayerInput.UnDuck
// [0x00020302] ( FUNC_Exec )
struct USGPlayerInput_execUnDuck_Parms
{
};

// Function SGshooter.SGPlayerInput.Duck
// [0x00020302] ( FUNC_Exec )
struct USGPlayerInput_execDuck_Parms
{
};

// Function SGshooter.SGPlayerInput.StopRunning
// [0x00020300] ( FUNC_Exec )
struct USGPlayerInput_execStopRunning_Parms
{
};

// Function SGshooter.SGPlayerInput.Run
// [0x00020300] ( FUNC_Exec )
struct USGPlayerInput_execRun_Parms
{
};

// Function SGshooter.SGDB_LevelRecord.ResetCheckPointList
// [0x00020002] 
struct USGDB_LevelRecord_execResetCheckPointList_Parms
{
};

// Function SGshooter.SGDB_LevelRecord.GetLastPlayedTime
// [0x00020002] 
struct USGDB_LevelRecord_execGetLastPlayedTime_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGshooter.SGDB_LevelRecord.GetLastPlayedCheckPoint
// [0x00020002] 
struct USGDB_LevelRecord_execGetLastPlayedCheckPoint_Parms
{
	struct USGDB_LevelRecord_FCheckpointRecord         ReturnValue;                                      		// 0x0000 (0x0030) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGshooter.SGDB_LevelRecord.AddCheckPoint
// [0x00820002] 
struct USGDB_LevelRecord_execAddCheckPoint_Parms
{
	struct FString                                     Desc;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class APawn*                                       Pawn;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       CheckPointName;                                   		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct USGDB_LevelRecord_FCheckpointRecord      Checkpoint;                                       		// 0x0018 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class AUTWeapon* >                      aWeapons;                                         		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AUTWeapon*                                Weapon;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FWeaponRecord                            WeaponItem;                                       		// 0x0058 (0x0014) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGDmgType_Grenade.SuicideMessage
// [0x00022002] 
struct USGDmgType_Grenade_execSuicideMessage_Parms
{
	class APlayerReplicationInfo*                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGshooter.SGDmgType_Grenade.DeathMessage
// [0x00022002] 
struct USGDmgType_Grenade_execDeathMessage_Parms
{
	class APlayerReplicationInfo*                      Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGshooter.SGDmgType_Melee.DeathMessage
// [0x00022002] 
struct USGDmgType_Melee_execDeathMessage_Parms
{
	class APlayerReplicationInfo*                      Killer;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      Victim;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGshooter.SGDroppedPickup.SetPickupMesh
// [0x00020902] ( FUNC_Event )
struct ASGDroppedPickup_eventSetPickupMesh_Parms
{
	class UPrimitiveComponent*                         NewPickupMesh;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGDroppedPickup.PostRenderFor
// [0x00820902] ( FUNC_Event )
struct ASGDroppedPickup_eventPostRenderFor_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UCanvas*                                     Canvas;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraPosition;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     CameraDir;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  pos;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 Rot;                                              		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGDroppedPickup.Register
// [0x00020102] 
struct ASGDroppedPickup_execRegister_Parms
{
	// class ASGController_Player*                     P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGDroppedPickup.FixLocation
// [0x00020002] 
struct ASGDroppedPickup_execFixLocation_Parms
{
};

// Function SGshooter.SGDroppedPickup.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASGDroppedPickup_eventPostBeginPlay_Parms
{
};

// Function SGshooter.SGDroppedPickup.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASGDroppedPickup_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeaponAttachment.PlayImpactEffects
// [0x00820102] 
struct ASGWeaponAttachment_execPlayImpactEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  NewHitLoc;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  FireDir;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  WaterHitNormal;                                   		// 0x0030 (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0040 (0x001C) [0x0000000000000000]              
	// struct FMaterialImpactEffect                    ImpactEffect;                                     		// 0x005C (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UMaterialInterface*                       MI;                                               		// 0x008C (0x0004) [0x0000000000000000]              
	// class UMaterialInstanceTimeVarying*             MITV_Decal;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	// int                                             DecalMaterialsLength;                             		// 0x0094 (0x0004) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x0098 (0x0004) [0x0000000000000000]              
	// class AUTPawn*                                  P;                                                		// 0x009C (0x0004) [0x0000000000000000]              
	// struct FRotator                                 HitDir;                                           		// 0x00A0 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGWeaponAttachment.ThirdPersonFireEffects
// [0x00020102] 
struct ASGWeaponAttachment_execThirdPersonFireEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AUTPawn*                                  P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeaponAttachment.SetMuzzleFlashParams
// [0x00020102] 
struct ASGWeaponAttachment_execSetMuzzleFlashParams_Parms
{
	class UParticleSystemComponent*                    PSC;                                              		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGWeaponAttachment.FirstPersonFireEffects
// [0x00020102] 
struct ASGWeaponAttachment_execFirstPersonFireEffects_Parms
{
	class AWeapon*                                     PawnWeapon;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeaponAttachment.SpawnTracerTrail
// [0x00820102] 
struct ASGWeaponAttachment_execSpawnTracerTrail_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGWeaponAttachment.SpawnTracer
// [0x00820102] 
struct ASGWeaponAttachment_execSpawnTracer_Parms
{
	struct FVector                                     EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGSaveSystem.AllLevels_ResetCheckPointList
// [0x00020002] 
struct USGSaveSystem_execAllLevels_ResetCheckPointList_Parms
{
	// class USGDB_LevelRecord*                        LevelRecord;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSaveSystem.Level_ResetCheckPointList
// [0x00020002] 
struct USGSaveSystem_execLevel_ResetCheckPointList_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGSaveSystem.CreateChekPointRecord
// [0x00020002] 
struct USGSaveSystem_execCreateChekPointRecord_Parms
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       CheckPointName;                                   		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USGDB_LevelRecord*                        LevelRecord;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  LevelName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSaveSystem.GetLevelRecord
// [0x00020002] 
struct USGSaveSystem_execGetLevelRecord_Parms
{
	int                                                Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USGDB_LevelRecord*                           ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSaveSystem.GetCurrentLevelRecord
// [0x00020002] 
struct USGSaveSystem_execGetCurrentLevelRecord_Parms
{
	class USGDB_LevelRecord*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSaveSystem.SaveLastPlayedLevel
// [0x00020002] 
struct USGSaveSystem_execSaveLastPlayedLevel_Parms
{
};

// Function SGshooter.SGSaveSystem.LoadCurrentLevelRecords
// [0x00020002] 
struct USGSaveSystem_execLoadCurrentLevelRecords_Parms
{
	class USGDB_LevelRecord*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// TArray< struct FString >                        Res;                                              		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FString                                  LevelName;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGSaveSystem.LoadLevelRecords
// [0x00020002] 
struct USGSaveSystem_execLoadLevelRecords_Parms
{
	// TArray< struct FString >                        Res;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             Idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	// class USGDB_LevelRecord*                        LevelRecord;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGameMenu.PostLogin
// [0x00020802] ( FUNC_Event )
struct ASGGameMenu_eventPostLogin_Parms
{
	class APlayerController*                           NewPlayer;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGameMenu.PreBeginPlay
// [0x00020102] 
struct ASGGameMenu_execPreBeginPlay_Parms
{
};

// Function SGshooter.SGHudToolTip.OnToggleHidden
// [0x00020102] 
struct ASGHudToolTip_execOnToggleHidden_Parms
{
	class USeqAct_ToggleHidden*                        Action;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASGHUD*                                   myHUD;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHudToolTip.GetTitle
// [0x00020102] 
struct ASGHudToolTip_execGetTitle_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// class ASGHUD*                                   myHUD;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHudToolTip.TeamCheck
// [0x00020102] 
struct ASGHudToolTip_execTeamCheck_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGHudToolTip.DirectionalCheck
// [0x00820102] 
struct ASGHudToolTip_execDirectionalCheck_Parms
{
	struct FVector                                     PlayerLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Forward;                                          		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Direction;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           PlayerFaceOf;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGHudToolTip.CheckActionRange
// [0x00020102] 
struct ASGHudToolTip_execCheckActionRange_Parms
{
	struct FVector                                     PlayerLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGHudToolTip.OnStopUse
// [0x00120000] 
struct ASGHudToolTip_execOnStopUse_Parms
{
};

// Function SGshooter.SGHudToolTip.OnUse
// [0x00120000] 
struct ASGHudToolTip_execOnUse_Parms
{
};

// Function SGshooter.SGGfxHudMiniMap.Update
// [0x00820002] 
struct USGGfxHudMiniMap_execUpdate_Parms
{
	float                                              Scale;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           F;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FMatrix                                  M;                                                		// 0x0020 (0x0040) [0x0000000000000000]              
	// float                                           MapScale;                                         		// 0x0060 (0x0004) [0x0000000000000000]              
	// struct FVector                                  MapOffset;                                        		// 0x0064 (0x000C) [0x0000000000000000]              
	// class APawn*                                    P;                                                		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHudMiniMap.UpdateThubNails
// [0x00820002] 
struct USGGfxHudMiniMap_execUpdateThubNails_Parms
{
	// struct FASDisplayInfo                           D;                                                		// 0x0000 (0x002C) [0x0000000000000000]              
	// int                                             I;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FVector                                  V;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHudMiniMap.UnRegisterInMiniMap
// [0x00820002] 
struct USGGfxHudMiniMap_execUnRegisterInMiniMap_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FItemInfo                                Item;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHudMiniMap.RegisterInMiniMap
// [0x00820002] 
struct USGGfxHudMiniMap_execRegisterInMiniMap_Parms
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Thubnail;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FItemInfo                                Item;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGGfxHudMiniMap.Init
// [0x00020002] 
struct USGGfxHudMiniMap_execInit_Parms
{
	class USGGfxHud*                                   HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UUTMapInfo*                               MapInfo;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqAct_ToggleProgressBar.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqAct_ToggleProgressBar_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqAct_ToggleProgressBar.Update
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleProgressBar_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqAct_ToggleProgressBar.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleProgressBar_eventActivated_Parms
{
	// class USGGfxHud*                                gfxHud;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGController_Player*                     P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGProj_Grenade.ProcessTouch
// [0x00020102] 
struct ASGProj_Grenade_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGProj_Grenade.HitWall
// [0x00020902] ( FUNC_Event )
struct ASGProj_Grenade_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0010 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGProj_Grenade.Explode
// [0x00020102] 
struct ASGProj_Grenade_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGProj_Grenade.SetExplosionEffectParameters
// [0x00020102] 
struct ASGProj_Grenade_execSetExplosionEffectParameters_Parms
{
	class UParticleSystemComponent*                    ProjExplosion;                                    		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SGshooter.SGProj_Grenade.CustomExplode
// [0x00020102] 
struct ASGProj_Grenade_execCustomExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGProj_Grenade.SpawnExplosionEffects
// [0x00020102] 
struct ASGProj_Grenade_execSpawnExplosionEffects_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Dist;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           MINVIEWDIST;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	// class AUTPlayerController*                      UTPC;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           ShakeScale;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGProj_Grenade.SetExplodeTime
// [0x00020002] 
struct ASGProj_Grenade_execSetExplodeTime_Parms
{
	float                                              TimerTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGProj_Grenade.PostBeginPlay
// [0x00020102] 
struct ASGProj_Grenade_execPostBeginPlay_Parms
{
};

// Function SGshooter.SGGfxMenu_DataProvider.SetGameMode
// [0x00020003] ( FUNC_Final )
struct USGGfxMenu_DataProvider_execSetGameMode_Parms
{
	int                                                SelectedIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  GameMode;                                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  DefaultMap;                                       		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Prefixes;                                         		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  GameSettingsClass;                                		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_DataProvider.GetGameModeFriendlyString
// [0x00020002] 
struct USGGfxMenu_DataProvider_execGetGameModeFriendlyString_Parms
{
	struct FString                                     InGameMode;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  RetString;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_DataProvider.GetGameModes
// [0x00420002] 
struct USGGfxMenu_DataProvider_execGetGameModes_Parms
{
	TArray< struct FString >                           aGameModes;                                       		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// unsigned char                                   I;                                                		// 0x000C (0x0001) [0x0000000000000000]              
	// struct FString                                  FriendlyGameModeName;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_DataProvider.GetMapList
// [0x00420002] 
struct USGGfxMenu_DataProvider_execGetMapList_Parms
{
	TArray< struct FString >                           MapList;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// TArray< class UUTUIDataProvider_MapInfo* >      LocalMapList;                                     		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Item;                                             		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_DataProvider.GetMapFriendlyName
// [0x00020003] ( FUNC_Final )
struct USGGfxMenu_DataProvider_execGetMapFriendlyName_Parms
{
	TArray< class UUTUIDataProvider_MapInfo* >         MapList;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Map;                                              		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             P;                                                		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             StartIndex;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	// int                                             EndIndex;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	// TArray< struct FString >                        LocPieces;                                        		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_DataProvider.SupportedByCurrentGameMode
// [0x00020002] 
struct USGGfxMenu_DataProvider_execSupportedByCurrentGameMode_Parms
{
	struct FString                                     MapPrefix;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             pos;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ThisMapPrefix;                                    		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_DataProvider.Init
// [0x00020002] 
struct USGGfxMenu_DataProvider_execInit_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UDataStoreClient*                         DSClient;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class UUDKUIResourceDataProvider* >     ProviderList;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_JoinGame.OnJoinGameComplete
// [0x00020002] 
struct USGGfxMenu_JoinGame_execOnJoinGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccessful : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FString                                  URL;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_JoinGame.ProcessJoin
// [0x00820002] 
struct USGGfxMenu_JoinGame_execProcessJoin_Parms
{
	int                                                CurrentSelection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FOnlineGameSearchResult                  GameToJoin;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             ControllerId;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxMenu_JoinGame.BuildJoinURL
// [0x00020002] 
struct USGGfxMenu_JoinGame_execBuildJoinURL_Parms
{
	struct FString                                     ResolvedConnectionURL;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ConnectURL;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_JoinGame.UpdateListDataProvider
// [0x00820002] 
struct USGGfxMenu_JoinGame_execUpdateListDataProvider_Parms
{
	// unsigned char                                   I;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	// class UGFxObject*                               DataProvider;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UGFxObject*                               TempObj;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class UOnlineGameSearch*                        LatestGameSearch;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	// TArray< struct FASValue >                       args;                                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FASValue                                 asval;                                            		// 0x001C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  OutValue;                                         		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_JoinGame.GetDesiredMatchType
// [0x00020002] 
struct USGGfxMenu_JoinGame_execGetDesiredMatchType_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGfxMenu_JoinGame.OnFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct USGGfxMenu_JoinGame_execOnFindOnlineGamesCompleteDelegate_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// unsigned long                                   bSearchCompleted : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function SGshooter.SGGfxMenu_JoinGame.SubmitServerListQuery
// [0x00020002] 
struct USGGfxMenu_JoinGame_execSubmitServerListQuery_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGfxMenu_JoinGame.RefreshServerList
// [0x00024002] 
struct USGGfxMenu_JoinGame_execRefreshServerList_Parms
{
	int                                                InPlayerIndex;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                MaxResults;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class UOnlineGameSearch*                        GameSearch;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             ValueIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGfxMenu_JoinGame.UseLANMode
// [0x00020000] 
struct USGGfxMenu_JoinGame_execUseLANMode_Parms
{
};

// Function SGshooter.SGGfxMenu_JoinGame.ValidateServerType
// [0x00020002] 
struct USGGfxMenu_JoinGame_execValidateServerType_Parms
{
	// int                                             ValueIndex;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct FName                                    MatchTypeName;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SGshooter.SGGfxMenu_JoinGame.Cleanup
// [0x00020002] 
struct USGGfxMenu_JoinGame_execCleanup_Parms
{
};

// Function SGshooter.SGGfxMenu_JoinGame.Refresh
// [0x00020002] 
struct USGGfxMenu_JoinGame_execRefresh_Parms
{
};

// Function SGshooter.SGGfxMenu_JoinGame.GetPlayerName
// [0x00020002] 
struct USGGfxMenu_JoinGame_execGetPlayerName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SGshooter.SGGfxMenu_JoinGame.Init
// [0x00020002] 
struct USGGfxMenu_JoinGame_execInit_Parms
{
	class UGFxObject*                                  ListMC;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxMoviePlayer*                             Owner;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UDataStoreClient*                         DSClient;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGGoal.HasFailed
// [0x00020002] 
struct USGGoal_execHasFailed_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal.IsComplete
// [0x00020002] 
struct USGGoal_execIsComplete_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal.IsInactive
// [0x00020002] 
struct USGGoal_execIsInactive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal.IsActive
// [0x00020002] 
struct USGGoal_execIsActive_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal.SetOwner
// [0x00020002] 
struct USGGoal_execSetOwner_Parms
{
	class APawn*                                       pPawn;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGGoal.Terminate
// [0x00020002] 
struct USGGoal_execTerminate_Parms
{
};

// Function SGshooter.SGGoal.Think
// [0x00020002] 
struct USGGoal_execThink_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal.Activate
// [0x00020000] 
struct USGGoal_execActivate_Parms
{
};

// Function SGshooter.SGGoal.Evaluate
// [0x00120000] 
struct USGGoal_execEvaluate_Parms
{
	class USGGoal*                                     Self;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       OwnerPawn;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal_List.AddSubGoal
// [0x00024002] 
struct USGGoal_List_execAddSubGoal_Parms
{
	class USGGoal*                                     Goal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInsertAtEnd : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGGoal_List.Terminate
// [0x00020002] 
struct USGGoal_List_execTerminate_Parms
{
};

// Function SGshooter.SGGoal_List.Think
// [0x00020002] 
struct USGGoal_List_execThink_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGGoal_List.Activate
// [0x00020002] 
struct USGGoal_List_execActivate_Parms
{
};

// Function SGshooter.SGMusicManager.StartMusic
// [0x00020002] 
struct ASGMusicManager_execStartMusic_Parms
{
};

// Function SGshooter.SGMusicManager.ChangeTrack
// [0x00020002] 
struct ASGMusicManager_execChangeTrack_Parms
{
	unsigned char                                      NewState;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class UUTMapInfo*                               UMI;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGMusicManager.Tick
// [0x00020002] 
struct ASGMusicManager_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             nNearBots;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             nAlertedBots;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// class AController*                              Bot;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGS_PawnSoundGroup_Raptor.PlayBulletImpact
// [0x00022000] 
struct USGS_PawnSoundGroup_Raptor_execPlayBulletImpact_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGS_PawnSoundGroup_Raptor.PlayTakeHitSound
// [0x00022002] 
struct USGS_PawnSoundGroup_Raptor_execPlayTakeHitSound_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             HitSoundIndex;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGS_PawnSoundGroup_Raptor.PlayLandSound
// [0x00022000] 
struct USGS_PawnSoundGroup_Raptor_execPlayLandSound_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGSeqAct_AddVector.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_AddVector_eventActivated_Parms
{
};

// Function SGshooter.SGSeqAct_CauseRadiusHurt.Activated
// [0x00020002] 
struct USGSeqAct_CauseRadiusHurt_execActivated_Parms
{
};

// Function SGshooter.SGSeqAct_GetTimeInvisible.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_GetTimeInvisible_eventActivated_Parms
{
};

// Function SGshooter.SGSeqAct_GotoState.Activated
// [0x00020002] 
struct USGSeqAct_GotoState_execActivated_Parms
{
};

// Function SGshooter.SGSeqAct_ToggleCustomAction.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqAct_ToggleCustomAction_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqAct_ToggleCustomAction.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleCustomAction_eventActivated_Parms
{
	// class ASGController_Player*                     P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqAct_ToggleObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqAct_ToggleObjective_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqAct_ToggleObjective.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleObjective_eventActivated_Parms
{
	// class USGGfxHud*                                gfxHud;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGController_Player*                     P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqAct_ToggleTimer.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqAct_ToggleTimer_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqAct_ToggleTimer.Deactivated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleTimer_eventDeactivated_Parms
{
	// class USGGfxHud*                                gfxHud;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ASGController_Player*                     P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqAct_ToggleTimer.Update
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleTimer_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USGGfxHud*                                gfxHud;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGController_Player*                     P;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqAct_ToggleTimer.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqAct_ToggleTimer_eventActivated_Parms
{
	// class USGGfxHud*                                gfxHud;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USequence*                                GameSeq;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// TArray< class USequenceObject* >                AllSeqEvents;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             I;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ASGController_Player*                     P;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSeqCond_IsInTeam.Activated
// [0x00020802] ( FUNC_Event )
struct USGSeqCond_IsInTeam_eventActivated_Parms
{
};

// Function SGshooter.SGSeqEvent_KeyAction.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqEvent_KeyAction_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqEvent_LockDevice.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USGSeqEvent_LockDevice_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGSeqVar_MainPlayer.GetObjectValue
// [0x00020002] 
struct USGSeqVar_MainPlayer_execGetObjectValue_Parms
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASGController_Player*                     P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSpawnFactory_Bot.GetMainPlayer
// [0x00020002] 
struct ASGSpawnFactory_Bot_execGetMainPlayer_Parms
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSpawnFactory_Bot.KillInvalidBots
// [0x00020002] 
struct ASGSpawnFactory_Bot_execKillInvalidBots_Parms
{
	// class APawn*                                    P;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGSpawnFactory_Bot.SpawnBot
// [0x00820002] 
struct ASGSpawnFactory_Bot_execSpawnBot_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UClass*                                   Family;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ASGPawn*                                  BotPawn;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ASGController_Bot*                        BotController;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FVector                                  pos;                                              		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGSpawnFactory_Bot.CanSpawn
// [0x00020002] 
struct ASGSpawnFactory_Bot_execCanSpawn_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    P;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Scale;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SGshooter.SGWeap_Grenade.AddSpread
// [0x00020102] 
struct ASGWeap_Grenade_execAddSpread_Parms
{
	struct FRotator                                    BaseAim;                                          		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SGshooter.SGWeap_Grenade.ConsumeAmmo
// [0x00020102] 
struct ASGWeap_Grenade_execConsumeAmmo_Parms
{
	unsigned char                                      FireModeNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SGshooter.SGWeap_Grenade.IncrementFlashCount
// [0x00020100] 
struct ASGWeap_Grenade_execIncrementFlashCount_Parms
{
};

// Function SGshooter.SGWeap_Grenade.GetPhysicalFireStartLoc
// [0x00824102] 
struct ASGWeap_Grenade_execGetPhysicalFireStartLoc_Parms
{
	struct FVector                                     AimDir;                                           		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  SocketLocation;                                   		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SGshooter.SGWeap_Grenade.Loaded
// [0x00024102] 
struct ASGWeap_Grenade_execLoaded_Parms
{
	unsigned long                                      bUseWeaponMax : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function SGshooter.SGWeap_Grenade.PlayThirdPersonGrenadeThrow
// [0x00020100] 
struct ASGWeap_Grenade_execPlayThirdPersonGrenadeThrow_Parms
{
};

// Function SGshooter.SGWeap_Grenade.ExplodeInHands
// [0x00020102] 
struct ASGWeap_Grenade_execExplodeInHands_Parms
{
};

// Function SGshooter.SGWeap_Grenade.Activate
// [0x00020102] 
struct ASGWeap_Grenade_execActivate_Parms
{
};

// Function SGshooter.SGWeap_Grenade.ThrowGrenade
// [0x002200C2] 
struct ASGWeap_Grenade_execThrowGrenade_Parms
{
};

// Function SGshooter.SGWeap_Grenade.ReloadAmmo
// [0x002200C0] 
struct ASGWeap_Grenade_execReloadAmmo_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif