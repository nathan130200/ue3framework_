/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SGSOrion_classes.h
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

// Enum SGSOrion.SGS_Achievements.SGSGameAchievements
/*enum SGSGameAchievements
{
	SGSAchievement                                     = 0,
	SGSAchievement01                                   = 1,
	SGSAchievement02                                   = 2,
	SGSAchievement03                                   = 3,
	SGSAchievement04                                   = 4,
	SGSAchievement05                                   = 5,
	SGSAchievement06                                   = 6,
	SGSAchievement07                                   = 7,
	SGSAchievement08                                   = 8,
	SGSAchievement09                                   = 9,
	SGSAchievement10                                   = 10,
	SGSAchievement11                                   = 11,
	SGSAchievement12                                   = 12,
	SGSAchievement13                                   = 13,
	SGSAchievement14                                   = 14,
	SGSAchievement15                                   = 15,
	SGSAchievement16                                   = 16,
	SGSAchievement17                                   = 17,
	SGSAchievement18                                   = 18,
	SGSAchievement19                                   = 19,
	SGSAchievement20                                   = 20,
	SGSAchievement21                                   = 21,
	SGSAchievement22                                   = 22,
	SGSAchievement23                                   = 23,
	SGSAchievement24                                   = 24,
	SGSAchievement25                                   = 25,
	SGSAchievement26                                   = 26,
	SGSAchievement27                                   = 27,
	SGSAchievement28                                   = 28,
	SGSAchievement29                                   = 29,
	SGSAchievement30                                   = 30,
	SGSAchievement31                                   = 31,
	SGSAchievement32                                   = 32,
	SGSAchievement33                                   = 33,
	SGSAchievement34                                   = 34,
	SGSAchievement35                                   = 35,
	SGSAchievement36                                   = 36,
	SGSAchievement37                                   = 37,
	SGSAchievement38                                   = 38,
	SGSAchievement39                                   = 39,
	SGSAchievement40                                   = 40,
	SGSAchievement41                                   = 41,
	SGSAchievement42                                   = 42,
	SGSAchievement43                                   = 43,
	SGSAchievement44                                   = 44,
	SGSAchievement45                                   = 45,
	SGSAchievement46                                   = 46,
	SGSAchievement47                                   = 47,
	SGSAchievement48                                   = 48,
	SGSAchievement49                                   = 49,
	SGSAchievement50                                   = 50,
	SGSAchievement51                                   = 51,
	SGSAchievement52                                   = 52,
	SGSAchievement53                                   = 53,
	SGSAchievement54                                   = 54,
	SGSAchievement55                                   = 55,
	SGSAchievement56                                   = 56,
	SGSAchievement57                                   = 57,
	SGSAchievement_MAX                                 = 58
};*/

// Enum SGSOrion.SGS_DBMainMenu.EQueryCompletionAction
/*enum EQueryCompletionAction
{
	QUERYACTION_None                                   = 0,
	QUERYACTION_Default                                = 1,
	QUERYACTION_CloseScene                             = 2,
	QUERYACTION_JoinServer                             = 3,
	QUERYACTION_RefreshAll                             = 4,
	QUERYACTION_MAX                                    = 5
};*/

// Enum SGSOrion.SGS_GFxFrontEnd_JoinGame.EQueryCompletionAction
/*enum EQueryCompletionAction
{
	QUERYACTION_None                                   = 0,
	QUERYACTION_Default                                = 1,
	QUERYACTION_CloseScene                             = 2,
	QUERYACTION_JoinServer                             = 3,
	QUERYACTION_RefreshAll                             = 4,
	QUERYACTION_MAX                                    = 5
};*/

// Enum SGSOrion.SGS_MusicManager.SGS_EMusicState
/*enum SGS_EMusicState
{
	TRACK_Intro                                        = 0,
	TRACK_Ambient                                      = 1,
	TRACK_Tension                                      = 2,
	TRACK_Action_Winning                               = 3,
	TRACK_Action_Loosing                               = 4,
	TRACK_Ending                                       = 5,
	TRACK_MAX                                          = 6
};*/

// Enum SGSOrion.SGS_Weap_RocketLauncher.ERocketFireMode1
/*enum ERocketFireMode1
{
	RFM_Spread                                         = 0,
	RFM_Spiral                                         = 1,
	RFM_Grenades                                       = 2,
	RFM_Max                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SGSOrion.SGS_Achievements
// 0x0000 (0x0074 - 0x0074)
class USGS_Achievements : public UUTAchievementsBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49824 ];

		return pClassPointer;
	};

	void AchievementDone ( unsigned long bWasSuccessful );
	void UpdateSpiceOfLife ( int MutatorBitMask );
	void UpdateVehicles ( int VehicleBitMask );
	void UpdatePunches ( int PunchBitMask );
	void UpdateMacGuyver ( int WeaponBitMask );
	void ReadAchievementStatsComplete ( unsigned long bWasSuccessful );
};

UClass* USGS_Achievements::pClassPointer = NULL;

// Class SGSOrion.SGS_Controller_Player
// 0x0084 (0x0A20 - 0x099C)
class ASGS_Controller_Player : public ASGController_Player
{
public:
	unsigned long                                      bTutMovement : 1;                                 		// 0x099C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bTutTurnGeneratorOn : 1;                          		// 0x099C (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bTutHealGenerator : 1;                            		// 0x099C (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bTutGetInVehicle : 1;                             		// 0x099C (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bTutChangeSeat : 1;                               		// 0x099C (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      bTutReload : 1;                                   		// 0x099C (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      bTutRadio : 1;                                    		// 0x099C (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      bTutTeamChat : 1;                                 		// 0x099C (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	unsigned long                                      bTutPowerOff : 1;                                 		// 0x099C (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      bTutHudAwareness : 1;                             		// 0x099C (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	unsigned long                                      bTutHudColors : 1;                                		// 0x099C (0x0004) [0x0000000000004000] [0x00000400] ( CPF_Config )
	unsigned long                                      bTutChangeFiremode : 1;                           		// 0x099C (0x0004) [0x0000000000004000] [0x00000800] ( CPF_Config )
	unsigned long                                      bTutBuyStation : 1;                               		// 0x099C (0x0004) [0x0000000000004000] [0x00001000] ( CPF_Config )
	unsigned long                                      bTutSupplyStation : 1;                            		// 0x099C (0x0004) [0x0000000000004000] [0x00002000] ( CPF_Config )
	unsigned long                                      bTutRoll : 1;                                     		// 0x099C (0x0004) [0x0000000000004000] [0x00004000] ( CPF_Config )
	unsigned long                                      bTutSkill : 1;                                    		// 0x099C (0x0004) [0x0000000000004000] [0x00008000] ( CPF_Config )
	unsigned long                                      bTutCrouch : 1;                                   		// 0x099C (0x0004) [0x0000000000004000] [0x00010000] ( CPF_Config )
	unsigned long                                      bTutMelee : 1;                                    		// 0x099C (0x0004) [0x0000000000004000] [0x00020000] ( CPF_Config )
	unsigned long                                      bKeysSet : 1;                                     		// 0x099C (0x0004) [0x0000000000004000] [0x00040000] ( CPF_Config )
	unsigned long                                      bFlashBuyStation : 1;                             		// 0x099C (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bRequestedTeamSelection : 1;                      		// 0x099C (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bShowRespawnHud : 1;                              		// 0x099C (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bSnapShot : 1;                                    		// 0x099C (0x0004) [0x0000000000000020] [0x00400000] ( CPF_Net )
	unsigned long                                      bPressedSuperJump : 1;                            		// 0x099C (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bVaulted : 1;                                     		// 0x099C (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bCanFall : 1;                                     		// 0x099C (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bFlyUp : 1;                                       		// 0x099C (0x0004) [0x0000000000000000] [0x04000000] 
	unsigned long                                      bFlyDown : 1;                                     		// 0x099C (0x0004) [0x0000000000000000] [0x08000000] 
	float                                              LastRadioTime;                                    		// 0x09A0 (0x0004) [0x0000000000000000]              
	int                                                CharacterClass;                                   		// 0x09A4 (0x0004) [0x0000000000000000]              
	int                                                RespawnCountDown;                                 		// 0x09A8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ReSpawnTick;                                      		// 0x09AC (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           PathArray;                                        		// 0x09B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ChrType;                                          		// 0x09BC (0x0004) [0x0000000000000000]              
	class USGS_DBMainMenu*                             MenuMovie;                                        		// 0x09C0 (0x0004) [0x0000000000000000]              
	float                                              LastHitSoundTime;                                 		// 0x09C4 (0x0004) [0x0000000000000000]              
	float                                              LastDeathTime;                                    		// 0x09C8 (0x0004) [0x0000000000000000]              
	class UMaterialEffect*                             DeathEffect;                                      		// 0x09CC (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   DeathEffectMaterialInstance;                      		// 0x09D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   ChargingSound;                                    		// 0x09D4 (0x0004) [0x0000000000000000]              
	unsigned char                                      RollDir;                                          		// 0x09D8 (0x0001) [0x0000000000000000]              
	float                                              VaultHeight;                                      		// 0x09DC (0x0004) [0x0000000000000000]              
	struct FVector                                     VaultNormal;                                      		// 0x09E0 (0x000C) [0x0000000000000000]              
	class ASGS_Garage*                                 CurrentGarage;                                    		// 0x09EC (0x0004) [0x0000000000000000]              
	class APawn*                                       MyKiller;                                         		// 0x09F0 (0x0004) [0x0000000000000000]              
	class UTextureRenderTarget2D*                      FreezeTex;                                        		// 0x09F4 (0x0004) [0x0000000000000000]              
	int                                                CameraIndex;                                      		// 0x09F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     MaxCameraVelocity;                                		// 0x09FC (0x000C) [0x0000000000000000]              
	struct FName                                       DesiredSpawnArea;                                 		// 0x0A08 (0x0008) [0x0000000000000000]              
	int                                                TeamSelectionIndex;                               		// 0x0A10 (0x0004) [0x0000000000000000]              
	float                                              LastAttackTime;                                   		// 0x0A14 (0x0004) [0x0000000000000000]              
	float                                              LastAltAttackTime;                                		// 0x0A18 (0x0004) [0x0000000000000000]              
	float                                              LastJumpTime;                                     		// 0x0A1C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49828 ];

		return pClassPointer;
	};

	void SpeakTTS ( struct FString S, class APlayerReplicationInfo* PRI );
	bool PerformedUseAction ( );
	void ServerPickupWeapon ( class ASGDroppedPickup* P );
	void SGSChangeSeat ( );
	void ServerGiveCredits ( int ParameterA );
	void DoItUp ( );
	void ClientOpenBarracksMenu ( );
	void ClientOpenArmoryMenu ( );
	void ClientOpenGarageMenu ( );
	void eventDestroyed ( );
	class ASGS_BuyStation* FindBuyStation ( );
	void ClientUpdatePunches ( int WeaponBitMask );
	void ClientUpdateVehicles ( int WeaponBitMask );
	void ClientUpdateMacGuyver ( int WeaponBitMask );
	bool PickupWeapon ( );
	class ASGS_PowerGenerator* FindGenerator ( );
	bool FindVehicleToDrive ( );
	bool FindMechToDrive ( );
	void DoPathing ( );
	void ClientShowPath ( );
	void StopRolling ( );
	void ServerUseHardDevice ( );
	void UseHardDevice ( );
	void eventGetPlayerViewPoint ( struct FVector* POVLocation, struct FRotator* POVRotation );
	void StopTaunt ( );
	void Taunt ( int TauntIndex );
	void FOV ( float F );
	bool FreeRoam ( );
	bool SlowDownCamera ( );
	bool SpeedUpCamera ( );
	bool CycleCamera ( );
	bool SpecZoomOut ( );
	bool SpecZoomIn ( );
	bool SlowMotion ( );
	void ThrowGrenade ( );
	void SetHand ( unsigned char NewWeaponHand );
	void SetBehindView ( unsigned long bNewBehindView );
	class APlayerReplicationInfo* SGSGetNextViewablePlayer ( int Dir );
	void CloseAllBuyMenus ( );
	void ShowDeathOptions ( );
	void AddLife ( );
	void ClientShowWaveIncoming ( );
	void ClientShowWaveCompleted ( );
	void ClientShowWaveTimer ( int TimeLeft );
	void DeathEffectTimer ( );
	void ProcessDriveMech ( float InForward, float InStrafe, float InUp, unsigned long InJump );
	void ServerDriveMech ( float InForward, float InStrafe, float aUp, unsigned long InJump, int View );
	void CheckJumpOrDuck ( );
	void PlayAnnouncement ( class UClass* InMessageClass, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	void HeadshotMessage ( );
	void BullseyeMessage ( );
	void AcknowledgePossession ( class APawn* P );
	void PlayStartupMessage ( unsigned char StartupStage );
	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation );
	void UpdateRotation ( float DeltaTime );
	void SpectateOnServer ( );
	void ServerSpectate ( );
	void SetShowRespawnHud ( unsigned long bShow );
	void ServerTeamSelected ( int iTeam, int iClass, struct FString CharacterType );
	void ClientSelectTeam ( );
	void ClientShowHUD ( );
	void ClientSetChrType ( class UClass* Type );
	void SetCharacter ( struct FString inCharacter );
	void InitPlayerReplicationInfo ( );
	void ServerRadioMessage ( unsigned char T );
	bool SGSSwitchWeapon ( unsigned char T );
	void StopCharging ( );
	void OpenClassSelection ( );
	void ClientShowEndGame ( unsigned long bWinner );
	void ClientShowGameFull ( );
	void ClientShowLeaveGame ( );
	void ClientShowTeleportError ( int Seconds );
	void ClientShowDisconnect ( struct FString msg );
	void SuperJump ( );
	void ServerDoSuperJump ( );
	void CloseNotification ( );
	void ServerAddLife ( );
	void ServerSetTeamIndex ( int I );
	void SwitchWeapon ( unsigned char T );
	void ClientPlayTakeHit ( struct FVector HitLoc, unsigned char Damage, class UClass* DamageType );
	void ServerSubtractCredits ( int Amount );
	void eventClientPlaySound ( class USoundCue* ASound );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void GiveDefaultInventory ( TArray< class UClass* > InitialItems );
	void SetMovie ( class USGS_DBMainMenu* newMenu );
	void JumpTimer ( );
	void ShowMeleeTip ( );
	void ShowPowerOffTip ( );
	void ShowBuyStationTip ( );
	void ShowSupplyStationTip ( );
	void ShowReloadTip ( );
	void ShowSeatChangeTip ( );
	void ShowGenTurnOnTip ( );
	struct FName GetKeyBinding ( struct FString Binding );
	void ShowCrouchTip ( );
	void ShowSkillTip ( );
	void ShowHudAwarenessTip ( );
	void ShowFireModeTip ( );
	void ShowRollTip ( );
	void ShowRadioTip ( );
	void ShowTeamChatTip ( );
	void ShowRandomTip ( );
	void eventPostBeginPlay ( );
	void ShowMoveTip ( );
	bool IsFlashing ( class AActor* A );
	void StopFlashing ( );
	void ServerThrowWeapon ( );
	void ThrowWeapon ( );
	void DropMoney ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ASGS_Controller_Player::pClassPointer = NULL;

// Class SGSOrion.SGS_StatsReadAchievements
// 0x0000 (0x0088 - 0x0088)
class USGS_StatsReadAchievements : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49853 ];

		return pClassPointer;
	};

};

UClass* USGS_StatsReadAchievements::pClassPointer = NULL;

// Class SGSOrion.SGS_StatsWriteAchievements
// 0x0000 (0x0088 - 0x0088)
class USGS_StatsWriteAchievements : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49854 ];

		return pClassPointer;
	};

};

UClass* USGS_StatsWriteAchievements::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle
// 0x017C (0x0C0C - 0x0A90)
class ASGS_Vehicle : public AUTVehicle
{
public:
	class UParticleSystem*                             TracerTemplate;                                   		// 0x0A90 (0x0004) [0x0000000000000000]              
	float                                              HowOftenToShowBulletTracer;                       		// 0x0A94 (0x0004) [0x0000000000000000]              
	float                                              ForceSpawnTracerIfTime;                           		// 0x0A98 (0x0004) [0x0000000000000000]              
	float                                              LastTracerTime;                                   		// 0x0A9C (0x0004) [0x0000000000000000]              
	struct FName                                       oldMaterial;                                      		// 0x0AA0 (0x0008) [0x0000000000000000]              
	float                                              StartDrivingTime;                                 		// 0x0AA8 (0x0004) [0x0000000000000000]              
	float                                              LastHateTimer;                                    		// 0x0AAC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSandImpact;                                     		// 0x0AB0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXConcreteImpact;                                 		// 0x0AB4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGlassImpact;                                    		// 0x0AB8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGrassImpact;                                    		// 0x0ABC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXMetalImpact;                                    		// 0x0AC0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXRockImpact;                                     		// 0x0AC4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSnowImpact;                                     		// 0x0AC8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXWoodImpact;                                     		// 0x0ACC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXFleshImpact;                                    		// 0x0AD0 (0x0004) [0x0000000000000000]              
	float                                              LastBulletImpactTime;                             		// 0x0AD4 (0x0004) [0x0000000000000000]              
	struct FVector                                     TurretFlashLocation;                              		// 0x0AD8 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    TurretWeaponRotation;                             		// 0x0AE4 (0x000C) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      TurretFlashCount;                                 		// 0x0AF0 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      TurretFiringMode;                                 		// 0x0AF1 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      nSmokeEffect;                                     		// 0x0AF2 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UAudioComponent*                             AudioCmp;                                         		// 0x0AF4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCmpTurret;                                   		// 0x0AF8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCmpTurret1;                                  		// 0x0AFC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bHiddenVehicle : 1;                               		// 0x0B00 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHitWithEMP : 1;                                  		// 0x0B00 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bDirtEffectsOn : 1;                               		// 0x0B00 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bBoostersActivated : 1;                           		// 0x0B00 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bHoverVehicle : 1;                                		// 0x0B00 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bCanBoost : 1;                                    		// 0x0B00 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSteeringLimited : 1;                             		// 0x0B00 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bTryToBoost : 1;                                  		// 0x0B00 (0x0004) [0x0000000000000000] [0x00000080] 
	class UParticleSystemComponent*                    BoostComp1;                                       		// 0x0B04 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    BoostComp2;                                       		// 0x0B08 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DamageSmokeComp;                                  		// 0x0B0C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             DamageSmokeEffect;                                		// 0x0B10 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             DamageFireEffect;                                 		// 0x0B14 (0x0004) [0x0000000000000000]              
	struct FString                                     VehicleName;                                      		// 0x0B18 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultImpactEffect;                              		// 0x0B24 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                           		// 0x0B54 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DamageSmokeScale;                                 		// 0x0B84 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           SeatHacks;                                        		// 0x0B88 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   HitSound;                                         		// 0x0B94 (0x0004) [0x0000000000000000]              
	int                                                CreditScore;                                      		// 0x0B98 (0x0004) [0x0000000000000000]              
	float                                              FullWheelSuspensionTravel;                        		// 0x0B9C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrouchedWheelSuspensionTravel;                    		// 0x0BA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SuspensionTravelAdjustSpeed;                      		// 0x0BA4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullWheelSuspensionStiffness;                     		// 0x0BA8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrouchedWheelSuspensionStiffness;                 		// 0x0BAC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneOffsetZAdjust;                                		// 0x0BB0 (0x0004) [0x0000000000000000]              
	float                                              CrouchedAirSpeed;                                 		// 0x0BB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FullAirSpeed;                                     		// 0x0BB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostJuice;                                       		// 0x0BBC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              BoostStartTime;                                   		// 0x0BC0 (0x0004) [0x0000000000000000]              
	float                                              BoostPowerSpeed;                                  		// 0x0BC4 (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseTime;                                 		// 0x0BC8 (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseDelay;                                		// 0x0BCC (0x0004) [0x0000000000000000]              
	float                                              BoosterFOVAngle;                                  		// 0x0BD0 (0x0004) [0x0000000000000000]              
	class UUTAnimBlendByWeapon*                        BoosterBlend;                                     		// 0x0BD4 (0x0004) [0x0000000000000000]              
	float                                              BoostUprightTorqueFactor;                         		// 0x0BD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostUprightMaxTorque;                            		// 0x0BDC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostSteerFactors[ 0x3 ];                         		// 0x0BE0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoosterForceMagnitude;                            		// 0x0BEC (0x0004) [0x0000000000000000]              
	float                                              LockSuspensionTravel;                             		// 0x0BF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockSuspensionStiffness;                          		// 0x0BF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RocketSpeed;                                      		// 0x0BF8 (0x0004) [0x0000000000000000]              
	float                                              DefaultUprightTorqueFactor;                       		// 0x0BFC (0x0004) [0x0000000000000000]              
	float                                              DefaultUprightMaxTorque;                          		// 0x0C00 (0x0004) [0x0000000000000000]              
	int                                                SoundIndex;                                       		// 0x0C04 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UParticleSystemComponent*                    EMPEffect;                                        		// 0x0C08 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51016 ];

		return pClassPointer;
	};

	bool InCombat ( );
	void UpdateLookSteerStatus ( );
	void UpdateHateTimer ( );
	void TurnEMPOff ( );
	void TurnEMPOn ( );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	void EndEMP ( );
	void HitWithEMP ( );
	void SetBurnOut ( );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	void PassengerLeave ( int SeatIndex );
	bool ChangeSeat ( class AController* ControllerToMove, int RequestedSeat );
	bool TryToGetIn ( int SeatIndex, class APawn* P );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void SetDirtEffects ( unsigned long bOn );
	void UpdateDirtParticles ( );
	void FixWheelParticlesPleaseEpic ( );
	void StopServerHandBrake ( );
	void ServerHandBrake ( );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void Register ( );
	void PostBeginPlay ( );
	void StartSmokeEffect ( );
	void StartFireEffect ( );
	void StopEffects ( );
	void CheckDamageSmoke ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventRanInto ( class AActor* Other );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	void PancakeOther ( class APawn* Other );
	bool CanBoost ( );
	int NumSeatsOccupied ( );
	void eventTick ( float DeltaSeconds );
	void StopBoost ( );
	void Boost ( );
	void eventDeactivateRocketBoosters ( );
	void eventActivateRocketBoosters ( );
	void UnlockWheels ( );
	void LockWheels ( );
	void eventEnableFullSteering ( );
	void PlayBoostSound ( class USoundCue* Sound );
	bool PlaceExitingDriver ( class APawn* ExitingDriver );
	void ServerSetSoundIndex ( int Index );
	bool DriverEnter ( class APawn* P );
	void PlayTurretSound1 ( class USoundCue* Sound );
	void PlayTurretSound ( class USoundCue* Sound );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	void eventReplicatedEvent ( struct FName VarName );
	void VehicleWeaponImpactEffects ( struct FVector HitLocation, int SeatIndex );
	bool eventEncroachingOn ( class AActor* Other );
};

UClass* ASGS_Vehicle::pClassPointer = NULL;

// Class SGSOrion.SGS_GFXHud
// 0x02B4 (0x04BC - 0x0208)
class USGS_GFXHud : public USGGfxHud
{
public:
	class UGFxObject*                                  scrHud;                                           		// 0x0208 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HudMC;                                            		// 0x020C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScrCharacter;                                     		// 0x0210 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  scrScoreBoard;                                    		// 0x0214 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  scrInGameTeamInfo;                                		// 0x0218 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  scrRespawn;                                       		// 0x021C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ObjThubContainer;                                 		// 0x0220 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTeam1;                                       		// 0x0224 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTeam2;                                       		// 0x0228 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthMC;                                         		// 0x022C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_TotalAmmo;                                     		// 0x0230 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_AmmoInClip;                                    		// 0x0234 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BulletCount_MC;                                   		// 0x0238 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SkillBarMC;                                       		// 0x023C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_carrierScore;                                  		// 0x0240 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_altairScore;                                   		// 0x0244 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_GunType;                                       		// 0x0248 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_ShotType;                                      		// 0x024C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponSelectMC;                                   		// 0x0250 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreMC;                                          		// 0x0254 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_ScoreTotal;                                    		// 0x0258 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_Score;                                         		// 0x025C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF_ScoreEnemy;                                    		// 0x0260 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreCountMC;                                     		// 0x0264 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreCountEnemyMC;                                		// 0x0268 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponText;                                       		// 0x026C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponType;                                       		// 0x0270 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponSelect;                                     		// 0x0274 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponBulletCount;                                		// 0x0278 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponGrenade;                                    		// 0x027C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponAmmoPercent;                                		// 0x0280 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponAmmoCount;                                  		// 0x0284 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CompassMC;                                        		// 0x0288 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CompassDisplay;                                   		// 0x028C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchMC;                                          		// 0x0290 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchWinningScore;                                		// 0x0294 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchYourTeamScore;                               		// 0x0298 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchEnemyTeamScore;                              		// 0x029C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchCreditScore;                                 		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimerMC;                                          		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimerText;                                        		// 0x02A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TextHealth;                                       		// 0x02AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TextShield;                                       		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponImageSlots[ 0x3 ];                          		// 0x02B4 (0x000C) [0x0000000000000000]              
	class UGFxObject*                                  MatchWinningText;                                 		// 0x02C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchYourTeamText;                                		// 0x02C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchEnemyTeamText;                               		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MatchCreditText;                                  		// 0x02CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SquadMC[ 0x8 ];                                   		// 0x02D0 (0x0020) [0x0000000000000000]              
	class UGFxObject*                                  RadarMC;                                          		// 0x02F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwarenessMC;                                      		// 0x02F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthBars[ 0xA ];                                		// 0x02F8 (0x0028) [0x0000000000000000]              
	class UGFxObject*                                  ShieldBars[ 0xA ];                                		// 0x0320 (0x0028) [0x0000000000000000]              
	class UGFxObject*                                  CrosshairMC;                                      		// 0x0348 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CrosshairMC2;                                     		// 0x034C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageMC;                                        		// 0x0350 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageTextMC[ 0x3 ];                             		// 0x0354 (0x000C) [0x0000000000000000]              
	class UGFxObject*                                  EnergyMC;                                         		// 0x0360 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwarenessTeamMC;                                  		// 0x0364 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwarenessEnemyMC;                                 		// 0x0368 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwarenessDinoMC;                                  		// 0x036C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwarenessSquadMC;                                 		// 0x0370 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AwarnessBaseMC;                                   		// 0x0374 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DamageMC;                                         		// 0x0378 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerTextMC;                                     		// 0x037C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerTextMC2;                                    		// 0x0380 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MessageMC2;                                       		// 0x0384 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ObjectiveMC;                                      		// 0x0388 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ObjectiveMC2[ 0x5 ];                              		// 0x038C (0x0014) [0x0000000000000000]              
	class UGFxObject*                                  KillAssistMC;                                     		// 0x03A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealAmountMC;                                     		// 0x03A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimerBars;                                        		// 0x03A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScopeMC;                                          		// 0x03AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponTotalAmmoCount;                             		// 0x03B0 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        aObjThubs;                                        		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMatrix                                     IconMatrix;                                       		// 0x03C0 (0x0040) [0x0000000000000000]              
	float                                              TipTime;                                          		// 0x0400 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTipOpen : 1;                                     		// 0x0404 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSkillBarVisible : 1;                             		// 0x0404 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bScoreBoardVisible : 1;                           		// 0x0404 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowObjectives : 1;                              		// 0x0404 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bTurnAwarenessOn : 1;                             		// 0x0404 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FString                                     sKillAssistMsg;                                   		// 0x0408 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastKillAssistTime;                               		// 0x0414 (0x0004) [0x0000000000000000]              
	unsigned char                                      CarrierTeamIndex;                                 		// 0x0418 (0x0001) [0x0000000000000000]              
	unsigned char                                      AltairTeamIndex;                                  		// 0x0419 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastArmor;                                        		// 0x041A (0x0001) [0x0000000000000000]              
	float                                              LastDamageTime;                                   		// 0x041C (0x0004) [0x0000000000000000]              
	float                                              LastEnergy;                                       		// 0x0420 (0x0004) [0x0000000000000000]              
	TArray< class ASG_KeyPad* >                        aKeyPads;                                         		// 0x0424 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MouseTimer;                                       		// 0x0430 (0x0004) [0x0000000000000000]              
	TArray< struct FAwarenessInfo >                    AwarenessItems;                                   		// 0x0434 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   CarriersCue;                                      		// 0x0440 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AltairCue;                                        		// 0x0444 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SpectatorCue;                                     		// 0x0448 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AssaultCue;                                       		// 0x044C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   SupportCue;                                       		// 0x0450 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ReconCue;                                         		// 0x0454 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WarriorCue;                                       		// 0x0458 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RukanCue;                                         		// 0x045C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WraithCue;                                        		// 0x0460 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HudAwarnessOpen;                                  		// 0x0464 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HudAwarnessClose;                                 		// 0x0468 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HudAwarnessObjectiveAddedDialogue;                		// 0x046C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HudAwarnessObjectiveAddedTick;                    		// 0x0470 (0x0004) [0x0000000000000000]              
	struct USGS_GFXHud_FScoreboardState                Score;                                            		// 0x0474 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTeamScoreState                             ScoreState;                                       		// 0x0498 (0x000C) [0x0000000000000000]              
	TArray< struct FObjectiveDesc >                    aObjectiveDesc;                                   		// 0x04A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHudMessage >                       aHudMessages;                                     		// 0x04B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51175 ];

		return pClassPointer;
	};

	void Show_RespawnTime ( int Time );
	void UpdateObjectives ( );
	class UGFxObject* AddObjective ( struct FString Caption, class AActor* Owner, struct FVector pos, class UTexture2D* Tex );
	void UpdateObjThubPos ( class UCanvas* Canvas );
	void ToggleInGameTeamInfo ( );
	void UpdateScoreBoard ( );
	bool IsValidScoreboardPlayer ( class AUTPlayerReplicationInfo* PRI );
	void UpdateScore ( );
	void HideScoreBoard ( );
	void ShowScoreboard ( );
	class ATeamInfo* GetTeamInfo ( unsigned long MyTeam );
	class ATeamInfo* GetAltairTeam ( );
	class ATeamInfo* GetCarrierTeam ( );
	bool IsChangeTeamOrClassVisible ( );
	void ShowClassSelection ( );
	void ShowTeamSelection ( );
	void ChangeClass ( int iTeam, int iClass );
	void SetSpectatorMode ( );
	void HideToolTip ( );
	void ShowToolTip ( );
	void SkillBar_Hide ( );
	void SkillBar_Update ( int Percent );
	void Objetive_UpdatePos ( class UCanvas* Canvas );
	void UpdateHealth ( );
	void UpdateHitDamage ( );
	bool Update_WeaponIcons ( );
	void Weapon_UpdateFiringMode ( class ASGWeapon* Weapon );
	struct FASColorTransform StringToColor ( struct FString S );
	void ReceiveLocalMessage ( struct FString msg, float T );
	void ReceiveKillAssistMessage ( struct FString msg );
	void SetCrossHairHidden ( unsigned long Hidden );
	void HideScope ( );
	void ShowScope ( );
	void UpdateVehicleWeapon ( );
	void Weapon_SetSelected ( class ASGWeapon* Weapon );
	void UnHideud ( );
	void HideHUD ( );
	void Update_AmmoCount ( );
	void UpdateWeapon ( );
	void UpdateMouse ( );
	void UpdateGrenades ( );
	void UpdateMessages ( );
	void UpdateEnergy ( );
	void SetMiniGun ( int I );
	void UpdateCrossHair ( );
	void UpdateMissionObjectives ( );
	void UpdateHealAmount ( );
	void UpdateTimerBars ( );
	void TickHud ( class UCanvas* Canvas );
	void UpdatePlayerText ( );
	void UpdateCompass ( );
	void UpdateTimer ( );
	void Hud_TurnOn ( unsigned long bTurnOn, unsigned long bFull );
	bool UpdateHUD ( );
	void SetMiniMapMode ( unsigned long bLarge );
	void UpdatePlayerIcons ( class UCanvas* Canvas );
	void UnRegisterHudActor ( class AActor* Actor );
	void RegisterHudActor ( class AActor* A, struct FString Type );
	void UpdateFreezeCam ( class UCanvas* Canvas );
	void DisplayHit ( struct FVector HitDir, float Damage );
	void ShowTutorialTip ( struct FString Tip );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USGS_GFXHud::pClassPointer = NULL;

// Class SGSOrion.SGS_HUD
// 0x0040 (0x0AD0 - 0x0A90)
class ASGS_HUD : public ASGHUD
{
public:
	float                                              RadioOpenTime;                                    		// 0x0A90 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRadioOpen : 1;                                   		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRadioOpen2 : 1;                                  		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShowTeamSelection : 1;                           		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bShowCarrierClassSelection : 1;                   		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowAltairClassSelection : 1;                    		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bWaitingForRespawn : 1;                           		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bShowDeathOptions : 1;                            		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bShowSpawnLocations : 1;                          		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bShowDinoClassSelection : 1;                      		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bShowBuyTradeMenu : 1;                            		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bShowArmoryUpgrades : 1;                          		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bShowArmoryWeaponUpgrades : 1;                    		// 0x0A94 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bShowArmoryWeaponPurchases : 1;                   		// 0x0A94 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bShowArmoryWeaponSidearm : 1;                     		// 0x0A94 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bShowArmoryWeaponSecondary : 1;                   		// 0x0A94 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bShowArmoryWeaponPrimary : 1;                     		// 0x0A94 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bShowArmoryWeaponGrenades : 1;                    		// 0x0A94 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bShowGarageVehicles : 1;                          		// 0x0A94 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bShowBarracksUpgrades : 1;                        		// 0x0A94 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bShowBarracksAbilityUpgrades : 1;                 		// 0x0A94 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bShowBarracksPlayerUpgrades : 1;                  		// 0x0A94 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bShowBarracksPlayerJumpUpgrades : 1;              		// 0x0A94 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bShowBarracksPlayerMeleeUpgrades : 1;             		// 0x0A94 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bShowBarracksPlayerRollUpgrades : 1;              		// 0x0A94 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bShowTradePlayerMenu : 1;                         		// 0x0A94 (0x0004) [0x0000000000000000] [0x01000000] 
	unsigned long                                      bAllowAltair : 1;                                 		// 0x0A94 (0x0004) [0x0000000000000000] [0x02000000] 
	unsigned long                                      bAllowDinos : 1;                                  		// 0x0A94 (0x0004) [0x0000000000000000] [0x04000000] 
	int                                                RespawnTime;                                      		// 0x0A98 (0x0004) [0x0000000000000000]              
	class USGS_DBMainMenu*                             PauseMenuMovie1;                                  		// 0x0A9C (0x0004) [0x0000000000000000]              
	class USGS_GfxBuyMenu*                             BuyMenuMovie;                                     		// 0x0AA0 (0x0004) [0x0000000000000000]              
	class USGS_GFxBuyMenu_Garage*                      GarageBuyMenuMovie;                               		// 0x0AA4 (0x0004) [0x0000000000000000]              
	class USGS_GfxBuyMenu_Barracks*                    BarracksBuyMenuMovie;                             		// 0x0AA8 (0x0004) [0x0000000000000000]              
	class USGS_GFxClassSelection*                      SelectionMenuMovie;                               		// 0x0AAC (0x0004) [0x0000000000000000]              
	class USGS_GFxNotification*                        NotificationMenuMovie;                            		// 0x0AB0 (0x0004) [0x0000000000000000]              
	class USGS_GFxScoreScreen*                         ScoresMenuMovie;                                  		// 0x0AB4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OkPressed__Delegate;                            		// 0x0AB8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __NoPressed__Delegate;                            		// 0x0AC4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51206 ];

		return pClassPointer;
	};

	void UpdateDamage ( );
	void CreditsPostRender ( );
	void eventPostRender ( );
	void SGSSetPos ( int X, int Y );
	void TextRenderGameStatus ( );
	void CloseAllMenus ( );
	void TextPostRender ( );
	struct FString GetCharacterName ( );
	void CompletePauseMenuClose ( );
	void CompleteScoreMenuClose ( );
	void CompleteNotificationMenuClose ( );
	void CompleteSelectionMenuClose ( );
	void CompleteBarracksBuyMenuClose ( );
	void CompleteGarageBuyMenuClose ( );
	void CompleteBuyMenuClose ( );
	void ToggleBuyMenu ( int Index );
	void TogglePauseMenu ( );
	void CloseBuyMenus ( );
	void CloseOtherMenus ( );
	void OpenNotificationMovie ( struct FString HeaderText, struct FString BodyText, struct FString OkText, struct FString NoText, struct FScriptDelegate OnOkPressed, struct FScriptDelegate OnNoPressed );
	void OpenSelectionMovie ( );
	void OpenScores ( );
	void cScores ( );
	void oScores ( );
	void RemoveMovies ( );
	void ShowBuyMenu ( int Index );
	void RadioCommandOpen2 ( );
	void RadioCommandOpen ( );
	void DrawHUD ( );
	void SGSDrawToolTip ( class UCanvas* Cvs, class APlayerController* PC, struct FString Command, float X, float Y, float U, float V, float UL, float VL, float ResScale, class UTexture2D* IconTexture, float Alpha, unsigned long bGenerator, unsigned long bPickup );
	void PostBeginPlay ( );
	void DrawPostGameHud ( );
	void LocalizedMessage ( class UClass* InMessageClass, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, struct FString CriticalString, int Switch, float Position, float Lifetime, int FontSize, struct FColor DrawColor, class UObject* OptionalObject );
	void NoPressed ( );
	void OkPressed ( );
};

UClass* ASGS_HUD::pClassPointer = NULL;

// Class SGSOrion.SGS_Pawn_Soldier
// 0x01D8 (0x0BF4 - 0x0A1C)
class ASGS_Pawn_Soldier : public ASGPawn
{
public:
	class USGS_Skill*                                  Skill;                                            		// 0x0A1C (0x0004) [0x0000000000000000]              
	struct FName                                       HeadBranchRoot;                                   		// 0x0A20 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             LimpsBranchRoots;                                 		// 0x0A28 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              HeadDamageScale;                                  		// 0x0A34 (0x0004) [0x0000000000000000]              
	float                                              LimpsDamageScale;                                 		// 0x0A38 (0x0004) [0x0000000000000000]              
	float                                              BodyDamageScale;                                  		// 0x0A3C (0x0004) [0x0000000000000000]              
	float                                              LastFiredTime;                                    		// 0x0A40 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCmp;                                         		// 0x0A44 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              ShieldAbsortionFactor;                            		// 0x0A48 (0x0004) [0x0000000000000000]              
	float                                              ShieldRegenerateSpeed;                            		// 0x0A4C (0x0004) [0x0000000000000000]              
	float                                              TotaleDamageTaken;                                		// 0x0A50 (0x0004) [0x0000000000000000]              
	int                                                SkillState;                                       		// 0x0A54 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bRolling : 1;                                     		// 0x0A58 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bCanAirVault : 1;                                 		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bReadyToVault : 1;                                		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTaunting : 1;                                    		// 0x0A58 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bWobble : 1;                                      		// 0x0A58 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bHoverEffectActive : 1;                           		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bPlayingShieldEffect : 1;                         		// 0x0A58 (0x0004) [0x0000000000000020] [0x00000040] ( CPF_Net )
	unsigned long                                      bFinishingMove : 1;                               		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bIsRoaring : 1;                                   		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDriveFirstPerson : 1;                            		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bTurretFirstPerson : 1;                           		// 0x0A58 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bChargingGenerator : 1;                           		// 0x0A58 (0x0004) [0x0000000000000020] [0x00000800] ( CPF_Net )
	unsigned long                                      bSnapping : 1;                                    		// 0x0A58 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDinoSurvival : 1;                                		// 0x0A58 (0x0004) [0x0000000000000020] [0x00002000] ( CPF_Net )
	unsigned long                                      bSwooping : 1;                                    		// 0x0A58 (0x0004) [0x0000000000000020] [0x00004000] ( CPF_Net )
	unsigned long                                      bLanding : 1;                                     		// 0x0A58 (0x0004) [0x0000000000000020] [0x00008000] ( CPF_Net )
	unsigned long                                      bLockedOn : 1;                                    		// 0x0A58 (0x0004) [0x0000000000000020] [0x00010000] ( CPF_Net )
	unsigned long                                      bGrabbing : 1;                                    		// 0x0A58 (0x0004) [0x0000000000000020] [0x00020000] ( CPF_Net )
	unsigned long                                      bFlyUp : 1;                                       		// 0x0A58 (0x0004) [0x0000000000000020] [0x00040000] ( CPF_Net )
	unsigned char                                      RollDir;                                          		// 0x0A5C (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              GundyBob;                                         		// 0x0A60 (0x0004) [0x0000000000000000]              
	float                                              LastBounceTime;                                   		// 0x0A64 (0x0004) [0x0000000000000000]              
	class UClass*                                      DyingDamageType;                                  		// 0x0A68 (0x0004) [0x0000000000000000]              
	struct FVector                                     DyingHitLoc;                                      		// 0x0A6C (0x000C) [0x0000000000000000]              
	float                                              LastGrabbedTime;                                  		// 0x0A78 (0x0004) [0x0000000000000000]              
	float                                              StartRidingTime;                                  		// 0x0A7C (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        RockMesh;                                         		// 0x0A80 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeSequence*                           WeaponTypeCC;                                     		// 0x0A84 (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               WeaponSlot;                                       		// 0x0A88 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXShieldDepleted;                                 		// 0x0A8C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXShieldRestored;                                 		// 0x0A90 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXToggleCloak;                                    		// 0x0A94 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXHoverSmoke;                                     		// 0x0A98 (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  CloakEffectComp;                                  		// 0x0A9C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  ShieldDepletedEffectComp;                         		// 0x0AA0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  ShieldRestoredEffectComp;                         		// 0x0AA4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  FXHoverSmokeComp;                                 		// 0x0AA8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastShieldEmitterTime;                            		// 0x0AAC (0x0004) [0x0000000000000000]              
	float                                              LastGenTime;                                      		// 0x0AB0 (0x0004) [0x0000000000000000]              
	float                                              ShieldTimeStart;                                  		// 0x0AB4 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                ShieldHitLocation;                                		// 0x0AB8 (0x0010) [0x0000000000000020]              ( CPF_Net )
	struct FLinearColor                                ShieldHitNormal;                                  		// 0x0AC8 (0x0010) [0x0000000000000020]              ( CPF_Net )
	float                                              ShieldTimer;                                      		// 0x0AD8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< class UMaterialInstanceConstant* >         ShieldBodyMats;                                   		// 0x0ADC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         ShieldArmMats1;                                   		// 0x0AE8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstanceConstant* >         ShieldArmMats2;                                   		// 0x0AF4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fChargingGenerator;                               		// 0x0B00 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastHateTime;                                     		// 0x0B04 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      ToeControllers[ 0x6 ];                            		// 0x0B08 (0x0018) [0x0000000000000000]              
	float                                              OldScore;                                         		// 0x0B20 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   PointsAddedSound;                                 		// 0x0B24 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HitSound;                                         		// 0x0B28 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HeadHitSound;                                     		// 0x0B2C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DeathSound;                                       		// 0x0B30 (0x0004) [0x0000000000000000]              
	class ASGS_SceneCapture2DActor*                    FreezeCam;                                        		// 0x0B34 (0x0004) [0x0000000000000000]              
	struct FRotator                                    DeathCamStartRotation;                            		// 0x0B38 (0x000C) [0x0000000000000000]              
	struct FVector                                     DeathCamStartLocation;                            		// 0x0B44 (0x000C) [0x0000000000000000]              
	float                                              DeathCamStartTime;                                		// 0x0B50 (0x0004) [0x0000000000000000]              
	class UMaterial*                                   FreezeMat;                                        		// 0x0B54 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ArmorDepletedSound;                               		// 0x0B58 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ArmorRestoredSound;                               		// 0x0B5C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   MeleeHitSound;                                    		// 0x0B60 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ArmorDepletedGlobalSound;                         		// 0x0B64 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ArmorRestoredGlobalSound;                         		// 0x0B68 (0x0004) [0x0000000000000000]              
	float                                              OldArmor;                                         		// 0x0B6C (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 JetPackLandCamera;                                		// 0x0B70 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 JetPackTakeOffCamera;                             		// 0x0B74 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 VaultCamera;                                      		// 0x0B78 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 RollCamera;                                       		// 0x0B7C (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 TRexFatalityCamera;                               		// 0x0B80 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 RaptorFatalityCamera;                             		// 0x0B84 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 ReloadCamera;                                     		// 0x0B88 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 MeleeCamera;                                      		// 0x0B8C (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 WeaponEquipCamera;                                		// 0x0B90 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 WeaponPutAwayCamera;                              		// 0x0B94 (0x0004) [0x0000000000000000]              
	class USGS_AnimBlendByRolling*                     RollingNode;                                      		// 0x0B98 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RollF;                                            		// 0x0B9C (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RollB;                                            		// 0x0BA0 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RollR;                                            		// 0x0BA4 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           RollL;                                            		// 0x0BA8 (0x0004) [0x0000000000000000]              
	class AWeapon*                                     myWeapon;                                         		// 0x0BAC (0x0004) [0x0000000000000000]              
	class UAnimNodeAdditiveBlending*                   HitBlendNode;                                     		// 0x0BB0 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlend*                              HitBelowBlendNode;                                		// 0x0BB4 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlend*                              HitSideBlendNode;                                 		// 0x0BB8 (0x0004) [0x0000000000000000]              
	struct FName                                       CustomDinoAnim;                                   		// 0x0BBC (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       FullBodyCustomDinoAnim;                           		// 0x0BC4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       FeetCustomDinoAnim;                               		// 0x0BCC (0x0008) [0x0000000000000020]              ( CPF_Net )
	int                                                WeaponSlotIndex;                                  		// 0x0BD4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     FatalityTossVelocity;                             		// 0x0BD8 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastLocation;                                     		// 0x0BE4 (0x000C) [0x0000000000000000]              
	class UAnimNodeSlot*                               FeetAnimSlot;                                     		// 0x0BF0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51215 ];

		return pClassPointer;
	};

	void StartCloakLoop ( );
	struct FName GetDrivenVehicleName ( );
	bool HasWeaponAlready ( class UClass* WeaponType );
	void GivePawnWeapon ( class UClass* WeaponType );
	void ClientSwitchWeapon ( class UClass* WeaponType );
	void GiveWeapon ( class UClass* WeaponType );
	void GivePawnWeaponClipSizeUpgrade ( );
	void GivePawnWeaponDamageUpgrade ( );
	void GivePawnWeaponReloadSpeedUpgrade ( );
	void GivePawnWeaponSpeedUpgrade ( );
	void GiveWeaponDamageUpgrade ( );
	void GiveWeaponClipSizeUpgrade ( );
	void GiveWeaponReloadSpeedUpgrade ( );
	void GiveWeaponSpeedUpgrade ( );
	void GiveAbilityUpgrade ( int Upgrade );
	void GiveRollUpgrade ( int Upgrade );
	void GiveJumpUpgrade ( int Upgrade );
	void GiveMeleeUpgrade ( int Upgrade );
	void KilledBy ( class APawn* EventInstigator );
	bool IsJetPacking ( );
	bool ShouldGib ( class UClass* UTDamageType );
	void eventUpdateEyeHeight ( float DeltaTime );
	float GetCloakValue ( );
	void eventBecomeViewTarget ( class APlayerController* PC );
	void eventEndViewTarget ( class APlayerController* PC );
	void SetMeshVisibility ( unsigned long bVisible );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void eventDestroyed ( );
	void SetWeapAnimType ( unsigned char AnimType );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void SetMyKiller ( class APawn* Killer );
	void StopFlyingUp ( );
	void StopGrabbing ( );
	bool ShouldStillBeGrabbing ( );
	void TryToGrab ( );
	bool CalcThirdPersonCam ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void GetGrabbedView ( struct FVector* out_CamLoc, struct FRotator* out_CamRot );
	void eventStartDriving ( class AVehicle* V );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	bool InCombat ( );
	void UpdateHateTimer ( );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void ReallyPlayDying ( );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void ServerStopJetpackLevel ( );
	void ServerStartJetpackLevel ( );
	void DeactivateSkill ( );
	void ServerDeactivateSkill ( );
	void ActivateSkill ( );
	void ServerActivateSkill ( );
	void SpawnVehicle ( class UClass* V );
	bool IsRolling ( );
	void ServerRoll ( unsigned char rDir );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser, int* InDamage, struct FVector* Momentum );
	void Save_SwitchToPreviousWeapon ( );
	void SkillBar_Hide ( );
	void DoShieldHitEffect ( float DeltaTime );
	void UpdateWeaponIdles ( );
	void ServerStopSwooping ( );
	void ServerStartSwooping ( );
	void ServerStopLanding ( );
	void ServerStartLanding ( );
	void UpdateDinoViewPitch ( );
	void LockOn ( );
	void ServerCancelLockOn ( );
	void ServerTryLockOn ( );
	struct FVector GetLeftGrabPos ( );
	struct FVector GetRightGrabPos ( );
	struct FVector GetGrabPos ( );
	void DropPawn ( class APawn* P, struct FName Side, class AController* C, float Damage );
	void GrabPawn ( class APawn* P, struct FName Socket );
	void TakeGrabDamage ( );
	void GrabMe ( );
	void AdjustDinoToes ( float ElapsedTime );
	void AdjustFootPosition ( float ElapsedTime );
	void eventTick ( float ElapsedTime );
	void EndWobble ( );
	void PerformWobble ( );
	void DoWobble ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	class UClass* GetPlayerReplicationInfoClass ( );
	void SetMovementPhysics ( );
	void ServerStopCloak ( );
	void StartFire ( unsigned char FireModeNum );
	bool IsRoaring ( );
	bool IsPlayingCustomAnim ( );
	void ServerLand ( );
	void ServerFly ( );
	void DinoSecondaryAttack ( );
	void DoDinoAttack ( struct FDinoAttack ATTACK );
	void ServerDinoAttack ( struct FDinoAttack ATTACK );
	void ClearDinoAltAttackTimer ( );
	void StartDinoAltAttackTimer ( );
	void DinoPrimaryAttack ( );
	void ClearDinoAttackTimer ( );
	void StartDinoAttackTimer ( );
	bool IsCloaked ( );
	void TakeFallingDamage ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool IsHeadShot ( struct FVector HitLocation );
	bool IsShotOnHead ( struct FVector HitLocation, struct FVector RayDir );
	bool IsDino ( );
	void TextureHack ( );
	void SetCharacterClassFromInfo ( class UClass* Info );
	void SetSkin ( class UMaterial* NewMaterial );
	void PostBeginPlay ( );
	void DetachVaultWeapon ( );
	void DoVault ( );
	void NotReadyToVault ( );
	void ClientStopChargingGenerator ( );
	void ServerStopChargingGenerator ( );
	void ServerStartChargingGenerator ( );
	void PlayChargingSound ( class USoundCue* Sound );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void gibbedBy ( class AActor* Other );
	bool DoSuperJump ( unsigned long bUpdating );
	bool DoJump ( unsigned long bUpdating );
	void EndRoll ( );
	void PlayerRoll ( unsigned char rDir );
	void PerformRoll ( );
	void DetachTimer ( );
	void ClearRollTimer ( );
	void StartRollTimer ( );
	void SetRollNodes ( );
	void ShouldCloak ( );
	void eventOnAnimPlay ( class UAnimNodeSequence* SeqNode );
	void eventBaseChange ( );
	void JumpOffPawn ( );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void ClearCustomAnim ( );
	void FixAnimBug ( );
	void Fatality_Release ( );
	void FinishMe ( );
	void Fatality_Grab ( );
	void TRexFix ( );
	void Cleanup ( );
	void AnimDone ( );
	void Release ( );
	void DropCredits ( );
	void ThrowActiveWeapon ( unsigned long bDestroyWeap );
	void SmashOrThrow ( );
	void HeadShake ( );
	void ClientIgnoreLookInput ( unsigned long ignore );
	void ClientIgnoreMoveInput ( unsigned long ignore );
	bool CanFinish ( );
	void CancelLand ( );
	void HideRock ( );
	void ShowRock ( );
	void EndTaunt ( );
	float PlayCustomAnim ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, float StartTime, unsigned long bHalfSlot, unsigned long bRoar, unsigned long bOverrideAnim, unsigned long bLegs );
	void PlayWeaponSlot ( int Index );
	void eventOnRanOver ( class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex );
	void TossMe ( );
	void StopShieldRestoredEffect ( );
	void DoShieldRestoredEffect ( );
	void StopShieldDepletedEffect ( );
	void DoShieldDepletedEffect ( );
	void StopCloakEffect ( );
	void ServerDoTaunt ( );
	void DoCloakEffect ( );
	void eventReplicatedEvent ( struct FName VarName );
	void TossInventory ( class AInventory* Inv, struct FVector ForceVelocity );
	struct FRotator eventGetViewRotation ( );
};

UClass* ASGS_Pawn_Soldier::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Dino
// 0x01A4 (0x03A4 - 0x0200)
class USGS_FamilyInfo_Dino : public USGFamilyInfo
{
public:
	struct FName                                       RightRunRotate30Anim;                             		// 0x0200 (0x0008) [0x0000000000000000]              
	struct FName                                       RightRunRotate45Anim;                             		// 0x0208 (0x0008) [0x0000000000000000]              
	struct FName                                       RightRunRotate90Anim;                             		// 0x0210 (0x0008) [0x0000000000000000]              
	struct FName                                       RunRotate180Anim;                                 		// 0x0218 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftRunRotate30Anim;                              		// 0x0220 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftRunRotate45Anim;                              		// 0x0228 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftRunRotate90Anim;                              		// 0x0230 (0x0008) [0x0000000000000000]              
	struct FName                                       RightSTDRotate30Anim;                             		// 0x0238 (0x0008) [0x0000000000000000]              
	struct FName                                       RightSTDRotate45Anim;                             		// 0x0240 (0x0008) [0x0000000000000000]              
	struct FName                                       RightSTDRotate90Anim;                             		// 0x0248 (0x0008) [0x0000000000000000]              
	struct FName                                       STDRotate180Anim;                                 		// 0x0250 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftSTDRotate30Anim;                              		// 0x0258 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftSTDRotate45Anim;                              		// 0x0260 (0x0008) [0x0000000000000000]              
	struct FName                                       LeftSTDRotate90Anim;                              		// 0x0268 (0x0008) [0x0000000000000000]              
	float                                              RotationSpeed;                                    		// 0x0270 (0x0004) [0x0000000000000000]              
	struct FName                                       BiteAttack;                                       		// 0x0274 (0x0008) [0x0000000000000000]              
	struct FName                                       ChargedBiteAttack;                                		// 0x027C (0x0008) [0x0000000000000000]              
	struct FName                                       FootAttack;                                       		// 0x0284 (0x0008) [0x0000000000000000]              
	struct FName                                       LeapAttack;                                       		// 0x028C (0x0008) [0x0000000000000000]              
	struct FName                                       LeapAttack2;                                      		// 0x0294 (0x0008) [0x0000000000000000]              
	struct FDinoAttack                                 PrimaryAttack;                                    		// 0x029C (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 ChargedPrimaryAttack;                             		// 0x02A8 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 SecondaryAttack;                                  		// 0x02B4 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 ChargedSecondaryAttack;                           		// 0x02C0 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 SpecialMoveCrouch;                                		// 0x02CC (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 JumpMove;                                         		// 0x02D8 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 JumpAttack1;                                      		// 0x02E4 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 JumpAttack2;                                      		// 0x02F0 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 SwoopAttack1;                                     		// 0x02FC (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 SwoopAttack2;                                     		// 0x0308 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 Roar1;                                            		// 0x0314 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 Roar2;                                            		// 0x0320 (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 TakeOff;                                          		// 0x032C (0x000C) [0x0000000000000000]              
	struct FDinoAttack                                 Land;                                             		// 0x0338 (0x000C) [0x0000000000000000]              
	struct FName                                       MovingRoar1;                                      		// 0x0344 (0x0008) [0x0000000000000000]              
	struct FName                                       MovingRoar2;                                      		// 0x034C (0x0008) [0x0000000000000000]              
	struct FName                                       RunningBite;                                      		// 0x0354 (0x0008) [0x0000000000000000]              
	float                                              BiteDistance;                                     		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              FootDistance;                                     		// 0x0360 (0x0004) [0x0000000000000000]              
	float                                              CollisionHeight;                                  		// 0x0364 (0x0004) [0x0000000000000000]              
	float                                              CollisionRadius;                                  		// 0x0368 (0x0004) [0x0000000000000000]              
	float                                              MoveOffset;                                       		// 0x036C (0x0004) [0x0000000000000000]              
	float                                              Health;                                           		// 0x0370 (0x0004) [0x0000000000000000]              
	float                                              AirSpeed;                                         		// 0x0374 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             UnfixedBodyNames;                                 		// 0x0378 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             EnabledSpringBodyNames;                           		// 0x0384 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MeshOffset;                                       		// 0x0390 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasChargedAttacks : 1;                           		// 0x0394 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanJump : 1;                                     		// 0x0394 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     PlayerName;                                       		// 0x0398 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51218 ];

		return pClassPointer;
	};

	void DinoWhatToDoNext ( class ASGS_Controller_Dino* dino );
};

UClass* USGS_FamilyInfo_Dino::pClassPointer = NULL;

// Class SGSOrion.SGS_MechPawn
// 0x0240 (0x0C5C - 0x0A1C)
class ASGS_MechPawn : public ASGPawn
{
public:
	class UParticleSystem*                             FXSandImpact;                                     		// 0x0A1C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXConcreteImpact;                                 		// 0x0A20 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGlassImpact;                                    		// 0x0A24 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGrassImpact;                                    		// 0x0A28 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXMetalImpact;                                    		// 0x0A2C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXRockImpact;                                     		// 0x0A30 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSnowImpact;                                     		// 0x0A34 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXWoodImpact;                                     		// 0x0A38 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXFleshImpact;                                    		// 0x0A3C (0x0004) [0x0000000000000000]              
	float                                              LastBulletImpactTime;                             		// 0x0A40 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    DamageSmokeComp;                                  		// 0x0A44 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             DamageSmokeEffect;                                		// 0x0A48 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSmokeEffect : 1;                                 		// 0x0A4C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFireEffect : 1;                                  		// 0x0A4C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bMechMode : 1;                                    		// 0x0A4C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bZoomed : 1;                                      		// 0x0A4C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHitWithEMP : 1;                                  		// 0x0A4C (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	class UParticleSystem*                             DamageFireEffect;                                 		// 0x0A50 (0x0004) [0x0000000000000000]              
	unsigned char                                      nSmokeEffect;                                     		// 0x0A54 (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     EffectHitLocation;                                		// 0x0A58 (0x000C) [0x0000000000000020]              ( CPF_Net )
	float                                              StartDrivingTime;                                 		// 0x0A64 (0x0004) [0x0000000000000000]              
	class APawn*                                       Driver;                                           		// 0x0A68 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              ExitRadius;                                       		// 0x0A6C (0x0004) [0x0000000000000000]              
	struct FVector                                     ExitOffset;                                       		// 0x0A70 (0x000C) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     FullBodyAnim;                                     		// 0x0A7C (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          LeftGunLookAt;                                    		// 0x0A80 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          RightGunLookAt;                                   		// 0x0A84 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      LeftGunRotate;                                    		// 0x0A88 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      RightGunRotate;                                   		// 0x0A8C (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      GunPitch;                                         		// 0x0A90 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      UpperBodyRotation;                                		// 0x0A94 (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      FootMesh;                                         		// 0x0A98 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FMaterialImpactEffect >             ImpactEffects;                                    		// 0x0A9C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialImpactEffect >             AltImpactEffects;                                 		// 0x0AA8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultImpactEffect;                              		// 0x0AB4 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                           		// 0x0AE4 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   BulletWhip;                                       		// 0x0B14 (0x0004) [0x0000000000000000]              
	float                                              MaxImpactEffectDistance;                          		// 0x0B18 (0x0004) [0x0000000000000000]              
	float                                              MaxFireEffectDistance;                            		// 0x0B1C (0x0004) [0x0000000000000000]              
	float                                              MaxDecalRangeSq;                                  		// 0x0B20 (0x0004) [0x0000000000000000]              
	struct FVector                                     AimPos;                                           		// 0x0B24 (0x000C) [0x0000000000000000]              
	struct FRotator                                    DeathCamStartRotation;                            		// 0x0B30 (0x000C) [0x0000000000000000]              
	struct FVector                                     DeathCamStartLocation;                            		// 0x0B3C (0x000C) [0x0000000000000000]              
	float                                              DeathCamStartTime;                                		// 0x0B48 (0x0004) [0x0000000000000000]              
	class AEmitter*                                    DeathExplosion;                                   		// 0x0B4C (0x0004) [0x0000000000000000]              
	float                                              TimeTilSecondaryVehicleExplosion;                 		// 0x0B50 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ExplosionTemplate;                                		// 0x0B54 (0x0004) [0x0000000000000000]              
	TArray< struct FDistanceBasedParticleTemplate >    BigExplosionTemplates;                            		// 0x0B58 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             SecondaryExplosion;                               		// 0x0B64 (0x0004) [0x0000000000000000]              
	struct FName                                       BigExplosionSocket;                               		// 0x0B68 (0x0008) [0x0000000000000000]              
	float                                              ExplosionDamage;                                  		// 0x0B70 (0x0004) [0x0000000000000000]              
	float                                              ExplosionRadius;                                  		// 0x0B74 (0x0004) [0x0000000000000000]              
	float                                              ExplosionMomentum;                                		// 0x0B78 (0x0004) [0x0000000000000000]              
	float                                              ExplosionInAirAngVel;                             		// 0x0B7C (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 DeathExplosionShake;                              		// 0x0B80 (0x0004) [0x0000000000000000]              
	float                                              InnerExplosionShakeRadius;                        		// 0x0B84 (0x0004) [0x0000000000000000]              
	float                                              OuterExplosionShakeRadius;                        		// 0x0B88 (0x0004) [0x0000000000000000]              
	class UClass*                                      ExplosionDamageType;                              		// 0x0B8C (0x0004) [0x0000000000000000]              
	TArray< class USoundNodeWave* >                    VehicleDestroyedSound;                            		// 0x0B90 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AController*                                 KillerController;                                 		// 0x0B9C (0x0004) [0x0000000000000000]              
	class UClass*                                      ExplosionLightClass;                              		// 0x0BA0 (0x0004) [0x0000000000000000]              
	float                                              MaxExplosionLightDistance;                        		// 0x0BA4 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x0BA8 (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   MechLeftFootController;                           		// 0x0BAC (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   MechRightFootController;                          		// 0x0BB0 (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   TankLeftFootController1;                          		// 0x0BB4 (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   TankRightFootController1;                         		// 0x0BB8 (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   TankLeftFootController2;                          		// 0x0BBC (0x0004) [0x0000000000000000]              
	class USkelControlFootPlacement*                   TankRightFootController2;                         		// 0x0BC0 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   TreadPannerLeft;                                  		// 0x0BC4 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   TreadPannerRight;                                 		// 0x0BC8 (0x0004) [0x0000000000000000]              
	float                                              TreadPanLeft;                                     		// 0x0BCC (0x0004) [0x0000000000000000]              
	float                                              TreadPanRight;                                    		// 0x0BD0 (0x0004) [0x0000000000000000]              
	struct FName                                       TreadPannerParameterName;                         		// 0x0BD4 (0x0008) [0x0000000000000000]              
	float                                              TreadSpeedRatioLinear;                            		// 0x0BDC (0x0004) [0x0000000000000000]              
	float                                              TreadSpeedRatioTurning;                           		// 0x0BE0 (0x0004) [0x0000000000000000]              
	struct FName                                       CustomAnim;                                       		// 0x0BE4 (0x0008) [0x0000000000000020]              ( CPF_Net )
	float                                              DesiredBaseTranslation;                           		// 0x0BEC (0x0004) [0x0000000000000000]              
	class UClass*                                      MuzzleFlashLightClass;                            		// 0x0BF0 (0x0004) [0x0000000000000000]              
	class UUDKExplosionLight*                          MuzzleFlashLight;                                 		// 0x0BF4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             TracerTemplate;                                   		// 0x0BF8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TracerTrailTemplate;                              		// 0x0BFC (0x0004) [0x0000000000000000]              
	float                                              HowOftenToShowBulletTracer;                       		// 0x0C00 (0x0004) [0x0000000000000000]              
	float                                              ForceSpawnTracerIfTime;                           		// 0x0C04 (0x0004) [0x0000000000000000]              
	float                                              LastTracerTime;                                   		// 0x0C08 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             GunSocket;                                        		// 0x0C0C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BarrelIndex;                                      		// 0x0C18 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASGS_MechWeapon*                             Gun;                                              		// 0x0C1C (0x0004) [0x0000000000000000]              
	float                                              SpawnRadius;                                      		// 0x0C20 (0x0004) [0x0000000000000000]              
	class UClass*                                      FamilyInfoClass;                                  		// 0x0C24 (0x0004) [0x0000000000000000]              
	float                                              aForward;                                         		// 0x0C28 (0x0004) [0x0000000000000000]              
	float                                              aRight;                                           		// 0x0C2C (0x0004) [0x0000000000000000]              
	float                                              UpdateDeltaTime;                                  		// 0x0C30 (0x0004) [0x0000000000000000]              
	struct FVector                                     vViewStart;                                       		// 0x0C34 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    rViewDir;                                         		// 0x0C40 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class UParticleSystemComponent*                    EMPEffect;                                        		// 0x0C4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                SoundIndex;                                       		// 0x0C50 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UAudioComponent*                             AudioCmp;                                         		// 0x0C54 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCmp1;                                        		// 0x0C58 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51219 ];

		return pClassPointer;
	};

	void ServerSetRotation ( struct FRotator Rot );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	struct FRotator GetExitRotation ( class AController* C );
	void DriverLeft ( );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	bool TryExitPos ( class APawn* ExitingDriver, struct FVector ExitPos, unsigned long bMustFindGround );
	bool FindAutoExit ( class APawn* ExitingDriver );
	void PowerDownLoop ( );
	bool PlaceExitingDriver ( class APawn* ExitingDriver );
	void AttachDriver ( class APawn* P );
	void ClearCustomAnim ( );
	float PlayCustomAnim ( struct FName AnimName, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLooping, unsigned long bOverride, float StartTime, unsigned long bHalfSlot, unsigned long bRoar, unsigned long bOverrideAnim, unsigned long bLegs );
	bool DriverEnter ( class APawn* P );
	bool TryToDrive ( class APawn* P );
	bool TryToGetIn ( class APawn* P );
	void EndAnim_RobotToTank ( );
	void EndAnim_TankToRobot ( );
	void Update_MechMode ( );
	void Server_SetRobotMode ( );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void SetCharacterClassFromInfo ( class UClass* Info );
	bool IsDino ( );
	void eventBaseChange ( );
	void UpdateBaseTranslation ( float DeltaTime );
	bool DoJump ( unsigned long bUpdating );
	void StartSmokeEffect ( );
	void StartFireEffect ( );
	void StopEffects ( );
	void Tick ( float DeltaTime );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void UpdateRotation ( );
	void ServerSetView ( struct FVector S, struct FRotator D );
	bool ShouldSpawnExplosionLight ( struct FVector HitLocation, struct FVector HitNormal );
	void HandleDeadVehicleDriver ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void BlowupVehicle ( );
	void LeaveABloodSplatterDecal ( struct FVector HitLoc, struct FVector HitNorm );
	bool BaseDied ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
	void DoFireEffects ( struct FVector HitLocation );
	void FlashLocationUpdated ( class AWeapon* InWeapon, struct FVector InFlashLocation, unsigned long bViaReplication );
	void SetFlashLocation ( class AWeapon* InWeapon, unsigned char InFiringMode, struct FVector NewLoc );
	void ServerSetFlashLocation ( struct FVector HitLocation );
	void SetFireEffects ( struct FVector HitLocation );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventOnRanOver ( class ASVehicle* Vehicle, class UPrimitiveComponent* RunOverComponent, int WheelIndex );
	struct FVector GetEffectLocation ( );
	struct FRotator GetWeaponAim ( class ASGS_MechWeapon* MWeapon );
	struct FVector eventGetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon );
	struct FVector GetPhysicalFireStartLoc ( class AUTWeapon* ForWeapon );
	void eventGetBarrelLocationAndRotation ( struct FVector* SocketLocation, struct FRotator* SocketRotation );
	void PanTread ( class UMaterialInstanceConstant* TreadPanner, float TreadPan, int Side, float DeltaTime );
	void PanTreads ( float DeltaTime );
	void SetUpTreads ( );
	void PlayImpactEffects ( struct FVector HitLocation );
	bool AllowImpactEffects ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	void CheckBulletWhip ( struct FVector FireDir, struct FVector HitLocation );
	struct FMaterialImpactEffect GetImpactEffect ( class UPhysicalMaterial* HitMaterial );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void Register ( );
	void PostBeginPlay ( );
	void CauseMuzzleFlashLight ( int SIndex );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void SetDirection ( float Right, float Forward );
	void ServerSetDirection ( float Right, float Forward );
	void TurnEMPOff ( );
	void TurnEMPOn ( );
	void EndEMP ( );
	void ServerStomp ( );
	void HitWithEMP ( );
	void PlayTurretSound1 ( class USoundCue* Sound );
	void PlayTurretSound ( class USoundCue* Sound );
	void ServerSetSoundIndex ( int Index );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_MechPawn::pClassPointer = NULL;

// Class SGSOrion.SGS_AirVehicle
// 0x0018 (0x0C24 - 0x0C0C)
class ASGS_AirVehicle : public ASGS_Vehicle
{
public:
	unsigned long                                      bAutoLand : 1;                                    		// 0x0C0C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PushForce;                                        		// 0x0C10 (0x0004) [0x0000000000000000]              
	struct FString                                     RadarLockMessage;                                 		// 0x0C14 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              LastRadarLockWarnTime;                            		// 0x0C20 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51253 ];

		return pClassPointer;
	};

	bool Dodge ( unsigned char DoubleClickMove );
	bool RecommendLongRangedAttack ( );
	void SetDriving ( unsigned long bNewDriving );
	void eventLockOnWarning ( class AUDKProjectile* IncomingMissile );
};

UClass* ASGS_AirVehicle::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle_VTOL
// 0x00AC (0x0CD0 - 0x0C24)
class ASGS_Vehicle_VTOL : public ASGS_AirVehicle
{
public:
	class USkelControlSingleBone*                      RightRotorControl;                                		// 0x0C24 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      LeftRotorControl;                                 		// 0x0C28 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      RearRotorControl;                                 		// 0x0C2C (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          UpperGunLookAt[ 0x2 ];                            		// 0x0C30 (0x0008) [0x0000000000000000]              
	class USkelControlLookAt*                          LowerGunLookAt[ 0x2 ];                            		// 0x0C38 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             VTOLEffectTemplates[ 0x4 ];                       		// 0x0C40 (0x0010) [0x0000000000000000]              
	class UParticleSystemComponent*                    VTOLEffects[ 0x4 ];                               		// 0x0C50 (0x0010) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       VTOLEffectSockets[ 0x4 ];                         		// 0x0C60 (0x0020) [0x0000000000000000]              
	unsigned long                                      bLandingGearUp : 1;                               		// 0x0C80 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bVTOLEffectsOn : 1;                               		// 0x0C80 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bUseUpperGun : 1;                                 		// 0x0C80 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRightRocket : 1;                                 		// 0x0C80 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFreelanceStart : 1;                              		// 0x0C80 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     vViewStart;                                       		// 0x0C84 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FRotator                                    rViewDir;                                         		// 0x0C90 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     AimPos;                                           		// 0x0C9C (0x000C) [0x0000000000000000]              
	class UParticleSystem*                             TracerTrailTemplate;                              		// 0x0CA8 (0x0004) [0x0000000000000000]              
	float                                              Strength;                                         		// 0x0CAC (0x0004) [0x0000000000000000]              
	float                                              RotorSpeed;                                       		// 0x0CB0 (0x0004) [0x0000000000000000]              
	TArray< int >                                      JetEffectIndices;                                 		// 0x0CB4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             TurretBeamTemplate;                               		// 0x0CC0 (0x0004) [0x0000000000000000]              
	class UUTSkelControl_JetThruster*                  JetControl;                                       		// 0x0CC4 (0x0004) [0x0000000000000000]              
	struct FName                                       JetScalingParam;                                  		// 0x0CC8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51252 ];

		return pClassPointer;
	};

	bool FindAutoExit ( class APawn* ExitingDriver );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void eventGetBarrelLocationAndRotation ( int SeatIndex, struct FVector* SocketLocation, struct FRotator* SocketRotation );
	bool ShouldClamp ( );
	void VehicleWeaponImpactEffects ( struct FVector HitLocation, int SeatIndex );
	bool RecommendLongRangedAttack ( );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	void PassengerLeave ( int SeatIndex );
	void DriverLeft ( );
	bool DriverEnter ( class APawn* P );
	bool ImportantVehicle ( );
	void ResetTurningSpeed ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void eventTick ( float DeltaTime );
	void UpdateGunAim ( );
	void ServerSetView ( struct FVector S, struct FRotator D );
	void SetDriving ( unsigned long bNewDriving );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void StopEffects ( );
	void SpawnVTOLEffects ( );
	void ServerToggleLandingGear ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_Vehicle_VTOL::pClassPointer = NULL;

// Class SGSOrion.SGS_Controller_Dino
// 0x0160 (0x0520 - 0x03C0)
class ASGS_Controller_Dino : public ASGController_Bot
{
public:
	unsigned long                                      bIsReachable : 1;                                 		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvadeBase : 1;                                  		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLookDown : 1;                                    		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanAim : 1;                                      		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAttackGenerator : 1;                             		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bThrowingRock : 1;                                		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bFinishingMove : 1;                               		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bCanChangeEnemy : 1;                              		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bJumping : 1;                                     		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bFall : 1;                                        		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bClearingPath : 1;                                		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bChargingJump : 1;                                		// 0x03C0 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bSpecialMovement : 1;                             		// 0x03C0 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bSlowDown : 1;                                    		// 0x03C0 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bScared : 1;                                      		// 0x03C0 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bCanRoar : 1;                                     		// 0x03C0 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bAimHead : 1;                                     		// 0x03C0 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bStuck : 1;                                       		// 0x03C0 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bGettingUnStuck : 1;                              		// 0x03C0 (0x0004) [0x0000000000000000] [0x00040000] 
	float                                              DinoLoseEnemyRadius;                              		// 0x03C4 (0x0004) [0x0000000000000000]              
	float                                              DinoLoseEnemyHeight;                              		// 0x03C8 (0x0004) [0x0000000000000000]              
	class AActor*                                      FleeTarget;                                       		// 0x03CC (0x0004) [0x0000000000000000]              
	struct FVector                                     TempPathNextTarget;                               		// 0x03D0 (0x000C) [0x0000000000000000]              
	int                                                RouteIndex;                                       		// 0x03DC (0x0004) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x03E0 (0x0004) [0x0000000000000000]              
	float                                              CreatedTime;                                      		// 0x03E4 (0x0004) [0x0000000000000000]              
	float                                              LastBiteTime;                                     		// 0x03E8 (0x0004) [0x0000000000000000]              
	struct FVector                                     RandomLocation;                                   		// 0x03EC (0x000C) [0x0000000000000000]              
	float                                              LastRhamTime;                                     		// 0x03F8 (0x0004) [0x0000000000000000]              
	float                                              GrabHeight;                                       		// 0x03FC (0x0004) [0x0000000000000000]              
	float                                              TotalStuckTime;                                   		// 0x0400 (0x0004) [0x0000000000000000]              
	struct FVector                                     ReallyStuckPos;                                   		// 0x0404 (0x000C) [0x0000000000000000]              
	struct FVector                                     LastEnemyPos;                                     		// 0x0410 (0x000C) [0x0000000000000000]              
	class APawn*                                       InvisibleEnemy;                                   		// 0x041C (0x0004) [0x0000000000000000]              
	float                                              LastThrowTime;                                    		// 0x0420 (0x0004) [0x0000000000000000]              
	class AController*                                 Killer;                                           		// 0x0424 (0x0004) [0x0000000000000000]              
	float                                              LastSwoopTime;                                    		// 0x0428 (0x0004) [0x0000000000000000]              
	float                                              FreezeTimer;                                      		// 0x042C (0x0004) [0x0000000000000000]              
	float                                              LastJumpTime;                                     		// 0x0430 (0x0004) [0x0000000000000000]              
	float                                              GrabDamage;                                       		// 0x0434 (0x0004) [0x0000000000000000]              
	struct FName                                       AttackName;                                       		// 0x0438 (0x0008) [0x0000000000000000]              
	struct FVector                                     GrabTargetLocation;                               		// 0x0440 (0x000C) [0x0000000000000000]              
	float                                              LastJumpDamageTime;                               		// 0x044C (0x0004) [0x0000000000000000]              
	float                                              LastSwoopRoarTime;                                		// 0x0450 (0x0004) [0x0000000000000000]              
	TArray< struct FDamagers >                         dPlayers;                                         		// 0x0454 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastBumpTime;                                     		// 0x0460 (0x0004) [0x0000000000000000]              
	struct FVector                                     StartJumpPos;                                     		// 0x0464 (0x000C) [0x0000000000000000]              
	struct FVector                                     MoveOffsets[ 0xA ];                               		// 0x0470 (0x0078) [0x0000000000000000]              
	int                                                SquadIndex;                                       		// 0x04E8 (0x0004) [0x0000000000000000]              
	float                                              TurnLen;                                          		// 0x04EC (0x0004) [0x0000000000000000]              
	class APawn*                                       SGSEnemy;                                         		// 0x04F0 (0x0004) [0x0000000000000000]              
	class AActor*                                      AlertActor;                                       		// 0x04F4 (0x0004) [0x0000000000000000]              
	float                                              StuckTime;                                        		// 0x04F8 (0x0004) [0x0000000000000000]              
	struct FVector                                     OldPawnLocation;                                  		// 0x04FC (0x000C) [0x0000000000000000]              
	float                                              LastGrabTime;                                     		// 0x0508 (0x0004) [0x0000000000000000]              
	int                                                CreditScore;                                      		// 0x050C (0x0004) [0x0000000000000000]              
	float                                              HATED_MAX;                                        		// 0x0510 (0x0004) [0x0000000000000000]              
	TArray< struct FHatedActor >                       HatedActors;                                      		// 0x0514 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51261 ];

		return pClassPointer;
	};

	void GetAlerted ( );
	void eventWhatToDoNext ( );
	void StopLookingDown ( );
	void ThrowRock ( );
	void eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType );
	void SetAttractionState ( );
	void DoStomp ( );
	bool TryToAttack ( );
	void Cleanup ( );
	void AnimDone ( );
	bool IsOnGround ( );
	void FallOver ( );
	void JumpOver ( );
	void DoJump ( );
	bool NavActorReachable ( class AActor* A );
	bool CanDirectlyReachGoal ( );
	void eventSeePlayer ( class APawn* SeenPlayer );
	void eventSeeMonster ( class APawn* Seen );
	bool ShouldDinoMove ( );
	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal );
	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	class AActor* FindRandomDinoAttackPoint ( );
	void Roar ( );
	void NotifyKilled ( class AController* NKiller, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void eventNotifyHateTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void RemoveFromHatedActors ( class APawn* OldEnemy );
	void ReadjustHate ( );
	void AdjustHate ( float DeltaTime );
	void SetDinoViewPitch ( struct FVector Dir );
	struct FVector GetStompPos ( );
	struct FVector GetVehicleFlipPos ( );
	struct FVector GetRockPos ( );
	struct FVector GetBitePos ( );
	struct FVector GetAimPos ( );
	struct FVector GetEyePos ( );
	void ResetRoar ( );
	void Tick ( float ElapsedTime );
	bool TryToJump ( );
	void HandleHeadAim ( );
	void ClearPath ( );
	void RedoPathing ( );
	void HandleMovement ( float DeltaTime );
	struct FVector GetMoveOffsetVector ( );
	void AdjustSquadPositions ( );
	void HandleFlyingMovement ( float DeltaTime );
	void GetMoveTarget ( );
	void DropTheBitch ( );
	void StopSpecialMovment ( );
	void CheckSpeedAndDirection ( );
	void UpdateRotation ( float DeltaTime );
	void AddDamager ( int Damage, class ASGS_Controller_Player* Damager );
	bool IsEnemyInRange ( class APawn* pEnemy );
	void eventPostBeginPlay ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
};

UClass* ASGS_Controller_Dino::pClassPointer = NULL;

// Class SGSOrion.SGS_PlayerReplicationInfo
// 0x003F (0x03B0 - 0x0371)
class ASGS_PlayerReplicationInfo : public AUTPlayerReplicationInfo
{
public:
	float                                              InitialKillTime;                                  		// 0x0374 (0x0004) [0x0000000000000000]              
	float                                              InitialDinoKillTime;                              		// 0x0378 (0x0004) [0x0000000000000000]              
	int                                                DinoKillCount;                                    		// 0x037C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                DinoKillCountTimer;                               		// 0x0380 (0x0004) [0x0000000000000000]              
	int                                                KillCount;                                        		// 0x0384 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                WeaponKillCount;                                  		// 0x0388 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                WeaponIndex;                                      		// 0x038C (0x0004) [0x0000000000000000]              
	class UClass*                                      CurrentWeapon;                                    		// 0x0390 (0x0004) [0x0000000000000000]              
	int                                                Credits;                                          		// 0x0394 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                Assists;                                          		// 0x0398 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                WaveKills[ 0x3 ];                                 		// 0x039C (0x000C) [0x0000000000000000]              
	int                                                StartingWave;                                     		// 0x03A8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CreditsSpent;                                     		// 0x03AC (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51262 ];

		return pClassPointer;
	};

	void SGSIncrementKills ( unsigned long bEnemyKill, class APawn* KilledPawn );
	void IncrementKills ( unsigned long bEnemyKill );
	void CarnageWeaponKill ( class UClass* DamageType );
	void CarnageDemotion ( );
	bool ShouldBroadCastWelcomeMessage ( unsigned long bExiting );
	void SGSUpdateEventStatAchievements ( struct FName StatName, int Amount );
	void UpdateMacGuyver ( class UClass* DamageType );
	void UpdateVehicles ( class APawn* P );
	void UpdatePunches ( int Index );
	void UpdateWaveKills ( );
	void IncrementSGSKillStat ( struct FName KillType );
	int IncrementDeathStat ( struct FName NewStatName );
	int IncrementKillStat ( struct FName NewStatName );
	int IncrementVehicleKillStat ( struct FName NewStatName );
};

UClass* ASGS_PlayerReplicationInfo::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_NoseLift
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_NoseLift : public USGDmgType_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51295 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_NoseLift::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleWheel
// 0x000C (0x012C - 0x0120)
class USGS_VehicleWheel : public UUDKVehicleWheel
{
public:
	class UParticleSystemComponent*                    DirtParticleComp;                                 		// 0x0120 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    OldDirtParticleComp;                              		// 0x0124 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AUDKVehicle*                                 CurrentOwner;                                     		// 0x0128 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51302 ];

		return pClassPointer;
	};

	void OldDirtEffectFinished ( class UParticleSystemComponent* PSystem );
	void UpdateDirtParticle ( );
	void eventSetDirtParticle ( class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate, struct FVector Offset );
};

UClass* USGS_VehicleWheel::pClassPointer = NULL;

// Class SGSOrion.SGS_Skill
// 0x0020 (0x005C - 0x003C)
class USGS_Skill : public UObject
{
public:
	class ASGS_Pawn_Soldier*                           Pawn;                                             		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              SpeedConsume;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              SpeedRegenerate;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              TotalAmmo;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActive : 1;                                      		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CoolDownTime;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              RechargeBonus;                                    		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              RechargeDelay;                                    		// 0x0058 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51339 ];

		return pClassPointer;
	};

	void Update_Hud ( );
	void Tick ( float ElapsedTime );
	void OnPlayerMove ( float DeltaTime );
	void Deactivate ( );
	void Activate ( );
};

UClass* USGS_Skill::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_RanOver
// 0x0000 (0x0130 - 0x0130)
class USGS_DmgType_RanOver : public UUTDmgType_RanOver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51385 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_RanOver::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByDrivingSeat
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByDrivingSeat : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51432 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByDrivingSeat::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByGladiatorTurretAim
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByGladiatorTurretAim : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51440 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByGladiatorTurretAim::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle_Gladiator
// 0x004C (0x0C58 - 0x0C0C)
class ASGS_Vehicle_Gladiator : public ASGS_Vehicle
{
public:
	unsigned long                                      bBrakeLightOn : 1;                                		// 0x0C0C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReverseLightOn : 1;                              		// 0x0C0C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHeadlightsOn : 1;                                		// 0x0C0C (0x0004) [0x0000000000000000] [0x00000004] 
	class UParticleSystem*                             TracerTrailTemplate;                              		// 0x0C10 (0x0004) [0x0000000000000000]              
	struct FName                                       BrakeLightParameterName;                          		// 0x0C14 (0x0008) [0x0000000000000000]              
	struct FName                                       ReverseLightParameterName;                        		// 0x0C1C (0x0008) [0x0000000000000000]              
	struct FName                                       HeadLightParameterName;                           		// 0x0C24 (0x0008) [0x0000000000000000]              
	struct FTextureCoordinates                         EjectToolTipIconCoords;                           		// 0x0C2C (0x0010) [0x0000000000000000]              
	class USoundCue*                                   SuspensionShiftSound;                             		// 0x0C3C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   EjectSoundCue;                                    		// 0x0C40 (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      SteeringWheelController;                          		// 0x0C44 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        SM_LightCone_L;                                   		// 0x0C48 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        SM_LightCone_R;                                   		// 0x0C4C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USpotLightComponent*                         pSpotLight_L;                                     		// 0x0C50 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USpotLightComponent*                         pSpotLight_R;                                     		// 0x0C54 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51445 ];

		return pClassPointer;
	};

	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void DriverLeft ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void eventSuspensionHeavyShift ( float Delta );
	void DrivingStatusChanged ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void PostBeginPlay ( );
};

UClass* ASGS_Vehicle_Gladiator::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByHasDriver
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByHasDriver : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51447 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByHasDriver::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByJetPack
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByJetPack : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51453 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByJetPack::pClassPointer = NULL;

// Class SGSOrion.SGS_Skill_JetPack
// 0x002C (0x0088 - 0x005C)
class USGS_Skill_JetPack : public USGS_Skill
{
public:
	float                                              BurstAmount;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              MaxJetPackSpeed;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              MaxJetPackHeight;                                 		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              AllowedJetPackHeight;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              StartTimeHoldingLevelKey;                         		// 0x006C (0x0004) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  JetFlamePSC_Left;                                 		// 0x0070 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUTParticleSystemComponent*                  JetFlamePSC_Right;                                		// 0x0074 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UUDKExplosionLight*                          JetLight;                                         		// 0x0078 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCmp;                                         		// 0x007C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bWasHoveringInLastFrame : 1;                      		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              JetPackStartTime;                                 		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51457 ];

		return pClassPointer;
	};

	void Tick ( float ElapsedTime );
	void PlayJetSound ( class USoundCue* Sound );
	void OnPlayerMove ( float DeltaTime );
	void Deactivate ( );
	void Activate ( );
};

UClass* USGS_Skill_JetPack::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByLandingGear
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByLandingGear : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51459 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByLandingGear::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByRollDirection
// 0x0004 (0x012C - 0x0128)
class USGS_AnimBlendByRollDirection : public UUDKAnimBlendBase
{
public:
	unsigned long                                      bRoll : 1;                                        		// 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51465 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByRollDirection::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByRolling
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByRolling : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51473 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByRolling::pClassPointer = NULL;

// Class SGSOrion.SGS_AnimBlendByTankMode
// 0x0000 (0x0128 - 0x0128)
class USGS_AnimBlendByTankMode : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51478 ];

		return pClassPointer;
	};

	void eventTickAnim ( float DeltaSeconds );
};

UClass* USGS_AnimBlendByTankMode::pClassPointer = NULL;

// Class SGSOrion.SGS_BuyStation
// 0x0048 (0x0210 - 0x01C8)
class ASGS_BuyStation : public AActor
{
public:
	int                                                BaseIndex;                                        		// 0x01C8 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned long                                      Powered : 1;                                      		// 0x01CC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bHitWithEMP : 1;                                  		// 0x01CC (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	struct FString                                     HudName;                                          		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                Col;                                              		// 0x01DC (0x0010) [0x0000000000000000]              
	struct FLinearColor                                GlowColor;                                        		// 0x01EC (0x0010) [0x0000000000000000]              
	class UParticleSystemComponent*                    EMPEffect;                                        		// 0x01FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   Mat;                                              		// 0x0200 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        StaticMeshComponent;                              		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        PanelMesh;                                        		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51484 ];

		return pClassPointer;
	};

	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	void TurnEMPOff ( );
	void TurnEMPOn ( );
	void EndEMP ( );
	void HitWithEMP ( );
	void eventApplyImpulse ( struct FVector ImpulseDir, float ImpulseMag, struct FVector HitLocation, struct FTraceHitInfo HitInfo, class UClass* DamageType );
	void SetPowered ( unsigned long bPowered );
	void TurnPowerOff ( );
	void TurnPowerOn ( );
	void Register ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_BuyStation::pClassPointer = NULL;

// Class SGSOrion.SGS_Armory
// 0x0000 (0x0210 - 0x0210)
class ASGS_Armory : public ASGS_BuyStation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51528 ];

		return pClassPointer;
	};

};

UClass* ASGS_Armory::pClassPointer = NULL;

// Class SGSOrion.SGS_AssistMessage
// 0x0000 (0x0064 - 0x0064)
class USGS_AssistMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51575 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_AssistMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_AutoTurret
// 0x007C (0x04CC - 0x0450)
class ASGS_AutoTurret : public APawn
{
public:
	class USkeletalMeshComponent*                      TurretMesh;                                       		// 0x0450 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      ProjectileClass;                                  		// 0x0454 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0458 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	float                                              Radius;                                           		// 0x045C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FiringSpeed;                                      		// 0x0460 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOVDegrees;                                       		// 0x0464 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BulletDamage;                                     		// 0x0468 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TrackingSpeed;                                    		// 0x046C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TeamIndex;                                        		// 0x0470 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct ASGAutoTurret_FTurretSoundGroup             TurretSounds;                                     		// 0x0474 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct ASGAutoTurret_FTurretEmitterGroup           TurretEmitters;                                   		// 0x048C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    DamageEffect;                                     		// 0x04A8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    MuzzleFlashEffect;                                		// 0x04AC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    DestroyEffect;                                    		// 0x04B0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FRotator                                    SGSDesiredRotation;                               		// 0x04B4 (0x000C) [0x0000000000000000]              
	struct FRotator                                    OriginalRotation;                                 		// 0x04C0 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51590 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Tick ( float DeltaTime );
	void SetMyDesiredRotation ( struct FRotator Rot );
	void PostBeginPlay ( );
};

UClass* ASGS_AutoTurret::pClassPointer = NULL;

// Class SGSOrion.SGS_AutoTurretController
// 0x0004 (0x0368 - 0x0364)
class ASGS_AutoTurretController : public AAIController
{
public:
	class ASGPawn*                                     CurrentTarget;                                    		// 0x0364 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51626 ];

		return pClassPointer;
	};

	bool CanStillAttackTarget ( );
	void StopMuzzleFlash ( );
	void FireAtTarget ( );
	void FindTarget ( );
	void SetAttractionState ( );
};

UClass* ASGS_AutoTurretController::pClassPointer = NULL;

// Class SGSOrion.SGS_Barracks
// 0x0000 (0x0210 - 0x0210)
class ASGS_Barracks : public ASGS_BuyStation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51677 ];

		return pClassPointer;
	};

};

UClass* ASGS_Barracks::pClassPointer = NULL;

// Class SGSOrion.SGS_Bot
// 0x0018 (0x05F8 - 0x05E0)
class ASGS_Bot : public AUTBot
{
public:
	float                                              LastJetPackTime;                                  		// 0x05E0 (0x0004) [0x0000000000000000]              
	int                                                FlagIndex;                                        		// 0x05E4 (0x0004) [0x0000000000000000]              
	class AActor*                                      fMoveTarget;                                      		// 0x05E8 (0x0004) [0x0000000000000000]              
	struct FVector                                     JetPackVelocity;                                  		// 0x05EC (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52856 ];

		return pClassPointer;
	};

	void eventSeePlayer ( class APawn* SeenPlayer );
	void Initialize ( float InSkill, int TeamIndex, struct FCharacterInfo* BotInfo );
	void SwitchToBestWeapon ( unsigned long bForceNewWeapon );
	void Possess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void eventExecuteWhatToDoNext ( );
	void MoveToDefensePoint ( );
	bool ShouldUseSkill ( );
	void StopJetPacking ( );
	void JetPack ( );
	void PostBeginPlay ( );
	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal );
	void EnterVehicle ( class AVehicle* V );
	void YellAt ( class APlayerReplicationInfo* Moron );
};

UClass* ASGS_Bot::pClassPointer = NULL;

// Class SGSOrion.SGS_Game
// 0x0048 (0x05B4 - 0x056C)
class ASGS_Game : public ASGgame
{
public:
	TArray< class ASGS_SceneCaptureActor* >            AllCameras;                                       		// 0x056C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      AnnouncerMessageClass;                            		// 0x0578 (0x0004) [0x0000000000000000]              
	TArray< class ASGS_CapturePoint* >                 SpawnCapturePoints;                               		// 0x057C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AUTTeamInfo*                                 DinoTeam;                                         		// 0x0588 (0x0004) [0x0000000000000000]              
	TArray< class ANavigationPoint* >                  aNavPoints;                                       		// 0x058C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNoAbilities : 1;                                 		// 0x0598 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FDSquad >                           DinoSquads;                                       		// 0x059C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoJumpPoint* >                aJumpPoints;                                      		// 0x05A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52865 ];

		return pClassPointer;
	};

	void BroadcastDeathMessage ( class AController* Killer, class AController* Other, class UClass* DamageType );
	void SquadLeaderDied ( class ASGController_Bot* dino );
	void RegisterSpawnPoint ( class ASGS_CapturePoint* SP );
	void CreateSquad ( class ASGController_Bot* dino, int Id );
	bool AddToSquad ( class ASGController_Bot* dino, int Id );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	void EndSpree ( class AUTPlayerReplicationInfo* Killer, class AUTPlayerReplicationInfo* Other );
	bool ForceRespawn ( );
	void NotifySpree ( class AUTPlayerReplicationInfo* Other, int Num );
	void NotifyKilled ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	class AActor* GetFlyingRandomDest ( );
	void AddLife ( class ASGS_Controller_Player* C );
	void InitializeBot ( class AUTBot* NewBot, class AUTTeamInfo* BotTeam, struct FCharacterInfo* BotInfo );
	class AUTBot* SpawnBot ( struct FString BotName, unsigned long bUseTeamIndex, int TeamIndex );
	class AUTBot* AddBot ( struct FString BotName, unsigned long bUseTeamIndex, int TeamIndex );
	void GenericPlayerInitialization ( class AController* C );
	void SetTeam ( class AController* Other, class AUTTeamInfo* NewTeam, unsigned long bNewTeam );
	bool ChangeTeam ( class AController* Other, int Num, unsigned long bNewTeam );
	void PlayEndOfMatchMessage ( );
	bool CanSpectate ( class APlayerController* Viewer, class APlayerReplicationInfo* ViewTarget );
	void PreBeginPlay ( );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void RestartPlayer ( class AController* NewPlayer );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void InitPawn ( class APawn* Pawn );
	void AddInitialBots ( );
	void AddBots ( int Num );
	bool NeedPlayers ( );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	bool AtCapacity ( unsigned long bSpectator );
	void DinoLive ( );
	void IceAge ( );
	void CreateTeam ( int TeamIndex );
	bool IsADeveloperID ( class ASGS_Controller_Player* C );
	void UpdateGameSettings ( );
	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
};

UClass* ASGS_Game::pClassPointer = NULL;

// Class SGSOrion.SGS_GameCarnage
// 0x0060 (0x0614 - 0x05B4)
class ASGS_GameCarnage : public ASGS_Game
{
public:
	class UClass*                                      CarrierWeapons[ 0xC ];                            		// 0x05B4 (0x0030) [0x0000000000000000]              
	class UClass*                                      AltairWeapons[ 0xC ];                             		// 0x05E4 (0x0030) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52864 ];

		return pClassPointer;
	};

	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void eventPostLogin ( class APlayerController* NewPlayer );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
};

UClass* ASGS_GameCarnage::pClassPointer = NULL;

// Class SGSOrion.SGS_GameCTF
// 0x0008 (0x05BC - 0x05B4)
class ASGS_GameCTF : public ASGS_Game
{
public:
	class AUTCTFFlag*                                  Flags[ 0x2 ];                                     		// 0x05B4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52874 ];

		return pClassPointer;
	};

	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	void ScoreFlag ( class AController* Scorer, class AUTCTFFlag* theFlag );
	class AActor* GetAutoObjectiveFor ( class AUTPlayerController* PC );
	void ViewObjective ( class APlayerController* PC );
	bool GetLocationFor ( class APawn* StatusPawn, int LocationSpeechOffset, class AActor** LocationObject, int* MessageIndex );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	bool WantFastSpawnFor ( class AAIController* B );
	bool NearGoal ( class AController* C );
	void RegisterFlag ( class AUTCTFFlag* F, int TeamIndex );
	void SetEndGameFocus ( class APlayerReplicationInfo* Winner );
	void PostBeginPlay ( );
};

UClass* ASGS_GameCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_Skill_MedicGun
// 0x0008 (0x0064 - 0x005C)
class USGS_Skill_MedicGun : public USGS_Skill
{
public:
	class APawn*                                       TargetPawn;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCmp;                                         		// 0x0060 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52881 ];

		return pClassPointer;
	};

	void Tick ( float ElapsedTime );
	void PlayHealSound ( class USoundCue* Sound );
	void Deactivate ( );
	void Activate ( );
};

UClass* USGS_Skill_MedicGun::pClassPointer = NULL;

// Class SGSOrion.SGS_Skill_Cloack
// 0x00C4 (0x0120 - 0x005C)
class USGS_Skill_Cloack : public USGS_Skill
{
public:
	float                                              Cloacking;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              FadeDirection;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              FadeSpeed;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCmp;                                         		// 0x0068 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AWeapon*                                     OldWeapon;                                        		// 0x006C (0x0004) [0x0000000000000000]              
	TArray< class UTexture* >                          wNormal;                                          		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                WeaponMats;                                       		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture* >                          aNormal;                                          		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                AttachmentMats;                                   		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture* >                          cNormal;                                          		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                CharMats;                                         		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture* >                          lNormal;                                          		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                LArmMats;                                         		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture* >                          rNormal;                                          		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                RArmMats;                                         		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture* >                          sNormal;                                          		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                SilencerMats;                                     		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UTexture* >                          s3Normal;                                         		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInterface* >                Silencer3Mats;                                    		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bChange : 1;                                      		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CloakStartTime;                                   		// 0x011C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52882 ];

		return pClassPointer;
	};

	void PlayCloakSound ( class USoundCue* Sound );
	void Deactivate ( );
	void Activate ( );
	void Tick ( float ElapsedTime );
};

UClass* USGS_Skill_Cloack::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo
// 0x0018 (0x0218 - 0x0200)
class USGS_FamilyInfo : public USGFamilyInfo
{
public:
	class UClass*                                      SkillClass;                                       		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                DefaultTeam;                                      		// 0x0204 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ArmorDepletedSound;                               		// 0x0208 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ArmorRestoredSound;                               		// 0x020C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             JetTrail;                                         		// 0x0210 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ShieldEmitterTemplate;                            		// 0x0214 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52893 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellRifle
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_CellRifle : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52895 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellRifle::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_FNC30
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_FNC30 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52896 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_FNC30::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellPistol
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_CellPistol : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52898 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellPistol::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CV10
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_CV10 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52899 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CV10::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Carrier_Assault
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Carrier_Assault : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52907 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Carrier_Assault::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Carrier_Support
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Carrier_Support : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52908 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Carrier_Support::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Carrier_Recon
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Carrier_Recon : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52909 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Carrier_Recon::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Altair_Assault
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Altair_Assault : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52910 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Altair_Assault::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Altair_Support
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Altair_Support : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52911 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Altair_Support::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Altair_Recon
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Altair_Recon : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52912 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Altair_Recon::pClassPointer = NULL;

// Class SGSOrion.SGS_CapturePoint
// 0x0020 (0x01E8 - 0x01C8)
class ASGS_CapturePoint : public AActor
{
public:
	struct FName                                       CapturePointName;                                 		// 0x01C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CaptureSpeed;                                     		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TeamIndex;                                        		// 0x01D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              PercentCaptured;                                  		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bInit : 1;                                        		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MyIndex;                                          		// 0x01E4 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52926 ];

		return pClassPointer;
	};

	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
};

UClass* ASGS_CapturePoint::pClassPointer = NULL;

// Class SGSOrion.SGS_GameReplicationInfo
// 0x0150 (0x03B8 - 0x0268)
class ASGS_GameReplicationInfo : public AUTGameReplicationInfo
{
public:
	struct FVector                                     RedFlagPos;                                       		// 0x0268 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     BlueFlagPos;                                      		// 0x0274 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class AUTCarriedObject*                            RedFlag;                                          		// 0x0280 (0x0004) [0x0000000000000000]              
	class AUTCarriedObject*                            BlueFlag;                                         		// 0x0284 (0x0004) [0x0000000000000000]              
	int                                                CurrentRound;                                     		// 0x0288 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                numRaptor;                                        		// 0x028C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                numTrex;                                          		// 0x0290 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                numRham;                                          		// 0x0294 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                BaseIndex;                                        		// 0x0298 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                NumCapturePoints;                                 		// 0x029C (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bNoAbilites : 1;                                  		// 0x02A0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	struct FVector                                     NextBaseLocation;                                 		// 0x02A4 (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     Difficulty;                                       		// 0x02B0 (0x000C) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	struct FReplicatedBaseInfo                         Bases[ 0x5 ];                                     		// 0x02BC (0x008C) [0x0000000000000020]              ( CPF_Net )
	struct FReplicatedCapturePointInfo                 CapturePoints[ 0x4 ];                             		// 0x0348 (0x0070) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52944 ];

		return pClassPointer;
	};

	void UpdateCapturePointInfo ( class ASGS_CapturePoint* cp, int Index );
	int RegisterCapturePoint ( class ASGS_CapturePoint* cp );
	void UpdateFlags ( );
	void GundyLog ( );
	void Timer ( );
	void SetTeam ( int Index, class ATeamInfo* TI );
};

UClass* ASGS_GameReplicationInfo::pClassPointer = NULL;

// Class SGSOrion.SGS_CapturePointMessage
// 0x0030 (0x00E8 - 0x00B8)
class USGS_CapturePointMessage : public UUTKillerMessage
{
public:
	struct FString                                     LocalCaptureStrings[ 0x2 ];                       		// 0x00B8 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     PublicCaptureStrings[ 0x2 ];                      		// 0x00D0 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52962 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_CapturePointMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_CarnageMessage
// 0x0120 (0x0184 - 0x0064)
class USGS_CarnageMessage : public UUTLocalMessage
{
public:
	struct FString                                     WeaponNames[ 0x18 ];                              		// 0x0064 (0x0120) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53006 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_CarnageMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_GameDinoSurvival
// 0x00BC (0x0670 - 0x05B4)
class ASGS_GameDinoSurvival : public ASGS_Game
{
public:
	int                                                CurrentRound;                                     		// 0x05B4 (0x0004) [0x0000000000000000]              
	int                                                BaseIndex;                                        		// 0x05B8 (0x0004) [0x0000000000000000]              
	int                                                CurrentRoundIndex;                                		// 0x05BC (0x0004) [0x0000000000000000]              
	TArray< class ASGS_Pawn_Soldier* >                 ActiveDinos;                                      		// 0x05C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoSurvivalBase* >             Bases;                                            		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_PowerGenerator* >               Generators;                                       		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_Armory* >                       Armories;                                         		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_Barracks* >                     Barracks;                                         		// 0x05F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_Garage* >                       Garages;                                          		// 0x05FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_SupplyCabinet* >                Supplies;                                         		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APlayerReplicationInfo*                      FirstKiller;                                      		// 0x0614 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      LastKiller;                                       		// 0x0618 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFirstKill : 1;                                   		// 0x061C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBasePowered : 1;                                 		// 0x061C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGameStart : 1;                                   		// 0x061C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanGameEnd : 1;                                  		// 0x061C (0x0004) [0x0000000000000000] [0x00000008] 
	class ASGS_DinoSurvivalSettings*                   DinoSurvivalSettings;                             		// 0x0620 (0x0004) [0x0000000000000000]              
	TArray< class ASGS_DinoSurvival_SpawnDino* >       RaptorSpawns;                                     		// 0x0624 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoSurvival_SpawnDino* >       TRexSpawns;                                       		// 0x0630 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoSurvival_SpawnDino* >       RhamSpawns;                                       		// 0x063C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoSurvival_SpawnDino* >       BaseRaptorSpawns;                                 		// 0x0648 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoSurvival_SpawnDino* >       BaseTRexSpawns;                                   		// 0x0654 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASGS_DinoSurvival_SpawnDino* >       BaseRhamSpawns;                                   		// 0x0660 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CountDownTimer;                                   		// 0x066C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53119 ];

		return pClassPointer;
	};

	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	int CheckNumberOfDinosRemaining ( );
	bool AllPlayersDead ( );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void ActuallyDoSpawns ( );
	void DoCountDownTimer ( );
	void NextWaveIncoming ( );
	void RestartPlayer ( class AController* NewPlayer );
	void ReallySpawnDeadPlayers ( );
	void SpawnDeadPlayers ( );
	void SpawnNextWave ( class APlayerReplicationInfo* Scorer, unsigned long bFirst );
	bool CanDinoSpawn ( );
	void GiveAssistCredits ( class ASGS_Controller_Player* P, float Damage, int Worth );
	bool CanSpawnTrex ( );
	void MoveToNextBase ( class ASGS_PowerGenerator* Gen );
	void FirstSpawns ( );
	void PostBeginPlay ( );
	void RegisterBarracks ( class ASGS_Barracks* newBarracks );
	void RegisterArmory ( class ASGS_Armory* newArmory );
	void PowerUpStations ( class ASGS_PowerGenerator* Gen );
	void PowerUpGenerators ( );
	bool IsPawnFacingGenerators ( class APawn* P );
	void LoseGenerator ( class ASGS_PowerGenerator* Gen );
	class AActor* GetActiveGenerator ( );
	void RecoverGenerator ( class ASGS_PowerGenerator* Gen );
	void RegisterGarage ( class ASGS_Garage* newGarage );
	void RegisterGenerator ( class ASGS_PowerGenerator* newGenerator );
	void RegisterBase ( class ASGS_DinoSurvivalBase* NewBase );
	void RegisterSettings ( class ASGS_DinoSurvivalSettings* DS );
	struct FName GetNextBaseName ( );
	struct FName GetBaseName ( );
	struct FVector GetBaseLocation ( );
	void GetDinosRemainingString ( int* nRaptor, int* nTrex, int* nRham );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
};

UClass* ASGS_GameDinoSurvival::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Dino_Rham
// 0x0000 (0x03A4 - 0x03A4)
class USGS_FamilyInfo_Dino_Rham : public USGS_FamilyInfo_Dino
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53138 ];

		return pClassPointer;
	};

	void DinoWhatToDoNext ( class ASGS_Controller_Dino* dino );
};

UClass* USGS_FamilyInfo_Dino_Rham::pClassPointer = NULL;

// Class SGSOrion.SGS_PowerGenerator
// 0x0040 (0x0208 - 0x01C8)
class ASGS_PowerGenerator : public AActor
{
public:
	int                                                BaseIndex;                                        		// 0x01C8 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                Health;                                           		// 0x01CC (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                HealthMax;                                        		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bComplete : 1;                                    		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      bOn : 1;                                          		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bWaitingForInput : 1;                             		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bHitWithEMP : 1;                                  		// 0x01D4 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	struct FLinearColor                                Col;                                              		// 0x01D8 (0x0010) [0x0000000000000000]              
	class UParticleSystemComponent*                    EMPEffect;                                        		// 0x01E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    FireEffect;                                       		// 0x01EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   Mat;                                              		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x01F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x01F8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FString                                     HudName;                                          		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53182 ];

		return pClassPointer;
	};

	void TurnFireOff ( );
	void TurnFireOn ( );
	void TurnWaitingForInputOff ( );
	void TurnWaitingForInputOn ( );
	void SwitchOn ( );
	void Powerup ( );
	void TurnEMPOff ( );
	void TurnEMPOn ( );
	void EndEMP ( );
	void HitWithEMP ( );
	void PowerDown ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCasuer );
	void Register ( );
	bool CanBeTurnedOn ( );
	void RegisterGame ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
};

UClass* ASGS_PowerGenerator::pClassPointer = NULL;

// Class SGSOrion.SGS_NavigationDinoAttackPoint
// 0x0004 (0x02A4 - 0x02A0)
class ASGS_NavigationDinoAttackPoint : public APathNode
{
public:
	int                                                BaseIndex;                                        		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53247 ];

		return pClassPointer;
	};

};

UClass* ASGS_NavigationDinoAttackPoint::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_M40
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_M40 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53263 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_M40::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_Rock
// 0x0000 (0x028C - 0x028C)
class ASGS_Proj_Rock : public AUTProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53326 ];

		return pClassPointer;
	};

};

UClass* ASGS_Proj_Rock::pClassPointer = NULL;

// Class SGSOrion.SGS_Controller_PathFollower
// 0x0000 (0x03C0 - 0x03C0)
class ASGS_Controller_PathFollower : public ASGController_Bot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53407 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
};

UClass* ASGS_Controller_PathFollower::pClassPointer = NULL;

// Class SGSOrion.SGS_Garage
// 0x000C (0x021C - 0x0210)
class ASGS_Garage : public ASGS_BuyStation
{
public:
	TArray< class ASGS_GarageVehicleSpawner* >         SpawnPoints;                                      		// 0x0210 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53423 ];

		return pClassPointer;
	};

};

UClass* ASGS_Garage::pClassPointer = NULL;

// Class SGSOrion.SGS_DBMainMenu
// 0x0158 (0x02C0 - 0x0168)
class USGS_DBMainMenu : public UGFxMoviePlayer
{
public:
	class UGFxClikWidget*                              JoinGameButton;                                   		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              QuitButton;                                       		// 0x016C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuccess : 1;                                     		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOnline : 1;                                      		// 0x0170 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPauseMenu : 1;                                   		// 0x0170 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bStopRefresh : 1;                                 		// 0x0170 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      PlayHitSound : 1;                                 		// 0x0170 (0x0004) [0x0000000000044000] [0x00000010] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      ToggleJetPack : 1;                                		// 0x0170 (0x0004) [0x0000000000044000] [0x00000020] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      ToggleCloak : 1;                                  		// 0x0170 (0x0004) [0x0000000000044000] [0x00000040] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      ToggleAim : 1;                                    		// 0x0170 (0x0004) [0x0000000000044000] [0x00000080] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      StrafeVehicle : 1;                                		// 0x0170 (0x0004) [0x0000000000044000] [0x00000100] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      ShowArmor : 1;                                    		// 0x0170 (0x0004) [0x0000000000044000] [0x00000200] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      ShowNames : 1;                                    		// 0x0170 (0x0004) [0x0000000000044000] [0x00000400] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowFull : 1;                                    		// 0x0170 (0x0004) [0x0000000000044000] [0x00000800] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowEmpty : 1;                                   		// 0x0170 (0x0004) [0x0000000000044000] [0x00001000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bShowPassworded : 1;                              		// 0x0170 (0x0004) [0x0000000000044000] [0x00002000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bVehicles : 1;                                    		// 0x0170 (0x0004) [0x0000000000044000] [0x00004000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bAbilities : 1;                                   		// 0x0170 (0x0004) [0x0000000000044000] [0x00008000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bAIDinos : 1;                                     		// 0x0170 (0x0004) [0x0000000000044000] [0x00010000] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bSortAscending : 1;                               		// 0x0170 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bGametypeOutdated : 1;                            		// 0x0170 (0x0004) [0x0000000000002000] [0x00040000] ( CPF_Transient )
	unsigned long                                      bSpectate : 1;                                    		// 0x0170 (0x0004) [0x0000000000002000] [0x00080000] ( CPF_Transient )
	unsigned long                                      bIssuedInitialQuery : 1;                          		// 0x0170 (0x0004) [0x0000000000002000] [0x00100000] ( CPF_Transient )
	unsigned long                                      bQueryDialogShowing : 1;                          		// 0x0170 (0x0004) [0x0000000000002000] [0x00200000] ( CPF_Transient )
	unsigned long                                      bJoinDialogShowing : 1;                           		// 0x0170 (0x0004) [0x0000000000002000] [0x00400000] ( CPF_Transient )
	unsigned long                                      bProcessingJoin : 1;                              		// 0x0170 (0x0004) [0x0000000000002000] [0x00800000] ( CPF_Transient )
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x0170 (0x0004) [0x0000000000000000] [0x01000000] 
	class UGFxObject*                                  KeyBoardMC;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MouseMC;                                          		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AudioMC;                                          		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VideoMC;                                          		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GamePlayMC;                                       		// 0x0184 (0x0004) [0x0000000000000000]              
	int                                                AAQuality;                                        		// 0x0188 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	int                                                ShadowQuality;                                    		// 0x018C (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              MasterVolume;                                     		// 0x0190 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              MusicVolume;                                      		// 0x0194 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              AnnouncerVolume;                                  		// 0x0198 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct FString                                     Difficulty;                                       		// 0x019C (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	struct FString                                     StartingBase;                                     		// 0x01A8 (0x000C) [0x0000000000444000]              ( CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink )
	int                                                nStartingCredits;                                 		// 0x01B4 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	struct FString                                     LastColumnName;                                   		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SGSKeyBindings;                                   		// 0x01C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SGSKeyCommands;                                   		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SGSDefaultKeys;                                   		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SGSButtonBindings;                                		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SGSButtonCommands;                                		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SGSDefaultButtons;                                		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  PlayerTxt;                                        		// 0x020C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapNameTxt;                                       		// 0x0210 (0x0004) [0x0000000000000000]              
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                  		// 0x0214 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x0218 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTDataStore_GameSearchDM*                   SearchDMDataStore;                                		// 0x021C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x0220 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FOnlineGameSearchResult >           ServerInfoList;                                   		// 0x0224 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUTUIDataStore_MenuItems*                    MenuItemDataStore;                                		// 0x0230 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x0234 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x0238 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x023C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       SearchDSName;                                     		// 0x0240 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class USGS_GFxFrontEnd_PasswordDialog*             PasswordDialog;                                   		// 0x0248 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USGS_GFxFrontEnd_JoinDialog*                 JoinDialogMC;                                     		// 0x024C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      QueryCompletionAction;                            		// 0x0250 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ServerPassword;                                   		// 0x0254 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LastServerAdded;                                  		// 0x0260 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0264 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RootMC;                                           		// 0x0268 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FindMC;                                           		// 0x026C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerListMC;                                     		// 0x0270 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RefreshBtn;                                       		// 0x0274 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BackBtn;                                          		// 0x0278 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              StopRefreshBtn;                                   		// 0x027C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeaderBarMC;                                      		// 0x0280 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FlagsHeaderBtn;                                   		// 0x0284 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerHeaderBtn;                                  		// 0x0288 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MapHeaderBtn;                                     		// 0x028C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayersHeaderBtn;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PingHeaderBtn;                                    		// 0x0294 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FilterMatchTypeTxt;                               		// 0x0298 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FilterGameModeTxt;                                		// 0x029C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatusTxt;                                        		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LoadingTickerMC;                                  		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerCountTxt;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterBtn;                                        		// 0x02AC (0x0004) [0x0000000000000000]              
	TArray< struct FFlashAchievementData >             FlashAchievementMappings;                         		// 0x02B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x02BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53431 ];

		return pClassPointer;
	};

	void DumpGameSearchData ( class UOnlineGameSearch* GameSearch );
	bool OnFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void JoinNow ( struct FName SessionName, unsigned long bWasSuccessful );
	void CreateNow ( struct FName SessionName, unsigned long bWasSuccessful );
	bool eventWidgetInit ( struct FString WidgetName, class UGFxObject* Widget, int Index );
	bool eventSortBrowser ( struct FString ColumnName );
	bool eventUpdateFilters ( );
	bool eventPlayMenuSound ( struct FString SoundName );
	void OnGameCreated ( struct FName SessionName, unsigned long bWasSuccessful );
	void SetPauseMenu ( );
	void SetupGameSettings ( );
	void CreateOnlineGame ( int PlayerIndex );
	int GetPlayerControllerId ( int PlayerIndex );
	struct FString GetCommonOptionsURL ( );
	void FinishStartDedicated ( );
	void SaveGameCreationSettings ( );
	void OnStartGame_Confirm ( );
	void NotifyGameTypeChanged ( );
	void OnCancelSearchComplete ( unsigned long bWasSuccessful );
	void SetRefreshing ( unsigned long IsRefreshing );
	void CancelQuery ( unsigned char DesiredCancelAction );
	bool AllowJoinServer ( );
	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	void ProcessJoin ( );
	void JoinServer ( );
	void JoinServerClikListener ( struct FEventData ev );
	void SpectateServer ( struct FEventData ev );
	void OnServerListItemPress ( struct FEventData ev );
	void OnPingHeaderPress ( struct FEventData ev );
	void OnPlayersHeaderPress ( struct FEventData ev );
	void OnMapHeaderPress ( struct FEventData ev );
	void OnServerHeaderPress ( struct FEventData ev );
	void UpdateListDataProvider ( );
	void ClearBrowser ( int I );
	void ServerFilterChangedGameType ( );
	void OnFilterButtonPress ( struct FEventData ev );
	void OnRefreshButtonPress ( struct FEventData ev );
	int GetDesiredMatchType ( );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	void DoItUp ( );
	void OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful );
	void SubmitServerListQuery ( int PlayerIndex );
	void RefreshServerList ( int InPlayerIndex, int MaxResults );
	struct FString BuildJoinURL ( struct FString ResolvedConnectionURL );
	void UpdateServerCount ( );
	void PasswordOK ( struct FString pass );
	void ShowPasswordPrompt ( );
	void OnPasswordDialog_OK ( struct FEventData ev );
	struct FString StripInvalidPasswordCharacters ( struct FString PasswordString, struct FString InvalidChars );
	void PromptForServerPassword ( );
	void UpdateButtonStates ( );
	void ConditionalRefreshServerList ( int PlayerIndex );
	void OnGameTypeChanged ( int PlayerIndex );
	int GetGameTypeSearchProviderIndex ( struct FString GameClassName );
	void UpdateFilterButton ( );
	void Cleanup ( );
	void ForceLANOption ( );
	bool eventIsLoggedIn ( int ControllerId, unsigned long bRequireOnlineLogin );
	void ValidateServerType ( );
	int GetPlayerIndex ( );
	class ULocalPlayer* GetPlayerOwner ( int PlayerIndex );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewActivated ( );
	void OnReadAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	void GetGamma ( );
	void SetGamma ( );
	void SetVolumes ( );
	void HandleVolumes ( );
	void SaveOptions ( );
	void CheckResolution ( );
	void HandleResolutions ( );
	void ResetButtons ( );
	void SetButtons ( );
	void ResetKeys ( );
	void SetKeys ( );
	void InitList ( int Size );
	void ResetList ( int Size );
	void SendControllerToAS3 ( struct FString bName );
	void SendMouseToAS3 ( struct FString bName );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventFilterControllerInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool IsControllerInput ( struct FName ButtonName );
	struct FString ControllerConvertString ( struct FString Str );
	void PopulateButtonBindings ( );
	struct FString ConvertString ( struct FString Str );
	void PopulateKeyBindings ( );
	void LoadOptions ( );
	void ReadAchievementStatsComplete ( unsigned long bWasSuccessful );
	void PopulateAchievements ( );
	void Init ( class ULocalPlayer* LocPlay );
	void ExitGame ( struct FEventData ev );
	void OnJoinGameKeyButtonPress ( struct FEventData ev );
	bool Start ( unsigned long StartPaused );
};

UClass* USGS_DBMainMenu::pClassPointer = NULL;

// Class SGSOrion.SGS_GameDinoAttack
// 0x0000 (0x05B4 - 0x05B4)
class ASGS_GameDinoAttack : public ASGS_Game
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53567 ];

		return pClassPointer;
	};

	bool CheckMaxLives ( class APlayerReplicationInfo* Scorer );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
};

UClass* ASGS_GameDinoAttack::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_M40
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_M40 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53584 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_M40::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_TREK12
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_TREK12 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53585 ];

		return pClassPointer;
	};

	void InstantFire ( );
	struct FRotator AddSpread ( struct FRotator BaseAim );
};

UClass* ASGS_Weap_TREK12::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_MX4
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_MX4 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53586 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_MX4::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_RNC44
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_RNC44 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53587 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_RNC44::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_TREK79
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_TREK79 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53588 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_TREK79::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_TREK22
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_TREK22 : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53589 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_TREK22::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_EnergyCarbine
// 0x0018 (0x0820 - 0x0808)
class ASGS_Weap_EnergyCarbine : public ASGWeapon
{
public:
	class AUTProj_Shockball*                           ComboTarget;                                      		// 0x0808 (0x0004) [0x0000000000000000]              
	unsigned long                                      bRegisterTarget : 1;                              		// 0x080C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWaitForCombo : 1;                                		// 0x080C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bWasACombo : 1;                                   		// 0x080C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     ComboStart;                                       		// 0x0810 (0x000C) [0x0000000000000000]              
	int                                                CurrentPath;                                      		// 0x081C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53590 ];

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

UClass* ASGS_Weap_EnergyCarbine::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_RocketLauncher
// 0x0154 (0x095C - 0x0808)
class ASGS_Weap_RocketLauncher : public ASGWeapon
{
public:
	unsigned char                                      LoadedFireMode;                                   		// 0x0808 (0x0001) [0x0000000000000000]              
	class UClass*                                      SeekingRocketClass;                               		// 0x080C (0x0004) [0x0000000000000000]              
	class UClass*                                      LoadedRocketClass;                                		// 0x0810 (0x0004) [0x0000000000000000]              
	class UClass*                                      GrenadeClass;                                     		// 0x0814 (0x0004) [0x0000000000000000]              
	int                                                GrenadeSpreadDist;                                		// 0x0818 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   AltFireModeChangeSound;                           		// 0x081C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   RocketLoadedSound;                                		// 0x0820 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   GrenadeFireSound;                                 		// 0x0824 (0x0004) [0x0000000000000000]              
	class UUDKSkeletalMeshComponent*                   SkeletonFirstPersonMesh;                          		// 0x0828 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bIsAnyAmmoHidden : 1;                             		// 0x082C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockedOnTarget : 1;                              		// 0x082C (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      bTargetLockingActive : 1;                         		// 0x082C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LockCheckTime;                                    		// 0x0830 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockRange;                                        		// 0x0834 (0x0004) [0x0000000000000000]              
	float                                              LockAcquireTime;                                  		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockTolerance;                                    		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      LockedTarget;                                     		// 0x0840 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class APlayerReplicationInfo*                      LockedTargetPRI;                                  		// 0x0844 (0x0004) [0x0000000000000000]              
	class AActor*                                      PendingLockedTarget;                              		// 0x0848 (0x0004) [0x0000000000000000]              
	float                                              LastLockedOnTime;                                 		// 0x084C (0x0004) [0x0000000000000000]              
	float                                              PendingLockedTargetTime;                          		// 0x0850 (0x0004) [0x0000000000000000]              
	float                                              LastValidTargetTime;                              		// 0x0854 (0x0004) [0x0000000000000000]              
	float                                              LockAim;                                          		// 0x0858 (0x0004) [0x0000000000000000]              
	float                                              ConsoleLockAim;                                   		// 0x085C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LockAcquiredSound;                                		// 0x0860 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LockLostSound;                                    		// 0x0864 (0x0004) [0x0000000000000000]              
	float                                              LastTargetLockCheckTime;                          		// 0x0868 (0x0004) [0x0000000000000000]              
	int                                                LoadedShotCount;                                  		// 0x086C (0x0004) [0x0000000000000000]              
	int                                                MaxLoadCount;                                     		// 0x0870 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponLoadedSnd;                                  		// 0x0874 (0x0004) [0x0000000000000000]              
	TArray< float >                                    AltFireQueueTimes;                                		// 0x0878 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    AltFireLaunchTimes;                               		// 0x0884 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    AltFireEndTimes;                                  		// 0x0890 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         AltFireSndQue;                                    		// 0x089C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             MuzzleFlashSocketList;                            		// 0x08A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUTParticleSystemComponent* >        MuzzleFlashPSCList;                               		// 0x08B4 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	int                                                SpreadDist;                                       		// 0x08C0 (0x0004) [0x0000000000000000]              
	float                                              GracePeriod;                                      		// 0x08C4 (0x0004) [0x0000000000000000]              
	float                                              WaitToFirePct;                                    		// 0x08C8 (0x0004) [0x0000000000000000]              
	struct FString                                     GrenadeString;                                    		// 0x08CC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SpiralString;                                     		// 0x08D8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FTextureCoordinates                         LoadedIconCoords[ 0x3 ];                          		// 0x08E4 (0x0030) [0x0000000000000000]              
	struct FName                                       LoadUpAnimList[ 0x3 ];                            		// 0x0914 (0x0018) [0x0000000000000000]              
	struct FName                                       WeaponAltFireLaunch[ 0x3 ];                       		// 0x092C (0x0018) [0x0000000000000000]              
	struct FName                                       WeaponAltFireLaunchEnd[ 0x3 ];                    		// 0x0944 (0x0018) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53591 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	int AddAmmo ( int Amount );
	void UpdateAmmoVisibility ( );
	void HideRocket ( struct FName RocketName, unsigned long ShouldHide );
	void HideRocketAmmo ( );
	void PlayFiringSound ( );
	class UClass* GetProjectileClass ( );
	class AProjectile* ProjectileFire ( );
	void FireLoad ( );
	void WeaponFireLoad ( );
	int GetSpreadDist ( );
	unsigned char BestMode ( );
	float GetAIRating ( );
	float SuggestAttackStyle ( );
	void DrawLFMData ( class AHUD* HUD );
	void eventCauseMuzzleFlash ( );
	void DetachMuzzleFlash ( );
	void AttachMuzzleFlash ( );
	void eventCauseMuzzleFlashLight ( );
	void eventStopMuzzleFlash ( );
	void eventMuzzleFlashTimer ( );
	void ActiveRenderOverlays ( class AHUD* H );
	void eventDestroyed ( );
	void CheckTargetLock ( );
	void eventTick ( float DeltaTime );
	bool CanLockOnTo ( class AActor* TA );
	void AdjustLockTarget ( class AActor* NewLockTarget );
	void FireAmmunition ( );
	void GetWeaponDebug ( TArray< struct FString >* DebugInfo );
	float GetFireInterval ( unsigned char FireModeNum );
	void AdjustWeaponTimingForConsole ( );
};

UClass* ASGS_Weap_RocketLauncher::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_LaserRifle
// 0x0010 (0x0818 - 0x0808)
class ASGS_Weap_LaserRifle : public ASGWeapon
{
public:
	float                                              ChargeTimer;                                      		// 0x0808 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXCharge;                                         		// 0x080C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    FXChargeComp;                                     		// 0x0810 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAudioComponent*                             AudioCmp;                                         		// 0x0814 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53592 ];

		return pClassPointer;
	};

	void PlayChargingSound ( class USoundCue* Sound );
	void BeginFire ( unsigned char FireModeNum );
};

UClass* ASGS_Weap_LaserRifle::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_GrenadeCAR
// 0x0000 (0x081C - 0x081C)
class ASGS_Weap_GrenadeCAR : public ASGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53593 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
	void PlayThirdPersonGrenadeThrow ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void PostBeginPlay ( );
	void ExplodeInHands ( );
	void Activate ( );
};

UClass* ASGS_Weap_GrenadeCAR::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_SmokeGrenade
// 0x0000 (0x081C - 0x081C)
class ASGS_Weap_SmokeGrenade : public ASGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53594 ];

		return pClassPointer;
	};

	void PlayThirdPersonGrenadeThrow ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void ExplodeInHands ( );
	void Activate ( );
};

UClass* ASGS_Weap_SmokeGrenade::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_EMPGrenade
// 0x0000 (0x081C - 0x081C)
class ASGS_Weap_EMPGrenade : public ASGWeap_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53595 ];

		return pClassPointer;
	};

	void PlayThirdPersonGrenadeThrow ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void ExplodeInHands ( );
	void Activate ( );
};

UClass* ASGS_Weap_EMPGrenade::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle_Griffin
// 0x0048 (0x0C54 - 0x0C0C)
class ASGS_Vehicle_Griffin : public ASGS_Vehicle
{
public:
	float                                              JumpForceMag;                                     		// 0x0C0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxJumpZVel;                                      		// 0x0C10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpCheckTraceDist;                               		// 0x0C14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpDelay;                                        		// 0x0C18 (0x0004) [0x0000000000000000]              
	float                                              LastJumpTime;                                     		// 0x0C1C (0x0004) [0x0000000000000000]              
	float                                              DuckForceMag;                                     		// 0x0C20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPressingAltFire : 1;                             		// 0x0C24 (0x0004) [0x0000000000000000] [0x00000001] 
	class USoundCue*                                   JumpSound;                                        		// 0x0C28 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DuckSound;                                        		// 0x0C2C (0x0004) [0x0000000000000000]              
	float                                              BladeBlur;                                        		// 0x0C30 (0x0004) [0x0000000000000000]              
	float                                              DesiredBladeBlur;                                 		// 0x0C34 (0x0004) [0x0000000000000000]              
	int                                                FanEffectIndex;                                   		// 0x0C38 (0x0004) [0x0000000000000000]              
	struct FName                                       FanEffectParameterName;                           		// 0x0C3C (0x0008) [0x0000000000000000]              
	struct FName                                       FlameJetEffectParameterName;                      		// 0x0C44 (0x0008) [0x0000000000000000]              
	float                                              FlameJetValue;                                    		// 0x0C4C (0x0004) [0x0000000000000000]              
	float                                              DesiredFlameJetValue;                             		// 0x0C50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53603 ];

		return pClassPointer;
	};

	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void BlowupVehicle ( );
	void DrivingStatusChanged ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void eventMantaDuckEffect ( );
	void eventMantaJumpEffect ( );
	void InitializeEffects ( );
	bool RecommendCharge ( class AUTBot* B, class APawn* Enemy );
	bool TooCloseToAttack ( class AActor* Other );
	bool ShouldClamp ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	float GetChargePower ( );
	void eventReplicatedEvent ( struct FName VarName );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void IncomingMissile ( class AProjectile* P );
	bool Dodge ( unsigned char DoubleClickMove );
	unsigned char ChooseFireMode ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	bool OverrideEndFire ( unsigned char FireModeNum );
	bool OverrideBeginFire ( unsigned char FireModeNum );
	bool DriverEnter ( class APawn* P );
	bool CanBeBaseForPawn ( class APawn* aPawn );
	void eventTick ( float DeltaSeconds );
	struct FVector GetCameraStart ( int SeatIndex );
	struct FVector GetCameraFocus ( int SeatIndex );
};

UClass* ASGS_Vehicle_Griffin::pClassPointer = NULL;

// Class SGSOrion.SGS_RadioMessage
// 0x0A58 (0x0ABC - 0x0064)
class USGS_RadioMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              CarrierAssaultRadio[ 0xBC ];                      		// 0x0064 (0x02F0) [0x0000000000000000]              
	class USoundNodeWave*                              CarrierReconRadio[ 0xD9 ];                        		// 0x0354 (0x0364) [0x0000000000000000]              
	class USoundNodeWave*                              CarrierSupportRadio[ 0x101 ];                     		// 0x06B8 (0x0404) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53618 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_RadioMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Dino_TRex
// 0x0000 (0x03A4 - 0x03A4)
class USGS_FamilyInfo_Dino_TRex : public USGS_FamilyInfo_Dino
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53623 ];

		return pClassPointer;
	};

	void DinoWhatToDoNext ( class ASGS_Controller_Dino* dino );
};

UClass* USGS_FamilyInfo_Dino_TRex::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Dino_Raptor
// 0x0000 (0x03A4 - 0x03A4)
class USGS_FamilyInfo_Dino_Raptor : public USGS_FamilyInfo_Dino
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53624 ];

		return pClassPointer;
	};

	void DinoWhatToDoNext ( class ASGS_Controller_Dino* dino );
};

UClass* USGS_FamilyInfo_Dino_Raptor::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Dino_Spinosaurus
// 0x0000 (0x03A4 - 0x03A4)
class USGS_FamilyInfo_Dino_Spinosaurus : public USGS_FamilyInfo_Dino
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53625 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Dino_Spinosaurus::pClassPointer = NULL;

// Class SGSOrion.SGS_StartupMessage
// 0x0000 (0x00D0 - 0x00D0)
class USGS_StartupMessage : public UUTStartupMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53678 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_StartupMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_GameMessage
// 0x0000 (0x00A4 - 0x00A4)
class USGS_GameMessage : public UUTTeamGameMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53682 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_GameMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_WeaponKillRewardMessage
// 0x0000 (0x0084 - 0x0084)
class USGS_WeaponKillRewardMessage : public UUTWeaponKillRewardMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53684 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_WeaponKillRewardMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_SceneCaptureActor
// 0x0000 (0x01D0 - 0x01D0)
class ASGS_SceneCaptureActor : public ASceneCapture2DActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53877 ];

		return pClassPointer;
	};

};

UClass* ASGS_SceneCaptureActor::pClassPointer = NULL;

// Class SGSOrion.SGS_ForceFeedbackManager
// 0x0000 (0x0054 - 0x0054)
class USGS_ForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53894 ];

		return pClassPointer;
	};

};

UClass* USGS_ForceFeedbackManager::pClassPointer = NULL;

// Class SGSOrion.SGS_GeneratorMessage
// 0x0000 (0x0064 - 0x0064)
class USGS_GeneratorMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53933 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_GeneratorMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_PlayerInput
// 0x0000 (0x04A4 - 0x04A4)
class USGS_PlayerInput : public USGPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53983 ];

		return pClassPointer;
	};

	void XBoxNextWeapon ( );
	void T ( );
	void XBoxWeaponSelect ( );
	void XBoxReload ( );
	void XBoxUse ( );
	void GetRollDirection ( );
	void Duck ( );
	void UnDuck ( );
	void FinishMelee ( );
	void DoMelee ( );
	void HideTeamInfo ( );
	void ShowTeamInfo ( );
	void RequestClassSelection ( );
	void RequestTeamSelection ( );
	void ChangeFireMode ( );
	void StopAltFire ( unsigned char FireModeNum );
	void StartAltFire ( unsigned char FireModeNum );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void ReleaseBar ( );
	void Jump ( );
	void XBoxReleaseBar ( );
	void XboxJump ( );
	void DeactivateSkill ( );
	void SGSRemoveBind ( struct FString Command, struct FName* BindName );
	void SGSSetButton ( struct FString Command, struct FName* BindName );
	void SGSSetBind ( struct FString Command, struct FName* BindName );
	void ActivateSkill ( );
	void WeaponReload ( );
	void StopRunning ( );
	void Run ( );
	void XBoxStopRunning ( );
	void XBoxRun ( );
	void StopPTT ( );
	void PTT ( );
};

UClass* USGS_PlayerInput::pClassPointer = NULL;

// Class SGSOrion.SGS_CTFBase_Blue
// 0x0000 (0x0444 - 0x0444)
class ASGS_CTFBase_Blue : public AUTCTFBlueFlagBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54239 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ASGS_CTFBase_Blue::pClassPointer = NULL;

// Class SGSOrion.SGS_CTFFlag_Blue
// 0x0000 (0x0328 - 0x0328)
class ASGS_CTFFlag_Blue : public AUTCTFBlueFlag
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54247 ];

		return pClassPointer;
	};

	void Score ( );
	void Drop ( class AController* Killer );
	void SetHolder ( class AController* C );
	void LogDropped ( class AController* EventInstigator );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_CTFFlag_Blue::pClassPointer = NULL;

// Class SGSOrion.SGS_CTFMessage
// 0x0030 (0x013C - 0x010C)
class USGS_CTFMessage : public UUTCarriedObjectMessage
{
public:
	class USoundNodeWave*                              PersonalSounds[ 0xC ];                            		// 0x010C (0x0030) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54248 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
};

UClass* USGS_CTFMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_CTFBase_Red
// 0x0000 (0x0444 - 0x0444)
class ASGS_CTFBase_Red : public AUTCTFRedFlagBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54259 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ASGS_CTFBase_Red::pClassPointer = NULL;

// Class SGSOrion.SGS_CTFFlag_Red
// 0x0000 (0x0328 - 0x0328)
class ASGS_CTFFlag_Red : public AUTCTFRedFlag
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54267 ];

		return pClassPointer;
	};

	void Score ( );
	void Drop ( class AController* Killer );
	void SetHolder ( class AController* C );
	void LogDropped ( class AController* EventInstigator );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_CTFFlag_Red::pClassPointer = NULL;

// Class SGSOrion.SGS_LastSecondMessage
// 0x0000 (0x007C - 0x007C)
class USGS_LastSecondMessage : public UUTLastSecondMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54558 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
};

UClass* USGS_LastSecondMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_TeamScoreMessage
// 0x0000 (0x00CC - 0x00CC)
class USGS_TeamScoreMessage : public UUTTeamScoreMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54710 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_TeamScoreMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_DataStore_GameSearchCTF
// 0x0000 (0x00A8 - 0x00A8)
class USGS_DataStore_GameSearchCTF : public UUTDataStore_GameSearchDM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54802 ];

		return pClassPointer;
	};

};

UClass* USGS_DataStore_GameSearchCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_GameSettingsCTF
// 0x0000 (0x00C0 - 0x00C0)
class USGS_GameSettingsCTF : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54804 ];

		return pClassPointer;
	};

};

UClass* USGS_GameSettingsCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_DataStore_GameSearchDM
// 0x0000 (0x00A8 - 0x00A8)
class USGS_DataStore_GameSearchDM : public UUTDataStore_GameSearchDM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54805 ];

		return pClassPointer;
	};

};

UClass* USGS_DataStore_GameSearchDM::pClassPointer = NULL;

// Class SGSOrion.SGS_GameSearchCTF
// 0x0000 (0x0100 - 0x0100)
class USGS_GameSearchCTF : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54807 ];

		return pClassPointer;
	};

};

UClass* USGS_GameSearchCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_View
// 0x000C (0x0088 - 0x007C)
class USGS_GFxFrontEnd_View : public UGFxUIView
{
public:
	class USGS_GFxFrontEnd*                            MenuManager;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	struct FName                                       ViewName;                                         		// 0x0080 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55049 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnEscapeKeyPress ( );
	void MoveBackImpl ( );
	void Select_Back ( struct FEventData ev );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnViewActivated ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_View::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_Dialog
// 0x0020 (0x00A8 - 0x0088)
class USGS_GFxFrontEnd_Dialog : public USGS_GFxFrontEnd_View
{
public:
	class UGFxObject*                                  DialogMC;                                         		// 0x0088 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleTxt;                                         		// 0x008C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InfoTxt;                                          		// 0x0090 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BackBtn;                                          		// 0x0094 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AcceptBtn;                                        		// 0x0098 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __AcceptDelegate__Delegate;                       		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55048 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void Select_Back ( struct FEventData ev );
	void SetBackButton_OnPress ( struct FScriptDelegate EventListener );
	void SetBackButton ( class UGFxObject* InBackButton );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void AcceptDelegate ( struct FEventData ev );
};

UClass* USGS_GFxFrontEnd_Dialog::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_PasswordDialog
// 0x000C (0x00B4 - 0x00A8)
class USGS_GFxFrontEnd_PasswordDialog : public USGS_GFxFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              PasswordRendererMC;                               		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PasswordTextField;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinBtn;                                          		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55047 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void ClearPasswordRenderer ( );
	struct FString GetPassword ( );
	void SetOKButtonListener ( struct FScriptDelegate DelegateListener );
	void SetBackButtonListener ( struct FScriptDelegate DelegateListener );
	void DisableSubComponents ( unsigned long bEnableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* USGS_GFxFrontEnd_PasswordDialog::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_Screen
// 0x0054 (0x00DC - 0x0088)
class USGS_GFxFrontEnd_Screen : public USGS_GFxFrontEnd_View
{
public:
	struct FString                                     ViewTitle;                                        		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              BackBtn;                                          		// 0x0094 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleMC;                                          		// 0x0098 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FooterMC;                                         		// 0x009C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LogoMC;                                           		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HelpTxt;                                          		// 0x00A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InfoTxt;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FString                                     AcceptButtonHelpText;                             		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelButtonHelpText;                             		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AcceptButtonImage;                                		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelButtonImage;                                		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55143 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void UpdateHelpButtonImages ( );
	void FocusIn_BackButton ( struct FEventData ev );
};

UClass* USGS_GFxFrontEnd_Screen::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_JoinGame
// 0x0090 (0x016C - 0x00DC)
class USGS_GFxFrontEnd_JoinGame : public USGS_GFxFrontEnd_Screen
{
public:
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                  		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTDataStore_GameSearchDM*                   SearchDMDataStore;                                		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FOnlineGameSearchResult >           ServerInfoList;                                   		// 0x00E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUTUIDataStore_MenuItems*                    MenuItemDataStore;                                		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineSubsystem*                            OnlineSub;                                        		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x00FC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0100 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bGametypeOutdated : 1;                            		// 0x0104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSpectate : 1;                                    		// 0x0104 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIssuedInitialQuery : 1;                          		// 0x0104 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bQueryDialogShowing : 1;                          		// 0x0104 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bJoinDialogShowing : 1;                           		// 0x0104 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bProcessingJoin : 1;                              		// 0x0104 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bCtrlPressed : 1;                                 		// 0x0104 (0x0004) [0x0000000000000000] [0x00000040] 
	struct FName                                       SearchDSName;                                     		// 0x0108 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class USGS_GFxFrontEnd_PasswordDialog*             PasswordDialog;                                   		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USGS_GFxFrontEnd_JoinDialog*                 JoinDialogMC;                                     		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      QueryCompletionAction;                            		// 0x0118 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     ServerPassword;                                   		// 0x011C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LastServerAdded;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x012C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerListMC;                                     		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              RefreshBtn;                                       		// 0x0134 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeaderBarMC;                                      		// 0x0138 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FlagsHeaderBtn;                                   		// 0x013C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerHeaderBtn;                                  		// 0x0140 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MapHeaderBtn;                                     		// 0x0144 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayersHeaderBtn;                                 		// 0x0148 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PingHeaderBtn;                                    		// 0x014C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FilterMatchTypeTxt;                               		// 0x0150 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FilterGameModeTxt;                                		// 0x0154 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatusTxt;                                        		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LoadingTickerMC;                                  		// 0x015C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerCountTxt;                                   		// 0x0160 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterBtn;                                        		// 0x0164 (0x0004) [0x0000000000000000]              
	int                                                SelectedIndex;                                    		// 0x0168 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55142 ];

		return pClassPointer;
	};

	bool OnFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void NotifyGameTypeChanged ( );
	void OnCancelSearchComplete ( unsigned long bWasSuccessful );
	void SetRefreshing ( unsigned long IsRefreshing );
	void CancelQuery ( unsigned char DesiredCancelAction );
	bool AllowJoinServer ( );
	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	void ProcessJoin ( );
	void JoinServer ( );
	void JoinServerClikListener ( struct FEventData ev );
	void SpectateServer ( struct FEventData ev );
	void OnServerListItemPress ( struct FEventData ev );
	void OnPingHeaderPress ( struct FEventData ev );
	void OnPlayersHeaderPress ( struct FEventData ev );
	void OnMapHeaderPress ( struct FEventData ev );
	void OnServerHeaderPress ( struct FEventData ev );
	void UpdateListDataProvider ( );
	void ServerFilterChangedGameType ( );
	void OnFilterButtonPress ( struct FEventData ev );
	void OnRefreshButtonPress ( struct FEventData ev );
	int GetDesiredMatchType ( );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	void OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful );
	void SubmitServerListQuery ( int PlayerIndex );
	void RefreshServerList ( int InPlayerIndex, int MaxResults );
	struct FString BuildJoinURL ( struct FString ResolvedConnectionURL );
	void UpdateServerCount ( );
	void OnPasswordDialog_OK ( struct FEventData ev );
	struct FString StripInvalidPasswordCharacters ( struct FString PasswordString, struct FString InvalidChars );
	void PromptForServerPassword ( );
	void UpdateButtonStates ( );
	void UseLANMode ( );
	void ConditionalRefreshServerList ( int PlayerIndex );
	void OnGameTypeChanged ( int PlayerIndex );
	int GetGameTypeSearchProviderIndex ( struct FString GameClassName );
	void UpdateFilterButton ( );
	void Cleanup ( );
	void ForceLANOption ( int PlayerIndex );
	void ValidateServerType ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_JoinGame::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_Mutators
// 0x0040 (0x011C - 0x00DC)
class USGS_GFxFrontEnd_Mutators : public USGS_GFxFrontEnd_Screen
{
public:
	TArray< class UUTUIDataProvider_Mutator* >         AllMutatorsList;                                  		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUTUIDataProvider_Mutator* >         AvailableMutatorList;                             		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                    		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< int >                                      EnabledList;                                      		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x0104 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0108 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x010C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ConfigListMC;                                     		// 0x0110 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ConfigListDataProvider;                           		// 0x0114 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFirstUpdateAfterActivation : 1;                  		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55163 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetConfigList ( class UGFxObject* ConfigList );
	void SetList ( class UGFxObject* List );
	bool IsCurrentMutatorConfigurable ( );
	void ApplyGameModeFilter ( );
	int GetNumEnabledMutators ( );
	struct FString GetEnabledMutators ( );
	void AddMutatorAndFilterList ( int NewMutator );
	void SetMutatorEnabled ( int MutatorId );
	void UpdateConfigListDataProvider ( );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	unsigned char FindMutatorIndexByClass ( struct FString MutatorClass );
	void OnListItemPress ( struct FEventData ev );
	void PlayOpenAnimation ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void SortAllMutatorsBasedOnOfficialArray ( );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_Mutators::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_JoinDialog
// 0x0010 (0x00B8 - 0x00A8)
class USGS_GFxFrontEnd_JoinDialog : public USGS_GFxFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              ServerInfoListMC;                                 		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MutatorListMC;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinBtn;                                          		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SpectateBtn;                                      		// 0x00B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55261 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetSpectateButtonPress ( struct FScriptDelegate SpectateButtonListener );
	void SetJoinButtonPress ( struct FScriptDelegate JoinButtonListener );
	void PopulateServerInfo ( class UOnlineGameSettings* GameSettings );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* USGS_GFxFrontEnd_JoinDialog::pClassPointer = NULL;

// Class SGSOrion.SGS_DeathMessage
// 0x0000 (0x0080 - 0x0080)
class USGS_DeathMessage : public UUTDeathMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55398 ];

		return pClassPointer;
	};

	void SuperClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_DeathMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_KillerMessage
// 0x0054 (0x010C - 0x00B8)
class USGS_KillerMessage : public UUTKillerMessage
{
public:
	struct FString                                     SGSYouKilled;                                     		// 0x00B8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SGSYouKilledTrailer;                              		// 0x00C4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SGSYouTeamKilled;                                 		// 0x00D0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SGSYouTeamKilledTrailer;                          		// 0x00DC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SGSOtherKilledPrefix;                             		// 0x00E8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SGSOtherKilled;                                   		// 0x00F4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     SGSOtherKilledTrailer;                            		// 0x0100 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55405 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_KillerMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_MultiKillMessage
// 0x0220 (0x02D4 - 0x00B4)
class USGS_MultiKillMessage : public UUTMultiKillMessage
{
public:
	class USoundNodeWave*                              SGSKillSound[ 0x22 ];                             		// 0x00B4 (0x0088) [0x0000000000000000]              
	struct FString                                     SGSKillString[ 0x22 ];                            		// 0x013C (0x0198) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55408 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void SuperClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_MultiKillMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_VictimMessage
// 0x0000 (0x00C4 - 0x00C4)
class USGS_VictimMessage : public UUTVictimMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55409 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_VictimMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_DemoRecSpectator
// 0x000C (0x0A2C - 0x0A20)
class ASGS_DemoRecSpectator : public ASGS_Controller_Player
{
public:
	unsigned long                                      bFindPlayer : 1;                                  		// 0x0A20 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockRotationToViewTarget : 1;                    		// 0x0A20 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAutoSwitchPlayers : 1;                           		// 0x0A20 (0x0004) [0x0000000000000000] [0x00000004] 
	class APlayerReplicationInfo*                      MyRealViewTarget;                                 		// 0x0A24 (0x0004) [0x0000000000000000]              
	float                                              AutoSwitchPlayerInterval;                         		// 0x0A28 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55430 ];

		return pClassPointer;
	};

	void UpdateRotation ( float DeltaTime );
	void eventGetPlayerViewPoint ( struct FVector* CameraLocation, struct FRotator* CameraRotation );
	void Pause ( );
	bool SetPause ( unsigned long bPause, struct FScriptDelegate CanUnpauseDelegate );
	void ClientSetRealViewTarget ( class APlayerReplicationInfo* NewTarget );
	void ServerViewSelf ( struct FViewTargetTransitionParams TransitionParams );
	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams );
	void DemoViewNextPlayer ( );
	void ViewClass ( class UClass* aClass, unsigned long bQuiet, unsigned long bCheat );
	void Slomo ( float NewTimeDilation );
	void InitPlayerReplicationInfo ( );
	void eventReceivedPlayer ( );
	void eventPostBeginPlay ( );
};

UClass* ASGS_DemoRecSpectator::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoJumpPoint
// 0x0000 (0x01C8 - 0x01C8)
class ASGS_DinoJumpPoint : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55489 ];

		return pClassPointer;
	};

};

UClass* ASGS_DinoJumpPoint::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSpawn
// 0x0000 (0x02B0 - 0x02B0)
class ASGS_DinoSpawn : public APlayerStart
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55491 ];

		return pClassPointer;
	};

};

UClass* ASGS_DinoSpawn::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvival_SpawnDino
// 0x0018 (0x02C8 - 0x02B0)
class ASGS_DinoSurvival_SpawnDino : public APlayerStart
{
public:
	unsigned long                                      SpawnTrex : 1;                                    		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      SpawnRaptor : 1;                                  		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      SpawnRham : 1;                                    		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bInit : 1;                                        		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                BaseIndex;                                        		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumFailedAttempts;                                		// 0x02B8 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            DinosWaitingForSpawn;                             		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55494 ];

		return pClassPointer;
	};

	bool CanSpawn ( class UClass* Family );
	bool ReallySpawnDino ( class UClass* Family );
	bool SpawnDino ( class UClass* Family );
};

UClass* ASGS_DinoSurvival_SpawnDino::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvival_SpawnPlayer
// 0x0004 (0x02B4 - 0x02B0)
class ASGS_DinoSurvival_SpawnPlayer : public APlayerStart
{
public:
	int                                                BaseIndex;                                        		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55521 ];

		return pClassPointer;
	};

};

UClass* ASGS_DinoSurvival_SpawnPlayer::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvivalBase
// 0x0010 (0x01D8 - 0x01C8)
class ASGS_DinoSurvivalBase : public AActor
{
public:
	struct FName                                       BaseName;                                         		// 0x01C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                BaseIndex;                                        		// 0x01D0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned long                                      bInit : 1;                                        		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      BaseComplete : 1;                                 		// 0x01D4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55525 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void RegisterHudActor ( );
	void eventPostBeginPlay ( );
};

UClass* ASGS_DinoSurvivalBase::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvivalBaseChangeMessage
// 0x0000 (0x0064 - 0x0064)
class USGS_DinoSurvivalBaseChangeMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55541 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_DinoSurvivalBaseChangeMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvivalMessage
// 0x0000 (0x0064 - 0x0064)
class USGS_DinoSurvivalMessage : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55556 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_DinoSurvivalMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvivalMessageHelper
// 0x0000 (0x0064 - 0x0064)
class USGS_DinoSurvivalMessageHelper : public UUTLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55571 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_DinoSurvivalMessageHelper::pClassPointer = NULL;

// Class SGSOrion.SGS_DinoSurvivalSettings
// 0x000C (0x01D4 - 0x01C8)
class ASGS_DinoSurvivalSettings : public AActor
{
public:
	TArray< struct FWaveInfo >                         DinosaurWaves;                                    		// 0x01C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55586 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* ASGS_DinoSurvivalSettings::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_CellRifle
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_CellRifle : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55596 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_CellRifle::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_CellSMG
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_CellSMG : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55600 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_CellSMG::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_CellSniper
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_CellSniper : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55604 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_CellSniper::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_CV10
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_CV10 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55608 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_CV10::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_EnergyCarbine
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_EnergyCarbine : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55612 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_EnergyCarbine::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_FNC30
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_FNC30 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55616 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_FNC30::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_LaserRifle
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_LaserRifle : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55620 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_LaserRifle::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_MechStomp
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_MechStomp : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55627 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_MechStomp::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_MX4
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_MX4 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55631 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_MX4::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaBolt
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaBolt : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55638 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaBolt::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaCarbine
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaCarbine : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55642 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaCarbine::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaLauncher
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaLauncher : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55646 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaLauncher::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaLMG
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaLMG : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55650 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaLMG::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaPistol
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaPistol : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55654 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaPistol::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaRifle
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaRifle : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55658 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaRifle::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaShotgun
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaShotgun : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55662 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaShotgun::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_PlasmaSMG
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_PlasmaSMG : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55666 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_PlasmaSMG::pClassPointer = NULL;

// Class SGSOrion.SGS_Message_VehicleKill
// 0x0000 (0x00E4 - 0x00E4)
class USGS_Message_VehicleKill : public UUTVehicleKillMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55689 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
};

UClass* USGS_Message_VehicleKill::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_RNC44
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_RNC44 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55692 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_RNC44::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_RocketLauncher
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_RocketLauncher : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55696 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_RocketLauncher::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_SteppedOn
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_SteppedOn : public UUTDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55700 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_SteppedOn::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_Trek12
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_Trek12 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55704 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_Trek12::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_Trek22
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_Trek22 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55708 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_Trek22::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_Trek79
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_Trek79 : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55712 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_Trek79::pClassPointer = NULL;

// Class SGSOrion.SGS_DmgType_Turret
// 0x0000 (0x012C - 0x012C)
class USGS_DmgType_Turret : public USGDmgType_Bullet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55716 ];

		return pClassPointer;
	};

};

UClass* USGS_DmgType_Turret::pClassPointer = NULL;

// Class SGSOrion.SGS_EvacuationPoint
// 0x0000 (0x01F4 - 0x01F4)
class ASGS_EvacuationPoint : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55720 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventPostBeginPlay ( );
};

UClass* ASGS_EvacuationPoint::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_OSOR
// 0x0050 (0x0858 - 0x0808)
class ASGS_Weap_OSOR : public ASGWeapon
{
public:
	float                                              HackDurationTime;                                 		// 0x0808 (0x0004) [0x0000000000000000]              
	class AActor*                                      CurrentTarget;                                    		// 0x080C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       Anim_Hack_Start;                                  		// 0x0810 (0x0008) [0x0000000000000000]              
	struct FName                                       Anim_Hack_Idle;                                   		// 0x0818 (0x0008) [0x0000000000000000]              
	struct FName                                       Anim_Hack_End;                                    		// 0x0820 (0x0008) [0x0000000000000000]              
	struct FName                                       Anim_ChargeFriendShield;                          		// 0x0828 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   Sound_Hacking;                                    		// 0x0830 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound_Hacked;                                     		// 0x0834 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound_CantUse;                                    		// 0x0838 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound_Charge_Idle;                                		// 0x083C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound_Charge_End;                                 		// 0x0840 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AudioCmp;                                         		// 0x0844 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              TeleportTime;                                     		// 0x0848 (0x0004) [0x0000000000000000]              
	float                                              LastTeleportTime;                                 		// 0x084C (0x0004) [0x0000000000000000]              
	float                                              fCharging;                                        		// 0x0850 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              LastErrorTime;                                    		// 0x0854 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55739 ];

		return pClassPointer;
	};

	void ConsumeAmmo ( unsigned char FireModeNum );
	void IncrementFlashCount ( );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void Hud_HideProgressBar ( );
	void Hud_ShowProgressBar ( float Time );
	void eventTick ( float DeltaTime );
	void FireAmmunition ( );
	void DoTeleport ( );
	bool FindFriendWithNoShield ( );
	bool FindLockDevice ( );
	void Activate ( );
	void Deactivate ( );
	void ReloadAmmo ( );
	void eventReplicatedEvent ( struct FName VarName );
	void StopAiming ( unsigned long bPlayAnim, unsigned long bPlaySound );
	void StartAiming ( unsigned long bPlayAnim, unsigned long bPlaySound );
};

UClass* ASGS_Weap_OSOR::pClassPointer = NULL;

// Class SGSOrion.SGS_PawnSoundGroup
// 0x0000 (0x00A8 - 0x00A8)
class USGS_PawnSoundGroup : public UUTPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55740 ];

		return pClassPointer;
	};

};

UClass* USGS_PawnSoundGroup::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_GrenadeALT
// 0x0000 (0x081C - 0x081C)
class ASGS_Weap_GrenadeALT : public ASGS_Weap_GrenadeCAR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55747 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_GrenadeALT::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellSMG
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_CellSMG : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55748 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellSMG::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellSniper
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_CellSniper : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55760 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellSniper::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaSMG
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_PlasmaSMG : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55761 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaSMG::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaShotgun
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_PlasmaShotgun : public ASGS_Weap_TREK12
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55767 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaShotgun::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaLMG
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_PlasmaLMG : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55768 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaLMG::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaPistol
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_PlasmaPistol : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55769 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaPistol::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_MedicGun
// 0x000C (0x0814 - 0x0808)
class ASGS_Weap_MedicGun : public ASGWeapon
{
public:
	class AActor*                                      HealingTarget;                                    		// 0x0808 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              AccumulativeError;                                		// 0x080C (0x0004) [0x0000000000000000]              
	float                                              HealingTime;                                      		// 0x0810 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55771 ];

		return pClassPointer;
	};

	bool ShouldRefire ( );
	void Think ( float DeltaTime );
	void HandleFinishedFiring ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void StopAiming ( unsigned long bPlayAnim, unsigned long bPlaySound );
	void StartAiming ( unsigned long bPlayAnim, unsigned long bPlaySound );
};

UClass* ASGS_Weap_MedicGun::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_MedicGunAlt
// 0x0000 (0x0814 - 0x0814)
class ASGS_Weap_MedicGunAlt : public ASGS_Weap_MedicGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55770 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_MedicGunAlt::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CV10_Silenced
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_CV10_Silenced : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55791 ];

		return pClassPointer;
	};

	void UpdateHealEffects ( );
	void Tick ( float DeltaTime );
	void PostBeginPlay ( );
};

UClass* ASGS_Weap_CV10_Silenced::pClassPointer = NULL;

// Class SGSOrion.SGS_Pawn_Dino
// 0x0000 (0x0BF4 - 0x0BF4)
class ASGS_Pawn_Dino : public ASGS_Pawn_Soldier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55850 ];

		return pClassPointer;
	};

	bool IsDino ( );
};

UClass* ASGS_Pawn_Dino::pClassPointer = NULL;

// Class SGSOrion.SGS_PawnSoundGroup_TRex
// 0x0000 (0x00A8 - 0x00A8)
class USGS_PawnSoundGroup_TRex : public UUTPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55868 ];

		return pClassPointer;
	};

	void PlayLandSound ( class APawn* P );
};

UClass* USGS_PawnSoundGroup_TRex::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Mech
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Mech : public USGS_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55883 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Mech::pClassPointer = NULL;

// Class SGSOrion.SGS_FamilyInfo_Mech_Cobra
// 0x0000 (0x0218 - 0x0218)
class USGS_FamilyInfo_Mech_Cobra : public USGS_FamilyInfo_Mech
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55885 ];

		return pClassPointer;
	};

};

UClass* USGS_FamilyInfo_Mech_Cobra::pClassPointer = NULL;

// Class SGSOrion.SGS_FirstBloodMessage
// 0x0000 (0x0070 - 0x0070)
class USGS_FirstBloodMessage : public UUTFirstBloodMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55913 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
};

UClass* USGS_FirstBloodMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_GameMenu
// 0x0000 (0x05B4 - 0x05B4)
class ASGS_GameMenu : public ASGS_Game
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55954 ];

		return pClassPointer;
	};

	void GenericPlayerInitialization ( class AController* C );
};

UClass* ASGS_GameMenu::pClassPointer = NULL;

// Class SGSOrion.SGS_TeamPlayerStart
// 0x0004 (0x02C4 - 0x02C0)
class ASGS_TeamPlayerStart : public AUTTeamPlayerStart
{
public:
	class ASGS_CapturePoint*                           CapturePoint;                                     		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56000 ];

		return pClassPointer;
	};

};

UClass* ASGS_TeamPlayerStart::pClassPointer = NULL;

// Class SGSOrion.SGS_KillingSpreeMessage
// 0x0000 (0x0148 - 0x0148)
class USGS_KillingSpreeMessage : public UUTKillingSpreeMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56089 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_KillingSpreeMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_KillsRemainingMessage
// 0x0000 (0x0094 - 0x0094)
class USGS_KillsRemainingMessage : public UUTKillsRemainingMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56093 ];

		return pClassPointer;
	};

};

UClass* USGS_KillsRemainingMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_VictoryMessage
// 0x0000 (0x007C - 0x007C)
class USGS_VictoryMessage : public UUTVictoryMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56115 ];

		return pClassPointer;
	};

};

UClass* USGS_VictoryMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_GameMessageDB
// 0x0000 (0x0164 - 0x0164)
class USGS_GameMessageDB : public UGameMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56116 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_GameMessageDB::pClassPointer = NULL;

// Class SGSOrion.SGS_HudCarnage
// 0x0000 (0x0AD0 - 0x0AD0)
class ASGS_HudCarnage : public ASGS_HUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56148 ];

		return pClassPointer;
	};

	void TextPostRender ( );
};

UClass* ASGS_HudCarnage::pClassPointer = NULL;

// Class SGSOrion.SGS_GFXHudCTF
// 0x000C (0x04C8 - 0x04BC)
class USGS_GFXHudCTF : public USGS_GFXHud
{
public:
	class AUTCTFBase*                                  RedBase;                                          		// 0x04BC (0x0004) [0x0000000000000000]              
	class AUTCTFBase*                                  BlueBase;                                         		// 0x04C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DataProvider;                                     		// 0x04C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56213 ];

		return pClassPointer;
	};

	void UpdateObjectives ( );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USGS_GFXHudCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_TeamScoreMessageCTF
// 0x0000 (0x00CC - 0x00CC)
class USGS_TeamScoreMessageCTF : public UUTTeamScoreMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56214 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_TeamScoreMessageCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_SupplyCabinet
// 0x0018 (0x0228 - 0x0210)
class ASGS_SupplyCabinet : public ASGS_BuyStation
{
public:
	float                                              LastUseTime;                                      		// 0x0210 (0x0004) [0x0000000000000000]              
	int                                                SupplyState;                                      		// 0x0214 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class APawn*                                       LastSuppliedPawn;                                 		// 0x0218 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   Sound_Deny;                                       		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound_Use;                                        		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeBetweenUses;                                  		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56252 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	bool CanSupply ( class APawn* Pawn );
	void ClearSuppliedVar ( );
	bool Supply ( class APawn* Pawn );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_SupplyCabinet::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory
// 0x0008 (0x02EC - 0x02E4)
class ASGS_VehicleFactory : public AUTVehicleFactory
{
public:
	unsigned long                                      bHiddenVehicle : 1;                               		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                NumSpawned;                                       		// 0x02E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56351 ];

		return pClassPointer;
	};

};

UClass* ASGS_VehicleFactory::pClassPointer = NULL;

// Class SGSOrion.SGS_HudDinoSurvival
// 0x0000 (0x0AD0 - 0x0AD0)
class ASGS_HudDinoSurvival : public ASGS_HUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56405 ];

		return pClassPointer;
	};

	void TextRenderGameStatus ( );
};

UClass* ASGS_HudDinoSurvival::pClassPointer = NULL;

// Class SGSOrion.SGS_GameExplosionActor
// 0x0000 (0x0220 - 0x0220)
class ASGS_GameExplosionActor : public AGameExplosionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56406 ];

		return pClassPointer;
	};

};

UClass* ASGS_GameExplosionActor::pClassPointer = NULL;

// Class SGSOrion.SGS_GameRetroCTF
// 0x0000 (0x05BC - 0x05BC)
class ASGS_GameRetroCTF : public ASGS_GameCTF
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56564 ];

		return pClassPointer;
	};

};

UClass* ASGS_GameRetroCTF::pClassPointer = NULL;

// Class SGSOrion.SGS_GameTeamCarnage
// 0x0000 (0x05B4 - 0x05B4)
class ASGS_GameTeamCarnage : public ASGS_Game
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56829 ];

		return pClassPointer;
	};

};

UClass* ASGS_GameTeamCarnage::pClassPointer = NULL;

// Class SGSOrion.SGS_GameViewportClient
// 0x0000 (0x01A0 - 0x01A0)
class USGS_GameViewportClient : public UUTGameViewportClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56866 ];

		return pClassPointer;
	};

	void DrawTransition ( class UCanvas* Canvas );
	void NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title );
	void eventPostRender ( class UCanvas* Canvas );
	bool eventSGSHandleInputAxis ( int ControllerId, struct FName Key, float Delta, float DeltaTime, unsigned long bGamepad );
};

UClass* USGS_GameViewportClient::pClassPointer = NULL;

// Class SGSOrion.SGS_GameVital
// 0x0000 (0x05B4 - 0x05B4)
class ASGS_GameVital : public ASGS_Game
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56895 ];

		return pClassPointer;
	};

};

UClass* ASGS_GameVital::pClassPointer = NULL;

// Class SGSOrion.SGS_GarageVehicleSpawner
// 0x0000 (0x01C8 - 0x01C8)
class ASGS_GarageVehicleSpawner : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56899 ];

		return pClassPointer;
	};

};

UClass* ASGS_GarageVehicleSpawner::pClassPointer = NULL;

// Class SGSOrion.SGS_GfxBuyMenu
// 0x00AC (0x0214 - 0x0168)
class USGS_GfxBuyMenu : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SidearmsBtn;                                      		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SecondaryBtn;                                     		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PrimaryBtn;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GrenadesBtn;                                      		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UpgradesBtn;                                      		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CancelBtn;                                        		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SidearmItems[ 0x6 ];                              		// 0x0184 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  SecondaryItems[ 0x6 ];                            		// 0x019C (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  PrimaryItems[ 0x6 ];                              		// 0x01B4 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  GrenadeItems[ 0x6 ];                              		// 0x01CC (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  UpgradeItems[ 0x6 ];                              		// 0x01E4 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  ItemLists[ 0x5 ];                                 		// 0x01FC (0x0014) [0x0000000000000000]              
	int                                                BuyIndex;                                         		// 0x0210 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56918 ];

		return pClassPointer;
	};

	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventWidgetInit ( struct FString WidgetName, class UGFxObject* Widget, unsigned char Index );
	bool eventPlayMenuSound ( struct FString SoundName );
	bool eventWidgetInit2 ( struct FString WidgetName, struct FString ParentName, class UGFxObject* Widget );
	bool Start ( unsigned long StartPaused );
};

UClass* USGS_GfxBuyMenu::pClassPointer = NULL;

// Class SGSOrion.SGS_GfxBuyMenu_Barracks
// 0x00AC (0x0214 - 0x0168)
class USGS_GfxBuyMenu_Barracks : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SidearmsBtn;                                      		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SecondaryBtn;                                     		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PrimaryBtn;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GrenadesBtn;                                      		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UpgradesBtn;                                      		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CancelBtn;                                        		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SidearmItems[ 0x6 ];                              		// 0x0184 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  SecondaryItems[ 0x6 ];                            		// 0x019C (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  PrimaryItems[ 0x6 ];                              		// 0x01B4 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  GrenadeItems[ 0x6 ];                              		// 0x01CC (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  UpgradeItems[ 0x6 ];                              		// 0x01E4 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  ItemLists[ 0x5 ];                                 		// 0x01FC (0x0014) [0x0000000000000000]              
	int                                                BuyIndex;                                         		// 0x0210 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56964 ];

		return pClassPointer;
	};

	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventWidgetInit ( struct FString WidgetName, class UGFxObject* Widget );
	bool eventPlayMenuSound ( struct FString SoundName );
	bool eventWidgetInit2 ( struct FString WidgetName, struct FString ParentName, class UGFxObject* Widget );
	bool Start ( unsigned long StartPaused );
};

UClass* USGS_GfxBuyMenu_Barracks::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxBuyMenu_Garage
// 0x00AC (0x0214 - 0x0168)
class USGS_GFxBuyMenu_Garage : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SidearmsBtn;                                      		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SecondaryBtn;                                     		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PrimaryBtn;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GrenadesBtn;                                      		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UpgradesBtn;                                      		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CancelBtn;                                        		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SidearmItems[ 0x6 ];                              		// 0x0184 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  SecondaryItems[ 0x6 ];                            		// 0x019C (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  PrimaryItems[ 0x6 ];                              		// 0x01B4 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  GrenadeItems[ 0x6 ];                              		// 0x01CC (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  UpgradeItems[ 0x6 ];                              		// 0x01E4 (0x0018) [0x0000000000000000]              
	class UGFxObject*                                  ItemLists[ 0x5 ];                                 		// 0x01FC (0x0014) [0x0000000000000000]              
	int                                                BuyIndex;                                         		// 0x0210 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57004 ];

		return pClassPointer;
	};

	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool eventWidgetInit ( struct FString WidgetName, class UGFxObject* Widget );
	bool eventWidgetInit2 ( struct FString WidgetName, struct FString ParentName, class UGFxObject* Widget );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventPlayMenuSound ( struct FString SoundName );
	bool Start ( unsigned long StartPaused );
};

UClass* USGS_GFxBuyMenu_Garage::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxClassSelection
// 0x0004 (0x016C - 0x0168)
class USGS_GFxClassSelection : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57044 ];

		return pClassPointer;
	};

	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	bool eventWidgetInit ( struct FString WidgetName, class UGFxObject* Widget );
	bool eventPlayMenuSound ( struct FString SoundName );
	bool Start ( unsigned long StartPaused );
};

UClass* USGS_GFxClassSelection::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd
// 0x0078 (0x01E0 - 0x0168)
class USGS_GFxFrontEnd : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ManagerMC;                                        		// 0x016C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInitialized : 1;                                 		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	class USGS_GFxFrontEnd_MainMenu*                   MainMenuView;                                     		// 0x0174 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_InstantAction*              InstantActionView;                                		// 0x0178 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_Multiplayer*                MultiplayerView;                                  		// 0x017C (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_HostGame*                   HostGameView;                                     		// 0x0180 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_MapSelect*                  MapSelectView;                                    		// 0x0184 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_GameMode*                   GameModeView;                                     		// 0x0188 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_Mutators*                   MutatorsView;                                     		// 0x018C (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_Settings*                   SettingsView;                                     		// 0x0190 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_ServerSettings*             ServerSettingsView;                               		// 0x0194 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_JoinGame*                   JoinGameView;                                     		// 0x0198 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_InfoDialog*                 InfoDialog;                                       		// 0x019C (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_FilterDialog*               FilterDialog;                                     		// 0x01A0 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_JoinDialog*                 JoinDialog;                                       		// 0x01A4 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_ErrorDialog*                ErrorDialog;                                      		// 0x01A8 (0x0004) [0x0000000000000000]              
	class USGS_GFxFrontEnd_PasswordDialog*             PasswordDialog;                                   		// 0x01AC (0x0004) [0x0000000000000000]              
	TArray< struct USGS_GFxFrontEnd_FViewInfo >        ViewData;                                         		// 0x01B0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class USGS_GFxFrontEnd_View* >             ViewStack;                                        		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             LoadedViews;                                      		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EscapeDelegate__Delegate;                       		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57064 ];

		return pClassPointer;
	};

	bool FilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void DestroyDependantViews ( struct FName InViewName );
	void LoadDependantViews ( struct FName InViewName );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool CheckLinkConnectionAndError ( struct FString AlternateTitle, struct FString AlternateMessage );
	void PostWidgetInit ( );
	void ASShowCursor ( unsigned long bShowCursor );
	void ConfigureView ( class USGS_GFxFrontEnd_View* InView, struct FName WidgetName, struct FName WidgetPath );
	void UpdateViewLayout ( );
	class UGFxObject* PopViewStub ( );
	class UGFxObject* PopView ( );
	void ASSetSelectionFocus ( class UGFxObject* MovieClip );
	void SetSelectionFocus ( class UGFxObject* MovieClip );
	void PushDialogView ( class USGS_GFxFrontEnd_View* dialogView );
	void PushView ( class USGS_GFxFrontEnd_View* TargetView );
	bool IsViewAllowed ( class USGS_GFxFrontEnd_View* TargetView );
	void ConfigureTargetView ( class USGS_GFxFrontEnd_View* TargetView );
	void ConfigureTargetDialog ( class USGS_GFxFrontEnd_View* TargetDialog );
	class USGS_GFxFrontEnd_Dialog* SpawnDialog ( struct FName TargetDialogName, class USGS_GFxFrontEnd_Screen* ParentView );
	void PushViewByName ( struct FName TargetViewName, class USGS_GFxFrontEnd_Screen* ParentView );
	void SetEscapeDelegate ( struct FScriptDelegate InDelegate );
	bool IsViewLoaded ( struct FName InViewName );
	void LoadViewByName ( struct FName InViewName );
	void LoadView ( struct USGS_GFxFrontEnd_FViewInfo InViewInfo );
	void LoadViews ( );
	void ConfigFrontEnd ( );
	bool Start ( unsigned long StartPaused );
	void EscapeDelegate ( );
};

UClass* USGS_GFxFrontEnd::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_ErrorDialog
// 0x0000 (0x00A8 - 0x00A8)
class USGS_GFxFrontEnd_ErrorDialog : public USGS_GFxFrontEnd_Dialog
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57076 ];

		return pClassPointer;
	};

	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void SetButtonLabel ( struct FString ButtonLabel );
	void SetInfo ( struct FString Info );
	void SetTitle ( struct FString Title );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* USGS_GFxFrontEnd_ErrorDialog::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_FilterDialog
// 0x0038 (0x00E0 - 0x00A8)
class USGS_GFxFrontEnd_FilterDialog : public USGS_GFxFrontEnd_Dialog
{
public:
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
	class UUTDataStore_GameSearchDM*                   SearchDataStore;                                  		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterListMC;                                     		// 0x00B4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiltersHaveChanged : 1;                          		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  DataProvider;                                     		// 0x00BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NetworkTypeOptionItem;                            		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameTypeOptionItem;                               		// 0x00C4 (0x0004) [0x0000000000000000]              
	TArray< struct USGS_GFxFrontEnd_FilterDialog_FOption > ListOptions;                                      		// 0x00C8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSwitchedGameType__Delegate;                   		// 0x00D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57079 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void PushFilterListUpdate ( );
	void SetupListDataProvider ( );
	void SetFilterNetworkType ( unsigned long bLAN, unsigned long bSkipUIUpdate );
	void OnFilterList_OptionChanged ( struct FEventData ev );
	struct FString GetGameClassByFriendlyName ( struct FString FriendlyName );
	void ForceLANOption ( int PlayerIndex );
	void ValidateServerType ( );
	void SetBackButtonListener ( struct FScriptDelegate DelegateListener );
	void DisableSubComponents ( unsigned long bEnableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
	void OnSwitchedGameType ( );
};

UClass* USGS_GFxFrontEnd_FilterDialog::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_InfoDialog
// 0x0000 (0x00A8 - 0x00A8)
class USGS_GFxFrontEnd_InfoDialog : public USGS_GFxFrontEnd_Dialog
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57081 ];

		return pClassPointer;
	};

	void SetAcceptButton_OnPress ( struct FScriptDelegate EventListener );
	void SetBackButtonLabel ( struct FString Label );
	void SetAcceptButtonLabel ( struct FString Label );
	void SetInfo ( struct FString Info );
	void SetTitle ( struct FString Title );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewClosed ( );
};

UClass* USGS_GFxFrontEnd_InfoDialog::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_SettingsBase
// 0x0028 (0x0104 - 0x00DC)
class USGS_GFxFrontEnd_SettingsBase : public USGS_GFxFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                           		// 0x00DC (0x0004) [0x0000000000000000]              
	struct FString                                     SelectedOptionSet;                                		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_MenuOption* >      SettingsList;                                     		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57085 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	int FindPropertyIndexByName ( struct FString InPropertyName );
	void Select_BackImpl ( );
	void OnEscapeKeyPress ( );
	int FindLocalizedSettingIndexByName ( struct FString InSettingName );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnOptionChanged ( struct FEventData ev );
	void OnListChange ( struct FEventData ev );
	void SetList ( class UGFxObject* List );
	void SaveState ( );
	void Select_Back ( struct FEventData ev );
	void LoadDataFromStore ( );
	void SetSelectedOptionSet ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_SettingsBase::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_ServerSettings
// 0x0004 (0x0108 - 0x0104)
class USGS_GFxFrontEnd_ServerSettings : public USGS_GFxFrontEnd_SettingsBase
{
public:
	unsigned long                                      bDataChangedByReqs : 1;                           		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57084 ];

		return pClassPointer;
	};

	struct FString FindControlByUTClassName ( unsigned char UTUIControlClass );
	void PopulateOptionDataProviderForIndex ( int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex );
	void UpdateListDataProvider ( );
	void SaveState ( );
	void OnOptionChanged ( struct FEventData ev );
	void SetSelectedOptionSet ( );
};

UClass* USGS_GFxFrontEnd_ServerSettings::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_Settings
// 0x0000 (0x0104 - 0x0104)
class USGS_GFxFrontEnd_Settings : public USGS_GFxFrontEnd_SettingsBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57087 ];

		return pClassPointer;
	};

	void PopulateOptionDataProviderForIndex ( int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex );
	void UpdateListDataProvider ( );
	void SetSelectedOptionSet ( );
};

UClass* USGS_GFxFrontEnd_Settings::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_GameMode
// 0x003C (0x0118 - 0x00DC)
class USGS_GFxFrontEnd_GameMode : public USGS_GFxFrontEnd_Screen
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     GameMode;                                         		// 0x00E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x00F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x0100 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0104 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ImgScrollerMC;                                    		// 0x0108 (0x0004) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_GameModeInfo* >    GameModeList;                                     		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57090 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void ASSetList ( class UGFxObject* List );
	void SetImgScroller ( class UGFxClikWidget* InImgScroller );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void OnGameModeChange ( int SelectedIndex );
	void OnGameModeSelected ( struct FString InGameMode, struct FString InDefaultMap, struct FString InGameSettingsClass );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_GameMode::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_MapSelect
// 0x0020 (0x00FC - 0x00DC)
class USGS_GFxFrontEnd_MapSelect : public USGS_GFxFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                           		// 0x00DC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ImgScrollerMC;                                    		// 0x00E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_MapInfo* >         MapList;                                          		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastSelectedItem;                                 		// 0x00F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57092 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	struct FString GetMapFriendlyName ( struct FString Map );
	struct FString GetSelectedMap ( );
	void SetupMapCycle ( struct FString SelectedMap );
	struct FName GetCurrentGameMode ( );
	struct FString GetImageMarkupByMapName ( struct FString InMapName );
	void SetImgScroller ( class UGFxClikWidget* InImgScroller );
	void UpdateListDataProvider ( );
	void OnListItemPress ( struct FEventData ev );
	void SetList ( class UGFxObject* List );
	void OnMapList_ValueChanged ( struct FString InMapSelected, struct FString InMapImageSelected );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_MapSelect::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_LaunchGame
// 0x00A4 (0x0180 - 0x00DC)
class USGS_GFxFrontEnd_LaunchGame : public USGS_GFxFrontEnd_Screen
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                    		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     DefaultMapName;                                   		// 0x00E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultGameMode;                                  		// 0x00F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultGameModeSettings;                          		// 0x0100 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultMapImage;                                  		// 0x010C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     DefaultGameModePrefixes;                          		// 0x0118 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct USGS_GFxFrontEnd_LaunchGame_FOption > ListOptions;                                      		// 0x0124 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x0134 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x0138 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapImageMC;                                       		// 0x013C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapNameTxt;                                       		// 0x0140 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameTitleTxt;                                     		// 0x0144 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BotLvlTxt;                                        		// 0x0148 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  OpponentsTxt;                                     		// 0x014C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTxt;                                         		// 0x0150 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimeTxt;                                          		// 0x0154 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapTxt;                                           		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RespawnTxt;                                       		// 0x015C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MutatorsTxt;                                      		// 0x0160 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapLabelTxt;                                      		// 0x0164 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BotLvlLabelTxt;                                   		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  OpponentsLabelTxt;                                		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreLabelTxt;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimeLabelTxt;                                     		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RespawnLabelTxt;                                  		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MutatorsLabelTxt;                                 		// 0x017C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57095 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	struct FString GetGameModeFriendlyString ( struct FString InGameMode );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void UpdateGameSettingsPanel ( );
	void OnStartGame_Confirm ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_LaunchGame::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_HostGame
// 0x0000 (0x0180 - 0x0180)
class USGS_GFxFrontEnd_HostGame : public USGS_GFxFrontEnd_LaunchGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57094 ];

		return pClassPointer;
	};

	void OnStartGame_Confirm ( );
	void FinishStartDedicated ( );
	void OnGameCreated ( struct FName SessionName, unsigned long bWasSuccessful );
	void CreateOnlineGame ( int PlayerIndex );
	void SetupGameSettings ( );
	struct FString GenerateMutatorURLString ( );
	void ValidateServerType ( );
	struct FString StripInvalidPasswordCharacters ( struct FString PasswordString, struct FString InvalidChars );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
};

UClass* USGS_GFxFrontEnd_HostGame::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_Multiplayer
// 0x0018 (0x00F4 - 0x00DC)
class USGS_GFxFrontEnd_Multiplayer : public USGS_GFxFrontEnd_Screen
{
public:
	TArray< struct USGS_GFxFrontEnd_Multiplayer_FOption > ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57097 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void Select_HostGame ( );
	void Select_JoinGame ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_Multiplayer::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_InstantAction
// 0x0000 (0x0180 - 0x0180)
class USGS_GFxFrontEnd_InstantAction : public USGS_GFxFrontEnd_LaunchGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57099 ];

		return pClassPointer;
	};

	void OnStartGame_Confirm ( );
	void OnViewActivated ( );
};

UClass* USGS_GFxFrontEnd_InstantAction::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxFrontEnd_MainMenu
// 0x001D (0x00F9 - 0x00DC)
class USGS_GFxFrontEnd_MainMenu : public USGS_GFxFrontEnd_Screen
{
public:
	TArray< struct USGS_GFxFrontEnd_MainMenu_FOption > ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UserLabelTxt;                                     		// 0x00F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UserNameTxt;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned char                                      LastSelectedIndex;                                		// 0x00F8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57101 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnEscapeKeyPress ( );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void ExitDialog_SelectBack ( struct FEventData ev );
	void ExitDialog_SelectOK ( struct FEventData ev );
	void Select_ExitGame ( );
	void Select_Multiplayer ( );
	void Select_InstantAction ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* USGS_GFxFrontEnd_MainMenu::pClassPointer = NULL;

// Class SGSOrion.SGS_MechWeapon
// 0x00B0 (0x065C - 0x05AC)
class ASGS_MechWeapon : public AUTWeapon
{
public:
	class ASGS_MechPawn*                               MyMech;                                           		// 0x05AC (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FName >                             FireTriggerTags;                                  		// 0x05B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             AltFireTriggerTags;                               		// 0x05BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialImpactEffect >             ImpactEffects;                                    		// 0x05C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialImpactEffect >             AltImpactEffects;                                 		// 0x05D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultImpactEffect;                              		// 0x05E0 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       DefaultAltImpactEffect;                           		// 0x0610 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   BulletWhip;                                       		// 0x0640 (0x0004) [0x0000000000000000]              
	float                                              LastCorrectAimTime;                               		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              LastInCorrectAimTime;                             		// 0x0648 (0x0004) [0x0000000000000000]              
	float                                              CurrentCrosshairScaling;                          		// 0x064C (0x0004) [0x0000000000000000]              
	float                                              MaxFinalAimAdjustment;                            		// 0x0650 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlaySoundFromSocket : 1;                         		// 0x0654 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCurrentlyZoomed : 1;                             		// 0x0654 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIgnoreSocketPitchRotation : 1;                   		// 0x0654 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bIgnoreDownwardPitch : 1;                         		// 0x0654 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDebugTurret : 1;                                 		// 0x0654 (0x0004) [0x0000000000000000] [0x00000010] 
	class UClass*                                      VehicleClass;                                     		// 0x0658 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58582 ];

		return pClassPointer;
	};

	void EndZoom ( class AUTPlayerController* PC );
	void StartZoom ( class AUTPlayerController* PC );
	void ServerSetZoom ( unsigned long bNowZoomed );
	unsigned char GetZoomedState ( );
	void WeaponPlaySound ( class USoundCue* Sound, float NoiseLoudness );
	void NotifyVehicleUndeployed ( );
	void NotifyVehicleDeployed ( );
	float GetMaxFinalAimAdjustment ( );
	class AActor* GetTraceOwner ( );
	struct FVector InstantFireEndTrace ( struct FVector StartTrace );
	struct FVector InstantFireStartTrace ( );
	void InstantFire ( );
	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void EndFire ( unsigned char FireModeNum );
	void BeginFire ( unsigned char FireModeNum );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	void PutDownWeapon ( );
	void Activate ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	struct FMaterialImpactEffect GetImpactEffect ( class AActor* HitActor, class UPhysicalMaterial* HitMaterial, unsigned char FireModeNum );
	float GetFireInterval ( unsigned char FireModeNum );
	struct FName GetFireTriggerTag ( int BarrelIndex, int FireMode );
	bool eventIsAimCorrect ( );
	void GetFireStartLocationAndRotation ( struct FVector* StartLocation, struct FRotator* StartRotation );
	struct FVector eventGetDesiredAimPoint ( class AActor** TargetActor );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void GetCrosshairScaling ( class AHUD* HUD );
	void DrawKillIcon ( class UCanvas* Canvas, float ScreenX, float ScreenY, float HUDScaleX, float HUDScaleY );
	bool CanHitDesiredTarget ( struct FVector SocketLocation, struct FRotator SocketRotation, struct FVector DesiredAimPoint, class AActor* TargetActor, struct FVector* RealAimPoint );
};

UClass* ASGS_MechWeapon::pClassPointer = NULL;

// Class SGSOrion.SGS_MWeap_MiniGun
// 0x0078 (0x06D4 - 0x065C)
class ASGS_MWeap_MiniGun : public ASGS_MechWeapon
{
public:
	float                                              Strength;                                         		// 0x065C (0x0004) [0x0000000000000000]              
	float                                              GunSpeed;                                         		// 0x0660 (0x0004) [0x0000000000000000]              
	float                                              Heat;                                             		// 0x0664 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              HeatTimer;                                        		// 0x0668 (0x0004) [0x0000000000000000]              
	int                                                nShots;                                           		// 0x066C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                RocketsLoaded;                                    		// 0x0670 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MaxRockets;                                       		// 0x0674 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponLoadSnd;                                    		// 0x0678 (0x0004) [0x0000000000000000]              
	float                                              RechargeRocketTime;                               		// 0x067C (0x0004) [0x0000000000000000]              
	float                                              ReloadRocketTime;                                 		// 0x0680 (0x0004) [0x0000000000000000]              
	struct FRotator                                    MaxAimOffset;                                     		// 0x0684 (0x000C) [0x0000000000000000]              
	struct FRotator                                    MinAimOffset;                                     		// 0x0690 (0x000C) [0x0000000000000000]              
	float                                              RecoilKickYawMin;                                 		// 0x069C (0x0004) [0x0000000000000000]              
	float                                              RecoilKickYawMax;                                 		// 0x06A0 (0x0004) [0x0000000000000000]              
	float                                              RecoilKickPitchMin;                               		// 0x06A4 (0x0004) [0x0000000000000000]              
	float                                              RecoilKickPitchMax;                               		// 0x06A8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSandImpact;                                     		// 0x06AC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXConcreteImpact;                                 		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGlassImpact;                                    		// 0x06B4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXGrassImpact;                                    		// 0x06B8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXMetalImpact;                                    		// 0x06BC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXRockImpact;                                     		// 0x06C0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXSnowImpact;                                     		// 0x06C4 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXWoodImpact;                                     		// 0x06C8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FXFleshImpact;                                    		// 0x06CC (0x0004) [0x0000000000000000]              
	float                                              LastBulletImpactTime;                             		// 0x06D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58581 ];

		return pClassPointer;
	};

	void ServerGotoState ( struct FName S );
	void StopFire ( unsigned char FireModeNum );
	void ServerResetShots ( );
	void HandleFinishedFiring ( );
	bool ShouldRefire ( );
	void LoadRocket ( );
	class AProjectile* ProjectileFire ( );
	void SetMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void UpdateGunRotation ( float DeltaTime );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void eventCauseMuzzleFlash ( );
	void AttachMuzzleFlash ( );
	void DetachMuzzleFlash ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayFiringSound ( );
	void UpdateHUD ( );
	void WeaponPlaySound ( class USoundCue* Sound, float NoiseLoudness );
	void GetFireStartLocationAndRotation ( struct FVector* StartLocation, struct FRotator* StartRotation );
	void eventTick ( float DeltaTime );
	void StartFire ( unsigned char FireModeNum );
	void SetCurrentFireMode ( unsigned char FiringModeNum );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
};

UClass* ASGS_MWeap_MiniGun::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleWeapon
// 0x0044 (0x06A4 - 0x0660)
class ASGS_VehicleWeapon : public AUTVehicleWeapon
{
public:
	struct FRotator                                    AimOffset;                                        		// 0x0660 (0x000C) [0x0000000000000000]              
	struct FRotator                                    MaxAimOffset;                                     		// 0x066C (0x000C) [0x0000000000000000]              
	struct FRotator                                    MinAimOffset;                                     		// 0x0678 (0x000C) [0x0000000000000000]              
	struct FRotator                                    SmoothedAimOffset;                                		// 0x0684 (0x000C) [0x0000000000000000]              
	float                                              LastAimKickTime;                                  		// 0x0690 (0x0004) [0x0000000000000000]              
	float                                              RecoilKickYawMin;                                 		// 0x0694 (0x0004) [0x0000000000000000]              
	float                                              RecoilKickYawMax;                                 		// 0x0698 (0x0004) [0x0000000000000000]              
	float                                              RecoilKickPitchMin;                               		// 0x069C (0x0004) [0x0000000000000000]              
	float                                              RecoilKickPitchMax;                               		// 0x06A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58586 ];

		return pClassPointer;
	};

	void AddAimKick ( struct FRotator AimKick );
	void StartFire ( unsigned char FireModeNum );
};

UClass* ASGS_VehicleWeapon::pClassPointer = NULL;

// Class SGSOrion.SGS_VWeap_MiniGun
// 0x0010 (0x06B4 - 0x06A4)
class ASGS_VWeap_MiniGun : public ASGS_VehicleWeapon
{
public:
	float                                              Strength;                                         		// 0x06A4 (0x0004) [0x0000000000000000]              
	float                                              GunSpeed;                                         		// 0x06A8 (0x0004) [0x0000000000000000]              
	float                                              Heat;                                             		// 0x06AC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              HeatTimer;                                        		// 0x06B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58585 ];

		return pClassPointer;
	};

	void PlayFiringSound ( );
	void UpdateGunRotation ( float DeltaTime );
	void HandleFinishedFiring ( );
	void UpdateHUD ( );
	void eventTick ( float DeltaTime );
	void PlayImpactEffects ( struct FVector HitLocation );
	void DrawWeaponCrosshair ( class AHUD* HUD );
};

UClass* ASGS_VWeap_MiniGun::pClassPointer = NULL;

// Class SGSOrion.SGS_VWeap_VTOLMiniGun
// 0x0018 (0x06CC - 0x06B4)
class ASGS_VWeap_VTOLMiniGun : public ASGS_VWeap_MiniGun
{
public:
	int                                                RocketsLoaded;                                    		// 0x06B4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MaxRockets;                                       		// 0x06B8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponLoadSnd;                                    		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              RechargeRocketTime;                               		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              ReloadRocketTime;                                 		// 0x06C4 (0x0004) [0x0000000000000000]              
	int                                                nShots;                                           		// 0x06C8 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58584 ];

		return pClassPointer;
	};

	void ServerGotoState ( struct FName S );
	void StopFire ( unsigned char FireModeNum );
	void ServerResetShots ( );
	void HandleFinishedFiring ( );
	bool ShouldRefire ( );
	void FireAmmunition ( );
	void StartFire ( unsigned char FireModeNum );
	void UpdateGunRotation ( float DeltaTime );
	void SetCurrentFireMode ( unsigned char FiringModeNum );
	void PlayFiringSound ( );
	int GetAmmoCount ( );
	void LoadRocket ( );
	class AProjectile* ProjectileFire ( );
};

UClass* ASGS_VWeap_VTOLMiniGun::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxMainMenu
// 0x0018 (0x0180 - 0x0168)
class USGS_GFxMainMenu : public UGFxMoviePlayer
{
public:
	class UUIDataStore_OnlineGameSettings*             SettingsDataStore;                                		// 0x0168 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x016C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_MenuItems*                    MenuDataStore;                                    		// 0x0170 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  Root;                                             		// 0x0174 (0x0004) [0x0000000000000000]              
	class USGGfxMenu_JoinGame*                         JoinGame;                                         		// 0x0178 (0x0004) [0x0000000000000000]              
	class USGGfxMenu_DataProvider*                     MyDataProvider;                                   		// 0x017C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58753 ];

		return pClassPointer;
	};

	void OnGameModeChange ( class UGFxObject* DDGameMode, int SelectedIndex );
	void ShowGameModes ( class UGFxObject* gfxGameModeList );
	void ShowLevelNames ( class UGFxObject* LevelList );
	void OnGameCreated ( struct FName SessionName, unsigned long bWasSuccessful );
	void Create ( struct FString URL );
	void SetupGameSettings ( );
	void ValidateServerType ( );
	void join ( int SelectedIndex, struct FString IP );
	void OnRefresh ( );
	void OnQuit ( );
	void Init ( class ULocalPlayer* LocPlay );
	int GetPlayerControllerId ( int PlayerIndex );
	struct FString GetStringFromMarkup ( struct FString MarkupString );
};

UClass* USGS_GFxMainMenu::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxNotification
// 0x002C (0x0194 - 0x0168)
class USGS_GFxNotification : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  okTxt;                                            		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  noTxt;                                            		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  headerTxt;                                        		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  bodyTxt;                                          		// 0x0178 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OkPressed__Delegate;                            		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __NoPressed__Delegate;                            		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58818 ];

		return pClassPointer;
	};

	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( struct FString HeaderText, struct FString BodyText, struct FString OkText, struct FString NoText, struct FScriptDelegate OnOkPressed, struct FScriptDelegate OnNoPressed );
	bool eventPlayMenuSound ( struct FString SoundName );
	bool eventWidgetInit ( struct FString WidgetName, class UGFxObject* Widget );
	bool Start ( unsigned long StartPaused );
	void NoPressed ( );
	void OkPressed ( );
};

UClass* USGS_GFxNotification::pClassPointer = NULL;

// Class SGSOrion.SGS_GFxScoreScreen
// 0x002C (0x0194 - 0x0168)
class USGS_GFxScoreScreen : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  playersTxt;                                       		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  classTxt;                                         		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  creditsTxt;                                       		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  killsTxt;                                         		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  deathsTxt;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  pingTxt;                                          		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  assistsTxt;                                       		// 0x0184 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        PlayerEntries;                                    		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 58847 ];

		return pClassPointer;
	};

	void RemoveAttachedObject ( class UGFxObject* Obj );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool Start ( unsigned long StartPaused );
};

UClass* USGS_GFxScoreScreen::pClassPointer = NULL;

// Class SGSOrion.SGS_MusicManager
// 0x0024 (0x023C - 0x0218)
class ASGS_MusicManager : public ASGMusicManager
{
public:
	float                                              NearRadius;                                       		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentTeam;                                      		// 0x021C (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentSoundTrack;                                		// 0x0220 (0x0001) [0x0000000000000000]              
	class UAudioComponent*                             SoundTracks[ 0x6 ];                               		// 0x0224 (0x0018) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59003 ];

		return pClassPointer;
	};

	void ChangeSoundTrack ( unsigned char NewState );
	void DecideWhichTrackToPlay ( );
	void Tick ( float DeltaTime );
	void IntroFinished ( class UAudioComponent* AC );
	void StartMusic ( );
};

UClass* ASGS_MusicManager::pClassPointer = NULL;

// Class SGSOrion.SGS_HudDinoAttack
// 0x0000 (0x0AD0 - 0x0AD0)
class ASGS_HudDinoAttack : public ASGS_HUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59009 ];

		return pClassPointer;
	};

	void TextPostRender ( );
};

UClass* ASGS_HudDinoAttack::pClassPointer = NULL;

// Class SGSOrion.SGS_Inventory
// 0x0000 (0x0218 - 0x0218)
class ASGS_Inventory : public AUTInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59030 ];

		return pClassPointer;
	};

	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
};

UClass* ASGS_Inventory::pClassPointer = NULL;

// Class SGSOrion.SGS_InventoryManager
// 0x0004 (0x0204 - 0x0200)
class ASGS_InventoryManager : public AUTInventoryManager
{
public:
	int                                                LastGroup;                                        		// 0x0200 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59138 ];

		return pClassPointer;
	};

	class AWeapon* GetBestWeapon ( unsigned long bForceADifferentWeapon );
	void RemoveFromInventory ( class AInventory* ItemToRemove );
	void ClientSetLastGroup ( int G );
};

UClass* ASGS_InventoryManager::pClassPointer = NULL;

// Class SGSOrion.SGS_LockdownMessage
// 0x0038 (0x009C - 0x0064)
class USGS_LockdownMessage : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              LockdownSounds[ 0xE ];                            		// 0x0064 (0x0038) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59269 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* USGS_LockdownMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_MapMusicInfo
// 0x00C0 (0x019C - 0x00DC)
class USGS_MapMusicInfo : public UUTMapMusicInfo
{
public:
	struct FMusicArrangement                           MusicFor_Carriers;                                		// 0x00DC (0x0060) [0x0000000000000001]              ( CPF_Edit )
	struct FMusicArrangement                           MusicFor_Altairs;                                 		// 0x013C (0x0060) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 59315 ];

		return pClassPointer;
	};

};

UClass* USGS_MapMusicInfo::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_HomingRocket
// 0x0018 (0x02A4 - 0x028C)
class ASGS_Proj_HomingRocket : public AUTProj_Rocket
{
public:
	struct FVector                                     HomingTarget;                                     		// 0x028C (0x000C) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     InitialPos;                                       		// 0x0298 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60194 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
};

UClass* ASGS_Proj_HomingRocket::pClassPointer = NULL;

// Class SGSOrion.SGS_PathFollower
// 0x0000 (0x0450 - 0x0450)
class ASGS_PathFollower : public APawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60198 ];

		return pClassPointer;
	};

};

UClass* ASGS_PathFollower::pClassPointer = NULL;

// Class SGSOrion.SGS_SceneCapture2DActor
// 0x0000 (0x01D0 - 0x01D0)
class ASGS_SceneCapture2DActor : public ASceneCapture2DActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60245 ];

		return pClassPointer;
	};

};

UClass* ASGS_SceneCapture2DActor::pClassPointer = NULL;

// Class SGSOrion.SGS_PickupCash
// 0x0000 (0x03BC - 0x03BC)
class ASGS_PickupCash : public AUTItemPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60361 ];

		return pClassPointer;
	};

	void SpawnCopyFor ( class APawn* Recipient );
	void GiveTo ( class APawn* P );
	void PostBeginPlay ( );
};

UClass* ASGS_PickupCash::pClassPointer = NULL;

// Class SGSOrion.SGS_VaultActor
// 0x0008 (0x01D0 - 0x01C8)
class ASGS_VaultActor : public AActor
{
public:
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x01C8 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        VaultMesh;                                        		// 0x01CC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60410 ];

		return pClassPointer;
	};

};

UClass* ASGS_VaultActor::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle_Sceptor
// 0x0048 (0x0C54 - 0x0C0C)
class ASGS_Vehicle_Sceptor : public ASGS_Vehicle
{
public:
	float                                              JumpForceMag;                                     		// 0x0C0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxJumpZVel;                                      		// 0x0C10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpCheckTraceDist;                               		// 0x0C14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpDelay;                                        		// 0x0C18 (0x0004) [0x0000000000000000]              
	float                                              LastJumpTime;                                     		// 0x0C1C (0x0004) [0x0000000000000000]              
	float                                              DuckForceMag;                                     		// 0x0C20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPressingAltFire : 1;                             		// 0x0C24 (0x0004) [0x0000000000000000] [0x00000001] 
	class USoundCue*                                   JumpSound;                                        		// 0x0C28 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DuckSound;                                        		// 0x0C2C (0x0004) [0x0000000000000000]              
	float                                              BladeBlur;                                        		// 0x0C30 (0x0004) [0x0000000000000000]              
	float                                              DesiredBladeBlur;                                 		// 0x0C34 (0x0004) [0x0000000000000000]              
	int                                                FanEffectIndex;                                   		// 0x0C38 (0x0004) [0x0000000000000000]              
	struct FName                                       FanEffectParameterName;                           		// 0x0C3C (0x0008) [0x0000000000000000]              
	struct FName                                       FlameJetEffectParameterName;                      		// 0x0C44 (0x0008) [0x0000000000000000]              
	float                                              FlameJetValue;                                    		// 0x0C4C (0x0004) [0x0000000000000000]              
	float                                              DesiredFlameJetValue;                             		// 0x0C50 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60754 ];

		return pClassPointer;
	};

	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void BlowupVehicle ( );
	void DrivingStatusChanged ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SetVehicleEffectParms ( struct FName TriggerName, class UParticleSystemComponent* PSC );
	void eventMantaDuckEffect ( );
	void eventMantaJumpEffect ( );
	void InitializeEffects ( );
	bool RecommendCharge ( class AUTBot* B, class APawn* Enemy );
	bool TooCloseToAttack ( class AActor* Other );
	bool ShouldClamp ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	float GetChargePower ( );
	void eventReplicatedEvent ( struct FName VarName );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void IncomingMissile ( class AProjectile* P );
	bool Dodge ( unsigned char DoubleClickMove );
	unsigned char ChooseFireMode ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	bool OverrideEndFire ( unsigned char FireModeNum );
	bool OverrideBeginFire ( unsigned char FireModeNum );
	bool DriverEnter ( class APawn* P );
	bool CanBeBaseForPawn ( class APawn* aPawn );
	void eventTick ( float DeltaSeconds );
};

UClass* ASGS_Vehicle_Sceptor::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle_Parasite
// 0x0018 (0x0C24 - 0x0C0C)
class ASGS_Vehicle_Parasite : public ASGS_Vehicle
{
public:
	unsigned long                                      bMechMode : 1;                                    		// 0x0C0C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class USkeletalMeshComponent*                      HoverTankMesh;                                    		// 0x0C10 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      MechMesh;                                         		// 0x0C14 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkelControlLookAt*                          ArmsController;                                   		// 0x0C18 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          UpperBodyController;                              		// 0x0C1C (0x0004) [0x0000000000000000]              
	class USkelControlSingleBone*                      UpperBodyRotation;                                		// 0x0C20 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60934 ];

		return pClassPointer;
	};

	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void UpdateRotation ( );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	void ServerTransformation ( );
	void ToggleMechMode ( );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	void eventReplicatedEvent ( struct FName VarName );
	void PostBeginPlay ( );
};

UClass* ASGS_Vehicle_Parasite::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_EMPGrenade
// 0x0000 (0x02A4 - 0x02A4)
class ASGS_Proj_EMPGrenade : public ASGProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61185 ];

		return pClassPointer;
	};

	void CustomExplode ( struct FVector HitLocation, struct FVector HitNormal );
	bool HurtRadius ( float DamageAmount, float InDamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
};

UClass* ASGS_Proj_EMPGrenade::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_GrenadeCAR
// 0x0000 (0x02A4 - 0x02A4)
class ASGS_Proj_GrenadeCAR : public ASGProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61213 ];

		return pClassPointer;
	};

	bool HurtRadius ( float BaseDamage, float InDamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	void CustomExplode ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
};

UClass* ASGS_Proj_GrenadeCAR::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_GrenadeALT
// 0x0000 (0x02A4 - 0x02A4)
class ASGS_Proj_GrenadeALT : public ASGS_Proj_GrenadeCAR
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61243 ];

		return pClassPointer;
	};

};

UClass* ASGS_Proj_GrenadeALT::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_Rocket
// 0x0000 (0x028C - 0x028C)
class ASGS_Proj_Rocket : public AUTProj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61276 ];

		return pClassPointer;
	};

};

UClass* ASGS_Proj_Rocket::pClassPointer = NULL;

// Class SGSOrion.SGS_Proj_SmokeGrenade
// 0x0000 (0x02A4 - 0x02A4)
class ASGS_Proj_SmokeGrenade : public ASGProj_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61279 ];

		return pClassPointer;
	};

	void CustomExplode ( struct FVector HitLocation, struct FVector HitNormal );
	void SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion );
};

UClass* ASGS_Proj_SmokeGrenade::pClassPointer = NULL;

// Class SGSOrion.SGS_Scout
// 0x0000 (0x04F0 - 0x04F0)
class ASGS_Scout : public AUTScout
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 61978 ];

		return pClassPointer;
	};

};

UClass* ASGS_Scout::pClassPointer = NULL;

// Class SGSOrion.SGS_TimerMessage
// 0x000C (0x007C - 0x0070)
class USGS_TimerMessage : public UUTTimerMessage
{
public:
	TArray< struct FString >                           AnnouncementTexts;                                		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62249 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_TimerMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_Vehicle_Cobra
// 0x0038 (0x0C44 - 0x0C0C)
class ASGS_Vehicle_Cobra : public ASGS_Vehicle
{
public:
	class UMaterialInstanceConstant*                   TreadPannerLeft;                                  		// 0x0C0C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   TreadPannerRight;                                 		// 0x0C10 (0x0004) [0x0000000000000000]              
	float                                              TreadPanLeft;                                     		// 0x0C14 (0x0004) [0x0000000000000000]              
	float                                              TreadPanRight;                                    		// 0x0C18 (0x0004) [0x0000000000000000]              
	struct FName                                       TreadPannerParameterName;                         		// 0x0C1C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TreadSpeedRatioLinear;                            		// 0x0C24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TreadSpeedRatioTurning;                           		// 0x0C28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRobotMode : 1;                                   		// 0x0C2C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              LastViewDifRAD;                                   		// 0x0C30 (0x0004) [0x0000000000000000]              
	class UAnimNodePlayCustomAnim*                     FullBodyAnim;                                     		// 0x0C34 (0x0004) [0x0000000000000000]              
	float                                              ViewYaw;                                          		// 0x0C38 (0x0004) [0x0000000000000000]              
	float                                              LastDriverViewYaw;                                		// 0x0C3C (0x0004) [0x0000000000000000]              
	float                                              LastViewYawDif;                                   		// 0x0C40 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62276 ];

		return pClassPointer;
	};

	void SetInputs ( float InForward, float InStrafe, float InUp );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void TriggerVehicleEffect ( struct FName EventTag );
	void CreateVehicleEffect ( int EffectIndex );
	void eventGetBarrelLocationAndRotation ( int SeatIndex, struct FVector* SocketLocation, struct FRotator* SocketRotation );
	void PanTread ( class UMaterialInstanceConstant* TreadPanner, int Side, float DeltaTime, float* TreadPan );
	void PanTreads ( float DeltaTime );
	void SetUpTreads ( );
	void Tick ( float DeltaTime );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void EndAnim_RobotToTank ( );
	void EndAnim_TankToRobot ( );
	void Update_RobotMode ( );
	void Server_SetRobotMode ( );
	void ToggleRobotMode ( );
	void DriverLeft ( );
	void PostBeginPlay ( );
	void DisplayWheelsDebug ( class AHUD* HUD, float YL );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void GetSVehicleDebug ( TArray< struct FString >* DebugInfo );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASGS_Vehicle_Cobra::pClassPointer = NULL;

// Class SGSOrion.SGS_VWeap_CobraRocket
// 0x0020 (0x06C4 - 0x06A4)
class ASGS_VWeap_CobraRocket : public ASGS_VehicleWeapon
{
public:
	int                                                RocketsLoaded;                                    		// 0x06A4 (0x0004) [0x0000000000000000]              
	int                                                MaxRockets;                                       		// 0x06A8 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   WeaponLoadSnd;                                    		// 0x06AC (0x0004) [0x0000000000000000]              
	float                                              RechargeRocketTime;                               		// 0x06B0 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TracerTemplate;                                   		// 0x06B4 (0x0004) [0x0000000000000000]              
	float                                              HowOftenToShowBulletTracer;                       		// 0x06B8 (0x0004) [0x0000000000000000]              
	float                                              ForceSpawnTracerIfTime;                           		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              LastTracerTime;                                   		// 0x06C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62398 ];

		return pClassPointer;
	};

	void SetCurrentFireMode ( unsigned char FiringModeNum );
	void PlayFiringSound ( );
	int GetAmmoCount ( );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void LoadRocket ( );
	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	void SpawnTracer ( struct FVector EffectLocation, struct FVector HitLocation );
};

UClass* ASGS_VWeap_CobraRocket::pClassPointer = NULL;

// Class SGSOrion.SGS_VWeap_ParasiteBlast
// 0x0000 (0x0660 - 0x0660)
class ASGS_VWeap_ParasiteBlast : public AUTVehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62699 ];

		return pClassPointer;
	};

};

UClass* ASGS_VWeap_ParasiteBlast::pClassPointer = NULL;

// Class SGSOrion.SGS_VWeap_GladiatorTurret
// 0x0000 (0x0678 - 0x0678)
class ASGS_VWeap_GladiatorTurret : public AUTVWeap_CicadaTurret
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62802 ];

		return pClassPointer;
	};

};

UClass* ASGS_VWeap_GladiatorTurret::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory_Cobra
// 0x0004 (0x02F0 - 0x02EC)
class ASGS_VehicleFactory_Cobra : public ASGS_VehicleFactory
{
public:
	class ASGS_MechPawn*                               ChildMech;                                        		// 0x02EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63037 ];

		return pClassPointer;
	};

	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
};

UClass* ASGS_VehicleFactory_Cobra::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory_Gladiator
// 0x0000 (0x02EC - 0x02EC)
class ASGS_VehicleFactory_Gladiator : public ASGS_VehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63051 ];

		return pClassPointer;
	};

	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
};

UClass* ASGS_VehicleFactory_Gladiator::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory_Griffin
// 0x0000 (0x02EC - 0x02EC)
class ASGS_VehicleFactory_Griffin : public ASGS_VehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63060 ];

		return pClassPointer;
	};

	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
};

UClass* ASGS_VehicleFactory_Griffin::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory_Parasite
// 0x0000 (0x02E4 - 0x02E4)
class ASGS_VehicleFactory_Parasite : public AUTVehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63069 ];

		return pClassPointer;
	};

	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
};

UClass* ASGS_VehicleFactory_Parasite::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory_Sceptor
// 0x0000 (0x02E4 - 0x02E4)
class ASGS_VehicleFactory_Sceptor : public AUTVehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63078 ];

		return pClassPointer;
	};

	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
};

UClass* ASGS_VehicleFactory_Sceptor::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleFactory_VTOL
// 0x0000 (0x02EC - 0x02EC)
class ASGS_VehicleFactory_VTOL : public ASGS_VehicleFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63087 ];

		return pClassPointer;
	};

	void VehicleDestroyed ( class AUTVehicle* V );
	void VehicleTaken ( );
};

UClass* ASGS_VehicleFactory_VTOL::pClassPointer = NULL;

// Class SGSOrion.SGS_VehicleKillMessage
// 0x0080 (0x00E4 - 0x0064)
class USGS_VehicleKillMessage : public UUTLocalMessage
{
public:
	struct FString                                     KillString[ 0x8 ];                                		// 0x0064 (0x0060) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              KillSounds[ 0x8 ];                                		// 0x00C4 (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63096 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USGS_VehicleKillMessage::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellPistol_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_CellPistol_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63500 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellPistol_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellRifle_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_CellRifle_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63515 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellRifle_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellSMG_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_CellSMG_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63526 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellSMG_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CellSniper_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_CellSniper_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63537 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CellSniper_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CV10_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_CV10_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63548 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_CV10_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_CV10_Silenced3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_CV10_Silenced3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63565 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ASGS_Weap_CV10_Silenced3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_GrenadeCAR_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_GrenadeCAR_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63588 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_GrenadeCAR_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_EMPGrenade_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_EMPGrenade_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63591 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_EMPGrenade_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_EnergyCarbine_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_EnergyCarbine_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63656 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_EnergyCarbine_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_Flag
// 0x0000 (0x0808 - 0x0808)
class ASGS_Weap_Flag : public ASGWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63668 ];

		return pClassPointer;
	};

	void CustomFire ( );
	void DoDamage ( );
	void PutDownWeapon ( );
	void UpdateAimSpread ( float DeltaTime );
	void ReloadAmmo ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
};

UClass* ASGS_Weap_Flag::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_Flag_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_Flag_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63689 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_Flag_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_FNC30_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_FNC30_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63697 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_FNC30_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_GrenadeALT_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_GrenadeALT_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63726 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_GrenadeALT_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_LaserRifle_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_LaserRifle_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63755 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_LaserRifle_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_M40_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_M40_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63769 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_M40_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_MedicGun_3D
// 0x001C (0x0318 - 0x02FC)
class ASGS_Weap_MedicGun_3D : public ASGWeaponAttachment
{
public:
	class UParticleSystem*                             LinkBeamTemplate_HealingFriend;                   		// 0x02FC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             LinkBeamTemplate_HealingSelf;                     		// 0x0300 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             LinkBeamTemplate_Muzzle;                          		// 0x0304 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    BeamEffect;                                       		// 0x0308 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    MuzzleEffect;                                     		// 0x030C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bFirstPerson : 1;                                 		// 0x0310 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPointLightComponent*                        MedicFlashLight;                                  		// 0x0314 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63850 ];

		return pClassPointer;
	};

	void PlayImpactEffects ( struct FVector HitLocation );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	void StopMuzzleFlash ( );
};

UClass* ASGS_Weap_MedicGun_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_MedicGunAlt3D
// 0x0000 (0x0318 - 0x0318)
class ASGS_Weap_MedicGunAlt3D : public ASGS_Weap_MedicGun_3D
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63883 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_MedicGunAlt3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_MX4_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_MX4_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 63898 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_MX4_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_OSOR_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_OSOR_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64019 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_OSOR_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaLMG_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_PlasmaLMG_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64028 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaLMG_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaPistol_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_PlasmaPistol_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64039 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaPistol_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_TREK12_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_TREK12_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64067 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_TREK12_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaShotgun_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_PlasmaShotgun_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64081 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaShotgun_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_PlasmaSMG_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_PlasmaSMG_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64092 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_PlasmaSMG_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_RNC44_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_RNC44_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64099 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_RNC44_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_RocketLauncher_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_RocketLauncher_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64354 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_RocketLauncher_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_SmokeGrenade_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_SmokeGrenade_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64376 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_SmokeGrenade_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_TREK22_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_TREK22_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64386 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_TREK22_3D::pClassPointer = NULL;

// Class SGSOrion.SGS_Weap_TREK79_3D
// 0x0000 (0x02FC - 0x02FC)
class ASGS_Weap_TREK79_3D : public ASGWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64402 ];

		return pClassPointer;
	};

};

UClass* ASGS_Weap_TREK79_3D::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif