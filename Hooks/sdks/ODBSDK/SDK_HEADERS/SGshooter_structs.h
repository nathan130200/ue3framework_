/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGshooter_structs.h
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

// ScriptStruct SGshooter.SGAutoTurret.RotationRange
// 0x001C
struct FRotationRange
{
	struct FRotator                                    RotLimitMin;                                      		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotLimitMax;                                      		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLimitPitch : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLimitYaw : 1;                                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLimitRoll : 1;                                   		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SGshooter.SGAutoTurret.TurretSoundGroup
// 0x0018
struct ASGAutoTurret_FTurretSoundGroup
{
	class USoundCue*                                   FireSound;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DamageSound;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SpinUpSound;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WakeSound;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SleepSound;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   DeathSound;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGshooter.SGAutoTurret.TurretEmitterGroup
// 0x001C
struct ASGAutoTurret_FTurretEmitterGroup
{
	class UParticleSystem*                             DamageEmitter;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             MuzzleFlashEmitter;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             DestroyEmitter;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MuzzleFlashDuration;                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageEmitterParamName;                           		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bStopDamageEmitterOnDeath : 1;                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SGshooter.SGAutoTurret.TurretBoneGroup
// 0x0020
struct FTurretBoneGroup
{
	struct FName                                       DestroySocket;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DamageSocket;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FireSocket;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PivotControllerName;                              		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGshooter.SGAutoTurret.TurretRotationGroup
// 0x0028
struct FTurretRotationGroup
{
	struct FRotator                                    IdleRotation;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    AlertRotation;                                    		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    DeathRotation;                                    		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRandomDeath : 1;                                 		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SGshooter.SGController_BotBase.SGDangerZone
// 0x0020
struct FSGDangerZone
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              InnerRadius;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FadeOutLength;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Danger;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              ValidUntilTime;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGshooter.SGController_BotBase.SGAlernessDef
// 0x0008
struct FSGAlernessDef
{
	float                                              Normal;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Alerted;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGshooter.SGController_BotBase.SGRange
// 0x0008
struct FSGRange
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGshooter.SGController_BotBase.AttackDefinition
// 0x0018
struct FAttackDefinition
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              probability;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSGRange                                    Duration;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AllowMovement : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SGshooter.SGDB_LevelRecord.WeaponRecord
// 0x0014
struct FWeaponRecord
{
	struct FString                                     ClassWeapon;                                      		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                AmmoCount;                                        		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                AmmoInClip;                                       		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SGshooter.SGDB_LevelRecord.CheckpointRecord
// 0x0030
struct USGDB_LevelRecord_FCheckpointRecord
{
	struct FString                                     Description;                                      		// 0x0000 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TimeWasSaved;                                     		// 0x000C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                Health;                                           		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       CheckPointName;                                   		// 0x001C (0x0008) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FWeaponRecord >                     aWeaponRecords;                                   		// 0x0024 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct SGshooter.SGDestructible.EffectLight
// 0x0010
struct FEffectLight
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGshooter.SGDestructible.MyProjectile
// 0x0020
struct FMyProjectile
{
	class UStaticMesh*                                 ProjectileMesh;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDistributionVector*                         Offset;                                           		// 0x0004 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FRotator                                    Orientation;                                      		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UDistributionVector*                         LinearVel;                                        		// 0x0014 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDistributionVector*                         AngularVel;                                       		// 0x0018 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDistributionFloat*                          MaxPhysicsVelocity;                               		// 0x001C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SGshooter.SGDestructible.DecalInfo
// 0x0020
struct FDecalInfo
{
	class UDecalMaterial*                              DecalMaterial;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDistributionVector*                         Offset;                                           		// 0x000C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FRotator                                    Orientation;                                      		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UDistributionFloat*                          Rotation;                                         		// 0x001C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SGshooter.SGDestructible.MakeHurt
// 0x0020
struct FMakeHurt
{
	unsigned long                                      ApplyHurt : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              BaseDamage;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              Delay;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FractureMeshRadius;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SGshooter.SGGfxHud.HitDamage
// 0x0014
struct FHitDamage
{
	struct FVector                                     HitPos;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Angle;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGshooter.SGGfxHud.ObjetiveInfo
// 0x0014
struct FObjetiveInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Caption;                                          		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  MC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGshooter.SGGfxHud.GrenadeInfo
// 0x0008
struct FGrenadeInfo
{
	class ASGProj_Grenade*                             Grenade;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGshooter.SGGfxHud.ActProgressBar
// 0x001C
struct FActProgressBar
{
	class USGSeqAct_ToggleProgressBar*                 SGSeqAct_TP;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CurrentTime;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EndTime;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NumFrames;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSucceded : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SGshooter.SGGfxHud.TimerSlot
// 0x000C
struct FTimerSlot
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGshooter.SGGfxHudMiniMap.ItemInfo
// 0x0008
struct FItemInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MC;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SGshooter.SGHUD.RadioCommand
// 0x000C
struct FRadioCommand
{
	struct FName                                       Display;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              Sound;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif