/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridVehicle_classes.h
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

#define CONST_UTVEHICLE_UNSET_TEAM                               128

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GridVehicle.UTVehicle.EAIVehiclePurpose
/*enum EAIVehiclePurpose
{
	AIP_Offensive                                      = 0,
	AIP_Defensive                                      = 1,
	AIP_Any                                            = 2,
	AIP_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GridVehicle.ForcedDirVolume
// 0x0024 (0x0284 - 0x0260)
class AForcedDirVolume : public APhysicsVolume
{
public:
	unsigned long                                      bAllowBackwards : 1;                              		// 0x0260 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIgnoreHoverboards : 1;                           		// 0x0260 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDenyExit : 1;                                    		// 0x0260 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bBlockPawns : 1;                                  		// 0x0260 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bBlockSpectators : 1;                             		// 0x0260 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	class UClass*                                      TypeToForce;                                      		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UArrowComponent*                             Arrow;                                            		// 0x0268 (0x0004) [0x000000000408000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     ArrowDirection;                                   		// 0x026C (0x000C) [0x0000000000000000]              
	TArray< class AUTVehicle* >                        TouchingVehicles;                                 		// 0x0278 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1793 ];

		return pClassPointer;
	};

	bool StopsProjectile ( class AProjectile* P );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventActorEnteredVolume ( class AActor* Other );
	void PostBeginPlay ( );
};

UClass* AForcedDirVolume::pClassPointer = NULL;

// Class GridVehicle.UTSkelControl_Damage
// 0x008C (0x0180 - 0x00F4)
class UUTSkelControl_Damage : public USkelControlSingleBone
{
public:
	unsigned long                                      bInitialized : 1;                                 		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOnDamageActive : 1;                              		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bControlStrFollowsHealth : 1;                     		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsBroken : 1;                                    		// 0x00F4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bIsBreaking : 1;                                  		// 0x00F4 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bOnDeathActive : 1;                               		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bOnDeathUseForSecondaryExplosion : 1;             		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	class AUTVehicle*                                  OwnerVehicle;                                     		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              HealthPerc;                                       		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              DamageBoneScale;                                  		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DamageMax;                                        		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActivationThreshold;                              		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 BreakMesh;                                        		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BreakThreshold;                                   		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BreakTime;                                        		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DefaultBreakDir;                                  		// 0x0118 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DamageScale;                                      		// 0x0124 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DamageOnBreak;                                 		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DamageTrail;                                   		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BrokenBone;                                       		// 0x0138 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              BreakTimer;                                       		// 0x0140 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OwnerVehicleMaxHealth;                            		// 0x0144 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     BreakSpeed;                                       		// 0x0148 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathPercentToActuallySpawn;                      		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DeathBoneScale;                                   		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 DeathStaticMesh;                                  		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DeathImpulseDir;                                  		// 0x0160 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DeathScale;                                       		// 0x016C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DeathOnBreak;                                  		// 0x0178 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_DeathTrail;                                    		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1794 ];

		return pClassPointer;
	};

	float eventRestorePart ( );
	void eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible );
	void eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible );
};

UClass* UUTSkelControl_Damage::pClassPointer = NULL;

// Class GridVehicle.UTSkelControl_TurretConstrained
// 0x0058 (0x014C - 0x00F4)
class UUTSkelControl_TurretConstrained : public USkelControlSingleBone
{
public:
	unsigned long                                      bConstrainPitch : 1;                              		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConstrainYaw : 1;                                		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bConstrainRoll : 1;                               		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bInvertPitch : 1;                                 		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bInvertYaw : 1;                                   		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bInvertRoll : 1;                                  		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bFixedWhenFiring : 1;                             		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bResetWhenUnattended : 1;                         		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bIsInMotion : 1;                                  		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000100] 
	struct FTurretConstraintData                       MaxAngle;                                         		// 0x00F8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretConstraintData                       MinAngle;                                         		// 0x0104 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FTurretStepData >                   Steps;                                            		// 0x0110 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LagDegreesPerSecond;                              		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchSpeedScale;                                  		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    DesiredBoneRotation;                              		// 0x0124 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                AssociatedSeatIndex;                              		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    ConstrainedBoneRotation;                          		// 0x0134 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __OnTurretStatusChange__Delegate;                 		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1795 ];

		return pClassPointer;
	};

	bool WouldConstrainPitch ( int TestPitch, class USkeletalMeshComponent* SkelComp );
	void InitTurret ( struct FRotator InitRot, class USkeletalMeshComponent* SkelComp );
	void OnTurretStatusChange ( unsigned long bIsMoving );
};

UClass* UUTSkelControl_TurretConstrained::pClassPointer = NULL;

// Class GridVehicle.UTVehicleBase
// 0x0018 (0x05C0 - 0x05A8)
class AUTVehicleBase : public ASVehicle
{
public:
	unsigned long                                      bShouldEject : 1;                                 		// 0x05A8 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2D*                                  HudIcons;                                         		// 0x05AC (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         HudCoords;                                        		// 0x05B0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1796 ];

		return pClassPointer;
	};

	void ApplyWeaponEffects ( int OverlayFlags, int SeatIndex );
	void QuickPick ( int Quad );
	void DisplayHud ( class AHUD* HUD, class UCanvas* Canvas, struct FVector2D HudPOS, int SIndex );
	bool GetPowerLevel ( float* PowerLevel );
	void HandleDeadVehicleDriver ( );
	void DetachDriver ( class APawn* P );
	void StopFiringWeapon ( );
	void EjectDriver ( );
	void DriverLeft ( );
	bool DriverEnter ( class APawn* P );
	void DrivingStatusChanged ( );
	struct FName GetVehicleDrivingStatName ( );
	bool NeedToTurn ( struct FVector targ );
	float GetDamageScaling ( );
	bool BotFire ( unsigned long bFinished );
	unsigned char ChooseFireMode ( );
	void ServerChangeSeat ( int RequestedSeat );
	void ServerAdjacentSeat ( int Direction, class AController* C );
	void AdjacentSeat ( int Direction, class AController* C );
	void SwitchWeapon ( unsigned char NewGroup );
};

UClass* AUTVehicleBase::pClassPointer = NULL;

// Class GridVehicle.UTVehicle
// 0x0414 (0x09D4 - 0x05C0)
class AUTVehicle : public AUTVehicleBase
{
public:
	unsigned long                                      bDriverHoldsFlag : 1;                             		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanCarryFlag : 1;                                		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTeamLocked : 1;                                  		// 0x05C0 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bValidLinkTarget : 1;                             		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bEnteringUnlocks : 1;                             		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasCustomEntryRadius : 1;                        		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bKeyVehicle : 1;                                  		// 0x05C0 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bHasTowCable : 1;                                 		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bUseAlternatePaths : 1;                           		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bEjectPassengersWhenFlipped : 1;                  		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bMustBeUpright : 1;                               		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bStickDeflectionThrottle : 1;                     		// 0x05C0 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bShouldAutoCenterViewPitch : 1;                   		// 0x05C0 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bHasWeaponBar : 1;                                		// 0x05C0 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bNeverReset : 1;                                  		// 0x05C0 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bEjectKilledBodies : 1;                           		// 0x05C0 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bLightArmor : 1;                                  		// 0x05C0 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bShouldLeaveForCombat : 1;                        		// 0x05C0 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bDrawHealthOnHUD : 1;                             		// 0x05C0 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bDriverCastsShadow : 1;                           		// 0x05C0 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bHasBeenDriven : 1;                               		// 0x05C0 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bDropDetailWhenDriving : 1;                       		// 0x05C0 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bFrontalCollision : 1;                            		// 0x05C0 (0x0004) [0x0000000000000002] [0x00400000] ( CPF_Const )
	unsigned long                                      bFrontalCollisionWithFixed : 1;                   		// 0x05C0 (0x0004) [0x0000000000000002] [0x00800000] ( CPF_Const )
	unsigned long                                      bLookSteerOnNormalControls : 1;                   		// 0x05C0 (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
	unsigned long                                      bLookSteerOnSimpleControls : 1;                   		// 0x05C0 (0x0004) [0x0000000000000001] [0x02000000] ( CPF_Edit )
	unsigned long                                      bUsingLookSteer : 1;                              		// 0x05C0 (0x0004) [0x0000000000002000] [0x04000000] ( CPF_Transient )
	unsigned long                                      bAllowedExit : 1;                                 		// 0x05C0 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bFindGroundExit : 1;                              		// 0x05C0 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bHomingTarget : 1;                                		// 0x05C0 (0x0004) [0x0000000000000000] [0x20000000] 
	unsigned long                                      bRequestedEntryWithFlag : 1;                      		// 0x05C0 (0x0004) [0x0000000000000000] [0x40000000] 
	unsigned long                                      bTakeWaterDamageWhileDriving : 1;                 		// 0x05C0 (0x0004) [0x0000000000000000] [0x80000000] 
	unsigned long                                      bInitializedVehicleEffects : 1;                   		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRagdollDriverOnDarkwalkerHorn : 1;               		// 0x05C4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDeadVehicle : 1;                                 		// 0x05C4 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bHasTurretExplosion : 1;                          		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsBurning : 1;                                   		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsScraping : 1;                                  		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPostRenderTraceSucceeded : 1;                    		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bShowLocked : 1;                                  		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPlayingSpawnEffect : 1;                          		// 0x05C4 (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	unsigned long                                      bReducedFallingCollisionDamage : 1;               		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bIsInDestroyablePenetration : 1;                  		// 0x05C4 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bRotateCameraUnderVehicle : 1;                    		// 0x05C4 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bNoZSmoothing : 1;                                		// 0x05C4 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bLimitCameraZLookingUp : 1;                       		// 0x05C4 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bNoFollowJumpZ : 1;                               		// 0x05C4 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bFixedCamZ : 1;                                   		// 0x05C4 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bCameraNeverHidesVehicle : 1;                     		// 0x05C4 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bStopDeathCamera : 1;                             		// 0x05C4 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bIsConsoleTurning : 1;                            		// 0x05C4 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bAcceptTurretJump : 1;                            		// 0x05C4 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bShowDamageDebug : 1;                             		// 0x05C4 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bStealthVehicle : 1;                              		// 0x05C4 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bIsDisabled : 1;                                  		// 0x05C4 (0x0004) [0x0000000000000020] [0x00400000] ( CPF_Net )
	unsigned long                                      bIsTowingHoverboard : 1;                          		// 0x05C4 (0x0004) [0x0000000000000020] [0x00800000] ( CPF_Net )
	unsigned long                                      bAllowTowFromAllDirections : 1;                   		// 0x05C4 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bNoZDampingInAir : 1;                             		// 0x05C4 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bNoZDamping : 1;                                  		// 0x05C4 (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bHasEnemyVehicleSound : 1;                        		// 0x05C4 (0x0004) [0x0000000000000000] [0x08000000] 
	unsigned long                                      bIsNecrisVehicle : 1;                             		// 0x05C4 (0x0004) [0x0000000000000000] [0x10000000] 
	unsigned long                                      bSpectatedView : 1;                               		// 0x05C4 (0x0004) [0x0000000000000000] [0x20000000] 
	class USoundCue*                                   VehicleLockedSound;                               		// 0x05C8 (0x0004) [0x0000000000000000]              
	unsigned char                                      AIPurpose;                                        		// 0x05CC (0x0001) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x05CD (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      LinkedToCount;                                    		// 0x05CE (0x0001) [0x0000000000000020]              ( CPF_Net )
	class AActor*                                      NoPassengerObjective;                             		// 0x05D0 (0x0004) [0x0000000000000000]              
	float                                              DeflectionReverseThresh;                          		// 0x05D4 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           DrivingPhysicalMaterial;                          		// 0x05D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicalMaterial*                           DefaultPhysicalMaterial;                          		// 0x05DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastCheckUpsideDownTime;                          		// 0x05E0 (0x0004) [0x0000000000000000]              
	float                                              FlippedCount;                                     		// 0x05E4 (0x0004) [0x0000000000000000]              
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x05E8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              VehicleLostTime;                                  		// 0x05EC (0x0004) [0x0000000000000000]              
	float                                              PlayerStartTime;                                  		// 0x05F0 (0x0004) [0x0000000000000000]              
	float                                              RespawnTime;                                      		// 0x05F4 (0x0004) [0x0000000000000000]              
	float                                              InitialSpawnDelay;                                		// 0x05F8 (0x0004) [0x0000000000000000]              
	float                                              LinkHealMult;                                     		// 0x05FC (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             LinkedToAudio;                                    		// 0x0600 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   LinkedToCue;                                      		// 0x0604 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LinkedEndSound;                                   		// 0x0608 (0x0004) [0x0000000000000000]              
	float                                              MaxDesireability;                                 		// 0x060C (0x0004) [0x0000000000000000]              
	float                                              ObjectiveGetOutDist;                              		// 0x0610 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         HornSounds;                                       		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HornAIRadius;                                     		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              LastHornTime;                                     		// 0x0624 (0x0004) [0x0000000000000000]              
	int                                                HornIndex;                                        		// 0x0628 (0x0004) [0x0000000000000000]              
	float                                              LeftStickDirDeadZone;                             		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookSteerSensitivity;                             		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookSteerDamping;                                 		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LookSteerDeadZone;                                		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConsoleSteerScale;                                		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LockedOnSound;                                    		// 0x0640 (0x0004) [0x0000000000000000]              
	class UClass*                                      RanOverDamageType;                                		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              MinRunOverSpeed;                                  		// 0x0648 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RanOverSound;                                     		// 0x064C (0x0004) [0x0000000000000000]              
	int                                                StolenAnnouncementIndex;                          		// 0x0650 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   StolenSound;                                      		// 0x0654 (0x0004) [0x0000000000000000]              
	float                                              LastRunOverWarningTime;                           		// 0x0658 (0x0004) [0x0000000000000000]              
	float                                              MinRunOverWarningAim;                             		// 0x065C (0x0004) [0x0000000000000000]              
	class AUTVehicle*                                  NextVehicle;                                      		// 0x0660 (0x0004) [0x0000000000000000]              
	class AController*                                 Reservation;                                      		// 0x0664 (0x0004) [0x0000000000000000]              
	float                                              ResetTime;                                        		// 0x0668 (0x0004) [0x0000000000000000]              
	struct FString                                     VehiclePositionString;                            		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VehicleNameString;                                		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TeamBeaconMaxDist;                                		// 0x0684 (0x0004) [0x0000000000000000]              
	float                                              TeamBeaconPlayerInfoMaxDist;                      		// 0x0688 (0x0004) [0x0000000000000000]              
	float                                              HUDExtent;                                        		// 0x068C (0x0004) [0x0000000000000000]              
	float                                              WaterDamage;                                      		// 0x0690 (0x0004) [0x0000000000000000]              
	float                                              AccumulatedWaterDamage;                           		// 0x0694 (0x0004) [0x0000000000000000]              
	class UClass*                                      VehicleDrowningDamType;                           		// 0x0698 (0x0004) [0x0000000000000000]              
	class UClass*                                      ExplosionLightClass;                              		// 0x069C (0x0004) [0x0000000000000000]              
	float                                              MaxExplosionLightDistance;                        		// 0x06A0 (0x0004) [0x0000000000000000]              
	struct FRotator                                    WeaponRotation;                                   		// 0x06A4 (0x000C) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FVehicleSeat >                      Seats;                                            		// 0x06B0 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	int                                                SeatMask;                                         		// 0x06BC (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FVehicleEffect >                    VehicleEffects;                                   		// 0x06C0 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	class AEmitter*                                    DeathExplosion;                                   		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              TimeTilSecondaryVehicleExplosion;                 		// 0x06D0 (0x0004) [0x0000000000000000]              
	TArray< struct FVehicleAnim >                      VehicleAnims;                                     		// 0x06D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVehicleSound >                     VehicleSounds;                                    		// 0x06E0 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< struct FDamageParamScales >                DamageParamScaleLevels;                           		// 0x06EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFDamageMorphTargets >              DamageMorphTargets;                               		// 0x06F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUTSkelControl_Damage* >             DamageSkelControls;                               		// 0x0704 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClientHealth;                                     		// 0x0710 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DamageMaterialInstance[ 0x2 ];                    		// 0x0714 (0x0008) [0x0000000000000000]              
	TArray< class UMaterialInterface* >                TeamMaterials;                                    		// 0x071C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DamageSmokeThreshold;                             		// 0x0728 (0x0004) [0x0000000000000000]              
	float                                              FireDamageThreshold;                              		// 0x072C (0x0004) [0x0000000000000000]              
	float                                              FireDamagePerSec;                                 		// 0x0730 (0x0004) [0x0000000000000000]              
	float                                              UpsideDownDamagePerSec;                           		// 0x0734 (0x0004) [0x0000000000000000]              
	float                                              OccupiedUpsideDownDamagePerSec;                   		// 0x0738 (0x0004) [0x0000000000000000]              
	float                                              AccruedFireDamage;                                		// 0x073C (0x0004) [0x0000000000000000]              
	class UClass*                                      ExplosionDamageType;                              		// 0x0740 (0x0004) [0x0000000000000000]              
	class AController*                                 KillerController;                                 		// 0x0744 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              MaxImpactEffectDistance;                          		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              MaxFireEffectDistance;                            		// 0x074C (0x0004) [0x0000000000000000]              
	float                                              LastJumpOutCheck;                                 		// 0x0750 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ExplosionTemplate;                                		// 0x0754 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             SecondaryExplosion;                               		// 0x0758 (0x0004) [0x0000000000000000]              
	struct FName                                       BigExplosionSocket;                               		// 0x075C (0x0008) [0x0000000000000000]              
	float                                              MaxWheelEffectDistSq;                             		// 0x0764 (0x0004) [0x0000000000000000]              
	struct FName                                       WaterEffectType;                                  		// 0x0768 (0x0008) [0x0000000000000000]              
	TArray< struct FBurnOutDatum >                     BurnOutMaterialInstances;                         		// 0x0770 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BurnOutTime;                                      		// 0x077C (0x0004) [0x0000000000000000]              
	float                                              DeadVehicleLifeSpan;                              		// 0x0780 (0x0004) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x0784 (0x0004) [0x0000000000000000]              
	float                                              ExplosionRadius;                                  		// 0x0788 (0x0004) [0x0000000000000000]              
	float                                              ExplosionMomentum;                                		// 0x078C (0x0004) [0x0000000000000000]              
	float                                              ExplosionInAirAngVel;                             		// 0x0790 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 DeathExplosionShake;                              		// 0x0794 (0x0004) [0x0000000000000000]              
	float                                              InnerExplosionShakeRadius;                        		// 0x0798 (0x0004) [0x0000000000000000]              
	float                                              OuterExplosionShakeRadius;                        		// 0x079C (0x0004) [0x0000000000000000]              
	struct FName                                       TurretScaleControlName;                           		// 0x07A0 (0x0008) [0x0000000000000000]              
	struct FName                                       TurretSocketName;                                 		// 0x07A8 (0x0008) [0x0000000000000000]              
	struct FVector                                     TurretOffset;                                     		// 0x07B0 (0x000C) [0x0000000000000000]              
	class UStaticMesh*                                 DestroyedTurretTemplate;                          		// 0x07BC (0x0004) [0x0000000000000000]              
	float                                              TurretExplosiveForce;                             		// 0x07C0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x07C4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ImpactHitSound;                                   		// 0x07C8 (0x0004) [0x0000000000000000]              
	float                                              LastDeathImpactTime;                              		// 0x07CC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LargeChunkImpactSound;                            		// 0x07D0 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   MediumChunkImpactSound;                           		// 0x07D4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SmallChunkImpactSound;                            		// 0x07D8 (0x0004) [0x0000000000000000]              
	float                                              RemainingBurn;                                    		// 0x07DC (0x0004) [0x0000000000000000]              
	struct FName                                       BurnTimeParameterName;                            		// 0x07E0 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             ScrapeSound;                                      		// 0x07E8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             TireAudioComp;                                    		// 0x07EC (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	struct FName                                       CurrentTireMaterial;                              		// 0x07F0 (0x0008) [0x0000000000000000]              
	float                                              SpawnRadius;                                      		// 0x07F8 (0x0004) [0x0000000000000000]              
	struct FName                                       DrivingAnim;                                      		// 0x07FC (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SpawnInSound;                                     		// 0x0804 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SpawnOutSound;                                    		// 0x0808 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BoostPadSound;                                    		// 0x080C (0x0004) [0x0000000000000000]              
	struct FVector                                     FlagOffset;                                       		// 0x0810 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    FlagRotation;                                     		// 0x081C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FlagBone;                                         		// 0x0828 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     HUDLocation;                                      		// 0x0830 (0x000C) [0x0000000000000000]              
	float                                              MapSize;                                          		// 0x083C (0x0004) [0x0000000000000000]              
	struct FTextureCoordinates                         IconCoords;                                       		// 0x0840 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         FlipToolTipIconCoords;                            		// 0x0850 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         EnterToolTipIconCoords;                           		// 0x0860 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         DropFlagIconCoords;                               		// 0x0870 (0x0010) [0x0000000000000000]              
	struct FTextureCoordinates                         DropOrbIconCoords;                                		// 0x0880 (0x0010) [0x0000000000000000]              
	float                                              LastPostRenderTraceTime;                          		// 0x0890 (0x0004) [0x0000000000000000]              
	float                                              ShowLockedMaxDist;                                		// 0x0894 (0x0004) [0x0000000000000000]              
	int                                                LastHealth;                                       		// 0x0898 (0x0004) [0x0000000000000000]              
	float                                              HealthPulseTime;                                  		// 0x089C (0x0004) [0x0000000000000000]              
	struct FVector                                     TeamBeaconOffset;                                 		// 0x08A0 (0x000C) [0x0000000000000000]              
	class APlayerReplicationInfo*                      PassengerPRI;                                     		// 0x08AC (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     PassengerTeamBeaconOffset;                        		// 0x08B0 (0x000C) [0x0000000000000000]              
	TArray< class UParticleSystem* >                   SpawnInTemplates;                                 		// 0x08BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialList >                     SpawnMaterialLists;                               		// 0x08C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SpawnMaterialParameterName;                       		// 0x08D4 (0x0008) [0x0000000000000000]              
	struct FInterpCurveFloat                           SpawnMaterialParameterCurve;                      		// 0x08DC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                OriginalMaterials;                                		// 0x08EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SpawnInTime;                                      		// 0x08F8 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          BurnOutMaterial[ 0x2 ];                           		// 0x08FC (0x0008) [0x0000000000000000]              
	float                                              CollisionDamageMult;                              		// 0x0904 (0x0004) [0x0000000000000000]              
	float                                              LastCollisionDamageTime;                          		// 0x0908 (0x0004) [0x0000000000000000]              
	float                                              DestroyOnPenetrationThreshold;                    		// 0x090C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DestroyOnPenetrationDuration;                     		// 0x0910 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeInDestroyablePenetration;                     		// 0x0914 (0x0004) [0x0000000000000000]              
	float                                              SeatCameraScale;                                  		// 0x0918 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OldCamPosZ;                                       		// 0x091C (0x0004) [0x0000000000000000]              
	float                                              CameraSmoothingFactor;                            		// 0x0920 (0x0004) [0x0000000000000000]              
	float                                              DefaultFOV;                                       		// 0x0924 (0x0004) [0x0000000000000000]              
	TArray< struct FTimePosition >                     OldPositions;                                     		// 0x0928 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              CameraLag;                                        		// 0x0934 (0x0004) [0x0000000000000000]              
	struct FVector                                     CameraOffset;                                     		// 0x0938 (0x000C) [0x0000000000000000]              
	float                                              LookForwardDist;                                  		// 0x0944 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinCameraDistSq;                                  		// 0x0948 (0x0004) [0x0000000000000000]              
	struct FVector                                     OldCameraPosition;                                		// 0x094C (0x000C) [0x0000000000000000]              
	struct FUTTakeHitInfo                              LastTakeHitInfo;                                  		// 0x0958 (0x0028) [0x0000000000000020]              ( CPF_Net )
	float                                              LastTakeHitTimeout;                               		// 0x0980 (0x0004) [0x0000000000000000]              
	float                                              DisabledTime;                                     		// 0x0984 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeLastDisabled;                                 		// 0x0988 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             DisabledTemplate;                                 		// 0x098C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    DisabledEffectComponent;                          		// 0x0990 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FName >                             HoverBoardAttachSockets;                          		// 0x0994 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            HoverBoardSocketInUse;                            		// 0x09A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UStaticMesh*                                 ReferenceMovementMesh;                            		// 0x09AC (0x0004) [0x0000000000000000]              
	float                                              ExtraReachDownThreshold;                          		// 0x09B0 (0x0004) [0x0000000000000000]              
	float                                              LastEnemyWarningTime;                             		// 0x09B4 (0x0004) [0x0000000000000000]              
	TArray< class USoundNodeWave* >                    EnemyVehicleSound;                                		// 0x09B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    VehicleDestroyedSound;                            		// 0x09C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HeroBonus;                                        		// 0x09D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1797 ];

		return pClassPointer;
	};

	void DetachTowCable ( );
	void GetTowedVehicles ( TArray< class AUTVehicle* >* TowedVehicles );
	class AUTVehicle* GetTowingVehicle ( );
	bool OnTouchForcedDirVolume ( class AForcedDirVolume* Vol );
	void ApplyWeaponEffects ( int OverlayFlags, int SeatIndex );
	struct FName GetVehicleKillStatName ( );
	bool CanAttack ( class AActor* Other );
	class AActor* GetAlternateLockTarget ( );
	void DetachDriver ( class APawn* P );
	void SetMovementEffect ( int SeatIndex, unsigned long bSetActive, class APawn* UTP );
	void SetSeatStoragePawn ( int SeatIndex, class APawn* PawnToSit );
	struct FName GetHoverBoardAttachPoint ( struct FVector HoverBoardLocation );
	void SetHoverBoardAttachPointInUse ( struct FName PointName, unsigned long bInUse );
	void SetShieldActive ( int SeatIndex, unsigned long bActive );
	void GetSVehicleDebug ( TArray< struct FString >* DebugInfo );
	void eventMorphTargetDestroyed ( int MorphNodeIndex );
	void ApplyRandomMorphDamage ( int Amount );
	void eventApplyMorphHeal ( int Amount );
	void eventReceivedHealthChange ( );
	void ApplyMorphDamage ( struct FVector HitLocation, int Damage, struct FVector Momentum );
	void UpdateDamageMaterial ( );
	void InitDamageSkel ( );
	void InitializeMorphs ( );
	void eventRBPenetrationDestroy ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	float GetCollisionDamageModifier ( TArray< struct FRigidBodyContactInfo >* ContactInfos );
	int GetHealth ( int SeatIndex );
	void eventOnPropertyChange ( struct FName PropName );
	struct FString GetHumanReadableName ( );
	void SitDriver ( class APawn* UTP, int SeatIndex );
	void AttachDriver ( class APawn* P );
	void CheckDamageSmoke ( );
	void StopVehicleSounds ( );
	void TurretExplosion ( );
	bool ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal );
	void SetBurnOut ( );
	void DisableCollision ( );
	void DisableDamageSmoke ( );
	void TurnOffShadows ( );
	void StartBurnOut ( );
	void AdjustCameraScale ( unsigned long bMoveCameraIn );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	float LimitCameraZ ( float CurrentCamZ, float OriginalCamZ, int SeatIndex );
	struct FVector GetCameraStart ( int SeatIndex );
	struct FVector GetCameraFocus ( int SeatIndex );
	bool CalcCamera ( float DeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void FindGoodEndView ( class APlayerController* PC, struct FRotator* GoodRotation );
	void VehicleAdjustFlashLocation ( int SeatIndex, unsigned char FireModeNum, struct FVector NewLocation, unsigned long bClear );
	void VehicleAdjustFlashCount ( int SeatIndex, unsigned char FireModeNum, unsigned long bClear );
	class AActor* FindWeaponHitNormal ( struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal, struct FTraceHitInfo* HitInfo );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void VehicleWeaponStoppedFiring ( unsigned long bViaReplication, int SeatIndex );
	void WeaponStoppedFiring ( class AWeapon* InWeapon, unsigned long bViaReplication );
	void VehicleWeaponFired ( unsigned long bViaReplication, struct FVector HitLocation, int SeatIndex );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void CauseMuzzleFlashLight ( int SeatIndex );
	bool OverrideEndFire ( unsigned char FireModeNum );
	bool OverrideBeginFire ( unsigned char FireModeNum );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	struct FVector GetPhysicalFireStartLoc ( class AGameWeapon* ForWeapon );
	struct FVector GetEffectLocation ( int SeatIndex );
	void eventGetBarrelLocationAndRotation ( int SeatIndex, struct FVector* SocketLocation, struct FRotator* SocketRotation );
	void ClearFlashLocation ( class AWeapon* Who );
	void SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewLoc );
	void IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum );
	void ClearFlashCount ( class AWeapon* Who );
	void SetFiringMode ( class AWeapon* Weap, unsigned char FiringModeNum );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void InitializeTurrets ( );
	void PreCacheSeatNames ( );
	void InitializeSeats ( );
	bool ImportantVehicle ( );
	bool IsArtillery ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void eventPlayTakeHitEffects ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	void StopLinkedEffect ( );
	void StartLinkedEffect ( );
	void DecrementLinkedToCount ( );
	void IncrementLinkedToCount ( );
	bool HealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	bool AllowLinkThroughOwnedActor ( class AActor* OwnedActor );
	bool TeamLink ( int TeamNum );
	void SetReservation ( class AController* C );
	bool StopsProjectile ( class AProjectile* P );
	bool SpokenFor ( class AController* C );
	bool ChangedReservation ( class APawn* P );
	float ReservationCostMultiplier ( class APawn* P );
	unsigned char GetTeamNum ( );
	bool OpenPositionFor ( class APawn* P );
	bool Occupied ( );
	void eventCheckReset ( );
	void PassengerLeave ( int SeatIndex );
	bool eventDriverLeave ( unsigned long bForceLeave );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	int GetFirstAvailableSeat ( );
	void DriverLeft ( );
	bool DriverEnter ( class APawn* P );
	class AUTVehicle* GetMoveTargetFor ( class APawn* P );
	int NumPassengers ( );
	void UpdateControllerOnPossess ( unsigned long bVehicleTransition );
	void PlayHorn ( );
	bool CheckTurretPitchLimit ( int NeededPitch, int SeatIndex );
	bool TooCloseToAttack ( class AActor* Other );
	void SendLockOnMessage ( int Switch );
	void ShootMissile ( class AProjectile* P );
	void eventIncomingMissile ( class AProjectile* P );
	bool Dodge ( unsigned char DoubleClickMove );
	void TeamChanged_VehicleEffects ( );
	void TeamChanged ( );
	void eventSetTeamNum ( unsigned char T );
	float GetDisplayedHealth ( );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	bool ShouldShowUseable ( class APlayerController* PC, float Dist );
	void VehicleLocked ( class APawn* P );
	bool TryToDrive ( class APawn* P );
	bool CanEnterVehicle ( class APawn* P );
	class APlayerReplicationInfo* GetSeatPRI ( int SeatNum );
	bool InCustomEntryRadius ( class APawn* P );
	void BlowupVehicle ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	class AController* GetCollisionDamageInstigator ( );
	void eventTornOff ( );
	bool ChangeSeat ( class AController* ControllerToMove, int RequestedSeat );
	bool HasPriority ( class AController* first, class AController* Second );
	void ServerChangeSeat ( int RequestedSeat );
	void ServerAdjacentSeat ( int Direction, class AController* C );
	class AController* GetControllerForSeatIndex ( int SeatIndex );
	int GetSeatIndexForController ( class AController* ControllerToMove );
	bool AnySeatAvailable ( );
	bool SeatAvailable ( int SeatIndex );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void DrivingStatusChanged ( );
	bool HasOccupiedTurret ( );
	void eventSetKeyVehicle ( );
	void eventReplicatedEvent ( struct FName VarName );
	void WeaponRotationChanged ( int SeatIndex );
	struct FRotator eventGetViewRotation ( );
	bool ShouldClamp ( );
	struct FRotator GetClampedViewRotation ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ServerSetConsoleTurning ( unsigned long bNewConsoleTurning );
	int GetSeatIndexFromPrefix ( struct FString Prefix );
	void eventTakeFireDamage ( );
	void EnableVehicle ( );
	bool DisableVehicle ( );
	void SetTexturesToBeResident ( unsigned long bActive );
	void Destroyed ( );
	void DriverRadiusDamage ( float DamageAmount, float DamageRadius, class AController* EventInstigator, class UClass* DamageType, float Momentum, struct FVector HitLocation, class AActor* DamageCauser, float DamageFalloffExponent );
	void eventTakeWaterDamage ( );
	void PancakeOther ( class APawn* Other );
	void eventRanInto ( class AActor* Other );
	bool FindAutoExit ( class APawn* ExitingDriver );
	struct FRotator ExitRotation ( );
	void EntryAnnouncement ( class AController* C );
	void VehicleEvent ( struct FName EventTag );
	bool EagleEyeTarget ( );
	void PlayVehicleAnimation ( struct FName EventTag );
	void PlayVehicleSound ( struct FName SoundTag );
	void TriggerVehicleEffect ( struct FName EventTag );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void InitializeEffects ( );
	void CreateVehicleEffect ( int EffectIndex );
	bool IsDriverSeat ( class AVehicle* TestSeatPawn );
	bool IsGoodTowTruck ( );
	bool FastVehicle ( );
	void eventJumpOutCheck ( );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	void SetHUDLocation ( struct FVector NewHUDLocation );
	void EjectSeat ( int SeatIdx );
	void eventSelfDestruct ( class AActor* ImpactedActor );
	void StopSpawnEffect ( );
	void PlaySpawnEffect ( );
	float GetChargePower ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	void UpdateLookSteerStatus ( );
	void CreateDamageMaterialInstance ( );
	void ReattachMesh ( );
	void UpdateShadowSettings ( unsigned long bWantShadow );
	void PostBeginPlay ( );
	bool IsSeatControllerReplicationViewer ( int SeatIndex );
	int GetBarrelIndex ( int SeatIndex );
	struct FVector GetSeatPivotPoint ( int SeatIndex );
	void ForceWeaponRotation ( int SeatIndex, struct FRotator NewRotation );
	unsigned char SeatFiringMode ( int SeatIndex, unsigned char NewFireMode, unsigned long bReadValue );
	unsigned char SeatFlashCount ( int SeatIndex, unsigned char NewCount, unsigned long bReadValue );
	struct FVector SeatFlashLocation ( int SeatIndex, struct FVector NewLoc, unsigned long bReadValue );
	struct FRotator SeatWeaponRotation ( int SeatIndex, struct FRotator NewRot, unsigned long bReadValue );
};

UClass* AUTVehicle::pClassPointer = NULL;

// Class GridVehicle.UTHoverVehicle
// 0x0028 (0x09FC - 0x09D4)
class AUTHoverVehicle : public AUTVehicle
{
public:
	TArray< int >                                      GroundEffectIndices;                              		// 0x09D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxGroundEffectDist;                              		// 0x09E0 (0x0004) [0x0000000000000000]              
	struct FName                                       GroundEffectDistParameterName;                    		// 0x09E4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             WaterGroundEffect;                                		// 0x09EC (0x0004) [0x0000000000000000]              
	float                                              CustomGravityScaling;                             		// 0x09F0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	float                                              StallZGravityScaling;                             		// 0x09F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullAirSpeed;                                     		// 0x09F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1798 ];

		return pClassPointer;
	};

	void BlowupVehicle ( );
};

UClass* AUTHoverVehicle::pClassPointer = NULL;

// Class GridVehicle.UTAirVehicle
// 0x002C (0x0A28 - 0x09FC)
class AUTAirVehicle : public AUTHoverVehicle
{
public:
	TArray< int >                                      ContrailEffectIndices;                            		// 0x09FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       ContrailColorParameterName;                       		// 0x0A08 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAutoLand : 1;                                    		// 0x0A10 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PushForce;                                        		// 0x0A14 (0x0004) [0x0000000000000000]              
	struct FString                                     RadarLockMessage;                                 		// 0x0A18 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastRadarLockWarnTime;                            		// 0x0A24 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1799 ];

		return pClassPointer;
	};

	bool Dodge ( unsigned char DoubleClickMove );
	bool FastVehicle ( );
	bool RecommendLongRangedAttack ( );
	void SetDriving ( unsigned long bNewDriving );
	float GetGravityZ ( );
};

UClass* AUTAirVehicle::pClassPointer = NULL;

// Class GridVehicle.UTWeaponPawn
// 0x000C (0x05CC - 0x05C0)
class AUTWeaponPawn : public AUTVehicleBase
{
public:
	class AUTVehicleWeapon*                            MyVehicleWeapon;                                  		// 0x05C0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUTVehicle*                                  MyVehicle;                                        		// 0x05C4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MySeatIndex;                                      		// 0x05C8 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1800 ];

		return pClassPointer;
	};

	void ApplyWeaponEffects ( int OverlayFlags, int SeatIndex );
	bool TooCloseToAttack ( class AActor* Other );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	bool DriverLeave ( unsigned long bForceLeave );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void AttachDriver ( class APawn* P );
	void SetBaseEyeheight ( );
	float GetCollisionRadius ( );
	bool DoJump ( unsigned long bUpdating );
	void SetMovementPhysics ( );
	void eventBaseChange ( );
	void JumpOffPawn ( );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void DropToGround ( );
	bool PlaceExitingDriver ( class APawn* ExitingDriver );
	void AdjustCameraScale ( unsigned long bIn );
	void ServerChangeSeat ( int RequestedSeat );
	void ServerAdjacentSeat ( int Direction, class AController* C );
	void DriverLeft ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void ClearFlashLocation ( class AWeapon* Who );
	void SetFlashLocation ( class AWeapon* Who, unsigned char FireModeNum, struct FVector NewLoc );
	void ClearFlashCount ( class AWeapon* Who );
	void IncrementFlashCount ( class AWeapon* Who, unsigned char FireModeNum );
	void SetFiringMode ( class AWeapon* Weap, unsigned char FiringModeNum );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void eventReplicatedEvent ( struct FName VarName );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	struct FName GetVehicleDrivingStatName ( );
	struct FVector GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc );
};

UClass* AUTWeaponPawn::pClassPointer = NULL;

// Class GridVehicle.UTVehicleSimCar
// 0x0078 (0x013C - 0x00C4)
class UUTVehicleSimCar : public USVehicleSimCar
{
public:
	struct FInterpCurveFloat                           TorqueVSpeedCurve;                                		// 0x00C4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           EngineRPMCurve;                                   		// 0x00D4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LSDFactor;                                        		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrottleSpeed;                                    		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRPM;                                           		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              MaxRPM;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              ActualThrottle;                                   		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceThrottle : 1;                               		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasForcedThrottle : 1;                           		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDriverlessBraking : 1;                           		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAutoHandbrake : 1;                               		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              SteeringReductionFactor;                          		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SteeringReductionRampUpRate;                      		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentSteeringReduction;                         		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                NumWheelsForFullSteering;                         		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SteeringReductionSpeed;                           		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SteeringReductionMinSpeed;                        		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinHardTurnSpeed;                                 		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HardTurnMotorTorque;                              		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HandbrakeSpeed;                                   		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActualHandbrake;                                  		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              FrontalCollisionGripFactor;                       		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ConsoleHardTurnGripFactor;                        		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpeedBasedTurnDamping;                            		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AirControlTurnTorque;                             		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InAirUprightTorqueFactor;                         		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InAirUprightMaxTorque;                            		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1801 ];

		return pClassPointer;
	};

};

UClass* UUTVehicleSimCar::pClassPointer = NULL;

// Class GridVehicle.UTVehicleSimChopper
// 0x00A4 (0x0134 - 0x0090)
class UUTVehicleSimChopper : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                   		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxReverseForce;                                  		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LongDamping;                                      		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxStrafeForce;                                   		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LatDamping;                                       		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DirectionChangeForce;                             		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRiseForce;                                     		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UpDamping;                                        		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnTorqueFactor;                                 		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnTorqueMax;                                    		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TurnDamping;                                      		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxYawRate;                                       		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchTorqueFactor;                                		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchTorqueMax;                                   		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PitchDamping;                                     		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollTorqueTurnFactor;                             		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollTorqueStrafeFactor;                           		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollTorqueMax;                                    		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RollDamping;                                      		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StopThreshold;                                    		// 0x00DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxRandForce;                                     		// 0x00E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandForceInterval;                                		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAllowZThrust : 1;                                		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFullThrustOnDirectionChange : 1;                 		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bShouldCutThrustMaxOnImpact : 1;                  		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bRecentlyHit : 1;                                 		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bStrafeAffectsTurnDamping : 1;                    		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHeadingInitialized : 1;                          		// 0x00E8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bStabilizeStops : 1;                              		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	float                                              StrafeTurnDamping;                                		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              TargetHeading;                                    		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              TargetPitch;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              PitchViewCorrelation;                             		// 0x00F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     RandForce;                                        		// 0x00FC (0x000C) [0x0000000000000000]              
	struct FVector                                     RandTorque;                                       		// 0x0108 (0x000C) [0x0000000000000000]              
	float                                              AccumulatedTime;                                  		// 0x0114 (0x0004) [0x0000000000000000]              
	float                                              StabilizationForceMultiplier;                     		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentStabilizationMultiplier;                   		// 0x011C (0x0004) [0x0000000000000000]              
	struct FVector                                     OldVelocity;                                      		// 0x0120 (0x000C) [0x0000000000000000]              
	float                                              StoppedBrakeTorque;                               		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              HardLimitAirSpeedScale;                           		// 0x0130 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1802 ];

		return pClassPointer;
	};

};

UClass* UUTVehicleSimChopper::pClassPointer = NULL;

// Class GridVehicle.UTVehicleSimHover
// 0x0004 (0x0138 - 0x0134)
class UUTVehicleSimHover : public UUTVehicleSimChopper
{
public:
	unsigned long                                      bDisableWheelsWhenOff : 1;                        		// 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRepulsorCollisionEnabled : 1;                    		// 0x0134 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanClimbSlopes : 1;                              		// 0x0134 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUnPoweredDriving : 1;                            		// 0x0134 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1803 ];

		return pClassPointer;
	};

};

UClass* UUTVehicleSimHover::pClassPointer = NULL;

// Class GridVehicle.UTVehicleWeapon
// 0x004C (0x0320 - 0x02D4)
class AUTVehicleWeapon : public AGameWeapon
{
public:
	int                                                SeatIndex;                                        		// 0x02D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class AUTVehicle*                                  MyVehicle;                                        		// 0x02D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FName >                             FireTriggerTags;                                  		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             AltFireTriggerTags;                               		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   BulletWhip;                                       		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              LastCorrectAimTime;                               		// 0x02F8 (0x0004) [0x0000000000000000]              
	float                                              LastInCorrectAimTime;                             		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              CurrentCrosshairScaling;                          		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              AimTraceRange;                                    		// 0x0304 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            AimingTraceIgnoredActors;                         		// 0x0308 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxFinalAimAdjustment;                            		// 0x0314 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlaySoundFromSocket : 1;                         		// 0x0318 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCurrentlyZoomed : 1;                             		// 0x0318 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIgnoreSocketPitchRotation : 1;                   		// 0x0318 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIgnoreDownwardPitch : 1;                         		// 0x0318 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDebugTurret : 1;                                 		// 0x0318 (0x0004) [0x0000000000000000] [0x00000010] 
	class UClass*                                      VehicleClass;                                     		// 0x031C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1804 ];

		return pClassPointer;
	};

	void ServerSetZoom ( unsigned long bNowZoomed );
	void WeaponPlaySound ( class USoundCue* Sound, float NoiseLoudness );
	float GetMaxFinalAimAdjustment ( );
	class AActor* GetTraceOwner ( );
	struct FVector InstantFireEndTrace ( struct FVector StartTrace );
	struct FVector InstantFireStartTrace ( );
	class AProjectile* ProjectileFire ( );
	void EndFire ( unsigned char FireModeNum );
	void BeginFire ( unsigned char FireModeNum );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void PutDownWeapon ( );
	void Activate ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	float GetFireInterval ( unsigned char FireModeNum );
	struct FName GetFireTriggerTag ( int BarrelIndex, int FireMode );
	bool eventIsAimCorrect ( );
	void GetFireStartLocationAndRotation ( struct FVector* StartLocation, struct FRotator* StartRotation );
	struct FVector eventGetDesiredAimPoint ( class AActor** TargetActor );
	void GetCrosshairScaling ( class AHUD* HUD );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	bool CanHitDesiredTarget ( struct FVector SocketLocation, struct FRotator SocketRotation, struct FVector DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint );
	void eventReplicatedEvent ( struct FName VarName );
	void PostBeginPlay ( );
};

UClass* AUTVehicleWeapon::pClassPointer = NULL;

// Class GridVehicle.UTVehicleWheel
// 0x000C (0x0120 - 0x0114)
class UUTVehicleWheel : public USVehicleWheel
{
public:
	unsigned long                                      bUseMaterialSpecificEffects : 1;                  		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisableWheelOnDeath : 1;                         		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystemComponent*                    OldWheelParticleComp;                             		// 0x0118 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              EffectDesiredSpinDir;                             		// 0x011C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1805 ];

		return pClassPointer;
	};

	void OldEffectFinished ( class UParticleSystemComponent* PSystem );
	void eventSetParticleEffect ( class AUTVehicle* OwnerVehicle, class UParticleSystem* NewTemplate );
};

UClass* UUTVehicleWheel::pClassPointer = NULL;

// Class GridVehicle.VehicleMovementEffect
// 0x001C (0x0200 - 0x01E4)
class AVehicleMovementEffect : public AActor
{
public:
	class UStaticMeshComponent*                        AirEffect;                                        		// 0x01E4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              MinVelocityForAirEffect;                          		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              MaxVelocityForAirEffect;                          		// 0x01EC (0x0004) [0x0000000000000000]              
	struct FName                                       AirEffectScalar;                                  		// 0x01F0 (0x0008) [0x0000000000000000]              
	float                                              AirMaxDelta;                                      		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              AirCurrentLevel;                                  		// 0x01FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1806 ];

		return pClassPointer;
	};

};

UClass* AVehicleMovementEffect::pClassPointer = NULL;

// Class GridVehicle.UTHoverWheel
// 0x0000 (0x0120 - 0x0120)
class UUTHoverWheel : public UUTVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40348 ];

		return pClassPointer;
	};

};

UClass* UUTHoverWheel::pClassPointer = NULL;

// Class GridVehicle.UTSeqAct_EnterVehicle
// 0x0004 (0x00EC - 0x00E8)
class UUTSeqAct_EnterVehicle : public USequenceAction
{
public:
	int                                                SeatIndex;                                        		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40350 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* UUTSeqAct_EnterVehicle::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif