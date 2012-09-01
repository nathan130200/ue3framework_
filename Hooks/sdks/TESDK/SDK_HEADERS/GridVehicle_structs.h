/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridVehicle_structs.h
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

// ScriptStruct GridVehicle.UTVehicle.WeaponEffectInfo
// 0x0024
struct FWeaponEffectInfo
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Offset;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Scale3D;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	class UStaticMeshComponent*                        Effect;                                           		// 0x0020 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct GridVehicle.UTVehicle.VehicleSeat
// 0x012C
struct FVehicleSeat
{
	class APawn*                                       StoragePawn;                                      		// 0x0000 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class AVehicle*                                    SeatPawn;                                         		// 0x0004 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UClass*                                      GunClass;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AUTVehicleWeapon*                            Gun;                                              		// 0x000C (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	TArray< struct FName >                             GunSocket;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             GunPivotPoints;                                   		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                BarrelIndex;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     TurretVarPrefix;                                  		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponEffectInfo >                 WeaponEffects;                                    		// 0x0038 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FName                                       WeaponRotationName;                               		// 0x0044 (0x0008) [0x0000000000000000]              
	struct FName                                       FlashLocationName;                                		// 0x004C (0x0008) [0x0000000000000000]              
	struct FName                                       FlashCountName;                                   		// 0x0054 (0x0008) [0x0000000000000000]              
	struct FName                                       FiringModeName;                                   		// 0x005C (0x0008) [0x0000000000000000]              
	struct FPointer                                    WeaponRotationProperty;                           		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    FlashLocationProperty;                            		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    FlashCountProperty;                               		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    FiringModeProperty;                               		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FRotator                                    LastWeaponRotation;                               		// 0x0074 (0x000C) [0x0000000000000000]              
	TArray< struct FName >                             TurretControls;                                   		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UUTSkelControl_TurretConstrained* >  TurretControllers;                                		// 0x008C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	struct FVector                                     AimPoint;                                         		// 0x0098 (0x000C) [0x0000000000000000]              
	class AActor*                                      AimTarget;                                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	float                                              PivotFireOffsetZ;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisableOffsetZAdjust : 1;                        		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       CameraTag;                                        		// 0x00B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CameraBaseOffset;                                 		// 0x00B8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CameraSafeOffset;                                 		// 0x00C4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraOffset;                                     		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraEyeHeight;                                  		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewPitchMin;                                     		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ViewPitchMax;                                     		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSeatVisible : 1;                                 		// 0x00E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       SeatBone;                                         		// 0x00E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SeatOffset;                                       		// 0x00EC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    SeatRotation;                                     		// 0x00F8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SeatSocket;                                       		// 0x0104 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MuzzleFlashLightClass;                            		// 0x010C (0x0004) [0x0000000000000000]              
	class UPointLightComponent*                        MuzzleFlashLight;                                 		// 0x0110 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      ImpactFlashLightClass;                            		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              DriverDamageMult;                                 		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             SeatMotionAudio;                                  		// 0x011C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AVehicleMovementEffect*                      SeatMovementEffect;                               		// 0x0120 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   SeatIconPOS;                                      		// 0x0124 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GridVehicle.UTVehicle.VehicleEffect
// 0x0028
struct FVehicleEffect
{
	struct FName                                       EffectStartTag;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectEndTag;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRestartRunning : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHighDetailOnly : 1;                              		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UParticleSystem*                             EffectTemplate;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             EffectTemplate_Blue;                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectSocket;                                     		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    EffectRef;                                        		// 0x0024 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct GridVehicle.UTVehicle.VehicleAnim
// 0x0024
struct FVehicleAnim
{
	struct FName                                       AnimTag;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             AnimSeqs;                                         		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              AnimRate;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAnimLoopLastSeq : 1;                             		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       AnimPlayerName;                                   		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridVehicle.UTVehicle.VehicleSound
// 0x0018
struct FVehicleSound
{
	struct FName                                       SoundStartTag;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SoundEndTag;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundTemplate;                                    		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             SoundRef;                                         		// 0x0014 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct GridVehicle.UTVehicle.DamageParamScales
// 0x000C
struct FDamageParamScales
{
	struct FName                                       DamageParamName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridVehicle.UTVehicle.FDamageMorphTargets
// 0x0030
struct FFDamageMorphTargets
{
	struct FName                                       MorphNodeName;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	class UMorphNodeWeight*                            MorphNode;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       LinkedMorphNodeName;                              		// 0x000C (0x0008) [0x0000000000000000]              
	int                                                LinkedMorphNodeIndex;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       InfluenceBone;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             DamagePropNames;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridVehicle.UTVehicle.BurnOutDatum
// 0x0008
struct FBurnOutDatum
{
	class UMaterialInstanceTimeVarying*                MITV;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CurrValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridVehicle.UTVehicle.MaterialList
// 0x000C
struct FMaterialList
{
	TArray< class UMaterialInterface* >                Materials;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct GridVehicle.UTVehicle.TimePosition
// 0x0010
struct FTimePosition
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct GridVehicle.UTVehicle.UTTakeHitInfo
// 0x0028
struct FUTTakeHitInfo
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       HitBone;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GridVehicle.UTSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawConstraint;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RollConstraint;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GridVehicle.UTSkelControl_TurretConstrained.TurretStepData
// 0x0020
struct FTurretStepData
{
	int                                                StepStartAngle;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                StepEndAngle;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretConstraintData                       MaxAngle;                                         		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretConstraintData                       MinAngle;                                         		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif