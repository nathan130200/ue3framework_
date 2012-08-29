/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UTGameContent_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UTGameContent.UTCTFBase_Content
// 0x0000 (0x0444 - 0x0444)
class AUTCTFBase_Content : public AUTCTFBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54212 ];

		return pClassPointer;
	};

};

UClass* AUTCTFBase_Content::pClassPointer = NULL;

// Class UTGameContent.UTCTFMessage
// 0x0000 (0x010C - 0x010C)
class UUTCTFMessage : public UUTCarriedObjectMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54218 ];

		return pClassPointer;
	};

	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
};

UClass* UUTCTFMessage::pClassPointer = NULL;

// Class UTGameContent.UTCTFBlueFlagBase
// 0x0000 (0x0444 - 0x0444)
class AUTCTFBlueFlagBase : public AUTCTFBase_Content
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54226 ];

		return pClassPointer;
	};

};

UClass* AUTCTFBlueFlagBase::pClassPointer = NULL;

// Class UTGameContent.UTCTFBlueFlag
// 0x0004 (0x0328 - 0x0324)
class AUTCTFBlueFlag : public AUTCTFFlag
{
public:
	class UParticleSystemComponent*                    BlueGlow;                                         		// 0x0324 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54233 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTCTFBlueFlag::pClassPointer = NULL;

// Class UTGameContent.UTCTFRedFlagBase
// 0x0000 (0x0444 - 0x0444)
class AUTCTFRedFlagBase : public AUTCTFBase_Content
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54249 ];

		return pClassPointer;
	};

};

UClass* AUTCTFRedFlagBase::pClassPointer = NULL;

// Class UTGameContent.UTCTFRedFlag
// 0x0004 (0x0328 - 0x0324)
class AUTCTFRedFlag : public AUTCTFFlag
{
public:
	class UParticleSystemComponent*                    RedGlow;                                          		// 0x0324 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54256 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTCTFRedFlag::pClassPointer = NULL;

// Class UTGameContent.UTTeamScoreMessage
// 0x0068 (0x00CC - 0x0064)
class UUTTeamScoreMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              TeamScoreSounds[ 0x8 ];                           		// 0x0064 (0x0020) [0x0000000000000000]              
	struct FString                                     PreScoreRed;                                      		// 0x0084 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ScoreRed;                                         		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreScoreBlue;                                     		// 0x009C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ScoreBlue;                                        		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreScoreNone;                                     		// 0x00B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ScoreNone;                                        		// 0x00C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54711 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* UUTTeamScoreMessage::pClassPointer = NULL;

// Class UTGameContent.UTVWeap_CicadaTurret
// 0x0018 (0x0678 - 0x0660)
class AUTVWeap_CicadaTurret : public AUTVehicleWeapon
{
public:
	class AProjectile*                                 Incoming;                                         		// 0x0660 (0x0004) [0x0000000000000000]              
	class AProjectile*                                 IgnoredMissile;                                   		// 0x0664 (0x0004) [0x0000000000000000]              
	class AProjectile*                                 WatchedMissile;                                   		// 0x0668 (0x0004) [0x0000000000000000]              
	TArray< class AProjectile* >                       Missiles;                                         		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62803 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void IncomingMissile ( class AProjectile* P );
	void AddMissile ( class AProjectile* P );
};

UClass* AUTVWeap_CicadaTurret::pClassPointer = NULL;

// Class UTGameContent.UTDecoy
// 0x0008 (0x0294 - 0x028C)
class AUTDecoy : public AUTProjectile
{
public:
	float                                              DecoyRange;                                       		// 0x028C (0x0004) [0x0000000000000000]              
	class AUTVehicle_Cicada_Content*                   ProtectedTarget;                                  		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63359 ];

		return pClassPointer;
	};

	void Landed ( struct FVector HitNormal, class AActor* FloorActor );
	void eventDestroyed ( );
	bool CheckRange ( class AActor* Aggressor );
};

UClass* AUTDecoy::pClassPointer = NULL;

// Class UTGameContent.UTVehicle_Cicada_Content
// 0x000C (0x0AF0 - 0x0AE4)
class AUTVehicle_Cicada_Content : public AUTVehicle_Cicada
{
public:
	TArray< class AUTDecoy* >                          Decoys;                                           		// 0x0AE4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63367 ];

		return pClassPointer;
	};

	void IncomingMissile ( class AProjectile* P );
	void PostBeginPlay ( );
};

UClass* AUTVehicle_Cicada_Content::pClassPointer = NULL;

// Class UTGameContent.UTDmgType_CicadaLaser
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_CicadaLaser : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63378 ];

		return pClassPointer;
	};

	void ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn );
};

UClass* UUTDmgType_CicadaLaser::pClassPointer = NULL;

// Class UTGameContent.UTProj_Shockball
// 0x002C (0x02B8 - 0x028C)
class AUTProj_Shockball : public AUTProjectile
{
public:
	class UClass*                                      ComboDamageType;                                  		// 0x028C (0x0004) [0x0000000000000000]              
	class UClass*                                      ComboTriggerType;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ComboTemplate;                                    		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              ComboRadius;                                      		// 0x0298 (0x0004) [0x0000000000000000]              
	int                                                ComboDamage;                                      		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              ComboMomentumTransfer;                            		// 0x02A0 (0x0004) [0x0000000000000000]              
	int                                                ComboAmmoCost;                                    		// 0x02A4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ComboExplosionSound;                              		// 0x02A8 (0x0004) [0x0000000000000000]              
	class UClass*                                      ComboExplosionEffect;                             		// 0x02AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bComboed : 1;                                     		// 0x02B0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class APawn*                                       ComboTarget;                                      		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63600 ];

		return pClassPointer;
	};

	void Monitor ( class APawn* P );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void ComboExplosion ( );
	void eventCreateProjectileLight ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AUTProj_Shockball::pClassPointer = NULL;

// Class UTGameContent.UTAttachment_ShockRifle
// 0x000F (0x02B8 - 0x02A9)
class AUTAttachment_ShockRifle : public AUTWeaponAttachment
{
public:
	class UParticleSystem*                             BeamTemplate;                                     		// 0x02AC (0x0004) [0x0000000000000000]              
	class UClass*                                      ImpactLightClass;                                 		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                CurrentPath;                                      		// 0x02B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71852 ];

		return pClassPointer;
	};

	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	bool AllowImpactEffects ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void SpawnBeam ( struct FVector Start, struct FVector End, unsigned long bFirstPerson );
};

UClass* AUTAttachment_ShockRifle::pClassPointer = NULL;

// Class UTGameContent.UTWeap_ShockRifle
// 0x0018 (0x05C4 - 0x05AC)
class AUTWeap_ShockRifle : public AUTWeap_ShockRifleBase
{
public:
	class AUTProj_Shockball*                           ComboTarget;                                      		// 0x05AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bRegisterTarget : 1;                              		// 0x05B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWaitForCombo : 1;                                		// 0x05B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasACombo : 1;                                   		// 0x05B0 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     ComboStart;                                       		// 0x05B4 (0x000C) [0x0000000000000000]              
	int                                                CurrentPath;                                      		// 0x05C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71864 ];

		return pClassPointer;
	};

	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void SetFlashLocation ( struct FVector HitLocation );
	struct FImpactInfo CalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	class AProjectile* ProjectileFire ( );
	unsigned char BestMode ( );
	void ClearCombo ( );
	void DoCombo ( );
	void StartFire ( unsigned char FireModeNum );
	float SuggestAttackStyle ( );
	float RangedAttackTime ( );
	void SetComboTarget ( class AUTProj_Shockball* S );
	struct FVector InstantFireStartTrace ( );
	float GetAIRating ( );
};

UClass* AUTWeap_ShockRifle::pClassPointer = NULL;

// Class UTGameContent.UTDmgType_CicadaRocket
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_CicadaRocket : public UUTDmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71910 ];

		return pClassPointer;
	};

	void ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn );
};

UClass* UUTDmgType_CicadaRocket::pClassPointer = NULL;

// Class UTGameContent.UTVWeap_CicadaMissileLauncher
// 0x0280 (0x08E0 - 0x0660)
class AUTVWeap_CicadaMissileLauncher : public AUTVehicleWeapon
{
public:
	int                                                RocketsLoaded;                                    		// 0x0660 (0x0004) [0x0000000000000000]              
	int                                                MaxRockets;                                       		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponLoadSnd;                                    		// 0x0668 (0x0004) [0x0000000000000000]              
	struct FVector                                     LockedTargetVect;                                 		// 0x066C (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     LockPosition;                                     		// 0x0678 (0x000C) [0x0000000000000000]              
	float                                              AccelRate;                                        		// 0x0684 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoadedFireTime;                                   		// 0x0688 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LockAcquiredSound;                                		// 0x068C (0x0004) [0x0000000000000000]              
	class AController*                                 RocketLoader;                                     		// 0x0690 (0x0004) [0x0000000000000000]              
	float                                              AltCrosshairBounceInTime;                         		// 0x0694 (0x0004) [0x0000000000000000]              
	float                                              AltCrosshairBounceOutTime;                        		// 0x0698 (0x0004) [0x0000000000000000]              
	int                                                TargetRotYaw;                                     		// 0x069C (0x0004) [0x0000000000000000]              
	struct FCHSlot                                     CrosshairSlots[ 0x10 ];                           		// 0x06A0 (0x0240) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71916 ];

		return pClassPointer;
	};

	void DrawLoadedCrosshair ( class AHUD* HUD );
	void DrawTarget ( class AUTHUDBase* H );
	void DrawBrackets ( class AUTHUDBase* H, float CX, float CY );
	void FireLoadedRocket ( );
	unsigned char BestMode ( );
	class AProjectile* ProjectileFire ( );
	void CustomFire ( );
	struct FVector FindInitialTarget ( unsigned long bAdjustUp, struct FVector AdjustLoc );
	int GetAmmoCount ( );
	bool CanHitDesiredTarget ( struct FVector SocketLocation, struct FRotator SocketRotation, struct FVector DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint );
	bool IsAimCorrect ( );
};

UClass* AUTVWeap_CicadaMissileLauncher::pClassPointer = NULL;

// Class UTGameContent.UTProj_CicadaRocket
// 0x0078 (0x0304 - 0x028C)
class AUTProj_CicadaRocket : public AUTProjectile
{
public:
	float                                              SpiralForceMag;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              InwardForceMag;                                   		// 0x0290 (0x0004) [0x0000000000000000]              
	float                                              ForwardForceMag;                                  		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              DesiredDistanceToAxis;                            		// 0x0298 (0x0004) [0x0000000000000000]              
	float                                              DesiredDistanceDecayRate;                         		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              InwardForceMagGrowthRate;                         		// 0x02A0 (0x0004) [0x0000000000000000]              
	float                                              CurSpiralForceMag;                                		// 0x02A4 (0x0004) [0x0000000000000000]              
	float                                              CurInwardForceMag;                                		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              CurForwardForceMag;                               		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              DT;                                               		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FVector                                     AxisOrigin;                                       		// 0x02B4 (0x000C) [0x0000000000000000]              
	struct FVector                                     AxisDir;                                          		// 0x02C0 (0x000C) [0x0000000000000000]              
	struct FVector                                     Target;                                           		// 0x02CC (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     SecondTarget;                                     		// 0x02D8 (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              KillRange;                                        		// 0x02E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFinalTarget : 1;                                 		// 0x02E8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              SwitchTargetTime;                                 		// 0x02EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USoundCue*                                   IgniteSound;                                      		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              IgniteTime;                                       		// 0x02F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     InitialAcceleration;                              		// 0x02F8 (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 71919 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void Landed ( struct FVector HitNormal, class AActor* FloorActor );
	void Ignite ( );
	void ChangeTarget ( );
	void ArmMissile ( struct FVector InitAccel, struct FVector InitVelocity );
	void Init ( struct FVector Direction );
	void ReplicatedEvent ( struct FName VarName );
};

UClass* AUTProj_CicadaRocket::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif