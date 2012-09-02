/*
#############################################################################################
# Ravaged Beta (Beta) SDK
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

// Class UTGameContent.UTArmorPickup_BaseArmor
// 0x0000 (0x03C0 - 0x03C0)
class AUTArmorPickup_BaseArmor : public AUTArmorPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68658 ];

		return pClassPointer;
	};

	void AddShieldStrength ( class AUTPawn* P );
	int CanUseShield ( class AUTPawn* P );
};

UClass* AUTArmorPickup_BaseArmor::pClassPointer = NULL;

// Class UTGameContent.UTArmorPickup_ShieldBelt
// 0x0004 (0x03C4 - 0x03C0)
class AUTArmorPickup_ShieldBelt : public AUTArmorPickupFactory
{
public:
	class UClass*                                      DroppedPickupClass;                               		// 0x03C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68675 ];

		return pClassPointer;
	};

	void AddShieldStrength ( class AUTPawn* P );
	int CanUseShield ( class AUTPawn* P );
};

UClass* AUTArmorPickup_ShieldBelt::pClassPointer = NULL;

// Class UTGameContent.UTDroppedShieldBelt
// 0x0004 (0x01F8 - 0x01F4)
class AUTDroppedShieldBelt : public AUTDroppedItemPickup
{
public:
	int                                                ShieldAmount;                                     		// 0x01F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68689 ];

		return pClassPointer;
	};

	float BotDesireability ( class APawn* Bot, class AController* C );
	int CanUseShield ( class AUTPawn* P );
	void GiveTo ( class APawn* P );
	void DroppedFrom ( class APawn* P );
};

UClass* AUTDroppedShieldBelt::pClassPointer = NULL;

// Class UTGameContent.UTArmorPickup_Thighpad
// 0x0000 (0x03C0 - 0x03C0)
class AUTArmorPickup_Thighpad : public AUTArmorPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68694 ];

		return pClassPointer;
	};

	void AddShieldStrength ( class AUTPawn* P );
	int CanUseShield ( class AUTPawn* P );
};

UClass* AUTArmorPickup_Thighpad::pClassPointer = NULL;

// Class UTGameContent.UTAttachment_RocketLauncher
// 0x0000 (0x02AC - 0x02AC)
class AUTAttachment_RocketLauncher : public AUTWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68708 ];

		return pClassPointer;
	};

	void StopThirdPersonFireEffects ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void AttachTo ( class AUTPawn* OwnerPawn );
};

UClass* AUTAttachment_RocketLauncher::pClassPointer = NULL;

// Class UTGameContent.UTAttachment_ShockRifle
// 0x000C (0x02B8 - 0x02AC)
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68716 ];

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
// 0x0018 (0x05D0 - 0x05B8)
class AUTWeap_ShockRifle : public AUTWeap_ShockRifleBase
{
public:
	class AUTProj_Shockball*                           ComboTarget;                                      		// 0x05B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRegisterTarget : 1;                              		// 0x05BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWaitForCombo : 1;                                		// 0x05BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasACombo : 1;                                   		// 0x05BC (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     ComboStart;                                       		// 0x05C0 (0x000C) [0x0000000000000000]              
	int                                                CurrentPath;                                      		// 0x05CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68728 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68740 ];

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

// Class UTGameContent.UTBerserk
// 0x0014 (0x026C - 0x0258)
class AUTBerserk : public AUTTimedPowerup
{
public:
	class USoundCue*                                   BerserkAmbientSound;                              		// 0x0258 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BerserkFadingSound;                               		// 0x025C (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          OverlayMaterialInstance;                          		// 0x0260 (0x0004) [0x0000000000000000]              
	struct FMeshEffect                                 VehicleWeaponEffect;                              		// 0x0264 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68754 ];

		return pClassPointer;
	};

	void PlayBerserkFadingSound ( );
	void eventDestroyed ( );
	void ItemRemovedFromInvManager ( );
	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void AdjustPawn ( class AUTPawn* P, unsigned long bRemoveBonus );
	void AddWeaponOverlay ( class AUTGameReplicationInfo* GRI );
};

UClass* AUTBerserk::pClassPointer = NULL;

// Class UTGameContent.UTPowerupRewardMessage
// 0x000C (0x0070 - 0x0064)
class UUTPowerupRewardMessage : public UUTLocalMessage
{
public:
	struct FString                                     JuggernautString;                                 		// 0x0064 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68768 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UUTPowerupRewardMessage::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68790 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68796 ];

		return pClassPointer;
	};

	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
};

UClass* UUTCTFMessage::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68797 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTCTFBlueFlag::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68820 ];

		return pClassPointer;
	};

};

UClass* AUTCTFBlueFlagBase::pClassPointer = NULL;

// Class UTGameContent.UTCTFGame_Content
// 0x0000 (0x056C - 0x056C)
class AUTCTFGame_Content : public AUTCTFGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68829 ];

		return pClassPointer;
	};

};

UClass* AUTCTFGame_Content::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68831 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* UUTTeamScoreMessage::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68838 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTCTFRedFlag::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68850 ];

		return pClassPointer;
	};

};

UClass* AUTCTFRedFlagBase::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68858 ];

		return pClassPointer;
	};

	void Landed ( struct FVector HitNormal, class AActor* FloorActor );
	void eventDestroyed ( );
	bool CheckRange ( class AActor* Aggressor );
};

UClass* AUTDecoy::pClassPointer = NULL;

// Class UTGameContent.UTVehicle_Cicada_Content
// 0x000C (0x0BD4 - 0x0BC8)
class AUTVehicle_Cicada_Content : public AUTVehicle_Cicada
{
public:
	TArray< class AUTDecoy* >                          Decoys;                                           		// 0x0BC8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68860 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68875 ];

		return pClassPointer;
	};

	void ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn );
};

UClass* UUTDmgType_CicadaLaser::pClassPointer = NULL;

// Class UTGameContent.UTVWeap_CicadaTurret
// 0x0018 (0x0684 - 0x066C)
class AUTVWeap_CicadaTurret : public AUTVehicleWeapon
{
public:
	class AProjectile*                                 Incoming;                                         		// 0x066C (0x0004) [0x0000000000000000]              
	class AProjectile*                                 IgnoredMissile;                                   		// 0x0670 (0x0004) [0x0000000000000000]              
	class AProjectile*                                 WatchedMissile;                                   		// 0x0674 (0x0004) [0x0000000000000000]              
	TArray< class AProjectile* >                       Missiles;                                         		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68881 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void IncomingMissile ( class AProjectile* P );
	void AddMissile ( class AProjectile* P );
};

UClass* AUTVWeap_CicadaTurret::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68884 ];

		return pClassPointer;
	};

	void ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn );
};

UClass* UUTDmgType_CicadaRocket::pClassPointer = NULL;

// Class UTGameContent.UTVWeap_CicadaMissileLauncher
// 0x0280 (0x08EC - 0x066C)
class AUTVWeap_CicadaMissileLauncher : public AUTVehicleWeapon
{
public:
	int                                                RocketsLoaded;                                    		// 0x066C (0x0004) [0x0000000000000000]              
	int                                                MaxRockets;                                       		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponLoadSnd;                                    		// 0x0674 (0x0004) [0x0000000000000000]              
	struct FVector                                     LockedTargetVect;                                 		// 0x0678 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     LockPosition;                                     		// 0x0684 (0x000C) [0x0000000000000000]              
	float                                              AccelRate;                                        		// 0x0690 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoadedFireTime;                                   		// 0x0694 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   LockAcquiredSound;                                		// 0x0698 (0x0004) [0x0000000000000000]              
	class AController*                                 RocketLoader;                                     		// 0x069C (0x0004) [0x0000000000000000]              
	float                                              AltCrosshairBounceInTime;                         		// 0x06A0 (0x0004) [0x0000000000000000]              
	float                                              AltCrosshairBounceOutTime;                        		// 0x06A4 (0x0004) [0x0000000000000000]              
	int                                                TargetRotYaw;                                     		// 0x06A8 (0x0004) [0x0000000000000000]              
	struct FCHSlot                                     CrosshairSlots[ 0x10 ];                           		// 0x06AC (0x0240) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68890 ];

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

// Class UTGameContent.UTDmgType_Fire
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_Fire : public UUTDmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68893 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_Fire::pClassPointer = NULL;

// Class UTGameContent.UTDmgType_MantaBolt
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_MantaBolt : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68897 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UUTDmgType_MantaBolt::pClassPointer = NULL;

// Class UTGameContent.UTVWeap_MantaGun
// 0x0000 (0x066C - 0x066C)
class AUTVWeap_MantaGun : public AUTVehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68906 ];

		return pClassPointer;
	};

	float SuggestAttackStyle ( );
};

UClass* AUTVWeap_MantaGun::pClassPointer = NULL;

// Class UTGameContent.UTDmgType_ScorpionBlade
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_ScorpionBlade : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68909 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_ScorpionBlade::pClassPointer = NULL;

// Class UTGameContent.UTDmgType_ScorpionGlob
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_ScorpionGlob : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68913 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_ScorpionGlob::pClassPointer = NULL;

// Class UTGameContent.UTVWeap_ScorpionTurret
// 0x0008 (0x0674 - 0x066C)
class AUTVWeap_ScorpionTurret : public AUTVehicleWeapon
{
public:
	class UClass*                                      TeamProjectiles[ 0x2 ];                           		// 0x066C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68915 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
};

UClass* AUTVWeap_ScorpionTurret::pClassPointer = NULL;

// Class UTGameContent.UTDmgType_ScorpionGlobRed
// 0x0000 (0x012C - 0x012C)
class UUTDmgType_ScorpionGlobRed : public UUTDmgType_ScorpionGlob
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68918 ];

		return pClassPointer;
	};

};

UClass* UUTDmgType_ScorpionGlobRed::pClassPointer = NULL;

// Class UTGameContent.UTGameCrowdAgent
// 0x0000 (0x0454 - 0x0454)
class AUTGameCrowdAgent : public AGameCrowdAgentSkeletal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68944 ];

		return pClassPointer;
	};

	void PlayDeath ( struct FVector KillMomentum );
};

UClass* AUTGameCrowdAgent::pClassPointer = NULL;

// Class UTGameContent.UTGib_ScorpionHatch
// 0x0000 (0x0258 - 0x0258)
class AUTGib_ScorpionHatch : public AUTGib_Vehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68950 ];

		return pClassPointer;
	};

};

UClass* AUTGib_ScorpionHatch::pClassPointer = NULL;

// Class UTGameContent.UTJumpBootEffect
// 0x0008 (0x01D0 - 0x01C8)
class AUTJumpBootEffect : public AActor
{
public:
	class UParticleSystem*                             JumpingEffect;                                    		// 0x01C8 (0x0004) [0x0000000000000000]              
	class AUTPawn*                                     OwnerPawn;                                        		// 0x01CC (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68954 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void AttachToOwner ( );
	void PostBeginPlay ( );
};

UClass* AUTJumpBootEffect::pClassPointer = NULL;

// Class UTGameContent.UTJumpBoots
// 0x0018 (0x0230 - 0x0218)
class AUTJumpBoots : public AUTInventory
{
public:
	float                                              MultiJumpBoost;                                   		// 0x0218 (0x0004) [0x0000000000000000]              
	unsigned char                                      Charges;                                          		// 0x021C (0x0001) [0x0000000000000020]              ( CPF_Net )
	class USoundCue*                                   ActivateSound;                                    		// 0x0220 (0x0004) [0x0000000000000000]              
	struct FString                                     RanOutText;                                       		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 68966 ];

		return pClassPointer;
	};

	float DetourWeight ( class APawn* Other, float PathWeight );
	float BotDesireability ( class AActor* PickupHolder, class APawn* P, class AController* C );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	void OwnerEvent ( struct FName EventName );
	void AdjustPawn ( class AUTPawn* P, unsigned long bRemoveBonus );
	void ClientLostItem ( );
	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void ReplicatedEvent ( struct FName VarName );
	void ItemRemovedFromInvManager ( );
	void GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
};

UClass* AUTJumpBoots::pClassPointer = NULL;

// Class UTGameContent.UTPickupFactory_Berserk
// 0x0000 (0x039C - 0x039C)
class AUTPickupFactory_Berserk : public AUTPowerupPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69008 ];

		return pClassPointer;
	};

};

UClass* AUTPickupFactory_Berserk::pClassPointer = NULL;

// Class UTGameContent.UTPickupFactory_HealthPack
// 0x0000 (0x03C4 - 0x03C4)
class AUTPickupFactory_HealthPack : public AUTHealthPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69018 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* AUTPickupFactory_HealthPack::pClassPointer = NULL;

// Class UTGameContent.UTPickupFactory_JumpBoots
// 0x0000 (0x039C - 0x039C)
class AUTPickupFactory_JumpBoots : public AUTPowerupPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69028 ];

		return pClassPointer;
	};

};

UClass* AUTPickupFactory_JumpBoots::pClassPointer = NULL;

// Class UTGameContent.UTPickupFactory_SuperHealth
// 0x0004 (0x03C8 - 0x03C4)
class AUTPickupFactory_SuperHealth : public AUTHealthPickupFactory
{
public:
	class UParticleSystemComponent*                    Crackle;                                          		// 0x03C4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69037 ];

		return pClassPointer;
	};

	void SetPickupVisible ( );
	void SetPickupHidden ( );
	void RespawnEffect ( );
};

UClass* AUTPickupFactory_SuperHealth::pClassPointer = NULL;

// Class UTGameContent.UTPickupFactory_UDamage
// 0x0000 (0x039C - 0x039C)
class AUTPickupFactory_UDamage : public AUTPowerupPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69051 ];

		return pClassPointer;
	};

	void SetResOut ( );
	void eventInitPickupMeshEffects ( );
};

UClass* AUTPickupFactory_UDamage::pClassPointer = NULL;

// Class UTGameContent.UTUDamage
// 0x001C (0x0274 - 0x0258)
class AUTUDamage : public AUTTimedPowerup
{
public:
	class USoundCue*                                   UDamageFireSound;                                 		// 0x0258 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   UDamageFadingSound;                               		// 0x025C (0x0004) [0x0000000000000000]              
	float                                              LastUDamageSoundTime;                             		// 0x0260 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          OverlayMaterialInstance;                          		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FMeshEffect                                 VehicleWeaponEffect;                              		// 0x0268 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DamageAmbientSound;                               		// 0x0270 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69063 ];

		return pClassPointer;
	};

	void PlayUDamageFadingSound ( );
	void OwnerEvent ( struct FName EventName );
	void ItemRemovedFromInvManager ( );
	void GivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void AddWeaponOverlay ( class AUTGameReplicationInfo* GRI );
};

UClass* AUTUDamage::pClassPointer = NULL;

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69084 ];

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

// Class UTGameContent.UTProj_MantaBolt
// 0x0000 (0x028C - 0x028C)
class AUTProj_MantaBolt : public AUTProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69145 ];

		return pClassPointer;
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AUTProj_MantaBolt::pClassPointer = NULL;

// Class UTGameContent.UTProj_ScorpionGlob
// 0x0000 (0x0290 - 0x0290)
class AUTProj_ScorpionGlob : public AUTProj_ScorpionGlob_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69159 ];

		return pClassPointer;
	};

};

UClass* AUTProj_ScorpionGlob::pClassPointer = NULL;

// Class UTGameContent.UTProj_ScorpionGlob_Red
// 0x0000 (0x0290 - 0x0290)
class AUTProj_ScorpionGlob_Red : public AUTProj_ScorpionGlob_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69169 ];

		return pClassPointer;
	};

};

UClass* AUTProj_ScorpionGlob_Red::pClassPointer = NULL;

// Class UTGameContent.UTTeleporter
// 0x0008 (0x02F8 - 0x02F0)
class AUTTeleporter : public AUDKTeleporterBase
{
public:
	class UParticleSystemComponent*                    PortalEffect;                                     		// 0x02F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        TeleporterBaseMesh;                               		// 0x02F4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69254 ];

		return pClassPointer;
	};

	void InitializePortalEffect ( class AActor* Dest );
};

UClass* AUTTeleporter::pClassPointer = NULL;

// Class UTGameContent.UTVehicle_Hoverboard_Content
// 0x0000 (0x0CB4 - 0x0CB4)
class AUTVehicle_Hoverboard_Content : public AUTVehicle_Hoverboard
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69332 ];

		return pClassPointer;
	};

};

UClass* AUTVehicle_Hoverboard_Content::pClassPointer = NULL;

// Class UTGameContent.UTVehicle_Manta_Content
// 0x0000 (0x0BDC - 0x0BDC)
class AUTVehicle_Manta_Content : public AUTVehicle_Manta
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69372 ];

		return pClassPointer;
	};

	void BlowupVehicle ( );
	void DrivingStatusChanged ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void eventMantaDuckEffect ( );
	void eventMantaJumpEffect ( );
	void InitializeEffects ( );
};

UClass* AUTVehicle_Manta_Content::pClassPointer = NULL;

// Class UTGameContent.UTVehicle_Scorpion_Content
// 0x0000 (0x0CA4 - 0x0CA4)
class AUTVehicle_Scorpion_Content : public AUTVehicle_Scorpion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69430 ];

		return pClassPointer;
	};

	void TeamChanged ( );
};

UClass* AUTVehicle_Scorpion_Content::pClassPointer = NULL;

// Class UTGameContent.UTVehicleCTFGame_Content
// 0x0004 (0x0570 - 0x056C)
class AUTVehicleCTFGame_Content : public AUTVehicleCTFGame
{
public:
	class UClass*                                      HoverboardClass;                                  		// 0x056C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69503 ];

		return pClassPointer;
	};

	void SetPlayerDefaults ( class APawn* PlayerPawn );
};

UClass* AUTVehicleCTFGame_Content::pClassPointer = NULL;

// Class UTGameContent.UTVehicleFactory_Cicada
// 0x0000 (0x02E4 - 0x02E4)
class AUTVehicleFactory_Cicada : public AUTVehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69508 ];

		return pClassPointer;
	};

};

UClass* AUTVehicleFactory_Cicada::pClassPointer = NULL;

// Class UTGameContent.UTVehicleFactory_Manta
// 0x0000 (0x02E4 - 0x02E4)
class AUTVehicleFactory_Manta : public AUTVehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69512 ];

		return pClassPointer;
	};

};

UClass* AUTVehicleFactory_Manta::pClassPointer = NULL;

// Class UTGameContent.UTVehicleFactory_Scorpion
// 0x0000 (0x02E4 - 0x02E4)
class AUTVehicleFactory_Scorpion : public AUTVehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69516 ];

		return pClassPointer;
	};

};

UClass* AUTVehicleFactory_Scorpion::pClassPointer = NULL;

// Class UTGameContent.UTVehicleShockComboLight
// 0x0000 (0x0220 - 0x0220)
class UUTVehicleShockComboLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69520 ];

		return pClassPointer;
	};

};

UClass* UUTVehicleShockComboLight::pClassPointer = NULL;

// Class UTGameContent.UTWeap_RocketLauncher_Content
// 0x0000 (0x070C - 0x070C)
class AUTWeap_RocketLauncher_Content : public AUTWeap_RocketLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69708 ];

		return pClassPointer;
	};

};

UClass* AUTWeap_RocketLauncher_Content::pClassPointer = NULL;

// Class UTGameContent.UTWeaponLocker_Content
// 0x0000 (0x0424 - 0x0424)
class AUTWeaponLocker_Content : public AUTWeaponLocker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 69791 ];

		return pClassPointer;
	};

};

UClass* AUTWeaponLocker_Content::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif