/*
#############################################################################################
# CrimeCraft (idk) SDK
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameHUD.EGameHUDColor
/*enum EGameHUDColor
{
	GHD_WHITE                                          = 0,
	GHD_BLACK                                          = 1,
	GHD_MAX                                            = 2
};*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.GameExplosion
// 0x0074 (0x00B0 - 0x003C)
class UGameExplosion : public UObject
{
public:
	float                                              DamageDelay;                                      		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageFalloffExponent;                            		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      ActorToIgnoreForDamage;                           		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      ActorClassToIgnoreForKnockdownsAndCringes;        		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bAllowTeammateCringes : 1;                        		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFullDamageToAttachee : 1;                        		// 0x0058 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bAttachExplosionEmitterToAttachee : 1;            		// 0x0058 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSuppressAudio : 1;                               		// 0x0058 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCausesFracture : 1;                              		// 0x0058 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAllowPerMaterialFX : 1;                          		// 0x0058 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bParticleSystemIsBeingOverriddenDontUsePhysMatVersion : 1;		// 0x0058 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bUseMapSpecificValues : 1;                        		// 0x0058 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bUseOverlapCheck : 1;                             		// 0x0058 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownRadius;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KnockDownStrength;                                		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CringeRadius;                                     		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumTransferScale;                            		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleEmitterTemplate;                          		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExplosionEmitterScale;                            		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      HitActor;                                         		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x007C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0088 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPointLightComponent*                        ExploLight;                                       		// 0x0098 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExploLightFadeOutTime;                            		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FractureMeshRadius;                               		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FracturePartVel;                                  		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Attachee;                                         		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 AttacheeController;                               		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2475 ];

		return pClassPointer;
	};

};

UClass* UGameExplosion::pClassPointer = NULL;

// Class GameFramework.GameExplosionActor
// 0x002C (0x01EC - 0x01C0)
class AGameExplosionActor : public AActor
{
public:
	unsigned long                                      bHasExploded : 1;                                 		// 0x01C0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bActiveReloadBonusActive : 1;                     		// 0x01C0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UPointLightComponent*                        ExplosionLight;                                   		// 0x01C4 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	float                                              LightFadeTime;                                    		// 0x01C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LightInitialBrightness;                           		// 0x01CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGameExplosion*                              ExplosionTemplate;                                		// 0x01D0 (0x0004) [0x0000000000000000]              
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x01D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AController*                                 InstigatorController;                             		// 0x01D8 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActorFromPhysMaterialTrace;                    		// 0x01DC (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocationFromPhysMaterialTrace;                 		// 0x01E0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2477 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void DoExplosionDamage ( );
	void eventExplode ( class UGameExplosion* NewExplosionTemplate );
	void SpawnExplosionFogVolume ( );
	void DoExplosionCameraShakes ( );
	void SpawnExplosionDecal ( );
	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
	void UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial );
	void KnockdownPawn ( class AGamePawn* Victim, float DistFromExplosion );
	void DoCringesAndKnockdowns ( );
	bool ShouldDoCringeFor ( class AGamePawn* Victim );
	void DoBreakFracturedMeshes ( struct FVector ExploOrigin, float DamageRadius, float RBStrength, class UClass* dmgType );
	void HurtExplosion ( float BaseDamage, float DamageRadius, float DamageFalloffExp, class UClass* DamageType, float MomentumScale, struct FVector ExploOrigin, class AActor* IgnoredActor, class UClass* ActorClassToIgnoreForDamage, class AController* InstigatedByController, unsigned long bDoFullDamage );
	bool DoFullDamageToActor ( class AActor* Victim );
	class UPhysicalMaterial* GetPhysicalMaterial ( );
	void eventPreBeginPlay ( );
};

UClass* AGameExplosionActor::pClassPointer = NULL;

// Class GameFramework.GameHUD
// 0x0024 (0x0488 - 0x0464)
class AGameHUD : public AHUD
{
public:
	float                                              TotalTitleDrawTime;                               		// 0x0464 (0x0004) [0x0000000000000000]              
	float                                              TotalTitleFadeTime;                               		// 0x0468 (0x0004) [0x0000000000000000]              
	float                                              TitleDrawStartTime;                               		// 0x046C (0x0004) [0x0000000000000000]              
	struct FString                                     ChapterTitleString;                               		// 0x0470 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ActTitleString;                                   		// 0x047C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2479 ];

		return pClassPointer;
	};

	void StopDrawingChapterTitle ( );
	void StartDrawingChapterTitle ( struct FString ChapterName, struct FString ActName, float TotalDrawTime, float TotalFadeTime );
	void SetHUDDrawColor ( unsigned char eColor, unsigned char Alpha );
};

UClass* AGameHUD::pClassPointer = NULL;

// Class GameFramework.GamePawn
// 0x0004 (0x03E8 - 0x03E4)
class AGamePawn : public APawn
{
public:
	unsigned long                                      bRespondToExplosions : 1;                         		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2481 ];

		return pClassPointer;
	};

	void eventCringe ( float Duration );
	void ServerKnockdown ( struct FVector RBLinearVelocity, struct FVector RBAngularVelocity, struct FVector RadialOrigin, float RadialRadius, float RadialStrength, struct FVector PointImpulse, struct FVector PointImpulsePosition, struct FName PointImpulseBoneName );
	void GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight );
};

UClass* AGamePawn::pClassPointer = NULL;

// Class GameFramework.GamePlayerController
// 0x0000 (0x05BC - 0x05BC)
class AGamePlayerController : public APlayerController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2483 ];

		return pClassPointer;
	};

};

UClass* AGamePlayerController::pClassPointer = NULL;

// Class GameFramework.GamePlayerInput
// 0x0000 (0x0164 - 0x0164)
class UGamePlayerInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2485 ];

		return pClassPointer;
	};

};

UClass* UGamePlayerInput::pClassPointer = NULL;

// Class GameFramework.GameProjectile
// 0x0000 (0x01FC - 0x01FC)
class AGameProjectile : public AProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2487 ];

		return pClassPointer;
	};

};

UClass* AGameProjectile::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2489 ];

		return pClassPointer;
	};

};

UClass* UGameTypes::pClassPointer = NULL;

// Class GameFramework.GameVehicle
// 0x0000 (0x0568 - 0x0568)
class AGameVehicle : public ASVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2491 ];

		return pClassPointer;
	};

};

UClass* AGameVehicle::pClassPointer = NULL;

// Class GameFramework.GameWeapon
// 0x0000 (0x02B0 - 0x02B0)
class AGameWeapon : public AWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2493 ];

		return pClassPointer;
	};

};

UClass* AGameWeapon::pClassPointer = NULL;

// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray< struct FPropertyInfo >                     Properties;                                       		// 0x00E8 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2495 ];

		return pClassPointer;
	};

};

UClass* USeqAct_ModifyProperty::pClassPointer = NULL;

// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x01E8 - 0x016C)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x016C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x016C (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x016C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bApplyControl : 1;                                		// 0x016C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FRecoilDef                                  Recoil;                                           		// 0x0170 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Aim;                                              		// 0x01E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2497 ];

		return pClassPointer;
	};

};

UClass* UGameSkelCtrl_Recoil::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif