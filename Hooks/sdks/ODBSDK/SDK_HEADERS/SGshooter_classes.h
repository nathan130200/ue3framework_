/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGshooter_classes.h
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

#define CONST_LOW_ALERTNESS                                      0.2
#define CONST_HIGH_ALERTNESS                                     0.8
#define CONST_GS_USERNAME_MAXLENGTH                              15
#define CONST_GS_PASSWORD_MAXLENGTH                              30
#define CONST_GS_MESSAGE_MAXLENGTH                               255
#define CONST_GS_EMAIL_MAXLENGTH                                 50
#define CONST_GS_CDKEY_PART_MAXLENGTH                            4
#define CONST_CONTEXT_PRESENCE_MENUPRESENCE                      0
#define CONST_CONTEXT_GAME_MODE                                  0x0000800B
#define CONST_CONTEXT_GAME_MODE_DM                               0
#define CONST_CONTEXT_GAME_MODE_CTF                              1
#define CONST_CONTEXT_GAME_MODE_WAR                              2
#define CONST_CONTEXT_GAME_MODE_VCTF                             3
#define CONST_CONTEXT_GAME_MODE_TDM                              4
#define CONST_CONTEXT_GAME_MODE_DUEL                             5
#define CONST_CONTEXT_GAME_MODE_CUSTOM                           6
#define CONST_CONTEXT_GAME_MODE_CAMPAIGN                         7
#define CONST_CONTEXT_BOTSKILL                                   0
#define CONST_CONTEXT_MAPNAME                                    1
#define CONST_CONTEXT_PURESERVER                                 6
#define CONST_CONTEXT_LOCKEDSERVER                               7
#define CONST_CONTEXT_VSBOTS                                     8
#define CONST_CONTEXT_CAMPAIGN                                   9
#define CONST_CONTEXT_FORCERESPAWN                               10
#define CONST_CONTEXT_ALLOWKEYBOARD                              11
#define CONST_CONTEXT_FULLSERVER                                 12
#define CONST_CONTEXT_EMPTYSERVER                                13
#define CONST_CONTEXT_DEDICATEDSERVER                            14
#define CONST_CONTEXT_MAPNAME_CUSTOM                             0
#define CONST_CONTEXT_BOTSKILL_NOVICE                            0
#define CONST_CONTEXT_BOTSKILL_AVERAGE                           1
#define CONST_CONTEXT_BOTSKILL_EXPERIENCED                       2
#define CONST_CONTEXT_BOTSKILL_SKILLED                           3
#define CONST_CONTEXT_BOTSKILL_ADEPT                             4
#define CONST_CONTEXT_BOTSKILL_MASTERFUL                         5
#define CONST_CONTEXT_BOTSKILL_INHUMAN                           6
#define CONST_CONTEXT_BOTSKILL_GODLIKE                           7
#define CONST_CONTEXT_GOALSCORE                                  0
#define CONST_CONTEXT_GOALSCORE01                                1
#define CONST_CONTEXT_GOALSCORE02                                2
#define CONST_CONTEXT_GOALSCORE03                                3
#define CONST_CONTEXT_GOALSCORE04                                4
#define CONST_CONTEXT_NUMBOTS                                    0
#define CONST_CONTEXT_NUMBOTS01                                  1
#define CONST_CONTEXT_NUMBOTS02                                  2
#define CONST_CONTEXT_NUMBOTS03                                  3
#define CONST_CONTEXT_NUMBOTS04                                  4
#define CONST_CONTEXT_NUMBOTS05                                  5
#define CONST_CONTEXT_NUMBOTS06                                  6
#define CONST_CONTEXT_NUMBOTS07                                  7
#define CONST_CONTEXT_NUMBOTS08                                  8
#define CONST_CONTEXT_TIMELIMIT                                  0
#define CONST_CONTEXT_TIMELIMIT01                                1
#define CONST_CONTEXT_TIMELIMIT02                                2
#define CONST_CONTEXT_TIMELIMIT03                                3
#define CONST_CONTEXT_TIMELIMIT04                                4
#define CONST_CONTEXT_PURESERVER_NO                              0
#define CONST_CONTEXT_PURESERVER_YES                             1
#define CONST_CONTEXT_PURESERVER_ANY                             2
#define CONST_CONTEXT_LOCKEDSERVER_NO                            0
#define CONST_CONTEXT_LOCKEDSERVER_YES                           1
#define CONST_CONTEXT_CAMPAIGN_NO                                0
#define CONST_CONTEXT_CAMPAIGN_YES                               1
#define CONST_CONTEXT_FORCERESPAWN_NO                            0
#define CONST_CONTEXT_FORCERESPAWN_YES                           1
#define CONST_CONTEXT_ALLOWKEYBOARD_NO                           0
#define CONST_CONTEXT_ALLOWKEYBOARD_YES                          1
#define CONST_CONTEXT_ALLOWKEYBOARD_ANY                          2
#define CONST_CONTEXT_FULLSERVER_NO                              0
#define CONST_CONTEXT_FULLSERVER_YES                             1
#define CONST_CONTEXT_EMPTYSERVER_NO                             0
#define CONST_CONTEXT_EMPTYSERVER_YES                            1
#define CONST_CONTEXT_DEDICATEDSERVER_NO                         0
#define CONST_CONTEXT_DEDICATEDSERVER_YES                        1
#define CONST_CONTEXT_VSBOTS_NONE                                0
#define CONST_CONTEXT_VSBOTS_1_TO                                1
#define CONST_CONTEXT_VSBOTS_1_TO01                              2
#define CONST_CONTEXT_VSBOTS_3_TO                                3
#define CONST_CONTEXT_VSBOTS_2_TO                                4
#define CONST_CONTEXT_VSBOTS_3_TO01                              5
#define CONST_CONTEXT_VSBOTS_4_TO                                6
#define CONST_PROPERTY_NUMBOTS                                   0x100000F7
#define CONST_PROPERTY_GOALSCORE                                 0x100000F8
#define CONST_PROPERTY_TIMELIMIT                                 0x100000F9
#define CONST_PROPERTY_LEADERBOARDRATING                         0x20000004
#define CONST_PROPERTY_EPICMUTATORS                              0x10000105
#define CONST_PROPERTY_CUSTOMMAPNAME                             0x40000001
#define CONST_PROPERTY_CUSTOMGAMEMODE                            0x40000002
#define CONST_PROPERTY_SERVERDESCRIPTION                         0x40000003
#define CONST_PROPERTY_CUSTOMMUTATORS                            0x40000004
#define CONST_QUERY_DM                                           0
#define CONST_QUERY_TDM                                          1
#define CONST_QUERY_CTF                                          2
#define CONST_QUERY_VCTF                                         3
#define CONST_QUERY_WAR                                          4
#define CONST_QUERY_DUEL                                         5
#define CONST_QUERY_CAMPAIGN                                     6
#define CONST_STATS_VIEW_DM_PLAYER_ALLTIME                       1
#define CONST_STATS_VIEW_DM_RANKED_ALLTIME                       2
#define CONST_STATS_VIEW_DM_WEAPONS_ALLTIME                      3
#define CONST_STATS_VIEW_DM_VEHICLES_ALLTIME                     4
#define CONST_STATS_VIEW_DM_VEHICLEWEAPONS_ALLTIME               5
#define CONST_STATS_VIEW_DM_VEHICLES_RANKED_ALLTIME              6
#define CONST_STATS_VIEW_DM_VEHICLEWEAPONS_RANKED_ALLTIME        7
#define CONST_STATS_VIEW_DM_WEAPONS_RANKED_ALLTIME               8
#define CONST_SERVERBROWSER_SERVERTYPE_LAN                       0
#define CONST_SERVERBROWSER_SERVERTYPE_UNRANKED                  1
#define CONST_SERVERBROWSER_SERVERTYPE_RANKED                    2
#define CONST_FakePlayerIndex                                    0

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SGshooter.SGGoal.GoalStatus
/*enum GoalStatus
{
	GOAL_ACTIVE                                        = 0,
	GOAL_INACTIVE                                      = 1,
	GOAL_FAILED                                        = 2,
	GOAL_COMPLETED                                     = 3,
	GOAL_MAX                                           = 4
};*/

// Enum SGshooter.SGPawn.RollDirection
/*enum RollDirection
{
	ROLL_FORWARD                                       = 0,
	ROLL_FORWARDRIGHT                                  = 1,
	ROLL_RIGHT                                         = 2,
	ROLL_BACKRIGHT                                     = 3,
	ROLL_BACK                                          = 4,
	ROLL_BACKLEFT                                      = 5,
	ROLL_LEFT                                          = 6,
	ROLL_FORWARDLEFT                                   = 7,
	ROLL_NONE                                          = 8,
	ROLL_MAX                                           = 9
};*/

// Enum SGshooter.SGSpawnFactory_Bot.eBotStartupStage
/*enum eBotStartupStage
{
	STATE_Default                                      = 0,
	STATE_NonAlertedCustom                             = 1,
	Custom                                             = 2,
	eBotStartupStage_MAX                               = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SGshooter.SG_KeyPad
// 0x0048 (0x021C - 0x01D4)
class ASG_KeyPad : public ATrigger
{
public:
	int                                                TeamIndex;                                        		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ASGLockDevice* >                     aSGLockDevices;                                   		// 0x01D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bLoocked : 1;                                     		// 0x01E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOpen : 1;                                        		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FKismetDrawTextInfo                         LockedDrawTextInfo;                               		// 0x01E8 (0x0034) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41954 ];

		return pClassPointer;
	};

	void UnLock ( class AActor* Other );
	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventPostBeginPlay ( );
};

UClass* ASG_KeyPad::pClassPointer = NULL;

// Class SGshooter.SGLockDevice
// 0x0070 (0x0238 - 0x01C8)
class ASGLockDevice : public AActor
{
public:
	float                                              ActionDistance;                                   		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FKismetDrawTextInfo                         LockedDrawTextInfo;                               		// 0x01CC (0x0034) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FKismetDrawTextInfo                         UnLockedDrawTextInfo;                             		// 0x0200 (0x0034) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASG_KeyPad*                                  OwnerKeyPad;                                      		// 0x0234 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41957 ];

		return pClassPointer;
	};

	void DoAction ( class APawn* Player );
	bool IsInRange ( class APawn* Player );
	int GetActType ( class APawn* Player );
};

UClass* ASGLockDevice::pClassPointer = NULL;

// Class SGshooter.SGSeqEvent_KeyPad
// 0x0000 (0x0114 - 0x0114)
class USGSeqEvent_KeyPad : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41973 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USGSeqEvent_KeyPad::pClassPointer = NULL;

// Class SGshooter.SGActorFactoryDestructible
// 0x0003 (0x0074 - 0x0071)
class USGActorFactoryDestructible : public UActorFactoryDynamicSM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41982 ];

		return pClassPointer;
	};

};

UClass* USGActorFactoryDestructible::pClassPointer = NULL;

// Class SGshooter.SGDestructible
// 0x00E0 (0x0398 - 0x02B8)
class ASGDestructible : public AKActor
{
public:
	TArray< class AKActor* >                           aKProjectiles;                                    		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   InitSound;                                        		// 0x02C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             InitSoundComponent;                               		// 0x02C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              Init_Momentum;                                    		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Init_Damage;                                      		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 MeshOnDamaged;                                    		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundOnDamaged;                                   		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOnDamageStopInitSound : 1;                       		// 0x02DC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDelaySetMesh : 1;                                		// 0x02DC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UParticleSystem*                             ParticlesOnDamaged;                               		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LinearVelOnDamaged;                               		// 0x02E4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     AngularVelOnDamaged;                              		// 0x02F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             DamageSoundComponent;                             		// 0x02FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DamageParticleComponent;                          		// 0x0300 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              Destroy_Momentum;                                 		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Destroy_Damage;                                   		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 MeshOnDestroy;                                    		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SoundOnDestroy;                                   		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticlesOnDestroy;                               		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDistributionVector*                         LinearVelOnDestroy;                               		// 0x0318 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDistributionVector*                         AngularVelOnDestroy;                              		// 0x031C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FEffectLight >                      aKeysEffectLight;                                 		// 0x0320 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FMakeHurt                                   DoHurt;                                           		// 0x032C (0x0020) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FMyProjectile >                     aProjectile;                                      		// 0x034C (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              ProjDeleteOnTimeHidden;                           		// 0x0358 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PorjectileDelay;                                  		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FDecalInfo >                        aDestroyDecals;                                   		// 0x0360 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	TArray< class AActor* >                            aDestroyActors;                                   		// 0x036C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAudioComponent*                             DestroyedSoundComponent;                          		// 0x0378 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DestroyedParticleComponent;                       		// 0x037C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKExplosionLight*                          ExploLight;                                       		// 0x0380 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x0384 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                CurrentDamage;                                    		// 0x0388 (0x0004) [0x0000000000000000]              
	struct FRotator                                    InitRotation;                                     		// 0x038C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41984 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void OnExplosionLightFinished ( class UUDKExplosionLight* Light );
	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	void Projectiles_Update ( );
	void DoExplosionDamage ( );
	void DestroyActors ( );
	void TimedProjectiles ( );
	void OnDestructed_SpawnDecals ( );
	void OnDestructed_ChangeMesh ( );
};

UClass* ASGDestructible::pClassPointer = NULL;

// Class SGshooter.SGAnimNodeCover
// 0x0000 (0x014C - 0x014C)
class USGAnimNodeCover : public UAnimNodeBlendByProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41985 ];

		return pClassPointer;
	};

};

UClass* USGAnimNodeCover::pClassPointer = NULL;

// Class SGshooter.SGAnimNodeCoverType
// 0x0000 (0x014C - 0x014C)
class USGAnimNodeCoverType : public UAnimNodeBlendByProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41987 ];

		return pClassPointer;
	};

};

UClass* USGAnimNodeCoverType::pClassPointer = NULL;

// Class SGshooter.SGAnimNodeTurnInPlace
// 0x000C (0x0134 - 0x0128)
class USGAnimNodeTurnInPlace : public UUDKAnimBlendBase
{
public:
	float                                              PlayIfAngleWhenMoving;                            		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayIfAngleWhenNotMoving;                         		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinMovingSpeed;                                   		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41989 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGAnimNodeTurnInPlace::pClassPointer = NULL;

// Class SGshooter.SGAnimNotify_Damage
// 0x0024 (0x0064 - 0x0040)
class USGAnimNotify_Damage : public UAnimNotify_Scripted
{
public:
	float                                              Damage;                                           		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FadeDamageWithDistance : 1;                       		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      IgnoreInstigator : 1;                             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      OnlyApplyDamageOnServer : 1;                      		// 0x0044 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ApplyOnlyToPawnsInGround : 1;                     		// 0x0044 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      ApplyOnlyToEnemy : 1;                             		// 0x0044 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	float                                              PushAwayForce;                                    		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UCameraAnim*                                 DamageCameraAnim;                                 		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageCameraAnimScale;                            		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41999 ];

		return pClassPointer;
	};

	void eventNotify ( class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator );
};

UClass* USGAnimNotify_Damage::pClassPointer = NULL;

// Class SGshooter.SGAutoTurret
// 0x0148 (0x0598 - 0x0450)
class ASGAutoTurret : public APawn
{
public:
	class APawn*                                       EnemyTarget;                                      		// 0x0450 (0x0004) [0x0000000000000000]              
	class APawn*                                       LastEnemyTarget;                                  		// 0x0454 (0x0004) [0x0000000000000000]              
	struct FVector                                     enemyDir;                                         		// 0x0458 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastEnemyDir;                                     		// 0x0464 (0x000C) [0x0000000000000000]              
	float                                              TotalInterpTime;                                  		// 0x0470 (0x0004) [0x0000000000000000]              
	float                                              ElapsedTime;                                      		// 0x0474 (0x0004) [0x0000000000000000]              
	float                                              RotationAlpha;                                    		// 0x0478 (0x0004) [0x0000000000000000]              
	struct FRotator                                    StartRotation;                                    		// 0x047C (0x000C) [0x0000000000000000]              
	struct FRotator                                    TargetRotation;                                   		// 0x0488 (0x000C) [0x0000000000000000]              
	struct FVector                                     FireLocation;                                     		// 0x0494 (0x000C) [0x0000000000000000]              
	struct FRotator                                    FireRotation;                                     		// 0x04A0 (0x000C) [0x0000000000000000]              
	class USkelControlSingleBone*                      PivotController;                                  		// 0x04AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanFire : 1;                                     		// 0x04B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDestroyed : 1;                                   		// 0x04B0 (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystemComponent*                    DamageEffect;                                     		// 0x04B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    MuzzleFlashEffect;                                		// 0x04B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DestroyEffect;                                    		// 0x04BC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                MaxTurretHealth;                                  		// 0x04C0 (0x0004) [0x0000000000000000]              
	float                                              FullRevTime;                                      		// 0x04C4 (0x0004) [0x0000000000000000]              
	float                                              GElapsedTime;                                     		// 0x04C8 (0x0004) [0x0000000000000000]              
	int                                                OrigMinRotRate;                                   		// 0x04CC (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      TurretMesh;                                       		// 0x04D0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x04D4 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMesh*                               DestroyedMesh;                                    		// 0x04D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretBoneGroup                            TurretBones;                                      		// 0x04DC (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretRotationGroup                        TurretRotations;                                  		// 0x04FC (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FRotationRange                              RotLimit;                                         		// 0x0524 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	int                                                MinTurretRotRate;                                 		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxTurretRotRate;                                 		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ProjClass;                                        		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RoundsPerSec;                                     		// 0x054C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AimRotError;                                      		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SeeRadius;                                        		// 0x0554 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct ASGAutoTurret_FTurretEmitterGroup           TurretEmitters;                                   		// 0x0558 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct ASGAutoTurret_FTurretSoundGroup             TurretSounds;                                     		// 0x0574 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	int                                                TurretHealth;                                     		// 0x058C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CurState;                                         		// 0x0590 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42023 ];

		return pClassPointer;
	};

	void RotateTimer ( );
	void DoRotation ( struct FRotator NewRotation, float InterpTime );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Tick ( float Delta );
	void eventPostBeginPlay ( );
};

UClass* ASGAutoTurret::pClassPointer = NULL;

// Class SGshooter.SGPawn
// 0x01AC (0x0A1C - 0x0870)
class ASGPawn : public AUTPawn
{
public:
	unsigned long                                      bWeaponSpeedUpgrade : 1;                          		// 0x0870 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bWeaponReloadSpeedUpgrade : 1;                    		// 0x0870 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bWeaponDamageUpgrade : 1;                         		// 0x0870 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bWeaponClipSizeUpgrade : 1;                       		// 0x0870 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bIsMech : 1;                                      		// 0x0870 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bReadyToTexture : 1;                              		// 0x0870 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bCanChangeWeapon : 1;                             		// 0x0870 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bSeen : 1;                                        		// 0x0870 (0x0004) [0x0000000000000020] [0x00000080] ( CPF_Net )
	unsigned long                                      bGrabbed : 1;                                     		// 0x0870 (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	unsigned long                                      bIsBotDino : 1;                                   		// 0x0870 (0x0004) [0x0000000000000020] [0x00000200] ( CPF_Net )
	unsigned long                                      bTriggerHeal : 1;                                 		// 0x0870 (0x0004) [0x0000000000000020] [0x00000400] ( CPF_Net )
	unsigned char                                      nMeleeUpgrade;                                    		// 0x0874 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      nJumpUpgrade;                                     		// 0x0875 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      nRollUpgrade;                                     		// 0x0876 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      nAbilityUpgrade;                                  		// 0x0877 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      bLetGo;                                           		// 0x0878 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              CurrentSkillAmmo;                                 		// 0x087C (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASGDroppedPickup*                            TargetPickup;                                     		// 0x0880 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class UMaterialInstanceConstant* >         CloakMaterialInstances;                           		// 0x0884 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         WeaponMaterialInstances;                          		// 0x0890 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         WeaponCloakMaterialInstances;                     		// 0x089C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         WeaponSilMaterialInstances;                       		// 0x08A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         WeaponCloakSilMaterialInstances;                  		// 0x08B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      LegsMesh;                                         		// 0x08C0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              VisibleAmount;                                    		// 0x08C4 (0x0004) [0x0000000000000000]              
	float                                              MakeNoiseLoudness_FootStep;                       		// 0x08C8 (0x0004) [0x0000000000000000]              
	TArray< class UAnimNodeAimOffset* >                aAimNodes;                                        		// 0x08CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimNodeMirror*                             AnimNode_Mirror;                                  		// 0x08D8 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      SklCtr_WeaponMirror;                              		// 0x08DC (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      SklCtr_RootRot;                                   		// 0x08E0 (0x0004) [0x0000000000000000]              
	struct FRotator                                    AimOffset;                                        		// 0x08E4 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    MaxAimOffset;                                     		// 0x08F0 (0x000C) [0x0000000000000000]              
	struct FRotator                                    MinAimOffset;                                     		// 0x08FC (0x000C) [0x0000000000000000]              
	struct FRotator                                    SmoothedAimOffset;                                		// 0x0908 (0x000C) [0x0000000000000000]              
	float                                              LastAimKickTime;                                  		// 0x0914 (0x0004) [0x0000000000000000]              
	float                                              RunningFOV;                                       		// 0x0918 (0x0004) [0x0000000000000000]              
	float                                              BobScaleWhenRunning;                              		// 0x091C (0x0004) [0x0000000000000000]              
	class ASGWeaponAttachment*                         OldWeapon;                                        		// 0x0920 (0x0004) [0x0000000000000000]              
	struct FRotator                                    TrueAimDir;                                       		// 0x0924 (0x000C) [0x0000000000000000]              
	float                                              SmoothRootYaw;                                    		// 0x0930 (0x0004) [0x0000000000000000]              
	float                                              AimPitch;                                         		// 0x0934 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              AimYaw;                                           		// 0x0938 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              SmoothAimPitch;                                   		// 0x093C (0x0004) [0x0000000000000000]              
	float                                              SmoothAimYaw;                                     		// 0x0940 (0x0004) [0x0000000000000000]              
	class UAnimNodeAimOffset*                          SGSAimNode;                                       		// 0x0944 (0x0004) [0x0000000000000000]              
	int                                                SeatIndex;                                        		// 0x0948 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CreditScore;                                      		// 0x094C (0x0004) [0x0000000000000000]              
	class ASGPawn*                                     Finisher;                                         		// 0x0950 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class APawn*                                       MyKiller;                                         		// 0x0954 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class APawn*                                       SGSEnemy;                                         		// 0x0958 (0x0004) [0x0000000000000000]              
	class APawn*                                       RightFootPawn;                                    		// 0x095C (0x0004) [0x0000000000000000]              
	class APawn*                                       LeftFootPawn;                                     		// 0x0960 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             UnfixedBodyNames;                                 		// 0x0964 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             EnabledSpringBodyNames;                           		// 0x0970 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LinearBoneSpringStrength;                         		// 0x097C (0x0004) [0x0000000000000000]              
	float                                              AngularBoneSpringStrength;                        		// 0x0980 (0x0004) [0x0000000000000000]              
	float                                              ForceRadius;                                      		// 0x0984 (0x0004) [0x0000000000000000]              
	float                                              ForceAmplification;                               		// 0x0988 (0x0004) [0x0000000000000000]              
	float                                              MaximumForceThatCanBeApplied;                     		// 0x098C (0x0004) [0x0000000000000000]              
	float                                              PhysicsBlendInTime;                               		// 0x0990 (0x0004) [0x0000000000000000]              
	float                                              PhysicsTime;                                      		// 0x0994 (0x0004) [0x0000000000000000]              
	float                                              PhysicsBlendOutTime;                              		// 0x0998 (0x0004) [0x0000000000000000]              
	float                                              LastHealingTime;                                  		// 0x099C (0x0004) [0x0000000000000000]              
	float                                              HealEffectRatio;                                  		// 0x09A0 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         HealEffectMats;                                   		// 0x09A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectWeapon3Mats;                            		// 0x09B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectWeaponSilMats;                          		// 0x09BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectLegMats;                                		// 0x09C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMats;                                  		// 0x09D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectWeapon3Mats;                           		// 0x09E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectWeaponSilMats;                         		// 0x09EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectLegMats;                               		// 0x09F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     JumpTarget;                                       		// 0x0A04 (0x000C) [0x0000000000000000]              
	struct FVector                                     JumpVelocity;                                     		// 0x0A10 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42104 ];

		return pClassPointer;
	};

	void ServerPlayCustomAnim ( struct FName AnimName );
	void SetHandIKEnabled ( unsigned long bEnabled );
	void ServerStopRunning ( );
	void ServerRun ( );
	bool IsRunning ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	struct FRotator eventGetViewRotation ( );
	void AddAimKick ( struct FRotator AimKick );
	struct FVector GetPawnViewLocation ( );
	bool IsShotOnHead ( struct FVector HitLocation, struct FVector RayDir );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool IsAnimMirrorEnabled ( );
	void SetAnimationMirror ( unsigned long bEnableMirror );
	void SetWeapAnimType ( unsigned char AnimType );
	void eventTick ( float ElapsedTime );
	float GetCloakValue ( );
	void HealMeh ( );
	bool IsDino ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void SetCharacterMeshInfo ( class USkeletalMesh* SkelMesh, class UMaterialInterface* HeadMaterial, class UMaterialInterface* BodyMaterial );
	bool VerifyBodyMaterialInstance ( );
	void SetTeamColor ( );
	void SetCharacterClassFromInfo ( class UClass* Info );
	void AddDefaultInventory ( );
	void HandleMomentum ( struct FVector Momentum, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void eventPlayFootStepSound ( int FootDown );
	void OnHearSound ( class ASGPawn* NoiseMaker, float Loudness, struct FName SoundType );
	void Make_Noise ( float SoundRadius, struct FName SoundType );
	void ThrowWeaponOnDeath ( );
	void LostEnemies ( );
	bool EnemySeesMe ( );
	void PlayTakeHitEffects ( );
	void LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm );
	bool DoDinoAttackJump ( );
	void TriggerHealingEffect ( );
	bool IsJetPacking ( );
	bool IsCloaked ( );
	void ShouldCloak ( );
	void TimeToDie ( );
	bool IsRolling ( );
	void ReleaseMe ( );
	void TurnIntoRagdoll ( );
	void FinishMe ( );
	void TossMe ( );
	class UClass* GetPlayerReplicationInfoClass ( );
	void GrabMe ( );
	float PlayCustomAnim ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, float StartTime, unsigned long bHalfSlot, unsigned long bRoar, unsigned long bOverrideAnim, unsigned long bLegs );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGPawn::pClassPointer = NULL;

// Class SGshooter.SGCheckPoint
// 0x0014 (0x02C4 - 0x02B0)
class ASGCheckPoint : public APlayerStart
{
public:
	float                                              LastUseTime;                                      		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x02B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UCylinderComponent*                          Trigger;                                          		// 0x02C0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42187 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ASGCheckPoint::pClassPointer = NULL;

// Class SGshooter.SGgame
// 0x0030 (0x056C - 0x053C)
class ASGgame : public AUTTeamGame
{
public:
	class UClass*                                      FlashMovieClass;                                  		// 0x053C (0x0004) [0x0000000000000000]              
	class USGSaveSystem*                               SaveSystem;                                       		// 0x0540 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoDinos : 1;                                     		// 0x0544 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNoVehicles : 1;                                  		// 0x0544 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                StartingBase;                                     		// 0x0548 (0x0004) [0x0000000000000000]              
	int                                                StartingCredits;                                  		// 0x054C (0x0004) [0x0000000000000000]              
	int                                                StartingGrenades;                                 		// 0x0550 (0x0004) [0x0000000000000000]              
	int                                                NumAITrex;                                        		// 0x0554 (0x0004) [0x0000000000000000]              
	int                                                NumAIRham;                                        		// 0x0558 (0x0004) [0x0000000000000000]              
	int                                                NumAIRaptor;                                      		// 0x055C (0x0004) [0x0000000000000000]              
	struct FString                                     Difficulty;                                       		// 0x0560 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42196 ];

		return pClassPointer;
	};

	int Sig ( float A );
	struct FVector Vec3 ( float X, float Y, float Z );
	float Step ( float V, float A, float B );
	float SmoothStep ( float V, float A, float B, float C, float D );
	void eventPostLogin ( class APlayerController* NewPlayer );
	bool ForceRespawn ( );
	void NotifySpree ( class AUTPlayerReplicationInfo* Other, int Num );
	void RestartPlayer ( class AController* NewPlayer );
	bool CanSpawnTrex ( );
	void PreBeginPlay ( );
	void SquadLeaderDied ( class ASGController_Bot* dino );
	void CreateSquad ( class ASGController_Bot* dino, int Id );
	bool AddToSquad ( class ASGController_Bot* dino, int Id );
	void InitPawn ( class APawn* Pawn );
	bool CanDinoSpawn ( );
};

UClass* ASGgame::pClassPointer = NULL;

// Class SGshooter.SGController_Bot
// 0x0074 (0x03C0 - 0x034C)
class ASGController_Bot : public AController
{
public:
	class AActor*                                      FocusActor;                                       		// 0x034C (0x0004) [0x0000000000000000]              
	struct FVector                                     FocusPoint;                                       		// 0x0350 (0x000C) [0x0000000000000000]              
	unsigned long                                      bLookAtFocusPoint : 1;                            		// 0x035C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      OnlyLookIfTargetVisible : 1;                      		// 0x035C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      OnlyLookIfInAimingRange : 1;                      		// 0x035C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIsSeeingTarget : 1;                              		// 0x035C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      UseMoveToPoint : 1;                               		// 0x035C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      LastMovementSucceeded : 1;                        		// 0x035C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bControllerIsResolvingObstruction : 1;            		// 0x035C (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              LookAtTargetInRange;                              		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              LastTimeCheckSeeingTarget;                        		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              MaxYawAim;                                        		// 0x0368 (0x0004) [0x0000000000000000]              
	float                                              StopMovementAngle;                                		// 0x036C (0x0004) [0x0000000000000000]              
	struct FVector                                     MoveTo_TargetPos;                                 		// 0x0370 (0x000C) [0x0000000000000000]              
	struct FVector                                     PathNextTarget;                                   		// 0x037C (0x000C) [0x0000000000000000]              
	struct FVector                                     PathFinalPoint;                                   		// 0x0388 (0x000C) [0x0000000000000000]              
	class AActor*                                      MoveTo_Actor;                                     		// 0x0394 (0x0004) [0x0000000000000000]              
	float                                              MoveTo_DestOffset;                                		// 0x0398 (0x0004) [0x0000000000000000]              
	float                                              LastReevaluateTime;                               		// 0x039C (0x0004) [0x0000000000000000]              
	class AActor*                                      aMoveTarget;                                      		// 0x03A0 (0x0004) [0x0000000000000000]              
	float                                              StuckedTime;                                      		// 0x03A4 (0x0004) [0x0000000000000000]              
	float                                              TimeBeforeStuck;                                  		// 0x03A8 (0x0004) [0x0000000000000000]              
	int                                                NumStuckRetries;                                  		// 0x03AC (0x0004) [0x0000000000000000]              
	TArray< class ANavigationPoint* >                  BlockedPoints;                                    		// 0x03B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASGController_Bot*                           SquadLeader;                                      		// 0x03BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42206 ];

		return pClassPointer;
	};

	bool ReEvaluatePath ( );
	bool HandlePathObstruction ( class AActor* BlockedBy );
	void PutInSquad ( int Id );
	struct FVector GetViewTarget ( );
	bool CheckTarget ( struct FVector Target );
	struct FVector GetEyesLoc ( );
	void Tick ( float ElapsedTime );
	float AngleBetween ( float Yaw1, float Yaw2, unsigned long Absolute );
	void MoveToActor ( class AActor* Dest, class AActor* FocusTarget, float DestOffset );
	void MoveToPoint ( struct FVector Point, class AActor* FocusTarget, float DestOffset );
	void DisableLookAt ( );
	void LookAtPoint ( struct FVector Point );
	void LookAtActor ( class AActor* PFocus );
};

UClass* ASGController_Bot::pClassPointer = NULL;

// Class SGshooter.SGController_BotBase
// 0x0098 (0x04C4 - 0x042C)
class ASGController_BotBase : public AUDKBot
{
public:
	float                                              HowNearToStartChasing;                            		// 0x042C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VisionThreshold;                                  		// 0x0430 (0x0004) [0x0000000000000000]              
	float                                              FleeProbability;                                  		// 0x0434 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFirstRoundShots : 1;                           		// 0x0438 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              WeaponSpreadPct;                                  		// 0x043C (0x0004) [0x0000000000000000]              
	struct FName                                       StartupState;                                     		// 0x0440 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             AlernessAnimations;                               		// 0x0448 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             NonAlertedCustomAnimations;                       		// 0x0454 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       NonAlertedToAlertedCustomAnimation;               		// 0x0460 (0x0008) [0x0000000000000000]              
	struct FSGAlernessDef                              Def_SightRadius;                                  		// 0x0468 (0x0008) [0x0000000000000000]              
	struct FSGAlernessDef                              Def_VisionThreshold;                              		// 0x0470 (0x0008) [0x0000000000000000]              
	struct FSGAlernessDef                              Def_VisionAngleDEG;                               		// 0x0478 (0x0008) [0x0000000000000000]              
	struct FSGAlernessDef                              Def_HearingThreshold;                             		// 0x0480 (0x0008) [0x0000000000000000]              
	struct FSGAlernessDef                              Def_ProbabilityOfFleeWhenHit;                     		// 0x0488 (0x0008) [0x0000000000000000]              
	float                                              ScriptedFollowPathDestOffset;                     		// 0x0490 (0x0004) [0x0000000000000000]              
	struct FVector                                     ScriptedTargetPos;                                		// 0x0494 (0x000C) [0x0000000000000000]              
	int                                                nShotsToFire;                                     		// 0x04A0 (0x0004) [0x0000000000000000]              
	int                                                NumPathFindingRetries;                            		// 0x04A4 (0x0004) [0x0000000000000000]              
	int                                                EstimatedFollowPathTime;                          		// 0x04A8 (0x0004) [0x0000000000000000]              
	struct FSGRange                                    AttackDistRange;                                  		// 0x04AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChaseExpansionRate;                               		// 0x04B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSGDangerZone >                     aDangerZones;                                     		// 0x04B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42288 ];

		return pClassPointer;
	};

	bool CanDoubleJump ( class APawn* Other );
	void Initialize ( );
	void AddDangerZone ( struct FVector Loc, float InnerRadius, float Danger, float ValidTime, float FadeOutLength );
	float GetDangerFromDangerZones ( struct FVector Point );
	void OnAIMoveToActor ( class USeqAct_AIMoveToActor* Action );
	void ScriptedMove_RethinkPath ( );
	void ScriptedMove_TooMuchTime ( );
	void MoveToPoint ( struct FVector Point, class AActor* FocusTarget, float DestOffset );
	void MoveToActor ( class AActor* Actor, class AActor* FocusTarget, float DestOffset );
	bool FindAValidPosition ( float MaxOffset, unsigned long bReachableFromStart, struct FVector* vTarget );
	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal );
	void ReceiveProjectileWarning ( class AProjectile* Proj );
	void ReceiveWarning ( class APawn* shooter, float projSpeed, struct FVector FireDir );
	void InstantWarnTarget ( class AActor* InTarget, class AWeapon* FiredWeapon, struct FVector FireDir );
	void eventEnemyNotVisible ( );
	void eventSeePlayer ( class APawn* SeenPlayer );
	struct FVector GetPossibleEnemyLocation ( );
	bool IsInAttackRange ( );
	void FireAt ( class APawn* Target, int nShots, float AccuracySpreadPct );
	bool IsChangingPawnViewLocation ( struct FVector* ViewLoc );
	bool LostContact ( float MaxTime );
	void SetAlertness ( float NewAlertness );
	void eventNotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void OnUnderFire ( struct FVector FireDir );
	void OnHearSound ( class ASGPawn* NoiseMaker, float Loudness, struct FName SoundType );
	void OnStopSeeingEnemy ( );
	void OnStartSeeingEnemy ( );
	float Rand_Range ( struct FSGRange Range );
	class ASGPawn* GetMainPlayer ( );
	void UpdatePawnRotation ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ASGController_BotBase::pClassPointer = NULL;

// Class SGshooter.SGController_Player
// 0x0034 (0x099C - 0x0968)
class ASGController_Player : public AUTPlayerController
{
public:
	class ASplineActor*                                CustomAction_Spline;                              		// 0x0968 (0x0004) [0x0000000000000000]              
	struct FName                                       CustomAction_EndAnim;                             		// 0x096C (0x0008) [0x0000000000000000]              
	float                                              CustomAction_SplineDistance;                      		// 0x0974 (0x0004) [0x0000000000000000]              
	float                                              CustomAction_MaxDamage;                           		// 0x0978 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             CustomAction_aRandomAnims;                        		// 0x097C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       CustomAction_Socket;                              		// 0x0988 (0x0008) [0x0000000000000000]              
	float                                              MoveToActor;                                      		// 0x0990 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0994 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDoubleTap : 1;                                   		// 0x0994 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                Credits;                                          		// 0x0998 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42340 ];

		return pClassPointer;
	};

	void ServerUseKismetEvent ( struct FName CurrentToolTipName );
	void PrevWeapon ( );
	void NextWeapon ( );
	void CustomAction_PlayRandomAnim ( );
	void StopCustomAction ( );
	void StartCustomAction ( class ASplineActor* Spline, struct FName StartAnim, TArray< struct FName > aRandomAnims, struct FName EndAnim, float Damage, struct FName SocketName );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void TryUpdateHud ( );
	void ClientUpdateHud ( );
	void ClientSetFlashMovie ( class UClass* FlashMovieClass );
	void GiveDefaultInventory ( TArray< class UClass* > InitialItems );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ASGController_Player::pClassPointer = NULL;

// Class SGshooter.SGFamilyInfo
// 0x0064 (0x0200 - 0x019C)
class USGFamilyInfo : public UUTFamilyInfo_Liandri_Male
{
public:
	class UClass*                                      PawnClass;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	class UClass*                                      ControllerClass;                                  		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UAnimTree*                                   AnimTreeTemplate;                                 		// 0x01A4 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstance* >                 BloodSplatterDecalMaterials;                      		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            InitialItems;                                     		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              GroundSpeed;                                      		// 0x01C0 (0x0004) [0x0000000000000000]              
	float                                              WalkPercent;                                      		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MaterialInstanceConstant;                         		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MaterialInstanceConstantCloak;                    		// 0x01CC (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanFly : 1;                                      		// 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                CreditScore;                                      		// 0x01D4 (0x0004) [0x0000000000000000]              
	struct FString                                     MiniMapThubNail;                                  		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       HeadBone;                                         		// 0x01E4 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             LimpBones;                                        		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       DinoType;                                         		// 0x01F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43494 ];

		return pClassPointer;
	};

	void GetTeamMaterials ( int TeamNum, class UMaterialInterface** TeamMaterialHead, class UMaterialInterface** TeamMaterialBody );
};

UClass* USGFamilyInfo::pClassPointer = NULL;

// Class SGshooter.SGHUD
// 0x0020 (0x0A90 - 0x0A70)
class ASGHUD : public AUTHUD
{
public:
	class UGFxMoviePlayer*                             FlashMovie;                                       		// 0x0A70 (0x0004) [0x0000000000000000]              
	TArray< struct FRadioCommand >                     CarrierAssaultRadio;                              		// 0x0A74 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRadioCommand >                     CarrierAssaultRadio2;                             		// 0x0A80 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTexture*                                    ScopeTex;                                         		// 0x0A8C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43499 ];

		return pClassPointer;
	};

	void SetShowScores ( unsigned long bEnableShowScores );
	bool CheckCrosshairOnEnemy ( );
	void eventDestroyed ( );
	void eventOldDrawHUD ( );
	void SetScopeTex ( class UTexture* Tex );
	void eventPostRender ( );
	struct FString ParseExpression ( struct FString Expression );
	void SetFlashMovie ( class UClass* FlashMovieClass );
	void DrawGameHud ( );
	void DisplayClock ( );
	void DisplayConsoleMessages ( );
	void DrawLivingHud ( );
	void AddActor ( class AActor* A );
	void SGSDrawToolTip ( class UCanvas* Cvs, class APlayerController* PC, struct FString Command, float X, float Y, float U, float V, float UL, float VL, float ResScale, class UTexture2D* IconTexture, float Alpha, unsigned long bGenerator, unsigned long bPickup );
	void DisplayLeaderBoard ( struct FVector2D pos );
	void DisplayFragCount ( struct FVector2D pos );
	void DisplayPowerups ( );
	void DisplayAmmo ( class AUTWeapon* Weapon );
	void DisplayPawnDoll ( );
	void DisplayPortrait ( float DeltaTime );
	void ShowPortrait ( class AUTPlayerReplicationInfo* ShowPRI, float PortraitDuration, unsigned long bOverrideCurrentSpeaker );
	void DrawHealth ( float X, float Y, float Width, float MaxWidth, float Height, class UCanvas* DrawCanvas, unsigned char Alpha );
};

UClass* ASGHUD::pClassPointer = NULL;

// Class SGshooter.SGGfxHud
// 0x00A0 (0x0208 - 0x0168)
class USGGfxHud : public UGFxMoviePlayer
{
public:
	struct FActProgressBar                             pProgressBar;                                     		// 0x0168 (0x001C) [0x0000000000000000]              
	class USGGfxHudMiniMap*                            MiniMapMC;                                        		// 0x0184 (0x0004) [0x0000000000000000]              
	class ASGHudToolTip*                               CurrentToolTip;                                   		// 0x0188 (0x0004) [0x0000000000000000]              
	class ASGHudToolTip*                               ToolTipInUse;                                     		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Root;                                             		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Act_MSG;                                          		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  listMSG;                                          		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ToolTipMC;                                        		// 0x019C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ObjetiveContainer;                                		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HitDamageContainer;                               		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CrossHairContainer;                               		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CurrentCrossHair;                                 		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GrenadeContainer;                                 		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponMC;                                         		// 0x01B4 (0x0004) [0x0000000000000000]              
	float                                              NextFullUpdate;                                   		// 0x01B8 (0x0004) [0x0000000000000000]              
	float                                              GrenadePickDistance;                              		// 0x01BC (0x0004) [0x0000000000000000]              
	TArray< struct FHitDamage >                        aHitDamage;                                       		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FObjetiveInfo >                     aObjetiveInfo;                                    		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGrenadeInfo >                      aGrenadeInfo;                                     		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGrenadeInfo                                CurrentGrenade;                                   		// 0x01E4 (0x0008) [0x0000000000000000]              
	class ADynamicCameraActor*                         Camera;                                           		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                LastHealth;                                       		// 0x01F0 (0x0004) [0x0000000000000000]              
	class ASGWeapon*                                   LastWeapon;                                       		// 0x01F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHudOn : 1;                                       		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class ASGHudToolTip* >                     aSGHudToolTip;                                    		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43502 ];

		return pClassPointer;
	};

	void Weapon_UpdateFiringMode ( class ASGWeapon* Weapon );
	bool Update_WeaponIcons ( );
	void UpdatePosture ( unsigned char PlayerPosture );
	void Update_TypeGrenade ( unsigned long bGrenade1, unsigned long bGrenade2 );
	void Update_CantGrenade ( );
	void UpdateHealing ( float HealingAmmount );
	void HideScoreBoard ( );
	void ShowScoreboard ( );
	void Pause_OnQuit ( );
	void Pause_OnOptions ( );
	void Pause_Off ( );
	void Pause_On ( );
	bool Game_OnActionKeyPress ( );
	void Grenade_Update ( class UCanvas* Canvas );
	void RemoveGrenade ( class ASGProj_Grenade* Grenade );
	void AddGrenade ( class ASGProj_Grenade* Grenade );
	void Objetive_UpdatePos ( class UCanvas* Canvas );
	void RemoveObjective ( class AActor* Actor );
	void AddObjetive ( class AActor* Actor, struct FString Caption );
	void ToolTip_UpdatePos ( class UCanvas* Canvas );
	void HideToolTip ( );
	void ShowToolTip ( );
	void FindClosestToolTip ( );
	void AddMSG ( struct FString Param1 );
	void Hide_Act_MSG ( );
	void Show_Act_MSG ( struct FString msg );
	void UnRegisterInMiniMap ( class AActor* Actor );
	void RegisterInMiniMap ( class AActor* Actor, struct FString Thubnail );
	void RemoveTimer ( struct FTimerSlot Slot );
	struct FTimerSlot GetTimer ( unsigned char Type );
	void UpdateHealth ( );
	void TickProgressBar ( );
	void HideProgressBar ( );
	void ShowProgressBar ( float Time, class USGSeqAct_ToggleProgressBar* Act_PB );
	void UpdateHitDamage ( );
	void RemoveHitDamage ( struct FString nameMC );
	void AddHitDamage ( struct FVector ShotDirection );
	void ShowCrossHair ( struct FString CrossHairName );
	void HideScope ( );
	void ShowScope ( );
	void SetCrossHairHidden ( unsigned long Hidden );
	void Update_AmmoCount ( );
	void Weapon_SetSelected ( class ASGWeapon* Weapon );
	void UpdateWeapon ( );
	class AUTPlayerReplicationInfo* getPRI ( );
	class AUTGameReplicationInfo* GetGRI ( );
	class AWorldInfo* GetWorldInfo ( );
	class ASGHUD* GetHud ( );
	class ASGPawn* GetPawn ( );
	bool ExistPawn ( );
	bool IsVisible ( class UGFxObject* Obj );
	void RemoveAttachedObject ( class UGFxObject* Obj );
	struct FString FormatTime ( int Seconds );
	float AngleDiff ( float Angle1, float Angle2, float HalfBase );
	float GetHitAngle ( struct FVector ShotDirection );
	void UnRegisterHudActor ( class AActor* A );
	void RegisterHudActor ( class AActor* A, struct FString Type );
	void ShowTeamSelection ( );
	void UpdateFreezeCam ( class UCanvas* Canvas );
	void UpdatePlayerIcons ( class UCanvas* Canvas );
	void TickHud ( class UCanvas* Canvas );
	void Hud_TurnOn ( unsigned long bTurnOn, unsigned long bFull );
	bool UpdateHUD ( );
};

UClass* USGGfxHud::pClassPointer = NULL;

// Class SGshooter.SGWeapon
// 0x025C (0x0808 - 0x05AC)
class ASGWeapon : public AUTWeapon
{
public:
	int                                                ClipSize;                                         		// 0x05AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AimingLagReturnSpeed;                             		// 0x05B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransitionBlendInTime;                            		// 0x05B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      SilMesh;                                          		// 0x05B8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             FXSandImpact;                                     		// 0x05BC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXConcreteImpact;                                 		// 0x05C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGlassImpact;                                    		// 0x05C4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGrassImpact;                                    		// 0x05C8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXMetalImpact;                                    		// 0x05CC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXRockImpact;                                     		// 0x05D0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSnowImpact;                                     		// 0x05D4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXWoodImpact;                                     		// 0x05D8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXFleshImpact;                                    		// 0x05DC (0x0004) [0x0000000000000000]              
	float                                              LastBulletImpactTime;                             		// 0x05E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanRun : 1;                                      		// 0x05E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHideWeaponWhileAiming : 1;                       		// 0x05E4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsFlag : 1;                                      		// 0x05E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bAutoReload : 1;                                  		// 0x05E4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAiming : 1;                                      		// 0x05E4 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	struct FString                                     CrossHairString;                                  		// 0x05E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ProfileIndex;                                     		// 0x05F4 (0x0004) [0x0000000000000000]              
	class UTexture*                                    ScopeTex;                                         		// 0x05F8 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             WeaponReloadAnim;                                 		// 0x05FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             WeaponRunningAnim;                                		// 0x0608 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             WeaponAimIdleAnims;                               		// 0x0614 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             WeaponAimFireAnim;                                		// 0x0620 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             WeaponChangeToNextFireMode;                       		// 0x062C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ThirdPersonWeaponReloadAnim;                      		// 0x0638 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ThirdPersonWeaponIdleAnim;                        		// 0x0644 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             ThirdPersonWeaponFireAnim;                        		// 0x0650 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ThirdPersonWeaponMeleeAnim;                       		// 0x065C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomGroundSpeedFactor;                            		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomAirSpeedFactor;                               		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomWaterSpeedFactor;                             		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomJumpZFactor;                                  		// 0x0670 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpreadZoomedFactor;                               		// 0x0674 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Spread_Normal;                                    		// 0x0678 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Spread_Crouch;                                    		// 0x067C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Spread_MovementPct;                               		// 0x0680 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      anConsecutiveShots;                               		// 0x0684 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       WeaponMeleeAnim;                                  		// 0x0690 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageRadius;                                		// 0x0698 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageAmount;                                		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeDamageStartTime;                             		// 0x06A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeForceToApply;                                		// 0x06A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MeleeDamageType;                                  		// 0x06A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DesiredViewOffset;                                		// 0x06AC (0x000C) [0x0000000000000000]              
	struct FVector                                     PlayerAimViewOffset;                              		// 0x06B8 (0x000C) [0x0000000000000000]              
	int                                                HudIndex;                                         		// 0x06C4 (0x0004) [0x0000000000000000]              
	TArray< class USoundCue* >                         WeaponEmptyFireClickSnd;                          		// 0x06C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   FireModeSwitchCue;                                		// 0x06D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SGSZoomInSound;                                   		// 0x06D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   SGSZoomOutSound;                                  		// 0x06DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MakeNoiseLoudness_Firing;                         		// 0x06E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MakeNoiseLoudness_Melee;                          		// 0x06E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MakeNoiseLoudness_Reloading;                      		// 0x06E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     HudIconMC_Name;                                   		// 0x06EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AmmoMC_Name;                                      		// 0x06F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CrossHair_Normal;                                 		// 0x0704 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CrossHair_Aimed;                                  		// 0x0710 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              SpreadVelocity;                                   		// 0x071C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilKickYawMin;                                 		// 0x0720 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilKickYawMax;                                 		// 0x0724 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilKickPitchMin;                               		// 0x0728 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilKickPitchMax;                               		// 0x072C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpreadRecoilKick;                                 		// 0x0730 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomedRecoilKickPct;                              		// 0x0734 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           aFireModeNames;                                   		// 0x0738 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     WeaponName;                                       		// 0x0744 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AmmoInClip;                                       		// 0x0750 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UAnimNodeCrossfader*                         AnimNode_WeaponCrossFader;                        		// 0x0754 (0x0004) [0x0000000000000000]              
	class UAnimNode*                                   AnimNode_ArmsCrossFader;                          		// 0x0758 (0x0004) [0x0000000000000000]              
	struct FString                                     CurrentCrossHair;                                 		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TargetSpread;                                     		// 0x0768 (0x0004) [0x0000000000000000]              
	int                                                nConsecutiveShots;                                		// 0x076C (0x0004) [0x0000000000000000]              
	float                                              MuzzleFlashScale;                                 		// 0x0770 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         HealEffectMatsGun;                                		// 0x0774 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectMatsGun3;                               		// 0x0780 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectMatsLArm;                               		// 0x078C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectMatsRArm;                               		// 0x0798 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectMatsSil;                                		// 0x07A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         HealEffectMatsSil3;                               		// 0x07B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMatsGun;                               		// 0x07BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMatsGun3;                              		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMatsLArm;                              		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMatsRArm;                              		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMatsSil;                               		// 0x07EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         CloakEffectMatsSil3;                              		// 0x07F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastWeaponTime;                                   		// 0x0804 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43564 ];

		return pClassPointer;
	};

	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	float GetFireInterval ( unsigned char FireModeNum );
	void CalcInventoryWeight ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void SetupArmsAnim ( );
	void PlayArmAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long OffHand, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	float GetWeaponCurrentAnimLength ( );
	class UAnimNodeSequence* GetArmAnimNodeSeq ( );
	class UAnimNodeSequence* GetWeaponAnimNodeSeq ( );
	float PlayAnim ( struct FName Anim, unsigned long bLoop, float BlendInTime, float Rate );
	void Loaded ( unsigned long bUseWeaponMax );
	float PlayThirdPersonAnim ( struct FName Anim, unsigned long bLoop, float BlendInTime, float Rate );
	void UpdateAnimCrossFaderNodes ( );
	void FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication );
	void ApplyMeleeDamage ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void FlagFix ( );
	void ClientDoMelee ( );
	void DoMelee ( );
	bool IsInFirstPersonView ( );
	void UpdateViewPosition ( float DeltaTime );
	void UpdateHealEffects ( );
	void Tick ( float DeltaTime );
	void eventSetPosition ( class AUDKPawn* Holder );
	void UpdateAimSpread ( float DeltaTime );
	void PlayIdleAnim ( struct FName OverrideAnim, unsigned long bOverrideLoop, unsigned long bQuickAnim );
	void PlayThirdPersonIdleAnim ( struct FName OverrideAnim, unsigned long bOverrideLoop, unsigned long bQuickAnim );
	void PlayFiringSound ( );
	void StopAiming ( unsigned long bPlayAnim, unsigned long bPlaySound );
	void PostBeginPlay ( );
	void StartAiming ( unsigned long bPlayAnim, unsigned long bPlaySound );
	void ServerStopAiming ( );
	void ServerStartAiming ( );
	void HideWeapon ( );
	void PutDownWeapon ( );
	void Activate ( );
	struct FRotator AddSpread ( struct FRotator BaseAim );
	void ClientReload ( );
	void ReloadAmmo ( );
	void SetFOV ( float TargetFOV, float TransitionTime, unsigned long bPlaySound );
	void HandleFinishedFiring ( );
	bool ShouldRefire ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void FireAmmunition ( );
	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGWeapon::pClassPointer = NULL;

// Class SGshooter.SGSeqEvent_ToolTipOnShow
// 0x0000 (0x0114 - 0x0114)
class USGSeqEvent_ToolTipOnShow : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43600 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USGSeqEvent_ToolTipOnShow::pClassPointer = NULL;

// Class SGshooter.SGPlayerInput
// 0x0003 (0x04A4 - 0x04A1)
class USGPlayerInput : public UUTPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43607 ];

		return pClassPointer;
	};

	void ToggleBehindView ( );
	unsigned char CheckForDoubleClickMove ( float DeltaTime );
	void ReleaseBar ( );
	void Jump ( );
	void ToggleDuck ( );
	void UnDuck ( );
	void Duck ( );
	void StopRunning ( );
	void Run ( );
};

UClass* USGPlayerInput::pClassPointer = NULL;

// Class SGshooter.SGCoverLink
// 0x0003 (0x032C - 0x0329)
class ASGCoverLink : public ACoverLink
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43608 ];

		return pClassPointer;
	};

};

UClass* ASGCoverLink::pClassPointer = NULL;

// Class SGshooter.SGDB_LevelRecord
// 0x0028 (0x0064 - 0x003C)
class USGDB_LevelRecord : public UObject
{
public:
	struct FString                                     LevelName;                                        		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     EstimatedTime;                                    		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                LastPlayedCheckPoint;                             		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct USGDB_LevelRecord_FCheckpointRecord > aCheckPointRecords;                               		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43611 ];

		return pClassPointer;
	};

	void ResetCheckPointList ( );
	struct FString GetLastPlayedTime ( );
	struct USGDB_LevelRecord_FCheckpointRecord GetLastPlayedCheckPoint ( );
	void AddCheckPoint ( struct FString Desc, class APawn* Pawn, struct FName CheckPointName );
};

UClass* USGDB_LevelRecord::pClassPointer = NULL;

// Class SGshooter.SGDmgType_Bullet
// 0x0000 (0x012C - 0x012C)
class USGDmgType_Bullet : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44077 ];

		return pClassPointer;
	};

};

UClass* USGDmgType_Bullet::pClassPointer = NULL;

// Class SGshooter.SGDmgType_Grenade
// 0x0000 (0x012C - 0x012C)
class USGDmgType_Grenade : public UUTDmgType_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44118 ];

		return pClassPointer;
	};

	struct FString SuicideMessage ( class APlayerReplicationInfo* Victim );
	struct FString DeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim );
};

UClass* USGDmgType_Grenade::pClassPointer = NULL;

// Class SGshooter.SGDmgType_Melee
// 0x0000 (0x012C - 0x012C)
class USGDmgType_Melee : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44129 ];

		return pClassPointer;
	};

	struct FString DeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Victim );
};

UClass* USGDmgType_Melee::pClassPointer = NULL;

// Class SGshooter.SGDroppedPickup
// 0x000C (0x01F8 - 0x01EC)
class ASGDroppedPickup : public AUTDroppedPickup
{
public:
	struct FVector                                     RealPos;                                          		// 0x01EC (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44169 ];

		return pClassPointer;
	};

	void eventSetPickupMesh ( class UPrimitiveComponent* NewPickupMesh );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void Register ( );
	void FixLocation ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGDroppedPickup::pClassPointer = NULL;

// Class SGshooter.SGWeaponAttachment
// 0x0053 (0x02FC - 0x02A9)
class ASGWeaponAttachment : public AUTWeaponAttachment
{
public:
	class USkeletalMeshComponent*                      SilMesh;                                          		// 0x02AC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             TracerTemplate;                                   		// 0x02B0 (0x0004) [0x0000000000000000]              
	float                                              HowOftenToShowBulletTracer;                       		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              ForceSpawnTracerIfTime;                           		// 0x02B8 (0x0004) [0x0000000000000000]              
	float                                              LastTracerTime;                                   		// 0x02BC (0x0004) [0x0000000000000000]              
	float                                              MuzzleFlashScale;                                 		// 0x02C0 (0x0004) [0x0000000000000000]              
	class UPhysicsAsset*                               PhysAsset;                                        		// 0x02C4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TracerTrailTemplate;                              		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    TrailComp;                                        		// 0x02CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             FXSandImpact;                                     		// 0x02D0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXConcreteImpact;                                 		// 0x02D4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGlassImpact;                                    		// 0x02D8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGrassImpact;                                    		// 0x02DC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXMetalImpact;                                    		// 0x02E0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXRockImpact;                                     		// 0x02E4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSnowImpact;                                     		// 0x02E8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXWoodImpact;                                     		// 0x02EC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXFleshImpact;                                    		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              LastBulletImpactTime;                             		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              ImpactDelay;                                      		// 0x02F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44208 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void SpawnTracerTrail ( struct FVector EffectLocation, struct FVector HitLocation );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
};

UClass* ASGWeaponAttachment::pClassPointer = NULL;

// Class SGshooter.SGSaveSystem
// 0x0020 (0x005C - 0x003C)
class USGSaveSystem : public UObject
{
public:
	TArray< class USGDB_LevelRecord* >                 aLevelRecords;                                    		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USGDB_LevelRecord*                           CurrentLevelRecord;                               		// 0x0048 (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  WorldInfo;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	struct FString                                     LastPlayedLevel;                                  		// 0x0050 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45321 ];

		return pClassPointer;
	};

	void AllLevels_ResetCheckPointList ( );
	void Level_ResetCheckPointList ( int Idx );
	void CreateChekPointRecord ( struct FString Description, struct FName CheckPointName );
	class USGDB_LevelRecord* GetLevelRecord ( int Idx );
	class USGDB_LevelRecord* GetCurrentLevelRecord ( );
	void SaveLastPlayedLevel ( );
	class USGDB_LevelRecord* LoadCurrentLevelRecords ( );
	void LoadLevelRecords ( );
};

UClass* USGSaveSystem::pClassPointer = NULL;

// Class SGshooter.SGGameMenu
// 0x0008 (0x04FC - 0x04F4)
class ASGGameMenu : public AUTGame
{
public:
	class UClass*                                      FlashMovieClass;                                  		// 0x04F4 (0x0004) [0x0000000000000000]              
	class USGSaveSystem*                               SaveSystem;                                       		// 0x04F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45365 ];

		return pClassPointer;
	};

	void eventPostLogin ( class APlayerController* NewPlayer );
	void PreBeginPlay ( );
};

UClass* ASGGameMenu::pClassPointer = NULL;

// Class SGshooter.SGHudToolTip
// 0x005C (0x0224 - 0x01C8)
class ASGHudToolTip : public AActor
{
public:
	struct FString                                     Title;                                            		// 0x01C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     msg;                                              		// 0x01D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ActMSG;                                           		// 0x01E0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              MinDistance;                                      		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistance;                                      		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActionDistance;                                   		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDirectional : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bScanned : 1;                                     		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bActionRange : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                OwnerTeam;                                        		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Parsed_Title;                                     		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUse__Delegate;                                		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStopUse__Delegate;                            		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45384 ];

		return pClassPointer;
	};

	void OnToggleHidden ( class USeqAct_ToggleHidden* Action );
	struct FString GetTitle ( );
	bool TeamCheck ( class APawn* Pawn );
	bool DirectionalCheck ( struct FVector PlayerLocation );
	bool CheckActionRange ( struct FVector PlayerLocation );
	void OnStopUse ( );
	void OnUse ( );
};

UClass* ASGHudToolTip::pClassPointer = NULL;

// Class SGshooter.SGGfxHudMiniMap
// 0x007C (0x00F4 - 0x0078)
class USGGfxHudMiniMap : public UGFxObject
{
public:
	class USGGfxHud*                                   gfxHud;                                           		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                MapTexSize;                                       		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              MapExtent;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	struct FVector                                     MapCenter;                                        		// 0x0084 (0x000C) [0x0000000000000000]              
	class UGFxObject*                                  PlayerIcon;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapMC;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Container_Items;                                  		// 0x0098 (0x0004) [0x0000000000000000]              
	TArray< struct FItemInfo >                         aItemInfo;                                        		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET
	struct FMatrix                                     IconMatrix;                                       		// 0x00B0 (0x0040) [0x0000000000000000]              
	float                                              CurZoomf;                                         		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45405 ];

		return pClassPointer;
	};

	void Update ( float Scale );
	void UpdateThubNails ( );
	void UnRegisterInMiniMap ( class AActor* Actor );
	void RegisterInMiniMap ( class AActor* Actor, struct FString Thubnail );
	void Init ( class USGGfxHud* HUD );
};

UClass* USGGfxHudMiniMap::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_ToggleProgressBar
// 0x0008 (0x0118 - 0x0110)
class USGSeqAct_ToggleProgressBar : public USeqAct_Latent
{
public:
	float                                              TimeInSecond;                                     		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bWorking : 1;                                     		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45493 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	bool eventUpdate ( float DeltaTime );
	void eventActivated ( );
};

UClass* USGSeqAct_ToggleProgressBar::pClassPointer = NULL;

// Class SGshooter.SGProj_Grenade
// 0x0018 (0x02A4 - 0x028C)
class ASGProj_Grenade : public AUTProj_Grenade
{
public:
	float                                              MakeNoiseLoudness_Explode;                        		// 0x028C (0x0004) [0x0000000000000000]              
	unsigned long                                      bExplodeWhenHitEnemy : 1;                         		// 0x0290 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExplodeWhenHit : 1;                              		// 0x0290 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStartExplodeTimeWhenFirstHit : 1;                		// 0x0290 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              BounceFactor;                                     		// 0x0294 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 DeathExplosionShake;                              		// 0x0298 (0x0004) [0x0000000000000000]              
	class URB_RadialImpulseComponent*                  RadialImpulseComponent;                           		// 0x029C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ExplodeTime;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45578 ];

		return pClassPointer;
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
	void CustomExplode ( struct FVector HitLocation, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplodeTime ( float TimerTime );
	void PostBeginPlay ( );
};

UClass* ASGProj_Grenade::pClassPointer = NULL;

// Class SGshooter.SGGfxMenu_DataProvider
// 0x0018 (0x0054 - 0x003C)
class USGGfxMenu_DataProvider : public UObject
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                    		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UUTUIDataProvider_GameModeInfo* >    GameModeList;                                     		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45658 ];

		return pClassPointer;
	};

	void SetGameMode ( int SelectedIndex );
	struct FString GetGameModeFriendlyString ( struct FString InGameMode );
	void GetGameModes ( TArray< struct FString >* aGameModes );
	void GetMapList ( TArray< struct FString >* MapList );
	struct FString GetMapFriendlyName ( TArray< class UUTUIDataProvider_MapInfo* > MapList, struct FString Map );
	bool SupportedByCurrentGameMode ( struct FString MapPrefix, struct FString MapName );
	void Init ( );
};

UClass* USGGfxMenu_DataProvider::pClassPointer = NULL;

// Class SGshooter.SGGfxMenu_JoinGame
// 0x0054 (0x0090 - 0x003C)
class USGGfxMenu_JoinGame : public UObject
{
public:
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x0040 (0x0004) [0x0000000000000000]              
	class UUTDataStore_GameSearchDM*                   SearchDMDataStore;                                		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FOnlineGameSearchResult >           ServerInfoList;                                   		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTUIDataStore_MenuItems*                    MenuItemDataStore;                                		// 0x0054 (0x0004) [0x0000000000000000]              
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x005C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0060 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bGametypeOutdated : 1;                            		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSpectate : 1;                                    		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDoingQuery : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FName                                       SearchDSName;                                     		// 0x0068 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< class UUDKUIDataProvider_SearchResult* >   ServerListData;                                   		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ServerListMC;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	struct FString                                     ServerPassword;                                   		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxMoviePlayer*                             GfxOwner;                                         		// 0x008C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45722 ];

		return pClassPointer;
	};

	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	void ProcessJoin ( int CurrentSelection );
	struct FString BuildJoinURL ( struct FString ResolvedConnectionURL );
	void UpdateListDataProvider ( );
	int GetDesiredMatchType ( );
	void OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful );
	void SubmitServerListQuery ( int PlayerIndex );
	void RefreshServerList ( int InPlayerIndex, int MaxResults );
	void UseLANMode ( );
	void ValidateServerType ( );
	void Cleanup ( );
	void Refresh ( );
	struct FString GetPlayerName ( );
	void Init ( class UGFxObject* ListMC, class UGFxMoviePlayer* Owner );
};

UClass* USGGfxMenu_JoinGame::pClassPointer = NULL;

// Class SGshooter.SGGoal
// 0x0014 (0x0050 - 0x003C)
class USGGoal : public UObject
{
public:
	class APawn*                                       Pawn;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      Status;                                           		// 0x0040 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             __Evaluate__Delegate;                             		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45894 ];

		return pClassPointer;
	};

	bool HasFailed ( );
	bool IsComplete ( );
	bool IsInactive ( );
	bool IsActive ( );
	void SetOwner ( class APawn* pPawn );
	void Terminate ( );
	unsigned char Think ( );
	void Activate ( );
	float Evaluate ( class USGGoal* Self, class APawn* OwnerPawn );
};

UClass* USGGoal::pClassPointer = NULL;

// Class SGshooter.SGGoal_List
// 0x000C (0x005C - 0x0050)
class USGGoal_List : public USGGoal
{
public:
	TArray< class USGGoal* >                           aGoals;                                           		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45918 ];

		return pClassPointer;
	};

	void AddSubGoal ( class USGGoal* Goal, unsigned long bInsertAtEnd );
	void Terminate ( );
	unsigned char Think ( );
	void Activate ( );
};

UClass* USGGoal_List::pClassPointer = NULL;

// Class SGshooter.SGMusicManager
// 0x0000 (0x0218 - 0x0218)
class ASGMusicManager : public AUTMusicManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46668 ];

		return pClassPointer;
	};

	void StartMusic ( );
	void ChangeTrack ( unsigned char NewState );
	void Tick ( float DeltaTime );
};

UClass* ASGMusicManager::pClassPointer = NULL;

// Class SGshooter.SGMapInfo
// 0x0000 (0x0108 - 0x0108)
class USGMapInfo : public UUTMapInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46873 ];

		return pClassPointer;
	};

};

UClass* USGMapInfo::pClassPointer = NULL;

// Class SGshooter.SGS_PawnSoundGroup_Raptor
// 0x0000 (0x00A8 - 0x00A8)
class USGS_PawnSoundGroup_Raptor : public UUTPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48378 ];

		return pClassPointer;
	};

	void PlayBulletImpact ( class APawn* P );
	void PlayTakeHitSound ( class APawn* P, int Damage );
	void PlayLandSound ( class APawn* P );
};

UClass* USGS_PawnSoundGroup_Raptor::pClassPointer = NULL;

// Class SGshooter.SGScriptLight_MuzzleFlash_AssaultRifle
// 0x0000 (0x0220 - 0x0220)
class USGScriptLight_MuzzleFlash_AssaultRifle : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48429 ];

		return pClassPointer;
	};

};

UClass* USGScriptLight_MuzzleFlash_AssaultRifle::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_AddVector
// 0x0024 (0x0120 - 0x00FC)
class USGSeqAct_AddVector : public USequenceAction
{
public:
	struct FVector                                     OutVector;                                        		// 0x00FC (0x000C) [0x0000000000000000]              
	struct FVector                                     v1;                                               		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     v2;                                               		// 0x0114 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48431 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USGSeqAct_AddVector::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_CauseRadiusHurt
// 0x001C (0x0118 - 0x00FC)
class USGSeqAct_CauseRadiusHurt : public USequenceAction
{
public:
	class AActor*                                      Target;                                           		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              BaseDamage;                                       		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Momentum;                                         		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      IgnoredActor;                                     		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDoFullDamage : 1;                                		// 0x0114 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48437 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* USGSeqAct_CauseRadiusHurt::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_GetTimeInvisible
// 0x000C (0x0108 - 0x00FC)
class USGSeqAct_GetTimeInvisible : public USequenceAction
{
public:
	class AActor*                                      Target;                                           		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              InvisibleTime;                                    		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Time;                                             		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48447 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USGSeqAct_GetTimeInvisible::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_GotoState
// 0x0010 (0x010C - 0x00FC)
class USGSeqAct_GotoState : public USequenceAction
{
public:
	struct FString                                     StateName;                                        		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AActor*                                      Target;                                           		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48453 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* USGSeqAct_GotoState::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_ToggleCustomAction
// 0x002C (0x0128 - 0x00FC)
class USGSeqAct_ToggleCustomAction : public USequenceAction
{
public:
	class ASplineActor*                                Spline;                                           		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       StartAnim;                                        		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             aRandomAnims;                                     		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       EndAnim;                                          		// 0x0114 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0120 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48458 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* USGSeqAct_ToggleCustomAction::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_ToggleObjective
// 0x0010 (0x010C - 0x00FC)
class USGSeqAct_ToggleObjective : public USequenceAction
{
public:
	class AActor*                                      Actor;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Caption;                                          		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48471 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* USGSeqAct_ToggleObjective::pClassPointer = NULL;

// Class SGshooter.SGSeqAct_ToggleTimer
// 0x002C (0x013C - 0x0110)
class USGSeqAct_ToggleTimer : public USeqAct_Latent
{
public:
	int                                                TimeInSecond;                                     		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCountDown : 1;                                   		// 0x0114 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0118 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Id;                                               		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StartTime;                                        		// 0x0128 (0x0004) [0x0000000000000000]              
	int                                                CurrentTime;                                      		// 0x012C (0x0004) [0x0000000000000000]              
	struct FTimerSlot                                  TimeSlot;                                         		// 0x0130 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48490 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventDeactivated ( );
	bool eventUpdate ( float DeltaTime );
	void eventActivated ( );
};

UClass* USGSeqAct_ToggleTimer::pClassPointer = NULL;

// Class SGshooter.SGSeqCond_IsInTeam
// 0x0008 (0x00EC - 0x00E4)
class USGSeqCond_IsInTeam : public USequenceCondition
{
public:
	int                                                IndexTeam;                                        		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      TargetActor;                                      		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48516 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USGSeqCond_IsInTeam::pClassPointer = NULL;

// Class SGshooter.SGSeqEvent_KeyAction
// 0x0000 (0x0114 - 0x0114)
class USGSeqEvent_KeyAction : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48521 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USGSeqEvent_KeyAction::pClassPointer = NULL;

// Class SGshooter.SGSeqEvent_LockDevice
// 0x0000 (0x0114 - 0x0114)
class USGSeqEvent_LockDevice : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48528 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USGSeqEvent_LockDevice::pClassPointer = NULL;

// Class SGshooter.SGSeqVar_MainPlayer
// 0x0000 (0x00B4 - 0x00B4)
class USGSeqVar_MainPlayer : public USeqVar_Object
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48535 ];

		return pClassPointer;
	};

	class UObject* GetObjectValue ( );
};

UClass* USGSeqVar_MainPlayer::pClassPointer = NULL;

// Class SGshooter.SGSpawnFactory_Bot
// 0x0074 (0x0324 - 0x02B0)
class ASGSpawnFactory_Bot : public APlayerStart
{
public:
	TArray< class UClass* >                            aFamilyInfoClasses;                               		// 0x02B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              SpawnIfCloserThan;                                		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KillIfFartherThan;                                		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayBetweenSpawns;                               		// 0x02C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                KeepNumAliveSpawnedPawns;                         		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxSpawns;                                        		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bGiveDefaultInventory : 1;                        		// 0x02D0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x02D0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< class UClass* >                            InventoryList_Common;                             		// 0x02D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            InventoryList_Random;                             		// 0x02E0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      StartupState;                                     		// 0x02EC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CustomStartupState;                               		// 0x02F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              HowNearToStartChasing;                            		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             NonAlertedCustom_Animations;                      		// 0x02FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       NonAlertedCustom_ToAlertedAnimation;              		// 0x0308 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                DinoSquad;                                        		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class APawn* >                             aPawns;                                           		// 0x0314 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0320 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48540 ];

		return pClassPointer;
	};

	class APawn* GetMainPlayer ( );
	void KillInvalidBots ( );
	bool SpawnBot ( );
	bool CanSpawn ( );
};

UClass* ASGSpawnFactory_Bot::pClassPointer = NULL;

// Class SGshooter.SGWeap_Grenade
// 0x0014 (0x081C - 0x0808)
class ASGWeap_Grenade : public ASGWeapon
{
public:
	float                                              ExplodeDelayTime;                                 		// 0x0808 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrowTime;                                        		// 0x080C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinishThrowringAnimLength;                        		// 0x0810 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CookStartTime;                                    		// 0x0814 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRequestedToThrow : 1;                            		// 0x0818 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49487 ];

		return pClassPointer;
	};

	struct FRotator AddSpread ( struct FRotator BaseAim );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void IncrementFlashCount ( );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void Loaded ( unsigned long bUseWeaponMax );
	void PlayThirdPersonGrenadeThrow ( );
	void ExplodeInHands ( );
	void Activate ( );
	void ThrowGrenade ( );
	void ReloadAmmo ( );
};

UClass* ASGWeap_Grenade::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif