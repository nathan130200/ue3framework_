/*
#############################################################################################
# CrimeCraft (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_f_structs.h
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

// Function GameFramework.GameExplosionActor.Tick
// [0x00020102] 
struct AGameExplosionActor_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           TimerCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	// float                                           Pct;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00020102] 
struct AGameExplosionActor_execDoExplosionDamage_Parms
{
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00020902] ( FUNC_Event )
struct AGameExplosionActor_eventExplode_Parms
{
	class UGameExplosion*                              NewExplosionTemplate;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           HowLongToLive;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	// class UPhysicalMaterial*                        PhysMat;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
struct AGameExplosionActor_execSpawnExplosionFogVolume_Parms
{
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraShakes
// [0x00020100] 
struct AGameExplosionActor_execDoExplosionCameraShakes_Parms
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
struct AGameExplosionActor_execSpawnExplosionDecal_Parms
{
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
struct AGameExplosionActor_execSpawnExplosionParticleSystem_Parms
{
	class UParticleSystem*                             Template;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
struct AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameExplosionActor.KnockdownPawn
// [0x00080002] 
struct AGameExplosionActor_execKnockdownPawn_Parms
{
	class AGamePawn*                                   Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DistFromExplosion;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameExplosionActor.DoCringesAndKnockdowns
// [0x00880002] 
struct AGameExplosionActor_execDoCringesAndKnockdowns_Parms
{
	// class AGamePawn*                                Victim;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           DistFromExplosion;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  ExplosionToVictimDir;                             		// 0x0008 (0x000C) [0x0000000000000000]              
	// float                                           KnockDownRad;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	// float                                           CringeRad;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.ShouldDoCringeFor
// [0x00080002] 
struct AGameExplosionActor_execShouldDoCringeFor_Parms
{
	class AGamePawn*                                   Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameExplosionActor.DoBreakFracturedMeshes
// [0x00080102] 
struct AGameExplosionActor_execDoBreakFracturedMeshes_Parms
{
	struct FVector                                     ExploOrigin;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              RBStrength;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      dmgType;                                          		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AFracturedStaticMeshActor*                FracActor;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	// unsigned char                                   bWantPhysChunksAndParticles;                      		// 0x001C (0x0001) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.HurtExplosion
// [0x00880103] ( FUNC_Final )
struct AGameExplosionActor_execHurtExplosion_Parms
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              DamageFalloffExp;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              MomentumScale;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ExploOrigin;                                      		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      IgnoredActor;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class AController*                                 InstigatedByController;                           		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// class AActor*                                   Victim;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitL;                                             		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitN;                                             		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0050 (0x000C) [0x0000000000000000]              
	// unsigned long                                   bDamageBlocked : 1;                               		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	// float                                           ColRadius;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	// float                                           ColHeight;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	// float                                           DamageScale;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x006C (0x0004) [0x0000000000000000]              
	// TArray< class AActor* >                         VictimsList;                                      		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FBox                                     BBox;                                             		// 0x007C (0x001C) [0x0000000000000000]              
	// struct FVector                                  BBoxCenter;                                       		// 0x0098 (0x000C) [0x0000000000000000]              
	// class AController*                              ModInstigator;                                    		// 0x00A4 (0x0004) [0x0000000000000000]              
	// class APawn*                                    VictimPawn;                                       		// 0x00A8 (0x0004) [0x0000000000000000]              
	// class UClass*                                   ModDamageType;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
struct AGameExplosionActor_execDoFullDamageToActor_Parms
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
struct AGameExplosionActor_execGetPhysicalMaterial_Parms
{
	class UPhysicalMaterial*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UPhysicalMaterial*                        retval;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  TraceStart;                                       		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TraceDest;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  OutHitNorm;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ExploNormal;                                      		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            OutHitInfo;                                       		// 0x0038 (0x001C) [0x0000000000000000]              
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
struct AGameExplosionActor_eventPreBeginPlay_Parms
{
};

// Function GameFramework.GameHUD.StopDrawingChapterTitle
// [0x00020102] 
struct AGameHUD_execStopDrawingChapterTitle_Parms
{
};

// Function GameFramework.GameHUD.StartDrawingChapterTitle
// [0x00020102] 
struct AGameHUD_execStartDrawingChapterTitle_Parms
{
	struct FString                                     ChapterName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ActName;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              TotalDrawTime;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TotalFadeTime;                                    		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameHUD.SetHUDDrawColor
// [0x00024002] 
struct AGameHUD_execSetHUDDrawColor_Parms
{
	unsigned char                                      eColor;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Alpha;                                            		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GamePawn.Cringe
// [0x00024800] ( FUNC_Event )
struct AGamePawn_eventCringe_Parms
{
	float                                              Duration;                                         		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GamePawn.ServerKnockdown
// [0x002240C0] 
struct AGamePawn_execServerKnockdown_Parms
{
	struct FVector                                     RBLinearVelocity;                                 		// 0x0000 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     RBAngularVelocity;                                		// 0x000C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     RadialOrigin;                                     		// 0x0018 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              RadialRadius;                                     		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              RadialStrength;                                   		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     PointImpulse;                                     		// 0x002C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     PointImpulsePosition;                             		// 0x0038 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       PointImpulseBoneName;                             		// 0x0044 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// [0x00420102] 
struct AGamePawn_execGetTargetFrictionCylinder_Parms
{
	float                                              CylinderRadius;                                   		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              CylinderHeight;                                   		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif